// Name: FUN_00557860
// Address: 00557860
// Address Range: [[00557860, 00557906]]
// Convention: unknown
// Signature: undefined4 FUN_00557860(int param_1,int param_2)

#include "nocturne.h"

uint FUN_00557860(int param_1,int param_2)

{
  uint uVar1;
  
  if (DAT_0061bf80 < 0) {
    DAT_0061bf80 = 0;
    Ordinal_2(&LAB_00557540,0);
  }
  if ((-1 < param_1) && (param_1 < DAT_0061bf80)) {
    *(int *)(param_2 + 0x104) = param_1;
    param_1 = param_1 * 0x11c;
    *(uint *)(param_2 + 0x100) = 1;
    uVar1 = *(uint *)(param_1 + 0x264998c);
    *(uint *)(param_2 + 0x10c) = 0;
    *(uint *)(param_2 + 0x108) = uVar1;
    *(uint *)(param_2 + 0x114) = *(uint *)(param_1 + 0x2649988);
    *(uint *)(param_2 + 0x110) = *(uint *)(param_1 + 0x2649874);
    FUN_005b7790(param_2,"DirectSound: %s",param_1 + 0x2649888);
    return 1;
  }
  return 0;
}
