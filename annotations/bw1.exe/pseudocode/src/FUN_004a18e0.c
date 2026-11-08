// Name: FUN_004a18e0
// Address: 004a18e0
// Address Range: [[004a18e0, 004a19ce]]
// Convention: unknown
// Signature: undefined4 FUN_004a18e0(undefined4 param_1,undefined4 *param_2)

#include "nocturne.h"

uint FUN_004a18e0(uint param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_005c04e0(param_1,"generic");
  if (iVar1 == 0) {
    *param_2 = 100;
    return 1;
  }
  iVar1 = FUN_005c04e0(param_1,"bullet");
  if (iVar1 == 0) {
    *param_2 = 0x65;
    return 1;
  }
  iVar1 = FUN_005c04e0(param_1,&DAT_005dcd6d);
  if (iVar1 == 0) {
    *param_2 = 0x66;
    return 1;
  }
  iVar1 = FUN_005c04e0(param_1,"Blade");
  if (iVar1 == 0) {
    *param_2 = 0x67;
    return 1;
  }
  iVar1 = FUN_005c04e0(param_1,"Stake");
  if (iVar1 == 0) {
    *param_2 = 0x68;
    return 1;
  }
  iVar1 = FUN_005c04e0(param_1,&DAT_005dcd7e);
  if (iVar1 == 0) {
    *param_2 = 0x69;
    return 1;
  }
  iVar1 = FUN_005c04e0(param_1,"electrocute");
  if (iVar1 == 0) {
    *param_2 = 0x6a;
    return 1;
  }
  return 0;
}
