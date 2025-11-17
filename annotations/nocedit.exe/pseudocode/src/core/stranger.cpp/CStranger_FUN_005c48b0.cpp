// Name: core_stranger.cpp_CStranger_FUN_005c48b0
// Address: 005c48b0
// Address Range: [[005c48b0, 005c4b51] [005c4b7c, 005c4c15]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c48b0()
// Globals:
//   TerminatedCString s_CBugs_00653d1c
//   TerminatedCString s_Using_auto_health_00653d22
//   TerminatedCString s_hit_points_3_2f_00653d35
//   TerminatedCString s_stranger_die_wav_00653d48
//   TerminatedCString s_stranger_hit_wav_00653d5b
//   undefined4 DAT_00663738
//   CConsole* g_CConsolePtr = 0083b1a4
//   CGame* g_CGamePtr = 02d81a9c
//   CGore* g_CGorePtr = 02d83364
//   CConsole g_ConsolePtr
//   CGame g_CGameInstance
//   undefined4 DAT_02d81b64
//   undefined4 DAT_02d81c6c
//   undefined4 DAT_02d81cc8
//   CGore g_CGoreInstance
//   undefined4 g_CTommyGunClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_actor.cpp_randomChance_FUN_0040cd10
//   core_charactr.cpp_CCharacter_FUN_0042c3c0
//   core_game.cpp_CGame_FUN_004e0bd0
//   core_gore.cpp_CGore_FUN_004ee030
//   core_hero.cpp_FUN_004f3580
//   core_inv.cpp_CInventory_autoUseHealthItem_FUN_00501570
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   sound_sndmain.cpp_FUN_005a9660
//   sound_sndmain.cpp_FUN_005a9c40

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_hero_stranger.cpp_CStranger_FUN_005c48b0(undefined4 param_1,
   undefined4 param_2) */

void core_stranger_cpp_CStranger_FUN_005c48b0
               (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4,
               CCharacter *param_5,int param_6)

{
  CDeformableModelInstance *this_ptr;
  CDemonActor_vtable *pCVar1;
  CConsole *this_ptr_00;
  CGame *pCVar2;
  int iVar3;
  SMotion *pSVar4;
  undefined4 uVar5;
  float fVar6;
  CDemonActor *pCVar7;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  float unaff_retaddr;
  int in_stack_ffffffc4;
  undefined8 uVar8;
  
  uVar8 = CONCAT44(unaff_ESI,unaff_EDI);
  if (g_CGamePtr->field53_0x1d0 != 0) {
    *(undefined4 *)(param_6 + 4) = 0;
  }
  if (g_CGamePtr->allow_damage_flag == 0) {
    *(undefined4 *)(param_6 + 4) = 0;
  }
  core_hero_cpp_FUN_004f3580();
  if ((0.0 < *(float *)param_5[1].base_actor.actor_name) && (0xb < *(int *)(param_6 + 0x30))) {
    *(undefined4 *)(param_6 + 4) = 0;
    return;
  }
  *(undefined4 *)param_5[1].base_actor.actor_name = _DAT_00663738;
  iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0(*(CDemonActor **)(param_6 + 0x38),"CBugs");
  if (iVar3 != 0) {
    param_5[1].base_actor.actor_name[0] = -0x66;
    param_5[1].base_actor.actor_name[1] = -0x67;
    param_5[1].base_actor.actor_name[2] = '\x19';
    param_5[1].base_actor.actor_name[3] = '>';
  }
  pCVar2 = g_CGamePtr;
  param_5->hit_points = param_5->hit_points - *(float *)(param_6 + 4);
  this_ptr_00 = g_CConsolePtr;
  if (((pCVar2->auto_use_health != 0) && (0xb < *(int *)(param_6 + 0x30))) &&
     (param_5->hit_points <= 0.0)) {
    param_5->hit_points = 0.0;
    engine_console_cpp_CConsole_printf_FUN_00441890
              (this_ptr_00,"Using auto health\n",uVar8,unaff_EBX);
    core_inv_cpp_CInventory_autoUseHealthItem_FUN_00501570
              ((CInventory *)(param_5[2].cloth_data + 0x5058));
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"hit points: %3.2f\n",(double)param_5->hit_points);
  }
  this_ptr = &param_5->model;
  if (param_5->hit_points <= 0.0) {
    pCVar1 = (param_5->base_actor).vtable;
    param_5->hit_points = 0.0;
    (*pCVar1[1].processFootstep)(&param_5->base_actor,unaff_retaddr);
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr->motion_controller);
    if (pSVar4->state_index != 0x29) {
      pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&this_ptr->motion_controller);
      if (pSVar4->state_index != 0x28) {
        if ((*(int *)(param_5[2].cloth_data + 0x54cc) == 0) &&
           (*(int *)(param_5[2].cloth_data + 0x5548) == 0)) {
          if (*(int *)(param_6 + 0x30) == 1) {
            iVar3 = 1;
          }
          else {
            fVar6 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,100.0);
            iVar3 = (fVar6 <= FLOAT_00653d70) + 0x25;
          }
        }
        else {
          iVar3 = 1;
          param_5[2].cloth_data[0x54cc] = '\0';
          param_5[2].cloth_data[0x54cd] = '\0';
          param_5[2].cloth_data[0x54ce] = '\0';
          param_5[2].cloth_data[0x54cf] = '\0';
          param_5[2].cloth_data[0x5548] = '\0';
          param_5[2].cloth_data[0x5549] = '\0';
          param_5[2].cloth_data[0x554a] = '\0';
          param_5[2].cloth_data[0x554b] = '\0';
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(param_5->model).motion_controller,iVar3,in_stack_ffffffc4);
        sound_sndmain_cpp_FUN_005a9c40();
        if (*(int *)(param_6 + 0x30) != 1) {
          uVar5 = (*((param_5->base_actor).vtable)->playSound)
                            (&param_5->base_actor,"stranger_die??.wav");
          *(undefined4 *)(param_5[2].cloth_data + 0x5788) = uVar5;
        }
        core_gore_cpp_CGore_FUN_004ee030(g_CGorePtr,&param_5->base_actor);
      }
    }
    if (*(CDemonActor **)(param_5[2].cloth_data + 0x554c) == param_5->carry_hands[0].carry_actor) {
      param_5[2].cloth_data[0x554c] = '\0';
      param_5[2].cloth_data[0x554d] = '\0';
      param_5[2].cloth_data[0x554e] = '\0';
      param_5[2].cloth_data[0x554f] = '\0';
    }
    (*(param_5->base_actor).vtable[1].renderTargetPoints)(&param_5->base_actor);
    if (param_5->carry_hands[1].carry_actor == *(CDemonActor **)(param_5[2].cloth_data + 0x554c)) {
      param_5[2].cloth_data[0x554c] = '\0';
      param_5[2].cloth_data[0x554d] = '\0';
      param_5[2].cloth_data[0x554e] = '\0';
      param_5[2].cloth_data[0x554f] = '\0';
    }
    (*(param_5->base_actor).vtable[1].renderTargetPoints)(&param_5->base_actor);
    goto LAB_005c4ae0;
  }
  if (*(float *)(param_6 + 4) <= 0.0) goto LAB_005c4ae0;
  if (((*(int *)(param_6 + 0x30) != 0x69) && (*(int *)(param_5[2].cloth_data + 0x54cc) == 0)) &&
     ((*(int *)(param_5[2].cloth_data + 0x5548) == 0 &&
      (*(int *)(param_5[2].cloth_data + 0x5558) == 0)))) {
    pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(param_6 + 0x34),g_CTommyGunClassInfo.name_hash);
    if (pCVar7 != (CDemonActor *)0x0) {
      iVar3 = core_actor_cpp_randomChance_FUN_0040cd10(0.333);
      if (iVar3 == 0) goto LAB_005c4be2;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr->motion_controller,0x24,1);
  }
LAB_005c4be2:
  iVar3 = sound_sndmain_cpp_FUN_005a9660();
  if (iVar3 == 0) {
    uVar5 = (*((param_5->base_actor).vtable)->playSound)
                      (&param_5->base_actor,"stranger_hit??.wav");
    *(undefined4 *)(param_5[2].cloth_data + 0x5788) = uVar5;
  }
LAB_005c4ae0:
  if (0.0 < *(float *)(param_6 + 4)) {
    core_game_cpp_CGame_FUN_004e0bd0(g_CGamePtr);
  }
  core_charactr_cpp_CCharacter_FUN_0042c3c0(param_5);
  return;
}


// Assembly code:
// 005c48b0: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005c48b0
// 005c48b1: PUSH ESI
// 005c48b2: PUSH EDI
// 005c48b3: PUSH EBP
// 005c48b4: MOV EBP,ESP
// 005c48b6: SUB ESP,0x4
// 005c48b9: MOV EBX,dword ptr [EBP + 0x14]
// 005c48bc: MOV ESI,dword ptr [EBP + 0x18]
// 005c48bf: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 005c48c4: CMP dword ptr [EAX + 0x1d0],0x0
//   XREF to: 02d81c6c (READ)
// 005c48cb: JNZ 0x005c4b0c
//   XREF to: 005c4b0c (CONDITIONAL_JUMP)
// 005c48d1: MOV EAX,[0x0067b654]
//   Label: LAB_005c48d1
//   XREF to: 0067b654 (READ)
//   XREF to: 02d81a9c (PARAM)
// 005c48d6: MOV ECX,dword ptr [EAX + 0x22c]
//   XREF to: 02d81cc8 (READ)
// 005c48dc: TEST ECX,ECX
// 005c48de: JNZ 0x005c48e3
//   XREF to: 005c48e3 (CONDITIONAL_JUMP)
// 005c48e0: MOV dword ptr [ESI + 0x4],ECX
// 005c48e3: PUSH EBX
//   Label: LAB_005c48e3
// 005c48e4: CALL core_hero.cpp_FUN_004f3580
//   XREF to: 004f3580 (UNCONDITIONAL_CALL)
// 005c48e9: FLD float ptr [EBX + 0xbe24]
// 005c48ef: FLDZ
// 005c48f1: ADD ESP,0x4
// 005c48f4: FCOMPP
// 005c48f6: FNSTSW AX
// 005c48f8: SAHF
// 005c48f9: JNC 0x005c4905
//   XREF to: 005c4905 (CONDITIONAL_JUMP)
// 005c48fb: CMP dword ptr [ESI + 0x30],0xb
// 005c48ff: JG 0x005c4b18
//   XREF to: 005c4b18 (CONDITIONAL_JUMP)
// 005c4905: FLD float ptr [0x00663738]
//   Label: LAB_005c4905
//   XREF to: 00663738 (READ)
// 005c490b: PUSH 0x653d1c
//   XREF to: 00653d1c (DATA)
// 005c4910: FSTP float ptr [EBX + 0xbe24]
// 005c4916: MOV EAX,dword ptr [ESI + 0x38]
// 005c4919: PUSH EAX
// 005c491a: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 005c491f: ADD ESP,0x8
// 005c4922: TEST EAX,EAX
// 005c4924: JZ 0x005c4930
//   XREF to: 005c4930 (CONDITIONAL_JUMP)
// 005c4926: MOV dword ptr [EBX + 0xbe24],0x3e19999a
// 005c4930: FLD float ptr [ESI + 0x4]
//   Label: LAB_005c4930
// 005c4933: FSUBR float ptr [EBX + 0x243c]
// 005c4939: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 005c493e: FSTP float ptr [EBX + 0x243c]
// 005c4944: CMP dword ptr [EAX + 0xc8],0x0
//   XREF to: 02d81b64 (READ)
// 005c494b: JZ 0x005c49ae
//   XREF to: 005c49ae (CONDITIONAL_JUMP)
// 005c494d: CMP dword ptr [ESI + 0x30],0xb
// 005c4951: JLE 0x005c49ae
//   XREF to: 005c49ae (CONDITIONAL_JUMP)
// 005c4953: FLD float ptr [EBX + 0x243c]
// 005c4959: FLDZ
// 005c495b: FCOMPP
// 005c495d: FNSTSW AX
// 005c495f: SAHF
// 005c4960: JC 0x005c49ae
//   XREF to: 005c49ae (CONDITIONAL_JUMP)
// 005c4962: PUSH 0x653d22
//   XREF to: 00653d22 (DATA)
// 005c4967: MOV EDI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 005c496d: PUSH EDI
//   XREF to: 0083b1a4 (DATA)
// 005c496e: MOV dword ptr [EBX + 0x243c],0x0
// 005c4978: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005c497d: ADD ESP,0x8
// 005c4980: LEA EAX,[EBX + 0x1f738]
// 005c4986: PUSH EAX
// 005c4987: CALL core_inv.cpp_CInventory_autoUseHealthItem_FUN_00501570
//   XREF to: 00501570 (UNCONDITIONAL_CALL)
// 005c498c: ADD ESP,0x4
// 005c498f: SUB ESP,0x8
// 005c4992: FLD float ptr [EBX + 0x243c]
// 005c4998: FSTP double ptr [ESP]
// 005c499b: PUSH 0x653d35
//   XREF to: 00653d35 (DATA)
// 005c49a0: MOV EAX,[0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 005c49a5: PUSH EAX
//   XREF to: 0083b1a4 (DATA)
// 005c49a6: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005c49ab: ADD ESP,0x10
// 005c49ae: FLD float ptr [EBX + 0x243c]
//   Label: LAB_005c49ae
// 005c49b4: FLDZ
// 005c49b6: LEA EDI,[EBX + 0x158]
// 005c49bc: FCOMPP
// 005c49be: FNSTSW AX
// 005c49c0: SAHF
// 005c49c1: JC 0x005c4b7c
//   XREF to: 005c4b7c (CONDITIONAL_JUMP)
// 005c49c7: PUSH EBX
// 005c49c8: MOV EAX,dword ptr [EBX + 0x154]
// 005c49ce: MOV dword ptr [EBX + 0x243c],0x0
// 005c49d8: CALL dword ptr [EAX + 0x104]
// 005c49de: ADD ESP,0x4
// 005c49e1: PUSH EDI
// 005c49e2: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005c49e7: MOV EAX,dword ptr [EAX + 0x24]
// 005c49ea: ADD ESP,0x4
// 005c49ed: CMP EAX,0x29
// 005c49f0: JZ 0x005c4a86
//   XREF to: 005c4a86 (CONDITIONAL_JUMP)
// 005c49f6: PUSH EDI
// 005c49f7: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005c49fc: MOV EAX,dword ptr [EAX + 0x24]
// 005c49ff: ADD ESP,0x4
// 005c4a02: CMP EAX,0x28
// 005c4a05: JZ 0x005c4a86
//   XREF to: 005c4a86 (CONDITIONAL_JUMP)
// 005c4a0b: CMP dword ptr [EBX + 0x1fbac],0x0
// 005c4a12: JZ 0x005c4b26
//   XREF to: 005c4b26 (CONDITIONAL_JUMP)
// 005c4a18: PUSH 0x1
//   Label: LAB_005c4a18
// 005c4a1a: PUSH 0xf
// 005c4a1c: LEA EAX,[EBX + 0x158]
// 005c4a22: MOV dword ptr [EBX + 0x1fbac],0x0
// 005c4a2c: PUSH EAX
// 005c4a2d: MOV dword ptr [EBX + 0x1fc28],0x0
// 005c4a37: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   Label: LAB_005c4a37
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005c4a3c: ADD ESP,0xc
// 005c4a3f: MOV ECX,dword ptr [EBX + 0x1fe68]
// 005c4a45: PUSH ECX
// 005c4a46: CALL sound_sndmain.cpp_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 005c4a4b: MOV EDI,dword ptr [ESI + 0x30]
// 005c4a4e: ADD ESP,0x4
// 005c4a51: CMP EDI,0x1
// 005c4a54: JZ 0x005c4a6e
//   XREF to: 005c4a6e (CONDITIONAL_JUMP)
// 005c4a56: PUSH 0x653d48
//   XREF to: 00653d48 (DATA)
// 005c4a5b: MOV EAX,dword ptr [EBX + 0x154]
// 005c4a61: PUSH EBX
// 005c4a62: CALL dword ptr [EAX + 0x24]
// 005c4a65: ADD ESP,0x8
// 005c4a68: MOV dword ptr [EBX + 0x1fe68],EAX
// 005c4a6e: PUSH 0x0
//   Label: LAB_005c4a6e
// 005c4a70: PUSH 0x42480000
// 005c4a75: PUSH 0x32
// 005c4a77: PUSH EBX
// 005c4a78: MOV EAX,[0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
//   XREF to: 02d83364 (PARAM)
// 005c4a7d: PUSH EAX
//   XREF to: 02d83364 (DATA)
// 005c4a7e: CALL core_gore.cpp_CGore_FUN_004ee030
//   XREF to: 004ee030 (UNCONDITIONAL_CALL)
// 005c4a83: ADD ESP,0x14
// 005c4a86: MOV EDX,dword ptr [EBX + 0x1fc2c]
//   Label: LAB_005c4a86
// 005c4a8c: CMP EDX,dword ptr [EBX + 0x24b4]
// 005c4a92: JNZ 0x005c4a9e
//   XREF to: 005c4a9e (CONDITIONAL_JUMP)
// 005c4a94: MOV dword ptr [EBX + 0x1fc2c],0x0
// 005c4a9e: PUSH 0x0
//   Label: LAB_005c4a9e
// 005c4aa0: PUSH 0x0
// 005c4aa2: MOV EAX,dword ptr [EBX + 0x154]
// 005c4aa8: PUSH EBX
// 005c4aa9: CALL dword ptr [EAX + 0x13c]
// 005c4aaf: MOV EAX,dword ptr [EBX + 0x24f8]
// 005c4ab5: MOV ECX,dword ptr [EBX + 0x1fc2c]
// 005c4abb: ADD ESP,0xc
// 005c4abe: CMP EAX,ECX
// 005c4ac0: JNZ 0x005c4acc
//   XREF to: 005c4acc (CONDITIONAL_JUMP)
// 005c4ac2: MOV dword ptr [EBX + 0x1fc2c],0x0
// 005c4acc: PUSH 0x0
//   Label: LAB_005c4acc
// 005c4ace: PUSH 0x1
// 005c4ad0: MOV EAX,dword ptr [EBX + 0x154]
// 005c4ad6: PUSH EBX
// 005c4ad7: CALL dword ptr [EAX + 0x13c]
// 005c4add: ADD ESP,0xc
// 005c4ae0: FLD float ptr [ESI + 0x4]
//   Label: LAB_005c4ae0
// 005c4ae3: FLDZ
// 005c4ae5: FCOMPP
// 005c4ae7: FNSTSW AX
// 005c4ae9: SAHF
// 005c4aea: JNC 0x005c4afb
//   XREF to: 005c4afb (CONDITIONAL_JUMP)
// 005c4aec: MOV EDI,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 005c4af2: PUSH EDI
//   XREF to: 02d81a9c (DATA)
// 005c4af3: CALL core_game.cpp_CGame_FUN_004e0bd0
//   XREF to: 004e0bd0 (UNCONDITIONAL_CALL)
// 005c4af8: ADD ESP,0x4
// 005c4afb: PUSH ESI
//   Label: LAB_005c4afb
// 005c4afc: PUSH EBX
// 005c4afd: CALL core_charactr.cpp_CCharacter_FUN_0042c3c0
//   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)
// 005c4b02: ADD ESP,0x8
// 005c4b05: MOV ESP,EBP
// 005c4b07: POP EBP
// 005c4b08: POP EDI
// 005c4b09: POP ESI
// 005c4b0a: POP EBX
// 005c4b0b: RET
// 005c4b0c: MOV dword ptr [ESI + 0x4],0x0
//   Label: LAB_005c4b0c
// 005c4b13: JMP 0x005c48d1
//   XREF to: 005c48d1 (UNCONDITIONAL_JUMP)
// 005c4b18: MOV dword ptr [ESI + 0x4],0x0
//   Label: LAB_005c4b18
// 005c4b1f: MOV ESP,EBP
// 005c4b21: POP EBP
// 005c4b22: POP EDI
// 005c4b23: POP ESI
// 005c4b24: POP EBX
// 005c4b25: RET
// 005c4b26: CMP dword ptr [EBX + 0x1fc28],0x0
//   Label: LAB_005c4b26
// 005c4b2d: JNZ 0x005c4a18
//   XREF to: 005c4a18 (CONDITIONAL_JUMP)
// 005c4b33: MOV EDX,dword ptr [ESI + 0x30]
// 005c4b36: CMP EDX,0x1
// 005c4b39: JNZ 0x005c4b44
//   XREF to: 005c4b44 (CONDITIONAL_JUMP)
// 005c4b3b: PUSH EDX
// 005c4b3c: PUSH 0x27
// 005c4b3e: PUSH EDI
// 005c4b3f: JMP 0x005c4a37
//   XREF to: 005c4a37 (UNCONDITIONAL_JUMP)
// 005c4b44: PUSH 0x1
//   Label: LAB_005c4b44
// 005c4b46: PUSH 0x42c80000
// 005c4b4b: PUSH 0x0
// 005c4b4d: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 005c4b7c: FLD float ptr [ESI + 0x4]
//   Label: LAB_005c4b7c
// 005c4b7f: FLDZ
// 005c4b81: FCOMPP
// 005c4b83: FNSTSW AX
// 005c4b85: SAHF
// 005c4b86: JNC 0x005c4ae0
//   XREF to: 005c4ae0 (CONDITIONAL_JUMP)
// 005c4b8c: CMP dword ptr [ESI + 0x30],0x69
// 005c4b90: JZ 0x005c4be2
//   XREF to: 005c4be2 (CONDITIONAL_JUMP)
// 005c4b92: CMP dword ptr [EBX + 0x1fbac],0x0
// 005c4b99: JNZ 0x005c4be2
//   XREF to: 005c4be2 (CONDITIONAL_JUMP)
// 005c4b9b: CMP dword ptr [EBX + 0x1fc28],0x0
// 005c4ba2: JNZ 0x005c4be2
//   XREF to: 005c4be2 (CONDITIONAL_JUMP)
// 005c4ba4: CMP dword ptr [EBX + 0x1fc38],0x0
// 005c4bab: JNZ 0x005c4be2
//   XREF to: 005c4be2 (CONDITIONAL_JUMP)
// 005c4bad: MOV ECX,dword ptr [0x03f873dc]
//   XREF to: 03f873dc (READ)
// 005c4bb3: PUSH ECX
// 005c4bb4: MOV EAX,dword ptr [ESI + 0x34]
// 005c4bb7: PUSH EAX
// 005c4bb8: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005c4bbd: ADD ESP,0x8
// 005c4bc0: TEST EAX,EAX
// 005c4bc2: JZ 0x005c4bd5
//   XREF to: 005c4bd5 (CONDITIONAL_JUMP)
// 005c4bc4: PUSH 0x3eaa7efa
// 005c4bc9: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 005c4bce: ADD ESP,0x4
// 005c4bd1: TEST EAX,EAX
// 005c4bd3: JZ 0x005c4be2
//   XREF to: 005c4be2 (CONDITIONAL_JUMP)
// 005c4bd5: PUSH 0x1
//   Label: LAB_005c4bd5
// 005c4bd7: PUSH 0x24
// 005c4bd9: PUSH EDI
// 005c4bda: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 005c4bdf: ADD ESP,0xc
// 005c4be2: MOV EDX,dword ptr [EBX + 0x1fe68]
//   Label: LAB_005c4be2
// 005c4be8: PUSH EDX
// 005c4be9: CALL sound_sndmain.cpp_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 005c4bee: ADD ESP,0x4
// 005c4bf1: TEST EAX,EAX
// 005c4bf3: JNZ 0x005c4ae0
//   XREF to: 005c4ae0 (CONDITIONAL_JUMP)
// 005c4bf9: PUSH 0x653d5b
//   XREF to: 00653d5b (DATA)
// 005c4bfe: MOV EAX,dword ptr [EBX + 0x154]
// 005c4c04: PUSH EBX
// 005c4c05: CALL dword ptr [EAX + 0x24]
// 005c4c08: ADD ESP,0x8
// 005c4c0b: MOV dword ptr [EBX + 0x1fe68],EAX
// 005c4c11: JMP 0x005c4ae0
//   XREF to: 005c4ae0 (UNCONDITIONAL_JUMP)
