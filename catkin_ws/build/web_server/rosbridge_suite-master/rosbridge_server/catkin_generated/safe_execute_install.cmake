execute_process(COMMAND "/home/nhamtung/TungNV/DevelopAgv/catkin_ws/build/web_server/rosbridge_suite-master/rosbridge_server/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/nhamtung/TungNV/DevelopAgv/catkin_ws/build/web_server/rosbridge_suite-master/rosbridge_server/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
