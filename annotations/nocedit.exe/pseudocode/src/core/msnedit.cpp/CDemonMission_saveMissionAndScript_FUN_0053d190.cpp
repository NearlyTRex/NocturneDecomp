// Name: core_msnedit.cpp_CDemonMission_saveMissionAndScript_FUN_0053d190
// Address: 0053d190
// Address Range: [[0053d190, 0053d21a]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_saveMissionAndScript_FUN_0053d190 (CDemonMission *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl
core_msnedit_cpp_CDemonMission_saveMissionAndScript_FUN_0053d190
          (CDemonMission *this_ptr,char *filename)

{
  CPodFile *pCVar1;
  char local_10c [100];
  
  pCVar1 = engine_pod_cpp_CPod_locateFile_FUN_005512f0
                     ((CPod *)g_CDemonPodPtr,"world",filename,(int *)0x0);
  if (pCVar1 != (CPodFile *)0x0) {
    shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
              (g_CEditorToolsPtr,"Warning: %s exists in mounted pod %s.\n\nI'm saving the mission to local file, anyway.\n\nJust thought you'd like to know.",filename,pCVar1->filename);
  }
  core_mission_cpp_CDemonMission_save_FUN_00522e30(this_ptr,filename);
  makepath
            (local_10c,(char *)0x0,(char *)0x0,this_ptr->mission_name,"scr");
  core_script_cpp_CScript_FUN_00566180(g_CScriptPtr,local_10c);
  return;
}
