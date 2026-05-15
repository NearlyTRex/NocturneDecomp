// Name: core_skeledit.cpp_CSkeleton_save_FUN_0058b2c0
// Address: 0058b2c0
// Address Range: [[0058b2c0, 0058b399]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CSkeleton_save_FUN_0058b2c0(CSkeleton *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CSkeleton_save_FUN_0058b2c0(CSkeleton *this_ptr,char *filename)

{
  CPodFile *pCVar1;
  _FILE *file_handle;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Saving skeleton to %s...",filename);
  pCVar1 = engine_pod_cpp_CPod_locateFile_FUN_005512f0
                     ((CPod *)g_CDemonPodPtr,"data",filename,(int *)0x0);
  if (pCVar1 != (CPodFile *)0x0) {
    shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
              (g_CEditorToolsPtr,"%s\\%s already exists in a mounted pod file:\n%s\nI'm still saving it to the local file,\nbut just thought you would want to know about the\none in the pod.","data",filename,
               pCVar1->filename);
  }
  file_handle = engine_dosio_cpp_getFile_FUN_00481a50("data",filename,"wt");
  if (file_handle == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x457;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CSkeleton::save - Can't create %s",filename);
  }
  core_skeledit_cpp_CSkeleton_saveStream_FUN_0058b3a0(this_ptr,file_handle);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\skeledit.cpp",0x459);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Saved skeleton to %s OK",filename);
  return;
}
