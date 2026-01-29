// Name: core_dmodel.cpp_staticInit_FUN_00476c50
// Address: 00476c50
// Address Range: [[00476c50, 00476c74]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_staticInit_FUN_00476c50(void)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_staticInit_FUN_00476c50(void)

{
  __arrinit(g_CKeyFramedModelPool,0x100,&g_CKeyFramedModelTypeInfo);
  _atexit(&g_CKeyFramedModelPoolDestructorNode);
  return;
}
