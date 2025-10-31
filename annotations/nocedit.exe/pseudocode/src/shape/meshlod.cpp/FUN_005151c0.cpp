// Name: shape_meshlod.cpp_FUN_005151c0
// Address: 005151c0
// Address Range: [[005151c0, 005151df]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_005151c0()

#include "nocturne.h"

undefined4 shape_meshlod_cpp_FUN_005151c0(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  if (((in_stack_00000008 != *(int *)(in_stack_00000004 + 0x34)) &&
      (in_stack_00000008 != *(int *)(in_stack_00000004 + 0x38))) &&
     (in_stack_00000008 != *(int *)(in_stack_00000004 + 0x3c))) {
    return 0;
  }
  return 1;
}


// Assembly code:
// 005151c0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: shape_meshlod.cpp_FUN_005151c0
//   XREF to: Stack[0x4] (READ)
// 005151c4: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005151c8: CMP EDX,dword ptr [EAX + 0x34]
// 005151cb: JZ 0x005151d7
//   XREF to: 005151d7 (CONDITIONAL_JUMP)
// 005151cd: CMP EDX,dword ptr [EAX + 0x38]
// 005151d0: JZ 0x005151d7
//   XREF to: 005151d7 (CONDITIONAL_JUMP)
// 005151d2: CMP EDX,dword ptr [EAX + 0x3c]
// 005151d5: JNZ 0x005151dd
//   XREF to: 005151dd (CONDITIONAL_JUMP)
// 005151d7: MOV EAX,0x1
//   Label: LAB_005151d7
// 005151dc: RET
// 005151dd: XOR EAX,EAX
//   Label: LAB_005151dd
// 005151df: RET
