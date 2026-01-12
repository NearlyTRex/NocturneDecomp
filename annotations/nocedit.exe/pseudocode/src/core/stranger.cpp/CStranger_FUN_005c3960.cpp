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
  int iVar1;
  float fVar2;
  double dVar3;
  uint uVar4;
  int *piVar5;
  CVector3f *pCVar6;
  CDemonActor *this_ptr;
  int iVar7;
  int iVar8;
  float fVar9;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  float in_stack_0000000c;
  double in_stack_fffffe4c;
  float fStack_1a4;
  CVector3f aCStack_19c [10];
  CMatrix3x3f CStack_124;
  CVector3f CStack_fc;
  CVector3f aCStack_f0 [2];
  CVector3f CStack_d8;
  CVector3f CStack_cc;
  CVector3f CStack_c0;
  CVector3f CStack_b4;
  CVector3f CStack_a8;
  CVector3f CStack_9c;
  CVector3f CStack_90;
  CVector3f CStack_84;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  CVector3f aCStack_6c [2];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  int iStack_44;
  float fStack_40;
  int iStack_3c;
  int iStack_38;
  CDemonActor_vtable *pCStack_34;
  float local_30;
  CDemonActor_vtable *local_2c;
  CDemonActor_vtable *pCStack_28;
  int local_24;
  int *piStack_20;
  float fStack_1c;
  CDemonActor *pCStack_18;
  float fStack_14;
  
  piStack_20 = (int *)(in_stack_00000004[0x17a].actor_name + 0x18);
  if (in_stack_00000008 == 1) {
    piStack_20 = &in_stack_00000004[0x179].field28_0x150;
  }
  fVar9 = in_stack_00000004[0x17a].orient_matrix.m[0].x;
  if (fVar9 == 0.0) {
    piStack_20[3] = 0;
    piStack_20[1] = 0;
    uVar4 = 0;
    if (*(int *)(in_stack_00000004[0x1b].create_event + in_stack_00000008 * 0x44 + -0xc) != 0) {
      uVar4 = (**(code **)(*(int *)(*(int *)(in_stack_00000004[0x1b].create_event +
                                            in_stack_00000008 * 0x44 + -0xc) + 0x154) + 0x6c))();
    }
    if ((uVar4 & 4) == 0) {
      (((CLocation *)(piStack_20 + 2))->position).x = 0.0;
      *piStack_20 = 0;
      return;
    }
    iStack_44 = 3;
  }
  else {
    iStack_44 = *(int *)((int)fVar9 + 0x2e0);
  }
  if (in_stack_00000008 == 0) {
    if ((*(int *)(in_stack_00000004[0x176].create_event + 0x2c) == 2) && (iStack_44 == 0)) {
      return;
    }
    local_2c = (CDemonActor_vtable *)0xbfa78d36;
    pCStack_28 = (CDemonActor_vtable *)0x3f060a92;
    iVar7 = DAT_03f6bb00;
    iVar8 = DAT_03f6bad8;
  }
  else {
    iVar7 = DAT_03f6bb04;
    iVar8 = DAT_03f6badc;
    if (iStack_44 == 0) {
      pCStack_28 = (CDemonActor_vtable *)0x3fa78d36;
      local_2c = (CDemonActor_vtable *)0xbf060a92;
    }
    else {
      pCStack_28 = (CDemonActor_vtable *)0x3f060a92;
      local_2c = (CDemonActor_vtable *)0xbf060a92;
    }
  }
  fVar9 = (float)in_stack_00000004[0x8d].field11_0xdc * (float)3.1415926535000001 *
          (float)2 * in_stack_0000000c + (float)*piStack_20;
  piStack_20[1] = 0;
  *piStack_20 = (int)fVar9;
  if (fVar9 < DAT_00663770) {
    *piStack_20 = (int)DAT_00663770;
  }
  if (DAT_00663774 < (float)*piStack_20) {
    *piStack_20 = (int)DAT_00663774;
  }
  if ((float)piStack_20[3] < (float)local_2c) {
    piStack_20[3] = (int)local_2c;
  }
  if ((float)pCStack_28 < (float)piStack_20[3]) {
    piStack_20[3] = (int)pCStack_28;
  }
  if ((float)piStack_20[1] < (float)local_2c) {
    piStack_20[1] = (int)local_2c;
  }
  if ((float)pCStack_28 < (float)piStack_20[1]) {
    piStack_20[1] = (int)pCStack_28;
  }
  piStack_20[7] = 0;
  pCStack_34 = (CDemonActor_vtable *)piStack_20[1];
  local_30 = (float)*piStack_20;
  if ((iStack_44 == 3) ||
     (iVar1 = *(int *)(in_stack_00000004[0x176].create_event + 0x2c), iVar1 != 0)) {
    piStack_20[3] = 0;
  }
  else {
    fVar9 = in_stack_00000004[0x17a].orient_matrix.m[0].x;
    iStack_78 = iVar1;
    iStack_74 = iVar1;
    iStack_70 = iVar1;
    if ((fVar9 != 0.0) &&
       (piVar5 = (int *)(**(code **)(*(int *)((int)fVar9 + 0x154) + 0xf4))(), &iStack_78 != piVar5))
    {
      iStack_78 = *piVar5;
      iStack_74 = piVar5[1];
      iStack_70 = piVar5[2];
    }
    if (iStack_44 == 0) {
      pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                         ((CDeformableModelInstance *)(in_stack_00000004 + 1),&CStack_9c,iVar8);
      if (&CStack_fc != pCVar6) {
        CStack_fc.x = pCVar6->x;
        CStack_fc.y = pCVar6->y;
        CStack_fc.z = pCVar6->z;
      }
    }
    else {
      pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                         ((CDeformableModelInstance *)(in_stack_00000004 + 1),&CStack_c0,iVar7);
      if (&CStack_fc != pCVar6) {
        CStack_fc.x = pCVar6->x;
        CStack_fc.y = pCVar6->y;
        CStack_fc.z = pCVar6->z;
      }
    }
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (in_stack_00000004,&CStack_90,&CStack_fc);
    aCStack_6c[0].x = (float)*piStack_20;
    aCStack_6c[0].z = 0.0;
    aCStack_6c[0].y = (float)piStack_20[1];
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&CStack_124,aCStack_6c);
    CStack_a8.x = 0.0;
    CStack_a8.y = 0.0;
    CStack_a8.z = 1.0;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&CStack_124,&CStack_cc,&CStack_a8);
    fStack_1c = 1e+30;
    iStack_38 = 0;
    for (iStack_3c = 0; iStack_3c < *(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 16000);
        iStack_3c = iStack_3c + 1) {
      this_ptr = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iStack_38 + 0x3e84)
                            ,g_CCharacterClassInfo.name_hash);
      if ((this_ptr == (CDemonActor *)0x0) ||
         ((iVar7 = (*this_ptr->vtable[1].hasCollision)(this_ptr,SUB84 /* extract 2-byte value */(in_stack_fffffe4c,0)),
          iVar7 == 0 &&
          (iVar7 = (*this_ptr->vtable->shouldIgnoreForTargeting)(this_ptr), iVar7 == 0)))) {
        pCStack_18 = *(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iStack_38 + 0x3e84);
        crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                  (aCStack_19c,10,&g_CVectorTypeInfo);
        local_24 = (*pCStack_18->vtable->getTargetPoints)(pCStack_18,aCStack_19c);
        if ((0 < local_24) && (iVar7 = 0, 0 < local_24)) {
          pCVar6 = aCStack_19c;
          do {
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCStack_18,&CStack_84,pCVar6);
            core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                      (in_stack_00000004,&CStack_d8,&CStack_84);
            CStack_b4.x = CStack_d8.x - CStack_fc.x;
            CStack_b4.y = CStack_d8.y - CStack_fc.y;
            CStack_b4.z = CStack_d8.z - CStack_fc.z;
            in_stack_fffffe4c = (double)CStack_b4.z;
            if ((0.0 < in_stack_fffffe4c) && (in_stack_fffffe4c <= 30)) {
              core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                        (aCStack_f0,&CStack_b4);
              fStack_1a4 = 0.5235988;
              if (CStack_b4.z < (float)10) {
                fStack_1a4 = 1.5707964;
              }
              if (((ABS(aCStack_f0[0].x) <= fStack_1a4) && ((float)local_2c <= aCStack_f0[0].y)) &&
                 (aCStack_f0[0].y <= (float)pCStack_28)) {
                fVar9 = SQRT(CStack_b4.z * CStack_b4.z +
                             CStack_b4.x * CStack_b4.x + CStack_b4.y * CStack_b4.y);
                fVar2 = 1.0 / fVar9;
                CStack_b4.y = CStack_b4.y * fVar2;
                CStack_b4.x = CStack_b4.x * fVar2;
                CStack_b4.z = CStack_b4.z * fVar2;
                fVar9 = fVar9 * (float)0.033333333333333298 +
                        ((float)2 -
                        (CStack_b4.z * CStack_cc.z +
                        CStack_b4.x * CStack_cc.x + CStack_b4.y * CStack_cc.y));
                if (fVar9 < fStack_1c) {
                  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
                  core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,2);
                  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
                  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,pCStack_18);
                  iVar8 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
                                    (g_CDemonSetPtr,&CStack_90,&CStack_84);
                  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
                  if (iVar8 == 0) {
                    pCStack_34 = (CDemonActor_vtable *)aCStack_f0[0].y;
                    local_30 = aCStack_f0[0].x;
                    piStack_20[7] = 1;
                    fStack_1c = fVar9;
                  }
                }
              }
            }
            iVar7 = iVar7 + 1;
            pCVar6 = pCVar6 + 1;
          } while (iVar7 < local_24);
        }
      }
      iStack_38 = iStack_38 + 4;
    }
  }
  dVar3 = 1.5;
  if (iStack_44 != 0) {
    dVar3 = 0.5;
  }
  fStack_40 = in_stack_0000000c * (float)3.1415926535000001 * (float)dVar3;
  local_48 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                       ((float)pCStack_34 - (float)piStack_20[3]);
  fStack_14 = local_48;
  fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                        (local_30 - (((CLocation *)(piStack_20 + 2))->position).x);
  fStack_50 = -fStack_40;
  if (local_48 < fStack_50) {
    local_48 = fStack_50;
  }
  if (fStack_40 < local_48) {
    local_48 = fStack_40;
  }
  fStack_54 = -fStack_40;
  fStack_4c = fStack_14;
  if (fStack_14 < fStack_54) {
    fStack_4c = fStack_54;
  }
  if (fStack_40 < fStack_4c) {
    fStack_4c = fStack_40;
  }
  fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70((float)piStack_20[3] + local_48);
  fVar9 = (((CLocation *)(piStack_20 + 2))->position).x;
  piStack_20[3] = (int)fStack_14;
  fVar9 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(fVar9 + fStack_4c);
  (((CLocation *)(piStack_20 + 2))->position).x = fVar9;
  piStack_20[5] = 0x3f800000;
  if ((((float)piStack_20[7] == 1.4013e-45) &&
      (ABS((float)piStack_20[3] - (float)pCStack_34) < (float)0.01)) &&
     (ABS((((CLocation *)(piStack_20 + 2))->position).x - local_30) < (float)0.01)) {
    piStack_20[7] = 2;
    return;
  }
  return;
}
