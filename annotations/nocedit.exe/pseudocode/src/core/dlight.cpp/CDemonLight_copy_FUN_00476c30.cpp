// Name: core_dlight.cpp_CDemonLight_copy_FUN_00476c30
// Address: 00476c30
// Address Range: [[00476c30, 00476c3e]]
// Convention: __cdecl
// Signature: CDemonLight * core_dlight.cpp_CDemonLight_copy_FUN_00476c30(CDemonLight * this_ptr, CDemonLight * other)

#include "nocturne.h"

CDemonLight * __cdecl
core_dlight_cpp_CDemonLight_copy_FUN_00476c30(CDemonLight *this_ptr,CDemonLight *other)

{
  (this_ptr->base).base.field0_0x0 = (other->base).base.field0_0x0;
  return this_ptr;
}


// Assembly code:
// 00476c30: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_dlight.cpp_CDemonLight_copy_FUN_00476c30
//   XREF to: Stack[0x4] (READ)
// 00476c34: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00476c38: MOV EAX,dword ptr [EAX]
// 00476c3a: MOV dword ptr [EDX],EAX
// 00476c3c: MOV EAX,EDX
// 00476c3e: RET
