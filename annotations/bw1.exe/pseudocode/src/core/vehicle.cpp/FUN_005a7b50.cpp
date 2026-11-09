// Name: core_vehicle.cpp_FUN_005a7b50
// Address: 005a7b50
// Address Range: [[005a7b50, 005a8489]]
// Convention: unknown
// Signature: uint core_vehicle_cpp_FUN_005a7b50(CVehicle *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_vehicle_cpp_FUN_005a7b50(CVehicle *param_1,float param_2)

{
  byte *puVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  CMobster *this_ptr;
  CMobster *actor;
  CTommyGun *this_ptr_00;
  CTommyGun *actor_00;
  int iVar5;
  int iVar6;
  CVehicle *pCVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  byte bVar11;
  float afStackY_10c8 [975];
  char *pcVar12;
  float fStack_178;
  SDamageInfo aSStack_174 [4];
  uint uStack_170;
  uint uStack_144;
  byte auStack_138 [28];
  float fStack_11c;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float afStack_f8 [6];
  uint uStack_e0;
  float afStack_dc [4];
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  CVector3f CStack_a4;
  float fStack_98;
  float afStack_94 [5];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  uint uStack_74;
  float afStack_70 [4];
  uint uStack_60;
  float fStack_5c;
  float fStack_54;
  float fStack_50;
  uint uStack_4c;
  uint uStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  bVar11 = 0;
  iStack_18 = *(int *)&param_1->field_0x1020;
  fStack_38 = (*(float *)&param_1->field_0x102c / *(float *)&param_1->field_0x1030) *
              (float)iStack_18;
  core_course_cpp_FUN_00447f00
            ((CCourse *)&param_1->field_0x1020,fStack_38,(CVector3f *)&fStack_80,&CStack_a4);
  fVar2 = *(float *)&param_1->field_0x102c + param_2;
  *(float *)&param_1->field_0x102c = fVar2;
  if (*(float *)&param_1->field_0x1030 < fVar2) {
    *(float *)&param_1->field_0x102c =
         *(float *)&param_1->field_0x102c - *(float *)&param_1->field_0x1030;
  }
  iStack_18 = *(int *)&param_1->field_0x1020;
  fStack_38 = (*(float *)&param_1->field_0x102c / *(float *)&param_1->field_0x1030) *
              (float)iStack_18;
  core_course_cpp_FUN_00447f00
            ((CCourse *)&param_1->field_0x1020,fStack_38,(CVector3f *)&param_1->field_0x20,
             (CVector3f *)&param_1->field_0x30);
  fStack_30 = 0.0;
  fStack_bc = *(float *)&param_1->field_0x20 - fStack_80;
  fStack_b8 = *(float *)&param_1->field_0x24 - fStack_7c;
  fStack_b4 = *(float *)&param_1->field_0x28 - fStack_78;
  puVar1 = &param_1->field_0x8c4;
  fStack_98 = fStack_bc;
  afStack_94[(uint)bVar11 * -2] = afStack_dc[(uint)bVar11 * -2 + 9];
  afStack_94[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
  if (param_2 <= 0.0) {
    if (puVar1 != &DAT_02c8af28) {
      *(uint *)puVar1 = _DAT_02c8af28;
      *(uint *)&param_1->field_0x8c8 = _DAT_02c8af2c;
      *(uint *)&param_1->field_0x8cc = _DAT_02c8af30;
    }
  }
  else {
    param_2 = 1.0 / param_2;
    afStack_dc[2] = fStack_98 * param_2;
    afStack_dc[3] = afStack_94[0] * param_2;
    fStack_cc = afStack_94[1] * param_2;
    fStack_50 = fStack_98 * param_2;
    afStack_70[(uint)bVar11 * -2 + 9] = afStack_dc[(uint)bVar11 * -2 + 3];
    afStack_70[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
         afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    if ((float *)puVar1 != afStack_70 + 8) {
      *(float *)puVar1 = fStack_50;
      *(uint *)&param_1->field_0x8c8 = uStack_4c;
      *(uint *)&param_1->field_0x8cc = uStack_48;
    }
    fStack_30 = SQRT(*(float *)&param_1->field_0x8cc * *(float *)&param_1->field_0x8cc +
                     *(float *)&param_1->field_0x8c4 * *(float *)&param_1->field_0x8c4 +
                     *(float *)&param_1->field_0x8c8 * *(float *)&param_1->field_0x8c8);
  }
  fStack_c8 = *(float *)&param_1->field_0x8c4 * _DAT_005f906b;
  fStack_c4 = *(float *)&param_1->field_0x8c8 * _DAT_005f906b;
  fStack_c0 = *(float *)&param_1->field_0x8cc * _DAT_005f906b;
  afStack_70[2] = fStack_c8;
  afStack_70[(uint)bVar11 * -2 + 3] = afStack_dc[(uint)bVar11 * -2 + 6];
  afStack_70[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
       afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
  if ((float *)&param_1->field_0x1060 != afStack_70 + 2) {
    *(float *)&param_1->field_0x1060 = afStack_70[2];
    *(float *)&param_1->field_0x1064 = afStack_70[3];
    *(uint *)&param_1->field_0x1068 = uStack_60;
  }
  core_actor_cpp_FUN_00408b00(param_1,&param_1->field_0x8c4);
  uStack_e0 = uStack_74;
  afStack_dc[(uint)bVar11 * -2] = afStack_70[(uint)bVar11 * -2];
  afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       afStack_70[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  if ((uint *)&param_1->field_0x8d0 != &uStack_e0) {
    *(uint *)&param_1->field_0x8d0 = uStack_e0;
    *(float *)&param_1->field_0x8d4 = afStack_dc[0];
    *(float *)&param_1->field_0x8d8 = afStack_dc[1];
  }
  iVar6 = 0;
  pCVar7 = param_1;
  if (0 < *(int *)&param_1->field_0x938) {
    do {
      iVar6 = iVar6 + 1;
      *(float *)&pCVar7->field_0xacc =
           *(float *)&pCVar7->field_0x948 * fStack_30 + *(float *)&pCVar7->field_0xacc;
      pCVar7 = (CVehicle *)&pCVar7->field_0x1b4;
    } while (iVar6 < *(int *)&param_1->field_0x938);
  }
  *(uint *)&param_1->field_0x30 = 0;
  fVar2 = *(float *)&param_1->field_0x34 + _DAT_005f9073;
  *(float *)&param_1->field_0x24 = *(float *)&param_1->field_0x24 + _DAT_005f906f;
  *(float *)&param_1->field_0x34 = fVar2;
  (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1);
  iStack_20 = 0;
  iStack_24 = 0;
  pfVar8 = afStack_f8;
  pfVar9 = &fStack_110;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar9 = *pfVar8;
    pfVar8 = pfVar8 + (uint)bVar11 * -2 + 1;
    pfVar9 = pfVar9 + (uint)bVar11 * -2 + 1;
  }
  for (; iStack_20 < *(int *)&g_CDemonSetPtr->field_0x14f0a8; iStack_20 = iStack_20 + 1) {
    iStack_1c = *(int *)(&g_CDemonSetPtr->field_0x14f0ac + iStack_24);
    iVar6 = (CMobster *)core_actor_cpp_castToClassHash_FUN_0040c600(iStack_1c,g_CMobsterClassInfo.name_hash);
    if ((iVar6 == 0) || (param_1 != *(CVehicle **)(iVar6 + 0xc28c))) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_005593c0((SCollisionInfo *)auStack_138);
      iVar6 = (**(code **)(*(int *)(iStack_1c + 0x154) + 0x3c))(iStack_1c,auStack_138);
      if ((iVar6 == 2) &&
         ((*(float *)(iStack_1c + 0x24) <= *(float *)&param_1->field_0x24 + fStack_100 &&
          (*(float *)&param_1->field_0x24 + fStack_10c <=
           *(float *)(iStack_1c + 0x24) + (float)auStack_138._24_4_)))) {
        core_actor_cpp_FUN_00408bb0(param_1,iStack_1c + 0x20);
        fStack_5c = afStack_94[2];
        afStack_70[(uint)bVar11 * -2 + 6] = afStack_94[(uint)bVar11 * -2 + 3];
        afStack_70[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
             afStack_94[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
        if ((fStack_110 <= fStack_5c + fStack_11c) &&
           ((fStack_5c - fStack_11c <= fStack_104 && (fStack_108 <= fStack_54 + fStack_11c)))) {
          fStack_178 = fStack_54 - fStack_11c;
          if (fStack_178 <= fStack_fc) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_174);
            uStack_144 = 4;
            uStack_170 = 0x4479c000;
            (**(code **)(*(int *)(iStack_1c + 0x154) + 0x108))(iStack_1c,aSStack_174);
          }
          else if ((fStack_178 < fStack_fc + (float)_DAT_005f908b) &&
                  (iVar6 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1->field_0x1054),
                  iVar6 == 0)) {
            uVar4 = core_vehicle_cpp_CVehicle_playTrackedSound_FUN_005a89c0
                              (param_1,"?model-t-horn?.wav" + 1);
            *(uint *)&param_1->field_0x1054 = uVar4;
          }
        }
      }
    }
    iStack_24 = iStack_24 + 4;
  }
  if (*(int *)&param_1->field_0x106c != 0) goto LAB_005a80a6;
  iVar6 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  fStack_b0 = *(float *)&param_1->field_0x20 - *(float *)(iVar6 + 0x20);
  fStack_ac = *(float *)&param_1->field_0x24 - *(float *)(iVar6 + 0x24);
  fStack_a8 = *(float *)&param_1->field_0x28 - *(float *)(iVar6 + 0x28);
  fStack_44 = fStack_b0;
  afStack_70[(uint)bVar11 * -2 + 0xc] = afStack_dc[(uint)bVar11 * -2 + 0xc];
  afStack_70[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
       afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
  if ((SQRT(fStack_3c * fStack_3c + fStack_44 * fStack_44 + fStack_40 * fStack_40) <=
       (float)_DAT_005f907b) || (0x671 < *(int *)&g_CDemonSetPtr->field_0x14d164))
  goto LAB_005a80a6;
  iVar6 = 0;
  iStack_2c = 0;
  iStack_28 = 0;
  for (iVar10 = 0; iVar10 < *(int *)&g_CDemonSetPtr->field_0x150fec; iVar10 = iVar10 + 1) {
    iVar5 = core_actor_cpp_castToClassHash_FUN_0040c600
                      (*(uint *)(&g_CDemonSetPtr->field_0x150ff0 + iVar6),
                       g_CMobsterClassInfo.name_hash);
    if ((iVar5 != 0) && (pCVar7 = *(CVehicle **)(iVar5 + 0xc28c), param_1 == pCVar7)) {
      if (*(int *)(iVar5 + 0xc290) == 0) {
        *(int *)&pCVar7->field_0x1070 = iVar5;
        iStack_28 = 1;
      }
      else {
        *(int *)&pCVar7->field_0x1074 = iVar5;
        iStack_2c = 1;
      }
    }
    iVar6 = iVar6 + 4;
  }
  if ((iStack_28 != 0) && (iStack_2c != 0)) goto LAB_005a80a6;
  if (iStack_28 == 0) {
    iVar6 = *(int *)&param_1->field_0x1070;
    if (iVar6 != 0) {
      iVar6 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x10c))(iVar6);
joined_r0x005a8421:
      if (iVar6 == 0) goto LAB_005a80a6;
    }
  }
  else if ((iStack_2c == 0) && (iVar6 = *(int *)&param_1->field_0x1074, iVar6 != 0)) {
    iVar6 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x10c))(iVar6);
    goto joined_r0x005a8421;
  }
  this_ptr = (CMobster *)FUN_005c0f32(0xc340);
  actor = (CMobster *)0x0;
  if (this_ptr != (CMobster *)0x0) {
    actor = core_mobster_cpp_CMobster_ctor_FUN_0051c7d0(this_ptr);
  }
  this_ptr_00 = (CTommyGun *)FUN_005c0f32(0x584);
  actor_00 = (CTommyGun *)0x0;
  if (this_ptr_00 != (CTommyGun *)0x0) {
    actor_00 = core_tommygun_cpp_CTommyGun_ctor_FUN_00598380(this_ptr_00);
  }
  if ((actor == (CMobster *)0x0) || (actor_00 == (CTommyGun *)0x0)) {
    _DAT_01d1d400 = "..\\core\\vehicle.cpp";
    _DAT_01d1d404 = 0x161;
    core_main_c_FUN_005030e0("CMobster::process - Out of memory!");
  }
  iVar6 = core_actor_cpp_FUN_0040cd00(0.5);
  if (iVar6 == 0) {
    pcVar12 = "mobster4.dfm";
  }
  else {
    pcVar12 = "mobster3.dfm";
  }
  core_skeleton_cpp_FUN_00569f50(&actor->field_0x158,pcVar12);
  *(CVehicle **)&actor->field_0xc28c = param_1;
  if (iStack_28 == 0) {
    *(uint *)&actor->field_0xc290 = 0;
    *(CMobster **)&param_1->field_0x1070 = actor;
  }
  else {
    *(uint *)&actor->field_0xc290 = 1;
    *(CMobster **)&param_1->field_0x1074 = actor;
  }
  core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60(0x01D2C900,(CDemonActor *)actor);
  core_mission_cpp_CDemonMission_generateActorName_FUN_0051bd60
            (0x01D2C900,(CDemonActor *)actor_00);
  *(uint *)&actor->field_0x20 = *(uint *)&param_1->field_0x20;
  *(uint *)&actor->field_0x24 = *(uint *)&param_1->field_0x24;
  *(uint *)&actor->field_0x28 = *(uint *)&param_1->field_0x28;
  *(uint *)&actor->field_0x2c = *(uint *)&param_1->field_0x2c;
  if (&actor->field_0x30 != &param_1->field_0x30) {
    *(uint *)&actor->field_0x30 = *(uint *)&param_1->field_0x30;
    *(uint *)&actor->field_0x34 = *(uint *)&param_1->field_0x34;
    *(uint *)&actor->field_0x38 = *(uint *)&param_1->field_0x38;
  }
  *(uint *)&actor_00->field_0x20 = *(uint *)&param_1->field_0x20;
  *(uint *)&actor_00->field_0x24 = *(uint *)&param_1->field_0x24;
  *(uint *)&actor_00->field_0x28 = *(uint *)&param_1->field_0x28;
  *(uint *)&actor_00->field_0x2c = *(uint *)&param_1->field_0x2c;
  if (&actor_00->field_0x30 != &param_1->field_0x30) {
    *(uint *)&actor_00->field_0x30 = *(uint *)&param_1->field_0x30;
    *(uint *)&actor_00->field_0x34 = *(uint *)&param_1->field_0x34;
    *(uint *)&actor_00->field_0x38 = *(uint *)&param_1->field_0x38;
  }
  (*(code *)**(uint **)&actor->field_0x154)(actor);
  (*(code *)**(uint **)&actor_00->field_0x154)(actor_00);
  core_charactr_cpp_FUN_004325b0(actor,1,actor_00,0,0);
  core_mission_cpp_CDemonMission_addActorToList_FUN_0051b160(0x01D2C900,(CDemonActor *)actor);
  core_mission_cpp_CDemonMission_addActorToList_FUN_0051b160(0x01D2C900,(CDemonActor *)actor_00);
LAB_005a80a6:
  iVar6 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1->field_0x1058);
  if (iVar6 == 0) {
    uVar4 = core_vehicle_cpp_CVehicle_playTrackedSound_FUN_005a89c0
                      (param_1,"ext-modelt-fast_??.wav");
    *(uint *)&param_1->field_0x1058 = uVar4;
  }
  sound_sndmain_cpp_FUN_00573980(*(uint *)&param_1->field_0x1058,1.0);
  fVar2 = ABS(*(float *)&param_1->field_0x8d0);
  fVar3 = (float)_DAT_005f9083;
  uVar4 = (uint)(ushort)((ushort)(fVar2 < fVar3) << 8 | (ushort)(NAN(fVar2) || NAN(fVar3)) << 10 |
                        (ushort)(fVar2 == fVar3) << 0xe);
  if ((fVar2 >= fVar3 && (fVar2 == fVar3) == 0) &&
     (uVar4 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1->field_0x105c), uVar4 == 0)) {
    uVar4 = core_vehicle_cpp_CVehicle_playTrackedSound_FUN_005a89c0(param_1,"skid_??.wav");
    *(uint *)&param_1->field_0x105c = uVar4;
    return uVar4;
  }
  return uVar4;
}
