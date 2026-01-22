// Name: crt_unknown.c_FUN_0060b5e8
// Address: 0060b5e8
// Address Range: [[0060b5e8, 0060b628]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060b5e8()

#include "nocturne.h"

/* Signature: void FUN_0060b5e8(uint param_1, uint param_2, uint param_3) */

ulonglong crt_unknown_c_FUN_0060b5e8(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_EBP;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  if ((param_1 != 0 || param_2 != 0) || unaff_EBP != 0) {
    uVar1 = param_1;
    uVar4 = unaff_EBP;
    if (param_2 == 0) {
      uVar4 = 0;
      uVar1 = unaff_EBP;
      param_2 = param_1;
    }
    uVar2 = uVar1;
    uVar3 = param_2;
    uVar5 = uVar4;
    if (param_2 == 0) {
      uVar5 = 0;
      uVar2 = uVar4;
      uVar3 = uVar1;
    }
    for (; -1 < (int)uVar3; uVar3 = uVar3 * 2 + (uint)(bVar7 || CARRY4(uVar1,(uint)bVar6))) {
      bVar6 = CARRY4(uVar5,uVar5);
      uVar5 = uVar5 * 2;
      bVar7 = CARRY4(uVar2,uVar2);
      uVar1 = uVar2 * 2;
      uVar2 = uVar1 + bVar6;
    }
    param_1 = uVar2 + CARRY4(uVar5,uVar5);
    uVar1 = (uint)CARRY4(uVar2,(uint)CARRY4(uVar5,uVar5));
    param_2 = uVar3 + uVar1;
    if (CARRY4(uVar3,uVar1)) {
      param_2 = param_2 >> 1 | 0x80000000;
    }
  }
  return CONCAT44(param_2,param_1);
}
