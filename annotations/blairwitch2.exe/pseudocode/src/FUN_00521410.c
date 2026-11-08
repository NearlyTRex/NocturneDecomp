// Name: FUN_00521410
// Address: 00521410
// Address Range: [[00521410, 005214f5]]
// Convention: unknown
// Signature: int FUN_00521410(int param_1,undefined4 param_2)

#include "nocturne.h"

int FUN_00521410(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_005b8130(param_2,&DAT_005e2dce);
  if (iVar1 == 0) {
    return param_1;
  }
  iVar1 = FUN_005b8130(param_2,"backup");
  if (iVar1 == 0) {
    return param_1 + 4;
  }
  iVar1 = FUN_005b8130(param_2,&DAT_005e2dda);
  if (iVar1 == 0) {
    return param_1 + 8;
  }
  iVar1 = FUN_005b8130(param_2,&DAT_005e2dde);
  if (iVar1 == 0) {
    return param_1 + 0xc;
  }
  iVar1 = FUN_005b8130(param_2,"useItem");
  if (iVar1 == 0) {
    return param_1 + 0x10;
  }
  iVar1 = FUN_005b8130(param_2,"light");
  if (iVar1 == 0) {
    return param_1 + 0x14;
  }
  iVar1 = FUN_005b8130(param_2,&DAT_005e2df1);
  if (iVar1 == 0) {
    return param_1 + 0x18;
  }
  iVar1 = FUN_005b8130(param_2,&DAT_005e2df6);
  if (iVar1 == 0) {
    return param_1 + 0x1c;
  }
  iVar1 = FUN_005b8130(param_2,&DAT_005e2dfb);
  if (iVar1 == 0) {
    return param_1 + 0x30;
  }
  return 0;
}
