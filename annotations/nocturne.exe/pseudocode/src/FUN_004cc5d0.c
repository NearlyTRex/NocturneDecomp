// Name: FUN_004cc5d0
// Address: 004cc5d0
// Address Range: [[004cc5d0, 004cc86d]]
// Convention: unknown
// Signature: undefined4 FUN_004cc5d0(int param_1)

#include "nocturne.h"

uint FUN_004cc5d0(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  byte local_94 [12];
  uint local_88;
  uint local_84;
  uint local_80;
  byte local_7c [12];
  byte local_70 [12];
  uint local_64;
  uint local_60;
  uint local_5c;
  byte local_58 [12];
  uint local_4c;
  uint local_48;
  uint local_44;
  byte local_40 [12];
  byte local_34 [12];
  float local_28;
  float local_24;
  float local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (*(int *)(param_1 + 0x194) != 0) {
    FUN_00461000(DAT_005ae704,1);
    FUN_00461010(DAT_005ae704,0xffff);
    FUN_00461eb0(DAT_005ae704,&DAT_005badbc);
    if (*(int *)(0x01CC9450 + 4) == 0) {
      if (*(int *)(param_1 + 0x198) == 1) {
        fVar6 = (float10)*(float *)(param_1 + 0x174);
        uVar2 = FUN_00563a30();
        iVar4 = (int)ROUND(fVar6);
        iVar5 = 0;
        local_10 = iVar4;
        if (0 < iVar4) {
          do {
            local_24 = (float)iVar5;
            local_c = iVar5;
            FUN_0043b800(uVar2,local_24,&local_64,local_7c);
            puVar1 = (uint *)FUN_0040a240(param_1,local_70,&local_64);
            if (&local_64 != puVar1) {
              local_64 = *puVar1;
              local_60 = puVar1[1];
              local_5c = puVar1[2];
            }
            iVar5 = iVar5 + 1;
            FUN_004cc440(param_1,&local_64);
          } while (iVar5 < iVar4);
        }
      }
      else if (*(int *)(param_1 + 0x198) == 0) {
        fVar6 = (float10)*(float *)(param_1 + 0x174);
        piVar3 = (int *)FUN_00563a30();
        local_14 = *piVar3;
        iVar5 = 0;
        iVar4 = (int)ROUND(fVar6);
        local_1c = iVar4;
        if (0 < local_14) {
          do {
            if (iVar4 % *(int *)(param_1 + 0x178) != 0) {
              local_20 = (float)iVar5;
              local_c = iVar5;
              FUN_0043b800(piVar3,local_20,&local_88,local_58);
              puVar1 = (uint *)FUN_0040a240(param_1,local_40,&local_88);
              if (&local_88 != puVar1) {
                local_88 = *puVar1;
                local_84 = puVar1[1];
                local_80 = puVar1[2];
              }
              FUN_004cc440(param_1,&local_88);
            }
            iVar5 = iVar5 + 1;
            iVar4 = iVar4 + 1;
          } while (iVar5 < local_14);
        }
      }
    }
    else {
      iVar4 = *(int *)(param_1 + 0x19c);
      iVar5 = 0;
      piVar3 = (int *)(param_1 + 0x19c);
      if (0 < iVar4) {
        do {
          local_18 = piVar3;
          local_28 = (float)iVar5;
          local_c = iVar5;
          FUN_0043b800(local_18,local_28,&local_4c,local_94);
          puVar1 = (uint *)FUN_0040a240(param_1,local_34,&local_4c);
          if (&local_4c != puVar1) {
            local_4c = *puVar1;
            local_48 = puVar1[1];
            local_44 = puVar1[2];
          }
          iVar5 = iVar5 + 1;
          FUN_004cc440(param_1,&local_4c);
          piVar3 = local_18;
        } while (iVar5 < iVar4);
      }
    }
    FUN_00461000(DAT_005ae704,0);
    return 1;
  }
  return 0;
}
