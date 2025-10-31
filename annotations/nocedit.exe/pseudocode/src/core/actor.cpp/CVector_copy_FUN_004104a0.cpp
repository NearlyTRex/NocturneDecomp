// Name: core_actor.cpp_CVector_copy_FUN_004104a0
// Address: 004104a0
// Address Range: [[004104a0, 004104c6]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CVector_copy_FUN_004104a0(CVector3f * this_ptr, CVector3f * other)

#include "nocturne.h"

void __cdecl core_actor_cpp_CVector_copy_FUN_004104a0(CVector3f *this_ptr,CVector3f *other)

{
  this_ptr->x = other->x;
  this_ptr->y = other->y;
  this_ptr->z = other->z;
  return;
}


// Assembly code:
// 004104a0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_actor.cpp_CVector_copy_FUN_004104a0
//   XREF to: Stack[0x4] (READ)
// 004104a4: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 004104a8: ADD EAX,0x4
// 004104ab: MOV EDX,dword ptr [ECX]
// 004104ad: MOV dword ptr [EAX + -0x4],EDX
// 004104b0: LEA EDX,[ECX + 0x4]
// 004104b3: ADD EAX,0x4
// 004104b6: MOV EDX,dword ptr [EDX]
// 004104b8: MOV dword ptr [EAX + -0x4],EDX
// 004104bb: LEA EDX,[ECX + 0x8]
// 004104be: SUB EAX,0x8
// 004104c1: MOV EDX,dword ptr [EDX]
// 004104c3: MOV dword ptr [EAX + 0x8],EDX
// 004104c6: RET
