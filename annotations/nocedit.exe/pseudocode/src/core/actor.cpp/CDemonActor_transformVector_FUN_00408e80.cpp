// Name: core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
// Address: 00408e80
// Address Range: [[00408e80, 00408e9e]]
// Convention: __cdecl
// Signature: CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
// Cross-references:
//   core_actor.cpp_CDemonActor_getWorldBoundingBox_FUN_00409270 (00409270) at 004092c3 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 (0040a210) at 0040a2cd [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470 (00409470) at 00409631 [UNCONDITIONAL_CALL]
//   core_baron.cpp_FUN_00413470 (00413470) at 004134db [UNCONDITIONAL_CALL]
//   core_baron.cpp_FUN_004135e0 (004135e0) at 00413626 [UNCONDITIONAL_CALL]
//   core_batman.cpp_FUN_00417660 (00417660) at 00417973 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_0041a050 (0041a050) at 0041a2dd [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CBoxActor_process_FUN_004219e0 (004219e0) at 00421d37 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_00428f40 (00428f40) at 00428f5c [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042b670 (0042b670) at 0042b72c [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042b760 (0042b760) at 0042b7d3 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042cfe0 (0042cfe0) at 0042d013 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042ded0 (0042ded0) at 0042deea [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042ea40 (0042ea40) at 0042ebac [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 (004286e0) at 00428c3d [UNCONDITIONAL_CALL]
//   core_conveyor.cpp_FUN_00441df0 (00441df0) at 00441ea8 [UNCONDITIONAL_CALL]
//   core_crossbow.cpp_CCrossbow_FUN_00448f20 (00448f20) at 00448f98 [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_getOpenStandPos_FUN_00480e20 (00480e20) at 00480f63 [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_reposition_FUN_0047fd20 (0047fd20) at 0048007a [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 00484562 [UNCONDITIONAL_CALL]
//   core_elephant.cpp_FUN_004a79f0 (004a79f0) at 004a7a5a [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8070 (004a8070) at 004a86ec [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8860 (004a8860) at 004a89a7 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CBulletHole_render_FUN_004bfac0 (004bfac0) at 004bfd64 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d4129 [UNCONDITIONAL_CALL]
//   core_gun.cpp_FUN_004f0350 (004f0350) at 004f03cb [UNCONDITIONAL_CALL]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f5075 [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00505c70 (00505c70) at 00505d19 [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_005066b0 (005066b0) at 00506738 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050a8d0 (0050a8d0) at 0050aa12 [UNCONDITIONAL_CALL]
//   core_passngr.cpp_FUN_00545ef0 (00545ef0) at 0054604f [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 (005716b0) at 005720d2 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470 (00573470) at 00573d13 [UNCONDITIONAL_CALL]
//   core_shotgun.cpp_FUN_005888f0 (005888f0) at 0058895a [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a2800 (005a2800) at 005a2af2 [UNCONDITIONAL_CALL]
//   core_spike.cpp_FUN_005b8410 (005b8410) at 005b8520 [UNCONDITIONAL_CALL]
//   core_spike.cpp_FUN_005b8950 (005b8950) at 005b8b52 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bc15e [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c2850 (005c2850) at 005c2de4 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c3150 (005c3150) at 005c323a [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c4c20 (005c4c20) at 005c4db5 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c5270 (005c5270) at 005c5890 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_aimLeftPistol_FUN_005c4370 (005c4370) at 005c4411 [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_FUN_005ddb30 (005ddb30) at 005ddbdf [UNCONDITIONAL_CALL]
//   core_turret.cpp_FUN_005e3750 (005e3750) at 005e37b7 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 (005e5970) at 005e66dd [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_FUN_005ee830 (005ee830) at 005ee89d [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fbe70 (005fbe70) at 005fbf4a [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005faf21 [UNCONDITIONAL_CALL]
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0

#include "nocturne.h"

CVector3f * __cdecl
core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
          (CDemonActor *this_ptr,CVector3f *output,CVector3f *input)

{
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&this_ptr->orient_matrix,output,input);
  return output;
}


// Assembly code:
// 00408e80: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
// 00408e81: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00408e85: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00408e89: PUSH EDX
// 00408e8a: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00408e8e: PUSH EBX
// 00408e8f: ADD EAX,0x3c
// 00408e92: PUSH EAX
// 00408e93: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 00408e98: ADD ESP,0xc
// 00408e9b: MOV EAX,EBX
// 00408e9d: POP EBX
// 00408e9e: RET
