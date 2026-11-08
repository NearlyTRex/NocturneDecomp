// Name: FUN_0057f0b0
// Address: 0057f0b0
// Address Range: [[0057f0b0, 0057f6fd]]
// Convention: unknown
// Signature: void FUN_0057f0b0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057f0b0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  byte bVar5;
  float afStackY_10e8 [955];
  uint *puVar6;
  float fStack_1f0;
  float fStack_1ec;
  uint uStack_1e8;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  uint uStack_100;
  float fStack_f4;
  uint uStack_e8;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  uint uStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  uint uStack_b8;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  uint uStack_94;
  uint uStack_88;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  uint uStack_70;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  uint uStack_4c;
  uint uStack_40;
  uint uStack_34;
  int iStack_28;
  int iStack_20;
  float *pfStack_1c;
  int iStack_18;
  
  bVar5 = 0;
  iVar1 = *(int *)(param_1 + 0x8dc);
  if (iVar1 == 0) {
    FUN_00436710(PTR_DAT_00609ed0,"%s has no guard trigger!\n",param_1);
    return;
  }
  (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x24))(iVar1);
  iVar2 = 0;
  pfVar3 = (float *)&stack0xfffffed0;
  pfVar4 = &stack0xfffffe88;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar4 = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
  }
  FUN_0041b600(&stack0xfffffee8);
  do {
    FUN_0041a600(&stack0xfffffe88,iVar2);
    puVar6 = &stack0xffffff78;
    uStack_88 = uStack_40;
    *(uint *)((int)&stack0xffffff7c + (uint)bVar5 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffffc4 + (uint)bVar5 * -8);
    *(uint *)(&stack0xffffff80 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xffffffc8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    FUN_00408d70(*(uint *)(param_1 + 0x8dc),puVar6);
    puVar6 = &stack0xffffffcc;
    pfVar3 = &stack0xfffffee8;
    iVar2 = iVar2 + 1;
    uStack_34 = uStack_94;
    *(uint *)((int)&stack0xffffffd0 + (uint)bVar5 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff70 + (uint)bVar5 * -8);
    *(uint *)(&stack0xffffffd4 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xffffff74 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    FUN_0041a590(pfVar3,puVar6);
  } while (iVar2 < 8);
  fStack_64 = 999.0;
  fStack_60 = 999.0;
  fStack_5c = 999.0;
  pfStack_1c = (float *)&stack0xfffffec4;
  iStack_20 = 0;
  fStack_118 = fStack_118 + _DAT_005ed804;
  fStack_114 = fStack_114 + _DAT_005ed804;
  fStack_110 = fStack_110 + _DAT_005ed804;
  fStack_10c = fStack_10c + _DAT_005ed808;
  fStack_108 = fStack_108 + _DAT_005ed808;
  fStack_104 = fStack_104 + _DAT_005ed808;
  iStack_28 = param_1 + 0x8e0;
  for (iStack_18 = 0; iStack_18 < *(int *)(0x01E661B8 + 0x14d164); iStack_18 = iStack_18 + 1) {
    iVar1 = *(int *)(0x01E661B8 + iStack_20 + 0x14d168);
    iVar2 = FUN_0040c840(iVar1,iStack_28);
    if ((((iVar2 != 0) && (fStack_118 <= *(float *)(iVar1 + 0x20))) &&
        (fStack_114 <= *(float *)(iVar1 + 0x24))) &&
       (((fStack_110 <= *(float *)(iVar1 + 0x28) && (*(float *)(iVar1 + 0x20) <= fStack_10c)) &&
        ((*(float *)(iVar1 + 0x24) <= fStack_108 && (*(float *)(iVar1 + 0x28) <= fStack_104)))))) {
      iVar2 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 100))(iVar1);
      if (iVar2 != 0) {
        FUN_005b7f5f(&stack0xfffffe10,10,&DAT_005f22b0);
        iVar2 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x5c))(iVar1,&stack0xfffffe10);
        if (iVar2 < 1) {
          (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x24))(iVar1);
          pfVar3 = (float *)&stack0xfffffea0;
          pfVar4 = &stack0xfffffeb8;
          for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
            *pfVar4 = *pfVar3;
            pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
            pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
          }
          fStack_c4 = fStack_148 + *pfStack_1c;
          fStack_c0 = fStack_144 + pfStack_1c[1];
          fStack_bc = fStack_140 + pfStack_1c[2];
          fStack_7c = fStack_148 + *pfStack_1c;
          *(uint *)((int)&stack0xffffff88 + (uint)bVar5 * -8) =
               *(uint *)((int)&stack0xffffff40 + (uint)bVar5 * -8);
          *(uint *)((int)&stack0xffffff8c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
               *(uint *)((int)&stack0xffffff44 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
          fStack_dc = fStack_7c * _DAT_005ed80c;
          fStack_d8 = fStack_78 * _DAT_005ed80c;
          fStack_d4 = fStack_74 * _DAT_005ed80c;
          fStack_d0 = fStack_7c * _DAT_005ed80c;
          (&stack0xffffff34)[(uint)bVar5 * 0xfffffffe] =
               (&stack0xffffff28)[(uint)bVar5 * 0xfffffffe];
          *(uint *)((int)&stack0xffffff38 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
               *(uint *)((int)&stack0xffffff2c + (uint)bVar5 * -8 + (uint)bVar5 * -8);
          if (&stack0xfffffe10 != &stack0xffffff30) {
            fStack_1f0 = fStack_d0;
            fStack_1ec = fStack_cc;
            uStack_1e8 = uStack_c8;
          }
        }
        FUN_00408d70(iVar1,&stack0xfffffe10);
        puVar6 = &stack0xffffff48;
        uStack_b8 = uStack_4c;
        *(uint *)((int)&stack0xffffff4c + (uint)bVar5 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffffb8 + (uint)bVar5 * -8);
        *(uint *)(&stack0xffffff50 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             *(uint *)(&stack0xffffffbc + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        FUN_00408de0(*(uint *)(param_1 + 0x8dc),puVar6);
        fStack_ac = fStack_58;
        *(uint *)((int)&stack0xffffff58 + (uint)bVar5 * -8) =
             *(uint *)((int)&stack0xffffffac + (uint)bVar5 * 0xfffffffe * 4);
        *(uint *)((int)&stack0xffffff5c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             *(uint *)(&stack0xffffffb0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        if (((local_178 <= fStack_ac) && (fStack_174 <= fStack_a8)) &&
           ((fStack_170 <= fStack_a4 &&
            (((fStack_ac <= fStack_16c && (fStack_a8 <= fStack_168)) && (fStack_a4 <= fStack_164))))
           )) {
          FUN_00408de0(param_1,&stack0xffffff48);
          uStack_70 = uStack_100;
          *(uint *)((int)&stack0xffffff94 + (uint)bVar5 * 0xfffffffe * 4) =
               *(uint *)((int)&stack0xffffff04 + (uint)bVar5 * 0xfffffffe * 4);
          *(uint *)(&stack0xffffff98 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
               *(uint *)(&stack0xffffff08 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
          FUN_005838f0(&stack0xffffff90);
          fStack_a0 = fStack_f4;
          (&stack0xffffff64)[(uint)bVar5 * 0xfffffffe] =
               (float)*(uint *)(&stack0xffffff10 + (uint)bVar5 * -8);
          *(uint *)((int)&stack0xffffff68 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
               *(uint *)(&stack0xffffff14 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
          if (((0xBF060A92 <= fStack_a0) && (fStack_a0 <= 0x3F9C61AA)) &&
             (SQRT(fStack_98 * fStack_98 + fStack_a0 * fStack_a0 + fStack_9c * fStack_9c) <=
              SQRT(fStack_5c * fStack_5c + fStack_64 * fStack_64 + fStack_60 * fStack_60))) {
            if (&stack0xffffff9c != &stack0xffffff60) {
              fStack_64 = fStack_a0;
              fStack_60 = fStack_9c;
              fStack_5c = fStack_98;
            }
            if (&stack0xffffff18 != &stack0xffffff48) {
              uStack_e8 = uStack_b8;
            }
          }
        }
      }
    }
    iStack_20 = iStack_20 + 4;
  }
  if ((int)fStack_60 < 0x42c60001) {
    FUN_0057f700(param_1,&stack0xffffff18,param_2);
    if (*(float *)(param_1 + 0x45c) <= 0.0) {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0xec))(param_1);
    }
    *(uint *)(param_1 + 0x9c8) = 0x3f800000;
    return;
  }
  FUN_0057fa00(param_1,param_2);
  return;
}
