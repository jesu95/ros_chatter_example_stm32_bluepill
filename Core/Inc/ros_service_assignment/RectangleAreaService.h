#ifndef _ROS_SERVICE_RectangleAreaService_h
#define _ROS_SERVICE_RectangleAreaService_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace ros_service_assignment
{

static const char RECTANGLEAREASERVICE[] = "ros_service_assignment/RectangleAreaService";

  class RectangleAreaServiceRequest : public ros::Msg
  {
    public:
      typedef float _b_type;
      _b_type b;
      typedef float _h_type;
      _h_type h;

    RectangleAreaServiceRequest():
      b(0),
      h(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_b;
      u_b.real = this->b;
      *(outbuffer + offset + 0) = (u_b.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_b.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_b.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_b.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->b);
      union {
        float real;
        uint32_t base;
      } u_h;
      u_h.real = this->h;
      *(outbuffer + offset + 0) = (u_h.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_h.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_h.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_h.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->h);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_b;
      u_b.base = 0;
      u_b.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_b.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_b.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_b.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->b = u_b.real;
      offset += sizeof(this->b);
      union {
        float real;
        uint32_t base;
      } u_h;
      u_h.base = 0;
      u_h.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_h.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_h.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_h.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->h = u_h.real;
      offset += sizeof(this->h);
     return offset;
    }

    virtual const char * getType() override { return RECTANGLEAREASERVICE; };
    virtual const char * getMD5() override { return "4cee2aac8f563e1e722cd6a550d1b599"; };

  };

  class RectangleAreaServiceResponse : public ros::Msg
  {
    public:
      typedef float _area_type;
      _area_type area;

    RectangleAreaServiceResponse():
      area(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_area;
      u_area.real = this->area;
      *(outbuffer + offset + 0) = (u_area.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_area.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_area.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_area.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->area);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_area;
      u_area.base = 0;
      u_area.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_area.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_area.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_area.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->area = u_area.real;
      offset += sizeof(this->area);
     return offset;
    }

    virtual const char * getType() override { return RECTANGLEAREASERVICE; };
    virtual const char * getMD5() override { return "ba46cd039de682077b3eaa09c3500c5c"; };

  };

  class RectangleAreaService {
    public:
    typedef RectangleAreaServiceRequest Request;
    typedef RectangleAreaServiceResponse Response;
  };

}
#endif
