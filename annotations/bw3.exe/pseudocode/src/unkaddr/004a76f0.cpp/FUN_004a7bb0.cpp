// Name: unkaddr_004a76f0.cpp_FUN_004a7bb0
// Address: 004a7bb0
// Address Range: [[004a7bb0, 004a7c2f]]
// Convention: unknown
// Signature: void unkaddr_004a76f0_cpp_FUN_004a7bb0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkaddr_004a76f0_cpp_FUN_004a7bb0(void)

{
  if (-1 < DAT_005fe3a8) {
    if (_DAT_01d1a058 != 0) {
      engine_2d_c_fillRectColor_FUN_004031c0
                (DAT_005fe3a8,_DAT_01d19f7c,_DAT_01d19f80 + -1,_DAT_01d19f84 + -1,0);
      engine_font_cpp_FUN_004b0a20
                (_DAT_01549aa4,&DAT_01d19f90,_DAT_01d19f88,_DAT_01d19f8c,0xff,0xffffffff);
      return;
    }
    _DAT_01d19f78 = _DAT_01d1a058;
    DAT_01d19f90 = 0;
    DAT_005fe3a8 = -1;
  }
  return;
}
