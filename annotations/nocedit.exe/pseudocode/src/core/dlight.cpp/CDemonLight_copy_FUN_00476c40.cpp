// Name: core_dlight.cpp_CDemonLight_copy_FUN_00476c40
// Address: 00476c40
// Address Range: [[00476c40, 00476c4e]]
// Convention: __cdecl
// Signature: CDemonLight * core_dlight.cpp_CDemonLight_copy_FUN_00476c40(CDemonLight * this_ptr, CDemonLight * other)

#include "nocturne.h"

CDemonLight * __cdecl
core_dlight_cpp_CDemonLight_copy_FUN_00476c40(CDemonLight *this_ptr,CDemonLight *other)

{
  (this_ptr->base).base.field0_0x0 = (other->base).base.field0_0x0;
  return this_ptr;
}


// Assembly code:
// 00476c40: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_dlight.cpp_CDemonLight_copy_FUN_00476c40
//   XREF to: Stack[0x4] (READ)
// 00476c44: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00476c48: MOV EAX,dword ptr [EAX]
// 00476c4a: MOV dword ptr [EDX],EAX
// 00476c4c: MOV EAX,EDX
// 00476c4e: RET
