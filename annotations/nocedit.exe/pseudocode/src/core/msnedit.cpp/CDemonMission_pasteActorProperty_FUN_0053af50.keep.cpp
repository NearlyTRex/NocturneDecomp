// Name: core_msnedit.cpp_CDemonMission_pasteActorProperty_FUN_0053af50
// Address: 0053af50
// MANUAL RECONSTRUCTION
// Address Range: [[0053af50, 0053b02c]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_pasteActorProperty_FUN_0053af50(CDemonMission *this_ptr,CActorProperty *property)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_pasteActorProperty_FUN_0053af50(CDemonMission *this_ptr,CActorProperty *property)

{
  CMotionList *actor;
  CKeyFramedModel *this_ptr_00;
  
  switch(property->type) {
  case PROP_CHOICE:
    actor = (((property->data).v_dfm_ptr)->motion_controller).motion_list_ptr;
    if (actor != (CMotionList *)0x0) {
      core_msnedit_cpp_CDemonMission_selectActor_FUN_0053c140(this_ptr,(CDemonActor *)actor);
      return;
    }
    break;
  case PROP_MODEL_KFM:
    this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                            ((property->data).v_kfm_ptr);
    core_dmodel_cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0(this_ptr_00);
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Reloading keyframed models...");
    core_dmodel_cpp_freeAllModels_FUN_00478cb0();
    core_mission_cpp_CDemonMission_prepareAllActors_FUN_00523cf0(this_ptr);
    return;
  case PROP_SOUND:
    core_msnedit_cpp_CDemonMission_playSound_FUN_0053eb40(this_ptr,(property->data).v_string_ptr);
    return;
  case PROP_EVENT:
    core_msnedit_cpp_CDemonMission_editActorAtIndex_FUN_0053b030(this_ptr,property);
    return;
  case PROP_BUTTON:
    core_msnedit_cpp_CDemonMission_editActorDetailed_FUN_0053b510(this_ptr,property);
    return;
  case PROP_MOTION:
    if (-1 < g_SelectedMotionPropertyIndex) {
      g_SelectedMotionPropertyIndex = -1;
      return;
    }
    g_MotionPropertyEditState = 0;
    g_SelectedMotionPropertyIndex = property - g_MsnEditPropertyList.properties;
    return;
  }
  return;
}
