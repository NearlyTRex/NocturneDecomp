// Name: core_dracbrid.cpp_FUN_00485bc0
// Address: 00485bc0
// Address Range: [[00485bc0, 00485bde]]
// Convention: unknown
// Signature: undefined core_dracbrid.cpp_FUN_00485bc0()
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042bc20

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_draculabride.cpp_FUN_00485bc0(undefined4 param_1, undefined4
   param_2) */

int core_dracbrid_cpp_FUN_00485bc0(void)

{
  int iVar1;
  CCharacter *in_stack_00000004;
  
  if (in_stack_00000004[1].base_actor.field23_0x124 != 0) {
    return 0;
  }
  iVar1 = core_charactr_cpp_CCharacter_FUN_0042bc20(in_stack_00000004);
  return iVar1;
}


// Assembly code:
// 00485bc0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_dracbrid.cpp_FUN_00485bc0
//   XREF to: Stack[0x4] (READ)
// 00485bc4: CMP dword ptr [EAX + 0xbf48],0x0
// 00485bcb: JZ 0x00485bd0
//   XREF to: 00485bd0 (CONDITIONAL_JUMP)
// 00485bcd: XOR EAX,EAX
//   Label: caseD_f
// 00485bcf: RET
// 00485bd0: MOV ECX,dword ptr [ESP + 0x8]
//   Label: LAB_00485bd0
//   XREF to: Stack[0x8] (READ)
// 00485bd4: PUSH ECX
// 00485bd5: PUSH EAX
// 00485bd6: CALL core_charactr.cpp_CCharacter_FUN_0042bc20
//   XREF to: 0042bc20 (UNCONDITIONAL_CALL)
// 00485bdb: ADD ESP,0x8
// 00485bde: RET
