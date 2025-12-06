// Name: core_skeledit.cpp_FUN_00589c20
// Address: 00589c20
// Address Range: [[00589c20, 00589f39]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_00589c20()

#include "nocturne.h"

int core_skeledit_cpp_FUN_00589c20(void)

{
  int iVar1;
  CPickList *this_ptr;
  FILE *pFVar2;
  char *format_string;
  BADSPACEBASE *in_ESP;
  CLodMesh *in_stack_0000000c;
  int in_stack_00000010;
  uint in_stack_00000014;
  CStrList_vtable *in_stack_fffff5b4;
  CStrList_vtable *in_stack_fffff5b8;
  CStrList_vtable *in_stack_fffff5bc;
  CStrList_vtable *in_stack_fffff5c0;
  uint in_stack_fffff5c4;
  byte auStack_6b8 [20];
  CPickList CStack_6a4;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0xa84);
  if (*(int *)(in_stack_00000010 + 0x308) == 1) {
    iVar1 = 0;
  }
  else {
    shape_meshlod_cpp_CLodMesh_previewLodGeneration_FUN_0051d520
              (in_stack_0000000c,0,in_stack_00000014);
    iVar1 = shape_meshlod_cpp_CLodMesh_loadPrecomputeFile_FUN_0051b6f0(in_stack_0000000c);
    if (iVar1 != 0) {
      if (*(int *)(in_stack_00000010 + 0x30c) == 0) {
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_6b8);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)(auStack_6b8 + 4),"Use the file and select LODs now.");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)(auStack_6b8 + 8),"Rebuild LODs, recreating the precompute file.");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)(auStack_6b8 + 0xc),"Don't select LODs at this time.  I can always use the precompute file later.");
        iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          ((CPickList *)(auStack_6b8 + 0x10),"Precomputed LOD exists for this model",-1,
                           0);
        this_ptr = &CStack_6a4;
      }
      else {
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff5a0);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffff5a4,"Use the file and select a shadow LOD now.");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffff5a8,"Rebuild shadow LOD, recreating the precompute file.");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)&stack0xfffff5ac,"Don't select a shadow LOD at this time.  I can always use the precompute file later.");
        iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          ((CPickList *)&stack0xfffff5b0,"Precomputed LOD exists for this model for shadow LOD",-1,0);
        this_ptr = (CPickList *)&stack0xfffff5b4;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (this_ptr,0,(uint)in_stack_fffff5b4,(uint)in_stack_fffff5b8,(uint)in_stack_fffff5bc,
                 (uint)in_stack_fffff5c0,in_stack_fffff5c4);
      if (iVar1 != 0) {
        if (iVar1 != 1) {
          return 0;
        }
        pFVar2 = shape_meshlod_cpp_CLodMesh_openPrecomputeFile_FUN_0051b770
                           (in_stack_0000000c,"wt");
        in_stack_0000000c->precompute_file = pFVar2;
        if (pFVar2 == (FILE *)0x0) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0x179;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create mesh precompute file.");
        }
        core_skeledit_cpp_FUN_0058a0f0();
        shape_meshlod_cpp_CLodMesh_generateLOD_FUN_00516ba0(in_stack_0000000c,0,in_stack_00000014);
        sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
        sound_sndmain_cpp_startSfx_FUN_005a8e90("dixie.wav");
        shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                  (g_CEditorToolsPtr,"LOD generation complete!");
        sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
        return 1;
      }
      pFVar2 = shape_meshlod_cpp_CLodMesh_openPrecomputeFile_FUN_0051b770
                         (in_stack_0000000c,"rt");
      in_stack_0000000c->precompute_file = pFVar2;
      if (pFVar2 == (FILE *)0x0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Error loading precompute file.");
        return -1;
      }
      core_skeledit_cpp_FUN_00589fa0();
      core_skeledit_cpp_FUN_00589fe0();
      iVar1 = shape_meshlod_cpp_CLodMesh_initializeLodGeneration_FUN_0051b8a0
                        (in_stack_0000000c,in_stack_0000000c->precompute_file);
      if (iVar1 != 0) {
        shape_meshlod_cpp_CLodMesh_closePrecomputeFile_FUN_0051b870(in_stack_0000000c);
        return 1;
      }
      shape_meshlod_cpp_CLodMesh_closePrecomputeFile_FUN_0051b870(in_stack_0000000c);
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"Error loading precompute file.");
      return -1;
    }
    format_string = "No precompute file exists.  Generate a LODs now?";
    if (*(int *)(in_stack_00000010 + 0x30c) != 0) {
      format_string = "No precompute file exists.  Generate an LOD for shadows now?";
    }
    iVar1 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                      (g_CEditorToolsPtr,format_string);
    if (iVar1 != 0) {
      shape_meshlod_cpp_CLodMesh_generateLOD_FUN_00516ba0(in_stack_0000000c,0,in_stack_00000014);
      sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
      sound_sndmain_cpp_startSfx_FUN_005a8e90("dixie.wav");
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                (g_CEditorToolsPtr,"LOD generation complete!");
      sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
      return 1;
    }
  }
  return iVar1;
}
