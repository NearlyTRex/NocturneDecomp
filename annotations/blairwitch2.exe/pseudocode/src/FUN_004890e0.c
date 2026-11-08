// Name: FUN_004890e0
// Address: 004890e0
// Address Range: [[004890e0, 0048926a]]
// Convention: unknown
// Signature: undefined4 FUN_004890e0(undefined4 param_1,undefined4 *param_2)

#include "nocturne.h"

uint FUN_004890e0(uint param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_005b8130(param_1,"generic");
  if (iVar1 == 0) {
    *param_2 = 0;
    return 1;
  }
  iVar1 = FUN_005b8130(param_1,"drown");
  if (iVar1 == 0) {
    *param_2 = 1;
    return 1;
  }
  iVar1 = FUN_005b8130(param_1,&DAT_005d2f7a);
  if (iVar1 == 0) {
    *param_2 = 2;
    return 1;
  }
  iVar1 = FUN_005b8130(param_1,"explode");
  if (iVar1 == 0) {
    *param_2 = 3;
    return 1;
  }
  iVar1 = FUN_005b8130(param_1,"fallApart");
  if (iVar1 == 0) {
    *param_2 = 4;
    return 1;
  }
  iVar1 = FUN_005b8130(param_1,"shatter");
  if (iVar1 == 0) {
    *param_2 = 5;
    return 1;
  }
  iVar1 = FUN_005b8130(param_1,"electrocute");
  if (iVar1 == 0) {
    *param_2 = 6;
    return 1;
  }
  iVar1 = FUN_005b8130(param_1,&DAT_005d2fa5);
  if (iVar1 == 0) {
    *param_2 = 0x69;
    return 1;
  }
  iVar1 = FUN_005b8130(param_1,"Chopped");
  if (iVar1 == 0) {
    *param_2 = 7;
    return 1;
  }
  iVar1 = FUN_005b8130(param_1,"Crushed");
  if (iVar1 == 0) {
    *param_2 = 8;
    return 1;
  }
  iVar1 = FUN_005b8130(param_1,"Impale");
  if (iVar1 == 0) {
    *param_2 = 9;
    return 1;
  }
  iVar1 = FUN_005b8130(param_1,&DAT_005d2fc0);
  if (iVar1 == 0) {
    *param_2 = 10;
    return 1;
  }
  return 0;
}
