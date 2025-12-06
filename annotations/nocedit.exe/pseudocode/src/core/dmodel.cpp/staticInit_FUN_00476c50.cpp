// Name: core_dmodel.cpp_staticInit_FUN_00476c50
// Address: 00476c50
// Address Range: [[00476c50, 00476c74]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_staticInit_FUN_00476c50(void)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_staticInit_FUN_00476c50(void)

{
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_CKeyFramedModelPool,0x100,&g_CKeyFramedModelTypeInfo);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CKeyFramedModelPoolDestructorNode);
  return;
}
