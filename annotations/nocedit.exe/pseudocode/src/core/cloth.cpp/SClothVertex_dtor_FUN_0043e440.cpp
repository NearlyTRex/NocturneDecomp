// Name: core_cloth.cpp_SClothVertex_dtor_FUN_0043e440
// Address: 0043e440
// Address Range: [[0043e440, 0043e459]]
// Convention: __cdecl
// Signature: SClothVertex * core_cloth.cpp_SClothVertex_dtor_FUN_0043e440(SClothVertex * this_ptr)
// Function calls:
//   core_cloth.cpp_freeVectors_FUN_0043e460

#include "nocturne.h"

SClothVertex * __cdecl core_cloth_cpp_SClothVertex_dtor_FUN_0043e440(SClothVertex *this_ptr)

{
  int iVar1;
  
  iVar1 = core_cloth_cpp_freeVectors_FUN_0043e460((CVector3f **)(this_ptr[0xd].field0_0x0 + 0xf));
  return (SClothVertex *)(iVar1 + -0xec);
}


// Assembly code:
// 0043e440: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_cloth.cpp_SClothVertex_dtor_FUN_0043e440
//   XREF to: Stack[0x4] (READ)
// 0043e444: PUSH 0x0
// 0043e446: ADD EAX,0xec
// 0043e44b: PUSH EAX
// 0043e44c: CALL core_cloth.cpp_freeVectors_FUN_0043e460
//   XREF to: 0043e460 (UNCONDITIONAL_CALL)
// 0043e451: ADD ESP,0x8
// 0043e454: SUB EAX,0xec
// 0043e459: RET
