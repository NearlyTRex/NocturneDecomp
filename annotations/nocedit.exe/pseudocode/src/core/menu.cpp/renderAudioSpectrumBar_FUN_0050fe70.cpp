// Name: core_menu.cpp_renderAudioSpectrumBar_FUN_0050fe70
// Address: 0050fe70
// Address Range: [[0050fe70, 0050fffb]]
// Convention: __cdecl
// Signature: void core_menu.cpp_renderAudioSpectrumBar_FUN_0050fe70(int x_center, int y_top, int height_half)
// Cross-references:
//   core_menu.cpp_configureSoundOptions_FUN_00511e50 (00511e50) at 00512646 [UNCONDITIONAL_CALL]
//   core_menu.cpp_renderAudioSpectrumBarByBounds_FUN_00511e00 (00511e00) at 00511e15 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   SMRGLTextureBasic[8] g_AudioSpectrumTextures
//   undefined4 DAT_00f80000
//   CDemonRenderer g_CDemonRendererInstance
//   int g_AudioVisualizationCounter
// Function calls:
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
//   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60

#include "nocturne.h"

void __cdecl
core_menu_cpp_renderAudioSpectrumBar_FUN_0050fe70(int x_center,int y_top,int height_half)

{
  CDemonRenderer *this_ptr;
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  SMRGLHeaderPrimitive local_20;
  undefined4 local_8;
  
  this_ptr = g_CDemonRendererPtr;
  if (0 < height_half * 2) {
    iVar1 = (x_center + -0x10) * 0x10000;
    (g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).screen_x = iVar1;
    (this_ptr->vertex_buffer_ptr->projected_vertex).screen_y = y_top << 0x10;
    iVar2 = (x_center + 0x10) * 0x10000;
    this_ptr->vertex_buffer_ptr[1].projected_vertex.screen_x = iVar2;
    this_ptr->vertex_buffer_ptr[1].projected_vertex.screen_y = y_top << 0x10;
    this_ptr->vertex_buffer_ptr[2].projected_vertex.screen_x = iVar2;
    iVar2 = (y_top + height_half * -2) * 0x10000;
    this_ptr->vertex_buffer_ptr[2].projected_vertex.screen_y = iVar2;
    this_ptr->vertex_buffer_ptr[3].projected_vertex.screen_x = iVar1;
    this_ptr->vertex_buffer_ptr[3].projected_vertex.screen_y = iVar2;
    this_ptr->vertex_buffer_ptr->u = 7.34684e-40;
    this_ptr->vertex_buffer_ptr->v = 2.2775203e-38;
    this_ptr->vertex_buffer_ptr[1].u = 2.2775203e-38;
    this_ptr->vertex_buffer_ptr[1].v = 2.2775203e-38;
    this_ptr->vertex_buffer_ptr[2].u = 2.2775203e-38;
    this_ptr->vertex_buffer_ptr[2].v = 7.34684e-40;
    this_ptr->vertex_buffer_ptr[3].u = 7.34684e-40;
    this_ptr->vertex_buffer_ptr[3].v = 7.34684e-40;
    local_20.surface_normal.A = 0;
    local_20.base.count = 0;
    local_20.base.type = 0;
    local_20.surface_normal.B = 0;
    local_20.surface_normal.D = 2;
    local_8 = 3;
    local_20.surface_normal.C = 1;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(this_ptr,0x8000);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,
               g_AudioSpectrumTextures +
               (((int)((g_AudioVisualizationCounter +
                       (g_AudioVisualizationCounter >> 0x1f) * -0x10000) -
                      (uint)((g_AudioVisualizationCounter >> 0x1f) << 0xf < 0)) >> 0x10) + x_center
               & 7));
    engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
              (g_CDemonRendererPtr,&local_20,0x23);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
  }
  return;
}


// Assembly code:
// 0050fe70: PUSH EBP
//   Label: core_menu.cpp_renderAudioSpectrumBar_FUN_0050fe70
// 0050fe71: SUB ESP,0x28
// 0050fe74: MOV EBP,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0050fe78: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0xc] (READ)
// 0050fe7c: ADD EDX,EDX
// 0050fe7e: TEST EDX,EDX
// 0050fe80: JLE 0x0050fff7
//   XREF to: 0050fff7 (CONDITIONAL_JUMP)
// 0050fe86: PUSH EDI
// 0050fe87: PUSH ESI
// 0050fe88: PUSH EBX
// 0050fe89: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0050fe8e: LEA ECX,[EBP + -0x10]
// 0050fe91: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050fe93: SHL ECX,0x10
// 0050fe96: MOV dword ptr [EBX + 0x10],ECX
// 0050fe99: MOV ESI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x8] (READ)
// 0050fe9d: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050fe9f: SHL ESI,0x10
// 0050fea2: MOV dword ptr [EBX + 0x14],ESI
// 0050fea5: LEA EBX,[EBP + 0x10]
// 0050fea8: MOV EDI,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050feaa: SHL EBX,0x10
// 0050fead: MOV dword ptr [EDI + 0x40],EBX
// 0050feb0: MOV EDI,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050feb2: MOV dword ptr [EDI + 0x44],ESI
// 0050feb5: MOV ESI,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050feb7: MOV dword ptr [ESI + 0x70],EBX
// 0050feba: MOV EBX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x8] (READ)
// 0050febe: SUB EBX,EDX
// 0050fec0: MOV EDX,EBX
// 0050fec2: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050fec4: SHL EDX,0x10
// 0050fec7: MOV dword ptr [EBX + 0x74],EDX
// 0050feca: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050fecc: MOV dword ptr [EBX + 0xa0],ECX
// 0050fed2: MOV ECX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050fed4: MOV dword ptr [ECX + 0xa4],EDX
// 0050feda: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050fedc: MOV dword ptr [EDX + 0x18],0x80000
// 0050fee3: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050fee5: MOV dword ptr [EDX + 0x1c],0xf80000
//   XREF to: 00f80000 (DATA)
// 0050feec: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050feee: MOV dword ptr [EDX + 0x48],0xf80000
//   XREF to: 00f80000 (DATA)
// 0050fef5: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050fef7: MOV dword ptr [EDX + 0x4c],0xf80000
//   XREF to: 00f80000 (DATA)
// 0050fefe: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050ff00: MOV dword ptr [EDX + 0x78],0xf80000
//   XREF to: 00f80000 (DATA)
// 0050ff07: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050ff09: MOV dword ptr [EDX + 0x7c],0x80000
// 0050ff10: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050ff12: MOV dword ptr [EDX + 0xa8],0x80000
// 0050ff1c: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0050ff1e: MOV dword ptr [EDX + 0xac],0x80000
// 0050ff28: MOV EDX,0x4
// 0050ff2d: MOV EBX,0x2
// 0050ff32: MOV ESI,0x3
// 0050ff37: PUSH 0x8000
// 0050ff3c: XOR ECX,ECX
// 0050ff3e: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 0050ff42: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0050ff46: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 0050ff4a: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 0050ff4e: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 0050ff52: MOV dword ptr [ESP + 0x28],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0050ff56: MOV dword ptr [ESP + 0x30],EBX
//   XREF to: Stack[-0xc] (WRITE)
// 0050ff5a: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0050ff5b: MOV ECX,0x1
// 0050ff60: MOV dword ptr [ESP + 0x38],ESI
//   XREF to: Stack[-0x8] (WRITE)
// 0050ff64: MOV dword ptr [ESP + 0x30],ECX
//   XREF to: Stack[-0x10] (WRITE)
// 0050ff68: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 0050ff6d: ADD ESP,0x8
// 0050ff70: PUSH 0x1
// 0050ff72: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0050ff78: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 0050ff79: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 0050ff7e: MOV EAX,[0x02f26cb4]
//   XREF to: 02f26cb4 (READ)
// 0050ff83: MOV EDX,EAX
// 0050ff85: SAR EDX,0x1f
// 0050ff88: SHL EDX,0x10
// 0050ff8b: SBB EAX,EDX
// 0050ff8d: SAR EAX,0x10
// 0050ff90: LEA EDX,[EAX + EBP*0x1]
// 0050ff93: AND EDX,0x7
// 0050ff96: LEA EAX,[EDX*0x4 + 0x0]
// 0050ff9d: SUB EAX,EDX
// 0050ff9f: SHL EAX,0x3
// 0050ffa2: ADD ESP,0x8
// 0050ffa5: ADD EAX,0x67d284
//   XREF to: 0067d284 (DATA)
// 0050ffaa: PUSH EAX
// 0050ffab: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0050ffb1: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 0050ffb2: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 0050ffb7: ADD ESP,0x8
// 0050ffba: PUSH 0x23
// 0050ffbc: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x2c] (DATA)
// 0050ffc0: PUSH EAX
// 0050ffc1: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0050ffc6: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0050ffc7: CALL engine_drender.cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
//   XREF to: 0048ae10 (UNCONDITIONAL_CALL)
// 0050ffcc: ADD ESP,0xc
// 0050ffcf: PUSH 0x0
// 0050ffd1: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0050ffd7: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0050ffd8: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 0050ffdd: ADD ESP,0x8
// 0050ffe0: PUSH 0xffff
// 0050ffe5: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0050ffeb: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0050ffec: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 0050fff1: ADD ESP,0x8
// 0050fff4: POP EBX
// 0050fff5: POP ESI
// 0050fff6: POP EDI
// 0050fff7: ADD ESP,0x28
//   Label: LAB_0050fff7
// 0050fffa: POP EBP
// 0050fffb: RET
