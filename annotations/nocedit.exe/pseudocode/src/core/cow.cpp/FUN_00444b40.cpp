// Name: core_cow.cpp_FUN_00444b40
// Address: 00444b40
// Address Range: [[00444b40, 00444bf3]]
// Convention: unknown
// Signature: undefined core_cow.cpp_FUN_00444b40()
// Globals:
//   TerminatedCString s_cow_wav_006195ad
//   CSound* g_CSoundPtr = 03f6af64
//   CSound g_CSoundInstance
// Function calls:
//   core_cow.cpp_FUN_004448c0
//   core_enemy.cpp_FUN_004a9f10
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_sound.cpp_CSound_isSfxPlaying_FUN_005b3b80

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_cow.cpp_FUN_00444b40(undefined4 param_1, undefined4 param_2)
    */

void core_cow_cpp_FUN_00444b40(void)

{
  float fVar1;
  int extraout_EAX;
  SMotion *pSVar2;
  undefined4 uVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  int desired_state_index;
  
  core_cow_cpp_FUN_004448c0();
  fVar1 = *(float *)(in_stack_00000004 + 0x243c) - *(float *)(in_stack_00000008 + 4);
  *(float *)(in_stack_00000004 + 0x243c) = fVar1;
  if (fVar1 <= 0.0) {
    *(undefined4 *)(in_stack_00000004 + 0x243c) = 0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       ((CMotionController *)(in_stack_00000004 + 0x158));
    if ((pSVar2->state_index == 5) || (pSVar2->state_index == 4)) goto LAB_00444b80;
    desired_state_index = 4;
  }
  else {
    desired_state_index = 3;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            ((CMotionController *)(in_stack_00000004 + 0x158),desired_state_index,1);
LAB_00444b80:
  core_sound_cpp_CSound_isSfxPlaying_FUN_005b3b80(g_CSoundPtr,*(uint *)(in_stack_00000004 + 0xbec4))
  ;
  if (extraout_EAX != 0) {
    core_enemy_cpp_FUN_004a9f10();
    return;
  }
  uVar3 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
  *(undefined4 *)(in_stack_00000004 + 0xbec4) = uVar3;
  core_enemy_cpp_FUN_004a9f10();
  return;
}


// Assembly code:
// 00444b40: PUSH EBX
//   Label: core_cow.cpp_FUN_00444b40
// 00444b41: PUSH ESI
// 00444b42: PUSH EDI
// 00444b43: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00444b47: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00444b4b: PUSH EDI
// 00444b4c: PUSH EBX
// 00444b4d: CALL core_cow.cpp_FUN_004448c0
//   XREF to: 004448c0 (UNCONDITIONAL_CALL)
// 00444b52: FLD float ptr [EDI + 0x4]
// 00444b55: ADD ESP,0x8
// 00444b58: FSUBR float ptr [EBX + 0x243c]
// 00444b5e: LEA ESI,[EBX + 0x158]
// 00444b64: FST float ptr [EBX + 0x243c]
// 00444b6a: FLDZ
// 00444b6c: FCOMPP
// 00444b6e: FNSTSW AX
// 00444b70: SAHF
// 00444b71: JNC 0x00444ba8
//   XREF to: 00444ba8 (CONDITIONAL_JUMP)
// 00444b73: PUSH 0x1
// 00444b75: PUSH 0x3
// 00444b77: PUSH ESI
//   Label: LAB_00444b77
// 00444b78: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00444b7d: ADD ESP,0xc
// 00444b80: MOV EDX,dword ptr [EBX + 0xbec4]
//   Label: LAB_00444b80
// 00444b86: PUSH EDX
// 00444b87: MOV ECX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 00444b8d: PUSH ECX
//   XREF to: 03f6af64 (DATA)
// 00444b8e: CALL core_sound.cpp_CSound_isSfxPlaying_FUN_005b3b80
//   XREF to: 005b3b80 (UNCONDITIONAL_CALL)
// 00444b93: ADD ESP,0x8
// 00444b96: TEST EAX,EAX
// 00444b98: JZ 0x00444bce
//   XREF to: 00444bce (CONDITIONAL_JUMP)
// 00444b9a: PUSH EDI
// 00444b9b: PUSH EBX
// 00444b9c: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 00444ba1: ADD ESP,0x8
// 00444ba4: POP EDI
// 00444ba5: POP ESI
// 00444ba6: POP EBX
// 00444ba7: RET
// 00444ba8: PUSH ESI
//   Label: LAB_00444ba8
// 00444ba9: MOV dword ptr [EBX + 0x243c],0x0
// 00444bb3: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00444bb8: MOV EAX,dword ptr [EAX + 0x24]
// 00444bbb: ADD ESP,0x4
// 00444bbe: CMP EAX,0x5
// 00444bc1: JZ 0x00444b80
//   XREF to: 00444b80 (CONDITIONAL_JUMP)
// 00444bc3: CMP EAX,0x4
// 00444bc6: JZ 0x00444b80
//   XREF to: 00444b80 (CONDITIONAL_JUMP)
// 00444bc8: PUSH 0x1
// 00444bca: PUSH 0x4
// 00444bcc: JMP 0x00444b77
//   XREF to: 00444b77 (UNCONDITIONAL_JUMP)
// 00444bce: PUSH 0x6195ad
//   Label: LAB_00444bce
//   XREF to: 006195ad (DATA)
// 00444bd3: MOV EAX,dword ptr [EBX + 0x154]
// 00444bd9: PUSH EBX
// 00444bda: CALL dword ptr [EAX + 0x24]
// 00444bdd: ADD ESP,0x8
// 00444be0: MOV dword ptr [EBX + 0xbec4],EAX
// 00444be6: PUSH EDI
// 00444be7: PUSH EBX
// 00444be8: CALL core_enemy.cpp_FUN_004a9f10
//   XREF to: 004a9f10 (UNCONDITIONAL_CALL)
// 00444bed: ADD ESP,0x8
// 00444bf0: POP EDI
// 00444bf1: POP ESI
// 00444bf2: POP EBX
// 00444bf3: RET
