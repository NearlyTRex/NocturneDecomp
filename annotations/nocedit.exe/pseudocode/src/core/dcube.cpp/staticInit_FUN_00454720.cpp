// Name: core_dcube.cpp_staticInit_FUN_00454720
// Address: 00454720
// Address Range: [[00454720, 004547ac]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_staticInit_FUN_00454720(void)

#include "nocturne.h"

void __cdecl core_dcube_cpp_staticInit_FUN_00454720(void)

{
  __arrinit(g_CubeInputTriangleBuffer,0x10,&g_CVectorTypeInfo);
  __arrinit(g_ClipStageMaxYBuffer,0x10,&g_CVectorTypeInfo);
  __arrinit(g_ClipStageMinYBuffer,0x10,&g_CVectorTypeInfo);
  __arrinit(g_ClipStageMaxXBuffer,0x10,&g_CVectorTypeInfo);
  __arrinit(g_ClipStageMinXBuffer,0x10,&g_CVectorTypeInfo);
  __arrinit(g_ClipStageMinZBuffer,0x10,&g_CVectorTypeInfo);
  __arrinit(g_CubeClippedTriangleBuffer,0x10,&g_CVectorTypeInfo);
  return;
}
