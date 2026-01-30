// Name: core_msnedit.cpp_CDemonMission_FUN_0053bc80
// Address: 0053bc80
// Address Range: [[0053bc80, 0053bce0]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053bc80(CDemonMission *this_ptr,int param_2,int param_3)

#include "nocturne.h"

void __cdecl
core_msnedit_cpp_CDemonMission_FUN_0053bc80(CDemonMission *this_ptr,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 != 0) {
    if (param_3 == 0) {
      iVar1 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                        (g_CEditorToolsPtr,"Really delete actor %s",param_2);
      if (iVar1 == 0) {
        return;
      }
    }
    if (param_2 == *(int *)(this_ptr->unk2 + 0x1c)) {
      core_msnedit_cpp_CDemonMission_FUN_0053bcf0(this_ptr);
    }
    core_msnedit_cpp_CDemonMission_FUN_00538ea0(this_ptr,param_2);
    core_mission_cpp_CDemonMission_FUN_00523f20(this_ptr);
    core_mission_cpp_CDemonMission_buildSetActorList_FUN_00523e60(this_ptr);
  }
  return;
}
