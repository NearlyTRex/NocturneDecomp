// Name: core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140
// Address: 0053c140
// Address Range: [[0053c140, 0053c203]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140()

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp(uint param_1,
   uint param_2) */

void core_msnedit_cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140(void)

{
  FILE *file_handle;
  CDemonMission *in_stack_00000004;
  int in_stack_0000000c;
  
  crt_io_c_deleteFile_FUN_005ff9d0("$$UNDO$$.TMP");
  DAT_02f7c52c = 0xffffffff;
  *(int *)(in_stack_00000004->field2_0xc + 0x1c) = in_stack_0000000c;
  if (in_stack_0000000c != 0) {
    *(uint *)(in_stack_0000000c + 0x148) = 0;
    if (*(int *)(*(int *)(in_stack_00000004->field2_0xc + 0x1c) + 0x2c) !=
        *(int *)in_stack_00000004->field0_0x0) {
      core_mission_cpp_CDemonMission_FUN_00523fb0(in_stack_00000004);
    }
    if ((DAT_02f7c53c == 0) && (g_CEdCheckInstance.checked_state != 0)) {
      core_setdir_cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0
                (g_CDemonSetPtr,*(CDemonActor **)(in_stack_00000004->field2_0xc + 0x1c),1);
    }
    file_handle = shape_memdbg_cpp_openFile_FUN_0050f7a0
                            ("$$UNDO$$.TMP",(char *)0x0,"wt",
                             "..\\core\\msnedit.cpp",0x9fe);
    if (file_handle != (FILE *)0x0) {
      core_actor_cpp_syncActorTypeIDs_FUN_0040c7c0();
      core_actor_cpp_CDemonActor_save_FUN_0040af30
                (*(CDemonActor **)(in_stack_00000004->field2_0xc + 0x1c),file_handle);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\msnedit.cpp",0xa02);
      return;
    }
  }
  return;
}
