// Name: core_mission.cpp_CDemonMission_startMission_FUN_004d9780
// Address: 004d9780
// Address Range: [[004d9780, 004d98b3]]
// Convention: __cdecl
// Signature: int __cdecl core_mission_cpp_CDemonMission_startMission_FUN_004d9780(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_mission_cpp_CDemonMission_startMission_FUN_004d9780(CDemonMission *this_ptr)

{
  CEventList *this_ptr_00;
  char *text;
  int iVar1;
  
  if (_DAT_01cae0d4 < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0046fcd0
              (g_CEditorTools_PTR_005b6d50,"Can't run mission - no heros");
    return 0;
  }
  if (g_HeroActors[g_LocalHeroIndex] != (CHero *)0x0) {
    core_mission_cpp_CDemonMission_prepareAllActors_FUN_004d8db0(this_ptr);
    (this_ptr->pending_teleport).area_id = -1;
    this_ptr_00 = 0x01C03A10;
    (this_ptr->pending_teleport).position.z = 0.0;
    (this_ptr->pending_teleport).position.y = (this_ptr->pending_teleport).position.z;
    (this_ptr->pending_teleport).position.x = (this_ptr->pending_teleport).position.y;
    core_event_cpp_CEventList_reset_FUN_0047aa00(this_ptr_00);
    g_CGame_PTR_005b9354->letterbox_mode = 0;
    core_mission_cpp_CDemonMission_loadSet_FUN_004d9020
              (this_ptr,(g_HeroActors[g_LocalHeroIndex]->base).base.location.area_id);
    iVar1 = 0;
    text = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Loading script");
    core_level_cpp_CLevelLoader_update_FUN_004c59e0(g_CLevelLoader_PTR_005baca0,text,iVar1);
    iVar1 = core_mission_cpp_CDemonMission_loadScript_FUN_004d86d0
                      (this_ptr,g_CGame_PTR_005b9354->is_loading);
    if (iVar1 == 0) {
      return 0;
    }
    core_script_cpp_CScript_FUN_004feff0(0x01E56DA0);
    core_script_cpp_CScript_executeInitSection_FUN_004ff170(0x01E56DA0);
    core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_005135f0(g_CDemonSet_PTR_005be368);
    return 1;
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0046fcd0
            (g_CEditorTools_PTR_005b6d50,"Can't run mission - no local hero");
  return 0;
}
