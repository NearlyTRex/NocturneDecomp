// Name: core_vehicle.cpp_CVehicle_process_FUN_0054eae0
// Address: 0054eae0
// Address Range: [[0054eae0, 0054f318]]
// Convention: unknown
// Signature: uint core_vehicle_cpp_CVehicle_process_FUN_0054eae0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_vehicle_cpp_CVehicle_process_FUN_0054eae0(int param_1,float param_2)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  byte auStack_104 [4];
  uint uStack_100;
  uint uStack_d4;
  byte auStack_c8 [24];
  float fStack_b0;
  float fStack_ac;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float local_84;
  float local_80;
  byte local_7c [12];
  float local_70;
  float local_6c;
  float local_68;
  float afStack_64 [2];
  float fStack_5c;
  float local_58;
  float local_54;
  float local_50;
  byte local_4c [12];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int local_14;
  
  local_14 = *(int *)(param_1 + 0x1018);
  local_28 = (*(float *)(param_1 + 0x1024) / *(float *)(param_1 + 0x1028)) * (float)local_14;
  core_course_cpp_CCourse_evaluate_FUN_0043b800
            ((int *)(param_1 + 0x1018),local_28,&local_70,local_7c);
  fVar3 = *(float *)(param_1 + 0x1024) + param_2;
  *(float *)(param_1 + 0x1024) = fVar3;
  if (*(float *)(param_1 + 0x1028) < fVar3) {
    *(float *)(param_1 + 0x1024) = *(float *)(param_1 + 0x1024) - *(float *)(param_1 + 0x1028);
  }
  local_14 = *(int *)(param_1 + 0x1018);
  local_28 = (*(float *)(param_1 + 0x1024) / *(float *)(param_1 + 0x1028)) * (float)local_14;
  core_course_cpp_CCourse_evaluate_FUN_0043b800
            ((int *)(param_1 + 0x1018),local_28,(float *)(param_1 + 0x20),param_1 + 0x30);
  local_88 = *(float *)(param_1 + 0x20) - local_70;
  local_84 = *(float *)(param_1 + 0x24) - local_6c;
  local_24 = 0.0;
  local_80 = *(float *)(param_1 + 0x28) - local_68;
  pfVar1 = (float *)(param_1 + 0x8bc);
  if (param_2 <= 0.0) {
    if (pfVar1 != (float *)&DAT_02dd1184) {
      *pfVar1 = _DAT_02dd1184;
      *(uint *)(param_1 + 0x8c0) = _DAT_02dd1188;
      *(uint *)(param_1 + 0x8c4) = _DAT_02dd118c;
    }
  }
  else {
    local_50 = 1.0 / param_2;
    local_58 = local_88 * local_50;
    local_54 = local_84 * local_50;
    local_50 = local_80 * local_50;
    if (pfVar1 != &local_58) {
      *pfVar1 = local_58;
      *(float *)(param_1 + 0x8c0) = local_54;
      *(float *)(param_1 + 0x8c4) = local_50;
    }
    local_24 = SQRT(*(float *)(param_1 + 0x8c4) * *(float *)(param_1 + 0x8c4) +
                    *(float *)(param_1 + 0x8bc) * *(float *)(param_1 + 0x8bc) +
                    *(float *)(param_1 + 0x8c0) * *(float *)(param_1 + 0x8c0));
  }
  local_34 = *(float *)(param_1 + 0x8bc) * _DAT_005973a8;
  local_30 = *(float *)(param_1 + 0x8c0) * _DAT_005973a8;
  local_2c = _DAT_005973a8 * *(float *)(param_1 + 0x8c4);
  if ((float *)(param_1 + 0x1058) != &local_34) {
    *(float *)(param_1 + 0x1058) = local_34;
    *(float *)(param_1 + 0x105c) = local_30;
    *(float *)(param_1 + 0x1060) = local_2c;
  }
  puVar5 = (uint *)
           core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
                     (param_1,local_4c,param_1 + 0x8bc);
  if ((uint *)(param_1 + 0x8c8) != puVar5) {
    *(uint *)(param_1 + 0x8c8) = *puVar5;
    *(uint *)(param_1 + 0x8cc) = puVar5[1];
    *(uint *)(param_1 + 0x8d0) = puVar5[2];
  }
  iVar9 = 0;
  iVar10 = param_1;
  if (0 < *(int *)(param_1 + 0x930)) {
    do {
      iVar9 = iVar9 + 1;
      *(float *)(iVar10 + 0xac4) =
           *(float *)(iVar10 + 0x940) * local_24 + *(float *)(iVar10 + 0xac4);
      iVar10 = iVar10 + 0x1b4;
    } while (iVar9 < *(int *)(param_1 + 0x930));
  }
  *(uint *)(param_1 + 0x30) = 0;
  fVar3 = *(float *)(param_1 + 0x34) + _DAT_005973b0;
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + _DAT_005973ac;
  *(float *)(param_1 + 0x34) = fVar3;
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,&local_a0);
  iStack_18 = 0;
  for (iVar10 = 0; iVar10 < *(int *)(0x01E57284 + 0x14ecb0); iVar10 = iVar10 + 1) {
    iVar9 = *(int *)(0x01E57284 + iStack_18 + 0x14ecb4);
    iVar6 = core_actor_cpp_castToClassHash_FUN_0040d890(iVar9,_DAT_01ccdc10);
    if ((iVar6 == 0) || (param_1 != *(int *)(iVar6 + 0xbd48))) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(auStack_c8);
      iVar6 = (**(code **)(*(int *)(iVar9 + 0x14c) + 0x34))(iVar9,auStack_c8);
      if ((iVar6 == 2) &&
         ((((*(float *)(iVar9 + 0x24) <= *(float *)(param_1 + 0x24) + fStack_90 &&
            (*(float *)(param_1 + 0x24) + fStack_9c <= *(float *)(iVar9 + 0x24) + fStack_b0)) &&
           (core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                      (param_1,afStack_64,iVar9 + 0x20), local_a0 <= afStack_64[0] + fStack_ac)) &&
          ((afStack_64[0] - fStack_ac <= fStack_94 && (fStack_98 <= fStack_5c + fStack_ac)))))) {
        if (fStack_5c - fStack_ac <= fStack_8c) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(auStack_104);
          uStack_d4 = 4;
          uStack_100 = 0x4479c000;
          (**(code **)(*(int *)(iVar9 + 0x14c) + 0x100))(iVar9,auStack_104);
        }
        else if ((fStack_5c - fStack_ac < fStack_8c + (float)_DAT_005973c8) &&
                (iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                                   (*(uint *)(param_1 + 0x104c)), iVar9 == 0)) {
          uVar7 = core_vehicle_cpp_CVehicle_playTrackedSound_FUN_0054f7a0
                            (param_1,"?model-t-horn?.wav" + 1);
          *(uint *)(param_1 + 0x104c) = uVar7;
        }
      }
    }
    iStack_18 = iStack_18 + 4;
  }
  if (*(int *)(param_1 + 0x1064) != 0) goto LAB_0054ef54;
  iVar10 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  fStack_40 = *(float *)(param_1 + 0x20) - *(float *)(iVar10 + 0x20);
  fStack_3c = *(float *)(param_1 + 0x24) - *(float *)(iVar10 + 0x24);
  fStack_38 = *(float *)(param_1 + 0x28) - *(float *)(iVar10 + 0x28);
  if ((SQRT(fStack_38 * fStack_38 + fStack_40 * fStack_40 + fStack_3c * fStack_3c) <=
       (float)_DAT_005973b8) || (0x671 < *(int *)(0x01E57284 + 0x14cd6c))) goto LAB_0054ef54;
  iVar10 = 0;
  iStack_20 = 0;
  iStack_1c = 0;
  for (iVar9 = 0; iVar9 < *(int *)(0x01E57284 + 0x150bf4); iVar9 = iVar9 + 1) {
    iVar6 = core_actor_cpp_castToClassHash_FUN_0040d890
                      (*(uint *)(iVar10 + 0x150bf8 + 0x01E57284),_DAT_01ccdc10);
    if ((iVar6 != 0) && (iVar2 = *(int *)(iVar6 + 0xbd48), param_1 == iVar2)) {
      if (*(int *)(iVar6 + 0xbd4c) == 0) {
        *(int *)(iVar2 + 0x1068) = iVar6;
        iStack_1c = 1;
      }
      else {
        *(int *)(iVar2 + 0x106c) = iVar6;
        iStack_20 = 1;
      }
    }
    iVar10 = iVar10 + 4;
  }
  if ((iStack_1c != 0) && (iStack_20 != 0)) goto LAB_0054ef54;
  if (iStack_1c == 0) {
    iVar10 = *(int *)(param_1 + 0x1068);
    if (iVar10 != 0) {
      iVar10 = (**(code **)(*(int *)(iVar10 + 0x14c) + 0x104))(iVar10);
joined_r0x0054f2b0:
      if (iVar10 == 0) goto LAB_0054ef54;
    }
  }
  else if ((iStack_20 == 0) && (iVar10 = *(int *)(param_1 + 0x106c), iVar10 != 0)) {
    iVar10 = (**(code **)(*(int *)(iVar10 + 0x14c) + 0x104))(iVar10);
    goto joined_r0x0054f2b0;
  }
  iVar9 = FUN_0056497c(0xbdfc);
  iVar10 = 0;
  if (iVar9 != 0) {
    iVar10 = core_mobster_cpp_CMobster_ctor_FUN_004da150(iVar9);
  }
  iVar6 = FUN_0056497c(0x57c);
  iVar9 = 0;
  if (iVar6 != 0) {
    iVar9 = core_tommygun_cpp_CTommyGun_ctor_FUN_00545b90(iVar6);
  }
  if ((iVar10 == 0) || (iVar9 == 0)) {
    _DAT_01cc4800 = "..\\core\\vehicle.cpp";
    _DAT_01cc4804 = 0x161;
    FUN_004c8440("CMobster::process - Out of memory!");
  }
  iVar6 = core_actor_cpp_randomChance_FUN_0040dea0(0x3f000000);
  if (iVar6 == 0) {
    pcVar11 = "mobster4.dfm";
  }
  else {
    pcVar11 = "mobster3.dfm";
  }
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(iVar10 + 0x150,pcVar11);
  *(int *)(iVar10 + 0xbd48) = param_1;
  if (iStack_1c == 0) {
    *(uint *)(iVar10 + 0xbd4c) = 0;
    *(int *)(param_1 + 0x1068) = iVar10;
  }
  else {
    *(uint *)(iVar10 + 0xbd4c) = 1;
    *(int *)(param_1 + 0x106c) = iVar10;
  }
  core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(0x01CC9450,iVar10);
  core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(0x01CC9450,iVar9);
  *(uint *)(iVar10 + 0x20) = *(uint *)(param_1 + 0x20);
  *(uint *)(iVar10 + 0x24) = *(uint *)(param_1 + 0x24);
  *(uint *)(iVar10 + 0x28) = *(uint *)(param_1 + 0x28);
  *(uint *)(iVar10 + 0x2c) = *(uint *)(param_1 + 0x2c);
  if ((uint *)(iVar10 + 0x30) != (uint *)(param_1 + 0x30)) {
    *(uint *)(iVar10 + 0x30) = *(uint *)(param_1 + 0x30);
    *(uint *)(iVar10 + 0x34) = *(uint *)(param_1 + 0x34);
    *(uint *)(iVar10 + 0x38) = *(uint *)(param_1 + 0x38);
  }
  *(uint *)(iVar9 + 0x20) = *(uint *)(param_1 + 0x20);
  *(uint *)(iVar9 + 0x24) = *(uint *)(param_1 + 0x24);
  *(uint *)(iVar9 + 0x28) = *(uint *)(param_1 + 0x28);
  *(uint *)(iVar9 + 0x2c) = *(uint *)(param_1 + 0x2c);
  if ((uint *)(iVar9 + 0x30) != (uint *)(param_1 + 0x30)) {
    *(uint *)(iVar9 + 0x30) = *(uint *)(param_1 + 0x30);
    *(uint *)(iVar9 + 0x34) = *(uint *)(param_1 + 0x34);
    *(uint *)(iVar9 + 0x38) = *(uint *)(param_1 + 0x38);
  }
  (*(code *)**(uint **)(iVar10 + 0x14c))(iVar10);
  (*(code *)**(uint **)(iVar9 + 0x14c))(iVar9);
  core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428f40(iVar10,1,iVar9,0);
  core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60(0x01CC9450,iVar10);
  core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60(0x01CC9450,iVar9);
LAB_0054ef54:
  iVar10 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0x1050));
  if (iVar10 == 0) {
    uVar7 = core_vehicle_cpp_CVehicle_playTrackedSound_FUN_0054f7a0
                      (param_1,"ext-modelt-fast_??.wav");
    *(uint *)(param_1 + 0x1050) = uVar7;
  }
  sound_sndmain_cpp_setSfxBaseFrequency_FUN_00527130(*(uint *)(param_1 + 0x1050),0x3f800000);
  fVar3 = ABS(*(float *)(param_1 + 0x8c8));
  fVar4 = (float)_DAT_005973c0;
  uVar8 = (uint)(ushort)((ushort)(fVar3 < fVar4) << 8 | (ushort)(NAN(fVar3) || NAN(fVar4)) << 10 |
                        (ushort)(fVar3 == fVar4) << 0xe);
  if ((fVar3 >= fVar4 && (fVar3 == fVar4) == 0) &&
     (uVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0x1054)),
     uVar8 == 0)) {
    uVar8 = core_vehicle_cpp_CVehicle_playTrackedSound_FUN_0054f7a0(param_1,"skid_??.wav");
    *(uint *)(param_1 + 0x1054) = uVar8;
    return uVar8;
  }
  return uVar8;
}
