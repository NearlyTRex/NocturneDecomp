// Name: core_inv.cpp_CInventory_dtor_FUN_004fd0c0
// Address: 004fd0c0
// Address Range: [[004fd0c0, 004fd0d1]]
// Convention: __cdecl
// Signature: int core_inv.cpp_CInventory_dtor_FUN_004fd0c0(CInventory * this_ptr)
// Cross-references:
//   core_hero.cpp_CHero_dtor_FUN_004f2470 (004f2470) at 004f249e [UNCONDITIONAL_CALL]
// Function calls:
//   core_inv.cpp_CInventory_clear_FUN_004fd0e0

#include "nocturne.h"

int __cdecl core_inv_cpp_CInventory_dtor_FUN_004fd0c0(CInventory *this_ptr)

{
  core_inv_cpp_CInventory_clear_FUN_004fd0e0(this_ptr);
  return (int)this_ptr;
}


// Assembly code:
// 004fd0c0: PUSH EBX
//   Label: core_inv.cpp_CInventory_dtor_FUN_004fd0c0
// 004fd0c1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004fd0c5: PUSH EBX
// 004fd0c6: CALL core_inv.cpp_CInventory_clear_FUN_004fd0e0
//   XREF to: 004fd0e0 (UNCONDITIONAL_CALL)
// 004fd0cb: ADD ESP,0x4
// 004fd0ce: MOV EAX,EBX
// 004fd0d0: POP EBX
// 004fd0d1: RET
