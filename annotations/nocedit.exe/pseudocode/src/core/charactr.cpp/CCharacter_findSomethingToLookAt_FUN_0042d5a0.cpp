// Name: core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0
// Address: 0042d5a0
// Address Range: [[0042d5a0, 0042da01] [0042da1e, 0042dcc2]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0(CCharacter *this_ptr)

{
  CLocation *pCVar1;
  CCharacter *this_ptr_00;
  int iVar2;
  int iVar3;
  int iVar4;
  CDemonActor *pCVar5;
  CVector3f *pCVar6;
  float fVar7;
  float in_stack_00000008;
  int in_stack_0000000c;
  SCollisionInfo *in_stack_ffffff00;
  CDemonSet *in_stack_ffffff08;
  CCharacter *in_stack_ffffff0c;
  float fStack_ec;
  CVector3f CStack_e8;
  byte auStack_d8 [12];
  float fStack_cc;
  float fStack_c8;
  byte auStack_c4 [8];
  float fStack_bc;
  float fStack_b8;
  CVector3f CStack_ac;
  CVector3f CStack_9c;
  byte auStack_88 [12];
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  byte auStack_6c [12];
  float fStack_60;
  float fStack_5c;
  CVector3f CStack_54;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  CVector3f CStack_3c;
  float fStack_30;
  float fStack_2c;
  CVector3f CStack_28;
  float fStack_18;
  
  iVar2 = (*(this_ptr->base_actor).vtable[1].hasCollision)(&this_ptr->base_actor,in_stack_ffffff00);
  if (iVar2 != 0) {
    in_stack_0000000c = 1;
  }
  fStack_18 = 0.0;
  fVar7 = fStack_18;
  if ((in_stack_0000000c == 0) &&
     (fVar7 = *(float *)(this_ptr->field11_0x25a0 + 0x34),
     *(float *)(this_ptr->field11_0x25a0 + 0x34) == 0.0)) {
    if (*(float *)(this_ptr->field11_0x25a0 + 0x48) <= 0.0) {
      CStack_9c.x = 0.0;
      CStack_9c.z = 0.0;
      CStack_9c.y = 5.5;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&this_ptr->base_actor,&CStack_54,&CStack_9c);
      fVar7 = 0.0;
      for (iVar2 = 0; iVar2 < g_CDemonSetPtr->damage_listener_count; iVar2 = iVar2 + 1) {
        this_ptr_00 = *(CCharacter **)(g_CDemonSetPtr->field19_0x14f0a0 + (int)fVar7 + -4);
        if ((this_ptr_00 != this_ptr) &&
           (iVar3 = (*((this_ptr_00->base_actor).vtable)->shouldIgnoreForTargeting)
                              (&this_ptr_00->base_actor), iVar3 == 0)) {
          iVar3 = (*(this_ptr_00->base_actor).vtable[1].hasCollision)
                            (&this_ptr_00->base_actor,(SCollisionInfo *)in_stack_ffffff0c);
          if ((iVar3 == 0) || ((this_ptr_00->model).model_name[0] == '\0')) {
            pCVar1 = &(this_ptr_00->base_actor).location;
            if ((CLocation *)auStack_d8 != pCVar1) {
              auStack_d8._0_4_ = (pCVar1->position).x;
              auStack_d8._4_4_ = (this_ptr_00->base_actor).location.position.y;
              auStack_d8._8_4_ = (this_ptr_00->base_actor).location.position.z;
            }
            auStack_d8._4_4_ = (float)auStack_d8._4_4_ + 5.5f;
          }
          else {
            pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                               (&this_ptr_00->model,(CVector3f *)auStack_6c,0);
            pCVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                               (&this_ptr_00->base_actor,&CStack_54,pCVar6);
            if ((CVector3f *)auStack_d8 != pCVar6) {
              auStack_d8._0_4_ = pCVar6->x;
              auStack_d8._4_4_ = pCVar6->y;
              auStack_d8._8_4_ = pCVar6->z;
            }
          }
          CStack_9c.x = (float)auStack_d8._0_4_ - fStack_48;
          CStack_9c.y = (float)auStack_d8._4_4_ - fStack_44;
          CStack_9c.z = (float)auStack_d8._8_4_ - fStack_40;
          in_stack_ffffff0c = (CCharacter *)&CStack_3c;
          in_stack_ffffff08 = (CDemonSet *)this_ptr;
          core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                    (&this_ptr->base_actor,(CVector3f *)in_stack_ffffff0c,&CStack_9c);
          if ((0.0 <= CStack_3c.z) &&
             (fVar7 = CStack_3c.z * CStack_3c.z +
                      CStack_3c.x * CStack_3c.x + CStack_3c.y * CStack_3c.y, CStack_e8.x = fVar7,
             (int)fVar7 < 0x44610001)) {
            in_stack_ffffff0c = (CCharacter *)&fStack_30;
            in_stack_ffffff08 = (CDemonSet *)0x42d7e4;
            core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                      ((CVector3f *)in_stack_ffffff0c,&CStack_3c);
            if ((ABS(fStack_2c) <= (float)1.3962634015555599) &&
               (ABS(fStack_30) <= (float)0.78539816337500001)) {
              fStack_ec = 10.0;
              in_stack_ffffff08 = (CDemonSet *)0x42d82c;
              in_stack_ffffff0c = this_ptr_00;
              pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                                 (&this_ptr_00->base_actor,g_CEnemyClassInfo.name_hash);
              if (((pCVar5 != (CDemonActor *)0x0) && (iVar3 == 0)) &&
                 (fStack_ec = 30.0, this_ptr == *(CCharacter **)(pCVar5[0x8d].create_event + 0x4c)))
              {
                fStack_ec = 40.0;
              }
              if (fStack_ec < (float)10) {
                in_stack_ffffff08 = (CDemonSet *)0x42d86f;
                in_stack_ffffff0c = this_ptr_00;
                iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0
                                  (&this_ptr_00->base_actor,"CHero");
                if (iVar4 != 0) {
                  fStack_ec = 15.0;
                }
              }
              if ((fStack_ec < (float)15) && (0 < iVar3)) {
                fStack_ec = 15.0;
              }
              fStack_ec = ((float)20 / (SQRT(CStack_e8.x) + (float)20)) *
                          fStack_ec;
              if (this_ptr_00 == *(CCharacter **)(this_ptr->field11_0x25a0 + 0x30)) {
                fStack_ec = fStack_ec * (float)1.1000000000000001;
              }
              if (-1.0f <= fStack_ec) {
                core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
                core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                          (g_CDemonSetPtr,&this_ptr->base_actor);
                core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                          (g_CDemonSetPtr,&this_ptr_00->base_actor);
                core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,2);
                in_stack_ffffff0c = (CCharacter *)&fStack_48;
                in_stack_ffffff08 = g_CDemonSetPtr;
                iVar3 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
                                  (g_CDemonSetPtr,(CVector3f *)in_stack_ffffff0c,
                                   (CVector3f *)auStack_d8);
                if ((iVar3 == 0) && ((float *)(auStack_c4 + 4) != &fStack_30)) {
                  auStack_c4._4_4_ = fStack_30;
                  fStack_bc = fStack_2c;
                  fStack_b8 = CStack_28.x;
                }
              }
            }
          }
        }
        fVar7 = (float)((int)fVar7 + 4);
      }
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      fVar7 = core_actor_cpp_getRandomFloat_FUN_0040cc10(1.0,2.0);
      *(float *)(this_ptr->field11_0x25a0 + 0x48) = fVar7;
    }
    else {
      fStack_18 = *(float *)(this_ptr->field11_0x25a0 + 0x30);
      *(float *)(this_ptr->field11_0x25a0 + 0x48) =
           *(float *)(this_ptr->field11_0x25a0 + 0x48) - in_stack_00000008;
    }
  }
  else {
    fStack_18 = fVar7;
    this_ptr->field11_0x25a0[0x48] = '\0';
    this_ptr->field11_0x25a0[0x49] = '\0';
    this_ptr->field11_0x25a0[0x4a] = '\0';
    this_ptr->field11_0x25a0[0x4b] = '\0';
  }
  *(float *)(this_ptr->field11_0x25a0 + 0x30) = fStack_18;
  if (fStack_18 != 0.0) {
    auStack_c4._4_4_ = 0.0;
    fStack_b8 = 0.0;
    fStack_bc = 5.5;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&this_ptr->base_actor,(CVector3f *)(auStack_88 + 4),(CVector3f *)(auStack_c4 + 4));
    pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(this_ptr->field11_0x25a0 + 0x30),
                        g_CCharacterClassInfo.name_hash);
    if (pCVar5 == (CDemonActor *)0x0) {
      g_CurrentFilename = "..\\core\\charactr.cpp";
      g_CurrentLineNumber = 0xda0;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CCharacter::findSomethingToLookAt - Should be a character");
    }
    iVar2 = (*pCVar5->vtable[1].hasCollision)(pCVar5,(SCollisionInfo *)in_stack_ffffff08);
    if ((iVar2 == 0) || (pCVar5[0x1a].create_event[0x50] == '\0')) {
      if ((CLocation *)(auStack_6c + 8) != &pCVar5->location) {
        auStack_6c._8_4_ = (pCVar5->location).position.x;
        fStack_60 = (pCVar5->location).position.y;
        fStack_5c = (pCVar5->location).position.z;
      }
      fStack_60 = fStack_60 + 5.5f;
    }
    else {
      pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                         ((CDeformableModelInstance *)(pCVar5 + 1),&CStack_28,0);
      pCVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (pCVar5,(CVector3f *)auStack_88,pCVar6);
      if ((CVector3f *)(auStack_6c + 8) != pCVar6) {
        auStack_6c._8_4_ = pCVar6->x;
        fStack_60 = pCVar6->y;
        fStack_5c = pCVar6->z;
      }
    }
    CStack_e8.x = (float)auStack_6c._8_4_ - fStack_7c;
    CStack_e8.y = fStack_60 - fStack_78;
    CStack_e8.z = fStack_5c - fStack_74;
    core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
              (&this_ptr->base_actor,(CVector3f *)(auStack_d8 + 8),&CStack_e8);
    pCVar6 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (&CStack_ac,(CVector3f *)(auStack_d8 + 8));
    if ((CVector3f *)auStack_c4 != pCVar6) {
      auStack_c4._0_4_ = pCVar6->x;
      auStack_c4._4_4_ = pCVar6->y;
      fStack_bc = pCVar6->z;
    }
    if ((float)1.3962634015555599 < ABS((float)auStack_c4._4_4_)) {
      this_ptr->field11_0x25a0[0x30] = '\0';
      this_ptr->field11_0x25a0[0x31] = '\0';
      this_ptr->field11_0x25a0[0x32] = '\0';
      this_ptr->field11_0x25a0[0x33] = '\0';
    }
    if ((float)0.78539816337500001 < ABS((float)auStack_c4._0_4_)) {
      this_ptr->field11_0x25a0[0x30] = '\0';
      this_ptr->field11_0x25a0[0x31] = '\0';
      this_ptr->field11_0x25a0[0x32] = '\0';
      this_ptr->field11_0x25a0[0x33] = '\0';
      goto LAB_0042d603;
    }
  }
  if (*(int *)(this_ptr->field11_0x25a0 + 0x30) != 0) {
    fVar7 = in_stack_00000008 / 0.5f + *(float *)(this_ptr->field11_0x25a0 + 0x40);
    *(float *)(this_ptr->field11_0x25a0 + 0x40) = fVar7;
    if (1.0 < fVar7) {
      this_ptr->field11_0x25a0[0x40] = '\0';
      this_ptr->field11_0x25a0[0x41] = '\0';
      this_ptr->field11_0x25a0[0x42] = -0x80;
      this_ptr->field11_0x25a0[0x43] = '?';
    }
    fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                      (fStack_c8 - *(float *)(this_ptr->field11_0x25a0 + 0x38));
    *(float *)(this_ptr->field11_0x25a0 + 0x38) =
         fVar7 * (float)0.40000000000000002 + *(float *)(this_ptr->field11_0x25a0 + 0x38);
    fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                      (fStack_cc - *(float *)(this_ptr->field11_0x25a0 + 0x3c));
    *(float *)(this_ptr->field11_0x25a0 + 0x3c) =
         fVar7 * (float)0.40000000000000002 + *(float *)(this_ptr->field11_0x25a0 + 0x3c);
    return;
  }
LAB_0042d603:
  fVar7 = *(float *)(this_ptr->field11_0x25a0 + 0x40) - in_stack_00000008 / 0.5f;
  *(float *)(this_ptr->field11_0x25a0 + 0x40) = fVar7;
  if (fVar7 < 0.0) {
    this_ptr->field11_0x25a0[0x3c] = '\0';
    this_ptr->field11_0x25a0[0x3d] = '\0';
    this_ptr->field11_0x25a0[0x3e] = '\0';
    this_ptr->field11_0x25a0[0x3f] = '\0';
    this_ptr->field11_0x25a0[0x40] = '\0';
    this_ptr->field11_0x25a0[0x41] = '\0';
    this_ptr->field11_0x25a0[0x42] = '\0';
    this_ptr->field11_0x25a0[0x43] = '\0';
    this_ptr->field11_0x25a0[0x38] = '\0';
    this_ptr->field11_0x25a0[0x39] = '\0';
    this_ptr->field11_0x25a0[0x3a] = '\0';
    this_ptr->field11_0x25a0[0x3b] = '\0';
    return;
  }
  return;
}
