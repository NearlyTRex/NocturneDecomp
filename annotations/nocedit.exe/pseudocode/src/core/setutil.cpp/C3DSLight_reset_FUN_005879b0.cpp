// Name: core_setutil.cpp_C3DSLight_reset_FUN_005879b0
// Address: 005879b0
// Address Range: [[005879b0, 00587a36]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSLight_reset_FUN_005879b0(C3DSLight * this_ptr)
// Cross-references:
//   core_setedit.cpp_FUN_0057b410 (0057b410) at 0057b448 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_ctor_FUN_005862f0 (005862f0) at 005862f6 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_importS3D_FUN_00587710 (00587710) at 0058771c [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_reset_FUN_005879b0(C3DSLight *this_ptr)

{
  (this_ptr->size).x = 0x100;
  (this_ptr->size).y = 0x100;
  this_ptr->on_time = 1.0;
  this_ptr->cycle_time = 1.0;
  this_ptr->cycle_elapsed = 0.0;
  this_ptr->current_filter_frame = 0;
  this_ptr->filter_frame_elapsed = 0.0;
  this_ptr->atten_start = 0.0;
  this_ptr->atten_end = 0.0;
  this_ptr->fov = 28.0;
  this_ptr->aspect = 1.0;
  this_ptr->intensity = 1.0;
  this_ptr->filter_count = 0;
  return;
}


// Assembly code:
// 005879b0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_setutil.cpp_C3DSLight_reset_FUN_005879b0
//   XREF to: Stack[0x4] (READ)
// 005879b4: MOV dword ptr [EAX + 0x1808],0x100
// 005879be: MOV dword ptr [EAX + 0x180c],0x100
// 005879c8: MOV dword ptr [EAX + 0x11e0],0x3f800000
// 005879d2: MOV dword ptr [EAX + 0x11e4],0x3f800000
// 005879dc: MOV dword ptr [EAX + 0x11e8],0x0
// 005879e6: MOV dword ptr [EAX + 0x1890],0x0
// 005879f0: MOV dword ptr [EAX + 0x1894],0x0
// 005879fa: MOV dword ptr [EAX + 0x11d0],0x0
// 00587a04: MOV dword ptr [EAX + 0x11d4],0x0
// 00587a0e: MOV dword ptr [EAX + 0x11c],0x41e00000
// 00587a18: MOV dword ptr [EAX + 0x120],0x3f800000
// 00587a22: MOV dword ptr [EAX + 0x124],0x3f800000
// 00587a2c: MOV dword ptr [EAX + 0x11ec],0x0
// 00587a36: RET
