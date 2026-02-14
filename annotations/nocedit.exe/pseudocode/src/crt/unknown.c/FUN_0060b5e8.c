// Name: crt_unknown.c_FUN_0060b5e8
// Address: 0060b5e8
// Address Range: [[0060b5e8, 0060b628]]
// Convention: __watcallRegister
// Signature: double __watcallRegister crt_unknown_c_FUN_0060b5e8(uint param_1,uint param_2)

#include "nocturne.h"

double __watcallRegister FUN_0060b5e8(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint unaff_EBP;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  float10 in_ST0;
  
  if ((param_1 != 0 || param_2 != 0) || unaff_EBP != 0) {
    uVar1 = param_1;
    uVar3 = unaff_EBP;
    if (param_2 == 0) {
      uVar3 = 0;
      uVar1 = unaff_EBP;
      param_2 = param_1;
    }
    uVar2 = uVar1;
    uVar4 = uVar3;
    if (param_2 == 0) {
      uVar4 = 0;
      uVar2 = uVar3;
      param_2 = uVar1;
    }
    for (; -1 < (int)param_2; param_2 = param_2 * 2 + (uint)(bVar6 || CARRY4(uVar1,(uint)bVar5))) {
      bVar5 = CARRY4(uVar4,uVar4);
      uVar4 = uVar4 * 2;
      bVar6 = CARRY4(uVar2,uVar2);
      uVar1 = uVar2 * 2;
      uVar2 = uVar1 + bVar5;
    }
  }
  return (double)in_ST0;
}
