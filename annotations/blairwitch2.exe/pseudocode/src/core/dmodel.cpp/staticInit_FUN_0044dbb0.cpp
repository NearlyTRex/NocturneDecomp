// Name: core_dmodel.cpp_staticInit_FUN_0044dbb0
// Address: 0044dbb0
// Address Range: [[0044dbb0, 0044dbd4]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_staticInit_FUN_0044dbb0(void)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_staticInit_FUN_0044dbb0(void)

{
  __arrinit(g_CKeyFramedModelPool,0x100,&g_CKeyFramedModelTypeInfo);
  _atexit(&g_CKeyFramedModelPoolDestructorNode);
  return;
}
