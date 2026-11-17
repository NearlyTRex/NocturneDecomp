// Name: core_fire.cpp_CBulletHole_setupRenderState_FUN_004975a0
// Address: 004975a0
// Address Range: [[004975a0, 0049760b]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletHole_setupRenderState_FUN_004975a0(CBulletHole *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CBulletHole_setupRenderState_FUN_004975a0(CBulletHole *this_ptr)

{
  g_SMRGLHeaderPrimitive_01c73670.base.count = 4;
  g_INT_01c73688 = 0;
  g_INT_01c7368c = 1;
  g_INT_01c73690 = 2;
  g_INT_01c73694 = 3;
  g_SMRGLHeaderPrimitive_01c73670.surface_normal.A.i = 0;
  g_SMRGLHeaderPrimitive_01c73670.surface_normal.B.i = 0;
  g_SMRGLHeaderPrimitive_01c73670.surface_normal.D.i = 0;
  g_SMRGLHeaderPrimitive_01c73670.surface_normal.C.i = 0xffff;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
            (g_CDemonRenderer_PTR_005f2afc,0x8000);
  return;
}
