// Name: core_setutil.cpp_C3DSCamera_ctor_FUN_00585310
// Address: 00585310
// Address Range: [[00585310, 00585332]]
// Convention: __cdecl
// Signature: C3DSCamera * core_setutil.cpp_C3DSCamera_ctor_FUN_00585310(C3DSCamera * this_ptr)
// Cross-references:
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057f77e [UNCONDITIONAL_CALL]

#include "nocturne.h"

C3DSCamera * __cdecl core_setutil_cpp_C3DSCamera_ctor_FUN_00585310(C3DSCamera *this_ptr)

{
  this_ptr->pvs_count = 0;
  this_ptr->pvs_list = (int *)0x0;
  this_ptr->fog_enabled = 1;
  return this_ptr;
}


// Assembly code:
// 00585310: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_setutil.cpp_C3DSCamera_ctor_FUN_00585310
//   XREF to: Stack[0x4] (READ)
// 00585314: MOV dword ptr [EAX + 0x194],0x0
// 0058531e: MOV dword ptr [EAX + 0x198],0x0
// 00585328: MOV dword ptr [EAX + 0x150],0x1
// 00585332: RET
