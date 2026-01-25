// Name: core_manpuz.cpp_freeTriangles_FUN_0050ba70
// Address: 0050ba70
// Address Range: [[0050ba70, 0050ba84]]
// Convention: __cdecl
// Signature: void core_manpuz.cpp_freeTriangles_FUN_0050ba70(CDemonTriangle * * objs)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_freeTriangles_FUN_0050ba70(CDemonTriangle **objs)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(objs,2,&g_CDemonTriangleTypeInfo);
  return;
}
