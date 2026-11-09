// Name: engine_3d.c_setRenderAlpha_FUN_00406bd0
// Address: 00406bd0
// Address Range: [[00406bd0, 00406c14]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_3d_c_setRenderAlpha_FUN_00406bd0(int alpha_color_value)

{
  DAT_0061b4b8 = alpha_color_value >> 8;
  if ((int)DAT_0061b4b8 < 0) {
    DAT_0061b4b8 = 0;
  }
  else if (0xff < (int)DAT_0061b4b8) {
    DAT_0061b4b8 = 0xff;
  }
  DAT_006104f0 = DAT_0061b4b8 | DAT_0061b4b8 << 8 | DAT_0061b4b8 << 0x10;
  _DAT_00713a80 = DAT_006104f0 ^ 0xffffff;
  return _DAT_00713a80;
}
