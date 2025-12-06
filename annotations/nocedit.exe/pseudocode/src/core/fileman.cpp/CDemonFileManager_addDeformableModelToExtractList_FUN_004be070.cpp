// Name: core_fileman.cpp_CDemonFileManager_addDeformableModelToExtractList_FUN_004be070
// Address: 004be070
// Address Range: [[004be070, 004be141]]
// Convention: __cdecl
// Signature: void core_fileman.cpp_CDemonFileManager_addDeformableModelToExtractList_FUN_004be070(CDemonFileManager * file_manager_ptr, char * model_filename)

#include "nocturne.h"

void __cdecl
core_fileman_cpp_CDemonFileManager_addDeformableModelToExtractList_FUN_004be070
          (CDemonFileManager *file_manager_ptr,char *model_filename)

{
  CDeformableModel *pCVar1;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Adding files for %s to extract list...");
  crt_stdio_c_fprintf_FUN_005fe6d0(*(FILE **)model_filename,"models\\%s\n",model_filename);
  pCVar1 = (CDeformableModel *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x9000,"..\\core\\fileman.cpp",0x143);
  if (pCVar1 != (CDeformableModel *)0x0) {
    pCVar1 = core_skeleton_cpp_CDeformableModel_ctor_FUN_0059a160(pCVar1);
  }
  if (pCVar1 == (CDeformableModel *)0x0) {
    g_CurrentFilename = "..\\core\\fileman.cpp";
    g_CurrentLineNumber = 0x144;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory.");
  }
  core_skeleton_cpp_CDeformableModel_load_FUN_0059b8d0(pCVar1,model_filename);
  core_skeledit_cpp_FUN_0058a2b0();
  g_CurrentDebugLine = 0x147;
  g_CurrentDebugFilename = "..\\core\\fileman.cpp";
  if (pCVar1 == (CDeformableModel *)0x0) {
    return;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModel_dtor_FUN_0059a270(pCVar1);
  shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar1);
  return;
}
