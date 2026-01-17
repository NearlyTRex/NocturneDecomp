// Name: core_game.cpp_PleaseEnterValidInteger_FUN_004d7730
// Address: 004d7730
// Address Range: [[004d7730, 004d780c]]
// Convention: unknown
// Signature: undefined core_game.cpp_PleaseEnterValidInteger_FUN_004d7730()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte core_game.cpp_FUN_004d7730() */

void core_game_cpp_PleaseEnterValidInteger_FUN_004d7730(void)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  
  g_DebugRecording = 0;
  _DAT_02d831bc = 0;
  iVar2 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                    (g_CEditorToolsPtr,"Enter Movie FPS",&30.0f,true,
                     0.25,240.0,true);
  if (iVar2 != 0) {
    bVar1 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                      (g_CEditorToolsPtr,"Enter number of frames to record (or 0 to record until CTRL+V is pressed)",
                       (int *)&g_DebugRecordingParams,true,0,99999,true);
    if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar1) != 0) {
      bVar1 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                        (g_CEditorToolsPtr,"Enter image width",&0x00000040,true,1,9999,
                         true);
      if (CONCAT31 /* combine 2-byte values */(extraout_var_00,bVar1) != 0) {
        bVar1 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                          (g_CEditorToolsPtr,"Enter image height",&0x00000040,true,1,9999
                           ,true);
        if (CONCAT31 /* combine 2-byte values */(extraout_var_01,bVar1) != 0) {
          shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                    (g_CEditorToolsPtr,"Press CTRL+V to begin recording.");
          g_CheatFlags = 1;
          return;
        }
      }
    }
  }
  return;
}
