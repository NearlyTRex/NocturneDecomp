// Name: FUN_00584d90
// Address: 00584d90
// Address Range: [[00584d90, 00584dd7]]
// Convention: unknown
// Signature: undefined4 FUN_00584d90(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_00584d90(int param_1,uint param_2)

{
  uint uVar1;
  
  FUN_00550450();
  FUN_00550170(param_1 + 0x20);
  FUN_00550210(param_1 + 0x11bc);
  uVar1 = FUN_0055ae80(0x0264B290,param_1,param_2,param_1 + 0x20);
  FUN_005504d0();
  return uVar1;
}
