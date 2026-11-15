// Name: core_doc.cpp_FUN_00459ff0
// Address: 00459ff0
// Address Range: [[00459ff0, 0045ab3c]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_00459ff0(CDemonActor *param_1,int param_2,float param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_00459ff0(CDemonActor *param_1,int param_2,float param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  int *piVar4;
  uint uVar5;
  CCharacter *this_ptr;
  EDeathState EVar6;
  int iVar7;
  float fVar8;
  CVector3f *input_local_point;
  byte bVar9;
  float afStackY_1170 [969];
  float fStack_230;
  CVector3f aCStack_228 [10];
  CMatrix3x3f CStack_1b0;
  CVector3f CStack_188;
  float fStack_17c;
  float afStack_178 [2];
  CVector3f CStack_170;
  CVector3f CStack_164;
  float fStack_158;
  float afStack_154 [2];
  CVector3f CStack_14c;
  float fStack_140;
  float afStack_13c [4];
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  CVector3f CStack_11c;
  float fStack_110;
  float afStack_10c [2];
  CVector3f CStack_104;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  CVector3f CStack_ec;
  CVector3f CStack_e0;
  float fStack_d4;
  float afStack_d0 [2];
  CVector3f CStack_c8;
  CVector3f CStack_bc;
  float fStack_b0;
  float afStack_ac [2];
  CVector3f CStack_a4;
  CVector3f CStack_98;
  CVector3f aCStack_8c [3];
  float fStack_64;
  float fStack_60;
  int local_5c;
  float fStack_58;
  int local_54;
  float fStack_50;
  CLocation *pCStack_4c;
  int iStack_48;
  int iStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float local_34;
  int iStack_30;
  int *local_2c;
  float fStack_28;
  CDemonActor *pCStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  
  bVar9 = 0;
  local_2c = &param_1[0xdd].scale.z;
  if (param_2 != 1) {
    fVar8 = param_1[0xdd].previous_transform_state.position.z;
    if (fVar8 == 0.0) {
      param_1[0xdd].footstep_particle_count = 0;
      param_1[0xdd].blood_effect_timer = 0;
      iVar7 = *(int *)((int)&param_1[0xe].orient_matrix + param_2 * 0x78 + 0xc);
      uVar5 = 0;
      if (iVar7 != 0) {
        uVar5 = (**(code **)(*(int *)(iVar7 + 0x2b0) + 0x7c))(iVar7);
      }
      if ((uVar5 & 4) == 0) {
        local_2c[2] = 0;
        *local_2c = 0;
        return;
      }
      local_54 = 3;
    }
    else {
      local_54 = *(int *)((int)fVar8 + 0x43c);
    }
    if (param_2 == 0) {
      local_34 = -1.3089969;
      local_38 = 0.5235988;
      local_5c = _DAT_01b4d264;
      iVar7 = _DAT_01b4d28c;
    }
    else {
      local_5c = _DAT_01b4d268;
      iVar7 = _DAT_01b4d290;
      if ((local_54 == 0) || (local_54 == 5)) {
        local_38 = 1.3089969;
        local_34 = -0.5235988;
      }
      else {
        local_38 = 0.5235988;
        local_34 = -0.5235988;
      }
    }
    fVar8 = (float)param_1[0x62].particle_systems[1].owner * _DAT_005d0527 * (float)_DAT_005d052f *
            param_3 + (float)*local_2c;
    local_2c[1] = 0;
    *local_2c = (int)fVar8;
    if (fVar8 < 0xBF860A92) {
      *local_2c = (int)0xBF860A92;
    }
    if (0x3F9C61AA < (float)*local_2c) {
      *local_2c = (int)0x3F9C61AA;
    }
    if ((float)local_2c[3] < local_34) {
      local_2c[3] = (int)local_34;
    }
    if (local_38 < (float)local_2c[3]) {
      local_2c[3] = (int)local_38;
    }
    if ((float)local_2c[1] < local_34) {
      local_2c[1] = (int)local_34;
    }
    if (local_38 < (float)local_2c[1]) {
      local_2c[1] = (int)local_38;
    }
    local_2c[7] = 0;
    fStack_40 = (float)local_2c[1];
    fStack_3c = (float)*local_2c;
    if ((local_54 == 3) || (fVar8 = (float)param_1[0xd6].collision_disabled, fVar8 != 0.0)) {
      local_2c[3] = 0;
    }
    else {
      fVar1 = param_1[0xdd].previous_transform_state.position.z;
      fStack_128 = fVar8;
      fStack_124 = fVar8;
      fStack_120 = fVar8;
      if (fVar1 != 0.0) {
        (**(code **)(*(int *)((int)fVar1 + 0x2b0) + 0xe8))(fVar1);
        fStack_b0 = fStack_d4;
        afStack_ac[(uint)bVar9 * -2] = afStack_d0[(uint)bVar9 * -2];
        afStack_ac[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             afStack_d0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        if (&fStack_128 != &fStack_b0) {
          fStack_128 = fStack_b0;
          fStack_124 = afStack_ac[0];
          fStack_120 = afStack_ac[1];
        }
      }
      if ((local_54 == 0) || (local_54 == 5)) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                  ((CDeformableModelInstance *)(param_1 + 1),local_5c,&CStack_170);
        CStack_ec.x = CStack_170.x;
        afStack_10c[(uint)bVar9 * -2 + 9] = *(float *)((int)&CStack_170 + (uint)bVar9 * -8 + 4);
        afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
             *(float *)((int)&CStack_170 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        if (&CStack_e0 != (CVector3f *)(afStack_10c + 8)) {
          CStack_e0.x = CStack_ec.x;
          CStack_e0.y = CStack_ec.y;
          CStack_e0.z = CStack_ec.z;
        }
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0
                  ((CDeformableModelInstance *)(param_1 + 1),iVar7,&CStack_14c);
        CStack_104.x = CStack_14c.x;
        afStack_10c[(uint)bVar9 * -2 + 3] = *(float *)((int)&CStack_14c + (uint)bVar9 * -8 + 4);
        afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
             *(float *)((int)&CStack_14c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        if (&CStack_e0 != (CVector3f *)(afStack_10c + 2)) {
          CStack_e0.x = CStack_104.x;
          CStack_e0.y = CStack_104.y;
          CStack_e0.z = CStack_104.z;
        }
      }
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70(param_1,&CStack_e0,&CStack_a4);
      piVar4 = local_2c;
      aCStack_8c[0].x = CStack_a4.x;
      *(uint *)((int)aCStack_8c + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&CStack_a4 + (uint)bVar9 * -8 + 4);
      *(uint *)((int)aCStack_8c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           *(uint *)((int)&CStack_a4 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      CStack_98.x = (float)*piVar4;
      CStack_98.z = 0.0;
      CStack_98.y = (float)local_2c[1];
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(&CStack_1b0,&CStack_98);
      CStack_11c.z = 1.0;
      CStack_11c.x = 0.0;
      CStack_11c.y = 0.0;
      core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530(&CStack_1b0,&CStack_11c,&CStack_c8);
      fStack_28 = 1e+30;
      iStack_48 = 0;
      iStack_44 = 0;
      fStack_17c = CStack_c8.x;
      afStack_178[(uint)bVar9 * -2] = *(float *)((int)&CStack_c8 + (uint)bVar9 * -8 + 4);
      afStack_178[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           *(float *)((int)&CStack_c8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      pCStack_4c = &param_1->location;
      for (; iStack_48 < g_CDemonSetPtr->threat_count; iStack_48 = iStack_48 + 1) {
        this_ptr = (CCharacter *)
                   core_actor_cpp_castToClassHash_FUN_0040c8f0
                             (*(CDemonActor **)((int)g_CDemonSetPtr->threats + iStack_44),
                              g_CCharacterClassInfo.name_hash);
        if ((this_ptr == (CCharacter *)0x0) ||
           (((EVar6 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr),
             EVar6 == DEATH_STATE_ALIVE &&
             (iVar7 = (*((this_ptr->base).vtable._ub)->shouldIgnoreForTargeting)
                                ((CDemonActor *)this_ptr), iVar7 == 0)) &&
            (fVar8 = (pCStack_4c->position).x - (this_ptr->base).location.position.x,
            fVar2 = (pCStack_4c->position).y - (this_ptr->base).location.position.y,
            fVar1 = (pCStack_4c->position).z - (this_ptr->base).location.position.z,
            SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar8 * fVar8) <= (float)_DAT_005d0557)))) {
          pCStack_24 = *(CDemonActor **)((int)g_CDemonSetPtr->threats + iStack_44);
          __arrinit(aCStack_228,10,&g_CVectorTypeInfo);
          iStack_30 = (*((pCStack_24->vtable)._ub)->getTargetPoints)(pCStack_24,aCStack_228);
          if ((0 < iStack_30) && (iStack_20 = 0, 0 < iStack_30)) {
            input_local_point = aCStack_228;
            do {
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                        (pCStack_24,input_local_point,&CStack_188);
              CStack_bc.x = CStack_188.x;
              *(uint *)((int)&CStack_bc + (uint)bVar9 * -8 + 4) =
                   *(uint *)((int)&CStack_188 + (uint)bVar9 * -8 + 4);
              *(uint *)((int)&CStack_bc + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
                   *(uint *)((int)&CStack_188 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
              core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                        (param_1,&CStack_bc,&CStack_164);
              fStack_158 = CStack_164.x;
              afStack_154[(uint)bVar9 * -2] = *(float *)((int)&CStack_164 + (uint)bVar9 * -8 + 4);
              afStack_154[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
                   *(float *)((int)&CStack_164 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
              fStack_f8 = fStack_158 - CStack_e0.x;
              fStack_f4 = afStack_154[0] - CStack_e0.y;
              fStack_f0 = afStack_154[1] - CStack_e0.z;
              afStack_13c[2] = fStack_158 - CStack_e0.x;
              afStack_13c[(uint)bVar9 * -2 + 3] = afStack_10c[(uint)bVar9 * -2 + 6];
              afStack_13c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
                   afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
              if ((0.0 < (double)fStack_12c) && ((double)fStack_12c <= _DAT_005d0557)) {
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(afStack_13c + 2);
                fStack_140 = fStack_110;
                afStack_13c[(uint)bVar9 * -2] = afStack_10c[(uint)bVar9 * -2];
                afStack_13c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
                     afStack_10c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
                fStack_230 = 0.5235988;
                if (fStack_12c < (float)_DAT_005d055f) {
                  fStack_230 = 1.5707964;
                }
                if (((ABS(fStack_140) <= fStack_230) && (local_34 <= afStack_13c[0])) &&
                   (afStack_13c[0] <= local_38)) {
                  fVar8 = SQRT(fStack_12c * fStack_12c +
                               afStack_13c[2] * afStack_13c[2] + afStack_13c[3] * afStack_13c[3]);
                  fVar1 = 1.0 / fVar8;
                  afStack_13c[3] = afStack_13c[3] * fVar1;
                  afStack_13c[2] = afStack_13c[2] * fVar1;
                  fStack_12c = fStack_12c * fVar1;
                  fVar8 = fVar8 * (float)_DAT_005d0537 +
                          ((float)_DAT_005d052f -
                          (fStack_12c * afStack_178[1] +
                          afStack_13c[2] * fStack_17c + afStack_13c[3] * afStack_178[0]));
                  if (fVar8 < fStack_28) {
                    core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
                    core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(g_CDemonSetPtr,2);
                    core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,param_1);
                    core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,pCStack_24);
                    iVar7 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00535e10
                                      (g_CDemonSetPtr,aCStack_8c,&CStack_bc);
                    core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
                    if (iVar7 == 0) {
                      fStack_40 = afStack_13c[0];
                      fStack_3c = fStack_140;
                      local_2c[7] = 1;
                      fStack_28 = fVar8;
                    }
                  }
                }
              }
              iStack_20 = iStack_20 + 1;
              input_local_point = input_local_point + 1;
            } while (iStack_20 < iStack_30);
          }
        }
        iStack_44 = iStack_44 + 4;
      }
    }
    dVar3 = _DAT_005d053f;
    if (local_54 != 0) {
      dVar3 = _DAT_005d0547;
    }
    fStack_50 = param_3 * _DAT_005d0527 * (float)dVar3;
    fStack_58 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(fStack_40 - (float)local_2c[3]);
    fStack_18 = fStack_58;
    fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(fStack_3c - (float)local_2c[2]);
    fStack_60 = -fStack_50;
    if (fStack_58 < fStack_60) {
      fStack_58 = fStack_60;
    }
    if (fStack_50 < fStack_58) {
      fStack_58 = fStack_50;
    }
    fStack_64 = -fStack_50;
    fStack_1c = fStack_18;
    if (fStack_18 < fStack_64) {
      fStack_1c = fStack_64;
    }
    if (fStack_50 < fStack_1c) {
      fStack_1c = fStack_50;
    }
    fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0((float)local_2c[3] + fStack_58);
    local_2c[3] = (int)fStack_18;
    fVar8 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0((float)local_2c[2] + fStack_1c);
    local_2c[2] = (int)fVar8;
    local_2c[5] = 0x3f800000;
    if ((((float)local_2c[7] == 1.4013e-45) &&
        (ABS((float)local_2c[3] - fStack_40) < (float)_DAT_005d054f)) &&
       (ABS((float)local_2c[2] - fStack_3c) < (float)_DAT_005d054f)) {
      local_2c[7] = 2;
      return;
    }
  }
  return;
}
