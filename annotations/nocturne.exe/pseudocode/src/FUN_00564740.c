// Name: FUN_00564740
// Address: 00564740
// Address Range: [[00564740, 0056485b]]
// Convention: unknown
// Signature: uint FUN_00564740(uint param_1,int *param_2)

#include "nocturne.h"

uint FUN_00564740(uint param_1,int *param_2)

{
  int iVar1;
  byte *puVar2;
  
  if (param_1 == 0xffffffff) {
    return 0xffffffff;
  }
  (*(code *)PTR_FUN_005c1ac0)(param_2[4]);
  iVar1 = *(int *)(param_2[2] + 0xc);
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      (*(code *)PTR_FUN_005c1ac4)(param_2[4]);
      return 0xffffffff;
    }
    *(uint *)(param_2[2] + 0xc) = 1;
  }
  if ((*(byte *)((int)param_2 + 0xd) & 0x10) != 0) {
    (*(code *)PTR_FUN_005c1ac4)(param_2[4]);
    return 0xffffffff;
  }
  if ((*(byte *)(param_2 + 3) & 1) == 0) {
LAB_005647b5:
    (*(code *)PTR_FUN_005c1ac4)(param_2[4]);
    return 0xffffffff;
  }
  if (*(int *)(param_2[2] + 8) == 0) {
    FUN_00568ed0(param_2);
  }
  if (param_2[1] == 0) {
    param_2[1] = 1;
    *param_2 = *(int *)(param_2[2] + 8) + param_2[5] + -1;
    puVar2 = (byte *)*param_2;
    *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 4;
  }
  else {
    if (*param_2 == *(int *)(param_2[2] + 8)) goto LAB_005647b5;
    iVar1 = *param_2;
    param_2[1] = param_2[1] + 1;
    *param_2 = iVar1 + -1;
    if (*(byte *)(iVar1 + -1) != param_1) {
      *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 4;
    }
    puVar2 = (byte *)*param_2;
  }
  *puVar2 = (byte)param_1;
  *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) & 0xef;
  (*(code *)PTR_FUN_005c1ac4)(param_2[4]);
  return param_1 & 0xff;
}
