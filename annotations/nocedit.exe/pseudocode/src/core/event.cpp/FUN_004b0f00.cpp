// Name: core_event.cpp_FUN_004b0f00
// Address: 004b0f00
// Address Range: [[004b0f00, 004b0f89]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004b0f00()
// Cross-references:
//   core_sound.cpp_FUN_005b2dd0 (005b2dd0) at 005b2f40 [UNCONDITIONAL_CALL]
// Function calls:
//   core_event.cpp_FUN_004b0db0
//   sound_sndmain.cpp_FUN_005a8be0
//   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   sound_sndmain.cpp_somethingWithStack_FUN_005a8b90
//   sound_sndmain.cpp_startSfx_FUN_005a8e90

#include "nocturne.h"

/* Signature: undefined1 core_event.cpp_FUN_004b0f00(undefined4 param_1) */

void core_event_cpp_FUN_004b0f00(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000004;
  undefined4 local_c;
  
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x3ac8)) {
    iVar3 = in_stack_00000004 + 0x3ae4;
    local_c = in_stack_00000004 + 0x3acc;
    do {
      iVar4 = iVar3;
      iVar3 = iVar2 * 0x120;
      sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
      sound_sndmain_cpp_FUN_005a8be0();
      sound_sndmain_cpp_somethingWithStack_FUN_005a8b90();
      uVar1 = sound_sndmain_cpp_startSfx_FUN_005a8e90();
      iVar2 = iVar2 + 1;
      *(undefined4 *)(iVar3 + local_c) = uVar1;
      sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
      iVar3 = iVar4 + 0x120;
      local_c = iVar4;
    } while (iVar2 < *(int *)(in_stack_00000004 + 0x3ac8));
  }
  core_event_cpp_FUN_004b0db0();
  return;
}


// Assembly code:
// 004b0f00: PUSH EBX
//   Label: core_event.cpp_FUN_004b0f00
// 004b0f01: PUSH EBP
// 004b0f02: SUB ESP,0x4
// 004b0f05: MOV EBP,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004b0f09: MOV EDX,dword ptr [EBP + 0x3ac8]
// 004b0f0f: XOR EBX,EBX
// 004b0f11: TEST EDX,EDX
// 004b0f13: JLE 0x004b0f7b
//   XREF to: 004b0f7b (CONDITIONAL_JUMP)
// 004b0f15: PUSH EDI
// 004b0f16: PUSH ESI
// 004b0f17: LEA EAX,[EBP + 0x3acc]
// 004b0f1d: LEA EDI,[EBP + 0x3ae4]
// 004b0f23: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 004b0f27: IMUL ESI,EBX,0x120
//   Label: LAB_004b0f27
// 004b0f2d: ADD ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xc] (READ)
// 004b0f31: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 004b0f36: PUSH 0x1
// 004b0f38: MOV EAX,dword ptr [ESI + 0x11c]
// 004b0f3e: PUSH EAX
// 004b0f3f: MOV EDX,dword ptr [ESI + 0x118]
// 004b0f45: PUSH EDX
// 004b0f46: CALL sound_sndmain.cpp_FUN_005a8be0
//   XREF to: 005a8be0 (UNCONDITIONAL_CALL)
// 004b0f4b: ADD ESP,0xc
// 004b0f4e: PUSH 0x1
// 004b0f50: CALL sound_sndmain.cpp_somethingWithStack_FUN_005a8b90
//   XREF to: 005a8b90 (UNCONDITIONAL_CALL)
// 004b0f55: ADD ESP,0x4
// 004b0f58: PUSH EDI
// 004b0f59: CALL sound_sndmain.cpp_startSfx_FUN_005a8e90
//   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
// 004b0f5e: ADD ESP,0x4
// 004b0f61: INC EBX
// 004b0f62: MOV dword ptr [ESI],EAX
// 004b0f64: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 004b0f69: MOV ECX,dword ptr [EBP + 0x3ac8]
// 004b0f6f: ADD EDI,0x120
// 004b0f75: CMP EBX,ECX
// 004b0f77: JL 0x004b0f27
//   XREF to: 004b0f27 (CONDITIONAL_JUMP)
// 004b0f79: POP ESI
// 004b0f7a: POP EDI
// 004b0f7b: PUSH EBP
//   Label: LAB_004b0f7b
// 004b0f7c: CALL core_event.cpp_FUN_004b0db0
//   XREF to: 004b0db0 (UNCONDITIONAL_CALL)
// 004b0f81: ADD ESP,0x4
// 004b0f84: ADD ESP,0x4
// 004b0f87: POP EBP
// 004b0f88: POP EBX
// 004b0f89: RET
