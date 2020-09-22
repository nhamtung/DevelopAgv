// Generated by gencpp from file sick_lidar_localization/SickLocColaTelegramSrvResponse.msg
// DO NOT EDIT!


#ifndef SICK_LIDAR_LOCALIZATION_MESSAGE_SICKLOCCOLATELEGRAMSRVRESPONSE_H
#define SICK_LIDAR_LOCALIZATION_MESSAGE_SICKLOCCOLATELEGRAMSRVRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace sick_lidar_localization
{
template <class ContainerAllocator>
struct SickLocColaTelegramSrvResponse_
{
  typedef SickLocColaTelegramSrvResponse_<ContainerAllocator> Type;

  SickLocColaTelegramSrvResponse_()
    : cola_ascii_response()
    , send_timestamp_sec(0)
    , send_timestamp_nsec(0)
    , receive_timestamp_sec(0)
    , receive_timestamp_nsec(0)  {
    }
  SickLocColaTelegramSrvResponse_(const ContainerAllocator& _alloc)
    : cola_ascii_response(_alloc)
    , send_timestamp_sec(0)
    , send_timestamp_nsec(0)
    , receive_timestamp_sec(0)
    , receive_timestamp_nsec(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _cola_ascii_response_type;
  _cola_ascii_response_type cola_ascii_response;

   typedef uint32_t _send_timestamp_sec_type;
  _send_timestamp_sec_type send_timestamp_sec;

   typedef uint32_t _send_timestamp_nsec_type;
  _send_timestamp_nsec_type send_timestamp_nsec;

   typedef uint32_t _receive_timestamp_sec_type;
  _receive_timestamp_sec_type receive_timestamp_sec;

   typedef uint32_t _receive_timestamp_nsec_type;
  _receive_timestamp_nsec_type receive_timestamp_nsec;





  typedef boost::shared_ptr< ::sick_lidar_localization::SickLocColaTelegramSrvResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sick_lidar_localization::SickLocColaTelegramSrvResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SickLocColaTelegramSrvResponse_

typedef ::sick_lidar_localization::SickLocColaTelegramSrvResponse_<std::allocator<void> > SickLocColaTelegramSrvResponse;

typedef boost::shared_ptr< ::sick_lidar_localization::SickLocColaTelegramSrvResponse > SickLocColaTelegramSrvResponsePtr;
typedef boost::shared_ptr< ::sick_lidar_localization::SickLocColaTelegramSrvResponse const> SickLocColaTelegramSrvResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sick_lidar_localization::SickLocColaTelegramSrvResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sick_lidar_localization::SickLocColaTelegramSrvResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sick_lidar_localization::SickLocColaTelegramSrvResponse_<ContainerAllocator1> & lhs, const ::sick_lidar_localization::SickLocColaTelegramSrvResponse_<ContainerAllocator2> & rhs)
{
  return lhs.cola_ascii_response == rhs.cola_ascii_response &&
    lhs.send_timestamp_sec == rhs.send_timestamp_sec &&
    lhs.send_timestamp_nsec == rhs.send_timestamp_nsec &&
    lhs.receive_timestamp_sec == rhs.receive_timestamp_sec &&
    lhs.receive_timestamp_nsec == rhs.receive_timestamp_nsec;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sick_lidar_localization::SickLocColaTelegramSrvResponse_<ContainerAllocator1> & lhs, const ::sick_lidar_localization::SickLocColaTelegramSrvResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sick_lidar_localization

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sick_lidar_localization::SickLocColaTelegramSrvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sick_lidar_localization::SickLocColaTelegramSrvResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_lidar_localization::SickLocColaTelegramSrvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_lidar_localization::SickLocColaTelegramSrvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_lidar_localization::SickLocColaTelegramSrvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_lidar_localization::SickLocColaTelegramSrvResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sick_lidar_localization::SickLocColaTelegramSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4a966f9c77cc89ffe63caaa088f93373";
  }

  static const char* value(const ::sick_lidar_localization::SickLocColaTelegramSrvResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4a966f9c77cc89ffULL;
  static const uint64_t static_value2 = 0xe63caaa088f93373ULL;
};

template<class ContainerAllocator>
struct DataType< ::sick_lidar_localization::SickLocColaTelegramSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sick_lidar_localization/SickLocColaTelegramSrvResponse";
  }

  static const char* value(const ::sick_lidar_localization::SickLocColaTelegramSrvResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sick_lidar_localization::SickLocColaTelegramSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"#\n"
"# Response (output)\n"
"#\n"
"\n"
"string cola_ascii_response       # Response from the localization controller (empty in case of connection failures, communication errors or timeouts)\n"
"uint32 send_timestamp_sec        # Send timestamp (seconds part of ros timestamp immediately before tcp send)\n"
"uint32 send_timestamp_nsec       # Send timestamp (nano seconds part of ros timestamp immediately before tcp send)\n"
"uint32 receive_timestamp_sec     # Receive timestamp (seconds part of ros timestamp immediately after first response byte received)\n"
"uint32 receive_timestamp_nsec    # Receive timestamp (nano seconds part of ros timestamp immediately after first response byte received)\n"
"\n"
;
  }

  static const char* value(const ::sick_lidar_localization::SickLocColaTelegramSrvResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sick_lidar_localization::SickLocColaTelegramSrvResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cola_ascii_response);
      stream.next(m.send_timestamp_sec);
      stream.next(m.send_timestamp_nsec);
      stream.next(m.receive_timestamp_sec);
      stream.next(m.receive_timestamp_nsec);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SickLocColaTelegramSrvResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sick_lidar_localization::SickLocColaTelegramSrvResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sick_lidar_localization::SickLocColaTelegramSrvResponse_<ContainerAllocator>& v)
  {
    s << indent << "cola_ascii_response: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.cola_ascii_response);
    s << indent << "send_timestamp_sec: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.send_timestamp_sec);
    s << indent << "send_timestamp_nsec: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.send_timestamp_nsec);
    s << indent << "receive_timestamp_sec: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.receive_timestamp_sec);
    s << indent << "receive_timestamp_nsec: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.receive_timestamp_nsec);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SICK_LIDAR_LOCALIZATION_MESSAGE_SICKLOCCOLATELEGRAMSRVRESPONSE_H
