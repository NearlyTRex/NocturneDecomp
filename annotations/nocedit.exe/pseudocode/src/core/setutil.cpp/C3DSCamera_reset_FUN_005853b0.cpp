// Name: core_setutil.cpp_C3DSCamera_reset_FUN_005853b0
// Address: 005853b0
// Address Range: [[005853b0, 0058541f]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSCamera_reset_FUN_005853b0(C3DSCamera * this_ptr)
// Cross-references:
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057eab2 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSCamera_importS3D_FUN_00585ff0 (00585ff0) at 00585fff [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSCamera_load_FUN_00585420 (00585420) at 00585439 [UNCONDITIONAL_CALL]
// Function calls:
//   core_setutil.cpp_C3DSCamera_free_FUN_00585360
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSCamera_reset_FUN_005853b0(C3DSCamera *this_ptr)

{
  float fVar1;
  
  core_setutil_cpp_C3DSCamera_free_FUN_00585360(this_ptr);
  crt_memory_c_memset_FUN_005fde40(this_ptr,0,0x1a4);
  this_ptr->projection_scale = 28.0;
  (this_ptr->box_min).y = -300.0;
  (this_ptr->box_min).z = 0.0;
  (this_ptr->box_max).z = 300.0;
  this_ptr->is_panning = 0;
  fVar1 = (this_ptr->box_max).z;
  (this_ptr->box_min).x = (this_ptr->box_min).y;
  (this_ptr->box_max).y = fVar1;
  (this_ptr->box_max).x = fVar1;
  return;
}


// Assembly code:
// 005853b0: PUSH EBX
//   Label: core_setutil.cpp_C3DSCamera_reset_FUN_005853b0
// 005853b1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005853b5: PUSH EBX
// 005853b6: CALL core_setutil.cpp_C3DSCamera_free_FUN_00585360
//   XREF to: 00585360 (UNCONDITIONAL_CALL)
// 005853bb: ADD ESP,0x4
// 005853be: PUSH 0x1a4
// 005853c3: PUSH 0x0
// 005853c5: PUSH EBX
// 005853c6: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005853cb: MOV dword ptr [EBX + 0x144],0x41e00000
// 005853d5: MOV dword ptr [EBX + 0x180],0xc3960000
// 005853df: MOV dword ptr [EBX + 0x184],0x0
// 005853e9: MOV dword ptr [EBX + 0x190],0x43960000
// 005853f3: MOV dword ptr [EBX + 0x140],0x0
// 005853fd: ADD ESP,0xc
// 00585400: FLD float ptr [EBX + 0x190]
// 00585406: MOV EAX,dword ptr [EBX + 0x180]
// 0058540c: MOV dword ptr [EBX + 0x17c],EAX
// 00585412: FST float ptr [EBX + 0x18c]
// 00585418: FSTP float ptr [EBX + 0x188]
// 0058541e: POP EBX
// 0058541f: RET
