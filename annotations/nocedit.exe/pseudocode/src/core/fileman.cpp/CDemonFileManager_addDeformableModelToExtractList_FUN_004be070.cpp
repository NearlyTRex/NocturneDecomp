// Name: core_fileman.cpp_CDemonFileManager_addDeformableModelToExtractList_FUN_004be070
// Address: 004be070
// Address Range: [[004be070, 004be141]]
// Convention: __cdecl
// Signature: void __cdecl core_fileman_cpp_CDemonFileManager_addDeformableModelToExtractList_FUN_004be070(CDemonFileManager *this_ptr,char *model_filename)

#include "nocturne.h"

void __cdecl core_fileman_cpp_CDemonFileManager_addDeformableModelToExtractList_FUN_004be070(CDemonFileManager *this_ptr,char *model_filename)

{
  CDeformableModel *this_ptr_00;
  CDeformableModel *pCVar1;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Adding files for %s to extract list...",model_filename);
  _fprintf((this_ptr->base).file_ptr,"models\\%s\n",model_filename);
  this_ptr_00 = (CDeformableModel *)shape_memdbg_cpp_debugAllocTracked1_FUN_0050f1b0
                          (0x9000,"..\\core\\fileman.cpp",323);
  pCVar1 = (CDeformableModel *)0x0;
  if (this_ptr_00 != (CDeformableModel *)0x0) {
    pCVar1 = core_skeleton_cpp_CDeformableModel_ctor_FUN_0059a160(this_ptr_00);
  }
  if (pCVar1 == (CDeformableModel *)0x0) {
    g_CurrentFilename = "..\\core\\fileman.cpp";
    g_CurrentLineNumber = 324;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory.");
  }
  core_skeleton_cpp_CDeformableModel_load_FUN_0059b8d0(pCVar1,model_filename);
  core_skeledit_cpp_CDeformableModel_addFilesToExtract_FUN_0058a2b0
            (pCVar1,(this_ptr->base).file_ptr);
  g_CurrentDebugLine = 0x147;
  g_CurrentDebugFilename = "..\\core\\fileman.cpp";
  if (pCVar1 == (CDeformableModel *)0x0) {
    return;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModel_dtor_FUN_0059a270(pCVar1,0);
  shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(pCVar1);
  return;
}
