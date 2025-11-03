// Name: core_morph.cpp_FUN_0052b600
// Address: 0052b600
// Address Range: [[0052b600, 0052b630]]
// Convention: unknown
// Signature: undefined core_morph.cpp_FUN_0052b600()
// Cross-references:
//   core_biggs.cpp_FUN_004189b0 (004189b0) at 00418a24 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_processMorph_FUN_00520ba0 (00520ba0) at 00520ccd [UNCONDITIONAL_CALL]
//   core_moloch.cpp_FUN_00529750 (00529750) at 005297ea [UNCONDITIONAL_CALL]
//   core_passngr.cpp_FUN_005460c0 (005460c0) at 00546165 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_FUN_005c7590 (005c7590) at 005c76a0 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_FUN_005e6da0 (005e6da0) at 005e6f0e [UNCONDITIONAL_CALL]
// Function calls:
//   core_morph.cpp_FUN_0052aa30

#include "nocturne.h"

void core_morph_cpp_FUN_0052b600
               (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4,
               int param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  core_morph_cpp_FUN_0052aa30(param_6 * 0x608 + param_5,param_8,param_7,unaff_EBX);
  return;
}


// Assembly code:
// 0052b600: PUSH EBX
//   Label: core_morph.cpp_FUN_0052b600
// 0052b601: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0052b605: PUSH EDX
// 0052b606: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0052b60a: LEA EAX,[EDX*0x4 + 0x0]
// 0052b611: SUB EAX,EDX
// 0052b613: SHL EAX,0x6
// 0052b616: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 0052b61a: ADD EAX,EDX
// 0052b61c: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0052b620: SHL EAX,0x3
// 0052b623: PUSH ECX
// 0052b624: ADD EAX,EBX
// 0052b626: PUSH EAX
// 0052b627: CALL core_morph.cpp_FUN_0052aa30
//   XREF to: 0052aa30 (UNCONDITIONAL_CALL)
// 0052b62c: ADD ESP,0xc
// 0052b62f: POP EBX
// 0052b630: RET
