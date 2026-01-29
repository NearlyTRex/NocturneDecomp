// Name: core_msnedit.cpp_CheckWorldMountedAndSave_FUN_0053d190
// Address: 0053d190
// Address Range: [[0053d190, 0053d21a]]
// Convention: unknown
// Signature: void core_msnedit_cpp_CheckWorldMountedAndSave_FUN_0053d190(void)

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_CheckWorldMountedAndSave(uint param_1, uint
   param_2) */

void core_msnedit_cpp_CheckWorldMountedAndSave_FUN_0053d190(void)

{
  CPodFile *pCVar1;
  CDemonMission *in_stack_00000004;
  char *in_stack_00000008;
  char local_10c [260];
  
  pCVar1 = engine_pod_cpp_CPod_locateFile_FUN_005512f0
                     ((CPod *)g_CDemonPodPtr,"world",in_stack_00000008,(int *)0x0);
  if (pCVar1 != (CPodFile *)0x0) {
    shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
              (g_CEditorToolsPtr,"Warning: %s exists in mounted pod %s.\n\nI'm saving the mission to local file, anyway.\n\nJust thought you'd like to know.",in_stack_00000008,
               pCVar1->filename);
  }
  core_mission_cpp_CDemonMission_save_FUN_00522e30(in_stack_00000004);
  makepath
            (local_10c,(char *)0x0,(char *)0x0,in_stack_00000004->unk2 + 0x38,"scr");
  core_script_cpp_FUN_00566180();
  return;
}
