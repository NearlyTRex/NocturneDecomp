// Name: core_npc.cpp_FUN_00544e10
// Address: 00544e10
// Address Range: [[00544e10, 00544e23]]
// Convention: __cdecl
// Signature: int core_npc.cpp_FUN_00544e10(CNPC * this_ptr)

#include "nocturne.h"

int __cdecl core_npc_cpp_FUN_00544e10(CNPC *this_ptr)

{
  return (uint)(this_ptr->shoot_me == 0);
}


// Assembly code:
// 00544e10: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_npc.cpp_FUN_00544e10
//   XREF to: Stack[0x4] (READ)
// 00544e14: CMP dword ptr [EAX + 0x1f700],0x0
// 00544e1b: SETZ AL
// 00544e1e: AND EAX,0xff
// 00544e23: RET
