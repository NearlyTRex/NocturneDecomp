// Name: core_hero.cpp_CHeroPlaceholder_FUN_004f3d20
// Address: 004f3d20
// Address Range: [[004f3d20, 004f3d4d]]
// Convention: __cdecl
// Signature: void core_hero.cpp_CHeroPlaceholder_FUN_004f3d20(CHeroPlaceholder * this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHeroPlaceholder_FUN_004f3d20(CHeroPlaceholder *this_ptr)

{
  undefined4 *in_stack_00000008;
  
  in_stack_00000008[1] = 0;
  in_stack_00000008[2] = 0xbf800000;
  in_stack_00000008[3] = 0x3f800000;
  in_stack_00000008[4] = 0x40c00000;
  in_stack_00000008[5] = 0x3f800000;
  *in_stack_00000008 = 0xbf800000;
  return;
}


// Assembly code:
// 004f3d20: MOV EAX,dword ptr [ESP + 0x8]
//   Label: core_hero.cpp_CHeroPlaceholder_FUN_004f3d20
//   XREF to: Stack[0x8] (READ)
// 004f3d24: MOV dword ptr [EAX + 0x4],0x0
// 004f3d2b: MOV dword ptr [EAX + 0x8],0xbf800000
// 004f3d32: MOV dword ptr [EAX + 0xc],0x3f800000
// 004f3d39: MOV dword ptr [EAX + 0x10],0x40c00000
// 004f3d40: MOV dword ptr [EAX + 0x14],0x3f800000
// 004f3d47: MOV dword ptr [EAX],0xbf800000
// 004f3d4d: RET
