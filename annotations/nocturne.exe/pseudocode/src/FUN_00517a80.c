// Name: FUN_00517a80
// Address: 00517a80
// Address Range: [[00517a80, 00517b0f]]
// Convention: unknown
// Signature: void FUN_00517a80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float param_5)

#include "nocturne.h"

void FUN_00517a80(uint param_1,uint param_2,uint param_3,uint param_4,float param_5)

{
  uint *puVar1;
  uint uVar2;
  uint *unaff_ESI;
  uint *puVar3;
  byte bVar4;
  uint auStackY_180c [1520];
  
  bVar4 = 0;
  uVar2 = param_3;
  if ((param_5 <= 0.0) || (uVar2 = param_4, 1.0 <= param_5)) {
    puVar1 = (uint *)FUN_00517a60(param_1,param_2,uVar2);
  }
  else {
    uVar2 = FUN_00517a60(param_1,param_2,param_4,param_5);
    uVar2 = FUN_00517a60(param_1,param_2,param_3,uVar2);
    FUN_0055d2d0(uVar2);
    puVar1 = (uint *)&stack0xffffffe0;
  }
  puVar3 = puVar1 + (uint)bVar4 * -2 + 1;
  uVar2 = *puVar1;
  *(uint *)(&stack0xffffffd4 + (uint)bVar4 * -8) = *puVar3;
  *(uint *)(&stack0xffffffd8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       puVar3[(uint)bVar4 * -2 + 1];
  *(uint *)
   ((int)(&stack0xffffffd8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4) =
       (puVar3 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1];
  puVar1 = unaff_ESI + (uint)bVar4 * -2 + 1;
  *unaff_ESI = uVar2;
  *puVar1 = *(uint *)(&stack0xffffffd4 + (uint)bVar4 * -8);
  puVar1[(uint)bVar4 * -2 + 1] =
       *(uint *)(&stack0xffffffd8 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  (puVar1 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xffffffd8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4)
  ;
  return;
}
