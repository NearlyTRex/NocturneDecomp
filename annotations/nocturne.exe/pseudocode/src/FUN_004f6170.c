// Name: FUN_004f6170
// Address: 004f6170
// Address Range: [[004f6170, 004f6bc7]]
// Convention: unknown
// Signature: void FUN_004f6170(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_004f6170(int param_1,float param_2)

{
  char cVar1;
  int iVar2;
  float fVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  uint *puVar10;
  char *pcVar11;
  int iVar12;
  uint *puVar13;
  bool bVar14;
  byte bVar15;
  char local_324 [256];
  byte auStack_224 [48];
  uint auStack_1f4 [3];
  float fStack_1e8;
  float fStack_1d8;
  float fStack_1c8;
  byte auStack_1c4 [48];
  uint auStack_194 [12];
  uint auStack_164 [12];
  uint auStack_134 [12];
  byte auStack_104 [48];
  uint auStack_d4 [5];
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  byte auStack_ac [4];
  float fStack_a8;
  float fStack_9c;
  byte auStack_94 [4];
  float fStack_90;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  byte auStack_64 [4];
  uint uStack_60;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float local_34;
  int local_30;
  int local_2c;
  float fStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  float *pfStack_18;
  
  bVar15 = 0;
  if (1 < *(int *)(param_1 + 0x4b8)) {
    return;
  }
  bVar14 = false;
  local_34 = *(float *)(param_1 + 0x2d4);
  local_30 = 0;
  local_2c = 0;
  switch(*(uint *)(param_1 + 0x2cc)) {
  case 0:
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(0x01C03A10,param_1 + 0x3b0);
    bVar14 = iVar5 != 0;
    if (bVar14) {
      core_platfrm_cpp_CPlatform_startMovement_FUN_004f6bd0
                (param_1,0x3f800000,1.0 / *(float *)(param_1 + 0x2e0));
    }
    *(uint *)(param_1 + 0x2d4) = 0;
    break;
  case 1:
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(0x01C03A10,param_1 + 0x34c);
    bVar14 = iVar5 != 0;
    if (bVar14) {
      core_platfrm_cpp_CPlatform_startMovement_FUN_004f6bd0
                (param_1,0,1.0 / *(float *)(param_1 + 0x2e4));
    }
    *(uint *)(param_1 + 0x2d4) = 0x3f800000;
    break;
  case 2:
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(0x01C03A10,param_1 + 0x3b0);
    if (iVar5 == 0) {
      iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(0x01C03A10,param_1 + 0x34c)
      ;
      if (iVar5 != 0) {
        core_platfrm_cpp_CPlatform_startMovement_FUN_004f6bd0
                  (param_1,0,1.0 / *(float *)(param_1 + 0x2e4));
      }
    }
    else {
      core_platfrm_cpp_CPlatform_startMovement_FUN_004f6bd0
                (param_1,0x3f800000,1.0 / *(float *)(param_1 + 0x2e0));
    }
    break;
  case 3:
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(0x01C03A10,param_1 + 0x414);
    if (iVar5 != 0) {
      *(uint *)(param_1 + 0x2cc) = 2;
      if (*(char *)(param_1 + 0x48c) != '\0') {
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,param_1 + 0x48c);
      }
      break;
    }
    fVar3 = param_2 * *(float *)(param_1 + 0x2dc) + *(float *)(param_1 + 0x2d4);
    *(float *)(param_1 + 0x2d4) = fVar3;
    if (fVar3 <= *(float *)(param_1 + 0x2d8)) {
LAB_004f65e2:
      local_2c = 1;
      break;
    }
    *(uint *)(param_1 + 0x2d4) = *(uint *)(param_1 + 0x2d8);
    if (1.0 <= *(float *)(param_1 + 0x2d4)) {
      *(uint *)(param_1 + 0x2cc) = 1;
      if (*(int *)(param_1 + 0x4b8) != 0) {
        *(uint *)(param_1 + 0x4b8) = 2;
      }
      local_30 = 1;
      break;
    }
    goto LAB_004f65d0;
  case 4:
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(0x01C03A10,param_1 + 0x414);
    if (iVar5 != 0) {
      *(uint *)(param_1 + 0x2cc) = 2;
      if (*(char *)(param_1 + 0x48c) != '\0') {
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,param_1 + 0x48c);
      }
      break;
    }
    fVar3 = *(float *)(param_1 + 0x2d4) - param_2 * *(float *)(param_1 + 0x2dc);
    *(float *)(param_1 + 0x2d4) = fVar3;
    if (*(float *)(param_1 + 0x2d8) <= fVar3) goto LAB_004f65e2;
    *(uint *)(param_1 + 0x2d4) = *(uint *)(param_1 + 0x2d8);
    if (*(float *)(param_1 + 0x2d4) <= 0.0) {
      *(uint *)(param_1 + 0x2cc) = 0;
      if (*(int *)(param_1 + 0x4b8) != 0) {
        *(uint *)(param_1 + 0x4b8) = 2;
      }
      local_30 = 1;
      break;
    }
LAB_004f65d0:
    *(uint *)(param_1 + 0x2cc) = 2;
  }
  if (*(int *)(param_1 + 0x4c0) != 0) {
    if (bVar14) {
      pcVar11 = local_324;
      pcVar9 = (char *)(param_1 + 0x4c4);
      pcVar8 = local_324;
      do {
        cVar1 = *pcVar9;
        *pcVar11 = cVar1;
        pcVar4 = pcVar8;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
joined_r0x004f6259:
      if (local_324[0] != '\0') {
        if (*pcVar8 == ';') {
          *pcVar8 = '\0';
          iVar5 = core_set_cpp_CDemonSet_findCameraByName_FUN_005090a0(0x01E57284,pcVar4);
          if ((iVar5 != -1) && (iVar5 != *(int *)(0x01E57284 + 0x15aabc))) {
            core_setdir_cpp_CDemonSet_setPendingCamera_FUN_005135d0(0x01E57284,iVar5,0x4479c000);
            *(uint *)(param_1 + 0x71c) = 0;
            goto LAB_004f62b0;
          }
          pcVar8 = pcVar8 + 1;
          local_324[0] = *pcVar8;
          pcVar4 = pcVar8;
        }
        else {
          pcVar8 = pcVar8 + 1;
          local_324[0] = *pcVar8;
        }
        goto joined_r0x004f6259;
      }
LAB_004f62b0:
      iVar5 = core_set_cpp_CDemonSet_findCameraByName_FUN_005090a0(0x01E57284,pcVar4);
      if ((iVar5 != -1) && (iVar5 != *(int *)(0x01E57284 + 0x15aabc))) {
        core_setdir_cpp_CDemonSet_setPendingCamera_FUN_005135d0(0x01E57284,iVar5,0x4479c000);
        *(uint *)(param_1 + 0x71c) = 0;
      }
    }
    if (local_30 != 0) {
      core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_005135f0(0x01E57284);
    }
  }
  if (*(float *)(param_1 + 0x2d4) == local_34) {
    return;
  }
  if ((local_2c == 0) || (*(char *)(param_1 + 0x4a0) == '\0')) {
    core_sound_cpp_CSound_killSound_FUN_0052ebb0(0x02DC9450,*(uint *)(param_1 + 0x4b4));
  }
  else {
    iVar5 = core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0
                      (0x02DC9450,*(uint *)(param_1 + 0x4b4));
    if (iVar5 == 0) {
      uVar6 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x28))(param_1,param_1 + 0x4a0);
      *(uint *)(param_1 + 0x4b4) = uVar6;
    }
  }
  fStack_28 = *(float *)(param_1 + 0x24);
  core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_0055ae80
            (auStack_224,param_1 + 0x20,param_1 + 0x30);
  core_platfrm_cpp_CPlatform_evaluatePosition_FUN_004f5ff0(param_1);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
            (auStack_104,param_1 + 0x20,param_1 + 0x30);
  iVar5 = 0;
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,auStack_ac);
  iVar12 = 0;
  do {
    while( true ) {
      if (*(int *)(0x01E57284 + 0x14ecb0) <= iVar12) {
        iStack_24 = 0;
        for (iStack_20 = 0; iStack_20 < *(int *)(0x01E57284 + 0x14cd6c); iStack_20 = iStack_20 + 1
            ) {
          iVar5 = *(int *)(0x01E57284 + iStack_24 + 0x14cd70);
          if (param_1 == *(int *)(iVar5 + 0xdc)) {
            pfStack_18 = (float *)(iVar5 + 0x20);
            core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
                      (auStack_1c4,pfStack_18,iVar5 + 0x30);
            core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(auStack_1c4,auStack_224);
            puVar10 = auStack_134;
            puVar13 = auStack_164;
            for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
              *puVar13 = *puVar10;
              puVar10 = puVar10 + (uint)bVar15 * -2 + 1;
              puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
            }
            core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(auStack_164,auStack_104);
            puVar10 = auStack_194;
            puVar13 = auStack_1f4;
            for (iVar12 = 0xc; iVar12 != 0; iVar12 = iVar12 + -1) {
              *puVar13 = *puVar10;
              puVar10 = puVar10 + (uint)bVar15 * -2 + 1;
              puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
            }
            fStack_7c = fStack_1e8;
            fStack_78 = fStack_1d8;
            fStack_74 = fStack_1c8;
            core_xform_cpp_matrixToEulerAngles_FUN_0055b180(auStack_1f4,auStack_94);
            fStack_88 = fStack_7c - *pfStack_18;
            fStack_84 = fStack_78 - pfStack_18[1];
            fStack_80 = fStack_74 - pfStack_18[2];
            if ((float *)(iVar5 + 0xe0) != &fStack_88) {
              *(float *)(iVar5 + 0xe0) = fStack_88;
              *(float *)(iVar5 + 0xe4) = fStack_84;
              *(float *)(iVar5 + 0xe8) = fStack_80;
            }
            *(uint *)(iVar5 + 0xec) = 0;
            *(uint *)(iVar5 + 0xf4) = 0;
            pfStack_18 = (float *)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                            (fStack_90 - *(float *)(iVar5 + 0x34));
            *(float **)(iVar5 + 0xf0) = pfStack_18;
          }
          iStack_24 = iStack_24 + 4;
        }
        core_platfrm_cpp_CPlatform_updateAttachedActors_FUN_004f7700(param_1);
        return;
      }
      iVar2 = *(int *)(iVar5 + 0x14ecb4 + 0x01E57284);
      iVar7 = (**(code **)(*(int *)(iVar2 + 0x14c) + 0x104))(iVar2);
      if ((iVar7 < 1) && (iVar7 = (**(code **)(*(int *)(iVar2 + 0x14c) + 0x68))(iVar2), iVar7 == 0))
      break;
LAB_004f6a33:
      iVar12 = iVar12 + 1;
      iVar5 = iVar5 + 4;
    }
    if (*(int *)(param_1 + 0x508) == 0) {
      if ((*(float *)(param_1 + 0x24) < fStack_28) &&
         (iVar7 = FUN_004f7360(param_1,iVar2), iVar7 != 0)) {
        (**(code **)(*(int *)(iVar2 + 0x14c) + 0xd4))(iVar2,8,0,0xbf800000);
      }
      goto LAB_004f6a33;
    }
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(param_1,&fStack_4c,iVar2 + 0x20);
    if ((fStack_9c < fStack_48) || (fStack_48 < fStack_a8 + (float)-20))
    goto LAB_004f6a33;
    core_box_cpp_CBoundingBox3D_clampPoint_FUN_0041e160(auStack_ac,&fStack_70,&fStack_4c);
    fStack_40 = fStack_4c - fStack_70;
    fStack_3c = fStack_48 - fStack_6c;
    fStack_38 = fStack_44 - fStack_68;
    if (((float)10 < ABS(fStack_40)) || ((float)10 < ABS(fStack_38)))
    goto LAB_004f6a33;
    fStack_3c = 0.0;
    core_setcolid_cpp_SCollisionInfo_ctor_FUN_00511990(auStack_d4);
    auStack_d4[0] = 0;
    iVar7 = (**(code **)(*(int *)(iVar2 + 0x14c) + 0x34))(iVar2,auStack_d4);
    if ((((iVar7 != 2) || (fStack_9c < fStack_48 + fStack_c0)) ||
        (fStack_48 + fStack_bc < fStack_a8)) ||
       (fVar3 = fStack_40 * fStack_40 + fStack_38 * fStack_38, fStack_b8 * fStack_b8 < fVar3))
    goto LAB_004f6a33;
    fVar3 = SQRT(fVar3);
    if ((double)fVar3 <= 0.0) goto LAB_004f6a33;
    fStack_1c = (fStack_b8 + (float)0.050000000000000003) / fVar3;
    fStack_40 = fStack_40 * fStack_1c;
    fStack_3c = fStack_3c * fStack_1c;
    fStack_38 = fStack_38 * fStack_1c;
    fStack_58 = fStack_70 + fStack_40;
    fStack_54 = fStack_6c + fStack_3c;
    fStack_50 = fStack_68 + fStack_38;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
              (param_1,auStack_64,&fStack_58,(double)fVar3,fVar3);
    uStack_60 = *(uint *)(iVar2 + 0x24);
    (**(code **)(*(int *)(iVar2 + 0x14c) + 0x60))(iVar2,auStack_64,iVar2 + 0x30);
    iVar12 = iVar12 + 1;
    iVar5 = iVar5 + 4;
  } while( true );
}
