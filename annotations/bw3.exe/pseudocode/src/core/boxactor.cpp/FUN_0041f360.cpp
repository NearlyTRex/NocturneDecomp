// Name: core_boxactor.cpp_FUN_0041f360
// Address: 0041f360
// Address Range: [[0041f360, 0041f8dd]]
// Convention: unknown
// Signature: void core_boxactor_cpp_FUN_0041f360(CDemonActor *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_boxactor_cpp_FUN_0041f360(CDemonActor *param_1,float param_2)

{
  char cVar1;
  int iVar2;
  CKeyFramedModel *pCVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  byte bVar8;
  float10 fVar9;
  float afStackY_10c8 [986];
  CBox *this_ptr;
  float fVar10;
  float fStack_150;
  SDamageInfo aSStack_14c [4];
  float fStack_148;
  CDemonActor *pCStack_118;
  CDemonActor *pCStack_114;
  float afStack_110 [6];
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float afStack_dc [4];
  uint uStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float afStack_b0 [3];
  float afStack_a4 [3];
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
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
  if (param_1[4].field_0x104 != '\0') {
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                      (0x01C6E360,&param_1[4].field_0x104);
    if (iVar4 != 0) {
      *(uint *)&param_1->field_0xfc = 1;
      *(uint *)&param_1->field_0xf8 = 0;
      *(uint *)&param_1[5].field_0x24 = *(uint *)&param_1[5].field_0x28;
    }
  }
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
                     ((CKeyFramedModelInstance *)(param_1 + 1));
  iVar2 = *(int *)&pCVar3->field_0x100;
  fVar10 = *(float *)&param_1[2].field_0x5c + *(float *)&param_1[2].field_0x60;
  *(float *)&param_1[2].field_0x60 = fVar10;
  dStack_2c = floor((double)fVar10);
  fVar9 = (float10)dStack_2c;
  round();
  iVar4 = (int)ROUND(fVar9);
  fStack_24 = *(float *)&param_1[2].field_0x60 - (float)iVar4;
  if (iVar4 < 0) {
    iStack_20 = iVar2 - -iVar4 % iVar2;
  }
  else {
    iStack_20 = iVar4 % iVar2;
  }
  iStack_1c = iStack_20;
  fStack_18 = (float)iVar2;
  *(float *)&param_1[2].field_0x60 = (float)iStack_20 + fStack_24;
  if ((float)iVar2 <= *(float *)&param_1[2].field_0x60) {
    *(uint *)&param_1[2].field_0x60 = 0;
  }
  fStack_c8 = *(float *)&param_1[2].field_0x50 * param_2;
  fStack_c4 = *(float *)&param_1[2].field_0x54 * param_2;
  fStack_c0 = *(float *)&param_1[2].field_0x58 * param_2;
  fStack_8c = fStack_c8;
  afStack_dc[(uint)bVar8 * -2 + 0x15] = afStack_dc[(uint)bVar8 * -2 + 6];
  afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16] =
       afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
  fStack_74 = fStack_8c * _DAT_005b74f1;
  fStack_70 = fStack_88 * _DAT_005b74f1;
  fStack_6c = fStack_84 * _DAT_005b74f1;
  fStack_80 = fStack_8c * _DAT_005b74f1;
  afStack_dc[(uint)bVar8 * -2 + 0x18] = afStack_dc[(uint)bVar8 * -2 + 0x1b];
  afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x19] =
       afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1c];
  *(float *)&param_1->field_0x30 = *(float *)&param_1->field_0x30 + fStack_80;
  *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + fStack_7c;
  *(float *)&param_1->field_0x38 = *(float *)&param_1->field_0x38 + fStack_78;
  fStack_18 = (float)core_actor_cpp_FUN_0040cfa0(*(uint *)&param_1->field_0x30);
  *(float *)&param_1->field_0x30 = fStack_18;
  fStack_18 = (float)core_actor_cpp_FUN_0040cfa0(*(uint *)&param_1->field_0x38);
  *(float *)&param_1->field_0x38 = fStack_18;
  fStack_18 = (float)core_actor_cpp_FUN_0040cfa0(*(uint *)&param_1->field_0x34);
  cVar1 = param_1[2].field_0x24;
  *(float *)&param_1->field_0x34 = fStack_18;
  if (cVar1 != '\0') {
    iVar4 = core_sound_cpp_FUN_00560af0(0x02CF5680,*(uint *)&param_1[2].field_0x4c);
    if (iVar4 == 0) {
      sound_sndmain_cpp_FUN_00555fd0();
      iVar4 = 2;
      fStack_18 = (float)core_actor_cpp_FUN_0040ce40(0,0x3f800000);
      sound_sndmain_cpp_FUN_00555f60((double)fStack_18,iVar4);
      uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,&param_1[2].field_0x24);
      *(uint *)&param_1[2].field_0x4c = uVar5;
      sound_sndmain_cpp_FUN_00556050();
    }
  }
  if ((*(int *)&param_1[2].field_0x68 == 0) && (0.0 < *(float *)&param_1[2].field_0xe0)) {
    this_ptr = (CBox *)&param_1[2].field_0xe4;
    pfVar6 = (float *)((int)param_1 + (uint)bVar8 * -8 + 0x24);
    afStack_b0[0] = *(float *)&param_1->field_0x20;
    afStack_dc[(uint)bVar8 * -2 + 0xc] = *pfVar6;
    fVar10 = param_2;
    afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] = pfVar6[(uint)bVar8 * -2 + 1];
    core_box_cpp_CBox_process_FUN_0041b410(this_ptr,fVar10);
    if (&param_1->field_0x30 != &param_1[2].field_0xf0) {
      *(uint *)&param_1->field_0x30 = *(uint *)&param_1[2].field_0xf0;
      *(uint *)&param_1->field_0x34 = *(uint *)&param_1[2].field_0xf4;
      *(uint *)&param_1->field_0x38 = *(uint *)&param_1[2].field_0xf8;
    }
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(param_1);
    (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1);
    pfVar6 = afStack_110;
    pfVar7 = &fStack_f8;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar7 = *pfVar6;
      pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
      pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
    }
    fStack_38 = fStack_f8 + fStack_ec;
    fStack_34 = fStack_f4 + fStack_e8;
    fStack_30 = fStack_f0 + fStack_e4;
    fStack_bc = fStack_f8 + fStack_ec;
    afStack_dc[(uint)bVar8 * -2 + 9] = afStack_dc[(uint)bVar8 * -2 + 0x2a];
    afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
         afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x2b];
    pfVar6 = afStack_dc + 0xe;
    fStack_68 = fStack_bc * _DAT_005b74f5;
    fStack_64 = fStack_b8 * _DAT_005b74f5;
    fStack_60 = fStack_b4 * _DAT_005b74f5;
    fStack_50 = fStack_bc * _DAT_005b74f5;
    afStack_dc[(uint)bVar8 * -2 + 0x24] = afStack_dc[(uint)bVar8 * -2 + 0x1e];
    afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x25] =
         afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1f];
    fStack_98 = -fStack_50;
    fStack_94 = -fStack_4c;
    fStack_90 = -fStack_48;
    afStack_a4[0] = -fStack_50;
    afStack_dc[(uint)bVar8 * -2 + 0xf] = afStack_dc[(uint)bVar8 * -2 + 0x12];
    afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
         afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13];
    core_actor_cpp_FUN_00408b00(param_1,pfVar6);
    fStack_e0 = fStack_5c;
    afStack_dc[(uint)bVar8 * -2] = afStack_dc[(uint)bVar8 * -2 + 0x21];
    afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x22];
    fStack_44 = *(float *)&param_1[2].field_0xe4 + fStack_e0;
    fStack_40 = *(float *)&param_1[2].field_0xe8 + afStack_dc[0];
    fStack_3c = *(float *)&param_1[2].field_0xec + afStack_dc[1];
    afStack_dc[2] = fStack_44;
    afStack_dc[(uint)bVar8 * -2 + 3] = afStack_dc[(uint)bVar8 * -2 + 0x27];
    afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
         afStack_dc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x28];
    *(float *)&param_1->field_0x20 = afStack_dc[2];
    *(float *)&param_1->field_0x24 = afStack_dc[3];
    *(uint *)&param_1->field_0x28 = uStack_cc;
    fStack_150 = SQRT(*(float *)&param_1[2].field_0x12c * *(float *)&param_1[2].field_0x12c +
                      *(float *)&param_1[2].field_0x124 * *(float *)&param_1[2].field_0x124 +
                      *(float *)&param_1[2].field_0x128 * *(float *)&param_1[2].field_0x128);
    if ((float)_DAT_005b74f9 < fStack_150) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_14c);
      fStack_148 = fStack_150 * *(float *)&param_1[2].field_0xe0 * _DAT_005b7501;
      pCStack_118 = param_1;
      pCStack_114 = param_1;
      core_setcolid_cpp_FUN_0053ed10
                (g_CDemonSetPtr,afStack_dc + 0xb,&param_1->field_0x20,aSStack_14c);
    }
  }
  if (0.0 < *(float *)&param_1[5].field_0x24) {
    *(float *)&param_1[5].field_0x24 = *(float *)&param_1[5].field_0x24 - param_2;
  }
  if (0.0 <= *(float *)&param_1[5].field_0x24) {
    return;
  }
  *(uint *)&param_1[5].field_0x24 = 0;
  return;
}
