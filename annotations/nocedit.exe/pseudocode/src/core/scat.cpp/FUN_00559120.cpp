// Name: core_scat.cpp_FUN_00559120
// Address: 00559120
// Address Range: [[00559120, 00559132]]
// Convention: unknown
// Signature: undefined core_scat.cpp_FUN_00559120()
// Function calls:
//   core_hero.cpp_CHero_FUN_004f3f20

#include "nocturne.h"

/* Signature: undefined1 actors_hero_scat.cpp_FUN_00559120(undefined4 param_1, undefined4 param_2)
    */

void core_scat_cpp_FUN_00559120(void)

{
  CHero *in_stack_00000004;
  
  core_hero_cpp_CHero_FUN_004f3f20(in_stack_00000004);
  return;
}


// Assembly code:
// 00559120: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_scat.cpp_FUN_00559120
//   XREF to: Stack[0x8] (READ)
// 00559124: PUSH EDX
// 00559125: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00559129: PUSH ECX
// 0055912a: CALL core_hero.cpp_CHero_FUN_004f3f20
//   XREF to: 004f3f20 (UNCONDITIONAL_CALL)
// 0055912f: ADD ESP,0x8
// 00559132: RET
