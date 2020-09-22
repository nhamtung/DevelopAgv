// Generated by gencpp from file sick_lidar_localization/SickLocTimeSyncSrv.msg
// DO NOT EDIT!


#ifndef SICK_LIDAR_LOCALIZATION_MESSAGE_SICKLOCTIMESYNCSRV_H
#define SICK_LIDAR_LOCALIZATION_MESSAGE_SICKLOCTIMESYNCSRV_H

#include <ros/service_traits.h>


#include <sick_lidar_localization/SickLocTimeSyncSrvRequest.h>
#include <sick_lidar_localization/SickLocTimeSyncSrvResponse.h>


namespace sick_lidar_localization
{

struct SickLocTimeSyncSrv
{

typedef SickLocTimeSyncSrvRequest Request;
typedef SickLocTimeSyncSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SickLocTimeSyncSrv
} // namespace sick_lidar_localization


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::sick_lidar_localization::SickLocTimeSyncSrv > {
  static const char* value()
  {
    return "216ce2f222e12099ae0a51b3bd3cad26";
  }

  static const char* value(const ::sick_lidar_localization::SickLocTimeSyncSrv&) { return value(); }
};

template<>
struct DataType< ::sick_lidar_localization::SickLocTimeSyncSrv > {
  static const char* value()
  {
    return "sick_lidar_localization/SickLocTimeSyncSrv";
  }

  static const char* value(const ::sick_lidar_localization::SickLocTimeSyncSrv&) { return value(); }
};


// service_traits::MD5Sum< ::sick_lidar_localization::SickLocTimeSyncSrvRequest> should match
// service_traits::MD5Sum< ::sick_lidar_localization::SickLocTimeSyncSrv >
template<>
struct MD5Sum< ::sick_lidar_localization::SickLocTimeSyncSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sick_lidar_localization::SickLocTimeSyncSrv >::value();
  }
  static const char* value(const ::sick_lidar_localization::SickLocTimeSyncSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_lidar_localization::SickLocTimeSyncSrvRequest> should match
// service_traits::DataType< ::sick_lidar_localization::SickLocTimeSyncSrv >
template<>
struct DataType< ::sick_lidar_localization::SickLocTimeSyncSrvRequest>
{
  static const char* value()
  {
    return DataType< ::sick_lidar_localization::SickLocTimeSyncSrv >::value();
  }
  static const char* value(const ::sick_lidar_localization::SickLocTimeSyncSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sick_lidar_localization::SickLocTimeSyncSrvResponse> should match
// service_traits::MD5Sum< ::sick_lidar_localization::SickLocTimeSyncSrv >
template<>
struct MD5Sum< ::sick_lidar_localization::SickLocTimeSyncSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sick_lidar_localization::SickLocTimeSyncSrv >::value();
  }
  static const char* value(const ::sick_lidar_localization::SickLocTimeSyncSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_lidar_localization::SickLocTimeSyncSrvResponse> should match
// service_traits::DataType< ::sick_lidar_localization::SickLocTimeSyncSrv >
template<>
struct DataType< ::sick_lidar_localization::SickLocTimeSyncSrvResponse>
{
  static const char* value()
  {
    return DataType< ::sick_lidar_localization::SickLocTimeSyncSrv >::value();
  }
  static const char* value(const ::sick_lidar_localization::SickLocTimeSyncSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SICK_LIDAR_LOCALIZATION_MESSAGE_SICKLOCTIMESYNCSRV_H
