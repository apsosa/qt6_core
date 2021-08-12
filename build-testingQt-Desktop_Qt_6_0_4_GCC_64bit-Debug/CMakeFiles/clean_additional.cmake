# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/testingQt_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/testingQt_autogen.dir/ParseCache.txt"
  "testingQt_autogen"
  )
endif()
