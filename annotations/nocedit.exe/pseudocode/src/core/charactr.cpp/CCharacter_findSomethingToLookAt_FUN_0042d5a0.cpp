// Name: core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0
// Address: 0042d5a0
// Address Range: [[0042d5a0, 0042da01] [0042da1e, 0042dcc2]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0 (CCharacter *this_ptr,float delta_time,int param_3)

#include "nocturne.h"

void __cdecl
core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0
          (CCharacter *this_ptr,float delta_time,int param_3)

{
  int iVar1;
  int iVar2;
  CDemonActor *pCVar3;
  int iVar4;
  CCharacter *pCVar5;
  CVector3f *pCVar6;
  float fVar7;
  CLocation *pCVar8;
  float fStack_f4;
  CVector3f CStack_f0;
  byte auStack_e0 [16];
  float fStack_d0;
  byte auStack_cc [12];
  float fStack_c0;
  uint uStack_bc;
  CVector3f CStack_b4;
  byte auStack_a4 [8];
  float fStack_9c;
  uint uStack_98;
  byte auStack_90 [12];
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  byte auStack_74 [12];
  float fStack_68;
  float fStack_64;
  byte auStack_5c [12];
  CVector3f CStack_50;
  CVector3f CStack_44;
  byte auStack_38 [28];
  CDemonActor *pCStack_1c;
  float fStack_18;
  CCharacter *pCStack_14;
  
  iVar1 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr);
  if (iVar1 != 0) {
    param_3 = 1;
  }
  pCStack_1c = (CDemonActor *)0x0;
  pCVar3 = pCStack_1c;
  if ((param_3 == 0) &&
     (pCVar3 = this_ptr->look_at_target, this_ptr->look_at_target == (CDemonActor *)0x0)) {
    if ((float)this_ptr->unk7 <= 0.0) {
      auStack_a4._4_4_ = 0.0;
      uStack_98 = 0;
      fStack_9c = 5.5;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&this_ptr->base,(CVector3f *)(auStack_5c + 4),(CVector3f *)(auStack_a4 + 4));
      pCStack_14 = (CCharacter *)0x0;
      for (iVar1 = 0; iVar1 < g_CDemonSetPtr->damage_listener_count; iVar1 = iVar1 + 1) {
        pCVar5 = *(CCharacter **)
                  (pCStack_14[0x1c].descriptive_name + (int)(g_CDemonSetPtr->cameras[0].name + 0x60)
                  );
        if ((pCVar5 != this_ptr) &&
           (iVar2 = (*((pCVar5->base).vtable._ub)->shouldIgnoreForTargeting)(&pCVar5->base),
           iVar2 == 0)) {
          iVar2 = (*(((pCVar5->base).vtable._uc)->_uc).getDeathState)(pCVar5);
          if ((iVar2 == 0) || ((pCVar5->model).model_name[0] == '\0')) {
            pCVar8 = &(pCVar5->base).location;
            if ((CLocation *)auStack_e0 != pCVar8) {
              auStack_e0._0_4_ = (pCVar8->position).x;
              auStack_e0._4_4_ = (pCVar5->base).location.position.y;
              auStack_e0._8_4_ = (pCVar5->base).location.position.z;
            }
            auStack_e0._4_4_ = (float)auStack_e0._4_4_ + 5.5f;
          }
          else {
            pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                               (&pCVar5->model,(CVector3f *)auStack_74,0);
            pCVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                               (&pCVar5->base,(CVector3f *)auStack_5c,pCVar6);
            if ((CVector3f *)auStack_e0 != pCVar6) {
              auStack_e0._0_4_ = pCVar6->x;
              auStack_e0._4_4_ = pCVar6->y;
              auStack_e0._8_4_ = pCVar6->z;
            }
          }
          auStack_a4._0_4_ = (float)auStack_e0._0_4_ - CStack_50.x;
          auStack_a4._4_4_ = (float)auStack_e0._4_4_ - CStack_50.y;
          fStack_9c = (float)auStack_e0._8_4_ - CStack_50.z;
          core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                    (&this_ptr->base,&CStack_44,(CVector3f *)auStack_a4);
          if ((((0.0 <= CStack_44.z) &&
               (CStack_f0.x = CStack_44.z * CStack_44.z +
                              CStack_44.x * CStack_44.x + CStack_44.y * CStack_44.y,
               fStack_18 = CStack_f0.x, (int)CStack_f0.x < 0x44610001)) &&
              (core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                         ((CVector3f *)auStack_38,&CStack_44),
              ABS((float)auStack_38._4_4_) <= (float)1.3962634015555599)) &&
             (ABS((float)auStack_38._0_4_) <= (float)0.78539816337500001)) {
            fStack_f4 = 10.0;
            pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                               (&pCVar5->base,g_CEnemyClassInfo.name_hash);
            if (((pCVar3 != (CDemonActor *)0x0) && (iVar2 == 0)) &&
               (fStack_f4 = 30.0, this_ptr == *(CCharacter **)(pCVar3[0x8d].create_event + 0x4c))) {
              fStack_f4 = 40.0;
            }
            if ((fStack_f4 < (float)10) &&
               (iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(&pCVar5->base,"CHero"),
               iVar4 != 0)) {
              fStack_f4 = 15.0;
            }
            if ((fStack_f4 < (float)15) && (0 < iVar2)) {
              fStack_f4 = 15.0;
            }
            fStack_f4 = ((float)20 / (SQRT(CStack_f0.x) + (float)20)) *
                        fStack_f4;
            if (pCVar5 == (CCharacter *)this_ptr->collision_enabled) {
              fStack_f4 = fStack_f4 * (float)1.1000000000000001;
            }
            if (-1.0f <= fStack_f4) {
              core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,&this_ptr->base);
              core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,&pCVar5->base);
              core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,2);
              iVar2 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
                                (g_CDemonSetPtr,&CStack_50,(CVector3f *)auStack_e0);
              if ((iVar2 == 0) && (pCStack_14 = pCVar5, auStack_cc + 4 != auStack_38)) {
                auStack_cc._4_4_ = auStack_38._0_4_;
                auStack_cc._8_4_ = auStack_38._4_4_;
                fStack_c0 = (float)auStack_38._8_4_;
              }
            }
          }
        }
        pCStack_14 = (CCharacter *)((pCStack_14->base).actor_name + 4);
      }
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      fVar7 = core_actor_cpp_getRandomFloat_FUN_0040cc10(1.0,2.0);
      this_ptr->unk7 = (int)fVar7;
    }
    else {
      pCStack_1c = (CDemonActor *)this_ptr->collision_enabled;
      this_ptr->unk7 = (int)((float)this_ptr->unk7 - delta_time);
    }
  }
  else {
    pCStack_1c = pCVar3;
    this_ptr->unk7 = 0;
  }
  this_ptr->collision_enabled = (int)pCStack_1c;
  if (pCStack_1c != (CDemonActor *)0x0) {
    auStack_cc._8_4_ = 0.0;
    uStack_bc = 0;
    fStack_c0 = 5.5;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&this_ptr->base,(CVector3f *)(auStack_90 + 8),(CVector3f *)(auStack_cc + 8));
    pCVar5 = (CCharacter *)
             core_actor_cpp_castToClassHash_FUN_0040c790
                       ((CDemonActor *)this_ptr->collision_enabled,g_CCharacterClassInfo.name_hash);
    if (pCVar5 == (CCharacter *)0x0) {
      g_CurrentFilename = "..\\core\\charactr.cpp";
      g_CurrentLineNumber = 0xda0;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CCharacter::findSomethingToLookAt - Should be a character");
    }
    iVar1 = (*(((pCVar5->base).vtable._uc)->_uc).getDeathState)(pCVar5);
    if ((iVar1 == 0) || ((pCVar5->model).model_name[0] == '\0')) {
      pCVar8 = &(pCVar5->base).location;
      if ((CLocation *)(auStack_74 + 8) != pCVar8) {
        auStack_74._8_4_ = (pCVar8->position).x;
        fStack_68 = (pCVar5->base).location.position.y;
        fStack_64 = (pCVar5->base).location.position.z;
      }
      fStack_68 = fStack_68 + 5.5f;
    }
    else {
      pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                         (&pCVar5->model,(CVector3f *)(auStack_38 + 8),0);
      pCVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         ((CDemonActor *)pCVar5,(CVector3f *)auStack_90,pCVar6);
      if ((CVector3f *)(auStack_74 + 8) != pCVar6) {
        auStack_74._8_4_ = pCVar6->x;
        fStack_68 = pCVar6->y;
        fStack_64 = pCVar6->z;
      }
    }
    CStack_f0.x = (float)auStack_74._8_4_ - fStack_84;
    CStack_f0.y = fStack_68 - fStack_80;
    CStack_f0.z = fStack_64 - fStack_7c;
    core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
              (&this_ptr->base,(CVector3f *)(auStack_e0 + 8),&CStack_f0);
    pCVar6 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (&CStack_b4,(CVector3f *)(auStack_e0 + 8));
    if ((CVector3f *)auStack_cc != pCVar6) {
      auStack_cc._0_4_ = pCVar6->x;
      auStack_cc._4_4_ = pCVar6->y;
      auStack_cc._8_4_ = pCVar6->z;
    }
    if ((float)1.3962634015555599 < ABS((float)auStack_cc._4_4_)) {
      this_ptr->collision_enabled = 0;
    }
    if ((float)0.78539816337500001 < ABS((float)auStack_cc._0_4_)) {
      this_ptr->collision_enabled = 0;
      goto LAB_0042d603;
    }
  }
  if (this_ptr->collision_enabled != 0) {
    fVar7 = delta_time / 0.5f + this_ptr->look_at_weight;
    this_ptr->look_at_weight = fVar7;
    if (1.0 < fVar7) {
      this_ptr->look_at_weight = 1.0;
    }
    fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                      ((float)auStack_cc._0_4_ - this_ptr->look_at_yaw);
    this_ptr->look_at_yaw = fVar7 * (float)0.40000000000000002 + this_ptr->look_at_yaw;
    fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(fStack_d0 - this_ptr->look_at_pitch);
    this_ptr->look_at_pitch = fVar7 * (float)0.40000000000000002 + this_ptr->look_at_pitch;
    return;
  }
LAB_0042d603:
  fVar7 = this_ptr->look_at_weight - delta_time / 0.5f;
  this_ptr->look_at_weight = fVar7;
  if (fVar7 < 0.0) {
    this_ptr->look_at_pitch = 0.0;
    this_ptr->look_at_weight = 0.0;
    this_ptr->look_at_yaw = 0.0;
    return;
  }
  return;
}
