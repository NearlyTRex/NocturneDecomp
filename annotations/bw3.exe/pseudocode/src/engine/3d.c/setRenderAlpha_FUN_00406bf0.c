// Name: engine_3d.c_setRenderAlpha_FUN_00406bf0
// Address: 00406bf0
// Address Range: [[00406bf0, 00406c34]]
// Convention: __cdecl
// Signature: int __cdecl engine_3d_c_setRenderAlpha_FUN_00406bf0(int alpha_color_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_3d_c_setRenderAlpha_FUN_00406bf0(int alpha_color_value)

{
  DAT_005fba38 = alpha_color_value >> 8;
  if ((int)DAT_005fba38 < 0) {
    DAT_005fba38 = 0;
  }
  else if (0xff < (int)DAT_005fba38) {
    DAT_005fba38 = 0xff;
  }
  DAT_005f07c0 = DAT_005fba38 | DAT_005fba38 << 8 | DAT_005fba38 << 0x10;
  _DAT_00730400 = DAT_005f07c0 ^ 0xffffff;
  return _DAT_00730400;
}
