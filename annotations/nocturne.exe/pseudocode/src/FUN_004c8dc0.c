// Name: FUN_004c8dc0
// Address: 004c8dc0
// Address Range: [[004c8dc0, 004c8e0d]]
// Convention: unknown
// Signature: void FUN_004c8dc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c8dc0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(_DAT_014b98f8,param_1);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (_DAT_014b98f8,param_1,0x140 - iVar1 / 2,param_3,param_4,0);
  return;
}
