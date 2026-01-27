// Name: core_msnedit.cpp_FUN_0053af50
// Address: 0053af50
// Address Range: [[0053af50, 0053b02c]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_0053af50()

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_FUN_0053af50(uint param_1, uint param_2) */

void core_msnedit_cpp_FUN_0053af50(void)

{
  CKeyFramedModel *this_ptr;
  CDemonMission *in_stack_00000004;
  uint *in_stack_00000008;
  
  switch(*in_stack_00000008) {
  case 5:
    if (*(int *)in_stack_00000008[0x1a] != 0) {
      core_msnedit_cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140();
      return;
    }
    break;
  case 6:
    this_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                         ((CKeyFramedModelInstance *)in_stack_00000008[0x1a]);
    core_dmodel_cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0(this_ptr);
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Reloading keyframed models...");
    core_dmodel_cpp_freeAllModels_FUN_00478cb0();
    core_mission_cpp_CDemonMission_FUN_00523cf0(in_stack_00000004);
    return;
  case 8:
    core_msnedit_cpp_FUN_0053eb40();
    return;
  case 0xb:
    core_msnedit_cpp_RelevantActorsToTesting_FUN_0053b030();
    return;
  case 0xc:
    core_msnedit_cpp_FUN_0053b510();
    return;
  case 0xd:
    if (-1 < INT_02f7c52c) {
      INT_02f7c52c = -1;
      return;
    }
    INT_02f7c530 = 0;
    INT_02f7c52c = (int)(in_stack_00000008 + -0xbde80b) / 0xec;
    return;
  }
  return;
}
