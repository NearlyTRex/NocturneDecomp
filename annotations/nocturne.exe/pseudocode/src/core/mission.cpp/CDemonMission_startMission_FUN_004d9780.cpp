// Name: core_mission.cpp_CDemonMission_startMission_FUN_004d9780
// Address: 004d9780
// Address Range: [[004d9780, 004d98b3]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_mission_cpp_CDemonMission_startMission_FUN_004d9780(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_mission_cpp_CDemonMission_startMission_FUN_004d9780(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (_DAT_01cae0d4 < 1) {
    FUN_0046fcd0(0x01BCD074,"Can't run mission - no heros");
    return 0;
  }
  if (*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) != 0) {
    core_mission_cpp_CDemonMission_prepareAllActors_FUN_004d8db0(param_1);
    *(uint *)(param_1 + 0x528) = 0xffffffff;
    uVar1 = 0x01C03A10;
    *(uint *)(param_1 + 0x524) = 0;
    *(uint *)(param_1 + 0x520) = *(uint *)(param_1 + 0x524);
    *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x520);
    core_event_cpp_CEventList_reset_FUN_0047aa00(uVar1);
    *(uint *)(0x01C775EC + 0x228) = 0;
    core_mission_cpp_CDemonMission_loadSet_FUN_004d9020
              (param_1,*(uint *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x2c));
    uVar1 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Loading script",0);
    core_level_cpp_CLevelLoader_update_FUN_004c59e0(INT_005baca0,uVar1);
    iVar2 = core_mission_cpp_CDemonMission_loadScript_FUN_004d86d0
                      (param_1,*(uint *)(0x01C775EC + 0x234));
    if (iVar2 == 0) {
      return 0;
    }
    FUN_004feff0(0x01E56DA0);
    core_script_cpp_CScript_executeInitSection_FUN_004ff170(0x01E56DA0);
    core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_005135f0(0x01E57284);
    return 1;
  }
  FUN_0046fcd0(0x01BCD074,"Can't run mission - no local hero");
  return 0;
}
