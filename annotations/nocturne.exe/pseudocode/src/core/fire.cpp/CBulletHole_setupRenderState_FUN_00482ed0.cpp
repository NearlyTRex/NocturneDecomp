// Name: core_fire.cpp_CBulletHole_setupRenderState_FUN_00482ed0
// Address: 00482ed0
// Address Range: [[00482ed0, 00482f4f]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletHole_setupRenderState_FUN_00482ed0(CBulletHole *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CBulletHole_setupRenderState_FUN_00482ed0(CBulletHole *this_ptr)

{
  _DAT_01c08d24 = 4;
  _DAT_01c08d38 = 0;
  _DAT_01c08d3c = 1;
  _DAT_01c08d40 = 2;
  _DAT_01c08d44 = 3;
  _DAT_01c08d28 = 0;
  _DAT_01c08d2c = 0;
  _DAT_01c08d34 = 0;
  _DAT_01c08d30 = 0xffff;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (g_CDemonRenderer_PTR_005ae704,(SMRGLTextureBasic *)&DAT_005b84b4);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
            (g_CDemonRenderer_PTR_005ae704,0xffff);
  return;
}
