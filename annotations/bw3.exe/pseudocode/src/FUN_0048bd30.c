// Name: FUN_0048bd30
// Address: 0048bd30
// Address Range: [[0048bd30, 0048beba]]
// Convention: unknown
// Signature: undefined4 FUN_0048bd30(undefined4 param_1,undefined4 *param_2)

#include "nocturne.h"

uint FUN_0048bd30(uint param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_005a3260(param_1,"generic");
  if (iVar1 == 0) {
    *param_2 = 0;
    return 1;
  }
  iVar1 = FUN_005a3260(param_1,"drown");
  if (iVar1 == 0) {
    *param_2 = 1;
    return 1;
  }
  iVar1 = FUN_005a3260(param_1,&DAT_005bdf07);
  if (iVar1 == 0) {
    *param_2 = 2;
    return 1;
  }
  iVar1 = FUN_005a3260(param_1,"explode");
  if (iVar1 == 0) {
    *param_2 = 3;
    return 1;
  }
  iVar1 = FUN_005a3260(param_1,"fallApart");
  if (iVar1 == 0) {
    *param_2 = 4;
    return 1;
  }
  iVar1 = FUN_005a3260(param_1,"shatter");
  if (iVar1 == 0) {
    *param_2 = 5;
    return 1;
  }
  iVar1 = FUN_005a3260(param_1,"electrocute");
  if (iVar1 == 0) {
    *param_2 = 6;
    return 1;
  }
  iVar1 = FUN_005a3260(param_1,&DAT_005bdf32);
  if (iVar1 == 0) {
    *param_2 = 0x69;
    return 1;
  }
  iVar1 = FUN_005a3260(param_1,"Chopped");
  if (iVar1 == 0) {
    *param_2 = 7;
    return 1;
  }
  iVar1 = FUN_005a3260(param_1,"Crushed");
  if (iVar1 == 0) {
    *param_2 = 8;
    return 1;
  }
  iVar1 = FUN_005a3260(param_1,"Impale");
  if (iVar1 == 0) {
    *param_2 = 9;
    return 1;
  }
  iVar1 = FUN_005a3260(param_1,&DAT_005bdf4d);
  if (iVar1 == 0) {
    *param_2 = 10;
    return 1;
  }
  return 0;
}
