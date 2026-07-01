// Name: core_skeledit.cpp_CDeformableModel_save_FUN_0058f040
// Address: 0058f040
// Address Range: [[0058f040, 0058f119]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModel_save_FUN_0058f040(CDeformableModel *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CDeformableModel_save_FUN_0058f040(CDeformableModel *this_ptr,char *filename)

{
  CPodFile *pCVar1;
  _FILE *file_handle;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Saving model to %s...",filename);
  pCVar1 = engine_pod_cpp_CPod_locateFile_FUN_005512f0
                     ((CPod *)g_CDemonPodPtr,"models",filename,(int *)0x0);
  if (pCVar1 != (CPodFile *)0x0) {
    shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
              (g_CEditorToolsPtr,"%s\\%s already exists in a mounted pod file:\n%s\nI'm still saving it to the local file,\nbut just thought you would want to know about the\none in the pod.","models",filename,
               pCVar1->filename);
  }
  file_handle = engine_dosio_cpp_getFile_FUN_00481a50("models",filename,"wt");
  if (file_handle == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 2860;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::save - Can't create %s",filename);
  }
  core_skeledit_cpp_CDeformableModel_saveStream_FUN_0058f120(this_ptr,file_handle);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\skeledit.cpp",2862);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Saved model to %s OK",filename);
  return;
}
