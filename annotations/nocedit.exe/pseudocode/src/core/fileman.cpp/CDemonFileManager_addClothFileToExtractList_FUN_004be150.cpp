// Name: core_fileman.cpp_CDemonFileManager_addClothFileToExtractList_FUN_004be150
// Address: 004be150
// Address Range: [[004be150, 004be228]]
// Convention: __cdecl
// Signature: void __cdecl core_fileman_cpp_CDemonFileManager_addClothFileToExtractList_FUN_004be150 (CDemonFileManager *file_manager_ptr,char *cloth_filename)

#include "nocturne.h"

void __cdecl
core_fileman_cpp_CDemonFileManager_addClothFileToExtractList_FUN_004be150
          (CDemonFileManager *file_manager_ptr,char *cloth_filename)

{
  void *pvVar1;
  CCloth *this_ptr;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Adding files for %s to extract list...");
  pvVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x3fe70,"..\\core\\fileman.cpp",0x153);
  this_ptr = (CCloth *)0x0;
  if (pvVar1 != (void *)0x0) {
    this_ptr = (CCloth *)core_cloth_cpp_FUN_00438ba0();
  }
  if (this_ptr == (CCloth *)0x0) {
    g_CurrentFilename = "..\\core\\fileman.cpp";
    g_CurrentLineNumber = 0x154;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't allocate cloth");
  }
  core_cloth_cpp_CCloth_load_FUN_00438cf0(this_ptr,cloth_filename);
  _fprintf((file_manager_ptr->base).file_ptr,"models\\%s\n",cloth_filename);
  core_cloth_cpp_FUN_0043e0a0();
  g_CurrentDebugLine = 0x158;
  g_CurrentDebugFilename = "..\\core\\fileman.cpp";
  if (this_ptr == (CCloth *)0x0) {
    return;
  }
  pvVar1 = (void *)core_cloth_cpp_CallToUnknownSomethingFreeMem_FUN_00438c00();
  shape_memdbg_cpp_debugFree_FUN_0050f210(pvVar1);
  return;
}
