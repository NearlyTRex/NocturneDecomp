// Name: FUN_00482250
// Address: 00482250
// Address Range: [[00482250, 0048231d]]
// Convention: unknown
// Signature: int FUN_00482250(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00482250(int *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  
  if (_DAT_01c25590 == 0) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xa0;
    FUN_004e4500("gEdFont must be set by the application.");
  }
  _DAT_01c25f78 = *(uint *)(_DAT_01c25590 + 0x41e8);
  _DAT_01c25f7c = FUN_004ab560(_DAT_01c25590,0x6a);
  uVar1 = DAT_006141cc;
  if (0 < *param_1) {
    DAT_006141cc = 0x7f;
    FUN_00482320(param_1,param_2,param_3,param_4);
    do {
      iVar2 = FUN_00482770(param_1);
      FUN_004831d0(param_1);
      FUN_00589560();
    } while (iVar2 == -2);
    FUN_004032b0();
    FUN_0047e760(0x01C25594);
    DAT_006141cc = uVar1;
    return iVar2;
  }
  return -1;
}
