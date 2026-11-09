// Name: core_mission.cpp_FUN_004f7590
// Address: 004f7590
// Address Range: [[004f7590, 004f76a1]]
// Convention: __cdecl
// Signature: int __cdecl core_mission_cpp_FUN_004f7590(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_mission_cpp_FUN_004f7590(CDemonMission *this_ptr)

{
  CEventList *this_ptr_00;
  CGame *pCVar1;
  uint uVar2;
  char *pcVar3;
  
  if (_DAT_01d5ba00 < 1) {
    pcVar3 = "Can't run mission - no heros";
  }
  else {
    if (*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) != 0) {
      core_mission_cpp_FUN_004f6a80(this_ptr);
      *(uint *)(this_ptr + 0x1450) = 0xffffffff;
      this_ptr_00 = 0x01C6E360;
      *(uint *)(this_ptr + 0x144c) = 0;
      *(uint *)(this_ptr + 0x1448) = *(uint *)(this_ptr + 0x144c);
      *(uint *)(this_ptr + 0x1444) = *(uint *)(this_ptr + 0x1448);
      core_event_cpp_CEventList_reset_FUN_0048bfd0(this_ptr_00);
      pCVar1 = g_CGamePtr;
      *(uint *)&g_CGamePtr->field_0x24c = 0;
      *(uint *)&pCVar1->field_0x294 = 0xbf800000;
      core_mission_cpp_FUN_004f6de0
                (this_ptr,*(uint *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2c));
      uVar2 = 0;
      pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Loading script");
      core_level_cpp_FUN_004e0000(0x01D70AB8,pcVar3,uVar2);
      core_mission_cpp_FUN_004f63c0(this_ptr);
      core_script_cpp_FUN_005297a0(g_CScriptPtr);
      core_script_cpp_FUN_00529920(g_CScriptPtr);
      core_setdir_cpp_FUN_00540bc0(g_CDemonSetPtr);
      return 1;
    }
    pcVar3 = "Can't run mission - no local hero";
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0047cf40(g_CEditorToolsPtr,pcVar3);
  return 0;
}
