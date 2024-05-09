cmake_minimum_required(VERSION "3.25.1")

project("Calculator")

add_executable("${PROJECT_NAME}" "CXX-Calculator.cpp")  

install(TARGETS "${PROJECT_NAME}" DESTINATION bin)  #${CMAKE_INSTALL_PREFIX}/bin
install(FILES "CXX-Calculator.cpp" DESTINATION src)            #${CMAKE_INSTALL_PREFIX}/src
