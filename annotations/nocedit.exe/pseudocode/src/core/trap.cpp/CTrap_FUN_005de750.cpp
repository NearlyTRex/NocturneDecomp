// Name: core_trap.cpp_CTrap_FUN_005de750
// Address: 005de750
// Address Range: [[005de750, 005de75e]]
// Convention: __cdecl
// Signature: void core_trap.cpp_CTrap_FUN_005de750(CTrap * this_ptr)

#include "nocturne.h"

void __cdecl core_trap_cpp_CTrap_FUN_005de750(CTrap *this_ptr)

{
  this_ptr->field2_0x15c[0x178] = '\0';
  this_ptr->field2_0x15c[0x179] = '\0';
  this_ptr->field2_0x15c[0x17a] = '\0';
  this_ptr->field2_0x15c[0x17b] = '\0';
  return;
}


// Assembly code:
// 005de750: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_trap.cpp_CTrap_FUN_005de750
//   XREF to: Stack[0x4] (READ)
// 005de754: MOV dword ptr [EAX + 0x2d4],0x0
// 005de75e: RET
