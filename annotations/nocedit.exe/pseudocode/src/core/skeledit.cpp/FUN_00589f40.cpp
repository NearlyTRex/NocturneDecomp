// Name: core_skeledit.cpp_FUN_00589f40
// Address: 00589f40
// Address Range: [[00589f40, 00589f96]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_00589f40()

#include "nocturne.h"

void core_skeledit_cpp_FUN_00589f40(void)

{
  CPodFile *pCVar1;
  char *in_stack_00000004;
  char *in_stack_00000008;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x20);
  pCVar1 = engine_pod_cpp_CPod_locateFile_FUN_005512f0
                     ((CPod *)g_CDemonPodPtr,in_stack_00000004,in_stack_00000008,(int *)0x0);
  if (pCVar1 == (CPodFile *)0x0) {
    return;
  }
  shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
            (g_CEditorToolsPtr,"%s\\%s already exists in a mounted pod file:\n%s\nI'm still saving it to the local file,\nbut just thought you would want to know about the\none in the pod.",in_stack_00000004,
             in_stack_00000008,pCVar1->filename);
  return;
}
