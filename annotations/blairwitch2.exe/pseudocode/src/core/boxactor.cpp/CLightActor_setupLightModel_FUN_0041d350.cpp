// Name: core_boxactor.cpp_CLightActor_setupLightModel_FUN_0041d350
// Address: 0041d350
// Address Range: [[0041d350, 0041d780]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CLightActor_setupLightModel_FUN_0041d350(CLightActor *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_boxactor_cpp_CLightActor_setupLightModel_FUN_0041d350(CLightActor *this_ptr)

{
  CKeyFramedModelInstance *this_ptr_00;
  ELightActorType EVar1;
  float fVar2;
  int iVar3;
  int unaff_EBP;
  uint *puVar4;
  uint *unaff_EDI;
  uint *puVar5;
  CDemonFilter *this_ptr_01;
  byte bVar6;
  float afStackY_10b8 [45];
  UOrientationVector *apUStackY_1004 [934];
  CBoundingBox3D *in_stack_fffffea0;
  char acStack_158 [40];
  uint auStack_130 [4];
  uint auStack_120 [2];
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  uint auStack_100 [4];
  uint auStack_f0 [2];
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float afStack_cc [4];
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_70;
  float fStack_6c;
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
  float fStack_20;
  float fStack_1c;
  CDemonLight *pCStack_18;
  UOrientationVector *pUStack_14;
  
  bVar6 = 0;
  EVar1 = this_ptr->light_actor_type;
  if (EVar1 != LIGHT_TYPE_CUSTOM) {
    pCStack_18 = &this_ptr->light;
    pUStack_14 = &this_ptr->light_orient;
    this_ptr_00 = &(this_ptr->base).model;
    if (EVar1 < LIGHT_TYPE_LANTERN) {
      core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
                (this_ptr_00,"flashlit.kfm");
      core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(this_ptr_00);
      (*((this_ptr->base).base.vtable._ub)->getBoundingBox)
                ((CDemonActor *)this_ptr,in_stack_fffffea0);
      fVar2 = _DAT_005cc6f5;
      puVar4 = auStack_130;
      puVar5 = auStack_f0;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      fStack_a0 = fStack_e8 + fStack_dc;
      fStack_9c = fStack_e4 + fStack_d8;
      fStack_98 = fStack_e0 + fStack_d4;
      fStack_88 = fStack_e8 + fStack_dc;
      afStack_cc[(uint)bVar6 * -2 + 0x12] = afStack_cc[(uint)bVar6 * -2 + 0xc];
      afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
           afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
      fStack_4c = fStack_88 * _DAT_005cc6f5;
      fStack_48 = fStack_84 * _DAT_005cc6f5;
      fStack_44 = fStack_80 * _DAT_005cc6f5;
      fStack_7c = fStack_88 * _DAT_005cc6f5;
      afStack_cc[(uint)bVar6 * -2 + 0x15] = afStack_cc[(uint)bVar6 * -2 + 0x21];
      afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
           afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22];
      (this_ptr->blight_pos).x = fStack_7c;
      fStack_64 = fStack_a0;
      fStack_60 = fStack_9c;
      fStack_5c = fStack_98;
      afStack_cc[2] = fStack_a0;
      afStack_cc[(uint)bVar6 * -2 + 3] = afStack_cc[(uint)bVar6 * -2 + 0x1b];
      afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c];
      fStack_28 = afStack_cc[2] * fVar2;
      fStack_24 = afStack_cc[3] * fVar2;
      fStack_20 = fStack_bc * fVar2;
      fStack_94 = afStack_cc[2] * fVar2;
      afStack_cc[(uint)bVar6 * -2 + 0xf] = afStack_cc[(uint)bVar6 * -2 + 0x2a];
      afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
           afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2b];
      fVar2 = (float)_DAT_005cc6f9;
      (this_ptr->blight_pos).y = fStack_90;
      (this_ptr->blight_pos).z = fStack_d4 + fVar2;
      unaff_EDI[2] = 0;
      unaff_EDI[1] = unaff_EDI[2];
      *unaff_EDI = unaff_EDI[1];
      (this_ptr->light).light_enabled_flag = 0;
      *(uint *)(unaff_EBP + 0x38) = 0x42600000;
      (this_ptr->light).base.max_distance = 32.0;
      (this_ptr->base).pickup_type = BOX_PICKUP_CARRY;
      return;
    }
    if (EVar1 == LIGHT_TYPE_LANTERN) {
      core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
                (this_ptr_00,"lantern.kfm");
      core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(this_ptr_00);
      (*((this_ptr->base).base.vtable._ub)->getBoundingBox)
                ((CDemonActor *)this_ptr,in_stack_fffffea0);
      fVar2 = _DAT_005cc6f5;
      puVar4 = auStack_100;
      puVar5 = auStack_120;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      fStack_40 = fStack_118 + fStack_10c;
      fStack_3c = fStack_114 + fStack_108;
      fStack_38 = fStack_110 + fStack_104;
      fStack_58 = fStack_118 + fStack_10c;
      afStack_cc[(uint)bVar6 * -2 + 0x1e] = afStack_cc[(uint)bVar6 * -2 + 0x24];
      afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f] =
           afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25];
      fStack_34 = fStack_58 * _DAT_005cc6f5;
      fStack_30 = fStack_54 * _DAT_005cc6f5;
      fStack_2c = fStack_50 * _DAT_005cc6f5;
      fStack_1c = fStack_58 * _DAT_005cc6f5;
      (&pCStack_18)[(uint)bVar6 * -2] = (CDemonLight *)afStack_cc[(uint)bVar6 * -2 + 0x27];
      (&pUStack_14)[(uint)bVar6 * -2 + (uint)bVar6 * -2] =
           (UOrientationVector *)afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x28];
      (this_ptr->blight_pos).x = fStack_1c;
      fStack_b8 = fStack_40;
      fStack_b4 = fStack_3c;
      fStack_b0 = fStack_38;
      fStack_ac = fStack_40;
      afStack_cc[(uint)bVar6 * -2 + 9] = afStack_cc[(uint)bVar6 * -2 + 6];
      afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
           afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
      fStack_d0 = fStack_ac * fVar2;
      afStack_cc[0] = fStack_a8 * fVar2;
      afStack_cc[1] = fStack_a4 * fVar2;
      fStack_70 = fStack_ac * fVar2;
      afStack_cc[(uint)bVar6 * -2 + 0x18] = afStack_cc[(uint)bVar6 * -2];
      afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19] =
           afStack_cc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      (this_ptr->blight_pos).y = fStack_6c;
      (this_ptr->blight_pos).z = fStack_104;
      unaff_EDI[2] = 0;
      unaff_EDI[1] = unaff_EDI[2];
      *unaff_EDI = unaff_EDI[1];
      (this_ptr->light_orient).vec.x = 0.2617994;
      (this_ptr->light).light_enabled_flag = 0;
      *(uint *)(unaff_EBP + 0x38) = 0x42600000;
      (this_ptr->light).base.max_distance = 32.0;
      iVar3 = _DAT_007bc9ac;
      (this_ptr->base).pickup_type = BOX_PICKUP_CARRY;
      if (iVar3 == 0) {
        this_ptr_01 = CDemonFilter_ARRAY_007bc9ec;
        iVar3 = 0;
        do {
          _sprintf(acStack_158,"lantern%d.raw");
          iVar3 = iVar3 + 1;
          core_dfilter_cpp_CDemonFilter_load_FUN_004478d0(this_ptr_01,acStack_158);
          this_ptr_01 = this_ptr_01 + 1;
        } while (iVar3 < 8);
        _DAT_007bc9ac = 1;
      }
      core_dlight_cpp_CDemonLight_applyFilter_FUN_0044b600
                (&this_ptr->light,CDemonFilter_ARRAY_007bc9ec,0,0,0);
      return;
    }
  }
  return;
}
