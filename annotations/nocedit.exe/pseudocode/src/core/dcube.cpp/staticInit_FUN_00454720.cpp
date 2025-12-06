// Name: core_dcube.cpp_staticInit_FUN_00454720
// Address: 00454720
// Address Range: [[00454720, 004547ac]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_staticInit_FUN_00454720(void)

#include "nocturne.h"

void __cdecl core_dcube_cpp_staticInit_FUN_00454720(void)

{
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_CubeInputTriangleBuffer,0x10,&g_CVectorTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_ClipStageMaxYBuffer,0x10,&g_CVectorTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_ClipStageMinYBuffer,0x10,&g_CVectorTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_ClipStageMaxXBuffer,0x10,&g_CVectorTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_ClipStageMinXBuffer,0x10,&g_CVectorTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_ClipStageMinZBuffer,0x10,&g_CVectorTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_CubeClippedTriangleBuffer,0x10,&g_CVectorTypeInfo);
  return;
}
