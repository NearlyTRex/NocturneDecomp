// Name: core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
// Address: 005743c0
// Address Range: [[005743c0, 005743d8]]
// Convention: __cdecl
// Signature: SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0(SCollisionInfo * this_ptr)
// Cross-references:
//   core_actor.cpp_CDemonActor_FUN_004093f0 (004093f0) at 004093fb [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_testLineIntersection_FUN_00409150 (00409150) at 0040916a [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_testPointInCylinder_FUN_004090c0 (004090c0) at 004090cb [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_process_FUN_004800c0 (004800c0) at 00480450 [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004c9c00 (004c9c00) at 004c9dad [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_FUN_005495c0 (005495c0) at 005495d5 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054cc30 (0054cc30) at 0054d30e [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054df80 (0054df80) at 0054dfa4 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 (005716b0) at 00571891 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10 (00572a10) at 00572b55 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470 (00573470) at 005735d8 [UNCONDITIONAL_CALL]
//   core_spike.cpp_FUN_005b8950 (005b8950) at 005b8c06 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c4c20 (005c4c20) at 005c4cf3 [UNCONDITIONAL_CALL]
//   core_trap.cpp_CTrap_process_FUN_005de770 (005de770) at 005de824 [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_process_FUN_005e4210 (005e4210) at 005e45bb [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_process_FUN_005e7e80 (005e7e80) at 005e81ae [UNCONDITIONAL_CALL]

#include "nocturne.h"

SCollisionInfo * __cdecl
core_setcolid_cpp_SCollisionInfo_ctor_FUN_005743c0(SCollisionInfo *this_ptr)

{
  this_ptr->cylinder_radius_sq = 0.0;
  this_ptr->result_ptr = (void *)0x0;
  this_ptr->ray_type = 0;
  return this_ptr;
}


// Assembly code:
// 005743c0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
//   XREF to: Stack[0x4] (READ)
// 005743c4: MOV dword ptr [EAX + 0x20],0x0
// 005743cb: MOV dword ptr [EAX + 0x24],0x0
// 005743d2: MOV dword ptr [EAX],0x0
// 005743d8: RET
