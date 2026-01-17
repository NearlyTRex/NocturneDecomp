// Name: core_stranger.cpp_CStranger_FUN_005c3960
// Address: 005c3960
// Address Range: [[005c3960, 005c4364]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c3960()

#include "nocturne.h"

/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005c3960(uint param_1,
   uint param_2, uint param_3) */

void core_stranger_cpp_CStranger_FUN_005c3960(void)

{
  float fVar1;
  double dVar2;
  uint uVar3;
  float *pfVar4;
  CVector3f *pCVar5;
  CDemonActor *this_ptr;
  int iVar6;
  int iVar7;
  float fVar8;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  float in_stack_0000000c;
  SCollisionInfo *in_stack_fffffe48;
  byte auStack_1a0 [120];
  CMatrix3x3f CStack_128;
  CVector3f CStack_100;
  float fStack_f4;
  float fStack_f0;
  byte auStack_ec [28];
  CVector3f CStack_d0;
  CVector3f CStack_c4;
  byte auStack_b0 [8];
  float fStack_a8;
  uint uStack_a4;
  CVector3f CStack_a0;
  byte auStack_94 [20];
  CVector3f CStack_80;
  float fStack_74;
  CVector3f aCStack_70 [2];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  int local_48;
  float fStack_44;
  int iStack_40;
  int iStack_3c;
  CDemonActor_vtable *pCStack_38;
  float fStack_34;
  CDemonActor_vtable *local_30;
  CDemonActor_vtable *local_2c;
  float fStack_28;
  int *local_24;
  int iStack_20;
  CDemonActor *pCStack_1c;
  float fStack_18;
  CDemonActor *pCStack_14;
  
  local_24 = (int *)(in_stack_00000004[0x17a].actor_name + 0x18);
  if (in_stack_00000008 == 1) {
    local_24 = &in_stack_00000004[0x179].field28_0x150;
  }
  fVar8 = in_stack_00000004[0x17a].orient_matrix.m[0].x;
  if (fVar8 == 0.0) {
    local_24[3] = 0;
    local_24[1] = 0;
    uVar3 = 0;
    if (*(int *)(in_stack_00000004[0x1b].create_event + in_stack_00000008 * 0x44 + -0xc) != 0) {
      uVar3 = (**(code **)(*(int *)(*(int *)(in_stack_00000004[0x1b].create_event +
                                            in_stack_00000008 * 0x44 + -0xc) + 0x154) + 0x6c))();
    }
    if ((uVar3 & 4) == 0) {
      (((CLocation *)(local_24 + 2))->position).x = 0.0;
      *local_24 = 0;
      return;
    }
    local_48 = 3;
  }
  else {
    local_48 = *(int *)((int)fVar8 + 0x2e0);
  }
  if (in_stack_00000008 == 0) {
    if ((*(int *)(in_stack_00000004[0x176].create_event + 0x2c) == 2) && (local_48 == 0)) {
      return;
    }
    local_30 = (CDemonActor_vtable *)0xbfa78d36;
    local_2c = (CDemonActor_vtable *)0x3f060a92;
    iVar6 = DAT_03f6bb00;
    iVar7 = DAT_03f6bad8;
  }
  else {
    iVar6 = DAT_03f6bb04;
    iVar7 = DAT_03f6badc;
    if (local_48 == 0) {
      local_2c = (CDemonActor_vtable *)0x3fa78d36;
      local_30 = (CDemonActor_vtable *)0xbf060a92;
    }
    else {
      local_2c = (CDemonActor_vtable *)0x3f060a92;
      local_30 = (CDemonActor_vtable *)0xbf060a92;
    }
  }
  fVar8 = (float)in_stack_00000004[0x8d].field11_0xdc * (float)3.1415926535000001 *
          (float)2 * in_stack_0000000c + (float)*local_24;
  local_24[1] = 0;
  *local_24 = (int)fVar8;
  if (fVar8 < 0xBF860A92) {
    *local_24 = (int)0xBF860A92;
  }
  if (0x3F9C61AA < (float)*local_24) {
    *local_24 = (int)0x3F9C61AA;
  }
  if ((float)local_24[3] < (float)local_30) {
    local_24[3] = (int)local_30;
  }
  if ((float)local_2c < (float)local_24[3]) {
    local_24[3] = (int)local_2c;
  }
  if ((float)local_24[1] < (float)local_30) {
    local_24[1] = (int)local_30;
  }
  if ((float)local_2c < (float)local_24[1]) {
    local_24[1] = (int)local_2c;
  }
  local_24[7] = 0;
  pCStack_38 = (CDemonActor_vtable *)local_24[1];
  fStack_34 = (float)*local_24;
  if ((local_48 == 3) ||
     (fVar8 = *(float *)(in_stack_00000004[0x176].create_event + 0x2c), fVar8 != 0.0)) {
    local_24[3] = 0;
  }
  else {
    fVar1 = in_stack_00000004[0x17a].orient_matrix.m[0].x;
    CStack_80.y = fVar8;
    CStack_80.z = fVar8;
    fStack_74 = fVar8;
    if ((fVar1 != 0.0) &&
       (pfVar4 = (float *)(**(code **)(*(int *)((int)fVar1 + 0x154) + 0xf4))(),
       &CStack_80.y != pfVar4)) {
      CStack_80.y = *pfVar4;
      CStack_80.z = pfVar4[1];
      fStack_74 = pfVar4[2];
    }
    if (local_48 == 0) {
      pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                         ((CDeformableModelInstance *)(in_stack_00000004 + 1),&CStack_a0,iVar7);
      if (&CStack_100 != pCVar5) {
        CStack_100.x = pCVar5->x;
        CStack_100.y = pCVar5->y;
        CStack_100.z = pCVar5->z;
      }
    }
    else {
      pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                         ((CDeformableModelInstance *)(in_stack_00000004 + 1),&CStack_c4,iVar6);
      if (&CStack_100 != pCVar5) {
        CStack_100.x = pCVar5->x;
        CStack_100.y = pCVar5->y;
        CStack_100.z = pCVar5->z;
      }
    }
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (in_stack_00000004,(CVector3f *)auStack_94,&CStack_100);
    aCStack_70[0].x = (float)*local_24;
    aCStack_70[0].z = 0.0;
    aCStack_70[0].y = (float)local_24[1];
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_128,aCStack_70);
    auStack_b0._4_4_ = 0.0;
    fStack_a8 = 0.0;
    uStack_a4 = 0x3f800000;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
              (&CStack_128,&CStack_d0,(CVector3f *)(auStack_b0 + 4));
    iStack_20 = 0x7149f2ca;
    iStack_3c = 0;
    for (iStack_40 = 0; iStack_40 < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 16000);
        iStack_40 = iStack_40 + 1) {
      this_ptr = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iStack_3c + 0x3e84)
                            ,g_CCharacterClassInfo.name_hash);
      if (this_ptr == (CDemonActor *)0x0) {
LAB_005c3e52:
        pCStack_1c = *(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iStack_3c + 0x3e84);
        crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                  (auStack_1a0,10,&g_CVectorTypeInfo);
        iStack_20 = (*pCStack_1c->vtable->getTargetPoints)(pCStack_1c,(CVector3f *)auStack_1a0);
        if ((0 < iStack_20) && (iVar6 = 0, 0 < iStack_20)) {
          pCVar5 = (CVector3f *)(auStack_1a0 + 8);
          do {
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCStack_14,&CStack_80,pCVar5);
            in_stack_fffffe48 = (SCollisionInfo *)(auStack_ec + 0x18);
            core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                      (in_stack_00000004,(CVector3f *)in_stack_fffffe48,&CStack_80);
            auStack_b0._0_4_ = (float)auStack_ec._24_4_ - CStack_100.z;
            auStack_b0._4_4_ = CStack_d0.x - fStack_f4;
            fStack_a8 = CStack_d0.y - fStack_f0;
            if ((0.0 < (double)fStack_a8) && ((double)fStack_a8 <= 30)) {
              in_stack_fffffe48 = (SCollisionInfo *)auStack_ec;
              core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                        ((CVector3f *)in_stack_fffffe48,(CVector3f *)auStack_b0);
              auStack_1a0._0_4_ = 0.5235988;
              if (fStack_a8 < (float)10) {
                auStack_1a0._0_4_ = 1.5707964;
              }
              if (((ABS((float)auStack_ec._0_4_) <= (float)auStack_1a0._0_4_) &&
                  (fStack_28 <= (float)auStack_ec._4_4_)) &&
                 ((float)auStack_ec._4_4_ <= (float)local_24)) {
                fVar8 = SQRT(fStack_a8 * fStack_a8 +
                             (float)auStack_b0._0_4_ * (float)auStack_b0._0_4_ +
                             (float)auStack_b0._4_4_ * (float)auStack_b0._4_4_);
                fVar1 = 1.0 / fVar8;
                auStack_b0._4_4_ = (float)auStack_b0._4_4_ * fVar1;
                auStack_b0._0_4_ = (float)auStack_b0._0_4_ * fVar1;
                fStack_a8 = fStack_a8 * fVar1;
                auStack_1a0._4_4_ =
                     fVar8 * (float)0.033333333333333298 +
                     ((float)2 -
                     (fStack_a8 * CStack_c4.y +
                     (float)auStack_b0._0_4_ * CStack_d0.z + (float)auStack_b0._4_4_ * CStack_c4.x))
                ;
                if ((float)auStack_1a0._4_4_ < fStack_18) {
                  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
                  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,2);
                  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
                  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCStack_14);
                  iVar7 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
                                    (g_CDemonSetPtr,(CVector3f *)(auStack_94 + 8),&CStack_80);
                  in_stack_fffffe48 = (SCollisionInfo *)0x5c40fe;
                  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
                  if (iVar7 == 0) {
                    fStack_18 = (float)auStack_1a0._4_4_;
                    local_30 = (CDemonActor_vtable *)auStack_ec._4_4_;
                    local_2c = (CDemonActor_vtable *)auStack_ec._0_4_;
                    pCStack_1c->actor_name[0x1c] = '\x01';
                    pCStack_1c->actor_name[0x1d] = '\0';
                    pCStack_1c->actor_name[0x1e] = '\0';
                    pCStack_1c->actor_name[0x1f] = '\0';
                  }
                }
              }
            }
            iVar6 = iVar6 + 1;
            pCVar5 = pCVar5 + 1;
          } while (iVar6 < iStack_20);
        }
      }
      else {
        iVar6 = (*this_ptr->vtable[1].hasCollision)(this_ptr,in_stack_fffffe48);
        if (iVar6 == 0) {
          in_stack_fffffe48 = (SCollisionInfo *)0x5c3e47;
          iVar6 = (*this_ptr->vtable->shouldIgnoreForTargeting)(this_ptr);
          if (iVar6 == 0) goto LAB_005c3e52;
        }
      }
      iStack_3c = iStack_3c + 4;
    }
  }
  dVar2 = 1.5;
  if (local_48 != 0) {
    dVar2 = 0.5;
  }
  fStack_44 = in_stack_0000000c * (float)3.1415926535000001 * (float)dVar2;
  fStack_4c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((float)pCStack_38 - (float)local_24[3])
  ;
  fStack_18 = fStack_4c;
  fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                        (fStack_34 - (((CLocation *)(local_24 + 2))->position).x);
  fStack_54 = -fStack_44;
  if (fStack_4c < fStack_54) {
    fStack_4c = fStack_54;
  }
  if (fStack_44 < fStack_4c) {
    fStack_4c = fStack_44;
  }
  fStack_58 = -fStack_44;
  fStack_50 = fStack_18;
  if (fStack_18 < fStack_58) {
    fStack_50 = fStack_58;
  }
  if (fStack_44 < fStack_50) {
    fStack_50 = fStack_44;
  }
  fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((float)local_24[3] + fStack_4c);
  fVar8 = (((CLocation *)(local_24 + 2))->position).x;
  local_24[3] = (int)fStack_18;
  fVar8 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(fVar8 + fStack_50);
  (((CLocation *)(local_24 + 2))->position).x = fVar8;
  local_24[5] = 0x3f800000;
  if ((((float)local_24[7] == 1.4013e-45) &&
      (ABS((float)local_24[3] - (float)pCStack_38) < (float)0.01)) &&
     (ABS((((CLocation *)(local_24 + 2))->position).x - fStack_34) < (float)0.01)) {
    local_24[7] = 2;
    return;
  }
  return;
}
