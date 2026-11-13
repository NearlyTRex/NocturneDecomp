// Name: engine_mini3d.cpp_staticInit_FUN_004f2190
// Address: 004f2190
// Address Range: [[004f2190, 004f21ca]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_staticInit_FUN_004f2190(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_staticInit_FUN_004f2190(void)

{
  engine_mini3d_cpp_CMini3D_ctor_FUN_004f21d0(&g_CMini3DInstance);
  _atexit(&WatcomStaticDestructorNode_006180e0);
  __arrinit((void *)0x1d0c3a4,0x32,&g_SDynamicLightTypeInfo);
  _DAT_01d0d2d4 = _DAT_005fa164;
  return;
}
