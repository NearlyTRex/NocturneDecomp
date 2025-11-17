// Name: core_sentinel.cpp_SentinelBehavior_FUN_00568cd0
// Address: 00568cd0
// Address Range: [[00568cd0, 00568dc9]]
// Convention: unknown
// Signature: undefined core_sentinel.cpp_SentinelBehavior_FUN_00568cd0()
// Globals:
//   TerminatedCString s_sentinel_die_wav_006458b3
//   TerminatedCString s_sentinel_hurt_wav_006458c4
// Function calls:
//   core_actor.cpp_getRandomInt_FUN_0040cc70
//   core_enemy.cpp_FUN_004a9f10
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   sound_sndmain.cpp_FUN_005a9660
//   sound_sndmain.cpp_FUN_005a9c40

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_sentinel.cpp_SentinelBehavior(undefined4 param_1, undefined4
   param_2) */

void core_sentinel_cpp_SentinelBehavior_FUN_00568cd0(void)

{
  CMotionController *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  undefined4 uVar3;
  int iVar4;
  int in_stack_00000004;
  int in_stack_00000008;
  
  fVar1 = *(float *)(in_stack_00000004 + 0x243c) - *(float *)(in_stack_00000008 + 4);
  this_ptr = (CMotionController *)(in_stack_00000004 + 0x158);
  *(float *)(in_stack_00000004 + 0x243c) = fVar1;
  if (0.0 < fVar1) {
    iVar4 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,2);
    if (iVar4 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(this_ptr,5,1);
    }
    if (iVar4 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                ((CMotionController *)(in_stack_00000004 + 0x158),6,1);
    }
    if (iVar4 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                ((CMotionController *)(in_stack_00000004 + 0x158),7,1);
    }
    iVar4 = sound_sndmain_cpp_FUN_005a9660();
    if (iVar4 != 0) goto LAB_00568d4d;
  }
  else {
    *(undefined4 *)(in_stack_00000004 + 0x243c) = 0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0(this_ptr);
    if ((pSVar2->state_index == 8) || (pSVar2->state_index == 9)) goto LAB_00568d4d;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(this_ptr,8,1);
    sound_sndmain_cpp_FUN_005a9c40();
  }
  uVar3 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
  *(undefined4 *)(in_stack_00000004 + 0xbebc) = uVar3;
LAB_00568d4d:
  core_enemy_cpp_FUN_004a9f10();
  return;
}


// Assembly code:
// 00568cd0: PUSH EBX
//   Label: core_sentinel.cpp_SentinelBehavior_FUN_00568cd0
// 00568cd1: PUSH ESI
// 00568cd2: PUSH EDI
// 00568cd3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00568cd7: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00568cdb: FLD float ptr [EAX + 0x4]
// 00568cde: FSUBR float ptr [EBX + 0x243c]
// 00568ce4: LEA ESI,[EBX + 0x158]
// 00568cea: FST float ptr [EBX + 0x243c]
// 00568cf0: FLDZ
// 00568cf2: FCOMPP
// 00568cf4: FNSTSW AX
// 00568cf6: SAHF
// 00568cf7: JC 0x00568d5f
//   XREF to: 00568d5f (CONDITIONAL_JUMP)
// 00568cf9: PUSH ESI
// 00568cfa: MOV dword ptr [EBX + 0x243c],0x0
// 00568d04: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00568d09: MOV EAX,dword ptr [EAX + 0x24]
// 00568d0c: ADD ESP,0x4
// 00568d0f: CMP EAX,0x8
// 00568d12: JZ 0x00568d4d
//   XREF to: 00568d4d (CONDITIONAL_JUMP)
// 00568d14: CMP EAX,0x9
// 00568d17: JZ 0x00568d4d
//   XREF to: 00568d4d (CONDITIONAL_JUMP)
// 00568d19: PUSH 0x1
// 00568d1b: PUSH 0x8
// 00568d1d: PUSH ESI
// 00568d1e: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00568d23: ADD ESP,0xc
// 00568d26: MOV ECX,dword ptr [EBX + 0xbebc]
// 00568d2c: PUSH ECX
// 00568d2d: CALL sound_sndmain.cpp_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 00568d32: ADD ESP,0x4
// 00568d35: PUSH 0x6458b3
//   XREF to: 006458b3 (DATA)
// 00568d3a: MOV EAX,dword ptr [EBX + 0x154]
//   Label: LAB_00568d3a
// 00568d40: PUSH EBX
// 00568d41: CALL dword ptr [EAX + 0x24]
// 00568d44: ADD ESP,0x8
// 00568d47: MOV dword ptr [EBX + 0xbebc],EAX
// 00568d4d: MOV ESI,dword ptr [ESP + 0x14]
//   Label: LAB_00568d4d
//   XREF to: Stack[0x8] (READ)
// 00568d51: PUSH ESI
// 00568d52: PUSH EBX
// 00568d53: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 00568d58: ADD ESP,0x8
// 00568d5b: POP EDI
// 00568d5c: POP ESI
// 00568d5d: POP EBX
// 00568d5e: RET
// 00568d5f: PUSH 0x2
//   Label: LAB_00568d5f
// 00568d61: PUSH 0x0
// 00568d63: CALL core_actor.cpp_getRandomInt_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 00568d68: ADD ESP,0x8
// 00568d6b: MOV EDI,EAX
// 00568d6d: TEST EAX,EAX
// 00568d6f: JNZ 0x00568d7e
//   XREF to: 00568d7e (CONDITIONAL_JUMP)
// 00568d71: PUSH 0x1
// 00568d73: PUSH 0x5
// 00568d75: PUSH ESI
// 00568d76: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00568d7b: ADD ESP,0xc
// 00568d7e: CMP EDI,0x1
//   Label: LAB_00568d7e
// 00568d81: JNZ 0x00568d95
//   XREF to: 00568d95 (CONDITIONAL_JUMP)
// 00568d83: PUSH EDI
// 00568d84: PUSH 0x6
// 00568d86: LEA EAX,[EBX + 0x158]
// 00568d8c: PUSH EAX
// 00568d8d: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00568d92: ADD ESP,0xc
// 00568d95: CMP EDI,0x2
//   Label: LAB_00568d95
// 00568d98: JNZ 0x00568dad
//   XREF to: 00568dad (CONDITIONAL_JUMP)
// 00568d9a: PUSH 0x1
// 00568d9c: PUSH 0x7
// 00568d9e: LEA EAX,[EBX + 0x158]
// 00568da4: PUSH EAX
// 00568da5: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00568daa: ADD ESP,0xc
// 00568dad: MOV EDX,dword ptr [EBX + 0xbebc]
//   Label: LAB_00568dad
// 00568db3: PUSH EDX
// 00568db4: CALL sound_sndmain.cpp_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 00568db9: ADD ESP,0x4
// 00568dbc: TEST EAX,EAX
// 00568dbe: JNZ 0x00568d4d
//   XREF to: 00568d4d (CONDITIONAL_JUMP)
// 00568dc0: PUSH 0x6458c4
//   XREF to: 006458c4 (DATA)
// 00568dc5: JMP 0x00568d3a
//   XREF to: 00568d3a (UNCONDITIONAL_JUMP)
