// Name: core_teleport.cpp_CTeleportDest_FUN_005da790
// Address: 005da790
// Address Range: [[005da790, 005da7bd]]
// Convention: __cdecl
// Signature: void core_teleport.cpp_CTeleportDest_FUN_005da790(CTeleportDest * this_ptr)

#include "nocturne.h"

void __cdecl core_teleport_cpp_CTeleportDest_FUN_005da790(CTeleportDest *this_ptr)

{
  undefined4 *in_stack_00000008;
  
  in_stack_00000008[1] = 0xbf800000;
  in_stack_00000008[2] = 0xc0e00000;
  in_stack_00000008[3] = 0x40e00000;
  in_stack_00000008[4] = 0x41000000;
  in_stack_00000008[5] = 0x40e00000;
  *in_stack_00000008 = 0xc0e00000;
  return;
}


// Assembly code:
// 005da790: MOV EAX,dword ptr [ESP + 0x8]
//   Label: core_teleport.cpp_CTeleportDest_FUN_005da790
//   XREF to: Stack[0x8] (READ)
// 005da794: MOV dword ptr [EAX + 0x4],0xbf800000
// 005da79b: MOV dword ptr [EAX + 0x8],0xc0e00000
// 005da7a2: MOV dword ptr [EAX + 0xc],0x40e00000
// 005da7a9: MOV dword ptr [EAX + 0x10],0x41000000
// 005da7b0: MOV dword ptr [EAX + 0x14],0x40e00000
// 005da7b7: MOV dword ptr [EAX],0xc0e00000
// 005da7bd: RET
