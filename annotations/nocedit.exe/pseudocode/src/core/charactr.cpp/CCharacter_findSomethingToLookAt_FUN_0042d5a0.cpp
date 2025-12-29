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
  CCharacter *this_ptr_01;
  int iVar2;
  int iVar3;
  CDemonActor *pCVar4;
  CVector3f *pCVar5;
  float unaff_EBX;
  float fVar6;
  BADSPACEBASE *in_ESP;
  float unaff_ESI;
  float unaff_retaddr;
  float in_stack_00000008;
  float in_stack_0000000c;
  float fStack00000010;
  int in_stack_0000001c;
  float in_stack_00000020;
  float in_stack_00000024;
  float in_stack_00000028;
  int in_stack_00000030;
  int in_stack_00000034;
  CCharacter *in_stack_00000044;
  SCollisionInfo *in_stack_ffffff00;
  SCollisionInfo *in_stack_ffffff24;
  SCollisionInfo *in_stack_ffffff2c;
  float in_stack_ffffff4c;
  float in_stack_ffffff50;
  CDemonSet *in_stack_ffffff54;
  CVector3f *in_stack_ffffff58;
  CVector3f *in_stack_ffffff5c;
  byte auStack_98 [8];
  byte auStack_90 [8];
  float fStack_88;
  CVector3f CStack_84;
  byte auStack_70 [8];
  float fStack_68;
  CVector3f CStack_54;
  CVector3f CStack_48;
  float fStack_34;
  float fStack_30;
  CVector3f CStack_2c;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar6 = in_stack_0000000c;
  this_ptr_01 = this_ptr;
  iVar2 = (*(this_ptr->base_actor).vtable[1].hasCollision)(&this_ptr->base_actor,in_stack_ffffff00);
  if (iVar2 != 0) {
    fVar6 = 1.4013e-45;
  }
  if ((fVar6 == 0.0) && (*(int *)(this_ptr_01->field11_0x25a0 + 0x34) == 0)) {
    if (*(float *)(this_ptr_01->field11_0x25a0 + 0x48) <= 0.0) {
      auStack_90._0_4_ = 0.0;
      fStack_88 = 0.0;
      auStack_90._4_4_ = 5.5;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&this_ptr_01->base_actor,&CStack_48,(CVector3f *)auStack_90);
      unaff_retaddr = 0.0;
      for (iVar2 = 0; iVar2 < g_CDemonSetPtr->damage_listener_count; iVar2 = iVar2 + 1) {
        this_ptr_00 = *(CCharacter **)(g_CDemonSetPtr->field19_0x14f0a0 + (int)unaff_retaddr + -4);
        if ((this_ptr_00 != this_ptr_01) &&
           (iVar3 = (*((this_ptr_00->base_actor).vtable)->shouldIgnoreForTargeting)
                              (&this_ptr_00->base_actor), iVar3 == 0)) {
          in_stack_0000001c =
               (*(this_ptr_00->base_actor).vtable[1].hasCollision)
                         (&this_ptr_00->base_actor,in_stack_ffffff24);
          if ((in_stack_0000001c == 0) || ((this_ptr_00->model).model_name[0] == '\0')) {
            pCVar1 = &(this_ptr_00->base_actor).location;
            if ((CLocation *)&stack0xffffff4c != pCVar1) {
              in_stack_ffffff4c = (pCVar1->position).x;
              in_stack_ffffff50 = (this_ptr_00->base_actor).location.position.y;
              in_stack_ffffff54 = (CDemonSet *)(this_ptr_00->base_actor).location.position.z;
            }
            in_stack_ffffff50 = in_stack_ffffff50 + 5.5f;
          }
          else {
            pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                               (&this_ptr_00->model,&CStack_48,0);
            in_stack_ffffff2c = (SCollisionInfo *)0x42d9c0;
            pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                               (&this_ptr_00->base_actor,&CStack_2c,pCVar5);
            if ((CVector3f *)&stack0xffffff54 != pCVar5) {
              in_stack_ffffff54 = (CDemonSet *)pCVar5->x;
              in_stack_ffffff58 = (CVector3f *)pCVar5->y;
              in_stack_ffffff5c = (CVector3f *)pCVar5->z;
            }
          }
          auStack_70._0_4_ = (float)in_stack_ffffff54 - fStack_1c;
          auStack_70._4_4_ = (float)in_stack_ffffff58 - fStack_18;
          fStack_68 = (float)in_stack_ffffff5c - fStack_14;
          core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                    (&this_ptr_01->base_actor,(CVector3f *)&stack0xfffffff0,(CVector3f *)auStack_70)
          ;
          if ((((0.0 <= unaff_EBX) &&
               (in_stack_00000020 = unaff_EBX * unaff_EBX + unaff_ESI * unaff_ESI + 0.0,
               (int)in_stack_00000020 < 0x44610001)) &&
              (core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                         ((CVector3f *)&stack0x00000000,(CVector3f *)&stack0xfffffff4),
              ABS(in_stack_00000008) <= (float)1.3962634015555599)) &&
             (ABS((float)this_ptr) <= (float)0.78539816337500001)) {
            pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                               (&this_ptr_00->base_actor,g_CEnemyClassInfo.name_hash);
            if (((pCVar4 != (CDemonActor *)0x0) && (in_stack_00000030 == 0)) &&
               (in_stack_ffffff4c = 30.0,
               this_ptr_01 == *(CCharacter **)(pCVar4[0x8d].create_event + 0x4c))) {
              in_stack_ffffff4c = 40.0;
            }
            if ((in_stack_ffffff4c < (float)10) &&
               (iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0
                                  (&this_ptr_00->base_actor,"CHero"), iVar3 != 0)) {
              in_stack_ffffff50 = 15.0;
            }
            if ((in_stack_ffffff50 < (float)15) && (0 < in_stack_00000034)) {
              in_stack_ffffff50 = 15.0;
            }
            in_stack_ffffff50 =
                 ((float)20 / (SQRT((float)in_stack_ffffff54) + (float)20)
                 ) * in_stack_ffffff50;
            if (this_ptr_00 == *(CCharacter **)(this_ptr_01->field11_0x25a0 + 0x30)) {
              in_stack_ffffff50 = in_stack_ffffff50 * (float)1.1000000000000001;
            }
            if (-1f <= in_stack_ffffff50) {
              core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                        (g_CDemonSetPtr,&this_ptr_01->base_actor);
              in_stack_ffffff4c = 6.139012e-39;
              core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
                        (g_CDemonSetPtr,&this_ptr_00->base_actor);
              core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,2);
              in_stack_ffffff5c = (CVector3f *)(auStack_90 + 4);
              in_stack_ffffff58 = (CVector3f *)&this_ptr;
              in_stack_ffffff50 = 6.139075e-39;
              in_stack_ffffff54 = g_CDemonSetPtr;
              iVar3 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
                                (g_CDemonSetPtr,in_stack_ffffff58,in_stack_ffffff5c);
              if ((iVar3 == 0) &&
                 (in_stack_00000044 = this_ptr_00, (float *)auStack_70 != &stack0x00000020)) {
                auStack_70._0_4_ = in_stack_00000020;
                auStack_70._4_4_ = in_stack_00000024;
                fStack_68 = in_stack_00000028;
              }
            }
          }
        }
        unaff_retaddr = (float)((int)unaff_retaddr + 4);
      }
      core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
      in_stack_0000000c = core_actor_cpp_getRandomFloat_FUN_0040cc10(1.0,2.0);
      *(float *)(this_ptr_01->field11_0x25a0 + 0x48) = in_stack_0000000c;
    }
    else {
      *(float *)(this_ptr_01->field11_0x25a0 + 0x48) =
           *(float *)(this_ptr_01->field11_0x25a0 + 0x48) - in_stack_00000008;
    }
  }
  else {
    this_ptr_01->field11_0x25a0[0x48] = '\0';
    this_ptr_01->field11_0x25a0[0x49] = '\0';
    this_ptr_01->field11_0x25a0[0x4a] = '\0';
    this_ptr_01->field11_0x25a0[0x4b] = '\0';
  }
  *(float *)(this_ptr_01->field11_0x25a0 + 0x30) = unaff_retaddr;
  if (unaff_retaddr != 0.0) {
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&this_ptr_01->base_actor,(CVector3f *)(auStack_70 + 4),(CVector3f *)&stack0xffffff58)
    ;
    pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(this_ptr_01->field11_0x25a0 + 0x30),
                        g_CCharacterClassInfo.name_hash);
    if (pCVar4 == (CDemonActor *)0x0) {
      g_CurrentFilename = "..\\core\\charactr.cpp";
      g_CurrentLineNumber = 0xda0;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CCharacter::findSomethingToLookAt - Should be a character");
    }
    iVar2 = (*pCVar4->vtable[1].hasCollision)(pCVar4,in_stack_ffffff2c);
    if ((iVar2 == 0) || (pCVar4[0x1a].create_event[0x50] == '\0')) {
      if ((CLocation *)&fStack_34 != &pCVar4->location) {
        fStack_34 = (pCVar4->location).position.x;
        fStack_30 = (pCVar4->location).position.y;
        CStack_2c.x = (pCVar4->location).position.z;
      }
      fStack_30 = fStack_30 + 5.5f;
    }
    else {
      pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                         ((CDeformableModelInstance *)(pCVar4 + 1),(CVector3f *)&stack0x00000008,0);
      pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCVar4,&CStack_54,pCVar5);
      if (&CStack_2c != pCVar5) {
        CStack_2c.x = pCVar5->x;
        CStack_2c.y = pCVar5->y;
        CStack_2c.z = pCVar5->z;
      }
    }
    in_stack_ffffff50 = CStack_2c.x - CStack_48.y;
    core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
              (&this_ptr_01->base_actor,(CVector3f *)auStack_98,(CVector3f *)&stack0xffffff50);
    pCVar5 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       ((CVector3f *)auStack_70,(CVector3f *)(auStack_98 + 4));
    if (&CStack_84 != pCVar5) {
      CStack_84.x = pCVar5->x;
      CStack_84.y = pCVar5->y;
      CStack_84.z = pCVar5->z;
    }
    if ((float)1.3962634015555599 < ABS(CStack_84.y)) {
      this_ptr_01->field11_0x25a0[0x30] = '\0';
      this_ptr_01->field11_0x25a0[0x31] = '\0';
      this_ptr_01->field11_0x25a0[0x32] = '\0';
      this_ptr_01->field11_0x25a0[0x33] = '\0';
    }
    if ((float)0.78539816337500001 < ABS(CStack_84.x)) {
      this_ptr_01->field11_0x25a0[0x30] = '\0';
      this_ptr_01->field11_0x25a0[0x31] = '\0';
      this_ptr_01->field11_0x25a0[0x32] = '\0';
      this_ptr_01->field11_0x25a0[0x33] = '\0';
      goto LAB_0042d603;
    }
  }
  if (*(int *)(this_ptr_01->field11_0x25a0 + 0x30) != 0) {
    fVar6 = in_stack_00000008 / 0.5f + *(float *)(this_ptr_01->field11_0x25a0 + 0x40);
    *(float *)(this_ptr_01->field11_0x25a0 + 0x40) = fVar6;
    if (1.0 < fVar6) {
      this_ptr_01->field11_0x25a0[0x40] = '\0';
      this_ptr_01->field11_0x25a0[0x41] = '\0';
      this_ptr_01->field11_0x25a0[0x42] = -0x80;
      this_ptr_01->field11_0x25a0[0x43] = '?';
    }
    fStack00000010 =
         core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                   (in_stack_ffffff50 - *(float *)(this_ptr_01->field11_0x25a0 + 0x38));
    *(float *)(this_ptr_01->field11_0x25a0 + 0x38) =
         fStack00000010 * (float)0.40000000000000002 + *(float *)(this_ptr_01->field11_0x25a0 + 0x38);
    fVar6 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                      (in_stack_ffffff50 - *(float *)(this_ptr_01->field11_0x25a0 + 0x3c));
    *(float *)(this_ptr_01->field11_0x25a0 + 0x3c) =
         fVar6 * (float)0.40000000000000002 + *(float *)(this_ptr_01->field11_0x25a0 + 0x3c);
    return;
  }
LAB_0042d603:
  fVar6 = *(float *)(this_ptr_01->field11_0x25a0 + 0x40) - in_stack_00000008 / 0.5f;
  *(float *)(this_ptr_01->field11_0x25a0 + 0x40) = fVar6;
  if (fVar6 < 0.0) {
    this_ptr_01->field11_0x25a0[0x3c] = '\0';
    this_ptr_01->field11_0x25a0[0x3d] = '\0';
    this_ptr_01->field11_0x25a0[0x3e] = '\0';
    this_ptr_01->field11_0x25a0[0x3f] = '\0';
    this_ptr_01->field11_0x25a0[0x40] = '\0';
    this_ptr_01->field11_0x25a0[0x41] = '\0';
    this_ptr_01->field11_0x25a0[0x42] = '\0';
    this_ptr_01->field11_0x25a0[0x43] = '\0';
    this_ptr_01->field11_0x25a0[0x38] = '\0';
    this_ptr_01->field11_0x25a0[0x39] = '\0';
    this_ptr_01->field11_0x25a0[0x3a] = '\0';
    this_ptr_01->field11_0x25a0[0x3b] = '\0';
    return;
  }
  return;
}
