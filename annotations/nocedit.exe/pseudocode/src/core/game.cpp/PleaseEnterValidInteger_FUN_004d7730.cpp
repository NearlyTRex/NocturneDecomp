// Name: core_game.cpp_PleaseEnterValidInteger_FUN_004d7730
// Address: 004d7730
// Address Range: [[004d7730, 004d780c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_PleaseEnterValidInteger_FUN_004d7730(void)

#include "nocturne.h"

void __cdecl core_game_cpp_PleaseEnterValidInteger_FUN_004d7730(void)

{
  int iVar1;
  
  g_DebugRecording = 0;
  FLOAT_02d831bc = 0.0;
  iVar1 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                    (g_CEditorToolsPtr,"Enter Movie FPS",&30.0f,1,0.25,
                     240.0,1);
  if (iVar1 != 0) {
    iVar1 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                      (g_CEditorToolsPtr,"Enter number of frames to record (or 0 to record until CTRL+V is pressed)",&g_DebugRecordingParams
                       ,1,0,99999,1);
    if (iVar1 != 0) {
      iVar1 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                        (g_CEditorToolsPtr,"Enter image width",&INT_0067b664,1,1,9999,1);
      if (iVar1 != 0) {
        iVar1 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                          (g_CEditorToolsPtr,"Enter image height",&INT_0067b668,1,1,9999,1)
        ;
        if (iVar1 != 0) {
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
