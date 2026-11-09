// Name: core_platfrm.cpp_FUN_005184c0
// Address: 005184c0
// Address Range: [[005184c0, 00518fe4]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_FUN_005184c0(CPlatform *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_platfrm_cpp_FUN_005184c0(CPlatform *this_ptr,float delta_time)

{
  char cVar1;
  CDemonActor *actor;
  float fVar2;
  char *name;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  uint *puVar10;
  char *pcVar11;
  uint *puVar12;
  bool bVar13;
  byte bVar14;
  float afStackY_10e4 [841];
  float *pfVar15;
  char local_3a4 [256];
  byte auStack_2a4 [48];
  CMatrix3x4f aCStack_274 [48];
  uint auStack_244 [3];
  float fStack_238;
  uint uStack_228;
  uint uStack_218;
  byte auStack_214 [48];
  uint auStack_1e4 [12];
  uint auStack_1b4 [12];
  uint auStack_184 [12];
  byte auStack_154 [24];
  float fStack_13c;
  float fStack_138;
  uint auStack_12c [6];
  uint uStack_114;
  float fStack_110;
  float fStack_104;
  float fStack_fc;
  float afStack_f8 [4];
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  uint uStack_d8;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float afStack_a8 [3];
  float fStack_9c;
  float fStack_90;
  uint uStack_8c;
  float fStack_84;
  uint uStack_80;
  uint uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  uint uStack_60;
  float fStack_5c;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  uint uStack_48;
  float fStack_3c;
  float local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  float *pfStack_18;
  
  bVar14 = 0;
  if (1 < *(int *)&this_ptr->field_0x61c) {
    return;
  }
  bVar13 = false;
  local_38 = *(float *)&this_ptr->field_0x438;
  local_30 = 0;
  local_34 = 0;
  switch(*(uint *)&this_ptr->field_0x430) {
  case 0:
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,&this_ptr->field_0x514);
    bVar13 = iVar5 != 0;
    if (bVar13) {
      core_platfrm_cpp_FUN_00518ff0(this_ptr,1.0,1.0 / *(float *)&this_ptr->field_0x444);
    }
    *(uint *)&this_ptr->field_0x438 = 0;
    break;
  case 1:
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,&this_ptr->field_0x4b0);
    bVar13 = iVar5 != 0;
    if (bVar13) {
      core_platfrm_cpp_FUN_00518ff0(this_ptr,0.0,1.0 / *(float *)&this_ptr->field_0x448);
    }
    *(uint *)&this_ptr->field_0x438 = 0x3f800000;
    break;
  case 2:
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,&this_ptr->field_0x514);
    if (iVar5 == 0) {
      iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                        (0x01C38BC0,&this_ptr->field_0x4b0);
      if (iVar5 != 0) {
        core_platfrm_cpp_FUN_00518ff0(this_ptr,0.0,1.0 / *(float *)&this_ptr->field_0x448);
      }
    }
    else {
      core_platfrm_cpp_FUN_00518ff0(this_ptr,1.0,1.0 / *(float *)&this_ptr->field_0x444);
    }
    break;
  case 3:
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,&this_ptr->field_0x578);
    if (iVar5 != 0) {
      *(uint *)&this_ptr->field_0x430 = 2;
      if (this_ptr->field_0x5f0 != '\0') {
        (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))(this_ptr,&this_ptr->field_0x5f0);
      }
      break;
    }
    fVar2 = delta_time * *(float *)&this_ptr->field_0x440 + *(float *)&this_ptr->field_0x438;
    *(float *)&this_ptr->field_0x438 = fVar2;
    if (fVar2 <= *(float *)&this_ptr->field_0x43c) {
LAB_00518952:
      local_34 = 1;
      break;
    }
    *(uint *)&this_ptr->field_0x438 = *(uint *)&this_ptr->field_0x43c;
    if (1.0 <= *(float *)&this_ptr->field_0x438) {
      *(uint *)&this_ptr->field_0x430 = 1;
      if (*(int *)&this_ptr->field_0x61c != 0) {
        *(uint *)&this_ptr->field_0x61c = 2;
      }
      local_30 = 1;
      break;
    }
    goto LAB_00518940;
  case 4:
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,&this_ptr->field_0x578);
    if (iVar5 != 0) {
      *(uint *)&this_ptr->field_0x430 = 2;
      if (this_ptr->field_0x5f0 != '\0') {
        (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))(this_ptr,&this_ptr->field_0x5f0);
      }
      break;
    }
    fVar2 = *(float *)&this_ptr->field_0x438 - delta_time * *(float *)&this_ptr->field_0x440;
    *(float *)&this_ptr->field_0x438 = fVar2;
    if (*(float *)&this_ptr->field_0x43c <= fVar2) goto LAB_00518952;
    *(uint *)&this_ptr->field_0x438 = *(uint *)&this_ptr->field_0x43c;
    if (*(float *)&this_ptr->field_0x438 <= 0.0) {
      *(uint *)&this_ptr->field_0x430 = 0;
      if (*(int *)&this_ptr->field_0x61c != 0) {
        *(uint *)&this_ptr->field_0x61c = 2;
      }
      local_30 = 1;
      break;
    }
LAB_00518940:
    *(uint *)&this_ptr->field_0x430 = 2;
  }
  if (*(int *)&this_ptr->field_0x624 != 0) {
    if (bVar13) {
      pcVar11 = local_3a4;
      pcVar9 = &this_ptr->field_0x628;
      pcVar8 = local_3a4;
      do {
        cVar1 = *pcVar9;
        *pcVar11 = cVar1;
        name = pcVar8;
        if (cVar1 == '\0') break;
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        pcVar11[1] = cVar1;
        pcVar11 = pcVar11 + 2;
      } while (cVar1 != '\0');
joined_r0x005185a9:
      if (local_3a4[0] != '\0') {
        if (*pcVar8 == ';') {
          *pcVar8 = '\0';
          iVar5 = core_set_cpp_CDemonSet_findCameraByName_FUN_0052e8c0(g_CDemonSetPtr,name);
          if ((iVar5 != -1) && (iVar5 != *(int *)&g_CDemonSetPtr->field_0x15aeb8)) {
            core_setdir_cpp_FUN_00539820(g_CDemonSetPtr,iVar5,999.0);
            *(uint *)&this_ptr->field_0x880 = 0;
            goto LAB_00518600;
          }
          pcVar8 = pcVar8 + 1;
          local_3a4[0] = *pcVar8;
          name = pcVar8;
        }
        else {
          pcVar8 = pcVar8 + 1;
          local_3a4[0] = *pcVar8;
        }
        goto joined_r0x005185a9;
      }
LAB_00518600:
      iVar5 = core_set_cpp_CDemonSet_findCameraByName_FUN_0052e8c0(g_CDemonSetPtr,name);
      if ((iVar5 != -1) && (iVar5 != *(int *)&g_CDemonSetPtr->field_0x15aeb8)) {
        core_setdir_cpp_FUN_00539820(g_CDemonSetPtr,iVar5,999.0);
        *(uint *)&this_ptr->field_0x880 = 0;
      }
    }
    if (local_30 != 0) {
      core_setdir_cpp_FUN_00539840(g_CDemonSetPtr);
    }
  }
  if (*(float *)&this_ptr->field_0x438 != local_38) {
    if ((local_34 == 0) || (this_ptr->field_0x604 == '\0')) {
      core_sound_cpp_FUN_0055af80(0x0264B290,*(uint *)&this_ptr->field_0x618);
    }
    else {
      iVar5 = core_sound_cpp_FUN_0055af70(0x0264B290,*(uint *)&this_ptr->field_0x618);
      if (iVar5 == 0) {
        uVar6 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x38))
                          (this_ptr,&this_ptr->field_0x604);
        *(uint *)&this_ptr->field_0x618 = uVar6;
      }
    }
    fStack_3c = *(float *)&this_ptr->field_0x24;
    core_xform_cpp_FUN_00591ad0
              (aCStack_274,(CVector3f *)&this_ptr->field_0x20,(CVector3f *)&this_ptr->field_0x30);
    core_platfrm_cpp_FUN_00518310(this_ptr);
    core_xform_cpp_FUN_00591c10(auStack_2a4,&this_ptr->field_0x20,&this_ptr->field_0x30);
    (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x24))(this_ptr);
    puVar10 = auStack_12c;
    puVar12 = &uStack_114;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + (uint)bVar14 * -2 + 1;
      puVar12 = puVar12 + (uint)bVar14 * -2 + 1;
    }
    iStack_28 = 0;
    for (iStack_20 = 0; iStack_20 < *(int *)&g_CDemonSetPtr->field_0x14f0a8;
        iStack_20 = iStack_20 + 1) {
      actor = *(CDemonActor **)(&g_CDemonSetPtr->field_0x14f0ac + iStack_28);
      iVar5 = (**(code **)(*(int *)&actor->field_0x2b0 + 0x114))(actor);
      if ((iVar5 < 1) &&
         (iVar5 = (**(code **)(*(int *)&actor->field_0x2b0 + 0x78))(actor), iVar5 == 0)) {
        if (*(int *)&this_ptr->field_0x66c == 0) {
          if ((*(float *)&this_ptr->field_0x24 < fStack_3c) &&
             (iVar5 = core_platfrm_cpp_CPlatform_isActorOnPlatform_FUN_005197b0(this_ptr,actor),
             iVar5 != 0)) {
            (**(code **)(*(int *)&actor->field_0x2b0 + 0xe4))(actor,8,0,0xbf800000);
          }
        }
        else {
          core_actor_cpp_FUN_00408de0(this_ptr,&actor->field_0x20);
          fStack_cc = fStack_9c;
          afStack_f8[(uint)bVar14 * -2 + 0xc] = afStack_f8[(uint)bVar14 * -2 + 0x18];
          afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd] =
               afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x19];
          if ((fStack_c8 <= fStack_104) && (fStack_110 + (float)_DAT_005e21c8 <= fStack_c8)) {
            core_box_cpp_FUN_0041bb80(&uStack_114,afStack_f8 + 0xb);
            fVar3 = fStack_c8;
            fVar2 = fStack_cc;
            fStack_b4 = fStack_c0;
            afStack_f8[(uint)bVar14 * -2 + 0x12] = afStack_f8[(uint)bVar14 * -2 + 0xf];
            afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x13] =
                 afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x10];
            afStack_f8[2] = fVar2 - fStack_b4;
            afStack_f8[3] = fVar3 - fStack_b0;
            fStack_e8 = fStack_c4 - fStack_ac;
            fStack_54 = fVar2 - fStack_b4;
            afStack_f8[(uint)bVar14 * -2 + 0x2a] = afStack_f8[(uint)bVar14 * -2 + 3];
            afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x2b] =
                 afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
            if ((ABS(fStack_54) <= (float)_DAT_005e21d0) && (ABS(fStack_4c) <= (float)_DAT_005e21d0)
               ) {
              fStack_50 = 0.0;
              core_setcolid_cpp_SCollisionInfo_ctor_FUN_00537fa0((SCollisionInfo *)auStack_154);
              auStack_154._0_4_ = 0;
              iVar5 = (**(code **)(*(int *)&actor->field_0x2b0 + 0x44))(actor,auStack_154);
              if ((((iVar5 == 2) && (fStack_c8 + (float)auStack_154._20_4_ <= fStack_104)) &&
                  (fStack_110 <= fStack_c8 + fStack_13c)) &&
                 ((fVar2 = fStack_54 * fStack_54 + fStack_4c * fStack_4c,
                  fVar2 <= fStack_138 * fStack_138 && (fVar2 = SQRT(fVar2), 0.0 < fVar2)))) {
                fStack_1c = (fStack_138 + (float)_DAT_005e21d8) / fVar2;
                fStack_54 = fStack_54 * fStack_1c;
                fStack_4c = fStack_4c * fStack_1c;
                pfVar15 = afStack_f8 + 0x14;
                fStack_50 = fStack_1c * 0.0;
                fStack_78 = fStack_b4 + fStack_54;
                fStack_74 = fStack_b0 + fStack_1c * 0.0;
                fStack_70 = fStack_ac + fStack_4c;
                afStack_a8[0] = fStack_78;
                afStack_f8[(uint)bVar14 * -2 + 0x15] = afStack_f8[(uint)bVar14 * -2 + 0x21];
                afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x16] =
                     afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x22];
                core_actor_cpp_FUN_00408d70(this_ptr,pfVar15);
                fStack_90 = (float)uStack_48;
                afStack_f8[(uint)bVar14 * -2 + 0x1b] = afStack_f8[(uint)bVar14 * -2 + 0x2d];
                afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x1c] =
                     afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x2e];
                uStack_8c = *(uint *)&actor->field_0x24;
                (**(code **)(*(int *)&actor->field_0x2b0 + 0x70))
                          (actor,afStack_f8 + 0x1a,&actor->field_0x30);
              }
            }
          }
        }
      }
      iStack_28 = iStack_28 + 4;
    }
    iStack_2c = 0;
    for (iStack_24 = 0; iStack_24 < *(int *)&g_CDemonSetPtr->field_0x14d164;
        iStack_24 = iStack_24 + 1) {
      iVar5 = *(int *)(&g_CDemonSetPtr->field_0x14d168 + iStack_2c);
      if (this_ptr == *(CPlatform **)(iVar5 + 0xdc)) {
        pfStack_18 = (float *)(iVar5 + 0x20);
        core_xform_cpp_FUN_00591c10(auStack_214,pfStack_18,iVar5 + 0x30);
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(auStack_214,aCStack_274);
        puVar10 = auStack_1b4;
        puVar12 = auStack_1e4;
        for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar12 = *puVar10;
          puVar10 = puVar10 + (uint)bVar14 * -2 + 1;
          puVar12 = puVar12 + (uint)bVar14 * -2 + 1;
        }
        core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(auStack_1e4,auStack_2a4);
        puVar10 = auStack_184;
        puVar12 = auStack_244;
        for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar12 = *puVar10;
          puVar10 = puVar10 + (uint)bVar14 * -2 + 1;
          puVar12 = puVar12 + (uint)bVar14 * -2 + 1;
        }
        fStack_84 = fStack_238;
        uStack_80 = uStack_228;
        uStack_7c = uStack_218;
        fStack_6c = fStack_238;
        afStack_f8[(uint)bVar14 * -2 + 0x24] = afStack_f8[(uint)bVar14 * -2 + 0x1e];
        afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x25] =
             afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x1f];
        core_xform_cpp_FUN_00591de0(auStack_244);
        fVar4 = fStack_64;
        fVar3 = fStack_68;
        fVar2 = fStack_6c;
        uStack_60 = uStack_d8;
        afStack_f8[(uint)bVar14 * -2 + 0x27] = afStack_f8[(uint)bVar14 * -2 + 9];
        afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x28] =
             afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10];
        fStack_e4 = fVar2 - *pfStack_18;
        fStack_e0 = fVar3 - pfStack_18[1];
        fStack_dc = fVar4 - pfStack_18[2];
        fStack_fc = fVar2 - *pfStack_18;
        afStack_f8[(uint)bVar14 * -2] = afStack_f8[(uint)bVar14 * -2 + 6];
        afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
             afStack_f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
        if ((float *)(iVar5 + 0xe0) != &fStack_fc) {
          *(float *)(iVar5 + 0xe0) = fStack_fc;
          *(float *)(iVar5 + 0xe4) = afStack_f8[0];
          *(float *)(iVar5 + 0xe8) = afStack_f8[1];
        }
        *(uint *)(iVar5 + 0xec) = 0;
        *(uint *)(iVar5 + 0xf4) = 0;
        pfStack_18 = (float *)core_actor_cpp_FUN_0040d0c0(fStack_5c - *(float *)(iVar5 + 0x34));
        *(float **)(iVar5 + 0xf0) = pfStack_18;
      }
      iStack_2c = iStack_2c + 4;
    }
    core_platfrm_cpp_FUN_00519ba0(this_ptr);
  }
  return;
}
