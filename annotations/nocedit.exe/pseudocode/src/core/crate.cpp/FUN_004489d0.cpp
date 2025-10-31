// Name: core_crate.cpp_FUN_004489d0
// Address: 004489d0
// Address Range: [[004489d0, 00448a60]]
// Convention: unknown
// Signature: undefined core_crate.cpp_FUN_004489d0()
// Globals:
//   undefined4 DAT_00619b2a

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_crate.cpp_FUN_004489d0(undefined4 param_1, undefined4 param_2)
    */

undefined4 core_crate_cpp_FUN_004489d0(void)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  float *in_stack_00000008;
  float afStack_10 [3];
  
  pfVar3 = (float *)(**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x14))();
  fVar1 = (pfVar3[1] + pfVar3[4]) * _DAT_00619b2a;
  fVar2 = (pfVar3[2] + pfVar3[5]) * _DAT_00619b2a;
  if (in_stack_00000008 == afStack_10) {
    return 1;
  }
  *in_stack_00000008 = (*pfVar3 + pfVar3[3]) * _DAT_00619b2a;
  in_stack_00000008[1] = fVar1;
  in_stack_00000008[2] = fVar2;
  return 1;
}


// Assembly code:
// 004489d0: PUSH EBX
//   Label: core_crate.cpp_FUN_004489d0
// 004489d1: SUB ESP,0x30
// 004489d4: MOV ECX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 004489d8: MOV EBX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 004489dc: MOV EDX,ESP
// 004489de: PUSH EDX
// 004489df: MOV EAX,dword ptr [ECX + 0x154]
// 004489e5: PUSH ECX
// 004489e6: CALL dword ptr [EAX + 0x14]
// 004489e9: LEA EDX,[EAX + 0xc]
// 004489ec: FLD float ptr [EAX]
// 004489ee: FADD float ptr [EDX]
// 004489f0: ADD ESP,0x8
// 004489f3: FST float ptr [ESP + 0x18]
// 004489f7: FLD float ptr [EAX + 0x4]
// 004489fa: FADD float ptr [EDX + 0x4]
// 004489fd: FXCH
// 004489ff: FLD float ptr [0x00619b2a]
//   XREF to: 00619b2a (READ)
// 00448a05: FXCH
// 00448a07: FMUL ST1
// 00448a09: FXCH ST2
// 00448a0b: FST float ptr [ESP + 0x1c]
// 00448a0f: FLD float ptr [EAX + 0x8]
// 00448a12: FADD float ptr [EDX + 0x8]
// 00448a15: FXCH
// 00448a17: FMUL ST2
// 00448a19: FXCH
// 00448a1b: FST float ptr [ESP + 0x20]
// 00448a1f: FMULP ST2
// 00448a21: LEA EAX,[ESP + 0x24]
// 00448a25: FXCH ST2
// 00448a27: FSTP float ptr [ESP + 0x24]
// 00448a2b: FXCH
// 00448a2d: FSTP float ptr [ESP + 0x28]
// 00448a31: FSTP float ptr [ESP + 0x2c]
// 00448a35: CMP EBX,EAX
// 00448a37: JNZ 0x00448a43
//   XREF to: 00448a43 (CONDITIONAL_JUMP)
// 00448a39: MOV EAX,0x1
// 00448a3e: ADD ESP,0x30
// 00448a41: POP EBX
// 00448a42: RET
// 00448a43: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_00448a43
// 00448a47: MOV dword ptr [EBX],EAX
// 00448a49: MOV EAX,dword ptr [ESP + 0x28]
// 00448a4d: MOV dword ptr [EBX + 0x4],EAX
// 00448a50: MOV EAX,dword ptr [ESP + 0x2c]
// 00448a54: MOV dword ptr [EBX + 0x8],EAX
// 00448a57: MOV EAX,0x1
// 00448a5c: ADD ESP,0x30
// 00448a5f: POP EBX
// 00448a60: RET
