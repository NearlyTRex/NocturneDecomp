// Name: core_morph.cpp_SMorphControlPoint_dtor_FUN_0052cc70
// Address: 0052cc70
// Address Range: [[0052cc70, 0052cc85]]
// Convention: __cdecl
// Signature: SMorphControlPoint * core_morph.cpp_SMorphControlPoint_dtor_FUN_0052cc70(SMorphControlPoint * this_ptr)
// Function calls:
//   core_morph.cpp_FUN_0052cc90

#include "nocturne.h"

SMorphControlPoint * __cdecl
core_morph_cpp_SMorphControlPoint_dtor_FUN_0052cc70(SMorphControlPoint *this_ptr)

{
  int iVar1;
  
  iVar1 = core_morph_cpp_FUN_0052cc90();
  return (SMorphControlPoint *)(iVar1 + -8);
}


// Assembly code:
// 0052cc70: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_morph.cpp_SMorphControlPoint_dtor_FUN_0052cc70
//   XREF to: Stack[0x4] (READ)
// 0052cc74: PUSH 0x0
// 0052cc76: ADD EAX,0x8
// 0052cc79: PUSH EAX
// 0052cc7a: CALL core_morph.cpp_FUN_0052cc90
//   XREF to: 0052cc90 (UNCONDITIONAL_CALL)
// 0052cc7f: ADD ESP,0x8
// 0052cc82: SUB EAX,0x8
// 0052cc85: RET
