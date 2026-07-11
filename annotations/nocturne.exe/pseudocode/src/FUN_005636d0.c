// Name: FUN_005636d0
// Address: 005636d0
// Address Range: [[005636d0, 005638c6]]
// Convention: unknown
// Signature: uint FUN_005636d0(char *param_1,uint param_2,int param_3,int *param_4)

#include "nocturne.h"

uint FUN_005636d0(char *param_1,uint param_2,int param_3,int *param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  byte bVar8;
  uint uStack_14;
  
  bVar8 = 0;
  (*(code *)PTR_FUN_005c1ac0)(param_4[4]);
  if ((*(byte *)(param_4 + 3) & 1) == 0) {
    FUN_00568e80(4);
    *(byte *)(param_4 + 3) = *(byte *)(param_4 + 3) | 0x20;
    (*(code *)PTR_FUN_005c1ac4)(param_4[4]);
    uStack_14 = 0;
  }
  else {
    uVar7 = param_3 * param_2;
    if (uVar7 == 0) {
      (*(code *)PTR_FUN_005c1ac4)(param_4[4]);
      return 0;
    }
    if (*(int *)(param_4[2] + 8) == 0) {
      FUN_00568ed0(param_4);
    }
    uStack_14 = 0;
    if ((*(byte *)(param_4 + 3) & 0x40) == 0) {
      pcVar5 = param_1;
      do {
        if ((param_4[1] == 0) && (iVar3 = FUN_00564670(param_4), iVar3 == 0)) break;
        pcVar6 = (char *)*param_4;
        param_4[1] = param_4[1] + -1;
        *param_4 = (int)(pcVar6 + 1);
        cVar1 = *pcVar6;
        if (cVar1 == '\r') {
          if ((param_4[1] == 0) && (iVar3 = FUN_00564670(param_4), iVar3 == 0)) break;
          param_4[1] = param_4[1] + -1;
          pcVar6 = (char *)*param_4;
          *param_4 = (int)(pcVar6 + 1);
          cVar1 = *pcVar6;
        }
        if (cVar1 == '\x1a') {
          *(byte *)(param_4 + 3) = *(byte *)(param_4 + 3) | 0x10;
          break;
        }
        pcVar6 = pcVar5 + 1;
        uStack_14 = uStack_14 + 1;
        *pcVar5 = cVar1;
        pcVar5 = pcVar6;
      } while (pcVar6 != param_1 + uVar7);
    }
    else {
      do {
        while( true ) {
          uVar2 = param_4[1];
          if (uVar2 != 0) {
            if (uVar7 < uVar2) {
              uVar2 = uVar7;
            }
            pcVar5 = (char *)*param_4;
            pcVar6 = param_1;
            for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(uint *)pcVar6 = *(uint *)pcVar5;
              pcVar5 = pcVar5 + (uint)bVar8 * -8 + 4;
              pcVar6 = pcVar6 + (uint)bVar8 * -8 + 4;
            }
            for (uVar4 = uVar2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *pcVar6 = *pcVar5;
              pcVar5 = pcVar5 + (uint)bVar8 * -2 + 1;
              pcVar6 = pcVar6 + (uint)bVar8 * -2 + 1;
            }
            uVar7 = uVar7 - uVar2;
            param_1 = param_1 + uVar2;
            uStack_14 = uStack_14 + uVar2;
            *param_4 = *param_4 + uVar2;
            param_4[1] = param_4[1] - uVar2;
          }
          if (uVar7 == 0) goto LAB_005638a9;
          if ((uVar7 < (uint)param_4[5]) && ((*(byte *)((int)param_4 + 0xd) & 4) == 0)) break;
          *param_4 = *(int *)(param_4[2] + 8);
          param_4[1] = 0;
          uVar2 = uVar7;
          if (((*(byte *)((int)param_4 + 0xd) & 4) == 0) && (0x200 < uVar7)) {
            uVar2 = (uVar7 >> 8 & 0xfffffe) << 8;
          }
          iVar3 = FUN_00568f70(param_4[4],param_1,uVar2);
          if (iVar3 == -1) {
            *(byte *)(param_4 + 3) = *(byte *)(param_4 + 3) | 0x20;
            goto LAB_005638a9;
          }
          if (iVar3 == 0) {
            *(byte *)(param_4 + 3) = *(byte *)(param_4 + 3) | 0x10;
            goto LAB_005638a9;
          }
          param_1 = param_1 + iVar3;
          uVar7 = uVar7 - iVar3;
          uStack_14 = uStack_14 + iVar3;
        }
        iVar3 = FUN_00564670(param_4);
      } while (iVar3 != 0);
    }
LAB_005638a9:
    (*(code *)PTR_FUN_005c1ac4)(param_4[4]);
    uStack_14 = uStack_14 / param_2;
  }
  return uStack_14;
}
