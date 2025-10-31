// Name: core_manpuz.cpp_FUN_0050b960
// Address: 0050b960
// Address Range: [[0050b960, 0050b975]]
// Convention: __cdecl
// Signature: SGem * core_manpuz.cpp_FUN_0050b960(SGem * this_ptr)
// Function calls:
//   core_manpuz.cpp_FUN_0050ba70

#include "nocturne.h"

SGem * __cdecl core_manpuz_cpp_FUN_0050b960(SGem *this_ptr)

{
  int iVar1;
  
  iVar1 = core_manpuz_cpp_FUN_0050ba70();
  return (SGem *)(iVar1 + -0x3c);
}


// Assembly code:
// 0050b960: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_manpuz.cpp_FUN_0050b960
//   XREF to: Stack[0x4] (READ)
// 0050b964: PUSH 0x0
// 0050b966: ADD EAX,0x3c
// 0050b969: PUSH EAX
// 0050b96a: CALL core_manpuz.cpp_FUN_0050ba70
//   XREF to: 0050ba70 (UNCONDITIONAL_CALL)
// 0050b96f: ADD ESP,0x8
// 0050b972: SUB EAX,0x3c
// 0050b975: RET
