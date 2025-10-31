// Name: core_fire.cpp_CCrater_dtor_FUN_004c95a0
// Address: 004c95a0
// Address Range: [[004c95a0, 004c95b5]]
// Convention: __cdecl
// Signature: CCrater * core_fire.cpp_CCrater_dtor_FUN_004c95a0(CCrater * this_ptr)
// Function calls:
//   core_cloth.cpp_freeVectors_FUN_0043e460

#include "nocturne.h"

CCrater * __cdecl core_fire_cpp_CCrater_dtor_FUN_004c95a0(CCrater *this_ptr)

{
  int iVar1;
  
  iVar1 = core_cloth_cpp_freeVectors_FUN_0043e460((CVector3f **)(this_ptr->field0_0x0 + 0x1c));
  return (CCrater *)(iVar1 + -0x1c);
}


// Assembly code:
// 004c95a0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_fire.cpp_CCrater_dtor_FUN_004c95a0
//   XREF to: Stack[0x4] (READ)
// 004c95a4: PUSH 0x0
// 004c95a6: ADD EAX,0x1c
// 004c95a9: PUSH EAX
// 004c95aa: CALL core_cloth.cpp_freeVectors_FUN_0043e460
//   XREF to: 0043e460 (UNCONDITIONAL_CALL)
// 004c95af: ADD ESP,0x8
// 004c95b2: SUB EAX,0x1c
// 004c95b5: RET
