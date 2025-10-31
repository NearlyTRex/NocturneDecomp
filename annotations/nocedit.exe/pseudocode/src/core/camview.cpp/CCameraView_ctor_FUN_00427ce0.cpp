// Name: core_camview.cpp_CCameraView_ctor_FUN_00427ce0
// Address: 00427ce0
// Address Range: [[00427ce0, 00427cf8]]
// Convention: __cdecl
// Signature: CCameraView * core_camview.cpp_CCameraView_ctor_FUN_00427ce0(CCameraView * this_ptr)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_ctor_FUN_0044c030 (0044c030) at 0044c035 [UNCONDITIONAL_CALL]
// Globals:
//   CCameraView_vtable g_CCameraViewVTable

#include "nocturne.h"

CCameraView * __cdecl core_camview_cpp_CCameraView_ctor_FUN_00427ce0(CCameraView *this_ptr)

{
  this_ptr->projection_scale = 28.0;
  this_ptr->field0_0x0 = (void *)0x43800000;
  this_ptr->vtable = &g_CCameraViewVTable;
  return this_ptr;
}


// Assembly code:
// 00427ce0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_camview.cpp_CCameraView_ctor_FUN_00427ce0
//   XREF to: Stack[0x4] (READ)
// 00427ce4: MOV dword ptr [EAX + 0x38],0x41e00000
// 00427ceb: MOV dword ptr [EAX],0x43800000
// 00427cf1: MOV dword ptr [EAX + 0x3c],0x65b7d4
//   XREF to: 0065b7d4 (DATA)
// 00427cf8: RET
