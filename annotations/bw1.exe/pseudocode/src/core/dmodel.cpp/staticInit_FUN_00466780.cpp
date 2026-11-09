// Name: core_dmodel.cpp_staticInit_FUN_00466780
// Address: 00466780
// Address Range: [[00466780, 004667a4]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_staticInit_FUN_00466780(void)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_staticInit_FUN_00466780(void)

{
  __arrinit(g_CKeyFramedModelPool,0x100,&g_CKeyFramedModelTypeInfo);
  _atexit(&g_CKeyFramedModelPoolDestructorNode);
  return;
}
