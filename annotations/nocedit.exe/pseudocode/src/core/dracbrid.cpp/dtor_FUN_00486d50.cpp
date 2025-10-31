// Name: core_dracbrid.cpp_dtor_FUN_00486d50
// Address: 00486d50
// Address Range: [[00486d50, 00486d65]]
// Convention: __cdecl
// Signature: SFreaky * core_dracbrid.cpp_dtor_FUN_00486d50(SFreaky * this_ptr)
// Function calls:
//   core_dracbrid.cpp_FUN_00486e30

#include "nocturne.h"

SFreaky * __cdecl core_dracbrid_cpp_dtor_FUN_00486d50(SFreaky *this_ptr)

{
  int iVar1;
  
  iVar1 = core_dracbrid_cpp_FUN_00486e30();
  return (SFreaky *)(iVar1 + -0x20);
}


// Assembly code:
// 00486d50: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_dracbrid.cpp_dtor_FUN_00486d50
//   XREF to: Stack[0x4] (READ)
// 00486d54: PUSH 0x0
// 00486d56: ADD EAX,0x20
// 00486d59: PUSH EAX
// 00486d5a: CALL core_dracbrid.cpp_FUN_00486e30
//   XREF to: 00486e30 (UNCONDITIONAL_CALL)
// 00486d5f: ADD ESP,0x8
// 00486d62: SUB EAX,0x20
// 00486d65: RET
