// Name: core_fire.cpp_CBulletHole_setupRenderState_FUN_00493d50
// Address: 00493d50
// Address Range: [[00493d50, 00493dcf]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletHole_setupRenderState_FUN_00493d50(CBulletHole *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CBulletHole_setupRenderState_FUN_00493d50(CBulletHole *this_ptr)

{
  _DAT_01c3ded4 = 4;
  _DAT_01c3dee8 = 0;
  _DAT_01c3deec = 1;
  _DAT_01c3def0 = 2;
  _DAT_01c3def4 = 3;
  _DAT_01c3ded8 = 0;
  _DAT_01c3dedc = 0;
  _DAT_01c3dee4 = 0;
  _DAT_01c3dee0 = 0xffff;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)&DAT_006150f4);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0x8000);
  return;
}
