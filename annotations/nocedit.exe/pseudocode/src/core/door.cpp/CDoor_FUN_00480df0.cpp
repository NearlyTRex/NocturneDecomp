// Name: core_door.cpp_CDoor_FUN_00480df0
// Address: 00480df0
// Address Range: [[00480df0, 00480dfa]]
// Convention: __cdecl
// Signature: int core_door.cpp_CDoor_FUN_00480df0(CDoor * this_ptr)

#include "nocturne.h"

int __cdecl core_door_cpp_CDoor_FUN_00480df0(CDoor *this_ptr)

{
  return this_ptr->block_virtual_director_flag;
}


// Assembly code:
// 00480df0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_door.cpp_CDoor_FUN_00480df0
//   XREF to: Stack[0x4] (READ)
// 00480df4: MOV EAX,dword ptr [EAX + 0x9d0]
// 00480dfa: RET
