// Name: FUN_00528b30
// Address: 00528b30
// Address Range: [[00528b30, 00528c15]]
// Convention: unknown
// Signature: int FUN_00528b30(int param_1,undefined4 param_2)

#include "nocturne.h"

int FUN_00528b30(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_005a3260(param_2,&DAT_005cdd33);
  if (iVar1 == 0) {
    return param_1;
  }
  iVar1 = FUN_005a3260(param_2,"backup");
  if (iVar1 == 0) {
    return param_1 + 4;
  }
  iVar1 = FUN_005a3260(param_2,&DAT_005cdd3f);
  if (iVar1 == 0) {
    return param_1 + 8;
  }
  iVar1 = FUN_005a3260(param_2,&DAT_005cdd43);
  if (iVar1 == 0) {
    return param_1 + 0xc;
  }
  iVar1 = FUN_005a3260(param_2,"action");
  if (iVar1 == 0) {
    return param_1 + 0x10;
  }
  iVar1 = FUN_005a3260(param_2,"useItem");
  if (iVar1 == 0) {
    return param_1 + 0x14;
  }
  iVar1 = FUN_005a3260(param_2,"light");
  if (iVar1 == 0) {
    return param_1 + 0x18;
  }
  iVar1 = FUN_005a3260(param_2,&DAT_005cdd5d);
  if (iVar1 == 0) {
    return param_1 + 0x1c;
  }
  iVar1 = FUN_005a3260(param_2,&DAT_005cdd62);
  if (iVar1 == 0) {
    return param_1 + 0x20;
  }
  return 0;
}
