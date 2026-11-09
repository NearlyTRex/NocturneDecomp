// Name: core_inv.cpp_FUN_004f64f0
// Address: 004f64f0
// Address Range: [[004f64f0, 004f6551]]
// Convention: unknown
// Signature: void core_inv_cpp_FUN_004f64f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_inv_cpp_FUN_004f64f0(void)

{
  int iVar1;
  int iVar2;
  int x;
  int y;
  int alpha;
  
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(&CAlphaBitmap_01d1baf4,2,2,0xffff);
  iVar1 = _DAT_01d1bc48;
  if (_DAT_01d1bc48 == -1) {
    return;
  }
  alpha = 0xffff;
  y = 7;
  x = 0x20;
  iVar2 = core_actor_cpp_FUN_0040cc60(0,3);
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0
            (CAlphaBitmap_ARRAY_01d1bb08 + iVar1 * 4 + iVar2,x,y,alpha);
  return;
}
