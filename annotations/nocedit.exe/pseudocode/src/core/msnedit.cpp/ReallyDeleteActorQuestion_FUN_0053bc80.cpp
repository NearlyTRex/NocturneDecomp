// Name: core_msnedit.cpp_ReallyDeleteActorQuestion_FUN_0053bc80
// Address: 0053bc80
// Address Range: [[0053bc80, 0053bce0]]
// Convention: unknown
// Signature: void core_msnedit_cpp_ReallyDeleteActorQuestion_FUN_0053bc80(void)

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_ReallyDeleteActorQuestion(uint param_1, uint
   param_2, uint param_3) */

void core_msnedit_cpp_ReallyDeleteActorQuestion_FUN_0053bc80(void)

{
  int iVar1;
  CDemonMission *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  if (in_stack_00000008 != 0) {
    if (in_stack_0000000c == 0) {
      iVar1 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                        (g_CEditorToolsPtr,"Really delete actor %s",in_stack_00000008);
      if (iVar1 == 0) {
        return;
      }
    }
    if (in_stack_00000008 == *(int *)(in_stack_00000004->unk2 + 0x1c)) {
      core_msnedit_cpp_FUN_0053bcf0();
    }
    core_msnedit_cpp_FUN_00538ea0();
    core_mission_cpp_CDemonMission_FUN_00523f20(in_stack_00000004);
    core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(in_stack_00000004);
  }
  return;
}
