// Name: core_game.cpp_setupMovieRecording_FUN_004cb870
// Address: 004cb870
// Address Range: [[004cb870, 004cb94c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_setupMovieRecording_FUN_004cb870(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_setupMovieRecording_FUN_004cb870(void)

{
  int iVar1;
  
  _DAT_01cd0c3c = 0;
  _DAT_01cd0c44 = 0;
  iVar1 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_00495e70
                    (g_CEditorToolsPtr,"?Enter Movie FPS" + 1,(float *)&DAT_0061d968,1,0.25,
                     240.0,1);
  if (iVar1 != 0) {
    iVar1 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_00495da0
                      (g_CEditorToolsPtr,"Enter number of frames to record (or 0 to record until CTRL+V is pressed)",(int *)&DAT_01cd0c40,1,
                       0,99999,1);
    if (iVar1 != 0) {
      iVar1 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_00495da0
                        (g_CEditorToolsPtr,"Enter image width",&DAT_0061d96c,1,1,9999,1);
      if (iVar1 != 0) {
        iVar1 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_00495da0
                          (g_CEditorToolsPtr,"Enter image height",&DAT_0061d970,1,1,9999,1)
        ;
        if (iVar1 != 0) {
          shape_edittool_cpp_CEditorTools_showMessage_FUN_004942e0
                    (g_CEditorToolsPtr,"Press CTRL+V to begin recording.");
          _DAT_01cd0c38 = 1;
          return;
        }
      }
    }
  }
  return;
}
