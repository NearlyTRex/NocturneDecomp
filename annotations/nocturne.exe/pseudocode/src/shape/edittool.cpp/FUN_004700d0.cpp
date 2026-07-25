// Name: FUN_004700d0
// Address: 004700d0
// Address Range: [[004700d0, 0047019f]]
// Convention: unknown
// Signature: void FUN_004700d0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004700d0(uint param_1,uint param_2)

{
  byte *local_14;
  
  if (_DAT_01bcd070 == 0) {
    _DAT_01cc4800 = "..\\shape\\edittool.cpp";
    _DAT_01cc4804 = 0x8b;
    FUN_004c8440("gEdFont must be set by the application.");
  }
  _DAT_01bcd9b8 = *(uint *)(_DAT_01bcd070 + 0x3168);
  _DAT_01bcd9bc = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_01bcd070,0x6a);
  local_14 = &stack0x0000000c;
  _vsprintf(0x1bcb0d0,param_2,&local_14);
  local_14 = (byte *)0x0;
  FUN_004722b0(param_1);
  engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (_DAT_01bcd070,0x1bcb0d0,_DAT_01c00c58,_DAT_01c00c5c,_DAT_01bcddec,0xffffffff);
  wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
  return;
}
