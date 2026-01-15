// Name: core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0
// Address: 0042d5a0
// Address Range: [[0042d5a0, 0042da01] [0042da1e, 0042dcc2]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0(CCharacter *this_ptr)

{
  CLocation *pCVar1;
  CCharacter *pCVar2;
  int iVar3;
  int iVar4;
  CDemonActor *pCVar5;
  CVector3f *pCVar6;
  float fVar7;
  float in_stack_00000008;
  int in_stack_0000000c;
  SCollisionInfo *in_stack_ffffff00;
  float fVar8;
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
  
  iVar3 = (*(this_ptr->base_actor).vtable[1].hasCollision)(&this_ptr->base_actor,in_stack_ffffff00);
  if (iVar3 != 0) {
    in_stack_0000000c = 1;
  }
  pCStack_20 = (CCharacter *)0x0;
  pCVar2 = pCStack_20;
  if ((in_stack_0000000c == 0) &&
     (pCVar2 = *(CCharacter **)(this_ptr->field11_0x25a0 + 0x34),
     *(CCharacter **)(this_ptr->field11_0x25a0 + 0x34) == (CCharacter *)0x0)) {
    if (*(float *)(this_ptr->field11_0x25a0 + 0x48) <= 0.0) {
      CStack_a4.x = 0.0;
      CStack_a4.z = 0.0;
      CStack_a4.y = 5.5;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&this_ptr->base_actor,&CStack_5c,&CStack_a4);
      iStack_18 = 0;
      for (iVar3 = 0; iVar3 < g_CDemonSetPtr->damage_listener_count; iVar3 = iVar3 + 1) {
        pCVar2 = *(CCharacter **)(g_CDemonSetPtr->field19_0x14f0a0 + iStack_18 + -4);
        if ((pCVar2 != this_ptr) &&
           (iVar4 = (*((pCVar2->base_actor).vtable)->shouldIgnoreForTargeting)(&pCVar2->base_actor),
           iVar4 == 0)) {
          iStack_1c = (*(pCVar2->base_actor).vtable[1].hasCollision)
                                (&pCVar2->base_actor,in_stack_ffffff00);
          if ((iStack_1c == 0) || ((pCVar2->model).model_name[0] == '\0')) {
            pCVar1 = &(pCVar2->base_actor).location;
            if ((CLocation *)&CStack_ec != pCVar1) {
              CStack_ec.x = (pCVar1->position).x;
              CStack_ec.y = (pCVar2->base_actor).location.position.y;
              CStack_ec.z = (pCVar2->base_actor).location.position.z;
            }
            CStack_ec.y = CStack_ec.y + 5.5f;
          }
          else {
            pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                               (&pCVar2->model,&CStack_80,0);
            pCVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                               (&pCVar2->base_actor,&CStack_68,pCVar6);
            if (&CStack_ec != pCVar6) {
              CStack_ec.x = pCVar6->x;
              CStack_ec.y = pCVar6->y;
              CStack_ec.z = pCVar6->z;
            }
          }
          CStack_b0.x = CStack_ec.x - CStack_5c.x;
          CStack_b0.y = CStack_ec.y - CStack_5c.y;
          CStack_b0.z = CStack_ec.z - CStack_5c.z;
          core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                    (&this_ptr->base_actor,&CStack_50,&CStack_b0);
          if ((((0.0 <= CStack_50.z) &&
               (fVar7 = CStack_50.z * CStack_50.z +
                        CStack_50.x * CStack_50.x + CStack_50.y * CStack_50.y, fStack_24 = fVar7,
               (int)fVar7 < 0x44610001)) &&
              (core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                         (&CStack_44,&CStack_50), ABS(CStack_44.y) <= (float)1.3962634015555599)) &&
             (ABS(CStack_44.x) <= (float)0.78539816337500001)) {
            fVar8 = 10.0;
            pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                               (&pCVar2->base_actor,g_CEnemyClassInfo.name_hash);
            if (((pCVar5 != (CDemonActor *)0x0) && (iStack_1c == 0)) &&
               (fVar8 = 30.0, this_ptr == *(CCharacter **)(pCVar5[0x8d].create_event + 0x4c))) {
              fVar8 = 40.0;
            }
            if ((fVar8 < (float)10) &&
               (iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0(&pCVar2->base_actor,"CHero"),
               iVar4 != 0)) {
              fVar8 = 15.0;
            }
            if ((fVar8 < (float)15) && (0 < iStack_1c)) {
              fVar8 = 15.0;
            }
            in_stack_ffffff00 =
                 (SCollisionInfo *)
                 (((float)20 / (SQRT(fVar7) + (float)20)) * fVar8);
            if (pCVar2 == *(CCharacter **)(this_ptr->field11_0x25a0 + 0x30)) {
              in_stack_ffffff00 =
                   (SCollisionInfo *)((float)in_stack_ffffff00 * (float)1.1000000000000001);
            }
            if (-1f <= (float)in_stack_ffffff00) {
              core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,&this_ptr->base_actor);
              core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,&pCVar2->base_actor);
              core_setcolid_cpp_CDemonSet_setRayType_FUN_00574230(g_CDemonSetPtr,2);
              iVar4 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
                                (g_CDemonSetPtr,&CStack_5c,&CStack_ec);
              if ((iVar4 == 0) && (pCStack_20 = pCVar2, &CStack_d4 != &CStack_44)) {
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
      *(float *)(this_ptr->field11_0x25a0 + 0x48) = fStack_14;
    }
    else {
      pCStack_20 = *(CCharacter **)(this_ptr->field11_0x25a0 + 0x30);
      *(float *)(this_ptr->field11_0x25a0 + 0x48) =
           *(float *)(this_ptr->field11_0x25a0 + 0x48) - in_stack_00000008;
    }
  }
  else {
    pCStack_20 = pCVar2;
    this_ptr->field11_0x25a0[0x48] = '\0';
    this_ptr->field11_0x25a0[0x49] = '\0';
    this_ptr->field11_0x25a0[0x4a] = '\0';
    this_ptr->field11_0x25a0[0x4b] = '\0';
  }
  *(CCharacter **)(this_ptr->field11_0x25a0 + 0x30) = pCStack_20;
  if (pCStack_20 != (CCharacter *)0x0) {
    CStack_c8.x = 0.0;
    CStack_c8.z = 0.0;
    CStack_c8.y = 5.5;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&this_ptr->base_actor,&CStack_8c,&CStack_c8);
    pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(this_ptr->field11_0x25a0 + 0x30),
                        g_CCharacterClassInfo.name_hash);
    if (pCVar5 == (CDemonActor *)0x0) {
      g_CurrentFilename = "..\\core\\charactr.cpp";
      g_CurrentLineNumber = 0xda0;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CCharacter::findSomethingToLookAt - Should be a character");
    }
    iVar3 = (*pCVar5->vtable[1].hasCollision)(pCVar5,in_stack_ffffff00);
    if ((iVar3 == 0) || (pCVar5[0x1a].create_event[0x50] == '\0')) {
      if ((CLocation *)&CStack_74 != &pCVar5->location) {
        CStack_74.x = (pCVar5->location).position.x;
        CStack_74.y = (pCVar5->location).position.y;
        CStack_74.z = (pCVar5->location).position.z;
      }
      CStack_74.y = CStack_74.y + 5.5f;
    }
    else {
      pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                         ((CDeformableModelInstance *)(pCVar5 + 1),&CStack_38,0);
      pCVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCVar5,&CStack_98,pCVar6);
      if (&CStack_74 != pCVar6) {
        CStack_74.x = pCVar6->x;
        CStack_74.y = pCVar6->y;
        CStack_74.z = pCVar6->z;
      }
    }
    CStack_f8.x = CStack_74.x - CStack_8c.x;
    CStack_f8.y = CStack_74.y - CStack_8c.y;
    CStack_f8.z = CStack_74.z - CStack_8c.z;
    core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
              (&this_ptr->base_actor,&CStack_e0,&CStack_f8);
    pCVar6 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                       (&CStack_bc,&CStack_e0);
    if (&CStack_d4 != pCVar6) {
      CStack_d4.x = pCVar6->x;
      CStack_d4.y = pCVar6->y;
      CStack_d4.z = pCVar6->z;
    }
    if ((float)1.3962634015555599 < ABS(CStack_d4.y)) {
      this_ptr->field11_0x25a0[0x30] = '\0';
      this_ptr->field11_0x25a0[0x31] = '\0';
      this_ptr->field11_0x25a0[0x32] = '\0';
      this_ptr->field11_0x25a0[0x33] = '\0';
    }
    if ((float)0.78539816337500001 < ABS(CStack_d4.x)) {
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
    fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                          (CStack_d4.y - *(float *)(this_ptr->field11_0x25a0 + 0x38));
    *(float *)(this_ptr->field11_0x25a0 + 0x38) =
         fStack_14 * (float)0.40000000000000002 + *(float *)(this_ptr->field11_0x25a0 + 0x38);
    fVar7 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                      (CStack_d4.x - *(float *)(this_ptr->field11_0x25a0 + 0x3c));
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
