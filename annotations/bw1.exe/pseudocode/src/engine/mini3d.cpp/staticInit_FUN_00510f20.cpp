// Name: engine_mini3d.cpp_staticInit_FUN_00510f20
// Address: 00510f20
// Address Range: [[00510f20, 00510f5a]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_staticInit_FUN_00510f20(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_staticInit_FUN_00510f20(void)

{
  engine_mini3d_cpp_CMini3D_ctor_FUN_00510f60(&g_CMini3DInstance);
  _atexit(&WatcomStaticDestructorNode_0061f5c8);
  __arrinit((void *)0x1d25008,0x32,&g_SDynamicLightTypeInfo);
  _DAT_01d25f34 = _DAT_00603c94;
  return;
}
