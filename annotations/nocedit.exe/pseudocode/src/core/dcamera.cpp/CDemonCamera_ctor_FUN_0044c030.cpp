// Name: core_dcamera.cpp_CDemonCamera_ctor_FUN_0044c030
// Address: 0044c030
// Address Range: [[0044c030, 0044c08a]]
// Convention: __cdecl
// Signature: CDemonCamera * core_dcamera.cpp_CDemonCamera_ctor_FUN_0044c030(CDemonCamera * this_ptr)
// Cross-references:
//   core_dlight.cpp_CDemonLight_ctor_FUN_004726a0 (004726a0) at 004726a5 [UNCONDITIONAL_CALL]
//   core_set.cpp_staticInit_FUN_00569040 (00569040) at 0056905f [UNCONDITIONAL_CALL]
// Globals:
//   CCameraView_vtable g_CDemonCameraVTable
// Function calls:
//   core_camview.cpp_CCameraView_ctor_FUN_00427ce0

#include "nocturne.h"

CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_ctor_FUN_0044c030(CDemonCamera *this_ptr)

{
  CDemonCamera *pCVar1;
  
  pCVar1 = (CDemonCamera *)core_camview_cpp_CCameraView_ctor_FUN_00427ce0(&this_ptr->base);
  (pCVar1->base).vtable = &g_CDemonCameraVTable;
  pCVar1->framebuffer_aligned = (void *)0x0;
  pCVar1->framebuffer_raw = (void *)0x0;
  pCVar1->zbuffer_aligned = (void *)0x0;
  pCVar1->zbuffer_raw = (void *)0x0;
  pCVar1->corona_blend_factor = 0;
  pCVar1->scene_open_flag = 0;
  pCVar1->max_distance = 999.9;
  return pCVar1;
}


// Assembly code:
// 0044c030: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_dcamera.cpp_CDemonCamera_ctor_FUN_0044c030
//   XREF to: Stack[0x4] (READ)
// 0044c034: PUSH EDX
// 0044c035: CALL core_camview.cpp_CCameraView_ctor_FUN_00427ce0
//   XREF to: 00427ce0 (UNCONDITIONAL_CALL)
// 0044c03a: MOV dword ptr [EAX + 0x3c],0x65c664
//   XREF to: 0065c664 (DATA)
// 0044c041: MOV dword ptr [EAX + 0x158],0x0
// 0044c04b: MOV dword ptr [EAX + 0x160],0x0
// 0044c055: MOV dword ptr [EAX + 0x15c],0x0
// 0044c05f: MOV dword ptr [EAX + 0x164],0x0
// 0044c069: MOV dword ptr [EAX + 0x11e8],0x0
// 0044c073: MOV dword ptr [EAX + 0x11e4],0x0
// 0044c07d: ADD ESP,0x4
// 0044c080: MOV dword ptr [EAX + 0x140],0x4479f99a
// 0044c08a: RET
