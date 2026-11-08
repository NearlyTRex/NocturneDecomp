// Name: FUN_00568860
// Address: 00568860
// Address Range: [[00568860, 00568ce1]]
// Convention: unknown
// Signature: void FUN_00568860(int param_1,undefined4 *param_2,float *param_3,float param_4,int param_5,code *param_6)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00568860(int param_1,uint *param_2,float *param_3,float param_4,int param_5,code *param_6)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  uint auStackY_18e4 [1522];
  uint uStack_108;
  uint local_f8;
  uint local_e8;
  uint local_d8;
  uint local_c8;
  byte local_b8 [16];
  uint local_a8;
  uint auStack_a4 [7];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float local_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float afStack_54 [4];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar7 = 0;
  if ((float)_DAT_005f2519 < param_4) {
    local_28 = FUN_00569f30(param_1);
    local_18 = local_28;
    local_30 = param_1 + 0x6b0;
    if (*(int *)(param_1 + 0x2340) == 0) {
      iVar3 = 0;
      if (0 < *(int *)(local_28 + 0x1de78)) {
        local_2c = param_1;
        local_24 = local_30;
        do {
          iVar2 = FUN_00563630(local_18,iVar3,param_5);
          if (-1 < iVar2) {
            local_14 = (*param_6)(iVar3,param_5,param_4,iVar2,param_1);
            FUN_005b7940(local_24,param_2,local_14);
            puVar5 = (uint *)(local_2c + 0x6b4 + (uint)bVar7 * -8);
            *(uint *)(local_2c + 0x6b0) = uStack_108;
            puVar6 = puVar5 + (uint)bVar7 * -2 + 1;
            *puVar5 = *(uint *)(&stack0xfffffefc + (uint)bVar7 * -8);
            *puVar6 = *(uint *)(&stack0xffffff00 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
            puVar6[(uint)bVar7 * -2 + 1] =
                 *(uint *)
                  ((int)(&stack0xffffff00 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
                  ((uint)bVar7 * -2 + 1) * 4);
          }
          param_2 = param_2 + 4;
          iVar3 = iVar3 + 1;
          local_2c = local_2c + 0x10;
          local_24 = local_24 + 0x10;
        } while (iVar3 < *(int *)(local_18 + 0x1de78));
      }
    }
    else if (*(int *)(param_1 + 0x2340) == 1) {
      iVar3 = 0;
      if (0 < *(int *)(local_28 + 0x1de78)) {
        local_1c = param_1;
        puVar5 = param_2;
        local_20 = local_30;
        do {
          iVar2 = FUN_00563630(local_18,iVar3,param_5);
          if (-1 < iVar2) {
            iVar2 = *(int *)(local_28 + 0x1de9c);
            puVar6 = puVar5;
            if (-1 < iVar2) {
              local_14 = iVar2 * 0x10;
              FUN_005b7750(param_2 + iVar2 * 4);
              puVar6 = &stack0xffffff38;
              local_c8 = local_e8;
              *(uint *)((int)&stack0xffffff3c + (uint)bVar7 * 0xfffffffe * 4) =
                   *(uint *)(&stack0xffffff1c + (uint)bVar7 * -8);
              *(uint *)(&stack0xffffff40 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
                   *(uint *)(&stack0xffffff20 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
              *(uint *)
               ((int)(&stack0xffffff40 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
               ((uint)bVar7 * -2 + 1) * 4) =
                   *(uint *)
                    ((int)(&stack0xffffff20 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
                    ((uint)bVar7 * -2 + 1) * 4);
              FUN_005b77b0(puVar5,puVar6);
              iVar2 = local_30 + local_14;
              local_d8 = auStack_a4[3];
              *(uint *)((int)&stack0xffffff2c + (uint)bVar7 * 0xfffffffe * 4) =
                   auStack_a4[(uint)bVar7 * 0xfffffffe + 4];
              *(uint *)(&stack0xffffff30 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
                   auStack_a4[(uint)bVar7 * 0xfffffffe + (uint)bVar7 * 0xfffffffe + 5];
              *(uint *)
               ((int)(&stack0xffffff30 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
               ((uint)bVar7 * -2 + 1) * 4) =
                   (auStack_a4 + (uint)bVar7 * 0xfffffffe + (uint)bVar7 * 0xfffffffe + 5)
                   [(uint)bVar7 * -2 + 1];
              FUN_005b77b0(&stack0xffffff28,iVar2);
              puVar6 = (uint *)local_b8;
            }
            puVar4 = puVar6 + (uint)bVar7 * -2 + 1;
            local_f8 = *puVar6;
            *(uint *)((int)&stack0xffffff0c + (uint)bVar7 * 0xfffffffe * 4) = *puVar4;
            *(uint *)(&stack0xffffff10 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
                 puVar4[(uint)bVar7 * -2 + 1];
            *(uint *)
             ((int)(&stack0xffffff10 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
             ((uint)bVar7 * -2 + 1) * 4) = (puVar4 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
            FUN_005b7940(local_20,&stack0xffffff08,param_4);
            puVar6 = (uint *)(local_1c + 0x6b4 + (uint)bVar7 * -8);
            *(uint *)(local_1c + 0x6b0) = local_a8;
            puVar4 = puVar6 + (uint)bVar7 * -2 + 1;
            *puVar6 = auStack_a4[(uint)bVar7 * 0xfffffffe];
            *puVar4 = auStack_a4[(uint)bVar7 * 0xfffffffe + (uint)bVar7 * 0xfffffffe + 1];
            puVar4[(uint)bVar7 * -2 + 1] =
                 (auStack_a4 + (uint)bVar7 * 0xfffffffe + (uint)bVar7 * 0xfffffffe + 1)
                 [(uint)bVar7 * -2 + 1];
          }
          puVar5 = puVar5 + 4;
          iVar3 = iVar3 + 1;
          local_20 = local_20 + 0x10;
          local_28 = local_28 + 0x24;
          local_1c = local_1c + 0x10;
        } while (iVar3 < *(int *)(local_18 + 0x1de78));
      }
    }
    else {
      _DAT_01d1d400 = "..\\core\\skeleton.cpp";
      _DAT_01d1d404 = 0xaf4;
      FUN_005030e0("Write me!");
    }
    if (param_5 < 0) {
      puVar5 = (uint *)(param_1 + 0x50c + (uint)bVar7 * -8);
      local_70 = *(float *)(param_1 + 0x508);
      auStack_a4[(uint)bVar7 * 0xfffffffe + 0xe] = *puVar5;
      auStack_a4[(uint)bVar7 * 0xfffffffe + (uint)bVar7 * 0xfffffffe + 0xf] =
           puVar5[(uint)bVar7 * -2 + 1];
      local_70 = local_70 * *param_3;
      local_6c = local_6c * param_3[1];
      local_68 = local_68 * param_3[2];
      fStack_88 = local_70 * param_4;
      fVar1 = 1.0 - param_4;
      fStack_84 = local_6c * param_4;
      fStack_80 = local_68 * param_4;
      afStack_54[2] = fStack_88;
      afStack_54[(uint)bVar7 * 0xfffffffe + 3] = (float)auStack_a4[(uint)bVar7 * 0xfffffffe + 8];
      afStack_54[(uint)bVar7 * 0xfffffffe + (uint)bVar7 * 0xfffffffe + 4] =
           (float)auStack_a4[(uint)bVar7 * 0xfffffffe + (uint)bVar7 * 0xfffffffe + 9];
      fStack_34 = fVar1;
      fStack_7c = *(float *)(param_1 + 0x6a4) * fVar1;
      fStack_78 = *(float *)(param_1 + 0x6a8) * fVar1;
      fStack_74 = *(float *)(param_1 + 0x6ac) * fVar1;
      fStack_40 = fStack_7c;
      afStack_54[(uint)bVar7 * 0xfffffffe + 6] = (float)auStack_a4[(uint)bVar7 * 0xfffffffe + 0xb];
      afStack_54[(uint)bVar7 * 0xfffffffe + (uint)bVar7 * 0xfffffffe + 7] =
           (float)auStack_a4[(uint)bVar7 * 0xfffffffe + (uint)bVar7 * 0xfffffffe + 0xc];
      fStack_64 = fStack_40 + afStack_54[2];
      fStack_60 = fStack_3c + afStack_54[3];
      fStack_5c = fStack_38 + fStack_44;
      fStack_58 = fStack_40 + afStack_54[2];
      *(uint *)((int)afStack_54 + (uint)bVar7 * -8) =
           auStack_a4[(uint)bVar7 * 0xfffffffe + 0x11];
      afStack_54[(uint)bVar7 * 0xfffffffe + (uint)bVar7 * 0xfffffffe + 1] =
           (float)auStack_a4[(uint)bVar7 * 0xfffffffe + (uint)bVar7 * 0xfffffffe + 0x12];
      if ((float *)(param_1 + 0x6a4) != &fStack_58) {
        *(float *)(param_1 + 0x6a4) = fStack_58;
        *(float *)(param_1 + 0x6a8) = afStack_54[0];
        *(float *)(param_1 + 0x6ac) = afStack_54[1];
        return;
      }
    }
  }
  return;
}
