// Name: engine_2d.c_plotPixel_FUN_00401140
// Address: 00401140
// Address Range: [[00401140, 004011aa]]
// Convention: __cdecl
// Signature: void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
// Cross-references:
//   core_actor.cpp_CDemonActor_renderTargetPoints_FUN_00409b90 (00409b90) at 00409e04 [UNCONDITIONAL_CALL]
//   core_actor.cpp_draw3DPointMarker_FUN_00409930 (00409930) at 00409aa8 [UNCONDITIONAL_CALL]
//   core_actor.cpp_plotPixelWithBoundsCheck_FUN_00409900 (00409900) at 00409923 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043c6b0 (0043c6b0) at 0043c6d3 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043c6e0 (0043c6e0) at 0043c7a0 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052bb50 (0052bb50) at 0052bb73 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052bb80 (0052bb80) at 0052bc67 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CZThumb_render_FUN_00574f20 (00574f20) at 0057508d [UNCONDITIONAL_CALL]
//   engine_2d.c_draw320x200SizeDot_FUN_00402a8e (00402a8e) at 00402b31 [UNCONDITIONAL_CALL]
//   engine_2d.c_drawLine_FUN_004011b0 (004011b0) at 00401206 [UNCONDITIONAL_CALL]
//   engine_2d.c_project3DPointToScreen_FUN_00401770 (00401770) at 004017ac [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_renderAllTexturesAndRectangles_FUN_00447ab0 (00447ab0) at 00447bd5 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20 (00447f20) at 00448182 [UNCONDITIONAL_CALL]
//   shape_design.c_renderPolygonVerticesWithLabels_FUN_0045c2f0 (0045c2f0) at 0045c468 [UNCONDITIONAL_CALL]
//   shape_design.c_renderVertexPointsWithLabels_FUN_0045bff0 (0045bff0) at 0045c275 [UNCONDITIONAL_CALL]
//   shape_design.c_showFacetPartEditor_FUN_0045f1d0 (0045f1d0) at 0045fd6b [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_drawPixelLine_FUN_004a2660 (004a2660) at 004a27e5 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380 (004a1380) at 004a19e3 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_drawDashedLine_FUN_0049d290 (0049d290) at 0049d324 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_plotPixelWithClipping_FUN_0049d190 (0049d190) at 0049d1da [UNCONDITIONAL_CALL]
//   wincore_winrun.cpp_drawCrosshair_FUN_005f2fd0 (005f2fd0) at 005f3085 [UNCONDITIONAL_CALL]
//   wincore_winrun.cpp_plotClippedPixel_FUN_005f2f90 (005f2f90) at 005f2fbb [UNCONDITIONAL_CALL]
// Globals:
//   int g_BitsPerPixel = 0x8
//   void*[1024] g_ScreenBufferArray
//   ushort[256] g_ColorTable16
//   uint[256] g_ColorTable32
//   int g_ActiveRenderColor

#include "nocturne.h"

void __cdecl engine_2d_c_plotPixel_FUN_00401140(int x,int y)

{
  if (g_BitsPerPixel == 8) {
    *(undefined1 *)(x + (int)g_ScreenBufferArray[y]) = (undefined1)g_ActiveRenderColor;
    return;
  }
  if (g_BitsPerPixel == 0x10) {
    *(ushort *)(x * 2 + (int)g_ScreenBufferArray[y]) = g_ColorTable16[g_ActiveRenderColor & 0xffU];
    return;
  }
  *(uint *)(x * 4 + (int)g_ScreenBufferArray[y]) = g_ColorTable32[g_ActiveRenderColor & 0xffU];
  return;
}


// Assembly code:
// 00401140: PUSH EBX
//   Label: engine_2d.c_plotPixel_FUN_00401140
// 00401141: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00401145: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00401149: MOV EDX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 0040114f: SHL EAX,0x2
// 00401152: CMP EDX,0x8
// 00401155: JZ 0x00401185
//   XREF to: 00401185 (CONDITIONAL_JUMP)
// 00401157: MOV EDX,dword ptr [0x02d02570]
//   XREF to: 02d02570 (READ)
// 0040115d: MOV EBX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 00401163: AND EDX,0xff
// 00401169: CMP EBX,0x10
// 0040116c: JNZ 0x00401195
//   XREF to: 00401195 (CONDITIONAL_JUMP)
// 0040116e: MOV EAX,dword ptr [EAX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 00401174: ADD ECX,ECX
// 00401176: ADD ECX,EAX
// 00401178: MOV AX,word ptr [EDX*0x2 + 0x2d01020]
//   XREF to: 02d01020 (DATA)
// 00401180: MOV word ptr [ECX],AX
// 00401183: POP EBX
// 00401184: RET
// 00401185: MOV EDX,dword ptr [EAX + 0x2cf6a9c]
//   Label: LAB_00401185
//   XREF to: 02cf6a9c (DATA)
// 0040118b: MOV AL,[0x02d02570]
//   XREF to: 02d02570 (READ)
// 00401190: MOV byte ptr [ECX + EDX*0x1],AL
// 00401193: POP EBX
// 00401194: RET
// 00401195: SHL ECX,0x2
//   Label: LAB_00401195
// 00401198: MOV EAX,dword ptr [EAX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 0040119e: ADD ECX,EAX
// 004011a0: MOV EAX,dword ptr [EDX*0x4 + 0x2d01220]
//   XREF to: 02d01220 (DATA)
// 004011a7: MOV dword ptr [ECX],EAX
// 004011a9: POP EBX
// 004011aa: RET
