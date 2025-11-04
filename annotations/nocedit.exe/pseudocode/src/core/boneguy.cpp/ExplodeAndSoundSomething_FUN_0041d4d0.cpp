// Name: core_boneguy.cpp_ExplodeAndSoundSomething_FUN_0041d4d0
// Address: 0041d4d0
// Address Range: [[0041d4d0, 0041d545]]
// Convention: unknown
// Signature: undefined core_boneguy.cpp_ExplodeAndSoundSomething_FUN_0041d4d0()
// Function calls:
//   core_boneguy.cpp_CBoneGuy_FUN_0041d680
//   core_enemy.cpp_FUN_004a9f10
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_boneguy.cpp_ExplodeAndSoundSomething(undefined4 param_1,
   undefined4 param_2) */

void core_boneguy_cpp_ExplodeAndSoundSomething_FUN_0041d4d0(void)

{
  float fVar1;
  CBoneGuy *in_stack_00000004;
  int in_stack_0000000c;
  
  sound_sndmain_cpp_RelatedToSoundSlotKill_FUN_005a9c40();
  fVar1 = (in_stack_00000004->base_enemy).base_character.hit_points -
          *(float *)(in_stack_0000000c + 4);
  (in_stack_00000004->base_enemy).base_character.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (in_stack_00000004->base_enemy).base_character.hit_points = 1.0;
    core_boneguy_cpp_CBoneGuy_FUN_0041d680(in_stack_00000004);
    core_enemy_cpp_FUN_004a9f10();
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(in_stack_00000004->base_enemy).base_character.model.motion_controller,3,1);
  core_enemy_cpp_FUN_004a9f10();
  return;
}


// Assembly code:
// 0041d4d0: PUSH EBX
//   Label: core_boneguy.cpp_ExplodeAndSoundSomething_FUN_0041d4d0
// 0041d4d1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0041d4d5: MOV EDX,dword ptr [EBX + 0xbecc]
// 0041d4db: PUSH EDX
// 0041d4dc: CALL sound_sndmain.cpp_RelatedToSoundSlotKill_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 0041d4e1: ADD ESP,0x4
// 0041d4e4: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0041d4e8: FLD float ptr [EAX + 0x4]
// 0041d4eb: FSUBR float ptr [EBX + 0x243c]
// 0041d4f1: FST float ptr [EBX + 0x243c]
// 0041d4f7: FLDZ
// 0041d4f9: FCOMPP
// 0041d4fb: FNSTSW AX
// 0041d4fd: SAHF
// 0041d4fe: JC 0x0041d523
//   XREF to: 0041d523 (CONDITIONAL_JUMP)
// 0041d500: PUSH EBX
// 0041d501: MOV dword ptr [EBX + 0x243c],0x3f800000
// 0041d50b: CALL core_boneguy.cpp_CBoneGuy_FUN_0041d680
//   XREF to: 0041d680 (UNCONDITIONAL_CALL)
// 0041d510: ADD ESP,0x4
// 0041d513: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0041d517: PUSH ECX
// 0041d518: PUSH EBX
// 0041d519: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 0041d51e: ADD ESP,0x8
// 0041d521: POP EBX
// 0041d522: RET
// 0041d523: PUSH 0x1
//   Label: LAB_0041d523
// 0041d525: PUSH 0x3
// 0041d527: LEA EAX,[EBX + 0x158]
// 0041d52d: PUSH EAX
// 0041d52e: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 0041d533: ADD ESP,0xc
// 0041d536: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0041d53a: PUSH ECX
// 0041d53b: PUSH EBX
// 0041d53c: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 0041d541: ADD ESP,0x8
// 0041d544: POP EBX
// 0041d545: RET
