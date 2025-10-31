// Name: core_dlight.cpp_CDemonLight_copy_FUN_00476c20
// Address: 00476c20
// Address Range: [[00476c20, 00476c2e]]
// Convention: __cdecl
// Signature: CDemonLight * core_dlight.cpp_CDemonLight_copy_FUN_00476c20(CDemonLight * this_ptr, CDemonLight * other)

#include "nocturne.h"

CDemonLight * __cdecl
core_dlight_cpp_CDemonLight_copy_FUN_00476c20(CDemonLight *this_ptr,CDemonLight *other)

{
  (this_ptr->base).base.field0_0x0 = (other->base).base.field0_0x0;
  return this_ptr;
}


// Assembly code:
// 00476c20: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_dlight.cpp_CDemonLight_copy_FUN_00476c20
//   XREF to: Stack[0x4] (READ)
// 00476c24: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00476c28: MOV EAX,dword ptr [EAX]
// 00476c2a: MOV dword ptr [EDX],EAX
// 00476c2c: MOV EAX,EDX
// 00476c2e: RET
