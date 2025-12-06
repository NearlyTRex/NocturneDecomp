// Name: core_dtri.cpp_freeTriangles_FUN_0049cd20
// Address: 0049cd20
// Address Range: [[0049cd20, 0049cd34]]
// Convention: __cdecl
// Signature: void core_dtri.cpp_freeTriangles_FUN_0049cd20(CDemonTriangle * * array)

#include "nocturne.h"

void __cdecl core_dtri_cpp_freeTriangles_FUN_0049cd20(CDemonTriangle **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,8,&g_CDemonTriangleTypeInfo);
  return;
}
