// Name: FUN_0049b420
// Address: 0049b420
// Address Range: [[0049b420, 0049b4df]]
// Convention: unknown
// Signature: void FUN_0049b420(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049b420(uint param_1,uint param_2)

{
  uint uVar1;
  byte local_110 [256];
  
  uVar1 = core_menu_cpp_getKeyDisplayName_FUN_004d2900(param_1,param_2);
  _sprintf(local_110,"%s = %s",uVar1);
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (_DAT_014b9900,local_110,_DAT_01c78adc,_DAT_01c78ae0,7,0xffffffff);
  _DAT_01c78ae0 = _DAT_01c78ae0 + _DAT_01c78ae4;
  if (_DAT_01c78ae0 <= DAT_005b7620 + _DAT_01c78ae4 * -4) {
    return;
  }
  _DAT_01c78ae0 = _DAT_01c78ae4 * 6;
  _DAT_01c78adc = _DAT_01c78adc + DAT_005b761c / 3;
  return;
}
