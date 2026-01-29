// Name: core_skeledit.cpp_CSkeleton_save_FUN_0058b2c0
// Address: 0058b2c0
// Address Range: [[0058b2c0, 0058b399]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CSkeleton_save_FUN_0058b2c0(CSkeleton *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CSkeleton_save_FUN_0058b2c0(CSkeleton *this_ptr,_FILE *file_handle)

{
  CPodFile *pCVar1;
  CSkeleton *this_ptr_00;
  _FILE *unaff_EBP;
  char *in_stack_00000008;
  
  __STK(0x24);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Saving skeleton to %s...");
  pCVar1 = engine_pod_cpp_CPod_locateFile_FUN_005512f0
                     ((CPod *)g_CDemonPodPtr,"data",in_stack_00000008,(int *)0x0);
  if (pCVar1 != (CPodFile *)0x0) {
    shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
              (g_CEditorToolsPtr,"%s\\%s already exists in a mounted pod file:\n%s\nI'm still saving it to the local file,\nbut just thought you would want to know about the\none in the pod.","data",
               in_stack_00000008,pCVar1->filename);
  }
  this_ptr_00 = (CSkeleton *)
                engine_dosio_c_getFile_FUN_00481a50("data",in_stack_00000008,"wt")
  ;
  if (this_ptr_00 == (CSkeleton *)0x0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x457;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CSkeleton::save - Can't create %s",in_stack_00000008);
  }
  core_skeledit_cpp_CSkeleton_saveStream_FUN_0058b3a0(this_ptr_00,unaff_EBP);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0((_FILE *)this_ptr_00,"..\\core\\skeledit.cpp",0x459);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Saved skeleton to %s OK");
  return;
}
