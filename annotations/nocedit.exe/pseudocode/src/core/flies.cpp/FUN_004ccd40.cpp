// Name: core_flies.cpp_FUN_004ccd40
// Address: 004ccd40
// Address Range: [[004ccd40, 004ccd55]]
// Convention: __cdecl
// Signature: SFly * core_flies.cpp_FUN_004ccd40(SFly * this_ptr)
// Function calls:
//   core_dracbrid.cpp_FUN_00486e30

#include "nocturne.h"

SFly * __cdecl core_flies_cpp_FUN_004ccd40(SFly *this_ptr)

{
  int iVar1;
  
  iVar1 = core_dracbrid_cpp_FUN_00486e30();
  return (SFly *)(iVar1 + -4);
}


// Assembly code:
// 004ccd40: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_flies.cpp_FUN_004ccd40
//   XREF to: Stack[0x4] (READ)
// 004ccd44: PUSH 0x0
// 004ccd46: ADD EAX,0x4
// 004ccd49: PUSH EAX
// 004ccd4a: CALL core_dracbrid.cpp_FUN_00486e30
//   XREF to: 00486e30 (UNCONDITIONAL_CALL)
// 004ccd4f: ADD ESP,0x8
// 004ccd52: SUB EAX,0x4
// 004ccd55: RET
