// Name: core_stranger.cpp_CStranger_FUN_005c3960
// Address: 005c3960
// Address Range: [[005c3960, 005c4364]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005c3960(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005c3960(CStranger *this_ptr)

{
  CDemonActor *this_ptr_00;
  int iVar1;
  float fVar2;
  double dVar3;
  uint uVar4;
  int *piVar5;
  CDeformableModelInstance *this_ptr_01;
  CVector3f *pCVar6;
  CCharacter *pCVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  int in_stack_00000008;
  float in_stack_0000000c;
  float fStack_1a8;
  CVector3f aCStack_1a0 [10];
  CMatrix3x3f CStack_128;
  CVector3f CStack_100;
  CVector3f aCStack_f4 [2];
  CVector3f CStack_dc;
  CVector3f CStack_d0;
  CVector3f CStack_c4;
  CVector3f CStack_b8;
  CVector3f CStack_ac;
  CVector3f CStack_a0;
  CVector3f CStack_94;
  CVector3f CStack_88;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  CVector3f aCStack_70 [2];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  int iStack_40;
  int iStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float local_2c;
  int iStack_28;
  char *local_24;
  float fStack_20;
  CDemonActor *pCStack_1c;
  float fStack_18;
  
  local_24 = this_ptr->unk3 + 4;
  if (in_stack_00000008 == 1) {
    local_24 = this_ptr->unk1 + 0x10;
  }
  if (this_ptr->weapon == (CDemonActor *)0x0) {
    *(float *)(local_24 + 0xc) = 0.0;
    *(float *)(local_24 + 4) = 0.0;
    this_ptr_00 = (this_ptr->base).base.carry_hands[in_stack_00000008].carry_actor;
    uVar4 = 0;
    if (this_ptr_00 != (CDemonActor *)0x0) {
      uVar4 = (*((this_ptr_00->vtable)._ub)->getAllowedMeleeAttackTypes)(this_ptr_00);
    }
    if ((uVar4 & 4) == 0) {
      *(float *)(local_24 + 8) = 0.0;
      *(float *)local_24 = 0.0;
      return;
    }
    local_48 = 4.2039e-45;
  }
  else {
    local_48 = this_ptr->weapon[2].orient.vec.x;
  }
  if (in_stack_00000008 == 0) {
    if (((this_ptr->base).aim_mode == 2) && (local_48 == 0.0)) {
      return;
    }
    local_30 = -1.3089969;
    local_2c = 0.5235988;
    iVar8 = INT_03f6bb00;
    iVar9 = INT_03f6bad8;
  }
  else {
    iVar8 = INT_03f6bb04;
    iVar9 = INT_03f6badc;
    if (local_48 == 0.0) {
      local_2c = 1.3089969;
      local_30 = -0.5235988;
    }
    else {
      local_2c = 0.5235988;
      local_30 = -0.5235988;
    }
  }
  fVar10 = (this_ptr->base).player_control.look_up_down_speed * (float)3.1415926535000001 *
           (float)2 * in_stack_0000000c + *(float *)local_24;
  *(float *)(local_24 + 4) = 0.0;
  *(float *)local_24 = fVar10;
  if (fVar10 < -1.047198f) {
    *(float *)local_24 = -1.047198f;
  }
  if (1.22173f < *(float *)local_24) {
    *(float *)local_24 = 1.22173f;
  }
  if (*(float *)(local_24 + 0xc) < local_30) {
    *(float *)(local_24 + 0xc) = local_30;
  }
  if (local_2c < *(float *)(local_24 + 0xc)) {
    *(float *)(local_24 + 0xc) = local_2c;
  }
  if (*(float *)(local_24 + 4) < local_30) {
    *(float *)(local_24 + 4) = local_30;
  }
  if (local_2c < *(float *)(local_24 + 4)) {
    *(float *)(local_24 + 4) = local_2c;
  }
  *(float *)(local_24 + 0x1c) = 0.0;
  fStack_38 = *(float *)(local_24 + 4);
  fStack_34 = *(float *)local_24;
  if ((local_48 == 4.2039e-45) || (iVar1 = (this_ptr->base).aim_mode, iVar1 != 0)) {
    *(float *)(local_24 + 0xc) = 0.0;
  }
  else {
    pCVar7 = (CCharacter *)this_ptr->weapon;
    iStack_7c = iVar1;
    iStack_78 = iVar1;
    iStack_74 = iVar1;
    if ((pCVar7 != (CCharacter *)0x0) &&
       (piVar5 = (int *)(*(((pCVar7->base).vtable._uc)->_uc).canWalk)(pCVar7), &iStack_7c != piVar5)
       ) {
      iStack_7c = *piVar5;
      iStack_78 = piVar5[1];
      iStack_74 = piVar5[2];
    }
    this_ptr_01 = &(this_ptr->base).base.model;
    if (local_48 == 0.0) {
      pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                         (this_ptr_01,&CStack_a0,iVar9);
      if (&CStack_100 != pCVar6) {
        CStack_100.x = pCVar6->x;
        CStack_100.y = pCVar6->y;
        CStack_100.z = pCVar6->z;
      }
    }
    else {
      pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                         (this_ptr_01,&CStack_c4,iVar8);
      if (&CStack_100 != pCVar6) {
        CStack_100.x = pCVar6->x;
        CStack_100.y = pCVar6->y;
        CStack_100.z = pCVar6->z;
      }
    }
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&CStack_94,&CStack_100);
    aCStack_70[0].x = *(float *)local_24;
    aCStack_70[0].z = 0.0;
    aCStack_70[0].y = *(float *)(local_24 + 4);
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_128,aCStack_70);
    CStack_ac.x = 0.0;
    CStack_ac.y = 0.0;
    CStack_ac.z = 1.0;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&CStack_128,&CStack_d0,&CStack_ac);
    fStack_20 = 1e+30;
    iStack_3c = 0;
    for (iStack_40 = 0; iStack_40 < g_CDemonSetPtr->threat_count; iStack_40 = iStack_40 + 1) {
      pCVar7 = (CCharacter *)
               core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)((int)g_CDemonSetPtr->threats + iStack_3c),
                          g_CCharacterClassInfo.name_hash);
      if ((pCVar7 == (CCharacter *)0x0) ||
         ((iVar8 = (*(((pCVar7->base).vtable._uc)->_uc).getDeathState)(pCVar7), iVar8 == 0 &&
          (iVar8 = (*((pCVar7->base).vtable._ub)->shouldIgnoreForTargeting)((CDemonActor *)pCVar7),
          iVar8 == 0)))) {
        pCStack_1c = *(CDemonActor **)((int)g_CDemonSetPtr->threats + iStack_3c);
        __arrinit(aCStack_1a0,10,&g_CVectorTypeInfo);
        iStack_28 = (*((pCStack_1c->vtable)._ub)->getTargetPoints)(pCStack_1c,aCStack_1a0);
        if ((0 < iStack_28) && (iVar8 = 0, 0 < iStack_28)) {
          pCVar6 = aCStack_1a0;
          do {
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCStack_1c,&CStack_88,pCVar6);
            core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                      ((CDemonActor *)this_ptr,&CStack_dc,&CStack_88);
            CStack_b8.x = CStack_dc.x - CStack_100.x;
            CStack_b8.y = CStack_dc.y - CStack_100.y;
            CStack_b8.z = CStack_dc.z - CStack_100.z;
            if ((0.0 < (double)CStack_b8.z) && ((double)CStack_b8.z <= 30)) {
              core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                        (aCStack_f4,&CStack_b8);
              fStack_1a8 = 0.5235988;
              if (CStack_b8.z < (float)10) {
                fStack_1a8 = 1.5707964;
              }
              if (((ABS(aCStack_f4[0].x) <= fStack_1a8) && (local_30 <= aCStack_f4[0].y)) &&
                 (aCStack_f4[0].y <= local_2c)) {
                fVar10 = SQRT(CStack_b8.z * CStack_b8.z +
                              CStack_b8.x * CStack_b8.x + CStack_b8.y * CStack_b8.y);
                fVar2 = 1.0 / fVar10;
                CStack_b8.y = CStack_b8.y * fVar2;
                CStack_b8.x = CStack_b8.x * fVar2;
                CStack_b8.z = CStack_b8.z * fVar2;
                fVar10 = fVar10 * (float)0.033333333333333298 +
                         ((float)2 -
                         (CStack_b8.z * CStack_d0.z +
                         CStack_b8.x * CStack_d0.x + CStack_b8.y * CStack_d0.y));
                if (fVar10 < fStack_20) {
                  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
                  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,2);
                  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                            (g_CDemonSetPtr,(CDemonActor *)this_ptr);
                  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCStack_1c);
                  iVar9 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
                                    (g_CDemonSetPtr,&CStack_94,&CStack_88);
                  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
                  if (iVar9 == 0) {
                    fStack_38 = aCStack_f4[0].y;
                    fStack_34 = aCStack_f4[0].x;
                    *(float *)(local_24 + 0x1c) = 1.4013e-45;
                    fStack_20 = fVar10;
                  }
                }
              }
            }
            iVar8 = iVar8 + 1;
            pCVar6 = pCVar6 + 1;
          } while (iVar8 < iStack_28);
        }
      }
      iStack_3c = iStack_3c + 4;
    }
  }
  dVar3 = 1.5;
  if (local_48 != 0.0) {
    dVar3 = 0.5;
  }
  fStack_44 = in_stack_0000000c * (float)3.1415926535000001 * (float)dVar3;
  fStack_4c = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(fStack_38 - *(float *)(local_24 + 0xc))
  ;
  fStack_18 = fStack_4c;
  fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(fStack_34 - *(float *)(local_24 + 8));
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
  fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(*(float *)(local_24 + 0xc) + fStack_4c)
  ;
  *(float *)(local_24 + 0xc) = fStack_18;
  fVar10 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(*(float *)(local_24 + 8) + fStack_50);
  *(float *)(local_24 + 8) = fVar10;
  *(float *)(local_24 + 0x14) = 1.0;
  if (((*(float *)(local_24 + 0x1c) == 1.4013e-45) &&
      (ABS(*(float *)(local_24 + 0xc) - fStack_38) < (float)0.01)) &&
     (ABS(*(float *)(local_24 + 8) - fStack_34) < (float)0.01)) {
    *(float *)(local_24 + 0x1c) = 2.8026e-45;
    return;
  }
  return;
}
