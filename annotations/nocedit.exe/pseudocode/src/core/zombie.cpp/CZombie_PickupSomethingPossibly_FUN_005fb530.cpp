// Name: core_zombie.cpp_CZombie_PickupSomethingPossibly_FUN_005fb530
// Address: 005fb530
// Address Range: [[005fb530, 005fb5c7] [005fb5e1, 005fbcf2]]
// Convention: unknown
// Signature: undefined core_zombie.cpp_CZombie_PickupSomethingPossibly_FUN_005fb530()
// Cross-references:
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005fa8e9 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 s_%s_can't_pick_up_%s,_sombody_els_0065882d
//   TerminatedCString s_s_can_t_pick_up_s_giving_0065885f
//   TerminatedCString s_s_beginning_to_pickup_s_0065887f
//   TerminatedCString s_core_zombie_cpp_0065889a
//   TerminatedCString s_Invalid_zombie_object_sh_006588ad
//   TerminatedCString s_CBodyPart_006588ca
//   TerminatedCString s_s_is_going_to_try_to_pic_006588d4
//   undefined4 DAT_006588fd
//   undefined4 DAT_00658905
//   undefined4 DAT_0065890d
//   undefined4 DAT_00658915
//   CConsole* g_CConsolePtr = 0083b1a4
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CConsole g_ConsolePtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
//   undefined4 DAT_032613d4
//   CVector3f g_ZeroVector
//   undefined4 g_ZeroVector.y
//   undefined4 g_ZeroVector.z
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_actor.cpp_getRandomInt_FUN_0040cc70
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_bodypart.cpp_FUN_0041b4e0
//   core_bodypart.cpp_FUN_0041b540
//   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_zombie.cpp_CZombie_FUN_005f8e50
//   core_zombie.cpp_CZombie_FUN_005fbd00
//   core_zombie.cpp_CZombie_FUN_005fbda0
//   core_zombie.cpp_CZombie_FUN_005fca10
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_zombie.cpp_CZombie_PickupSomethingPossibly(CZombie* param_1,
   undefined4 param_2) */

undefined4 core_zombie_cpp_CZombie_PickupSomethingPossibly_FUN_005fb530(void)

{
  CLocation *pCVar1;
  CDemonActor *pCVar2;
  uint uVar3;
  undefined4 uVar4;
  float fVar5;
  CCharacter *pCVar6;
  CDemonActor *pCVar7;
  int iVar8;
  int iVar9;
  CBoundingBox3D *pCVar10;
  BADSPACEBASE *in_ESP;
  float *unaff_ESI;
  int iVar11;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  float fVar12;
  undefined4 auStack_14c [10];
  float afStack_124 [8];
  undefined1 auStack_104 [20];
  float fStack_f0;
  CBoundingBox3D CStack_e8;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  CVector3f CStack_bc;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  CVector3f CStack_a4;
  float afStack_98 [6];
  CVector3f CStack_80;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  CVector3f CStack_50;
  CVector3f CStack_44;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_24;
  int local_20;
  CLocation *local_1c;
  int local_18;
  float local_14;
  
  if (in_stack_00000004[1].model.motion_controller.tween_type < 0) {
    return 0;
  }
  fVar12 = *(float *)(in_stack_00000004[1].base_actor.create_event + 0x28) - in_stack_00000008;
  *(float *)(in_stack_00000004[1].base_actor.create_event + 0x28) = fVar12;
  if (0.0 < fVar12) {
    *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24) =
         *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24) + 1;
    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,10.0);
    *(float *)(in_stack_00000004[1].base_actor.create_event + 0x28) = local_14;
  }
  if (in_stack_00000004->carry_hands[0].carry_actor != (CDemonActor *)0x0) {
    return 0;
  }
  if (in_stack_00000004->carry_hands[1].carry_actor != (CDemonActor *)0x0) {
    return 0;
  }
  if (0.0 < *(float *)(in_stack_00000004[1].base_actor.create_event + 0x2c)) {
    in_stack_00000008 =
         *(float *)(in_stack_00000004[1].base_actor.create_event + 0x2c) - in_stack_00000008;
    *(float *)(in_stack_00000004[1].base_actor.create_event + 0x2c) = in_stack_00000008;
    if (0.0 <= in_stack_00000008) {
      return 0;
    }
    in_stack_00000004 = in_stack_00000004 + 1;
    (in_stack_00000004->base_actor).create_event[0x2c] = '\0';
    (in_stack_00000004->base_actor).create_event[0x2d] = '\0';
    (in_stack_00000004->base_actor).create_event[0x2e] = '\0';
    (in_stack_00000004->base_actor).create_event[0x2f] = '\0';
    return 0;
  }
  iVar8 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x30);
  pCVar1 = &(in_stack_00000004->base_actor).location;
  if (iVar8 == 0) {
    local_24 = 0;
    local_20 = 0;
    iVar8 = 0;
    local_1c = pCVar1;
    for (local_18 = 0; local_18 < (int)g_CDemonSetPtr->actor_list_ptr; local_18 = local_18 + 1) {
      pCVar2 = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + local_20);
      pCVar7 = (*pCVar2->vtable->getCarrier)(pCVar2);
      iVar11 = iVar8;
      if ((pCVar7 == (CDemonActor *)0x0) &&
         (iVar9 = (*pCVar2->vtable->canPickup)(pCVar2,&in_stack_00000004->base_actor), iVar9 == 3))
      {
        pCVar10 = (*pCVar2->vtable->getBoundingBox)(pCVar2,(CBoundingBox3D *)auStack_104);
        CStack_50.z = (pCVar10->max).x - (pCVar10->min).x;
        CStack_44.x = (pCVar10->max).y - (pCVar10->min).y;
        CStack_44.y = (pCVar10->max).z - (pCVar10->min).z;
        local_14 = (float)core_zombie_cpp_CZombie_FUN_005f8e50();
        if (((local_14 != 0.0) && (iVar9 = core_zombie_cpp_CZombie_FUN_005fbda0(), iVar9 != 0)) &&
           ((iVar9 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar2,"CBodyPart"), iVar9 == 0
            || ((pCVar2->field7_0x6c & 3U) ==
                (*(uint *)(in_stack_00000004[1].base_actor.create_event + 0x24) & 3))))) {
          CStack_80.z = (pCVar2->location).position.x - *unaff_ESI;
          fStack_74 = (pCVar2->location).position.y - unaff_ESI[1];
          fStack_74 = fStack_74 * fStack_74;
          fStack_70 = (pCVar2->location).position.z - unaff_ESI[2];
          fStack_74 = fStack_74 * fStack_74;
          fVar12 = SQRT(fStack_70 * fStack_70 + CStack_80.z * CStack_80.z + fStack_74 * fStack_74);
          if (((float)_DAT_00658905 <= fVar12) &&
             (fVar12 <= *(float *)(in_stack_00000004[1].base_actor.create_event + 0x20) *
                        _DAT_00658915)) {
            *(float *)((int)afStack_124 + iVar8) = local_14;
            iVar11 = iVar8 + 4;
            *(CDemonActor **)((int)auStack_14c + iVar8) = pCVar2;
            if (0x27 < iVar11) break;
          }
        }
      }
      local_20 = local_20 + 4;
      iVar8 = iVar11;
    }
    if (local_24 < 1) {
      return 0;
    }
    iVar11 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,local_24 + -1);
    *(undefined4 *)(in_stack_00000004[1].base_actor.create_event + 0x30) = auStack_14c[iVar11 + -5];
    uVar4 = *(undefined4 *)(in_stack_00000004[1].base_actor.create_event + 0x30);
    iVar8 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24);
    fVar12 = afStack_124[iVar11 + -5];
    pCVar6 = in_stack_00000004 + 1;
    (pCVar6->base_actor).create_event[0x2c] = '\0';
    (pCVar6->base_actor).create_event[0x2d] = '\0';
    (pCVar6->base_actor).create_event[0x2e] = ' ';
    (pCVar6->base_actor).create_event[0x2f] = -0x3e;
    *(float *)(in_stack_00000004[1].base_actor.create_event + 0x34) = fVar12;
    *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24) = iVar8 + 1;
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s is going to try to pick up %s\n",in_stack_00000004,uVar4);
    return 1;
  }
  iVar8 = (**(code **)(*(int *)(iVar8 + 0x154) + 0x8c))();
  if (iVar8 != 0) {
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"?%s can't pick up %s, sombody else beat me to it!\n" + 1,in_stack_00000004,
               *(undefined4 *)(in_stack_00000004[1].base_actor.create_event + 0x30));
    pCVar6 = in_stack_00000004 + 1;
    (pCVar6->base_actor).create_event[0x30] = '\0';
    (pCVar6->base_actor).create_event[0x31] = '\0';
    (pCVar6->base_actor).create_event[0x32] = '\0';
    (pCVar6->base_actor).create_event[0x33] = '\0';
    in_stack_00000004 = in_stack_00000004 + 1;
    (in_stack_00000004->base_actor).create_event[0x2c] = '\0';
    (in_stack_00000004->base_actor).create_event[0x2d] = '\0';
    (in_stack_00000004->base_actor).create_event[0x2e] = '\0';
    (in_stack_00000004->base_actor).create_event[0x2f] = '\0';
    core_zombie_cpp_CZombie_FUN_005fca10();
    return 0;
  }
  iVar8 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x30);
  fVar12 = (pCVar1->position).x - *(float *)(iVar8 + 0x20);
  fVar5 = (in_stack_00000004->base_actor).location.position.z - *(float *)(iVar8 + 0x28);
  fVar12 = (float)_DAT_00658905 - SQRT(fVar5 * fVar5 + fVar12 * fVar12) * (float)_DAT_006588fd;
  if (fVar12 < 1.0) {
    fVar12 = 1.0;
  }
  iVar11 = -1;
  *(float *)(in_stack_00000004[1].base_actor.create_event + 0x2c) =
       in_stack_00000008 * fVar12 + *(float *)(in_stack_00000004[1].base_actor.create_event + 0x2c);
  iVar8 = core_zombie_cpp_CZombie_FUN_005fbd00();
  if ((((-1 < iVar8) && (*(float *)(in_stack_00000004[1].base_actor.create_event + 0x2c) < 0.0)) &&
      (iVar9 = (**(code **)(*(int *)(*(int *)(in_stack_00000004[1].base_actor.create_event + 0x30) +
                                    0x154) + 0x7c))(), iVar9 == 3)) &&
     (iVar9 = core_zombie_cpp_CZombie_FUN_005fbda0(), iVar9 != 0)) {
    uVar3 = *(uint *)(in_stack_00000004[1].base_actor.create_event + 0x34);
    if (uVar3 < 2) {
      if (uVar3 == 1) {
LAB_005fb750:
        pCVar2 = *(CDemonActor **)(in_stack_00000004[1].base_actor.create_event + 0x30);
        (*pCVar2->vtable->getBoundingBox)(pCVar2,&CStack_e8);
        uStack_2c = 0x3f000000;
        core_bodypart_cpp_FUN_0041b540();
        core_bodypart_cpp_FUN_0041b4e0();
        CStack_80.z = CStack_e8.max.y + (float)_DAT_0065890d;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCVar2,&CStack_44,&CStack_80);
        if (&CStack_a4 != &CStack_44) {
          CStack_a4.x = CStack_44.x;
          CStack_a4.y = CStack_44.y;
          CStack_a4.z = CStack_44.z;
        }
      }
      else {
LAB_005fba18:
        iVar11 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x30);
        if (&uStack_ac != (undefined4 *)(iVar11 + 0x20)) {
          uStack_ac = *(undefined4 *)(iVar11 + 0x20);
          uStack_a8 = *(undefined4 *)(iVar11 + 0x24);
          CStack_a4.z = *(float *)(iVar11 + 0x28);
        }
      }
    }
    else {
      if (2 < uVar3) {
        if (uVar3 != 3) goto LAB_005fba18;
        goto LAB_005fb750;
      }
      pCVar2 = *(CDemonActor **)(in_stack_00000004[1].base_actor.create_event + 0x30);
      (*pCVar2->vtable->getBoundingBox)(pCVar2,(CBoundingBox3D *)(auStack_104 + 4));
      uStack_30 = 0x3f000000;
      core_bodypart_cpp_FUN_0041b540();
      core_bodypart_cpp_FUN_0041b4e0();
      CStack_bc.z = fStack_f0 + (float)_DAT_0065890d;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCVar2,&CStack_50,&CStack_bc);
      if (&CStack_a4 != &CStack_50) {
        CStack_a4.x = CStack_50.x;
        CStack_a4.y = CStack_50.y;
        CStack_a4.z = CStack_50.z;
      }
    }
    fStack_c8 = g_ZeroVector.x;
    fStack_c4 = g_ZeroVector.y;
    fStack_c0 = g_ZeroVector.z;
    if (iVar8 == 0) {
      fStack_74 = -1.5;
      fStack_70 = 0.0;
      fStack_6c = fStack_70;
      if (&fStack_c8 != &fStack_74) {
        fStack_c8 = -1.5;
        fStack_c4 = 0.0;
        fStack_c0 = 0.0;
      }
    }
    if (iVar8 == 1) {
      afStack_98[1] = 0.0;
      afStack_98[2] = 0.0;
      afStack_98[0] = 1.5;
      if (&fStack_c8 != afStack_98) {
        fStack_c4 = 0.0;
        fStack_c0 = 0.0;
        fStack_c8 = 1.5;
      }
    }
    iVar11 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(in_stack_00000004);
  }
  if (iVar11 < 0) {
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s can't pick up %s, giving up\n",in_stack_00000004,
               *(undefined4 *)(in_stack_00000004[1].base_actor.create_event + 0x30));
    pCVar6 = in_stack_00000004 + 1;
    (pCVar6->base_actor).create_event[0x30] = '\0';
    (pCVar6->base_actor).create_event[0x31] = '\0';
    (pCVar6->base_actor).create_event[0x32] = '\0';
    (pCVar6->base_actor).create_event[0x33] = '\0';
    in_stack_00000004 = in_stack_00000004 + 1;
    (in_stack_00000004->base_actor).create_event[0x2c] = '\0';
    (in_stack_00000004->base_actor).create_event[0x2d] = '\0';
    (in_stack_00000004->base_actor).create_event[0x2e] = -0x60;
    (in_stack_00000004->base_actor).create_event[0x2f] = 'A';
    core_zombie_cpp_CZombie_FUN_005fca10();
    return 0;
  }
  if (iVar11 < 1) {
    return 1;
  }
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"%s beginning to pickup %s\n",in_stack_00000004,
             *(undefined4 *)(in_stack_00000004[1].base_actor.create_event + 0x30));
  uVar3 = *(uint *)(in_stack_00000004[1].base_actor.create_event + 0x34);
  if (uVar3 < 2) {
    if (uVar3 != 1) {
LAB_005fbae6:
      g_CurrentFilename = "..\\core\\zombie.cpp";
      g_CurrentLineNumber = 0x5d0;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid zombie object shape!");
      return 1;
    }
  }
  else {
    if (uVar3 < 3) {
      iVar8 = 0xc;
      goto LAB_005fba91;
    }
    if (uVar3 != 3) goto LAB_005fbae6;
  }
  iVar8 = 10;
LAB_005fba91:
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(in_stack_00000004->model).motion_controller,iVar8,1);
  return 1;
}


// Assembly code:
// 005fb530: PUSH EBX
//   Label: core_zombie.cpp_CZombie_PickupSomethingPossibly_FUN_005fb530
// 005fb531: PUSH ESI
// 005fb532: PUSH EDI
// 005fb533: PUSH EBP
// 005fb534: MOV EBP,ESP
// 005fb536: SUB ESP,0x158
// 005fb53c: AND ESP,0xfffffff8
// 005fb53f: MOV ESI,dword ptr [EBP + 0x14]
// 005fb542: CMP dword ptr [ESI + 0xbf88],0x0
// 005fb549: JL 0x005fb5a3
//   XREF to: 005fb5a3 (CONDITIONAL_JUMP)
// 005fb54b: FLD float ptr [ESI + 0xbec4]
// 005fb551: FSUB float ptr [EBP + 0x18]
// 005fb554: FST float ptr [ESI + 0xbec4]
// 005fb55a: FLDZ
// 005fb55c: FCOMPP
// 005fb55e: FNSTSW AX
// 005fb560: SAHF
// 005fb561: JC 0x005fb5ac
//   XREF to: 005fb5ac (CONDITIONAL_JUMP)
// 005fb563: MOV EBX,dword ptr [ESI + 0x24b4]
//   Label: LAB_005fb563
// 005fb569: TEST EBX,EBX
// 005fb56b: JNZ 0x005fb5a3
//   XREF to: 005fb5a3 (CONDITIONAL_JUMP)
// 005fb56d: CMP dword ptr [ESI + 0x24f8],0x0
// 005fb574: JNZ 0x005fb5a3
//   XREF to: 005fb5a3 (CONDITIONAL_JUMP)
// 005fb576: FLD float ptr [ESI + 0xbec8]
// 005fb57c: FLDZ
// 005fb57e: FCOMPP
// 005fb580: FNSTSW AX
// 005fb582: SAHF
// 005fb583: JNC 0x005fb5e1
//   XREF to: 005fb5e1 (CONDITIONAL_JUMP)
// 005fb585: FLD float ptr [ESI + 0xbec8]
// 005fb58b: FSUB float ptr [EBP + 0x18]
// 005fb58e: FST float ptr [ESI + 0xbec8]
// 005fb594: FLDZ
// 005fb596: FCOMPP
// 005fb598: FNSTSW AX
// 005fb59a: SAHF
// 005fb59b: JBE 0x005fb5a3
//   XREF to: 005fb5a3 (CONDITIONAL_JUMP)
// 005fb59d: MOV dword ptr [ESI + 0xbec8],EBX
// 005fb5a3: XOR EAX,EAX
//   Label: LAB_005fb5a3
// 005fb5a5: MOV ESP,EBP
// 005fb5a7: POP EBP
// 005fb5a8: POP EDI
// 005fb5a9: POP ESI
// 005fb5aa: POP EBX
// 005fb5ab: RET
// 005fb5ac: MOV ECX,dword ptr [ESI + 0xbec0]
//   Label: LAB_005fb5ac
// 005fb5b2: PUSH 0x41200000
// 005fb5b7: INC ECX
// 005fb5b8: PUSH 0x40a00000
// 005fb5bd: MOV dword ptr [ESI + 0xbec0],ECX
// 005fb5c3: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 005fb5e1: MOV EAX,dword ptr [ESI + 0xbecc]
//   Label: LAB_005fb5e1
// 005fb5e7: LEA EDI,[ESI + 0x20]
// 005fb5ea: TEST EAX,EAX
// 005fb5ec: JNZ 0x005fb66f
//   XREF to: 005fb66f (CONDITIONAL_JUMP)
// 005fb5f2: MOV dword ptr [ESP + 0x144],EBX
// 005fb5f9: MOV dword ptr [ESP + 0x150],EBX
// 005fb600: MOV dword ptr [ESP + 0x14c],EDI
// 005fb607: MOV dword ptr [ESP + 0x148],EBX
// 005fb60e: XOR EDI,EDI
// 005fb610: MOV EAX,[0x006810c8]
//   Label: LAB_005fb610
//   XREF to: 006810c8 (READ)
// 005fb615: MOV EDX,dword ptr [ESP + 0x150]
// 005fb61c: CMP EDX,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 005fb622: JGE 0x005fbc82
//   XREF to: 005fbc82 (CONDITIONAL_JUMP)
// 005fb628: ADD EAX,dword ptr [ESP + 0x148]
// 005fb62f: MOV EBX,dword ptr [EAX + 0x14d158]
//   XREF to: 032613d0 (DATA)
//   XREF to: 032613d4 (DATA)
// 005fb635: PUSH EBX
// 005fb636: MOV EAX,dword ptr [EBX + 0x154]
// 005fb63c: CALL dword ptr [EAX + 0x8c]
// 005fb642: ADD ESP,0x4
// 005fb645: TEST EAX,EAX
// 005fb647: JZ 0x005fbb15
//   XREF to: 005fbb15 (CONDITIONAL_JUMP)
// 005fb64d: MOV EDX,dword ptr [ESP + 0x150]
//   Label: LAB_005fb64d
// 005fb654: MOV EAX,dword ptr [ESP + 0x148]
// 005fb65b: INC EDX
// 005fb65c: ADD EAX,0x4
// 005fb65f: MOV dword ptr [ESP + 0x150],EDX
// 005fb666: MOV dword ptr [ESP + 0x148],EAX
// 005fb66d: JMP 0x005fb610
//   XREF to: 005fb610 (UNCONDITIONAL_JUMP)
// 005fb66f: PUSH EAX
//   Label: LAB_005fb66f
// 005fb670: MOV EDX,dword ptr [EAX + 0x154]
// 005fb676: CALL dword ptr [EDX + 0x8c]
// 005fb67c: ADD ESP,0x4
// 005fb67f: TEST EAX,EAX
// 005fb681: JNZ 0x005fb90a
//   XREF to: 005fb90a (CONDITIONAL_JUMP)
// 005fb687: MOV EAX,dword ptr [ESI + 0xbecc]
// 005fb68d: FLD float ptr [EDI]
// 005fb68f: FSUB float ptr [EAX + 0x20]
// 005fb692: FMUL ST0
// 005fb694: FLD float ptr [EDI + 0x8]
// 005fb697: FSUB float ptr [EAX + 0x28]
// 005fb69a: FMUL ST0
// 005fb69c: FADDP
// 005fb69e: FSQRT
// 005fb6a0: FMUL double ptr [0x006588fd]
//   XREF to: 006588fd (READ)
// 005fb6a6: FSUBR double ptr [0x00658905]
//   XREF to: 00658905 (READ)
// 005fb6ac: FST float ptr [ESP]
// 005fb6af: FLD1
// 005fb6b1: FCOMPP
// 005fb6b3: FNSTSW AX
// 005fb6b5: SAHF
// 005fb6b6: JBE 0x005fb6bf
//   XREF to: 005fb6bf (CONDITIONAL_JUMP)
// 005fb6b8: MOV dword ptr [ESP],0x3f800000
// 005fb6bf: FLD float ptr [EBP + 0x18]
//   Label: LAB_005fb6bf
// 005fb6c2: FMUL float ptr [ESP]
// 005fb6c5: MOV EAX,dword ptr [ESI + 0xbed0]
// 005fb6cb: MOV EBX,0xffffffff
// 005fb6d0: PUSH EAX
// 005fb6d1: FADD float ptr [ESI + 0xbec8]
// 005fb6d7: PUSH ESI
// 005fb6d8: FSTP float ptr [ESI + 0xbec8]
// 005fb6de: CALL core_zombie.cpp_CZombie_FUN_005fbd00
//   XREF to: 005fbd00 (UNCONDITIONAL_CALL)
// 005fb6e3: ADD ESP,0x8
// 005fb6e6: MOV EDI,EAX
// 005fb6e8: TEST EAX,EAX
// 005fb6ea: JL 0x005fb8f0
//   XREF to: 005fb8f0 (CONDITIONAL_JUMP)
// 005fb6f0: FLD float ptr [ESI + 0xbec8]
// 005fb6f6: FLDZ
// 005fb6f8: FCOMPP
// 005fb6fa: FNSTSW AX
// 005fb6fc: SAHF
// 005fb6fd: JBE 0x005fb8f0
//   XREF to: 005fb8f0 (CONDITIONAL_JUMP)
// 005fb703: PUSH ESI
// 005fb704: MOV EAX,dword ptr [ESI + 0xbecc]
// 005fb70a: PUSH EAX
// 005fb70b: MOV EDX,dword ptr [EAX + 0x154]
// 005fb711: CALL dword ptr [EDX + 0x7c]
// 005fb714: ADD ESP,0x8
// 005fb717: CMP EAX,0x3
// 005fb71a: JNZ 0x005fb8f0
//   XREF to: 005fb8f0 (CONDITIONAL_JUMP)
// 005fb720: MOV EDX,dword ptr [ESI + 0xbed0]
// 005fb726: PUSH EDX
// 005fb727: PUSH ESI
// 005fb728: CALL core_zombie.cpp_CZombie_FUN_005fbda0
//   XREF to: 005fbda0 (UNCONDITIONAL_CALL)
// 005fb72d: ADD ESP,0x8
// 005fb730: TEST EAX,EAX
// 005fb732: JZ 0x005fb8f0
//   XREF to: 005fb8f0 (CONDITIONAL_JUMP)
// 005fb738: MOV EAX,dword ptr [ESI + 0xbed0]
// 005fb73e: CMP EAX,0x2
// 005fb741: JNC 0x005fba09
//   XREF to: 005fba09 (CONDITIONAL_JUMP)
// 005fb747: CMP EAX,0x1
// 005fb74a: JNZ 0x005fba18
//   XREF to: 005fba18 (CONDITIONAL_JUMP)
// 005fb750: LEA EAX,[ESP + 0x88]
//   Label: LAB_005fb750
// 005fb757: MOV EBX,dword ptr [ESI + 0xbecc]
// 005fb75d: PUSH EAX
// 005fb75e: MOV EDX,dword ptr [EBX + 0x154]
// 005fb764: PUSH EBX
// 005fb765: CALL dword ptr [EDX + 0x14]
// 005fb768: MOV EAX,0x3f000000
// 005fb76d: ADD ESP,0x8
// 005fb770: MOV dword ptr [ESP + 0x13c],EAX
// 005fb777: LEA EAX,[ESP + 0x13c]
// 005fb77e: PUSH EAX
// 005fb77f: LEA EAX,[ESP + 0xec]
// 005fb786: PUSH EAX
// 005fb787: LEA EAX,[ESP + 0x9c]
// 005fb78e: PUSH EAX
// 005fb78f: LEA EAX,[ESP + 0xc4]
// 005fb796: PUSH EAX
// 005fb797: LEA EAX,[ESP + 0x98]
// 005fb79e: PUSH EAX
// 005fb79f: CALL core_bodypart.cpp_FUN_0041b540
//   XREF to: 0041b540 (UNCONDITIONAL_CALL)
// 005fb7a4: ADD ESP,0xc
// 005fb7a7: PUSH EAX
// 005fb7a8: CALL core_bodypart.cpp_FUN_0041b4e0
//   XREF to: 0041b4e0 (UNCONDITIONAL_CALL)
// 005fb7ad: ADD ESP,0xc
// 005fb7b0: LEA EAX,[ESP + 0xe8]
// 005fb7b7: PUSH EAX
// 005fb7b8: LEA EAX,[ESP + 0x128]
// 005fb7bf: FLD float ptr [ESP + 0x94]
// 005fb7c6: PUSH EAX
// 005fb7c7: FADD double ptr [0x0065890d]
//   XREF to: 0065890d (READ)
// 005fb7cd: PUSH EBX
// 005fb7ce: FSTP float ptr [ESP + 0xfc]
// 005fb7d5: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005fb7da: LEA EAX,[ESP + 0x130]
// 005fb7e1: LEA EDX,[ESP + 0xd0]
// 005fb7e8: ADD ESP,0xc
// 005fb7eb: CMP EDX,EAX
// 005fb7ed: JZ 0x005fb819
//   XREF to: 005fb819 (CONDITIONAL_JUMP)
// 005fb7ef: MOV EAX,dword ptr [ESP + 0x124]
// 005fb7f6: MOV dword ptr [ESP + 0xc4],EAX
// 005fb7fd: MOV EAX,dword ptr [ESP + 0x128]
// 005fb804: MOV dword ptr [ESP + 0xc8],EAX
// 005fb80b: MOV EAX,dword ptr [ESP + 0x12c]
// 005fb812: MOV dword ptr [ESP + 0xcc],EAX
//   Label: LAB_005fb812
// 005fb819: MOV EAX,[0x03f87558]
//   Label: LAB_005fb819
//   XREF to: 03f87558 (READ)
// 005fb81e: MOV dword ptr [ESP + 0xa0],EAX
// 005fb825: MOV EAX,[0x03f8755c]
//   XREF to: 03f8755c (READ)
// 005fb82a: MOV dword ptr [ESP + 0xa4],EAX
// 005fb831: MOV EAX,[0x03f87560]
//   XREF to: 03f87560 (READ)
// 005fb836: MOV dword ptr [ESP + 0xa8],EAX
// 005fb83d: TEST EDI,EDI
// 005fb83f: JNZ 0x005fb887
//   XREF to: 005fb887 (CONDITIONAL_JUMP)
// 005fb841: MOV EDX,0xbfc00000
// 005fb846: LEA EAX,[ESP + 0xa0]
// 005fb84d: MOV dword ptr [ESP + 0xf8],EDI
// 005fb854: MOV dword ptr [ESP + 0xf4],EDX
// 005fb85b: LEA EDX,[ESP + 0xf4]
// 005fb862: MOV dword ptr [ESP + 0xfc],EDI
// 005fb869: CMP EAX,EDX
// 005fb86b: JZ 0x005fb887
//   XREF to: 005fb887 (CONDITIONAL_JUMP)
// 005fb86d: MOV EAX,0xbfc00000
// 005fb872: MOV dword ptr [ESP + 0xa4],EDI
// 005fb879: MOV dword ptr [ESP + 0xa8],EDI
// 005fb880: MOV dword ptr [ESP + 0xa0],EAX
// 005fb887: CMP EDI,0x1
//   Label: LAB_005fb887
// 005fb88a: JNZ 0x005fb8cf
//   XREF to: 005fb8cf (CONDITIONAL_JUMP)
// 005fb88c: MOV EBX,0x3fc00000
// 005fb891: LEA EDX,[ESP + 0xd0]
// 005fb898: XOR EDI,EDI
// 005fb89a: LEA EAX,[ESP + 0xa0]
// 005fb8a1: MOV dword ptr [ESP + 0xd4],EDI
// 005fb8a8: MOV dword ptr [ESP + 0xd8],EDI
// 005fb8af: MOV dword ptr [ESP + 0xd0],EBX
// 005fb8b6: CMP EAX,EDX
// 005fb8b8: JZ 0x005fb8cf
//   XREF to: 005fb8cf (CONDITIONAL_JUMP)
// 005fb8ba: MOV dword ptr [ESP + 0xa4],EDI
// 005fb8c1: MOV dword ptr [ESP + 0xa8],EDI
// 005fb8c8: MOV dword ptr [ESP + 0xa0],EBX
// 005fb8cf: PUSH 0x0
//   Label: LAB_005fb8cf
// 005fb8d1: LEA EAX,[ESP + 0xa4]
// 005fb8d8: PUSH 0x0
// 005fb8da: PUSH EAX
// 005fb8db: PUSH 0x0
// 005fb8dd: LEA EAX,[ESP + 0xd4]
// 005fb8e4: PUSH EAX
// 005fb8e5: PUSH ESI
// 005fb8e6: CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
//   XREF to: 004286e0 (UNCONDITIONAL_CALL)
// 005fb8eb: ADD ESP,0x18
// 005fb8ee: MOV EBX,EAX
// 005fb8f0: TEST EBX,EBX
//   Label: LAB_005fb8f0
// 005fb8f2: JL 0x005fba4b
//   XREF to: 005fba4b (CONDITIONAL_JUMP)
// 005fb8f8: JG 0x005fbab2
//   XREF to: 005fbab2 (CONDITIONAL_JUMP)
// 005fb8fe: MOV EAX,0x1
// 005fb903: MOV ESP,EBP
// 005fb905: POP EBP
// 005fb906: POP EDI
// 005fb907: POP ESI
// 005fb908: POP EBX
// 005fb909: RET
// 005fb90a: MOV EAX,dword ptr [ESI + 0xbecc]
//   Label: LAB_005fb90a
// 005fb910: PUSH EAX
// 005fb911: PUSH ESI
// 005fb912: PUSH 0x65882d
//   XREF to: 0065882d (DATA)
// 005fb917: MOV EDX,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 005fb91d: PUSH EDX
//   XREF to: 0083b1a4 (DATA)
// 005fb91e: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005fb923: ADD ESP,0x10
// 005fb926: MOV dword ptr [ESI + 0xbecc],EBX
// 005fb92c: PUSH ESI
// 005fb92d: MOV dword ptr [ESI + 0xbec8],EBX
// 005fb933: CALL core_zombie.cpp_CZombie_FUN_005fca10
//   XREF to: 005fca10 (UNCONDITIONAL_CALL)
// 005fb938: ADD ESP,0x4
// 005fb93b: XOR EAX,EAX
// 005fb93d: MOV ESP,EBP
// 005fb93f: POP EBP
// 005fb940: POP EDI
// 005fb941: POP ESI
// 005fb942: POP EBX
// 005fb943: RET
// 005fb944: LEA EDX,[ESP + 0x70]
//   Label: LAB_005fb944
// 005fb948: MOV EBX,dword ptr [ESI + 0xbecc]
// 005fb94e: PUSH EDX
// 005fb94f: MOV EAX,dword ptr [EBX + 0x154]
// 005fb955: PUSH EBX
// 005fb956: CALL dword ptr [EAX + 0x14]
// 005fb959: ADD ESP,0x8
// 005fb95c: LEA EAX,[ESP + 0x138]
// 005fb963: PUSH EAX
// 005fb964: LEA EAX,[ESP + 0xb0]
// 005fb96b: PUSH EAX
// 005fb96c: LEA EAX,[ESP + 0x84]
// 005fb973: PUSH EAX
// 005fb974: LEA EAX,[ESP + 0x10c]
// 005fb97b: PUSH EAX
// 005fb97c: LEA EAX,[ESP + 0x80]
// 005fb983: MOV ECX,0x3f000000
// 005fb988: PUSH EAX
// 005fb989: MOV dword ptr [ESP + 0x14c],ECX
// 005fb990: CALL core_bodypart.cpp_FUN_0041b540
//   XREF to: 0041b540 (UNCONDITIONAL_CALL)
// 005fb995: ADD ESP,0xc
// 005fb998: PUSH EAX
// 005fb999: CALL core_bodypart.cpp_FUN_0041b4e0
//   XREF to: 0041b4e0 (UNCONDITIONAL_CALL)
// 005fb99e: ADD ESP,0xc
// 005fb9a1: LEA EAX,[ESP + 0xac]
// 005fb9a8: PUSH EAX
// 005fb9a9: LEA EAX,[ESP + 0x11c]
// 005fb9b0: FLD float ptr [ESP + 0x7c]
// 005fb9b4: PUSH EAX
// 005fb9b5: FADD double ptr [0x0065890d]
//   XREF to: 0065890d (READ)
// 005fb9bb: PUSH EBX
// 005fb9bc: FSTP float ptr [ESP + 0xc0]
// 005fb9c3: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005fb9c8: LEA EDX,[ESP + 0x124]
// 005fb9cf: LEA EAX,[ESP + 0xd0]
// 005fb9d6: ADD ESP,0xc
// 005fb9d9: CMP EAX,EDX
// 005fb9db: JZ 0x005fb819
//   XREF to: 005fb819 (CONDITIONAL_JUMP)
// 005fb9e1: MOV EAX,dword ptr [ESP + 0x118]
// 005fb9e8: MOV dword ptr [ESP + 0xc4],EAX
// 005fb9ef: MOV EAX,dword ptr [ESP + 0x11c]
// 005fb9f6: MOV dword ptr [ESP + 0xc8],EAX
// 005fb9fd: MOV EAX,dword ptr [ESP + 0x120]
// 005fba04: JMP 0x005fb812
//   XREF to: 005fb812 (UNCONDITIONAL_JUMP)
// 005fba09: JBE 0x005fb944
//   Label: LAB_005fba09
//   XREF to: 005fb944 (CONDITIONAL_JUMP)
// 005fba0f: CMP EAX,0x3
// 005fba12: JZ 0x005fb750
//   XREF to: 005fb750 (CONDITIONAL_JUMP)
// 005fba18: MOV EDX,dword ptr [ESI + 0xbecc]
//   Label: LAB_005fba18
// 005fba1e: LEA EAX,[ESP + 0xc4]
// 005fba25: ADD EDX,0x20
// 005fba28: CMP EAX,EDX
// 005fba2a: JZ 0x005fb819
//   XREF to: 005fb819 (CONDITIONAL_JUMP)
// 005fba30: MOV EAX,dword ptr [EDX]
// 005fba32: MOV dword ptr [ESP + 0xc4],EAX
// 005fba39: MOV EAX,dword ptr [EDX + 0x4]
// 005fba3c: MOV dword ptr [ESP + 0xc8],EAX
// 005fba43: MOV EAX,dword ptr [EDX + 0x8]
// 005fba46: JMP 0x005fb812
//   XREF to: 005fb812 (UNCONDITIONAL_JUMP)
// 005fba4b: MOV EBX,dword ptr [ESI + 0xbecc]
//   Label: LAB_005fba4b
// 005fba51: PUSH EBX
// 005fba52: PUSH ESI
// 005fba53: PUSH 0x65885f
//   XREF to: 0065885f (DATA)
// 005fba58: MOV EDI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 005fba5e: PUSH EDI
//   XREF to: 0083b1a4 (DATA)
// 005fba5f: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005fba64: ADD ESP,0x10
// 005fba67: MOV dword ptr [ESI + 0xbecc],0x0
// 005fba71: PUSH ESI
// 005fba72: MOV dword ptr [ESI + 0xbec8],0x41a00000
// 005fba7c: CALL core_zombie.cpp_CZombie_FUN_005fca10
//   XREF to: 005fca10 (UNCONDITIONAL_CALL)
// 005fba81: ADD ESP,0x4
// 005fba84: XOR EAX,EAX
// 005fba86: MOV ESP,EBP
// 005fba88: POP EBP
// 005fba89: POP EDI
// 005fba8a: POP ESI
// 005fba8b: POP EBX
// 005fba8c: RET
// 005fba8d: PUSH 0x1
//   Label: LAB_005fba8d
// 005fba8f: PUSH 0xa
// 005fba91: ADD ESI,0x158
//   Label: LAB_005fba91
// 005fba97: PUSH ESI
// 005fba98: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005fba9d: ADD ESP,0xc
// 005fbaa0: MOV EAX,0x1
// 005fbaa5: MOV ESP,EBP
// 005fbaa7: POP EBP
// 005fbaa8: POP EDI
// 005fbaa9: POP ESI
// 005fbaaa: POP EBX
// 005fbaab: RET
// 005fbaac: PUSH 0x1
//   Label: LAB_005fbaac
// 005fbaae: PUSH 0xc
// 005fbab0: JMP 0x005fba91
//   XREF to: 005fba91 (UNCONDITIONAL_JUMP)
// 005fbab2: MOV EDI,dword ptr [ESI + 0xbecc]
//   Label: LAB_005fbab2
// 005fbab8: PUSH EDI
// 005fbab9: PUSH ESI
// 005fbaba: PUSH 0x65887f
//   XREF to: 0065887f (DATA)
// 005fbabf: MOV EAX,[0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 005fbac4: PUSH EAX
//   XREF to: 0083b1a4 (DATA)
// 005fbac5: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005fbaca: MOV EAX,dword ptr [ESI + 0xbed0]
// 005fbad0: ADD ESP,0x10
// 005fbad3: CMP EAX,0x2
// 005fbad6: JNC 0x005fbadf
//   XREF to: 005fbadf (CONDITIONAL_JUMP)
// 005fbad8: CMP EAX,0x1
// 005fbadb: JZ 0x005fba8d
//   XREF to: 005fba8d (CONDITIONAL_JUMP)
// 005fbadd: JMP 0x005fbae6
//   XREF to: 005fbae6 (UNCONDITIONAL_JUMP)
// 005fbadf: JBE 0x005fbaac
//   Label: LAB_005fbadf
//   XREF to: 005fbaac (CONDITIONAL_JUMP)
// 005fbae1: CMP EAX,0x3
// 005fbae4: JZ 0x005fba8d
//   XREF to: 005fba8d (CONDITIONAL_JUMP)
// 005fbae6: MOV EDX,0x65889a
//   Label: LAB_005fbae6
//   XREF to: 0065889a (DATA)
// 005fbaeb: MOV ECX,0x5d0
// 005fbaf0: PUSH 0x6588ad
//   XREF to: 006588ad (DATA)
// 005fbaf5: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005fbafb: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005fbb01: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005fbb06: ADD ESP,0x4
// 005fbb09: MOV EAX,0x1
// 005fbb0e: MOV ESP,EBP
// 005fbb10: POP EBP
// 005fbb11: POP EDI
// 005fbb12: POP ESI
// 005fbb13: POP EBX
// 005fbb14: RET
// 005fbb15: PUSH ESI
//   Label: LAB_005fbb15
// 005fbb16: MOV EAX,dword ptr [EBX + 0x154]
// 005fbb1c: PUSH EBX
// 005fbb1d: CALL dword ptr [EAX + 0x7c]
// 005fbb20: ADD ESP,0x8
// 005fbb23: CMP EAX,0x3
// 005fbb26: JNZ 0x005fb64d
//   XREF to: 005fb64d (CONDITIONAL_JUMP)
// 005fbb2c: LEA EDX,[ESP + 0x58]
// 005fbb30: PUSH EDX
// 005fbb31: MOV EAX,dword ptr [EBX + 0x154]
// 005fbb37: PUSH EBX
// 005fbb38: CALL dword ptr [EAX + 0x14]
// 005fbb3b: LEA EDX,[EAX + 0xc]
// 005fbb3e: FLD float ptr [EDX]
// 005fbb40: FSUB float ptr [EAX]
// 005fbb42: ADD ESP,0x8
// 005fbb45: FSTP float ptr [ESP + 0x10c]
// 005fbb4c: FLD float ptr [EDX + 0x4]
// 005fbb4f: FSUB float ptr [EAX + 0x4]
// 005fbb52: FSTP float ptr [ESP + 0x110]
// 005fbb59: FLD float ptr [EDX + 0x8]
// 005fbb5c: FSUB float ptr [EAX + 0x8]
// 005fbb5f: LEA EAX,[ESP + 0x10c]
// 005fbb66: PUSH EAX
// 005fbb67: FSTP float ptr [ESP + 0x118]
// 005fbb6e: CALL core_zombie.cpp_CZombie_FUN_005f8e50
//   XREF to: 005f8e50 (UNCONDITIONAL_CALL)
// 005fbb73: ADD ESP,0x4
// 005fbb76: MOV dword ptr [ESP + 0x140],EAX
// 005fbb7d: TEST EAX,EAX
// 005fbb7f: JZ 0x005fb64d
//   XREF to: 005fb64d (CONDITIONAL_JUMP)
// 005fbb85: PUSH EAX
// 005fbb86: PUSH ESI
// 005fbb87: CALL core_zombie.cpp_CZombie_FUN_005fbda0
//   XREF to: 005fbda0 (UNCONDITIONAL_CALL)
// 005fbb8c: ADD ESP,0x8
// 005fbb8f: TEST EAX,EAX
// 005fbb91: JZ 0x005fb64d
//   XREF to: 005fb64d (CONDITIONAL_JUMP)
// 005fbb97: PUSH 0x6588ca
//   XREF to: 006588ca (DATA)
// 005fbb9c: PUSH EBX
// 005fbb9d: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 005fbba2: ADD ESP,0x8
// 005fbba5: TEST EAX,EAX
// 005fbba7: JZ 0x005fbbc0
//   XREF to: 005fbbc0 (CONDITIONAL_JUMP)
// 005fbba9: MOV EDX,dword ptr [ESI + 0xbec0]
// 005fbbaf: MOV EAX,dword ptr [EBX + 0x6c]
// 005fbbb2: AND EDX,0x3
// 005fbbb5: AND EAX,0x3
// 005fbbb8: CMP EAX,EDX
// 005fbbba: JNZ 0x005fb64d
//   XREF to: 005fb64d (CONDITIONAL_JUMP)
// 005fbbc0: LEA EAX,[EBX + 0x20]
//   Label: LAB_005fbbc0
// 005fbbc3: MOV EDX,dword ptr [ESP + 0x14c]
// 005fbbca: FLD float ptr [EAX]
// 005fbbcc: FSUB float ptr [EDX]
// 005fbbce: FSTP float ptr [ESP + 0xdc]
// 005fbbd5: FLD float ptr [EAX + 0x4]
// 005fbbd8: FSUB float ptr [EDX + 0x4]
// 005fbbdb: FST float ptr [ESP + 0xe0]
// 005fbbe2: FMUL float ptr [ESP + 0xe0]
// 005fbbe9: FLD float ptr [EAX + 0x8]
// 005fbbec: FSUB float ptr [EDX + 0x8]
// 005fbbef: FXCH
// 005fbbf1: FST float ptr [ESP + 0xe0]
// 005fbbf8: FMUL float ptr [ESP + 0xe0]
// 005fbbff: FST float ptr [ESP + 0xe0]
// 005fbc06: FMUL float ptr [ESP + 0xe0]
// 005fbc0d: FLD float ptr [ESP + 0xdc]
// 005fbc14: FMUL ST0
// 005fbc16: FADDP
// 005fbc18: FXCH
// 005fbc1a: FST float ptr [ESP + 0xe4]
// 005fbc21: FMUL float ptr [ESP + 0xe4]
// 005fbc28: FADDP
// 005fbc2a: FSQRT
// 005fbc2c: FST float ptr [ESP + 0x4]
// 005fbc30: FCOMP double ptr [0x00658905]
//   XREF to: 00658905 (READ)
// 005fbc36: FNSTSW AX
// 005fbc38: SAHF
// 005fbc39: JC 0x005fb64d
//   XREF to: 005fb64d (CONDITIONAL_JUMP)
// 005fbc3f: FLD float ptr [ESI + 0xbebc]
// 005fbc45: FMUL float ptr [0x00658915]
//   XREF to: 00658915 (READ)
// 005fbc4b: FCOMP float ptr [ESP + 0x4]
// 005fbc4f: FNSTSW AX
// 005fbc51: SAHF
// 005fbc52: JC 0x005fb64d
//   XREF to: 005fb64d (CONDITIONAL_JUMP)
// 005fbc58: MOV EAX,dword ptr [ESP + 0x140]
// 005fbc5f: MOV dword ptr [ESP + EDI*0x1 + 0x30],EAX
// 005fbc63: MOV EAX,dword ptr [ESP + 0x144]
// 005fbc6a: ADD EDI,0x4
// 005fbc6d: INC EAX
// 005fbc6e: MOV dword ptr [ESP + EDI*0x1 + 0x4],EBX
// 005fbc72: MOV dword ptr [ESP + 0x144],EAX
// 005fbc79: CMP EDI,0x28
// 005fbc7c: JL 0x005fb64d
//   XREF to: 005fb64d (CONDITIONAL_JUMP)
// 005fbc82: MOV EDX,dword ptr [ESP + 0x144]
//   Label: LAB_005fbc82
// 005fbc89: CMP EDX,0x1
// 005fbc8c: JL 0x005fb5a3
//   XREF to: 005fb5a3 (CONDITIONAL_JUMP)
// 005fbc92: LEA EAX,[EDX + -0x1]
// 005fbc95: PUSH EAX
// 005fbc96: PUSH 0x0
// 005fbc98: CALL core_actor.cpp_getRandomInt_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 005fbc9d: ADD ESP,0x8
// 005fbca0: MOV EDX,dword ptr [ESP + EAX*0x4 + 0x8]
// 005fbca4: MOV dword ptr [ESI + 0xbecc],EDX
// 005fbcaa: MOV EBX,dword ptr [ESI + 0xbecc]
// 005fbcb0: MOV ECX,dword ptr [ESI + 0xbec0]
// 005fbcb6: PUSH EBX
// 005fbcb7: MOV EAX,dword ptr [ESP + EAX*0x4 + 0x34]
// 005fbcbb: MOV dword ptr [ESI + 0xbec8],0xc2200000
// 005fbcc5: PUSH ESI
// 005fbcc6: INC ECX
// 005fbcc7: MOV dword ptr [ESI + 0xbed0],EAX
// 005fbccd: PUSH 0x6588d4
//   XREF to: 006588d4 (DATA)
// 005fbcd2: MOV dword ptr [ESI + 0xbec0],ECX
// 005fbcd8: MOV ESI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 005fbcde: PUSH ESI
//   XREF to: 0083b1a4 (DATA)
// 005fbcdf: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005fbce4: MOV EAX,0x1
// 005fbce9: ADD ESP,0x10
// 005fbcec: MOV ESP,EBP
// 005fbcee: POP EBP
// 005fbcef: POP EDI
// 005fbcf0: POP ESI
// 005fbcf1: POP EBX
// 005fbcf2: RET
