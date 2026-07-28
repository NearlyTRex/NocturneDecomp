// Name: core_mission.cpp_CDemonMission_startMission_FUN_004d9780
// Address: 004d9780
// Address Range: [[004d9780, 004d98b3]]
// Convention: __cdecl
// Signature: int __cdecl core_mission_cpp_CDemonMission_startMission_FUN_004d9780(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_mission_cpp_CDemonMission_startMission_FUN_004d9780(CDemonMission *this_ptr)

{
  char (*pacVar1) [256];
  CEventList *this_ptr_00;
  char *text;
  int iVar2;
  
  if (_DAT_01cae0d4 < 1) {
    shape_edittool_cpp_FUN_0046fcd0(0x01BCD074,"Can't run mission - no heros");
    return 0;
  }
  if (*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) != 0) {
    core_mission_cpp_CDemonMission_prepareAllActors_FUN_004d8db0(this_ptr);
    pacVar1 = this_ptr->set_names;
    *(char *)((int)(pacVar1 + 3) + 0xe0) = -1;
    this_ptr_00 = 0x01C03A10;
    *(char *)((int)(pacVar1 + 3) + 0xe1) = -1;
    *(char *)((int)(pacVar1 + 3) + 0xe2) = -1;
    *(char *)((int)(pacVar1 + 3) + 0xe3) = -1;
    pacVar1 = this_ptr->set_names;
    *(char *)((int)(pacVar1 + 3) + 0xdc) = '\0';
    *(char *)((int)(pacVar1 + 3) + 0xdd) = '\0';
    *(char *)((int)(pacVar1 + 3) + 0xde) = '\0';
    *(char *)((int)(pacVar1 + 3) + 0xdf) = '\0';
    *(uint *)(this_ptr->set_names[3] + 0xd8) = *(uint *)(this_ptr->set_names[3] + 0xdc);
    *(uint *)(this_ptr->set_names[3] + 0xd4) = *(uint *)(this_ptr->set_names[3] + 0xd8);
    core_event_cpp_CEventList_reset_FUN_0047aa00(this_ptr_00);
    *(uint *)(0x01C775EC + 0x228) = 0;
    core_mission_cpp_CDemonMission_loadSet_FUN_004d9020
              (this_ptr,*(int *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x2c));
    iVar2 = 0;
    text = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Loading script");
    core_level_cpp_CLevelLoader_update_FUN_004c59e0((CLevelLoader *)INT_005baca0,text,iVar2);
    iVar2 = core_mission_cpp_CDemonMission_loadScript_FUN_004d86d0
                      (this_ptr,*(int *)(0x01C775EC + 0x234));
    if (iVar2 == 0) {
      return 0;
    }
    core_script_cpp_FUN_004feff0(0x01E56DA0);
    core_script_cpp_CScript_executeInitSection_FUN_004ff170(0x01E56DA0);
    core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_005135f0(0x01E57284);
    return 1;
  }
  shape_edittool_cpp_FUN_0046fcd0(0x01BCD074,"Can't run mission - no local hero");
  return 0;
}
