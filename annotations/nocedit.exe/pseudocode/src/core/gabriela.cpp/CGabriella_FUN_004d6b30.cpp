// Name: core_gabriela.cpp_CGabriella_FUN_004d6b30
// Address: 004d6b30
// Address Range: [[004d6b30, 004d6bef] [004d6c76, 004d6ce2] [004d6d03, 004d6d30]]
// Convention: __cdecl
// Signature: void core_gabriela.cpp_CGabriella_FUN_004d6b30(CGabriella * this_ptr)
// Globals:
//   undefined4 DAT_0065e7c4
//   CGame* g_CGamePtr = 02d81a9c
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.hero_number
//   undefined4 DAT_02d81c6c
//   undefined4 DAT_02d81cc8
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_charactr.cpp_CCharacter_FUN_0042c3c0
//   core_game.cpp_CGame_FUN_004e0bd0
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_FUN_004d6b30(CGabriella *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonActor_vtable *pCVar1;
  SMotion *pSVar2;
  float fVar3;
  int in_stack_00000008;
  int in_stack_ffffffc4;
  
  if (((this_ptr->base_hero).field1_0xbe24 & 0x7fffffffU) != 0) {
    *(undefined4 *)(in_stack_00000008 + 4) = 0;
  }
  if (g_CGamePtr->field53_0x1d0 != 0) {
    *(undefined4 *)(in_stack_00000008 + 4) = 0;
  }
  if (g_CGamePtr->allow_damage_flag == 0) {
    *(undefined4 *)(in_stack_00000008 + 4) = 0;
  }
  (this_ptr->base_hero).field1_0xbe24 = DAT_0065e7c4;
  fVar3 = (this_ptr->base_hero).base_character.hit_points - *(float *)(in_stack_00000008 + 4);
  this_ptr_00 = &(this_ptr->base_hero).base_character.model;
  (this_ptr->base_hero).base_character.hit_points = fVar3;
  if (0.0 < fVar3) {
    if (0.0 < *(float *)(in_stack_00000008 + 4)) {
      if (*(int *)((this_ptr->base_hero).field6_0x1fb9c + 0x10) == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr_00->motion_controller,8,1);
      }
      if (g_CGamePtr->hero_number != 2) {
        pCVar1 = (this_ptr->base_hero).base_character.base_actor.vtable;
        fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.25,0.4);
        (*pCVar1->playSoundWithVolume)((CDemonActor *)this_ptr,"gb-hit[1,6].wav",fVar3);
      }
    }
  }
  else {
    (this_ptr->base_hero).base_character.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr_00->motion_controller);
    if (pSVar2->state_index != 0xc) {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&this_ptr_00->motion_controller);
      if (pSVar2->state_index != 0xb) {
        (this_ptr->base_hero).base_character.grabbed_by = (CDemonActor *)0x0;
        fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,100.0);
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(this_ptr->base_hero).base_character.model.motion_controller,
                   (fVar3 <= FLOAT_0062b0fd) + 9,in_stack_ffffffc4);
        if (g_CGamePtr->hero_number != 2) {
          pCVar1 = (this_ptr->base_hero).base_character.base_actor.vtable;
          fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.25,0.4);
          (*pCVar1->playSoundWithVolume)((CDemonActor *)this_ptr,"gb-die[1,6].wav",fVar3);
        }
        core_gore_cpp_CGore_FUN_004ee030(g_CGorePtr,(CDemonActor *)this_ptr);
      }
    }
  }
  if (*(float *)(in_stack_00000008 + 4) <= 0.0) {
    core_charactr_cpp_CCharacter_FUN_0042c3c0((CCharacter *)this_ptr);
    return;
  }
  core_game_cpp_CGame_FUN_004e0bd0(g_CGamePtr);
  core_charactr_cpp_CCharacter_FUN_0042c3c0((CCharacter *)this_ptr);
  return;
}


// Assembly code:
// 004d6b30: PUSH EBX
//   Label: core_gabriela.cpp_CGabriella_FUN_004d6b30
// 004d6b31: PUSH ESI
// 004d6b32: PUSH EDI
// 004d6b33: PUSH EBP
// 004d6b34: MOV EBP,ESP
// 004d6b36: SUB ESP,0x4
// 004d6b39: MOV EBX,dword ptr [EBP + 0x14]
// 004d6b3c: MOV ESI,dword ptr [EBP + 0x18]
// 004d6b3f: TEST dword ptr [EBX + 0xbe24],0x7fffffff
// 004d6b49: JNZ 0x004d6c97
//   XREF to: 004d6c97 (CONDITIONAL_JUMP)
// 004d6b4f: MOV EAX,[0x0067b654]
//   Label: LAB_004d6b4f
//   XREF to: 0067b654 (READ)
// 004d6b54: CMP dword ptr [EAX + 0x1d0],0x0
//   XREF to: 02d81c6c (READ)
// 004d6b5b: JZ 0x004d6b64
//   XREF to: 004d6b64 (CONDITIONAL_JUMP)
// 004d6b5d: MOV dword ptr [ESI + 0x4],0x0
// 004d6b64: MOV EAX,[0x0067b654]
//   Label: LAB_004d6b64
//   XREF to: 0067b654 (READ)
// 004d6b69: MOV EDI,dword ptr [EAX + 0x22c]
//   XREF to: 02d81cc8 (READ)
// 004d6b6f: TEST EDI,EDI
// 004d6b71: JZ 0x004d6ca3
//   XREF to: 004d6ca3 (CONDITIONAL_JUMP)
// 004d6b77: MOV EAX,[0x0065e7c4]
//   Label: LAB_004d6b77
//   XREF to: 0065e7c4 (READ)
// 004d6b7c: MOV dword ptr [EBX + 0xbe24],EAX
// 004d6b82: FLD float ptr [ESI + 0x4]
// 004d6b85: FSUBR float ptr [EBX + 0x243c]
// 004d6b8b: LEA EDI,[EBX + 0x158]
// 004d6b91: FST float ptr [EBX + 0x243c]
// 004d6b97: FLDZ
// 004d6b99: FCOMPP
// 004d6b9b: FNSTSW AX
// 004d6b9d: SAHF
// 004d6b9e: JC 0x004d6cab
//   XREF to: 004d6cab (CONDITIONAL_JUMP)
// 004d6ba4: PUSH EDI
// 004d6ba5: MOV dword ptr [EBX + 0x243c],0x0
// 004d6baf: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004d6bb4: MOV EAX,dword ptr [EAX + 0x24]
// 004d6bb7: ADD ESP,0x4
// 004d6bba: CMP EAX,0xc
// 004d6bbd: JZ 0x004d6c76
//   XREF to: 004d6c76 (CONDITIONAL_JUMP)
// 004d6bc3: PUSH EDI
// 004d6bc4: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004d6bc9: MOV EAX,dword ptr [EAX + 0x24]
// 004d6bcc: ADD ESP,0x4
// 004d6bcf: CMP EAX,0xb
// 004d6bd2: JZ 0x004d6c76
//   XREF to: 004d6c76 (CONDITIONAL_JUMP)
// 004d6bd8: PUSH 0x1
// 004d6bda: PUSH 0x42c80000
// 004d6bdf: PUSH 0x0
// 004d6be1: MOV dword ptr [EBX + 0x2598],0x0
// 004d6beb: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004d6c76: FLD float ptr [ESI + 0x4]
//   Label: LAB_004d6c76
// 004d6c79: FLDZ
// 004d6c7b: FCOMPP
// 004d6c7d: FNSTSW AX
// 004d6c7f: SAHF
// 004d6c80: JC 0x004d6d12
//   XREF to: 004d6d12 (CONDITIONAL_JUMP)
// 004d6c86: PUSH ESI
// 004d6c87: PUSH EBX
// 004d6c88: CALL core_charactr.cpp_CCharacter_FUN_0042c3c0
//   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)
// 004d6c8d: ADD ESP,0x8
// 004d6c90: MOV ESP,EBP
// 004d6c92: POP EBP
// 004d6c93: POP EDI
// 004d6c94: POP ESI
// 004d6c95: POP EBX
// 004d6c96: RET
// 004d6c97: MOV dword ptr [ESI + 0x4],0x0
//   Label: LAB_004d6c97
// 004d6c9e: JMP 0x004d6b4f
//   XREF to: 004d6b4f (UNCONDITIONAL_JUMP)
// 004d6ca3: MOV dword ptr [ESI + 0x4],EDI
//   Label: LAB_004d6ca3
// 004d6ca6: JMP 0x004d6b77
//   XREF to: 004d6b77 (UNCONDITIONAL_JUMP)
// 004d6cab: FLD float ptr [ESI + 0x4]
//   Label: LAB_004d6cab
// 004d6cae: FLDZ
// 004d6cb0: FCOMPP
// 004d6cb2: FNSTSW AX
// 004d6cb4: SAHF
// 004d6cb5: JNC 0x004d6c76
//   XREF to: 004d6c76 (CONDITIONAL_JUMP)
// 004d6cb7: CMP dword ptr [EBX + 0x1fbac],0x0
// 004d6cbe: JZ 0x004d6d03
//   XREF to: 004d6d03 (CONDITIONAL_JUMP)
// 004d6cc0: MOV EAX,[0x0067b654]
//   Label: LAB_004d6cc0
//   XREF to: 0067b654 (READ)
//   XREF to: 02d81a9c (PARAM)
// 004d6cc5: CMP dword ptr [EAX + 0xc0],0x2
//   XREF to: 02d81b5c (READ)
// 004d6ccc: JZ 0x004d6c76
//   XREF to: 004d6c76 (CONDITIONAL_JUMP)
// 004d6cce: PUSH 0x3ecccccd
// 004d6cd3: PUSH 0x3e800000
// 004d6cd8: MOV EDI,dword ptr [EBX + 0x154]
// 004d6cde: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004d6d03: PUSH 0x1
//   Label: LAB_004d6d03
// 004d6d05: PUSH 0x8
// 004d6d07: PUSH EDI
// 004d6d08: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004d6d0d: ADD ESP,0xc
// 004d6d10: JMP 0x004d6cc0
//   XREF to: 004d6cc0 (UNCONDITIONAL_JUMP)
// 004d6d12: MOV EAX,[0x0067b654]
//   Label: LAB_004d6d12
//   XREF to: 0067b654 (READ)
// 004d6d17: PUSH EAX
//   XREF to: 02d81a9c (DATA)
// 004d6d18: CALL core_game.cpp_CGame_FUN_004e0bd0
//   XREF to: 004e0bd0 (UNCONDITIONAL_CALL)
// 004d6d1d: ADD ESP,0x4
// 004d6d20: PUSH ESI
// 004d6d21: PUSH EBX
// 004d6d22: CALL core_charactr.cpp_CCharacter_FUN_0042c3c0
//   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)
// 004d6d27: ADD ESP,0x8
// 004d6d2a: MOV ESP,EBP
// 004d6d2c: POP EBP
// 004d6d2d: POP EDI
// 004d6d2e: POP ESI
// 004d6d2f: POP EBX
// 004d6d30: RET
