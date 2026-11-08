// Name: FUN_00489270
// Address: 00489270
// Address Range: [[00489270, 0048935e]]
// Convention: unknown
// Signature: undefined4 FUN_00489270(undefined4 param_1,undefined4 *param_2)

#include "nocturne.h"

uint FUN_00489270(uint param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_005b8130(param_1,"generic");
  if (iVar1 == 0) {
    *param_2 = 100;
    return 1;
  }
  iVar1 = FUN_005b8130(param_1,"bullet");
  if (iVar1 == 0) {
    *param_2 = 0x65;
    return 1;
  }
  iVar1 = FUN_005b8130(param_1,&DAT_005d2fd4);
  if (iVar1 == 0) {
    *param_2 = 0x66;
    return 1;
  }
  iVar1 = FUN_005b8130(param_1,"Blade");
  if (iVar1 == 0) {
    *param_2 = 0x67;
    return 1;
  }
  iVar1 = FUN_005b8130(param_1,"Stake");
  if (iVar1 == 0) {
    *param_2 = 0x68;
    return 1;
  }
  iVar1 = FUN_005b8130(param_1,&DAT_005d2fe5);
  if (iVar1 == 0) {
    *param_2 = 0x69;
    return 1;
  }
  iVar1 = FUN_005b8130(param_1,"electrocute");
  if (iVar1 == 0) {
    *param_2 = 0x6a;
    return 1;
  }
  return 0;
}
