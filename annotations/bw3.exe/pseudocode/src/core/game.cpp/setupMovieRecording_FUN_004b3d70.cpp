// Name: core_game.cpp_setupMovieRecording_FUN_004b3d70
// Address: 004b3d70
// Address Range: [[004b3d70, 004b3e4c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_setupMovieRecording_FUN_004b3d70(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_setupMovieRecording_FUN_004b3d70(void)

{
  int iVar1;
  
  _DAT_01d22c44 = 0;
  _DAT_01d22c4c = 0;
  iVar1 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_0047ea10
                    (g_CEditorToolsPtr,"?Enter Movie FPS" + 1,(float *)&DAT_005fe9e8,1,0.25,
                     240.0,1);
  if (iVar1 != 0) {
    iVar1 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_0047e940
                      (g_CEditorToolsPtr,"Enter number of frames to record (or 0 to record until CTRL+V is pressed)",(int *)&DAT_01d22c48,1,
                       0,99999,1);
    if (iVar1 != 0) {
      iVar1 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_0047e940
                        (g_CEditorToolsPtr,"Enter image width",&DAT_005fe9ec,1,1,9999,1);
      if (iVar1 != 0) {
        iVar1 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_0047e940
                          (g_CEditorToolsPtr,"Enter image height",&DAT_005fe9f0,1,1,9999,1)
        ;
        if (iVar1 != 0) {
          shape_edittool_cpp_CEditorTools_showMessage_FUN_0047ce80
                    (g_CEditorToolsPtr,"Press CTRL+V to begin recording.");
          _DAT_01d22c40 = 1;
          return;
        }
      }
    }
  }
  return;
}
