// Name: FUN_00548dc0
// Address: 00548dc0
// Address Range: [[00548dc0, 00548e16]]
// Convention: unknown
// Signature: void FUN_00548dc0(int param_1)

#include "nocturne.h"

void FUN_00548dc0(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint *unaff_ESI;
  uint *puVar3;
  byte bVar4;
  uint auStackY_17f8 [1524];
  uint uStack_1c;
  uint auStack_14 [3];
  
  bVar4 = 0;
  uVar1 = *(ushort *)(param_1 + 4);
  uVar2 = Ordinal_9();
  uStack_1c = CONCAT22(uVar2,uVar1);
  FUN_00548d20(param_1);
  FUN_00563cc0(auStack_14,0,8);
  puVar3 = unaff_ESI + (uint)bVar4 * -2 + 1;
  *unaff_ESI = uStack_1c;
  *puVar3 = auStack_14[(uint)bVar4 * -2 + -1];
  puVar3[(uint)bVar4 * -2 + 1] = auStack_14[(uint)bVar4 * -2 + (uint)bVar4 * -2];
  (puVar3 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       (auStack_14 + (uint)bVar4 * -2 + (uint)bVar4 * -2)[(uint)bVar4 * -2 + 1];
  return;
}
