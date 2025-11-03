// Name: core_skeleton.cpp_SVert_dtor_FUN_005a1f90
// Address: 005a1f90
// Address Range: [[005a1f90, 005a1fa5]]
// Convention: __cdecl
// Signature: SVert * core_skeleton.cpp_SVert_dtor_FUN_005a1f90(SVert * this_ptr)
// Function calls:
//   core_cloth.cpp_freeVectors_FUN_0043e460

#include "nocturne.h"

SVert * __cdecl core_skeleton_cpp_SVert_dtor_FUN_005a1f90(SVert *this_ptr)

{
  int iVar1;
  
  iVar1 = core_cloth_cpp_freeVectors_FUN_0043e460((CVector3f **)&this_ptr->position);
  return (SVert *)(iVar1 + -0x10);
}


// Assembly code:
// 005a1f90: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_skeleton.cpp_SVert_dtor_FUN_005a1f90
//   XREF to: Stack[0x4] (READ)
// 005a1f94: PUSH 0x0
// 005a1f96: ADD EAX,0x10
// 005a1f99: PUSH EAX
// 005a1f9a: CALL core_cloth.cpp_freeVectors_FUN_0043e460
//   XREF to: 0043e460 (UNCONDITIONAL_CALL)
// 005a1f9f: ADD ESP,0x8
// 005a1fa2: SUB EAX,0x10
// 005a1fa5: RET
