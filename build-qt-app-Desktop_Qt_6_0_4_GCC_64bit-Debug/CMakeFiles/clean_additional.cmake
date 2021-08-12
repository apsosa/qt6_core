# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/qt-app_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/qt-app_autogen.dir/ParseCache.txt"
  "qt-app_autogen"
  )
endif()
