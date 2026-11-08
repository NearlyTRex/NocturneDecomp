// Name: FUN_0055b330
// Address: 0055b330
// Address Range: [[0055b330, 0055b4b6]]
// Convention: unknown
// Signature: void FUN_0055b330(int *param_1)

#include "nocturne.h"

void FUN_0055b330(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  uint *local_18;
  int *local_14;
  
  bVar8 = 0;
  uVar1 = FUN_00483e60(DAT_00612560);
  FUN_00483e40(DAT_00612560,0,uVar1);
  FUN_00483c10(DAT_00612560,0,0,0x40,0x30);
  iVar5 = 0;
  if (0 < *param_1) {
    piVar11 = param_1 + 0x44;
    local_14 = param_1 + 0x41;
    local_18 = (uint *)&DAT_020b28f4;
    piVar9 = param_1 + 1;
    do {
      piVar10 = piVar9;
      FUN_004834b0(0x01BC120C,local_14,uVar1,piVar9,piVar11);
      FUN_004839b0(0x01BC120C,piVar9[iVar5 * 0x69 + 0x51]);
      FUN_00483530(0x01BC120C,piVar11);
      FUN_00483780(0x01BC120C,0x268e8f4);
      FUN_0057dca4();
      FUN_0054e3c0(param_1,0x461c3f9a,0);
      iVar4 = 0;
      puVar3 = local_18;
      do {
        puVar6 = *(uint **)(&DAT_01c4480c + iVar4);
        puVar7 = puVar3;
        for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
        }
        for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(byte *)puVar7 = *(byte *)puVar6;
          puVar6 = (uint *)((int)puVar6 + (uint)bVar8 * -2 + 1);
          puVar7 = (uint *)((int)puVar7 + (uint)bVar8 * -2 + 1);
        }
        iVar4 = iVar4 + 4;
        puVar3 = puVar3 + 0x40;
      } while (iVar4 != 0xc0);
      iVar5 = iVar5 + 1;
      piVar11 = piVar11 + 0x69;
      local_18 = local_18 + 0xc00;
      local_14 = local_14 + 0x69;
      piVar9 = piVar10;
    } while (iVar5 < *param_1);
  }
  thunk_FUN_00509210(DAT_00612560);
  FUN_00483e40(DAT_00612560,uVar1);
  return;
}
