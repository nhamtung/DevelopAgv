// Generated by gencpp from file map_msgs/GetPointMapRequest.msg
// DO NOT EDIT!


#ifndef MAP_MSGS_MESSAGE_GETPOINTMAPREQUEST_H
#define MAP_MSGS_MESSAGE_GETPOINTMAPREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace map_msgs
{
template <class ContainerAllocator>
struct GetPointMapRequest_
{
  typedef GetPointMapRequest_<ContainerAllocator> Type;

  GetPointMapRequest_()
    {
    }
  GetPointMapRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::map_msgs::GetPointMapRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::map_msgs::GetPointMapRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetPointMapRequest_

typedef ::map_msgs::GetPointMapRequest_<std::allocator<void> > GetPointMapRequest;

typedef boost::shared_ptr< ::map_msgs::GetPointMapRequest > GetPointMapRequestPtr;
typedef boost::shared_ptr< ::map_msgs::GetPointMapRequest const> GetPointMapRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::map_msgs::GetPointMapRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::map_msgs::GetPointMapRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace map_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::map_msgs::GetPointMapRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::map_msgs::GetPointMapRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::map_msgs::GetPointMapRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::map_msgs::GetPointMapRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_msgs::GetPointMapRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_msgs::GetPointMapRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::map_msgs::GetPointMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::map_msgs::GetPointMapRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::map_msgs::GetPointMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "map_msgs/GetPointMapRequest";
  }

  static const char* value(const ::map_msgs::GetPointMapRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::map_msgs::GetPointMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Get the map as a sensor_msgs/PointCloud2 \n"
;
  }

  static const char* value(const ::map_msgs::GetPointMapRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::map_msgs::GetPointMapRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetPointMapRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::map_msgs::GetPointMapRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::map_msgs::GetPointMapRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // MAP_MSGS_MESSAGE_GETPOINTMAPREQUEST_H
