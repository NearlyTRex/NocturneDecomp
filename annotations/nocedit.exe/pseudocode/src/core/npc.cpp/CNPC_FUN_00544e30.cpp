// Name: core_npc.cpp_CNPC_FUN_00544e30
// Address: 00544e30
// Address Range: [[00544e30, 00544e39]]
// Convention: __cdecl
// Signature: int core_npc.cpp_CNPC_FUN_00544e30(CNPC * this_ptr)

#include "nocturne.h"

int __cdecl core_npc_cpp_CNPC_FUN_00544e30(CNPC *this_ptr)

{
  return (int)&this_ptr->model_name;
}


// Assembly code:
// 00544e30: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_npc.cpp_CNPC_FUN_00544e30
//   XREF to: Stack[0x4] (READ)
// 00544e34: ADD EAX,0xbe24
// 00544e39: RET
