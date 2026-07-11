// Name: FUN_0051cae0
// Address: 0051cae0
// Address Range: [[0051cae0, 0051cf5c]]
// Convention: unknown
// Signature: void FUN_0051cae0(int param_1,undefined4 *param_2,float *param_3,float param_4,int param_5,code *param_6)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051cae0(int param_1,uint *param_2,float *param_3,float param_4,int param_5,code *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  uint auStackY_18c4 [1522];
  uint uStack_e8;
  uint local_d8;
  uint local_c8;
  uint local_b8;
  uint local_a8;
  byte local_98 [16];
  uint local_88;
  uint auStack_84 [16];
  float afStack_44 [4];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint *local_1c;
  int local_18;
  int local_14;
  
  bVar10 = 0;
  if ((float)_DAT_00591bb3 < param_4) {
    iVar4 = FUN_0051e0a0(param_1);
    local_34 = param_1 + 0x6b0;
    if (*(int *)(param_1 + 0x2250) == 0) {
      iVar6 = 0;
      if (0 < *(int *)(iVar4 + 0x28558)) {
        local_24 = param_1;
        local_1c = param_2;
        local_2c = local_34;
        do {
          iVar5 = FUN_00517b10(iVar4,iVar6,param_5);
          if (-1 < iVar5) {
            local_14 = (*param_6)(iVar6,param_5,param_4,iVar5,param_1);
            FUN_0055d2d0(local_2c,local_1c,local_14);
            puVar8 = (uint *)(local_24 + 0x6b4 + (uint)bVar10 * -8);
            *(uint *)(local_24 + 0x6b0) = uStack_e8;
            puVar9 = puVar8 + (uint)bVar10 * -2 + 1;
            *puVar8 = *(uint *)(&stack0xffffff1c + (uint)bVar10 * -8);
            *puVar9 = *(uint *)(&stack0xffffff20 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
            puVar9[(uint)bVar10 * -2 + 1] =
                 *(uint *)
                  ((int)(&stack0xffffff20 + (uint)bVar10 * -8 + (uint)bVar10 * -8) +
                  ((uint)bVar10 * -2 + 1) * 4);
          }
          iVar6 = iVar6 + 1;
          local_24 = local_24 + 0x10;
          local_2c = local_2c + 0x10;
          local_1c = local_1c + 4;
        } while (iVar6 < *(int *)(iVar4 + 0x28558));
      }
    }
    else if (*(int *)(param_1 + 0x2250) == 1) {
      local_18 = 0;
      if (0 < *(int *)(iVar4 + 0x28558)) {
        local_28 = param_1;
        puVar8 = param_2;
        local_30 = local_34;
        local_20 = iVar4;
        do {
          iVar6 = FUN_00517b10(iVar4,local_18,param_5);
          if (-1 < iVar6) {
            iVar6 = *(int *)(local_20 + 0x2857c);
            puVar9 = puVar8;
            if (-1 < iVar6) {
              local_14 = iVar6 * 0x10;
              FUN_0055d0d0(param_2 + iVar6 * 4);
              puVar9 = &stack0xffffff58;
              local_a8 = local_c8;
              *(uint *)((int)&stack0xffffff5c + (uint)bVar10 * 0xfffffffe * 4) =
                   *(uint *)(&stack0xffffff3c + (uint)bVar10 * -8);
              *(uint *)(&stack0xffffff60 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
                   *(uint *)(&stack0xffffff40 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
              *(uint *)
               ((int)(&stack0xffffff60 + (uint)bVar10 * -8 + (uint)bVar10 * -8) +
               ((uint)bVar10 * -2 + 1) * 4) =
                   *(uint *)
                    ((int)(&stack0xffffff40 + (uint)bVar10 * -8 + (uint)bVar10 * -8) +
                    ((uint)bVar10 * -2 + 1) * 4);
              FUN_0055d130(puVar8,puVar9);
              local_b8 = auStack_84[3];
              *(uint *)((int)&stack0xffffff4c + (uint)bVar10 * 0xfffffffe * 4) =
                   auStack_84[(uint)bVar10 * 0xfffffffe + 4];
              *(uint *)(&stack0xffffff50 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
                   auStack_84[(uint)bVar10 * 0xfffffffe + (uint)bVar10 * 0xfffffffe + 5];
              *(uint *)
               ((int)(&stack0xffffff50 + (uint)bVar10 * -8 + (uint)bVar10 * -8) +
               ((uint)bVar10 * -2 + 1) * 4) =
                   (auStack_84 + (uint)bVar10 * 0xfffffffe + (uint)bVar10 * 0xfffffffe + 5)
                   [(uint)bVar10 * -2 + 1];
              FUN_0055d130(&stack0xffffff48,local_34 + local_14);
              puVar9 = (uint *)local_98;
            }
            puVar7 = puVar9 + (uint)bVar10 * -2 + 1;
            local_d8 = *puVar9;
            *(uint *)((int)&stack0xffffff2c + (uint)bVar10 * 0xfffffffe * 4) = *puVar7;
            *(uint *)(&stack0xffffff30 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
                 puVar7[(uint)bVar10 * -2 + 1];
            *(uint *)
             ((int)(&stack0xffffff30 + (uint)bVar10 * -8 + (uint)bVar10 * -8) +
             ((uint)bVar10 * -2 + 1) * 4) = (puVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
            FUN_0055d2d0(local_30,&stack0xffffff28,param_4);
            puVar9 = (uint *)(local_28 + 0x6b4 + (uint)bVar10 * -8);
            *(uint *)(local_28 + 0x6b0) = local_88;
            puVar7 = puVar9 + (uint)bVar10 * -2 + 1;
            *puVar9 = auStack_84[(uint)bVar10 * 0xfffffffe];
            *puVar7 = auStack_84[(uint)bVar10 * 0xfffffffe + (uint)bVar10 * 0xfffffffe + 1];
            puVar7[(uint)bVar10 * -2 + 1] =
                 (auStack_84 + (uint)bVar10 * 0xfffffffe + (uint)bVar10 * 0xfffffffe + 1)
                 [(uint)bVar10 * -2 + 1];
          }
          puVar8 = puVar8 + 4;
          local_20 = local_20 + 0x24;
          local_28 = local_28 + 0x10;
          local_30 = local_30 + 0x10;
          local_18 = local_18 + 1;
        } while (local_18 < *(int *)(iVar4 + 0x28558));
      }
    }
    else {
      _DAT_01cc4800 = "MbP?..\\core\\skeleton.cpp" + 4;
      _DAT_01cc4804 = 0xad5;
      FUN_004c8440("Write me!");
    }
    if (param_5 < 0) {
      fVar1 = param_3[1];
      fVar2 = param_3[2];
      fVar3 = 1.0 - param_4;
      if ((float *)(param_1 + 0x6a4) != afStack_44) {
        *(float *)(param_1 + 0x6a4) =
             *(float *)(param_1 + 0x6a4) * fVar3 + *(float *)(param_1 + 0x508) * *param_3 * param_4;
        *(float *)(param_1 + 0x6a8) =
             *(float *)(param_1 + 0x6a8) * fVar3 + *(float *)(param_1 + 0x50c) * fVar1 * param_4;
        *(float *)(param_1 + 0x6ac) =
             *(float *)(param_1 + 0x6ac) * fVar3 + *(float *)(param_1 + 0x510) * fVar2 * param_4;
        return;
      }
    }
  }
  return;
}
