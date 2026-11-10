// Name: core_boxactor.cpp_FUN_004208d0
// Address: 004208d0
// Address Range: [[004208d0, 00420d0a]]
// Convention: unknown
// Signature: void core_boxactor_cpp_FUN_004208d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_boxactor_cpp_FUN_004208d0(int param_1)

{
  CKeyFramedModelInstance *this_ptr;
  uint uVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  CDemonFilter *this_ptr_00;
  byte bVar6;
  float afStackY_10c0 [979];
  char acStack_160 [40];
  float afStack_138 [6];
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float afStack_108 [6];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float afStack_d4 [4];
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  uint uStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_78;
  uint uStack_74;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_18;
  uint *puStack_14;
  
  bVar6 = 0;
  uVar1 = *(uint *)(param_1 + 0x6e8);
  if (uVar1 != 0) {
    iStack_18 = param_1 + 0x6ec;
    puStack_14 = (uint *)(param_1 + 0x36a4);
    this_ptr = (CKeyFramedModelInstance *)(param_1 + 0x158);
    if (uVar1 < 2) {
      core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
                (this_ptr,"flashlit.kfm");
      core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(this_ptr);
      (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
      fVar2 = _DAT_005b76e9;
      pfVar4 = afStack_138;
      pfVar5 = &fStack_f0;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar5 = *pfVar4;
        pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
        pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
      }
      fStack_a8 = fStack_f0 + fStack_e4;
      fStack_a4 = fStack_ec + fStack_e0;
      fStack_a0 = fStack_e8 + fStack_dc;
      fStack_90 = fStack_f0 + fStack_e4;
      afStack_d4[(uint)bVar6 * -2 + 0x12] = afStack_d4[(uint)bVar6 * -2 + 0xc];
      afStack_d4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
           afStack_d4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
      fStack_54 = fStack_90 * _DAT_005b76e9;
      fStack_50 = fStack_8c * _DAT_005b76e9;
      fStack_4c = fStack_88 * _DAT_005b76e9;
      fStack_84 = fStack_90 * _DAT_005b76e9;
      afStack_d4[(uint)bVar6 * -2 + 0x15] = afStack_d4[(uint)bVar6 * -2 + 0x21];
      afStack_d4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
           afStack_d4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22];
      *(float *)(param_1 + 0x3698) = fStack_84;
      fStack_6c = fStack_a8;
      fStack_68 = fStack_a4;
      fStack_64 = fStack_a0;
      afStack_d4[2] = fStack_a8;
      afStack_d4[(uint)bVar6 * -2 + 3] = afStack_d4[(uint)bVar6 * -2 + 0x1b];
      afStack_d4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           afStack_d4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c];
      fStack_30 = afStack_d4[2] * fVar2;
      fStack_2c = afStack_d4[3] * fVar2;
      fStack_28 = fStack_c4 * fVar2;
      fStack_9c = afStack_d4[2] * fVar2;
      afStack_d4[(uint)bVar6 * -2 + 0xf] = afStack_d4[(uint)bVar6 * -2 + 0x2a];
      afStack_d4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
           afStack_d4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2b];
      fVar2 = (float)_DAT_005b76f1;
      *(uint *)(param_1 + 0x369c) = uStack_98;
      *(float *)(param_1 + 0x36a0) = fStack_dc + fVar2;
      puStack_14[2] = 0;
      puStack_14[1] = puStack_14[2];
      *puStack_14 = puStack_14[1];
      *(uint *)(param_1 + 0x23a0) = 0;
      *(uint *)(iStack_18 + 0x38) = 0x42600000;
      *(uint *)(param_1 + 0x82c) = 0x42000000;
      *(uint *)(param_1 + 0x314) = 3;
      return;
    }
    if (uVar1 == 2) {
      core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
                (this_ptr,"lantern.kfm");
      core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(this_ptr);
      (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
      fVar2 = _DAT_005b76e9;
      pfVar4 = afStack_108;
      pfVar5 = &fStack_120;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar5 = *pfVar4;
        pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
        pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
      }
      fStack_48 = fStack_120 + fStack_114;
      fStack_44 = fStack_11c + fStack_110;
      fStack_40 = fStack_118 + fStack_10c;
      fStack_60 = fStack_120 + fStack_114;
      afStack_d4[(uint)bVar6 * -2 + 0x1e] = afStack_d4[(uint)bVar6 * -2 + 0x24];
      afStack_d4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f] =
           afStack_d4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25];
      fStack_3c = fStack_60 * _DAT_005b76e9;
      fStack_38 = fStack_5c * _DAT_005b76e9;
      fStack_34 = fStack_58 * _DAT_005b76e9;
      fStack_24 = fStack_60 * _DAT_005b76e9;
      afStack_d4[(uint)bVar6 * -2 + 0x2d] = afStack_d4[(uint)bVar6 * -2 + 0x27];
      afStack_d4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2e] =
           afStack_d4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x28];
      *(float *)(param_1 + 0x3698) = fStack_24;
      fStack_c0 = fStack_48;
      fStack_bc = fStack_44;
      fStack_b8 = fStack_40;
      fStack_b4 = fStack_48;
      afStack_d4[(uint)bVar6 * -2 + 9] = afStack_d4[(uint)bVar6 * -2 + 6];
      afStack_d4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
           afStack_d4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
      fStack_d8 = fStack_b4 * fVar2;
      afStack_d4[0] = fStack_b0 * fVar2;
      afStack_d4[1] = fStack_ac * fVar2;
      fStack_78 = fStack_b4 * fVar2;
      afStack_d4[(uint)bVar6 * -2 + 0x18] = afStack_d4[(uint)bVar6 * -2];
      afStack_d4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19] =
           afStack_d4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      *(uint *)(param_1 + 0x369c) = uStack_74;
      *(float *)(param_1 + 0x36a0) = fStack_10c;
      puStack_14[2] = 0;
      puStack_14[1] = puStack_14[2];
      *puStack_14 = puStack_14[1];
      *(uint *)(param_1 + 0x36a4) = 0x3e860a92;
      *(uint *)(param_1 + 0x23a0) = 0;
      *(uint *)(param_1 + 0x23a8) = 1;
      *(uint *)(iStack_18 + 0x38) = 0x42b40000;
      *(uint *)(param_1 + 0x82c) = 0x42400000;
      iVar3 = _DAT_007e1778;
      *(uint *)(param_1 + 0x314) = 2;
      if (iVar3 == 0) {
        this_ptr_00 = CDemonFilter_ARRAY_007e17b8;
        iVar3 = 0;
        do {
          _sprintf(acStack_160,"lantern%d.raw");
          iVar3 = iVar3 + 1;
          core_dfilter_cpp_CDemonFilter_load_FUN_00459980(this_ptr_00,acStack_160);
          this_ptr_00 = this_ptr_00 + 1;
        } while (iVar3 < 8);
        _DAT_007e1778 = 1;
      }
      core_dlight_cpp_CDemonLight_applyFilter_FUN_0045db40
                ((CDemonLight *)(param_1 + 0x6ec),CDemonFilter_ARRAY_007e17b8,0,0,0);
      return;
    }
  }
  return;
}
