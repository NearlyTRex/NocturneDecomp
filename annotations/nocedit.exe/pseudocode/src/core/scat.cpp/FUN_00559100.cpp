// Name: core_scat.cpp_FUN_00559100
// Address: 00559100
// Address Range: [[00559100, 00559112]]
// Convention: unknown
// Signature: undefined core_scat.cpp_FUN_00559100()
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042f8a0

#include "nocturne.h"

/* Signature: undefined1 actors_hero_scat.cpp_FUN_00559100(undefined4 param_1, undefined4 param_2)
    */

void core_scat_cpp_FUN_00559100(void)

{
  CCharacter *in_stack_00000004;
  
  core_charactr_cpp_CCharacter_FUN_0042f8a0(in_stack_00000004);
  return;
}


// Assembly code:
// 00559100: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_scat.cpp_FUN_00559100
//   XREF to: Stack[0x8] (READ)
// 00559104: PUSH EDX
// 00559105: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00559109: PUSH ECX
// 0055910a: CALL core_charactr.cpp_CCharacter_FUN_0042f8a0
//   XREF to: 0042f8a0 (UNCONDITIONAL_CALL)
// 0055910f: ADD ESP,0x8
// 00559112: RET
