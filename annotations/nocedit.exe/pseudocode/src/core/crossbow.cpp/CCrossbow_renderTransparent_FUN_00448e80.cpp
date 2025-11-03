// Name: core_crossbow.cpp_CCrossbow_renderTransparent_FUN_00448e80
// Address: 00448e80
// Address Range: [[00448e80, 00448ea3]]
// Convention: __cdecl
// Signature: int core_crossbow.cpp_CCrossbow_renderTransparent_FUN_00448e80(CCrossbow * this_ptr)
// Function calls:
//   core_flame.cpp_FUN_004ca110

#include "nocturne.h"

int __cdecl core_crossbow_cpp_CCrossbow_renderTransparent_FUN_00448e80(CCrossbow *this_ptr)

{
  if (*(int *)this_ptr->field1_0x578 == 0) {
    return 0;
  }
  core_flame_cpp_FUN_004ca110();
  return 1;
}


// Assembly code:
// 00448e80: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_crossbow.cpp_CCrossbow_renderTransparent_FUN_00448e80
//   XREF to: Stack[0x4] (READ)
// 00448e84: CMP dword ptr [EAX + 0x578],0x0
// 00448e8b: JNZ 0x00448e90
//   XREF to: 00448e90 (CONDITIONAL_JUMP)
// 00448e8d: XOR EAX,EAX
// 00448e8f: RET
// 00448e90: ADD EAX,0x57c
//   Label: LAB_00448e90
// 00448e95: PUSH EAX
// 00448e96: CALL core_flame.cpp_FUN_004ca110
//   XREF to: 004ca110 (UNCONDITIONAL_CALL)
// 00448e9b: MOV EAX,0x1
// 00448ea0: ADD ESP,0x4
// 00448ea3: RET
