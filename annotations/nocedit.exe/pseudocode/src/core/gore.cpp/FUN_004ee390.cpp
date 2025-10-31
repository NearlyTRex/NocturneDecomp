// Name: core_gore.cpp_FUN_004ee390
// Address: 004ee390
// Address Range: [[004ee390, 004ee3a5]]
// Convention: __cdecl
// Signature: CFootstep * core_gore.cpp_FUN_004ee390(CFootstep * this_ptr)
// Function calls:
//   core_dracbrid.cpp_FUN_00486e30

#include "nocturne.h"

CFootstep * __cdecl core_gore_cpp_FUN_004ee390(CFootstep *this_ptr)

{
  int iVar1;
  
  iVar1 = core_dracbrid_cpp_FUN_00486e30();
  return (CFootstep *)(iVar1 + -8);
}


// Assembly code:
// 004ee390: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_gore.cpp_FUN_004ee390
//   XREF to: Stack[0x4] (READ)
// 004ee394: PUSH 0x0
// 004ee396: ADD EAX,0x8
// 004ee399: PUSH EAX
// 004ee39a: CALL core_dracbrid.cpp_FUN_00486e30
//   XREF to: 00486e30 (UNCONDITIONAL_CALL)
// 004ee39f: ADD ESP,0x8
// 004ee3a2: SUB EAX,0x8
// 004ee3a5: RET
