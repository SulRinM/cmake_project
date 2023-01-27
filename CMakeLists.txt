cmake_minimum_required(VERSION 3.20.0)

project(cmake_project)
set(SRC_DIR src)
set(QSRC_DIR src/Quadrilateral)
set(TSRC_DIR src/Triangle)

add_executable(
  cmake_project
  ${SRC_DIR}/main.cpp
  ${QSRC_DIR}/Parallelogram.cpp
  ${QSRC_DIR}/Quadrilateral.cpp
  ${TSRC_DIR}/EQtriangle.cpp
  ${TSRC_DIR}/IStriangle.cpp
  ${TSRC_DIR}/RTriangle.cpp
  ${TSRC_DIR}/Triangle.cpp

  ${SRC_DIR}/main.h
  ${QSRC_DIR}/Parallelogram.h
  ${QSRC_DIR}/Quadrilateral.h
  ${TSRC_DIR}/EQtriangle.h
  ${TSRC_DIR}/IStriangle.h
  ${TSRC_DIR}/RTriangle.h
  ${TSRC_DIR}/Triangle.h
)

