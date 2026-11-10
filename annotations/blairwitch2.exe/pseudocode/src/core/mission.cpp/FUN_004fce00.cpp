// Name: core_mission.cpp_FUN_004fce00
// Address: 004fce00
// Address Range: [[004fce00, 004fcf07]]
// Convention: __cdecl
// Signature: int __cdecl core_mission_cpp_FUN_004fce00(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_mission_cpp_FUN_004fce00(CDemonMission *this_ptr)

{
  CEventList *this_ptr_00;
  int clear_screen;
  char *pcVar1;
  
  if (_DAT_01cedee0 < 1) {
    pcVar1 = "Can't run mission - no heros";
  }
  else {
    if (*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) != 0) {
      core_mission_cpp_CDemonMission_prepareAllActors_FUN_004fc350(this_ptr);
      *(uint *)(this_ptr + 0x1128) = 0xffffffff;
      this_ptr_00 = 0x01C38BC0;
      *(uint *)(this_ptr + 0x1124) = 0;
      *(uint *)(this_ptr + 0x1120) = *(uint *)(this_ptr + 0x1124);
      *(uint *)(this_ptr + 0x111c) = *(uint *)(this_ptr + 0x1120);
      core_event_cpp_CEventList_reset_FUN_00489380(this_ptr_00);
      g_CGamePtr->letterbox_mode = 0;
      core_mission_cpp_CDemonMission_loadSet_FUN_004fc6b0
                (this_ptr,*(int *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2c));
      clear_screen = 0;
      pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Loading script");
      core_level_cpp_CLevelLoader_update_FUN_004e1600(0x01D03000,pcVar1,clear_screen);
      core_mission_cpp_FUN_004fbc90(this_ptr);
      core_script_cpp_CScript_initRuntime_FUN_00522080(g_CScriptPtr);
      core_script_cpp_CScript_executeInitSection_FUN_00522200(g_CScriptPtr);
      core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00539840(g_CDemonSetPtr);
      return 1;
    }
    pcVar1 = "Can't run mission - no local hero";
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0047be40(g_CEditorToolsPtr,pcVar1);
  return 0;
}
