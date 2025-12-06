// Name: core_msnedit.cpp_CheckWorldMountedAndSave_FUN_0053d190
// Address: 0053d190
// Address Range: [[0053d190, 0053d21a]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_CheckWorldMountedAndSave_FUN_0053d190()

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_CheckWorldMountedAndSave(uint param_1, uint
   param_2) */

void core_msnedit_cpp_CheckWorldMountedAndSave_FUN_0053d190(void)

{
  CPodFile *pCVar1;
  BADSPACEBASE *in_ESP;
  char *in_stack_00000008;
  CDemonMission *in_stack_0000000c;
  byte *puStack_100;
  byte auStack_fc [244];
  
  pCVar1 = engine_pod_cpp_CPod_locateFile_FUN_005512f0
                     ((CPod *)g_CDemonPodPtr,"world",in_stack_00000008,(int *)0x0);
  if (pCVar1 != (CPodFile *)0x0) {
    shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
              (g_CEditorToolsPtr,"Warning: %s exists in mounted pod %s.\n\nI'm saving the mission to local file, anyway.\n\nJust thought you'd like to know.",in_stack_00000008,
               pCVar1->filename);
  }
  core_mission_cpp_CDemonMission_save_FUN_00522e30(in_stack_0000000c);
  crt_file_c_makepath_FUN_005febfc
            ((char *)&puStack_100,(char *)0x0,(char *)0x0,in_stack_0000000c->field2_0xc + 0x38,
             "scr");
  puStack_100 = auStack_fc;
  core_script_cpp_FUN_00566180();
  return;
}
