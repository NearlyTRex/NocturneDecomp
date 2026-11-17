// Name: core_game.cpp_setupMovieRecording_FUN_004b2970
// Address: 004b2970
// Address Range: [[004b2970, 004b2a4c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_setupMovieRecording_FUN_004b2970(void)

#include "nocturne.h"

void __cdecl core_game_cpp_setupMovieRecording_FUN_004b2970(void)

{
  int iVar1;
  
  g_INT_01cb80d4 = 0;
  g_INT_01cb80dc = 0;
  iVar1 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_0047d800
                    (g_CEditorToolsPtr,"Enter Movie FPS",&g_FLOAT_006164a0,1,0.25,240.0,1);
  if (iVar1 != 0) {
    iVar1 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_0047d730
                      (g_CEditorToolsPtr,"Enter number of frames to record (or 0 to record until CTRL+V is pressed)",&g_INT_01cb80d8,1,0,
                       99999,1);
    if (iVar1 != 0) {
      iVar1 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_0047d730
                        (g_CEditorToolsPtr,"Enter image width",&g_INT_006164a4,1,1,9999,1);
      if (iVar1 != 0) {
        iVar1 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_0047d730
                          (g_CEditorToolsPtr,"Enter image height",&g_INT_006164a8,1,1,9999,
                           1);
        if (iVar1 != 0) {
          shape_edittool_cpp_CEditorTools_showMessage_FUN_0047bda0
                    (g_CEditorToolsPtr,"Press CTRL+V to begin recording.");
          g_INT_01cb80d0 = 1;
          return;
        }
      }
    }
  }
  return;
}
