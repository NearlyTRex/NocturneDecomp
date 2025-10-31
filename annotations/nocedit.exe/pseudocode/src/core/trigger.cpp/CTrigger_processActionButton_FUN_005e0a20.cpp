// Name: core_trigger.cpp_CTrigger_processActionButton_FUN_005e0a20
// Address: 005e0a20
// Address Range: [[005e0a20, 005e0a42]]
// Convention: __cdecl
// Signature: int core_trigger.cpp_CTrigger_processActionButton_FUN_005e0a20(CTrigger * this_ptr)

#include "nocturne.h"

int __cdecl core_trigger_cpp_CTrigger_processActionButton_FUN_005e0a20(CTrigger *this_ptr)

{
  if (*(int *)(this_ptr->field1_0x158 + 0x1c) != 3) {
    return 1;
  }
  this_ptr->field1_0x158[0x198] = '\x01';
  this_ptr->field1_0x158[0x199] = '\0';
  this_ptr->field1_0x158[0x19a] = '\0';
  this_ptr->field1_0x158[0x19b] = '\0';
  return 1;
}


// Assembly code:
// 005e0a20: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_trigger.cpp_CTrigger_processActionButton_FUN_005e0a20
//   XREF to: Stack[0x4] (READ)
// 005e0a24: CMP dword ptr [EAX + 0x174],0x3
// 005e0a2b: JZ 0x005e0a33
//   XREF to: 005e0a33 (CONDITIONAL_JUMP)
// 005e0a2d: MOV EAX,0x1
// 005e0a32: RET
// 005e0a33: MOV dword ptr [EAX + 0x2f0],0x1
//   Label: LAB_005e0a33
// 005e0a3d: MOV EAX,0x1
// 005e0a42: RET
