// Name: core_game.cpp_FUN_004b296e
// Address: 004b296e
// Address Range: [[004b296e, 004b2a4c]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004b296e(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_FUN_004b296e(void)

{
  int iVar1;
  
  _DAT_01cb80d4 = 0;
  _DAT_01cb80dc = 0;
  iVar1 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_0047d800
                    (g_CEditorToolsPtr,"?Enter Movie FPS" + 1,(float *)&DAT_006164a0,1,0.25,
                     240.0,1);
  if (iVar1 != 0) {
    iVar1 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_0047d730
                      (g_CEditorToolsPtr,"Enter number of frames to record (or 0 to record until CTRL+V is pressed)",(int *)&DAT_01cb80d8,1,
                       0,99999,1);
    if (iVar1 != 0) {
      iVar1 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_0047d730
                        (g_CEditorToolsPtr,"Enter image width",&DAT_006164a4,1,1,9999,1);
      if (iVar1 != 0) {
        iVar1 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_0047d730
                          (g_CEditorToolsPtr,"Enter image height",&DAT_006164a8,1,1,9999,1)
        ;
        if (iVar1 != 0) {
          shape_edittool_cpp_CEditorTools_showMessage_FUN_0047bda0
                    (g_CEditorToolsPtr,"Press CTRL+V to begin recording.");
          _DAT_01cb80d0 = 1;
          return;
        }
      }
    }
  }
  return;
}
