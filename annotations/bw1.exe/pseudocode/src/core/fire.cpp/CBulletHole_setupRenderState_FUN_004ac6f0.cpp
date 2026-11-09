// Name: core_fire.cpp_CBulletHole_setupRenderState_FUN_004ac6f0
// Address: 004ac6f0
// Address Range: [[004ac6f0, 004ac76f]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletHole_setupRenderState_FUN_004ac6f0(CBulletHole *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CBulletHole_setupRenderState_FUN_004ac6f0(CBulletHole *this_ptr)

{
  _DAT_01c57094 = 4;
  _DAT_01c570a8 = 0;
  _DAT_01c570ac = 1;
  _DAT_01c570b0 = 2;
  _DAT_01c570b4 = 3;
  _DAT_01c57098 = 0;
  _DAT_01c5709c = 0;
  _DAT_01c570a4 = 0;
  _DAT_01c570a0 = 0xffff;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,(SMRGLTextureBasic *)&DAT_0061c3d4);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,0x8000);
  return;
}
