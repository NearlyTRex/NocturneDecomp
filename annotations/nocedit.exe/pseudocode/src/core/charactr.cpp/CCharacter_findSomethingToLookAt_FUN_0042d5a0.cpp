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
  CDemonActor *pCVar4;
  CVector3f *pCVar5;
  float fVar6;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  float in_stack_00000008;
  int in_stack_0000000c;
  SCollisionInfo *in_stack_ffffff00;
  SCollisionInfo *collision_info;
  float in_stack_ffffff08;
  float in_stack_ffffff0c;
  float in_stack_ffffff10;
  float in_stack_ffffff14;
  SCollisionInfo *in_stack_ffffff18;
  byte auStack_d8 [12];
  byte auStack_cc [8];
  CVector3f CStack_c4;
  byte auStack_b8 [20];
  CVector3f CStack_a4;
  CVector3f CStack_94;
  byte auStack_80 [12];
  byte auStack_74 [12];
  float fStack_68;
  float fStack_64;
  float fStack_60;
  byte auStack_5c [8];
  CVector3f CStack_54;
  CVector3f CStack_48;
  byte auStack_3c [4];
  CVector3f CStack_38;
  float fStack_28;
  int iStack_20;
  int iStack_1c;
  CCharacter *pCStack_18;
  int iStack_14;
  
  iVar2 = (*(this_ptr->base_actor).vtable[1].hasCollision)(&this_ptr->base_actor,in_stack_ffffff00);
  if (iVar2 != 0) {
    in_stack_0000000c = 1;
  }
  iStack_20 = 0;
  iVar2 = iStack_20;
  if ((in_stack_0000000c == 0) &&
     (iVar2 = *(int *)(this_ptr->field11_0x25a0 + 0x34),
     *(int *)(this_ptr->field11_0x25a0 + 0x34) == 0)) {
    if (*(float *)(this_ptr->field11_0x25a0 + 0x48) <= 0.0) {
      CStack_a4.x = 0.0;
      CStack_a4.z = 0.0;
      CStack_a4.y = 5.5;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&this_ptr->base_actor,(CVector3f *)auStack_5c,&CStack_a4);
      unaff_EBP = 0;
      for (iVar2 = 0; iVar2 < g_CDemonSetPtr->damage_listener_count; iVar2 = iVar2 + 1) {
        this_ptr_00 = *(CCharacter **)(g_CDemonSetPtr->field19_0x14f0a0 + unaff_EBP + -4);
        if (this_ptr_00 != this_ptr) {
          collision_info = (SCollisionInfo *)0x42d6df;
          iVar3 = (*((this_ptr_00->base_actor).vtable)->shouldIgnoreForTargeting)
                            (&this_ptr_00->base_actor);
          if (iVar3 == 0) {
            iStack_1c = (*(this_ptr_00->base_actor).vtable[1].hasCollision)
                                  (&this_ptr_00->base_actor,collision_info);
            if ((iStack_1c == 0) || ((this_ptr_00->model).model_name[0] == '\0')) {
              pCVar1 = &(this_ptr_00->base_actor).location;
              if ((CLocation *)&stack0xffffff14 != pCVar1) {
                in_stack_ffffff14 = (pCVar1->position).x;
                in_stack_ffffff18 = (SCollisionInfo *)(this_ptr_00->base_actor).location.position.y;
              }
              in_stack_ffffff18 = (SCollisionInfo *)((float)in_stack_ffffff18 + 5.5f);
            }
            else {
              pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                                 (&this_ptr_00->model,(CVector3f *)auStack_80,0);
              pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                 (&this_ptr_00->base_actor,(CVector3f *)auStack_74,pCVar5);
              if ((CVector3f *)&stack0xffffff0c != pCVar5) {
                in_stack_ffffff0c = pCVar5->x;
                in_stack_ffffff10 = pCVar5->y;
                in_stack_ffffff14 = pCVar5->z;
              }
            }
            auStack_b8._0_4_ = in_stack_ffffff0c - fStack_64;
            auStack_b8._4_4_ = in_stack_ffffff10 - fStack_60;
            auStack_b8._8_4_ = in_stack_ffffff14 - (float)auStack_5c._0_4_;
            core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                      (&this_ptr->base_actor,(CVector3f *)(auStack_5c + 4),(CVector3f *)auStack_b8);
            if ((((0.0 <= CStack_54.z) &&
                 (fStack_28 = CStack_54.z * CStack_54.z +
                              CStack_54.x * CStack_54.x + CStack_54.y * CStack_54.y,
                 (int)fStack_28 < 0x44610001)) &&
                (core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&CStack_48,&CStack_54), ABS(CStack_48.z) <= (float)1.3962634015555599)) &&
               (ABS(CStack_48.y) <= (float)0.78539816337500001)) {
              pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                                 (&this_ptr_00->base_actor,g_CEnemyClassInfo.name_hash);
              if (((pCVar4 != (CDemonActor *)0x0) && (pCStack_18 == (CCharacter *)0x0)) &&
                 (in_stack_ffffff08 = 30.0,
                 this_ptr == *(CCharacter **)(pCVar4[0x8d].create_event + 0x4c))) {
                in_stack_ffffff08 = 40.0;
              }
              if ((in_stack_ffffff08 < (float)10) &&
                 (iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0
                                    (&this_ptr_00->base_actor,"CHero"), iVar3 != 0)) {
                in_stack_ffffff08 = 15.0;
              }
              if ((in_stack_ffffff08 < (float)15) && (0 < iStack_14)) {
                in_stack_ffffff08 = 15.0;
              }
              in_stack_ffffff08 =
                   ((float)20 / (SQRT(in_stack_ffffff0c) + (float)20)) *
                   in_stack_ffffff08;
              if (this_ptr_00 == *(CCharacter **)(this_ptr->field11_0x25a0 + 0x30)) {
                in_stack_ffffff08 = in_stack_ffffff08 * (float)1.1000000000000001;
              }
              if (-1f <= in_stack_ffffff08) {
                core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
                core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                          (g_CDemonSetPtr,&this_ptr->base_actor);
                core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                          (g_CDemonSetPtr,&this_ptr_00->base_actor);
                core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,2);
                iVar3 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
                                  (g_CDemonSetPtr,(CVector3f *)(auStack_5c + 4),
                                   (CVector3f *)&stack0xffffff18);
                if ((iVar3 == 0) && (pCStack_18 = this_ptr_00, auStack_cc != auStack_3c)) {
                  CStack_c4.x = CStack_38.y;
                }
              }
            }
          }
        }
        unaff_EBP = unaff_EBP + 4;
      }
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      fVar6 = core_actor_cpp_getRandomFloat_FUN_0040cc10(1.0,2.0);
      *(float *)(this_ptr->field11_0x25a0 + 0x48) = fVar6;
    }
    else {
      iStack_20 = *(int *)(this_ptr->field11_0x25a0 + 0x30);
      *(float *)(this_ptr->field11_0x25a0 + 0x48) =
           *(float *)(this_ptr->field11_0x25a0 + 0x48) - in_stack_00000008;
    }
  }
  else {
    iStack_20 = iVar2;
    this_ptr->field11_0x25a0[0x48] = '\0';
    this_ptr->field11_0x25a0[0x49] = '\0';
    this_ptr->field11_0x25a0[0x4a] = '\0';
    this_ptr->field11_0x25a0[0x4b] = '\0';
  }
  *(int *)(this_ptr->field11_0x25a0 + 0x30) = unaff_EBP;
  if (unaff_EBP != 0) {
    auStack_b8._0_4_ = 0.0;
    auStack_b8._8_4_ = 0.0;
    auStack_b8._4_4_ = 5.5;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&this_ptr->base_actor,(CVector3f *)(auStack_80 + 4),(CVector3f *)auStack_b8);
    pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(this_ptr->field11_0x25a0 + 0x30),
                        g_CCharacterClassInfo.name_hash);
    if (pCVar4 == (CDemonActor *)0x0) {
      g_CurrentFilename = "..\\core\\charactr.cpp";
      g_CurrentLineNumber = 0xda0;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CCharacter::findSomethingToLookAt - Should be a character");
    }
    iVar2 = (*pCVar4->vtable[1].hasCollision)(pCVar4,in_stack_ffffff18);
    if ((iVar2 == 0) || (pCVar4[0x1a].create_event[0x50] == '\0')) {
      if ((CLocation *)auStack_74 != &pCVar4->location) {
        auStack_74._0_4_ = (pCVar4->location).position.x;
        auStack_74._4_4_ = (pCVar4->location).position.y;
        auStack_74._8_4_ = (pCVar4->location).position.z;
      }
      auStack_74._4_4_ = (float)auStack_74._4_4_ + 5.5f;
    }
    else {
      pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                         ((CDeformableModelInstance *)(pCVar4 + 1),&CStack_38,0);
      pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCVar4,&CStack_94,pCVar5);
      if ((CVector3f *)(auStack_74 + 8) != pCVar5) {
        auStack_74._8_4_ = pCVar5->x;
        fStack_68 = pCVar5->y;
        fStack_64 = pCVar5->z;
      }
    }
    core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
              (&this_ptr->base_actor,(CVector3f *)auStack_d8,(CVector3f *)&stack0xffffff10);
    pCVar5 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       ((CVector3f *)(auStack_b8 + 8),(CVector3f *)(auStack_d8 + 4));
    if (&CStack_c4 != pCVar5) {
      CStack_c4.x = pCVar5->x;
      CStack_c4.y = pCVar5->y;
      CStack_c4.z = pCVar5->z;
    }
    if ((float)1.3962634015555599 < ABS(CStack_c4.y)) {
      this_ptr->field11_0x25a0[0x30] = '\0';
      this_ptr->field11_0x25a0[0x31] = '\0';
      this_ptr->field11_0x25a0[0x32] = '\0';
      this_ptr->field11_0x25a0[0x33] = '\0';
    }
    if ((float)0.78539816337500001 < ABS(CStack_c4.x)) {
      this_ptr->field11_0x25a0[0x30] = '\0';
      this_ptr->field11_0x25a0[0x31] = '\0';
      this_ptr->field11_0x25a0[0x32] = '\0';
      this_ptr->field11_0x25a0[0x33] = '\0';
      goto LAB_0042d603;
    }
  }
  if (*(int *)(this_ptr->field11_0x25a0 + 0x30) != 0) {
    fVar6 = in_stack_00000008 / 0.5f + *(float *)(this_ptr->field11_0x25a0 + 0x40);
    *(float *)(this_ptr->field11_0x25a0 + 0x40) = fVar6;
    if (1.0 < fVar6) {
      this_ptr->field11_0x25a0[0x40] = '\0';
      this_ptr->field11_0x25a0[0x41] = '\0';
      this_ptr->field11_0x25a0[0x42] = -0x80;
      this_ptr->field11_0x25a0[0x43] = '?';
    }
    fVar6 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                      (CStack_c4.y - *(float *)(this_ptr->field11_0x25a0 + 0x38));
    *(float *)(this_ptr->field11_0x25a0 + 0x38) =
         fVar6 * (float)0.40000000000000002 + *(float *)(this_ptr->field11_0x25a0 + 0x38);
    fVar6 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                      (CStack_c4.y - *(float *)(this_ptr->field11_0x25a0 + 0x3c));
    *(float *)(this_ptr->field11_0x25a0 + 0x3c) =
         fVar6 * (float)0.40000000000000002 + *(float *)(this_ptr->field11_0x25a0 + 0x3c);
    return;
  }
LAB_0042d603:
  fVar6 = *(float *)(this_ptr->field11_0x25a0 + 0x40) - in_stack_00000008 / 0.5f;
  *(float *)(this_ptr->field11_0x25a0 + 0x40) = fVar6;
  if (fVar6 < 0.0) {
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
