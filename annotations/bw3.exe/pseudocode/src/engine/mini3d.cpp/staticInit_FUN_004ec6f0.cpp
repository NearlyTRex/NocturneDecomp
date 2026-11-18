// Name: engine_mini3d.cpp_staticInit_FUN_004ec6f0
// Address: 004ec6f0
// Address Range: [[004ec6f0, 004ec72a]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_staticInit_FUN_004ec6f0(void)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_staticInit_FUN_004ec6f0(void)

{
  engine_mini3d_cpp_CMini3D_ctor_FUN_004ec730(&g_CMini3DInstance);
  _atexit(&WatcomStaticDestructorNode_006004a8);
  __arrinit((void *)0x1d79788,0x32,&g_SDynamicLightTypeInfo);
  g_FLOAT_01d7a6b4 = 3.0f;
  return;
}
