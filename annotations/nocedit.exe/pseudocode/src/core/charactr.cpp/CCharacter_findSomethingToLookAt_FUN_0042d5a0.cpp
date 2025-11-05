// Name: core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0
// Address: 0042d5a0
// Address Range: [[0042d5a0, 0042da01] [0042da1e, 0042dcc2]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0(CCharacter * this_ptr)
// Cross-references:
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f51bb [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_CHero_006173ca
//   TerminatedCString s_core_charactr_cpp_006173d0
//   TerminatedCString s_CCharacter_findSomething_006173e5
//   double DOUBLE_00617422 = 1.10000000000000
//   float FLOAT_0061742a = 5.5
//   double DOUBLE_00617432 = 1.39626340155556
//   double DOUBLE_0061743a = 0.785398163375000
//   float FLOAT_00617442 = 0.5
//   double DOUBLE_0061744a = 0.400000000000000
//   double DOUBLE_00617452 = 10
//   double DOUBLE_0061745a = 15
//   double DOUBLE_00617462 = 20
//   float FLOAT_0061746a = -1
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 g_CCharacterClassInfo.name_hash
//   undefined4 g_CEnemyClassInfo.name_hash
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonSet g_CDemonSetInstance
//   undefined4 g_CDemonSetInstance.damage_listener_count
//   undefined4 g_CDemonSetInstance.damage_listeners
//   undefined4 DAT_03263318
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
//   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460
//   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830

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
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  float fStack_88;
  CVector3f CStack_84;
  undefined1 auStack_70 [8];
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
            in_stack_ffffff50 = in_stack_ffffff50 + FLOAT_0061742a;
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
              ABS(in_stack_00000008) <= (float)DOUBLE_00617432)) &&
             (ABS((float)this_ptr) <= (float)DOUBLE_0061743a)) {
            pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                               (&this_ptr_00->base_actor,g_CEnemyClassInfo.name_hash);
            if (((pCVar4 != (CDemonActor *)0x0) && (in_stack_00000030 == 0)) &&
               (in_stack_ffffff4c = 30.0,
               this_ptr_01 == *(CCharacter **)(pCVar4[0x8d].create_event + 0x4c))) {
              in_stack_ffffff4c = 40.0;
            }
            if ((in_stack_ffffff4c < (float)DOUBLE_00617452) &&
               (iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0
                                  (&this_ptr_00->base_actor,"CHero"), iVar3 != 0)) {
              in_stack_ffffff50 = 15.0;
            }
            if ((in_stack_ffffff50 < (float)DOUBLE_0061745a) && (0 < in_stack_00000034)) {
              in_stack_ffffff50 = 15.0;
            }
            in_stack_ffffff50 =
                 ((float)DOUBLE_00617462 / (SQRT((float)in_stack_ffffff54) + (float)DOUBLE_00617462)
                 ) * in_stack_ffffff50;
            if (this_ptr_00 == *(CCharacter **)(this_ptr_01->field11_0x25a0 + 0x30)) {
              in_stack_ffffff50 = in_stack_ffffff50 * (float)DOUBLE_00617422;
            }
            if (FLOAT_0061746a <= in_stack_ffffff50) {
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
      fStack_30 = fStack_30 + FLOAT_0061742a;
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
    if ((float)DOUBLE_00617432 < ABS(CStack_84.y)) {
      this_ptr_01->field11_0x25a0[0x30] = '\0';
      this_ptr_01->field11_0x25a0[0x31] = '\0';
      this_ptr_01->field11_0x25a0[0x32] = '\0';
      this_ptr_01->field11_0x25a0[0x33] = '\0';
    }
    if ((float)DOUBLE_0061743a < ABS(CStack_84.x)) {
      this_ptr_01->field11_0x25a0[0x30] = '\0';
      this_ptr_01->field11_0x25a0[0x31] = '\0';
      this_ptr_01->field11_0x25a0[0x32] = '\0';
      this_ptr_01->field11_0x25a0[0x33] = '\0';
      goto LAB_0042d603;
    }
  }
  if (*(int *)(this_ptr_01->field11_0x25a0 + 0x30) != 0) {
    fVar6 = in_stack_00000008 / FLOAT_00617442 + *(float *)(this_ptr_01->field11_0x25a0 + 0x40);
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
         fStack00000010 * (float)DOUBLE_0061744a + *(float *)(this_ptr_01->field11_0x25a0 + 0x38);
    fVar6 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                      (in_stack_ffffff50 - *(float *)(this_ptr_01->field11_0x25a0 + 0x3c));
    *(float *)(this_ptr_01->field11_0x25a0 + 0x3c) =
         fVar6 * (float)DOUBLE_0061744a + *(float *)(this_ptr_01->field11_0x25a0 + 0x3c);
    return;
  }
LAB_0042d603:
  fVar6 = *(float *)(this_ptr_01->field11_0x25a0 + 0x40) - in_stack_00000008 / FLOAT_00617442;
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


// Assembly code:
// 0042d5a0: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0
// 0042d5a1: PUSH ESI
// 0042d5a2: PUSH EDI
// 0042d5a3: PUSH EBP
// 0042d5a4: MOV EBP,ESP
// 0042d5a6: SUB ESP,0xf0
// 0042d5ac: AND ESP,0xfffffff8
// 0042d5af: MOV ESI,dword ptr [EBP + 0x14]
// 0042d5b2: MOV EBX,dword ptr [EBP + 0x1c]
// 0042d5b5: PUSH ESI
// 0042d5b6: MOV EAX,dword ptr [ESI + 0x154]
// 0042d5bc: CALL dword ptr [EAX + 0x120]
// 0042d5c2: ADD ESP,0x4
// 0042d5c5: TEST EAX,EAX
// 0042d5c7: JZ 0x0042d5ce
//   XREF to: 0042d5ce (CONDITIONAL_JUMP)
// 0042d5c9: MOV EBX,0x1
// 0042d5ce: XOR EDX,EDX
//   Label: LAB_0042d5ce
// 0042d5d0: MOV dword ptr [ESP + 0xe0],EDX
// 0042d5d7: TEST EBX,EBX
// 0042d5d9: JZ 0x0042d62c
//   XREF to: 0042d62c (CONDITIONAL_JUMP)
// 0042d5db: MOV dword ptr [ESI + 0x25e8],EDX
//   Label: LAB_0042d5db
// 0042d5e1: MOV EAX,dword ptr [ESP + 0xe0]
//   Label: LAB_0042d5e1
// 0042d5e8: MOV dword ptr [ESI + 0x25d0],EAX
// 0042d5ee: TEST EAX,EAX
// 0042d5f0: JNZ 0x0042da1e
//   XREF to: 0042da1e (CONDITIONAL_JUMP)
// 0042d5f6: CMP dword ptr [ESI + 0x25d0],0x0
//   Label: LAB_0042d5f6
// 0042d5fd: JNZ 0x0042dc24
//   XREF to: 0042dc24 (CONDITIONAL_JUMP)
// 0042d603: FLD float ptr [EBP + 0x18]
//   Label: LAB_0042d603
// 0042d606: FDIV float ptr [0x00617442]
//   XREF to: 00617442 (READ)
// 0042d60c: FSUBR float ptr [ESI + 0x25e0]
// 0042d612: FST float ptr [ESI + 0x25e0]
// 0042d618: FLDZ
// 0042d61a: FCOMPP
// 0042d61c: FNSTSW AX
// 0042d61e: SAHF
// 0042d61f: JA 0x0042dbff
//   XREF to: 0042dbff (CONDITIONAL_JUMP)
// 0042d625: MOV ESP,EBP
// 0042d627: POP EBP
// 0042d628: POP EDI
// 0042d629: POP ESI
// 0042d62a: POP EBX
// 0042d62b: RET
// 0042d62c: MOV ECX,dword ptr [ESI + 0x25d4]
//   Label: LAB_0042d62c
// 0042d632: TEST ECX,ECX
// 0042d634: JZ 0x0042d63f
//   XREF to: 0042d63f (CONDITIONAL_JUMP)
// 0042d636: MOV dword ptr [ESP + 0xe0],ECX
// 0042d63d: JMP 0x0042d5db
//   XREF to: 0042d5db (UNCONDITIONAL_JUMP)
// 0042d63f: FLD float ptr [ESI + 0x25e8]
//   Label: LAB_0042d63f
// 0042d645: FLDZ
// 0042d647: FCOMPP
// 0042d649: FNSTSW AX
// 0042d64b: SAHF
// 0042d64c: JNC 0x0042d66f
//   XREF to: 0042d66f (CONDITIONAL_JUMP)
// 0042d64e: FLD float ptr [ESI + 0x25e8]
// 0042d654: MOV EAX,dword ptr [ESI + 0x25d0]
// 0042d65a: FSUB float ptr [EBP + 0x18]
// 0042d65d: MOV dword ptr [ESP + 0xe0],EAX
// 0042d664: FSTP float ptr [ESI + 0x25e8]
// 0042d66a: JMP 0x0042d5e1
//   XREF to: 0042d5e1 (UNCONDITIONAL_JUMP)
// 0042d66f: LEA EAX,[ESP + 0x5c]
//   Label: LAB_0042d66f
// 0042d673: PUSH EAX
// 0042d674: LEA EAX,[ESP + 0xa8]
// 0042d67b: MOV EDI,0x40b00000
// 0042d680: PUSH EAX
// 0042d681: MOV dword ptr [ESP + 0x64],EDX
// 0042d685: MOV dword ptr [ESP + 0x6c],EDX
// 0042d689: PUSH ESI
// 0042d68a: MOV dword ptr [ESP + 0x6c],EDI
// 0042d68e: XOR EDI,EDI
// 0042d690: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0042d695: ADD ESP,0xc
// 0042d698: MOV dword ptr [ESP + 0xe8],EDI
// 0042d69f: MOV EAX,[0x006810c8]
//   Label: LAB_0042d69f
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 0042d6a4: CMP EDI,dword ptr [EAX + 0x14f098]
//   XREF to: 03263310 (READ)
// 0042d6aa: JGE 0x0042d9ea
//   XREF to: 0042d9ea (CONDITIONAL_JUMP)
// 0042d6b0: ADD EAX,dword ptr [ESP + 0xe8]
// 0042d6b7: MOV EBX,dword ptr [EAX + 0x14f09c]
//   XREF to: 03263314 (DATA)
//   XREF to: 03263318 (DATA)
// 0042d6bd: CMP EBX,ESI
// 0042d6bf: JNZ 0x0042d6d5
//   XREF to: 0042d6d5 (CONDITIONAL_JUMP)
// 0042d6c1: MOV EBX,dword ptr [ESP + 0xe8]
//   Label: LAB_0042d6c1
// 0042d6c8: ADD EBX,0x4
// 0042d6cb: INC EDI
// 0042d6cc: MOV dword ptr [ESP + 0xe8],EBX
// 0042d6d3: JMP 0x0042d69f
//   XREF to: 0042d69f (UNCONDITIONAL_JUMP)
// 0042d6d5: PUSH EBX
//   Label: LAB_0042d6d5
// 0042d6d6: MOV EAX,dword ptr [EBX + 0x154]
// 0042d6dc: CALL dword ptr [EAX + 0x68]
// 0042d6df: ADD ESP,0x4
// 0042d6e2: TEST EAX,EAX
// 0042d6e4: JNZ 0x0042d6c1
//   XREF to: 0042d6c1 (CONDITIONAL_JUMP)
// 0042d6e6: PUSH EBX
// 0042d6e7: MOV EAX,dword ptr [EBX + 0x154]
// 0042d6ed: CALL dword ptr [EAX + 0x120]
// 0042d6f3: ADD ESP,0x4
// 0042d6f6: MOV dword ptr [ESP + 0xe4],EAX
// 0042d6fd: TEST EAX,EAX
// 0042d6ff: JNZ 0x0042d989
//   XREF to: 0042d989 (CONDITIONAL_JUMP)
// 0042d705: LEA EAX,[ESP + 0x14]
//   Label: LAB_0042d705
// 0042d709: LEA EDX,[EBX + 0x20]
// 0042d70c: CMP EAX,EDX
// 0042d70e: JZ 0x0042d724
//   XREF to: 0042d724 (CONDITIONAL_JUMP)
// 0042d710: MOV EAX,dword ptr [EDX]
// 0042d712: MOV dword ptr [ESP + 0x14],EAX
// 0042d716: MOV EAX,dword ptr [EDX + 0x4]
// 0042d719: MOV dword ptr [ESP + 0x18],EAX
// 0042d71d: MOV EAX,dword ptr [EDX + 0x8]
// 0042d720: MOV dword ptr [ESP + 0x1c],EAX
// 0042d724: FLD float ptr [ESP + 0x18]
//   Label: LAB_0042d724
// 0042d728: FADD float ptr [0x0061742a]
//   XREF to: 0061742a (READ)
// 0042d72e: FSTP float ptr [ESP + 0x18]
// 0042d732: FLD float ptr [ESP + 0x14]
//   Label: LAB_0042d732
// 0042d736: FLD float ptr [ESP + 0x18]
// 0042d73a: FLD float ptr [ESP + 0x1c]
// 0042d73e: LEA EAX,[ESP + 0x50]
// 0042d742: FXCH ST2
// 0042d744: FSUB float ptr [ESP + 0xa4]
// 0042d74b: FXCH
// 0042d74d: FSUB float ptr [ESP + 0xa8]
// 0042d754: PUSH EAX
// 0042d755: FXCH ST2
// 0042d757: FSUB float ptr [ESP + 0xb0]
// 0042d75e: LEA EAX,[ESP + 0xb4]
// 0042d765: FXCH
// 0042d767: FSTP float ptr [ESP + 0x54]
// 0042d76b: PUSH EAX
// 0042d76c: FXCH
// 0042d76e: FSTP float ptr [ESP + 0x5c]
// 0042d772: PUSH ESI
// 0042d773: FSTP float ptr [ESP + 0x64]
// 0042d777: CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
//   XREF to: 00408ea0 (UNCONDITIONAL_CALL)
// 0042d77c: ADD ESP,0xc
// 0042d77f: FLD float ptr [ESP + 0xb8]
// 0042d786: FLDZ
// 0042d788: FCOMPP
// 0042d78a: FNSTSW AX
// 0042d78c: SAHF
// 0042d78d: JA 0x0042d6c1
//   XREF to: 0042d6c1 (CONDITIONAL_JUMP)
// 0042d793: FLD float ptr [ESP + 0xb4]
// 0042d79a: FMUL ST0
// 0042d79c: FLD float ptr [ESP + 0xb0]
// 0042d7a3: FMUL ST0
// 0042d7a5: FADDP
// 0042d7a7: FLD float ptr [ESP + 0xb8]
// 0042d7ae: FMUL ST0
// 0042d7b0: FADDP
// 0042d7b2: FSTP float ptr [ESP + 0xdc]
// 0042d7b9: MOV EAX,dword ptr [ESP + 0xdc]
// 0042d7c0: MOV dword ptr [ESP + 0x4],EAX
// 0042d7c4: CMP EAX,0x44610000
// 0042d7c9: JG 0x0042d6c1
//   XREF to: 0042d6c1 (CONDITIONAL_JUMP)
// 0042d7cf: LEA EAX,[ESP + 0xb0]
// 0042d7d6: PUSH EAX
// 0042d7d7: LEA EAX,[ESP + 0xc0]
// 0042d7de: PUSH EAX
// 0042d7df: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 0042d7e4: ADD ESP,0x8
// 0042d7e7: FLD float ptr [ESP + 0xc0]
// 0042d7ee: FABS
// 0042d7f0: FCOMP double ptr [0x00617432]
//   XREF to: 00617432 (READ)
// 0042d7f6: FNSTSW AX
// 0042d7f8: SAHF
// 0042d7f9: JA 0x0042d6c1
//   XREF to: 0042d6c1 (CONDITIONAL_JUMP)
// 0042d7ff: FLD float ptr [ESP + 0xbc]
// 0042d806: FABS
// 0042d808: FCOMP double ptr [0x0061743a]
//   XREF to: 0061743a (READ)
// 0042d80e: FNSTSW AX
// 0042d810: SAHF
// 0042d811: JA 0x0042d6c1
//   XREF to: 0042d6c1 (CONDITIONAL_JUMP)
// 0042d817: MOV EAX,[0x02cf2bf0]
//   XREF to: 02cf2bf0 (READ)
// 0042d81c: PUSH EAX
// 0042d81d: MOV ECX,0x41200000
// 0042d822: PUSH EBX
// 0042d823: MOV dword ptr [ESP + 0x8],ECX
// 0042d827: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0042d82c: ADD ESP,0x8
// 0042d82f: TEST EAX,EAX
// 0042d831: JZ 0x0042d856
//   XREF to: 0042d856 (CONDITIONAL_JUMP)
// 0042d833: CMP dword ptr [ESP + 0xe4],0x0
// 0042d83b: JNZ 0x0042d856
//   XREF to: 0042d856 (CONDITIONAL_JUMP)
// 0042d83d: MOV ECX,0x41f00000
// 0042d842: MOV EDX,dword ptr [EAX + 0xbe3c]
// 0042d848: MOV dword ptr [ESP],ECX
// 0042d84b: CMP ESI,EDX
// 0042d84d: JNZ 0x0042d856
//   XREF to: 0042d856 (CONDITIONAL_JUMP)
// 0042d84f: MOV dword ptr [ESP],0x42200000
// 0042d856: FLD float ptr [ESP]
//   Label: LAB_0042d856
// 0042d859: FCOMP double ptr [0x00617452]
//   XREF to: 00617452 (READ)
// 0042d85f: FNSTSW AX
// 0042d861: SAHF
// 0042d862: JNC 0x0042d87d
//   XREF to: 0042d87d (CONDITIONAL_JUMP)
// 0042d864: PUSH 0x6173ca
//   XREF to: 006173ca (DATA)
// 0042d869: PUSH EBX
// 0042d86a: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 0042d86f: ADD ESP,0x8
// 0042d872: TEST EAX,EAX
// 0042d874: JZ 0x0042d87d
//   XREF to: 0042d87d (CONDITIONAL_JUMP)
// 0042d876: MOV dword ptr [ESP],0x41700000
// 0042d87d: FLD float ptr [ESP]
//   Label: LAB_0042d87d
// 0042d880: FCOMP double ptr [0x0061745a]
//   XREF to: 0061745a (READ)
// 0042d886: FNSTSW AX
// 0042d888: SAHF
// 0042d889: JNC 0x0042d89c
//   XREF to: 0042d89c (CONDITIONAL_JUMP)
// 0042d88b: CMP dword ptr [ESP + 0xe4],0x0
// 0042d893: JLE 0x0042d89c
//   XREF to: 0042d89c (CONDITIONAL_JUMP)
// 0042d895: MOV dword ptr [ESP],0x41700000
// 0042d89c: FLD float ptr [ESP + 0x4]
//   Label: LAB_0042d89c
// 0042d8a0: FSQRT
// 0042d8a2: FLD double ptr [0x00617462]
//   XREF to: 00617462 (READ)
// 0042d8a8: FXCH
// 0042d8aa: FADD ST0,ST1
// 0042d8ac: FDIVP
// 0042d8ae: FLD float ptr [ESP]
// 0042d8b1: FXCH
// 0042d8b3: FMUL ST1
// 0042d8b5: MOV EAX,dword ptr [ESI + 0x25d0]
// 0042d8bb: FSTP ST1
// 0042d8bd: FSTP float ptr [ESP]
// 0042d8c0: CMP EBX,EAX
// 0042d8c2: JNZ 0x0042d8d4
//   XREF to: 0042d8d4 (CONDITIONAL_JUMP)
// 0042d8c4: FLD float ptr [ESP]
// 0042d8c7: FLD ST0
// 0042d8c9: FMUL double ptr [0x00617422]
//   XREF to: 00617422 (READ)
// 0042d8cf: FSTP ST1
// 0042d8d1: FSTP float ptr [ESP]
// 0042d8d4: FLD float ptr [ESP]
//   Label: LAB_0042d8d4
// 0042d8d7: FCOMP float ptr [0x0061746a]
//   XREF to: 0061746a (READ)
// 0042d8dd: FNSTSW AX
// 0042d8df: SAHF
// 0042d8e0: JC 0x0042d6c1
//   XREF to: 0042d6c1 (CONDITIONAL_JUMP)
// 0042d8e6: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 0042d8ec: PUSH EDX
//   XREF to: 03114278 (DATA)
// 0042d8ed: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 0042d8f2: ADD ESP,0x4
// 0042d8f5: PUSH ESI
// 0042d8f6: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 0042d8fc: PUSH ECX
//   XREF to: 03114278 (DATA)
// 0042d8fd: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 0042d902: ADD ESP,0x8
// 0042d905: PUSH EBX
// 0042d906: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 0042d90b: PUSH EAX
//   XREF to: 03114278 (DATA)
// 0042d90c: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 0042d911: ADD ESP,0x8
// 0042d914: PUSH 0x2
// 0042d916: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 0042d91c: PUSH EDX
//   XREF to: 03114278 (DATA)
// 0042d91d: CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
//   XREF to: 00574230 (UNCONDITIONAL_CALL)
// 0042d922: ADD ESP,0x8
// 0042d925: LEA EAX,[ESP + 0x14]
// 0042d929: PUSH EAX
// 0042d92a: LEA EAX,[ESP + 0xa8]
// 0042d931: PUSH EAX
// 0042d932: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 0042d938: PUSH ECX
//   XREF to: 03114278 (DATA)
// 0042d939: CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00572460
//   XREF to: 00572460 (UNCONDITIONAL_CALL)
// 0042d93e: ADD ESP,0xc
// 0042d941: TEST EAX,EAX
// 0042d943: JNZ 0x0042d6c1
//   XREF to: 0042d6c1 (CONDITIONAL_JUMP)
// 0042d949: LEA EAX,[ESP + 0xbc]
// 0042d950: LEA EDX,[ESP + 0x2c]
// 0042d954: MOV dword ptr [ESP + 0xe0],EBX
// 0042d95b: CMP EDX,EAX
// 0042d95d: JZ 0x0042d6c1
//   XREF to: 0042d6c1 (CONDITIONAL_JUMP)
// 0042d963: MOV EAX,dword ptr [ESP + 0xbc]
// 0042d96a: MOV dword ptr [ESP + 0x2c],EAX
// 0042d96e: MOV EAX,dword ptr [ESP + 0xc0]
// 0042d975: MOV dword ptr [ESP + 0x30],EAX
// 0042d979: MOV EAX,dword ptr [ESP + 0xc4]
// 0042d980: MOV dword ptr [ESP + 0x34],EAX
// 0042d984: JMP 0x0042d6c1
//   XREF to: 0042d6c1 (UNCONDITIONAL_JUMP)
// 0042d989: LEA EDX,[EBX + 0x158]
//   Label: LAB_0042d989
// 0042d98f: LEA EAX,[EBX + 0x23b8]
// 0042d995: CMP byte ptr [EAX],0x0
// 0042d998: JZ 0x0042d705
//   XREF to: 0042d705 (CONDITIONAL_JUMP)
// 0042d99e: PUSH 0x0
// 0042d9a0: LEA EAX,[ESP + 0x84]
// 0042d9a7: PUSH EAX
// 0042d9a8: PUSH EDX
// 0042d9a9: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 0042d9ae: ADD ESP,0xc
// 0042d9b1: PUSH EAX
// 0042d9b2: LEA EAX,[ESP + 0x9c]
// 0042d9b9: PUSH EAX
// 0042d9ba: PUSH EBX
// 0042d9bb: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0042d9c0: MOV EDX,EAX
// 0042d9c2: LEA EAX,[ESP + 0x20]
// 0042d9c6: ADD ESP,0xc
// 0042d9c9: CMP EAX,EDX
// 0042d9cb: JZ 0x0042d732
//   XREF to: 0042d732 (CONDITIONAL_JUMP)
// 0042d9d1: MOV EAX,dword ptr [EDX]
// 0042d9d3: MOV dword ptr [ESP + 0x14],EAX
// 0042d9d7: MOV EAX,dword ptr [EDX + 0x4]
// 0042d9da: MOV dword ptr [ESP + 0x18],EAX
// 0042d9de: MOV EAX,dword ptr [EDX + 0x8]
// 0042d9e1: MOV dword ptr [ESP + 0x1c],EAX
// 0042d9e5: JMP 0x0042d732
//   XREF to: 0042d732 (UNCONDITIONAL_JUMP)
// 0042d9ea: PUSH EAX
//   Label: LAB_0042d9ea
//   XREF to: 03114278 (DATA)
// 0042d9eb: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 0042d9f0: ADD ESP,0x4
// 0042d9f3: PUSH 0x40000000
// 0042d9f8: PUSH 0x3f800000
// 0042d9fd: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 0042da1e: XOR EAX,EAX
//   Label: LAB_0042da1e
// 0042da20: MOV dword ptr [ESP + 0x38],EAX
// 0042da24: MOV dword ptr [ESP + 0x40],EAX
// 0042da28: LEA EAX,[ESP + 0x38]
// 0042da2c: PUSH EAX
// 0042da2d: LEA EAX,[ESP + 0x78]
// 0042da31: PUSH EAX
// 0042da32: MOV EDX,0x40b00000
// 0042da37: PUSH ESI
// 0042da38: MOV dword ptr [ESP + 0x48],EDX
// 0042da3c: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0042da41: ADD ESP,0xc
// 0042da44: MOV EBX,dword ptr [0x00823c4c]
//   XREF to: 00823c4c (READ)
// 0042da4a: PUSH EBX
// 0042da4b: MOV EDI,dword ptr [ESI + 0x25d0]
// 0042da51: PUSH EDI
// 0042da52: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0042da57: ADD ESP,0x8
// 0042da5a: MOV EBX,EAX
// 0042da5c: TEST EAX,EAX
// 0042da5e: JNZ 0x0042da82
//   XREF to: 0042da82 (CONDITIONAL_JUMP)
// 0042da60: MOV EAX,0x6173d0
//   XREF to: 006173d0 (DATA)
// 0042da65: MOV EDX,0xda0
// 0042da6a: PUSH 0x6173e5
//   XREF to: 006173e5 (DATA)
// 0042da6f: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0042da74: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0042da7a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0042da7f: ADD ESP,0x4
// 0042da82: PUSH EBX
//   Label: LAB_0042da82
// 0042da83: MOV EAX,dword ptr [EBX + 0x154]
// 0042da89: CALL dword ptr [EAX + 0x120]
// 0042da8f: ADD ESP,0x4
// 0042da92: TEST EAX,EAX
// 0042da94: JNZ 0x0042db95
//   XREF to: 0042db95 (CONDITIONAL_JUMP)
// 0042da9a: LEA EAX,[ESP + 0x8c]
//   Label: LAB_0042da9a
// 0042daa1: ADD EBX,0x20
// 0042daa4: CMP EAX,EBX
// 0042daa6: JZ 0x0042dac5
//   XREF to: 0042dac5 (CONDITIONAL_JUMP)
// 0042daa8: MOV EAX,dword ptr [EBX]
// 0042daaa: MOV dword ptr [ESP + 0x8c],EAX
// 0042dab1: MOV EAX,dword ptr [EBX + 0x4]
// 0042dab4: MOV dword ptr [ESP + 0x90],EAX
// 0042dabb: MOV EAX,dword ptr [EBX + 0x8]
// 0042dabe: MOV dword ptr [ESP + 0x94],EAX
// 0042dac5: FLD float ptr [ESP + 0x90]
//   Label: LAB_0042dac5
// 0042dacc: FADD float ptr [0x0061742a]
//   XREF to: 0061742a (READ)
// 0042dad2: FSTP float ptr [ESP + 0x90]
// 0042dad9: FLD float ptr [ESP + 0x8c]
//   Label: LAB_0042dad9
// 0042dae0: FLD float ptr [ESP + 0x90]
// 0042dae7: FLD float ptr [ESP + 0x94]
// 0042daee: LEA EAX,[ESP + 0x8]
// 0042daf2: FXCH ST2
// 0042daf4: FSUB float ptr [ESP + 0x74]
// 0042daf8: FXCH
// 0042dafa: FSUB float ptr [ESP + 0x78]
// 0042dafe: PUSH EAX
// 0042daff: FXCH ST2
// 0042db01: FSUB float ptr [ESP + 0x80]
// 0042db08: LEA EAX,[ESP + 0x24]
// 0042db0c: FXCH
// 0042db0e: FSTP float ptr [ESP + 0xc]
// 0042db12: PUSH EAX
// 0042db13: FXCH
// 0042db15: FSTP float ptr [ESP + 0x14]
// 0042db19: PUSH ESI
// 0042db1a: FSTP float ptr [ESP + 0x1c]
// 0042db1e: CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
//   XREF to: 00408ea0 (UNCONDITIONAL_CALL)
// 0042db23: ADD ESP,0xc
// 0042db26: LEA EAX,[ESP + 0x20]
// 0042db2a: PUSH EAX
// 0042db2b: LEA EAX,[ESP + 0x48]
// 0042db2f: PUSH EAX
// 0042db30: CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
//   XREF to: 005e7830 (UNCONDITIONAL_CALL)
// 0042db35: MOV EDX,EAX
// 0042db37: LEA EAX,[ESP + 0x34]
// 0042db3b: ADD ESP,0x8
// 0042db3e: CMP EAX,EDX
// 0042db40: JZ 0x0042db56
//   XREF to: 0042db56 (CONDITIONAL_JUMP)
// 0042db42: MOV EAX,dword ptr [EDX]
// 0042db44: MOV dword ptr [ESP + 0x2c],EAX
// 0042db48: MOV EAX,dword ptr [EDX + 0x4]
// 0042db4b: MOV dword ptr [ESP + 0x30],EAX
// 0042db4f: MOV EAX,dword ptr [EDX + 0x8]
// 0042db52: MOV dword ptr [ESP + 0x34],EAX
// 0042db56: FLD float ptr [ESP + 0x30]
//   Label: LAB_0042db56
// 0042db5a: FABS
// 0042db5c: FCOMP double ptr [0x00617432]
//   XREF to: 00617432 (READ)
// 0042db62: FNSTSW AX
// 0042db64: SAHF
// 0042db65: JBE 0x0042db71
//   XREF to: 0042db71 (CONDITIONAL_JUMP)
// 0042db67: MOV dword ptr [ESI + 0x25d0],0x0
// 0042db71: FLD float ptr [ESP + 0x2c]
//   Label: LAB_0042db71
// 0042db75: FABS
// 0042db77: FCOMP double ptr [0x0061743a]
//   XREF to: 0061743a (READ)
// 0042db7d: FNSTSW AX
// 0042db7f: SAHF
// 0042db80: JBE 0x0042d5f6
//   XREF to: 0042d5f6 (CONDITIONAL_JUMP)
// 0042db86: MOV dword ptr [ESI + 0x25d0],0x0
// 0042db90: JMP 0x0042d603
//   XREF to: 0042d603 (UNCONDITIONAL_JUMP)
// 0042db95: LEA EDX,[EBX + 0x158]
//   Label: LAB_0042db95
// 0042db9b: LEA EAX,[EBX + 0x23b8]
// 0042dba1: CMP byte ptr [EAX],0x0
// 0042dba4: JZ 0x0042da9a
//   XREF to: 0042da9a (CONDITIONAL_JUMP)
// 0042dbaa: PUSH 0x0
// 0042dbac: LEA EAX,[ESP + 0xcc]
// 0042dbb3: PUSH EAX
// 0042dbb4: PUSH EDX
// 0042dbb5: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 0042dbba: ADD ESP,0xc
// 0042dbbd: PUSH EAX
// 0042dbbe: LEA EAX,[ESP + 0x6c]
// 0042dbc2: PUSH EAX
// 0042dbc3: PUSH EBX
// 0042dbc4: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0042dbc9: MOV EDX,EAX
// 0042dbcb: LEA EAX,[ESP + 0x98]
// 0042dbd2: ADD ESP,0xc
// 0042dbd5: CMP EAX,EDX
// 0042dbd7: JZ 0x0042dad9
//   XREF to: 0042dad9 (CONDITIONAL_JUMP)
// 0042dbdd: MOV EAX,dword ptr [EDX]
// 0042dbdf: MOV dword ptr [ESP + 0x8c],EAX
// 0042dbe6: MOV EAX,dword ptr [EDX + 0x4]
// 0042dbe9: MOV dword ptr [ESP + 0x90],EAX
// 0042dbf0: MOV EAX,dword ptr [EDX + 0x8]
// 0042dbf3: MOV dword ptr [ESP + 0x94],EAX
// 0042dbfa: JMP 0x0042dad9
//   XREF to: 0042dad9 (UNCONDITIONAL_JUMP)
// 0042dbff: MOV dword ptr [ESI + 0x25dc],0x0
//   Label: LAB_0042dbff
// 0042dc09: MOV dword ptr [ESI + 0x25e0],0x0
// 0042dc13: MOV dword ptr [ESI + 0x25d8],0x0
// 0042dc1d: MOV ESP,EBP
// 0042dc1f: POP EBP
// 0042dc20: POP EDI
// 0042dc21: POP ESI
// 0042dc22: POP EBX
// 0042dc23: RET
// 0042dc24: FLD float ptr [EBP + 0x18]
//   Label: LAB_0042dc24
// 0042dc27: FDIV float ptr [0x00617442]
//   XREF to: 00617442 (READ)
// 0042dc2d: FADD float ptr [ESI + 0x25e0]
// 0042dc33: FST float ptr [ESI + 0x25e0]
// 0042dc39: FLD1
// 0042dc3b: FCOMPP
// 0042dc3d: FNSTSW AX
// 0042dc3f: SAHF
// 0042dc40: JNC 0x0042dc4c
//   XREF to: 0042dc4c (CONDITIONAL_JUMP)
// 0042dc42: MOV dword ptr [ESI + 0x25e0],0x3f800000
// 0042dc4c: FLD float ptr [ESP + 0x30]
//   Label: LAB_0042dc4c
// 0042dc50: FSUB float ptr [ESI + 0x25d8]
// 0042dc56: SUB ESP,0x4
// 0042dc59: FSTP float ptr [ESP]
// 0042dc5c: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 0042dc61: MOV dword ptr [ESP + 0xf0],EAX
// 0042dc68: FLD float ptr [ESP + 0xf0]
// 0042dc6f: FMUL double ptr [0x0061744a]
//   XREF to: 0061744a (READ)
// 0042dc75: ADD ESP,0x4
// 0042dc78: FADD float ptr [ESI + 0x25d8]
// 0042dc7e: FSTP float ptr [ESI + 0x25d8]
// 0042dc84: FLD float ptr [ESP + 0x2c]
// 0042dc88: FSUB float ptr [ESI + 0x25dc]
// 0042dc8e: SUB ESP,0x4
// 0042dc91: FSTP float ptr [ESP]
// 0042dc94: CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 0042dc99: MOV dword ptr [ESP + 0xf0],EAX
// 0042dca0: FLD float ptr [ESP + 0xf0]
// 0042dca7: FMUL double ptr [0x0061744a]
//   XREF to: 0061744a (READ)
// 0042dcad: ADD ESP,0x4
// 0042dcb0: FADD float ptr [ESI + 0x25dc]
// 0042dcb6: FSTP float ptr [ESI + 0x25dc]
// 0042dcbc: MOV ESP,EBP
// 0042dcbe: POP EBP
// 0042dcbf: POP EDI
// 0042dcc0: POP ESI
// 0042dcc1: POP EBX
// 0042dcc2: RET
