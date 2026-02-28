// Name: core_msnedit.cpp_CDemonMission_pasteActorProperty_FUN_0053af50
// Address: 0053af50
// Address Range: [[0053af50, 0053b02c]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_pasteActorProperty_FUN_0053af50(CDemonMission *this_ptr,char *property)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_pasteActorProperty_FUN_0053af50(CDemonMission *this_ptr,char *property)

{
  CKeyFramedModel *this_ptr_00;
  
  switch(*(uint *)property) {
  case 5:
    if ((CDemonActor *)**(uint **)(property + 0x68) != (CDemonActor *)0x0) {
      core_msnedit_cpp_CDemonMission_selectActor_FUN_0053c140
                (this_ptr,(CDemonActor *)**(uint **)(property + 0x68));
      return;
    }
    break;
  case 6:
    this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                            (*(CKeyFramedModelInstance **)(property + 0x68));
    core_dmodel_cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0(this_ptr_00);
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Reloading keyframed models...");
    core_dmodel_cpp_freeAllModels_FUN_00478cb0();
    core_mission_cpp_CDemonMission_prepareAllActors_FUN_00523cf0(this_ptr);
    return;
  case 8:
    core_msnedit_cpp_CDemonMission_playSound_FUN_0053eb40(this_ptr,*(char **)(property + 0x68));
    return;
  case 0xb:
    core_msnedit_cpp_CDemonMission_editActorAtIndex_FUN_0053b030(this_ptr,(int)property);
    return;
  case 0xc:
    core_msnedit_cpp_CDemonMission_editActorDetailed_FUN_0053b510(this_ptr,(int)property);
    return;
  case 0xd:
    if (-1 < INT_02f7c52c) {
      INT_02f7c52c = -1;
      return;
    }
    INT_02f7c530 = 0;
    INT_02f7c52c = (int)(property + -0x2f7a02c) / 0xec;
    return;
  }
  return;
}
