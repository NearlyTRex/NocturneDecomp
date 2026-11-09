// Name: core_boxactor.cpp_FUN_0041c090
// Address: 0041c090
// Address Range: [[0041c090, 0041c57c]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_FUN_0041c090(CBoxActor *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_boxactor_cpp_FUN_0041c090(CBoxActor *this_ptr,float delta_time)

{
  int iVar1;
  float fVar2;
  CKeyFramedModel *pCVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  byte bVar8;
  float10 fVar9;
  float afStackY_10c8 [986];
  CBox *this_ptr_00;
  float fStack_150;
  SDamageInfo aSStack_14c [4];
  float fStack_148;
  CBoxActor *pCStack_118;
  CBoxActor *pCStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float afStack_f8 [6];
  float fStack_e0;
  float afStack_dc [5];
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float afStack_bc [3];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  uint uStack_7c;
  uint uStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
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
  double dStack_2c;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  
  bVar8 = 0;
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
                     ((CKeyFramedModelInstance *)&this_ptr->field_0x2b4);
  iVar1 = *(int *)&pCVar3->field_0x100;
  fVar2 = *(float *)&this_ptr->field_0x468 + *(float *)&this_ptr->field_0x46c;
  *(float *)&this_ptr->field_0x46c = fVar2;
  dStack_2c = floor((double)fVar2);
  fVar9 = (float10)dStack_2c;
  round();
  iVar4 = (int)ROUND(fVar9);
  fStack_24 = *(float *)&this_ptr->field_0x46c - (float)iVar4;
  if (iVar4 < 0) {
    iStack_20 = iVar1 - -iVar4 % iVar1;
  }
  else {
    iStack_20 = iVar4 % iVar1;
  }
  iStack_1c = iStack_20;
  fStack_18 = (float)iVar1;
  *(float *)&this_ptr->field_0x46c = (float)iStack_20 + fStack_24;
  if ((float)iVar1 <= *(float *)&this_ptr->field_0x46c) {
    *(uint *)&this_ptr->field_0x46c = 0;
  }
  fStack_c8 = *(float *)&this_ptr->field_0x45c * delta_time;
  fStack_c4 = *(float *)&this_ptr->field_0x460 * delta_time;
  fStack_c0 = *(float *)&this_ptr->field_0x464 * delta_time;
  fStack_98 = fStack_c8;
  afStack_dc[(uint)bVar8 * -2 + 0x12] = afStack_dc[(uint)bVar8 * -2 + 6];
  afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13] =
       afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
  fStack_e0 = fStack_98 * _DAT_005cc519;
  afStack_dc[0] = fStack_94 * _DAT_005cc519;
  afStack_dc[1] = fStack_90 * _DAT_005cc519;
  fStack_b0 = fStack_98 * _DAT_005cc519;
  afStack_dc[(uint)bVar8 * -2 + 0xc] = afStack_dc[(uint)bVar8 * -2];
  afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
       afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  *(float *)&this_ptr->field_0x30 = *(float *)&this_ptr->field_0x30 + fStack_b0;
  *(float *)&this_ptr->field_0x34 = *(float *)&this_ptr->field_0x34 + fStack_ac;
  *(float *)&this_ptr->field_0x38 = *(float *)&this_ptr->field_0x38 + fStack_a8;
  fStack_18 = (float)core_actor_cpp_FUN_0040d0c0(*(uint *)&this_ptr->field_0x30);
  *(float *)&this_ptr->field_0x30 = fStack_18;
  fStack_18 = (float)core_actor_cpp_FUN_0040d0c0(*(uint *)&this_ptr->field_0x38);
  *(float *)&this_ptr->field_0x38 = fStack_18;
  fStack_18 = (float)core_actor_cpp_FUN_0040d0c0(*(uint *)&this_ptr->field_0x34);
  *(float *)&this_ptr->field_0x34 = fStack_18;
  if (this_ptr->field_0x430 != '\0') {
    iVar4 = core_sound_cpp_FUN_0055af70(0x0264B290,*(uint *)&this_ptr->field_0x458);
    if (iVar4 == 0) {
      sound_sndmain_cpp_FUN_00550450();
      iVar4 = 2;
      fStack_18 = (float)core_actor_cpp_FUN_0040cf60(0,0x3f800000);
      sound_sndmain_cpp_FUN_005503e0((double)fStack_18,iVar4);
      uVar5 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))(this_ptr,&this_ptr->field_0x430);
      *(uint *)&this_ptr->field_0x458 = uVar5;
      sound_sndmain_cpp_FUN_005504d0();
    }
  }
  if ((*(int *)&this_ptr->field_0x474 == 0) && (0.0 < *(float *)&this_ptr->field_0x4ec)) {
    this_ptr_00 = (CBox *)&this_ptr->field_0x4f0;
    pfVar6 = (float *)((int)this_ptr + (uint)bVar8 * -8 + 0x24);
    afStack_bc[0] = *(float *)&this_ptr->field_0x20;
    afStack_dc[(uint)bVar8 * -2 + 9] = *pfVar6;
    afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] = pfVar6[(uint)bVar8 * -2 + 1];
    core_box_cpp_CBox_process_FUN_005b2290(this_ptr_00,delta_time);
    if (&this_ptr->field_0x30 != &this_ptr->field_0x4fc) {
      *(uint *)&this_ptr->field_0x30 = *(uint *)&this_ptr->field_0x4fc;
      *(uint *)&this_ptr->field_0x34 = *(uint *)&this_ptr->field_0x500;
      *(uint *)&this_ptr->field_0x38 = *(uint *)&this_ptr->field_0x504;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)this_ptr);
    (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x24))(this_ptr);
    pfVar6 = afStack_f8;
    pfVar7 = &fStack_110;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar7 = *pfVar6;
      pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
      pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
    }
    fStack_50 = fStack_110 + fStack_104;
    fStack_4c = fStack_10c + fStack_100;
    fStack_48 = fStack_108 + fStack_fc;
    fStack_5c = fStack_110 + fStack_104;
    afStack_dc[(uint)bVar8 * -2 + 0x21] = afStack_dc[(uint)bVar8 * -2 + 0x24];
    afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x22] =
         afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x25];
    pfVar6 = afStack_dc + 2;
    fStack_74 = fStack_5c * _DAT_005cc51d;
    fStack_70 = fStack_58 * _DAT_005cc51d;
    fStack_6c = fStack_54 * _DAT_005cc51d;
    fStack_44 = fStack_5c * _DAT_005cc51d;
    afStack_dc[(uint)bVar8 * -2 + 0x27] = afStack_dc[(uint)bVar8 * -2 + 0x1b];
    afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x28] =
         afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1c];
    fStack_38 = -fStack_44;
    fStack_34 = -fStack_40;
    fStack_30 = -fStack_3c;
    afStack_dc[2] = -fStack_44;
    afStack_dc[(uint)bVar8 * -2 + 3] = afStack_dc[(uint)bVar8 * -2 + 0x2a];
    afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
         afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x2b];
    core_actor_cpp_FUN_00408cf0(this_ptr,pfVar6);
    fStack_a4 = fStack_68;
    afStack_dc[(uint)bVar8 * -2 + 0xf] = afStack_dc[(uint)bVar8 * -2 + 0x1e];
    afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
         afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1f];
    fStack_8c = *(float *)&this_ptr->field_0x4f0 + fStack_a4;
    fStack_88 = *(float *)&this_ptr->field_0x4f4 + fStack_a0;
    fStack_84 = *(float *)&this_ptr->field_0x4f8 + fStack_9c;
    fStack_80 = fStack_8c;
    afStack_dc[(uint)bVar8 * -2 + 0x18] = afStack_dc[(uint)bVar8 * -2 + 0x15];
    afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x19] =
         afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16];
    *(float *)&this_ptr->field_0x20 = fStack_80;
    *(uint *)&this_ptr->field_0x24 = uStack_7c;
    *(uint *)&this_ptr->field_0x28 = uStack_78;
    fStack_150 = SQRT(*(float *)&this_ptr->field_0x538 * *(float *)&this_ptr->field_0x538 +
                      *(float *)&this_ptr->field_0x530 * *(float *)&this_ptr->field_0x530 +
                      *(float *)&this_ptr->field_0x534 * *(float *)&this_ptr->field_0x534);
    if ((float)_DAT_005cc521 < fStack_150) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_14c);
      fStack_148 = fStack_150 * *(float *)&this_ptr->field_0x4ec * _DAT_005cc529;
      pCStack_118 = this_ptr;
      pCStack_114 = this_ptr;
      core_setcolid_cpp_FUN_00537f30
                (g_CDemonSetPtr,afStack_dc + 8,&this_ptr->field_0x20,aSStack_14c);
      return;
    }
  }
  return;
}
