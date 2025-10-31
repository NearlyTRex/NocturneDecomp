// Name: core_turret.cpp_CTurret_FUN_005e34b0
// Address: 005e34b0
// Address Range: [[005e34b0, 005e34cf]]
// Convention: __cdecl
// Signature: int core_turret.cpp_CTurret_FUN_005e34b0(CTurret * this_ptr)

#include "nocturne.h"

int __cdecl core_turret_cpp_CTurret_FUN_005e34b0(CTurret *this_ptr)

{
  undefined4 in_stack_00000008;
  
  if (*(int *)this_ptr->field12_0x85c != 0) {
    return 0;
  }
  *(undefined4 *)this_ptr->field12_0x85c = in_stack_00000008;
  return 1;
}


// Assembly code:
// 005e34b0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_turret.cpp_CTurret_FUN_005e34b0
//   XREF to: Stack[0x4] (READ)
// 005e34b4: CMP dword ptr [EAX + 0x85c],0x0
// 005e34bb: JZ 0x005e34c0
//   XREF to: 005e34c0 (CONDITIONAL_JUMP)
// 005e34bd: XOR EAX,EAX
// 005e34bf: RET
// 005e34c0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: LAB_005e34c0
//   XREF to: Stack[0x8] (READ)
// 005e34c4: MOV dword ptr [EAX + 0x85c],EDX
// 005e34ca: MOV EAX,0x1
// 005e34cf: RET
