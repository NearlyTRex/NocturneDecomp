// Name: engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0
// Address: 0048d6c0
// Address Range: [[0048d6c0, 0048d6f7]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(CDemonRenderer * this_ptr, int enable_advanced_mode)
// Cross-references:
//   core_baron.cpp_CBaron_renderTransparent_FUN_00413ae0 (00413ae0) at 00413c32 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_renderOpaque_FUN_004173b0 (004173b0) at 00417506 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041d1b0 (0041d1b0) at 0041d1ff [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_CDraculaBride_renderOpaque_FUN_00485be0 (00485be0) at 00485d45 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_renderItemModel_FUN_004fee00 (004fee00) at 004ff151 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052b160 (0052b160) at 0052b174 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 (005968b0) at 005971ac [UNCONDITIONAL_CALL]
// Globals:
//   int g_CaptureFaceCount
//   int g_CaptureTextureCount

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0
          (CDemonRenderer *this_ptr,int enable_advanced_mode)

{
  if (this_ptr->face_count != 0) {
    this_ptr->texture_capture_enabled = 0;
    return;
  }
  g_CaptureTextureCount = -1;
  g_CaptureFaceCount = this_ptr->face_count;
  this_ptr->texture_capture_enabled = (enable_advanced_mode != 0) + 1;
  return;
}


// Assembly code:
// 0048d6c0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0
//   XREF to: Stack[0x4] (READ)
// 0048d6c4: MOV ECX,dword ptr [EDX + 0x4]
// 0048d6c7: TEST ECX,ECX
// 0048d6c9: JZ 0x0048d6d3
//   XREF to: 0048d6d3 (CONDITIONAL_JUMP)
// 0048d6cb: MOV dword ptr [EDX + 0x1c],0x0
// 0048d6d2: RET
// 0048d6d3: PUSH EDI
//   Label: LAB_0048d6d3
// 0048d6d4: CMP dword ptr [ESP + 0xc],0x0
//   XREF to: Stack[0x8] (READ)
// 0048d6d9: SETNZ AL
// 0048d6dc: MOV EDI,0xffffffff
// 0048d6e1: AND EAX,0xff
// 0048d6e6: MOV dword ptr [0x02c6d5ec],ECX
//   XREF to: 02c6d5ec (WRITE)
// 0048d6ec: INC EAX
// 0048d6ed: MOV dword ptr [0x02c6d5f0],EDI
//   XREF to: 02c6d5f0 (WRITE)
// 0048d6f3: MOV dword ptr [EDX + 0x1c],EAX
// 0048d6f6: POP EDI
// 0048d6f7: RET
