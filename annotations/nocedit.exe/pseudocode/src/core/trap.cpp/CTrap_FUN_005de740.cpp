// Name: core_trap.cpp_CTrap_FUN_005de740
// Address: 005de740
// Address Range: [[005de740, 005de74e]]
// Convention: __cdecl
// Signature: void core_trap.cpp_CTrap_FUN_005de740(CTrap * this_ptr)

#include "nocturne.h"

void __cdecl core_trap_cpp_CTrap_FUN_005de740(CTrap *this_ptr)

{
  undefined4 in_stack_00000008;
  
  *(undefined4 *)(this_ptr->field2_0x15c + 0x178) = in_stack_00000008;
  return;
}


// Assembly code:
// 005de740: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_trap.cpp_CTrap_FUN_005de740
//   XREF to: Stack[0x4] (READ)
// 005de744: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005de748: MOV dword ptr [EDX + 0x2d4],EAX
// 005de74e: RET
