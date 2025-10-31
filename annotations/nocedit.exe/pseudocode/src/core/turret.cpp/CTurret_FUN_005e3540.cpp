// Name: core_turret.cpp_CTurret_FUN_005e3540
// Address: 005e3540
// Address Range: [[005e3540, 005e355b]]
// Convention: __cdecl
// Signature: void core_turret.cpp_CTurret_FUN_005e3540(CTurret * this_ptr)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_FUN_005e3540(CTurret *this_ptr)

{
  int in_stack_00000008;
  
  if (in_stack_00000008 != *(int *)this_ptr->field12_0x85c) {
    return;
  }
  this_ptr->field12_0x85c[0] = '\0';
  this_ptr->field12_0x85c[1] = '\0';
  this_ptr->field12_0x85c[2] = '\0';
  this_ptr->field12_0x85c[3] = '\0';
  return;
}


// Assembly code:
// 005e3540: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_turret.cpp_CTurret_FUN_005e3540
//   XREF to: Stack[0x4] (READ)
// 005e3544: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005e3548: CMP EDX,dword ptr [EAX + 0x85c]
// 005e354e: JZ 0x005e3551
//   XREF to: 005e3551 (CONDITIONAL_JUMP)
// 005e3550: RET
// 005e3551: MOV dword ptr [EAX + 0x85c],0x0
//   Label: LAB_005e3551
// 005e355b: RET
