// Name: core_trap.cpp_CTrap_FUN_005de760
// Address: 005de760
// Address Range: [[005de760, 005de76a]]
// Convention: __cdecl
// Signature: int core_trap.cpp_CTrap_FUN_005de760(CTrap * this_ptr)

#include "nocturne.h"

int __cdecl core_trap_cpp_CTrap_FUN_005de760(CTrap *this_ptr)

{
  return *(int *)(this_ptr->field2_0x15c + 0x178);
}


// Assembly code:
// 005de760: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_trap.cpp_CTrap_FUN_005de760
//   XREF to: Stack[0x4] (READ)
// 005de764: MOV EAX,dword ptr [EAX + 0x2d4]
// 005de76a: RET
