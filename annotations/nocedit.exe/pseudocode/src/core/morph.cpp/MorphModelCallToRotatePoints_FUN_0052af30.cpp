// Name: core_morph.cpp_MorphModelCallToRotatePoints_FUN_0052af30
// Address: 0052af30
// Address Range: [[0052af30, 0052af69]]
// Convention: unknown
// Signature: undefined core_morph.cpp_MorphModelCallToRotatePoints_FUN_0052af30()
// Cross-references:
//   core_morph.cpp_MorphModelRotatePointsTwice_FUN_0052bae0 (0052bae0) at 0052bb34 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0063a3ef
// Function calls:
//   core_morph.cpp_CMorphModel_rotatePoints_FUN_0052af70
//   core_morph.cpp_FUN_0052b160

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_morph.cpp_MorphModelCallToRotatePoints(undefined4 param_1, undefined4
   param_2, undefined4 param_3) */

void core_morph_cpp_MorphModelCallToRotatePoints_FUN_0052af30(void)

{
  float in_stack_00000008;
  
  if (in_stack_00000008 < (float)_DAT_0063a3ef) {
    return;
  }
  core_morph_cpp_CMorphModel_rotatePoints_FUN_0052af70();
  core_morph_cpp_FUN_0052b160();
  return;
}


// Assembly code:
// 0052af30: FLD float ptr [ESP + 0x8]
//   Label: core_morph.cpp_MorphModelCallToRotatePoints_FUN_0052af30
//   XREF to: Stack[0x8] (READ)
// 0052af34: FCOMP double ptr [0x0063a3ef]
//   XREF to: 0063a3ef (READ)
// 0052af3a: FNSTSW AX
// 0052af3c: SAHF
// 0052af3d: JNC 0x0052af40
//   XREF to: 0052af40 (CONDITIONAL_JUMP)
// 0052af3f: RET
// 0052af40: PUSH EBX
//   Label: LAB_0052af40
// 0052af41: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0052af45: PUSH EDX
// 0052af46: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0052af4a: PUSH dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0052af4e: PUSH ECX
// 0052af4f: CALL core_morph.cpp_CMorphModel_rotatePoints_FUN_0052af70
//   XREF to: 0052af70 (UNCONDITIONAL_CALL)
// 0052af54: ADD ESP,0xc
// 0052af57: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0052af5b: PUSH dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0052af5f: PUSH EBX
// 0052af60: CALL core_morph.cpp_FUN_0052b160
//   XREF to: 0052b160 (UNCONDITIONAL_CALL)
// 0052af65: ADD ESP,0x8
// 0052af68: POP EBX
// 0052af69: RET
