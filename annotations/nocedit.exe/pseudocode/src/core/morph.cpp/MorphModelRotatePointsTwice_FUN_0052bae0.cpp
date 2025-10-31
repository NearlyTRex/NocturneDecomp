// Name: core_morph.cpp_MorphModelRotatePointsTwice_FUN_0052bae0
// Address: 0052bae0
// Address Range: [[0052bae0, 0052bb47]]
// Convention: unknown
// Signature: undefined core_morph.cpp_MorphModelRotatePointsTwice_FUN_0052bae0()
// Cross-references:
//   core_biggs.cpp_FUN_004189b0 (004189b0) at 00418a5e [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_005205f0 (005205f0) at 0052065e [UNCONDITIONAL_CALL]
//   core_moloch.cpp_FUN_00529750 (00529750) at 00529805 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052ca90 (0052ca90) at 0052cb34 [UNCONDITIONAL_CALL]
//   core_passngr.cpp_FUN_005460c0 (005460c0) at 00546174 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_FUN_005c7590 (005c7590) at 005c76f2 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_FUN_005e6da0 (005e6da0) at 005e6f3d [UNCONDITIONAL_CALL]
// Function calls:
//   core_morph.cpp_MorphModelCallToRotatePoints_FUN_0052af30

#include "nocturne.h"

/* Signature: undefined1 core_morph.cpp_MorphModelRotatePointsTwice(undefined4 param_1, undefined4
   param_2) */

void core_morph_cpp_MorphModelRotatePointsTwice_FUN_0052bae0(void)

{
  core_morph_cpp_MorphModelCallToRotatePoints_FUN_0052af30();
  core_morph_cpp_MorphModelCallToRotatePoints_FUN_0052af30();
  return;
}


// Assembly code:
// 0052bae0: PUSH EBX
//   Label: core_morph.cpp_MorphModelRotatePointsTwice_FUN_0052bae0
// 0052bae1: PUSH ESI
// 0052bae2: PUSH EDI
// 0052bae3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0052bae7: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0052baeb: FLDZ
// 0052baed: FCOMPP
// 0052baef: FNSTSW AX
// 0052baf1: SAHF
// 0052baf2: JA 0x0052bb40
//   XREF to: 0052bb40 (CONDITIONAL_JUMP)
// 0052baf4: FLD float ptr [ESP + 0x14]
//   Label: LAB_0052baf4
//   XREF to: Stack[0x8] (READ)
// 0052baf8: FLD1
// 0052bafa: FCOMPP
// 0052bafc: FNSTSW AX
// 0052bafe: SAHF
// 0052baff: JNC 0x0052bb09
//   XREF to: 0052bb09 (CONDITIONAL_JUMP)
// 0052bb01: MOV dword ptr [ESP + 0x14],0x3f800000
//   XREF to: Stack[0x8] (WRITE)
// 0052bb09: MOV ESI,dword ptr [EBX + 0x660]
//   Label: LAB_0052bb09
// 0052bb0f: FLD1
// 0052bb11: PUSH ESI
// 0052bb12: FSUB float ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0052bb16: SUB ESP,0x4
// 0052bb19: FSTP float ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0052bb1c: PUSH EBX
// 0052bb1d: CALL core_morph.cpp_MorphModelCallToRotatePoints_FUN_0052af30
//   XREF to: 0052af30 (UNCONDITIONAL_CALL)
// 0052bb22: ADD ESP,0xc
// 0052bb25: MOV EDI,dword ptr [EBX + 0x58]
// 0052bb28: PUSH EDI
// 0052bb29: ADD EBX,0x608
// 0052bb2f: PUSH dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0052bb33: PUSH EBX
// 0052bb34: CALL core_morph.cpp_MorphModelCallToRotatePoints_FUN_0052af30
//   XREF to: 0052af30 (UNCONDITIONAL_CALL)
// 0052bb39: ADD ESP,0xc
// 0052bb3c: POP EDI
// 0052bb3d: POP ESI
// 0052bb3e: POP EBX
// 0052bb3f: RET
// 0052bb40: XOR EDX,EDX
//   Label: LAB_0052bb40
// 0052bb42: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[0x8] (WRITE)
// 0052bb46: JMP 0x0052baf4
//   XREF to: 0052baf4 (UNCONDITIONAL_JUMP)
