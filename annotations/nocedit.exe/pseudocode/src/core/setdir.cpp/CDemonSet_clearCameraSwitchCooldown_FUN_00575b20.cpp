// Name: core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20
// Address: 00575b20
// Address Range: [[00575b20, 00575b3e]]
// Convention: __cdecl
// Signature: void core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20(CDemonSet * this_ptr)
// Cross-references:
//   core_mission.cpp_CDemonMission_FUN_00524760 (00524760) at 00524882 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e2b3 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 005391a2 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054cc30 (0054cc30) at 0054cdc1 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055c176 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20(CDemonSet *this_ptr)

{
  if (this_ptr->camera_switch_cooldown <= 0.0) {
    return;
  }
  this_ptr->camera_switch_cooldown = 1e-20;
  return;
}


// Assembly code:
// 00575b20: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_00575b20
//   XREF to: Stack[0x4] (READ)
// 00575b24: FLD float ptr [EDX + 0x15aeb4]
// 00575b2a: FLDZ
// 00575b2c: FCOMPP
// 00575b2e: FNSTSW AX
// 00575b30: SAHF
// 00575b31: JC 0x00575b34
//   XREF to: 00575b34 (CONDITIONAL_JUMP)
// 00575b33: RET
// 00575b34: MOV dword ptr [EDX + 0x15aeb4],0x1e3ce508
//   Label: LAB_00575b34
// 00575b3e: RET
