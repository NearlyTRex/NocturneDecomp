// Name: shape_design.c_handleEditorHotkeys_FUN_0045b990
// Address: 0045b990
// Address Range: [[0045b990, 0045ba57]]
// Convention: __cdecl
// Signature: void shape_design.c_handleEditorHotkeys_FUN_0045b990(void)

#include "nocturne.h"

void __cdecl shape_design_c_handleEditorHotkeys_FUN_0045b990(void)

{
  int iVar1;
  
  if ((g_KeyboardState[0x26] != '\0') && (g_KeyboardState[0x1d] != '\0')) {
    g_KeyboardState[0x26] = '\0';
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    iVar1 = shape_design_c_promptForModelNameAndLoad_FUN_00458a10();
    if (iVar1 != 0) {
      shape_design_c_validateModelTextures_FUN_00459a20("art",0);
    }
  }
  if ((g_KeyboardState[0x1f] != '\0') && (g_KeyboardState[0x1d] != '\0')) {
    g_KeyboardState[0x1f] = '\0';
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    shape_design_c_saveCurrentModel_FUN_00459de0();
  }
  if ((g_KeyboardState[0x11] != '\0') && (g_KeyboardState[0x1d] != '\0')) {
    g_KeyboardState[0x11] = '\0';
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    shape_design_c_modelExportWizard_FUN_0045a7b0(0);
  }
  if ((g_KeyboardState[0x30] != '\0') && (g_KeyboardState[0x1d] != '\0')) {
    g_KeyboardState[0x30] = '\0';
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    shape_design_c_exportVertexListFile_FUN_0045a610();
    shape_design_c_modelExportWizard_FUN_0045a7b0(1);
  }
  return;
}
