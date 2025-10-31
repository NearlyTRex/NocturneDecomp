// Name: core_scat.cpp_CSCat_load_FUN_00557db0
// Address: 00557db0
// Address Range: [[00557db0, 00557dbd]]
// Convention: unknown
// Signature: undefined core_scat.cpp_CSCat_load_FUN_00557db0()
// Function calls:
//   core_hero.cpp_CHero_serialize_FUN_004f2610

#include "nocturne.h"

/* Signature: undefined1 actors_hero_scat.cpp_CSCat_load(CScat* param_1) */

void core_scat_cpp_CSCat_load_FUN_00557db0(void)

{
  CHero *in_stack_00000004;
  
  core_hero_cpp_CHero_serialize_FUN_004f2610(in_stack_00000004);
  return;
}


// Assembly code:
// 00557db0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_scat.cpp_CSCat_load_FUN_00557db0
//   XREF to: Stack[0x4] (READ)
// 00557db4: PUSH EDX
// 00557db5: CALL core_hero.cpp_CHero_serialize_FUN_004f2610
//   XREF to: 004f2610 (UNCONDITIONAL_CALL)
// 00557dba: ADD ESP,0x4
// 00557dbd: RET
