// Name: core_skeledit.cpp_warnIfFileExistsInPod_FUN_00589f40
// Address: 00589f40
// Address Range: [[00589f40, 00589f96]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_warnIfFileExistsInPod_FUN_00589f40(char *base_path,char *filename)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_warnIfFileExistsInPod_FUN_00589f40(char *base_path,char *filename)

{
  CPodFile *pCVar1;
  
  pCVar1 = engine_pod_cpp_CPod_locateFile_FUN_005512f0
                     ((CPod *)g_CDemonPodPtr,base_path,filename,(int *)0x0);
  if (pCVar1 == (CPodFile *)0x0) {
    return;
  }
  shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
            (g_CEditorToolsPtr,"%s\\%s already exists in a mounted pod file:\n%s\nI'm still saving it to the local file,\nbut just thought you would want to know about the\none in the pod.",base_path,filename,
             pCVar1->filename);
  return;
}
