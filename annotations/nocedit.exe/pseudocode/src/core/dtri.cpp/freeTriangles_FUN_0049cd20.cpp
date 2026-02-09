// Name: core_dtri.cpp_freeTriangles_FUN_0049cd20
// Address: 0049cd20
// Address Range: [[0049cd20, 0049cd34]]
// Convention: __cdecl
// Signature: CDemonTriangle * __cdecl core_dtri_cpp_freeTriangles_FUN_0049cd20(CDemonTriangle *objs)

#include "nocturne.h"

CDemonTriangle * __cdecl core_dtri_cpp_freeTriangles_FUN_0049cd20(CDemonTriangle *objs)

{
  CDemonTriangle *pCVar1;
  
  pCVar1 = (CDemonTriangle *)__arrfini(objs,8,&g_CDemonTriangleTypeInfo);
  return pCVar1;
}
