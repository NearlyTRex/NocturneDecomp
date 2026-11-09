// Name: core_dmodel.cpp_staticInit_FUN_00460430
// Address: 00460430
// Address Range: [[00460430, 00460454]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_staticInit_FUN_00460430(void)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_staticInit_FUN_00460430(void)

{
  __arrinit(g_CKeyFramedModelPool,0x100,&g_CKeyFramedModelTypeInfo);
  _atexit(&g_CKeyFramedModelPoolDestructorNode);
  return;
}
