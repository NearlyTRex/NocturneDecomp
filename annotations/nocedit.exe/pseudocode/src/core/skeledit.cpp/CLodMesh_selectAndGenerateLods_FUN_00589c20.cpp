// Name: core_skeledit.cpp_CLodMesh_selectAndGenerateLods_FUN_00589c20
// Address: 00589c20
// Address Range: [[00589c20, 00589f39]]
// Convention: __cdecl
// Signature: int __cdecl core_skeledit_cpp_CLodMesh_selectAndGenerateLods_FUN_00589c20(CLodMesh *this_ptr,CLodMeshPrecomputeEntry *entry,int render_mode)

#include "nocturne.h"

int __cdecl core_skeledit_cpp_CLodMesh_selectAndGenerateLods_FUN_00589c20(CLodMesh *this_ptr,CLodMeshPrecomputeEntry *entry,int render_mode)

{
  int iVar1;
  CPickList *this_ptr_00;
  _FILE *p_Var2;
  char *format_string;
  CPickList local_a70;
  CPickList local_6c8;
  CLodMeshPrecomputeEntry local_320;
  
  __STK();
  if (entry->skip_generation != 1) {
    shape_meshlod_cpp_CLodMesh_previewLodGeneration_FUN_0051d520(this_ptr,0,render_mode);
    iVar1 = shape_meshlod_cpp_CLodMesh_loadPrecomputeFile_FUN_0051b6f0(this_ptr);
    if (iVar1 != 0) {
      if (entry->for_shadows == 0) {
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_6c8);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  (&local_6c8.base,"Use the file and select LODs now.");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  (&local_6c8.base,"Rebuild LODs, recreating the precompute file.");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  (&local_6c8.base,"Don't select LODs at this time.  I can always use the precompute file later.");
        iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          (&local_6c8,"Precomputed LOD exists for this model",-1,0);
        this_ptr_00 = &local_6c8;
      }
      else {
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_a70);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  (&local_a70.base,"Use the file and select a shadow LOD now.");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  (&local_a70.base,"Rebuild shadow LOD, recreating the precompute file.");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  (&local_a70.base,"Don't select a shadow LOD at this time.  I can always use the precompute file later.");
        iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          (&local_a70,"Precomputed LOD exists for this model for shadow LOD",-1,0);
        this_ptr_00 = &local_a70;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(this_ptr_00,0);
      if (iVar1 != 0) {
        if (iVar1 == 1) {
          p_Var2 = shape_meshlod_cpp_CLodMesh_openPrecomputeFile_FUN_0051b770
                             (this_ptr,"wt");
          this_ptr->precompute_file = p_Var2;
          if (p_Var2 == (_FILE *)0x0) {
            g_CurrentFilename = "..\\core\\skeledit.cpp";
            g_CurrentLineNumber = 0x179;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create mesh precompute file.");
          }
          core_skeledit_cpp_CLodMeshPrecomputeEntry_save_FUN_0058a0f0
                    (entry,this_ptr->precompute_file);
          shape_meshlod_cpp_CLodMesh_generateLOD_FUN_00516ba0(this_ptr,0,render_mode);
          sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
          sound_sndmain_cpp_startSfx_FUN_005a8e90("dixie.wav");
          shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                    (g_CEditorToolsPtr,"LOD generation complete!");
          sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
          return 1;
        }
        return 0;
      }
      p_Var2 = shape_meshlod_cpp_CLodMesh_openPrecomputeFile_FUN_0051b770(this_ptr,"rt");
      this_ptr->precompute_file = p_Var2;
      if (p_Var2 == (_FILE *)0x0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Error loading precompute file.");
        return -1;
      }
      core_skeledit_cpp_CLodMeshPrecomputeEntry_ctor_FUN_00589fa0(&local_320);
      core_skeledit_cpp_CLodMeshPrecomputeEntry_load_FUN_00589fe0
                (&local_320,this_ptr->precompute_file);
      iVar1 = shape_meshlod_cpp_CLodMesh_initializeFromPrecomputedData_FUN_0051b8a0
                        (this_ptr,this_ptr->precompute_file);
      if (iVar1 == 0) {
        shape_meshlod_cpp_CLodMesh_closePrecomputeFile_FUN_0051b870(this_ptr);
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Error loading precompute file.");
        return -1;
      }
      shape_meshlod_cpp_CLodMesh_closePrecomputeFile_FUN_0051b870(this_ptr);
      return 1;
    }
    format_string = "No precompute file exists.  Generate a LODs now?";
    if (entry->for_shadows != 0) {
      format_string = "No precompute file exists.  Generate an LOD for shadows now?";
    }
    iVar1 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                      (g_CEditorToolsPtr,format_string);
    if (iVar1 != 0) {
      shape_meshlod_cpp_CLodMesh_generateLOD_FUN_00516ba0(this_ptr,0,render_mode);
      sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
      sound_sndmain_cpp_startSfx_FUN_005a8e90("dixie.wav");
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                (g_CEditorToolsPtr,"LOD generation complete!");
      sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
      return 1;
    }
  }
  return 0;
}
