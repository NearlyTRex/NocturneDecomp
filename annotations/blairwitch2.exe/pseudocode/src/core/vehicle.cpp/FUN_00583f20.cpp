// Name: core_vehicle.cpp_FUN_00583f20
// Address: 00583f20
// Address Range: [[00583f20, 0058485b]]
// Convention: unknown
// Signature: uint core_vehicle_cpp_FUN_00583f20(CVehicle *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_vehicle_cpp_FUN_00583f20(CVehicle *param_1,float param_2)

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
  char *model_name;
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
  iStack_18 = *(int *)&param_1->field_0x117c;
  fStack_38 = (*(float *)&param_1->field_0x1188 / *(float *)&param_1->field_0x118c) *
              (float)iStack_18;
  core_course_cpp_FUN_00438c40
            ((CCourse *)&param_1->field_0x117c,fStack_38,(CVector3f *)&fStack_80,&CStack_a4);
  fVar2 = *(float *)&param_1->field_0x1188 + param_2;
  *(float *)&param_1->field_0x1188 = fVar2;
  if (*(float *)&param_1->field_0x118c < fVar2) {
    *(float *)&param_1->field_0x1188 =
         *(float *)&param_1->field_0x1188 - *(float *)&param_1->field_0x118c;
  }
  iStack_18 = *(int *)&param_1->field_0x117c;
  fStack_38 = (*(float *)&param_1->field_0x1188 / *(float *)&param_1->field_0x118c) *
              (float)iStack_18;
  core_course_cpp_FUN_00438c40
            ((CCourse *)&param_1->field_0x117c,fStack_38,(CVector3f *)&param_1->field_0x20,
             (CVector3f *)&param_1->field_0x30);
  fStack_30 = 0.0;
  fStack_bc = *(float *)&param_1->field_0x20 - fStack_80;
  fStack_b8 = *(float *)&param_1->field_0x24 - fStack_7c;
  fStack_b4 = *(float *)&param_1->field_0x28 - fStack_78;
  puVar1 = &param_1->field_0xa20;
  fStack_98 = fStack_bc;
  afStack_94[(uint)bVar11 * -2] = afStack_dc[(uint)bVar11 * -2 + 9];
  afStack_94[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
  if (param_2 <= 0.0) {
    if (puVar1 != &DAT_0265370c) {
      *(uint *)puVar1 = _DAT_0265370c;
      *(uint *)&param_1->field_0xa24 = _DAT_02653710;
      *(uint *)&param_1->field_0xa28 = _DAT_02653714;
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
      *(uint *)&param_1->field_0xa24 = uStack_4c;
      *(uint *)&param_1->field_0xa28 = uStack_48;
    }
    fStack_30 = SQRT(*(float *)&param_1->field_0xa28 * *(float *)&param_1->field_0xa28 +
                     *(float *)&param_1->field_0xa20 * *(float *)&param_1->field_0xa20 +
                     *(float *)&param_1->field_0xa24 * *(float *)&param_1->field_0xa24);
  }
  fStack_c8 = *(float *)&param_1->field_0xa20 * _DAT_005edd0f;
  fStack_c4 = *(float *)&param_1->field_0xa24 * _DAT_005edd0f;
  fStack_c0 = *(float *)&param_1->field_0xa28 * _DAT_005edd0f;
  afStack_70[2] = fStack_c8;
  afStack_70[(uint)bVar11 * -2 + 3] = afStack_dc[(uint)bVar11 * -2 + 6];
  afStack_70[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
       afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
  if ((float *)&param_1->field_0x11bc != afStack_70 + 2) {
    *(float *)&param_1->field_0x11bc = afStack_70[2];
    *(float *)&param_1->field_0x11c0 = afStack_70[3];
    *(uint *)&param_1->field_0x11c4 = uStack_60;
  }
  core_actor_cpp_FUN_00408d30(param_1,&param_1->field_0xa20);
  uStack_e0 = uStack_74;
  afStack_dc[(uint)bVar11 * -2] = afStack_70[(uint)bVar11 * -2];
  afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       afStack_70[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  if ((uint *)&param_1->field_0xa2c != &uStack_e0) {
    *(uint *)&param_1->field_0xa2c = uStack_e0;
    *(float *)&param_1->field_0xa30 = afStack_dc[0];
    *(float *)&param_1->field_0xa34 = afStack_dc[1];
  }
  iVar6 = 0;
  pCVar7 = param_1;
  if (0 < *(int *)&param_1->field_0xa94) {
    do {
      iVar6 = iVar6 + 1;
      *(float *)&pCVar7->field_0xc28 =
           *(float *)&pCVar7->field_0xaa4 * fStack_30 + *(float *)&pCVar7->field_0xc28;
      pCVar7 = (CVehicle *)&pCVar7->field_0x1b4;
    } while (iVar6 < *(int *)&param_1->field_0xa94);
  }
  *(uint *)&param_1->field_0x30 = 0;
  fVar2 = *(float *)&param_1->field_0x34 + _DAT_005edd17;
  *(float *)&param_1->field_0x24 = *(float *)&param_1->field_0x24 + _DAT_005edd13;
  *(float *)&param_1->field_0x34 = fVar2;
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1);
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
    iVar6 = (CMobster *)core_actor_cpp_castToClassHash_FUN_0040c8f0(iStack_1c,g_CMobsterClassInfo.name_hash);
    if ((iVar6 == 0) || (param_1 != *(CVehicle **)(iVar6 + 0x10b1c))) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_00537fa0((SCollisionInfo *)auStack_138);
      iVar6 = (**(code **)(*(int *)(iStack_1c + 0x2b0) + 0x44))(iStack_1c,auStack_138);
      if ((iVar6 == 2) &&
         ((*(float *)(iStack_1c + 0x24) <= *(float *)&param_1->field_0x24 + fStack_100 &&
          (*(float *)&param_1->field_0x24 + fStack_10c <=
           *(float *)(iStack_1c + 0x24) + (float)auStack_138._24_4_)))) {
        core_actor_cpp_FUN_00408de0(param_1,iStack_1c + 0x20);
        fStack_5c = afStack_94[2];
        afStack_70[(uint)bVar11 * -2 + 6] = afStack_94[(uint)bVar11 * -2 + 3];
        afStack_70[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
             afStack_94[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
        if ((fStack_110 <= fStack_5c + fStack_11c) &&
           ((fStack_5c - fStack_11c <= fStack_104 && (fStack_108 <= fStack_54 + fStack_11c)))) {
          fStack_178 = fStack_54 - fStack_11c;
          if (fStack_178 <= fStack_fc) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_174);
            uStack_144 = 4;
            uStack_170 = 0x4479c000;
            (**(code **)(*(int *)(iStack_1c + 0x2b0) + 0x110))(iStack_1c,aSStack_174);
          }
          else if ((fStack_178 < fStack_fc + (float)_DAT_005edd2f) &&
                  (iVar6 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1->field_0x11b0),
                  iVar6 == 0)) {
            uVar4 = core_vehicle_cpp_FUN_00584d90(param_1,"?model-t-horn?.wav" + 1);
            *(uint *)&param_1->field_0x11b0 = uVar4;
          }
        }
      }
    }
    iStack_24 = iStack_24 + 4;
  }
  if (*(int *)&param_1->field_0x11c8 != 0) goto LAB_00584476;
  iVar6 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  fStack_b0 = *(float *)&param_1->field_0x20 - *(float *)(iVar6 + 0x20);
  fStack_ac = *(float *)&param_1->field_0x24 - *(float *)(iVar6 + 0x24);
  fStack_a8 = *(float *)&param_1->field_0x28 - *(float *)(iVar6 + 0x28);
  fStack_44 = fStack_b0;
  afStack_70[(uint)bVar11 * -2 + 0xc] = afStack_dc[(uint)bVar11 * -2 + 0xc];
  afStack_70[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
       afStack_dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
  if ((SQRT(fStack_3c * fStack_3c + fStack_44 * fStack_44 + fStack_40 * fStack_40) <=
       (float)_DAT_005edd1f) || (0x671 < *(int *)&g_CDemonSetPtr->field_0x14d164))
  goto LAB_00584476;
  iVar6 = 0;
  iStack_2c = 0;
  iStack_28 = 0;
  for (iVar10 = 0; iVar10 < *(int *)&g_CDemonSetPtr->field_0x150fec; iVar10 = iVar10 + 1) {
    iVar5 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                      (*(uint *)(&g_CDemonSetPtr->field_0x150ff0 + iVar6),
                       g_CMobsterClassInfo.name_hash);
    if ((iVar5 != 0) && (pCVar7 = *(CVehicle **)(iVar5 + 0x10b1c), param_1 == pCVar7)) {
      if (*(int *)(iVar5 + 0x10b20) == 0) {
        *(int *)&pCVar7->field_0x11cc = iVar5;
        iStack_28 = 1;
      }
      else {
        *(int *)&pCVar7->field_0x11d0 = iVar5;
        iStack_2c = 1;
      }
    }
    iVar6 = iVar6 + 4;
  }
  if ((iStack_28 != 0) && (iStack_2c != 0)) goto LAB_00584476;
  if (iStack_28 == 0) {
    iVar6 = *(int *)&param_1->field_0x11cc;
    if (iVar6 != 0) {
      iVar6 = (**(code **)(*(int *)(iVar6 + 0x2b0) + 0x114))(iVar6);
joined_r0x005847f3:
      if (iVar6 == 0) goto LAB_00584476;
    }
  }
  else if ((iStack_2c == 0) && (iVar6 = *(int *)&param_1->field_0x11d0, iVar6 != 0)) {
    iVar6 = (**(code **)(*(int *)(iVar6 + 0x2b0) + 0x114))(iVar6);
    goto joined_r0x005847f3;
  }
  this_ptr = (CMobster *)FUN_005b8be2(0x10bd0);
  actor = (CMobster *)0x0;
  if (this_ptr != (CMobster *)0x0) {
    actor = core_mobster_cpp_CMobster_ctor_FUN_004fd810(this_ptr);
  }
  this_ptr_00 = (CTommyGun *)FUN_005b8be2(0x6e0);
  actor_00 = (CTommyGun *)0x0;
  if (this_ptr_00 != (CTommyGun *)0x0) {
    actor_00 = core_tommygun_cpp_CTommyGun_ctor_FUN_00575760(this_ptr_00);
  }
  if ((actor == (CMobster *)0x0) || (actor_00 == (CTommyGun *)0x0)) {
    _DAT_01d046a0 = "..\\core\\vehicle.cpp";
    _DAT_01d046a4 = 0x161;
    core_main_c_FUN_004e4500("CMobster::process - Out of memory!");
  }
  iVar6 = core_actor_cpp_FUN_0040d060(0.5);
  if (iVar6 == 0) {
    model_name = "mobster4.dfm";
  }
  else {
    model_name = "mobster3.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&actor->field_0x2b4,model_name);
  *(CVehicle **)&actor->field_0x10b1c = param_1;
  if (iStack_28 == 0) {
    *(uint *)&actor->field_0x10b20 = 0;
    *(CMobster **)&param_1->field_0x11cc = actor;
  }
  else {
    *(uint *)&actor->field_0x10b20 = 1;
    *(CMobster **)&param_1->field_0x11d0 = actor;
  }
  core_mission_cpp_CDemonMission_generateActorName_FUN_004fcda0(0x01D182F0,(CDemonActor *)actor);
  core_mission_cpp_CDemonMission_generateActorName_FUN_004fcda0
            (0x01D182F0,(CDemonActor *)actor_00);
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
  (**(code **)(*(int *)&actor->field_0x2b0 + 8))(actor);
  (**(code **)(*(int *)&actor_00->field_0x2b0 + 8))(actor_00);
  core_charactr_cpp_FUN_00428b10(actor,1,actor_00,0,0);
  core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200(0x01D182F0,(CDemonActor *)actor);
  core_mission_cpp_CDemonMission_addActorToList_FUN_004fc200(0x01D182F0,(CDemonActor *)actor_00);
LAB_00584476:
  iVar6 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1->field_0x11b4);
  if (iVar6 == 0) {
    uVar4 = core_vehicle_cpp_FUN_00584d90(param_1,"ext-modelt-fast_??.wav");
    *(uint *)&param_1->field_0x11b4 = uVar4;
  }
  sound_sndmain_cpp_FUN_00550f50(*(uint *)&param_1->field_0x11b4,1.0);
  fVar2 = ABS(*(float *)&param_1->field_0xa2c);
  fVar3 = (float)_DAT_005edd27;
  uVar4 = (uint)(ushort)((ushort)(fVar2 < fVar3) << 8 | (ushort)(NAN(fVar2) || NAN(fVar3)) << 10 |
                        (ushort)(fVar2 == fVar3) << 0xe);
  if ((fVar2 >= fVar3 && (fVar2 == fVar3) == 0) &&
     (uVar4 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1->field_0x11b8), uVar4 == 0)) {
    uVar4 = core_vehicle_cpp_FUN_00584d90(param_1,"skid_??.wav");
    *(uint *)&param_1->field_0x11b8 = uVar4;
    return uVar4;
  }
  return uVar4;
}
