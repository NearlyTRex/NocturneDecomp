// Name: core_wateract.cpp_CWaterActor_FUN_005eb710
// Address: 005eb710
// Address Range: [[005eb710, 005eb720]]
// Convention: __cdecl
// Signature: int core_wateract.cpp_CWaterActor_FUN_005eb710(CWaterActor * this_ptr)

#include "nocturne.h"

int __cdecl core_wateract_cpp_CWaterActor_FUN_005eb710(CWaterActor *this_ptr)

{
  int *in_stack_00000008;
  
  if (*in_stack_00000008 == 3) {
    return 3;
  }
  return 0;
}


// Assembly code:
// 005eb710: MOV EAX,dword ptr [ESP + 0x8]
//   Label: core_wateract.cpp_CWaterActor_FUN_005eb710
//   XREF to: Stack[0x8] (READ)
// 005eb714: MOV EDX,dword ptr [EAX]
// 005eb716: CMP EDX,0x3
// 005eb719: JNZ 0x005eb71e
//   XREF to: 005eb71e (CONDITIONAL_JUMP)
// 005eb71b: MOV EAX,EDX
// 005eb71d: RET
// 005eb71e: XOR EAX,EAX
//   Label: LAB_005eb71e
// 005eb720: RET
