// Name: core_fire.cpp_CBulletHole_initRender_FUN_004bfa40
// Address: 004bfa40
// Address Range: [[004bfa40, 004bfabf]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CBulletHole_initRender_FUN_004bfa40(CBulletHole * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c74a0 (004c74a0) at 004c74ad [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_render_FUN_004c7180 (004c7180) at 004c7262 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   SMRGLTextureBasic g_FireEffectBlackHoleTexture
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 g_BillboardPrimitive.base.base.count
//   undefined4 g_BillboardPrimitive.base.surface_normal.A
//   undefined4 g_BillboardPrimitive.base.surface_normal.B
//   undefined4 g_BillboardPrimitive.base.surface_normal.C
//   undefined4 g_BillboardPrimitive.vertices[0]
//   undefined4 g_BillboardPrimitive.vertices[1]
//   undefined4 g_BillboardPrimitive.vertices[2]
//   undefined4 g_BillboardPrimitive.vertices[3]
// Function calls:
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60

#include "nocturne.h"

void __cdecl core_fire_cpp_CBulletHole_initRender_FUN_004bfa40(CBulletHole *this_ptr)

{
  g_BillboardPrimitive.base.base.count = 4;
  g_BillboardPrimitive.vertices[0] = 0;
  g_BillboardPrimitive.vertices[1] = 1;
  g_BillboardPrimitive.vertices[2] = 2;
  g_BillboardPrimitive.vertices[3] = 3;
  g_BillboardPrimitive.base.surface_normal.A = 0;
  g_BillboardPrimitive.base.surface_normal.B = 0;
  g_BillboardPrimitive.base.surface_normal.D = 0;
  g_BillboardPrimitive.base.surface_normal.C = 0xffff;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,&g_FireEffectBlackHoleTexture);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0x8000);
  return;
}


// Assembly code:
// 004bfa40: PUSH EBX
//   Label: core_fire.cpp_CBulletHole_initRender_FUN_004bfa40
// 004bfa41: PUSH ESI
// 004bfa42: PUSH EDI
// 004bfa43: MOV EDX,0x4
// 004bfa48: MOV EBX,0x1
// 004bfa4d: MOV ESI,0x2
// 004bfa52: MOV EDI,0x3
// 004bfa57: PUSH 0x67a794
//   XREF to: 0067a794 (DATA)
// 004bfa5c: XOR ECX,ECX
// 004bfa5e: MOV dword ptr [0x02d12dd0],EDX
//   XREF to: 02d12dd0 (WRITE)
// 004bfa64: MOV dword ptr [0x02d12de4],ECX
//   XREF to: 02d12de4 (WRITE)
// 004bfa6a: MOV dword ptr [0x02d12de8],EBX
//   XREF to: 02d12de8 (WRITE)
// 004bfa70: MOV dword ptr [0x02d12dec],ESI
//   XREF to: 02d12dec (WRITE)
// 004bfa76: MOV dword ptr [0x02d12df0],EDI
//   XREF to: 02d12df0 (WRITE)
// 004bfa7c: MOV dword ptr [0x02d12dd4],ECX
//   XREF to: 02d12dd4 (WRITE)
// 004bfa82: MOV dword ptr [0x02d12dd8],ECX
//   XREF to: 02d12dd8 (WRITE)
// 004bfa88: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004bfa8e: MOV EDX,0xffff
// 004bfa93: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004bfa94: MOV dword ptr [0x02d12de0],ECX
//   XREF to: 02d12de0 (WRITE)
// 004bfa9a: MOV dword ptr [0x02d12ddc],EDX
//   XREF to: 02d12ddc (WRITE)
// 004bfaa0: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004bfaa5: ADD ESP,0x8
// 004bfaa8: PUSH 0x8000
// 004bfaad: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004bfab3: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 004bfab4: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 004bfab9: ADD ESP,0x8
// 004bfabc: POP EDI
// 004bfabd: POP ESI
// 004bfabe: POP EBX
// 004bfabf: RET
