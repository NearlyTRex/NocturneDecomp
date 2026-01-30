// Name: core_msnedit.cpp_CDemonMission_FUN_0053d190
// Address: 0053d190
// Address Range: [[0053d190, 0053d21a]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053d190(CDemonMission *this_ptr,char *param_2)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053d190(CDemonMission *this_ptr,char *param_2)

{
  CPodFile *pCVar1;
  char local_10c [260];
  
  pCVar1 = engine_pod_cpp_CPod_locateFile_FUN_005512f0
                     ((CPod *)g_CDemonPodPtr,"world",param_2,(int *)0x0);
  if (pCVar1 != (CPodFile *)0x0) {
    shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
              (g_CEditorToolsPtr,"Warning: %s exists in mounted pod %s.\n\nI'm saving the mission to local file, anyway.\n\nJust thought you'd like to know.",param_2,pCVar1->filename);
  }
  core_mission_cpp_CDemonMission_save_FUN_00522e30(this_ptr);
  makepath
            (local_10c,(char *)0x0,(char *)0x0,this_ptr->unk2 + 0x38,"scr");
  core_script_cpp_CScript_FUN_00566180(g_CScriptPtr,local_10c);
  return;
}
