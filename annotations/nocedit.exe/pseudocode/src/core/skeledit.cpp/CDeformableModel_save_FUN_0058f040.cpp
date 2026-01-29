// Name: core_skeledit.cpp_CDeformableModel_save_FUN_0058f040
// Address: 0058f040
// Address Range: [[0058f040, 0058f119]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModel_save_FUN_0058f040(CDeformableModel *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl
core_skeledit_cpp_CDeformableModel_save_FUN_0058f040(CDeformableModel *this_ptr,char *filename)

{
  CPodFile *pCVar1;
  CDeformableModel *this_ptr_00;
  char *in_stack_00000008;
  
  __STK(0x24);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Saving model to %s...");
  pCVar1 = engine_pod_cpp_CPod_locateFile_FUN_005512f0
                     ((CPod *)g_CDemonPodPtr,"models",in_stack_00000008,(int *)0x0);
  if (pCVar1 != (CPodFile *)0x0) {
    shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
              (g_CEditorToolsPtr,"%s\\%s already exists in a mounted pod file:\n%s\nI'm still saving it to the local file,\nbut just thought you would want to know about the\none in the pod.","models",
               in_stack_00000008,pCVar1->filename);
  }
  this_ptr_00 = (CDeformableModel *)
                engine_dosio_c_getFile_FUN_00481a50
                          ("models",in_stack_00000008,"wt");
  if (this_ptr_00 == (CDeformableModel *)0x0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0xb2c;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CDeformableModel::save - Can't create %s",in_stack_00000008);
  }
  core_skeledit_cpp_CDeformableModel_saveStream_FUN_0058f120(this_ptr_00);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0((_FILE *)this_ptr_00,"..\\core\\skeledit.cpp",0xb2e);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Saved model to %s OK");
  return;
}
