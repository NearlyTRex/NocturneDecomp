// Name: core_game.cpp_setupMovieRecording_FUN_0049a240
// Address: 0049a240
// Address Range: [[0049a240, 0049a31c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_setupMovieRecording_FUN_0049a240(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_setupMovieRecording_FUN_0049a240(void)

{
  int iVar1;
  
  _DAT_01c78acc = 0;
  _DAT_01c78ad4 = 0;
  iVar1 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_00471430
                    (g_CEditorTools_PTR_005b6d50,"Enter Movie FPS",(float *)&DAT_005b9360,1
                     ,0.25,240.0,1);
  if (iVar1 != 0) {
    iVar1 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_00471360
                      (g_CEditorTools_PTR_005b6d50,"Enter number of frames to record (or 0 to record until CTRL+V is pressed)",
                       (int *)&DAT_01c78ad0,1,0,99999,1);
    if (iVar1 != 0) {
      iVar1 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_00471360
                        (g_CEditorTools_PTR_005b6d50,"Enter image width",&DAT_005b9364,1,1,
                         9999,1);
      if (iVar1 != 0) {
        iVar1 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_00471360
                          (g_CEditorTools_PTR_005b6d50,"Enter image height",&DAT_005b9368,1
                           ,1,9999,1);
        if (iVar1 != 0) {
          shape_edittool_cpp_CEditorTools_showMessage_FUN_0046fe60
                    (g_CEditorTools_PTR_005b6d50,"Press CTRL+V to begin recording.");
          _DAT_01c78ac8 = 1;
          return;
        }
      }
    }
  }
  return;
}
