// Name: core_msnedit.cpp_CDemonMission_FUN_0053c140
// Address: 0053c140
// Address Range: [[0053c140, 0053c203]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053c140(CDemonMission *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053c140(CDemonMission *this_ptr,int param_2)

{
  _FILE *file_handle;
  
  remove("$$UNDO$$.TMP");
  INT_02f7c52c = -1;
  *(int *)(this_ptr->unk2 + 0x1c) = param_2;
  if (param_2 != 0) {
    *(uint *)(param_2 + 0x148) = 0;
    if (*(int *)(*(int *)(this_ptr->unk2 + 0x1c) + 0x2c) != *(int *)this_ptr->unk1) {
      core_mission_cpp_CDemonMission_FUN_00523fb0(this_ptr);
    }
    if ((DAT_02f7c53c == 0) && (g_CEdCheckInstance.checked_state != 0)) {
      core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
                (g_CDemonSetPtr,*(CDemonActor **)(this_ptr->unk2 + 0x1c),1);
    }
    file_handle = shape_memdbg_cpp_openFile_FUN_0050f7a0
                            ("$$UNDO$$.TMP",(char *)0x0,"wt",
                             "..\\core\\msnedit.cpp",0x9fe);
    if (file_handle != (_FILE *)0x0) {
      core_actor_cpp_syncActorTypeIDs_FUN_0040c7c0();
      core_actor_cpp_CDemonActor_save_FUN_0040af30
                (*(CDemonActor **)(this_ptr->unk2 + 0x1c),file_handle);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\msnedit.cpp",0xa02);
      return;
    }
  }
  return;
}
