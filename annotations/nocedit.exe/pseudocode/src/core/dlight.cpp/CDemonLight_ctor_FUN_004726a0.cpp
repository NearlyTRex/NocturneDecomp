// Name: core_dlight.cpp_CDemonLight_ctor_FUN_004726a0
// Address: 004726a0
// Address Range: [[004726a0, 00472754]]
// Convention: __cdecl
// Signature: CDemonLight * core_dlight.cpp_CDemonLight_ctor_FUN_004726a0(CDemonLight * this_ptr)
// Cross-references:
//   core_boxactor.cpp_CLightActor_ctor_FUN_00422990 (00422990) at 004229ad [UNCONDITIONAL_CALL]
//   core_game.cpp_staticInit_FUN_004d76d0 (004d76d0) at 004d76df [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_create_FUN_00586a90 (00586a90) at 00586bcd [UNCONDITIONAL_CALL]
// Globals:
//   CCameraView_vtable g_CDemonLightVTable
// Function calls:
//   core_dcamera.cpp_CDemonCamera_ctor_FUN_0044c030

#include "nocturne.h"

CDemonLight * __cdecl core_dlight_cpp_CDemonLight_ctor_FUN_004726a0(CDemonLight *this_ptr)

{
  CDemonLight *pCVar1;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  pCVar1 = (CDemonLight *)core_dcamera_cpp_CDemonCamera_ctor_FUN_0044c030(&this_ptr->base);
  (pCVar1->base).base.vtable = &g_CDemonLightVTable;
  pCVar1->light_enabled_flag = 1;
  pCVar1->shadow_bounds_mode = 1;
  pCVar1->shadow_depth_buffer = (ushort *)0x0;
  pCVar1->shadow_buffer_raw = (void *)0x0;
  pCVar1->restore_memory_size = 0;
  (pCVar1->base).zbuffer_raw = (void *)0x0;
  (pCVar1->base).max_distance = 255.0;
  pCVar1->lightmap_visibility_bits = (uchar *)0x0;
  pCVar1->filter_buffer = (uchar *)0x0;
  pCVar1->precomputed_lighting_textures = (uchar *)0x0;
  pCVar1->transform_scale_factor = 0x10000;
  pCVar1->volumetric_intensity = 1.0;
  pCVar1->field17_0x1cbc = 0;
  pCVar1->antialiasing_enabled = 1;
  pCVar1->shadow_map_width = in_stack_0000000c;
  pCVar1->shadow_map_height = in_stack_00000010;
  return pCVar1;
}


// Assembly code:
// 004726a0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_dlight.cpp_CDemonLight_ctor_FUN_004726a0
//   XREF to: Stack[0x4] (READ)
// 004726a4: PUSH EDX
// 004726a5: CALL core_dcamera.cpp_CDemonCamera_ctor_FUN_0044c030
//   XREF to: 0044c030 (UNCONDITIONAL_CALL)
// 004726aa: MOV dword ptr [EAX + 0x3c],0x65c924
//   XREF to: 0065c924 (DATA)
// 004726b1: MOV dword ptr [EAX + 0x1cb4],0x1
// 004726bb: MOV dword ptr [EAX + 0x1cb8],0x1
// 004726c5: MOV dword ptr [EAX + 0x2f94],0x0
// 004726cf: MOV dword ptr [EAX + 0x2f98],0x0
// 004726d9: MOV dword ptr [EAX + 0x2f9c],0x0
// 004726e3: MOV dword ptr [EAX + 0x164],0x0
// 004726ed: MOV dword ptr [EAX + 0x140],0x437f0000
// 004726f7: MOV dword ptr [EAX + 0x2fa0],0x0
// 00472701: MOV dword ptr [EAX + 0x1c6c],0x0
// 0047270b: MOV dword ptr [EAX + 0x1c54],0x0
// 00472715: MOV dword ptr [EAX + 0x2fa4],0x10000
// 0047271f: MOV dword ptr [EAX + 0x2fa8],0x3f800000
// 00472729: MOV dword ptr [EAX + 0x1cbc],0x0
// 00472733: ADD ESP,0x4
// 00472736: MOV dword ptr [EAX + 0x1cd0],0x1
// 00472740: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00472744: MOV dword ptr [EAX + 0x1cc0],EDX
// 0047274a: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 0047274e: MOV dword ptr [EAX + 0x1cc4],EDX
// 00472754: RET
