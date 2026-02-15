// Name: core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0
// Address: 0042d5a0
// Address Range: [[0042d5a0, 0042da01] [0042da1e, 0042dcc2]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0(CCharacter *this_ptr,float delta_time,int param_3)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0(CCharacter *this_ptr,float delta_time,int param_3)

{
  int iVar1;
  int iVar2;
  CEnemy *pCVar3;
  CCharacter *pCVar4;
  CVector3f *pCVar5;
  float fVar6;
  CLocation *pCVar7;
  float fStack_100;
  CVector3f CStack_f8;
  CVector3f CStack_ec;
  CVector3f CStack_e0;
  CVector3f CStack_d4;
  CVector3f CStack_c8;
  CVector3f CStack_bc;
  CVector3f CStack_b0;
  CVector3f CStack_a4;
  CVector3f CStack_98;
  CVector3f CStack_8c;
  CVector3f CStack_80;
  CVector3f CStack_74;
  CVector3f CStack_68;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  CVector3f CStack_44;
  CVector3f CStack_38;
  float fStack_24;
  CCharacter *pCStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  iVar1 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr);
  if (iVar1 != 0) {
    param_3 = 1;
  }
  pCStack_20 = (CCharacter *)0x0;
  pCVar4 = pCStack_20;
  if ((param_3 == 0) &&
     (pCVar4 = (CCharacter *)this_ptr->look_at_target,
     (CCharacter *)this_ptr->look_at_target == (CCharacter *)0x0)) {
    if (this_ptr->look_at_search_timer <= 0.0) {
      CStack_a4.x = 0.0;
      CStack_a4.z = 0.0;
      CStack_a4.y = 5.5;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&this_ptr->base,&CStack_5c,&CStack_a4);
      iStack_18 = 0;
      for (iVar1 = 0; iVar1 < g_CDemonSetPtr->character_count; iVar1 = iVar1 + 1) {
        pCVar4 = *(CCharacter **)((int)g_CDemonSetPtr->characters + iStack_18);
        if ((pCVar4 != this_ptr) &&
           (iVar2 = (*((pCVar4->base).vtable._ub)->shouldIgnoreForTargeting)(&pCVar4->base),
           iVar2 == 0)) {
          iStack_1c = (*(((pCVar4->base).vtable._uc)->_uc).getDeathState)(pCVar4);
          if ((iStack_1c == 0) || ((pCVar4->model).model_name[0] == '\0')) {
            pCVar7 = &(pCVar4->base).location;
            if ((CLocation *)&CStack_ec != pCVar7) {
              CStack_ec.x = (pCVar7->position).x;
              CStack_ec.y = (pCVar4->base).location.position.y;
              CStack_ec.z = (pCVar4->base).location.position.z;
            }
            CStack_ec.y = CStack_ec.y + 5.5f;
          }
          else {
            pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                               (&pCVar4->model,&CStack_80,0);
            pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                               (&pCVar4->base,&CStack_68,pCVar5);
            if (&CStack_ec != pCVar5) {
              CStack_ec.x = pCVar5->x;
              CStack_ec.y = pCVar5->y;
              CStack_ec.z = pCVar5->z;
            }
          }
          CStack_b0.x = CStack_ec.x - CStack_5c.x;
          CStack_b0.y = CStack_ec.y - CStack_5c.y;
          CStack_b0.z = CStack_ec.z - CStack_5c.z;
          core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                    (&this_ptr->base,&CStack_50,&CStack_b0);
          if ((((0.0 <= CStack_50.z) &&
               (fVar6 = CStack_50.z * CStack_50.z +
                        CStack_50.x * CStack_50.x + CStack_50.y * CStack_50.y, fStack_24 = fVar6,
               (int)fVar6 < 0x44610001)) &&
              (core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                         (&CStack_44,&CStack_50), ABS(CStack_44.y) <= (float)1.3962634015555599)) &&
             (ABS(CStack_44.x) <= (float)0.78539816337500001)) {
            fStack_100 = 10.0;
            pCVar3 = (CEnemy *)
                     core_actor_cpp_castToClassHash_FUN_0040c790
                               (&pCVar4->base,g_CEnemyClassInfo.name_hash);
            if (((pCVar3 != (CEnemy *)0x0) && (iStack_1c == 0)) &&
               (fStack_100 = 30.0, this_ptr == (CCharacter *)pCVar3->victim)) {
              fStack_100 = 40.0;
            }
            if ((fStack_100 < (float)10) &&
               (iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0(&pCVar4->base,"CHero"),
               iVar2 != 0)) {
              fStack_100 = 15.0;
            }
            if ((fStack_100 < (float)15) && (0 < iStack_1c)) {
              fStack_100 = 15.0;
            }
            fStack_100 = ((float)20 / (SQRT(fVar6) + (float)20)) *
                         fStack_100;
            if (pCVar4 == (CCharacter *)this_ptr->unk) {
              fStack_100 = fStack_100 * (float)1.1000000000000001;
            }
            if (-1.0f <= fStack_100) {
              core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,&this_ptr->base);
              core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,&pCVar4->base);
              core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,2);
              iVar2 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
                                (g_CDemonSetPtr,&CStack_5c,&CStack_ec);
              if ((iVar2 == 0) && (pCStack_20 = pCVar4, &CStack_d4 != &CStack_44)) {
                CStack_d4.x = CStack_44.x;
                CStack_d4.y = CStack_44.y;
                CStack_d4.z = CStack_44.z;
              }
            }
          }
        }
        iStack_18 = iStack_18 + 4;
      }
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      fStack_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(1.0,2.0);
      this_ptr->look_at_search_timer = fStack_14;
    }
    else {
      pCStack_20 = (CCharacter *)this_ptr->unk;
      this_ptr->look_at_search_timer = this_ptr->look_at_search_timer - delta_time;
    }
  }
  else {
    pCStack_20 = pCVar4;
    this_ptr->look_at_search_timer = 0.0;
  }
  this_ptr->unk = &pCStack_20->base;
  if (pCStack_20 != (CCharacter *)0x0) {
    CStack_c8.x = 0.0;
    CStack_c8.z = 0.0;
    CStack_c8.y = 5.5;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(&this_ptr->base,&CStack_8c,&CStack_c8)
    ;
    pCVar4 = (CCharacter *)
             core_actor_cpp_castToClassHash_FUN_0040c790
                       (this_ptr->unk,g_CCharacterClassInfo.name_hash);
    if (pCVar4 == (CCharacter *)0x0) {
      g_CurrentFilename = "..\\core\\charactr.cpp";
      g_CurrentLineNumber = 0xda0;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CCharacter::findSomethingToLookAt - Should be a character");
    }
    iVar1 = (*(((pCVar4->base).vtable._uc)->_uc).getDeathState)(pCVar4);
    if ((iVar1 == 0) || ((pCVar4->model).model_name[0] == '\0')) {
      pCVar7 = &(pCVar4->base).location;
      if ((CLocation *)&CStack_74 != pCVar7) {
        CStack_74.x = (pCVar7->position).x;
        CStack_74.y = (pCVar4->base).location.position.y;
        CStack_74.z = (pCVar4->base).location.position.z;
      }
      CStack_74.y = CStack_74.y + 5.5f;
    }
    else {
      pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                         (&pCVar4->model,&CStack_38,0);
      pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         ((CDemonActor *)pCVar4,&CStack_98,pCVar5);
      if (&CStack_74 != pCVar5) {
        CStack_74.x = pCVar5->x;
        CStack_74.y = pCVar5->y;
        CStack_74.z = pCVar5->z;
      }
    }
    CStack_f8.x = CStack_74.x - CStack_8c.x;
    CStack_f8.y = CStack_74.y - CStack_8c.y;
    CStack_f8.z = CStack_74.z - CStack_8c.z;
    core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
              (&this_ptr->base,&CStack_e0,&CStack_f8);
    pCVar5 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (&CStack_bc,&CStack_e0);
    if (&CStack_d4 != pCVar5) {
      CStack_d4.x = pCVar5->x;
      CStack_d4.y = pCVar5->y;
      CStack_d4.z = pCVar5->z;
    }
    if ((float)1.3962634015555599 < ABS(CStack_d4.y)) {
      this_ptr->unk = (CDemonActor *)0x0;
    }
    if ((float)0.78539816337500001 < ABS(CStack_d4.x)) {
      this_ptr->unk = (CDemonActor *)0x0;
      goto LAB_0042d603;
    }
  }
  if (this_ptr->unk != (CDemonActor *)0x0) {
    fVar6 = delta_time / 0.5f + this_ptr->look_at_weight;
    this_ptr->look_at_weight = fVar6;
    if (1.0 < fVar6) {
      this_ptr->look_at_weight = 1.0;
    }
    fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(CStack_d4.y - this_ptr->look_at_yaw);
    this_ptr->look_at_yaw = fStack_14 * (float)0.40000000000000002 + this_ptr->look_at_yaw;
    fVar6 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(CStack_d4.x - this_ptr->look_at_pitch);
    this_ptr->look_at_pitch = fVar6 * (float)0.40000000000000002 + this_ptr->look_at_pitch;
    return;
  }
LAB_0042d603:
  fVar6 = this_ptr->look_at_weight - delta_time / 0.5f;
  this_ptr->look_at_weight = fVar6;
  if (fVar6 < 0.0) {
    this_ptr->look_at_pitch = 0.0;
    this_ptr->look_at_weight = 0.0;
    this_ptr->look_at_yaw = 0.0;
    return;
  }
  return;
}
