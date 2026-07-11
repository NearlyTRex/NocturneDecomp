// Name: FUN_00439a70
// Address: 00439a70
// Address Range: [[00439a70, 00439ae5]]
// Convention: unknown
// Signature: undefined4 FUN_00439a70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

uint FUN_00439a70(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x2c) < 0) goto LAB_00439abc;
  do {
    uVar1 = FUN_00439760(param_1 + 4,*(uint *)(param_1 + 0x2c),param_4);
    if (-1 < *(int *)(param_1 + 0x28)) {
      iVar2 = FUN_004394f0(param_1 + 4,uVar1,*(int *)(param_1 + 0x28));
      if (iVar2 != 0) {
        *(uint *)(param_1 + 0x2c) = 0xffffffff;
      }
    }
    uVar1 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = 0xffffffff;
    *(uint *)(param_1 + 0x28) = uVar1;
LAB_00439abc:
    iVar2 = FUN_00439590(param_1 + 4,param_1 + 0x18,param_2,param_3);
    *(int *)(param_1 + 0x2c) = iVar2;
  } while (-1 < iVar2);
  return 1;
}
