// Name: core_filmreel.cpp_FUN_004becd0
// Address: 004becd0
// Address Range: [[004becd0, 004becfd]]
// Convention: unknown
// Signature: undefined core_filmreel.cpp_FUN_004becd0()

#include "nocturne.h"

/* Signature: undefined1 actors_other_filmreel.cpp_FUN_004becd0(undefined1 param_1, undefined4
   param_2) */

void core_filmreel_cpp_FUN_004becd0(void)

{
  undefined4 *in_stack_00000008;
  
  in_stack_00000008[1] = 0;
  in_stack_00000008[2] = 0xbdcccccd;
  in_stack_00000008[3] = 0x3f800000;
  in_stack_00000008[4] = 0x40400000;
  in_stack_00000008[5] = 0x3dcccccd;
  *in_stack_00000008 = 0xbf800000;
  return;
}


// Assembly code:
// 004becd0: MOV EAX,dword ptr [ESP + 0x8]
//   Label: core_filmreel.cpp_FUN_004becd0
//   XREF to: Stack[0x8] (READ)
// 004becd4: MOV dword ptr [EAX + 0x4],0x0
// 004becdb: MOV dword ptr [EAX + 0x8],0xbdcccccd
// 004bece2: MOV dword ptr [EAX + 0xc],0x3f800000
// 004bece9: MOV dword ptr [EAX + 0x10],0x40400000
// 004becf0: MOV dword ptr [EAX + 0x14],0x3dcccccd
// 004becf7: MOV dword ptr [EAX],0xbf800000
// 004becfd: RET
