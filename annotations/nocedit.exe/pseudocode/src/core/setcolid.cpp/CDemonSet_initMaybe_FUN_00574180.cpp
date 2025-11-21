// Name: core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
// Address: 00574180
// Address Range: [[00574180, 005741ac]]
// Convention: __cdecl
// Signature: void core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180(CDemonSet * this_ptr)
// Cross-references:
//   core_actor.cpp_CDemonActor_processFootstepAtOffset_FUN_0040c8f0 (0040c8f0) at 0040c9c2 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_processFootstep_FUN_0040c830 (0040c830) at 0040c8ba [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_00428f40 (00428f40) at 00429455 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0 (0042d5a0) at 0042d8ed [UNCONDITIONAL_CALL]
//   core_crossbow.cpp_CCrossbow_FUN_00448f20 (00448f20) at 00449302 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8860 (004a8860) at 004a89ca [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_FUN_004c8230 (004c8230) at 004c89c1 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d4190 (004d4190) at 004d4660 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d5fe0 (004d5fe0) at 004d6036 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d6260 (004d6260) at 004d64e8 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d6d40 (004d6d40) at 004d6ef4 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e7293 [UNCONDITIONAL_CALL]
//   core_gun.cpp_FUN_004f0350 (004f0350) at 004f04bb [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00505c70 (00505c70) at 005063e7 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050a8d0 (0050a8d0) at 0050aa21 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525840 (00525840) at 00525fbc [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_CDemonMission_FUN_0053c8d0 (0053c8d0) at 0053c918 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e7b8 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00558cf0 (00558cf0) at 00558f78 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_ctor_FUN_005690c0 (005690c0) at 00569237 [UNCONDITIONAL_CALL]
//   core_shotgun.cpp_FUN_00588060 (00588060) at 00588310 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_process_FUN_005b2fd0 (005b2fd0) at 005b32ad [UNCONDITIONAL_CALL]
//   core_sound.cpp_processTrainSounds_FUN_005b2770 (005b2770) at 005b27b7 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c2850 (005c2850) at 005c2f23 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c3150 (005c3150) at 005c31d4 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c3960 (005c3960) at 005c408f [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c4c20 (005c4c20) at 005c4d63 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_aimLeftPistol_FUN_005c4370 (005c4370) at 005c44bd [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_FUN_005ddb30 (005ddb30) at 005ddcd2 [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_FUN_005ee830 (005ee830) at 005ee8ac [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005f96d3 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(CDemonSet *this_ptr)

{
  this_ptr->ignore_list_count = 0;
  this_ptr->collision_flag = 0;
  this_ptr->field71_0x15f6dc = 0;
  this_ptr->ray_type = 0;
  return;
}


// Assembly code:
// 00574180: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: Stack[0x4] (READ)
// 00574184: MOV dword ptr [EAX + 0x15f694],0x0
// 0057418e: MOV dword ptr [EAX + 0x15f698],0x0
// 00574198: MOV dword ptr [EAX + 0x15f6dc],0x0
// 005741a2: MOV dword ptr [EAX + 0x15f680],0x0
// 005741ac: RET
