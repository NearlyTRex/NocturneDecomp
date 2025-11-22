// Name: engine_2d.c_fillRectColor_FUN_00403170
// Address: 00403170
// Address Range: [[00403170, 004031ff]]
// Convention: __cdecl
// Signature: void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, int color)
// Cross-references:
//   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 (0043c880) at 0043ca97 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590 (0043d590) at 0043d6d1 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047cc6c [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_renderOverlay_FUN_004d8040 (004d8040) at 004d8378 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_rollCredits_FUN_004e4010 (004e4010) at 004e4287 [UNCONDITIONAL_CALL]
//   core_game.cpp_FUN_004d7fa0 (004d7fa0) at 004d802a [UNCONDITIONAL_CALL]
//   core_game.cpp_FUN_004e0aa0 (004e0aa0) at 004e0b78 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_renderAllItems_FUN_00500690 (00500690) at 00500d1c [UNCONDITIONAL_CALL]
//   core_level.cpp_CLevelLoader_update_FUN_00504160 (00504160) at 00504709 [UNCONDITIONAL_CALL]
//   core_menu.cpp_adjustMouseSensitivity_FUN_005107c0 (005107c0) at 00510935 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052bcb0 (0052bcb0) at 0052bfaf [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052ca90 (0052ca90) at 0052caff [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00559b20 (00559b20) at 00559bea [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005645d0 (005645d0) at 0056462b [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005664d0 (005664d0) at 00566593 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 (005968b0) at 00596b9e [UNCONDITIONAL_CALL]
//   engine_2d.c_fillRectWithBorder_FUN_00403200 (00403200) at 0040321c [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_showExtendedFontTest_FUN_004d0850 (004d0850) at 004d08b1 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_showFontTest_FUN_004d04b0 (004d04b0) at 004d04dc [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_renderAllTexturesAndRectangles_FUN_00447ab0 (00447ab0) at 00447aee [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_renderTextureEntry_FUN_00447c20 (00447c20) at 00447cf2 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20 (00447f20) at 004480af [UNCONDITIONAL_CALL]
//   shape_design.c_displayPalette_FUN_00461560 (00461560) at 00461622 [UNCONDITIONAL_CALL]
//   shape_design.c_showFacetPartEditor_FUN_0045f1d0 (0045f1d0) at 0045f36d [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80 (004a0f80) at 004a1121 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 (004a0530) at 004a070a [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CInputString_draw_FUN_0049d9b0 (0049d9b0) at 0049dab9 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40 (004a4d40) at 004a5046 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_draw3DBorder_FUN_004a58f0 (004a58f0) at 004a597f [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 (0051d990) at 0051dba2 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051d520 (0051d520) at 0051d588 [UNCONDITIONAL_CALL]
// Globals:
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
//   int g_ActiveRenderColor
// Function calls:
//   engine_2d.c_drawHLine_FUN_00402ee0

#include "nocturne.h"

void __cdecl engine_2d_c_fillRectColor_FUN_00403170(int x1,int y1,int x2,int y2,int color)

{
  int iVar1;
  
  iVar1 = g_ActiveRenderColor;
  if (x1 < g_ClipLeft) {
    x1 = g_ClipLeft;
  }
  if (g_ClipRight < x2) {
    x2 = g_ClipRight;
  }
  if (x1 <= x2) {
    if (y1 < g_ClipTop) {
      y1 = g_ClipTop;
    }
    if (g_ClipBottom < y2) {
      y2 = g_ClipBottom;
    }
    g_ActiveRenderColor = color;
    if (y1 <= y2) {
      for (; y1 <= y2; y1 = y1 + 1) {
        engine_2d_c_drawHLine_FUN_00402ee0(x1,y1,x2);
      }
    }
  }
  g_ActiveRenderColor = iVar1;
  return;
}


// Assembly code:
// 00403170: PUSH EBX
//   Label: engine_2d.c_fillRectColor_FUN_00403170
// 00403171: PUSH ESI
// 00403172: PUSH EDI
// 00403173: PUSH EBP
// 00403174: SUB ESP,0x4
// 00403177: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0040317b: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0040317f: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 00403183: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 00403187: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0040318d: CMP EBP,EDX
// 0040318f: JGE 0x00403193
//   XREF to: 00403193 (CONDITIONAL_JUMP)
// 00403191: MOV EBP,EDX
// 00403193: MOV ECX,dword ptr [0x02d02560]
//   Label: LAB_00403193
//   XREF to: 02d02560 (READ)
// 00403199: CMP EDI,ECX
// 0040319b: JLE 0x0040319f
//   XREF to: 0040319f (CONDITIONAL_JUMP)
// 0040319d: MOV EDI,ECX
// 0040319f: CMP EBP,EDI
//   Label: LAB_0040319f
// 004031a1: JG 0x004031f8
//   XREF to: 004031f8 (CONDITIONAL_JUMP)
// 004031a3: MOV EAX,[0x02d0255c]
//   XREF to: 02d0255c (READ)
// 004031a8: CMP EBX,EAX
// 004031aa: JGE 0x004031ae
//   XREF to: 004031ae (CONDITIONAL_JUMP)
// 004031ac: MOV EBX,EAX
// 004031ae: MOV EDX,dword ptr [0x02d02564]
//   Label: LAB_004031ae
//   XREF to: 02d02564 (READ)
// 004031b4: CMP ESI,EDX
// 004031b6: JLE 0x004031ba
//   XREF to: 004031ba (CONDITIONAL_JUMP)
// 004031b8: MOV ESI,EDX
// 004031ba: CMP EBX,ESI
//   Label: LAB_004031ba
// 004031bc: JG 0x004031f8
//   XREF to: 004031f8 (CONDITIONAL_JUMP)
// 004031be: MOV EAX,[0x02d02570]
//   XREF to: 02d02570 (READ)
// 004031c3: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 004031c6: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x14] (READ)
// 004031ca: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 004031cf: JG 0x004031f0
//   XREF to: 004031f0 (CONDITIONAL_JUMP)
// 004031d1: PUSH EDI
//   Label: LAB_004031d1
// 004031d2: PUSH EBX
// 004031d3: PUSH EBP
// 004031d4: CALL engine_2d.c_drawHLine_FUN_00402ee0
//   XREF to: 00402ee0 (UNCONDITIONAL_CALL)
// 004031d9: INC EBX
// 004031da: ADD ESP,0xc
// 004031dd: CMP EBX,ESI
// 004031df: JLE 0x004031d1
//   XREF to: 004031d1 (CONDITIONAL_JUMP)
// 004031e1: LEA EAX,[EAX]
// 004031e7: LEA EDX,[EDX]
// 004031ed: LEA EAX,[EAX]
// 004031f0: MOV EAX,dword ptr [ESP]
//   Label: LAB_004031f0
//   XREF to: Stack[-0x14] (DATA)
// 004031f3: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 004031f8: ADD ESP,0x4
//   Label: LAB_004031f8
// 004031fb: POP EBP
// 004031fc: POP EDI
// 004031fd: POP ESI
// 004031fe: POP EBX
// 004031ff: RET
