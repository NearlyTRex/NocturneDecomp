// Name: core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
// Address: 00427db0
// Address Range: [[00427db0, 00427e15]]
// Convention: __cdecl
// Signature: SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
// Cross-references:
//   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 (0040a210) at 0040aaa0 [UNCONDITIONAL_CALL]
//   core_anvil.cpp_CAnvil_process_FUN_00411d90 (00411d90) at 00411e75 [UNCONDITIONAL_CALL]
//   core_baron.cpp_FUN_004136b0 (004136b0) at 004137ab [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_process_FUN_00415470 (00415470) at 00415740 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_process_FUN_00416870 (00416870) at 00416f3c [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CBodyPart_process_FUN_00419be0 (00419be0) at 00419da3 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041c61c [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CBoxActor_process_FUN_004219e0 (004219e0) at 00421dbb [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00425fe0 (00425fe0) at 0042607d [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_00428e30 (00428e30) at 00428e69 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_00428ee0 (00428ee0) at 00428f04 [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444310 (00444310) at 004445ad [UNCONDITIONAL_CALL]
//   core_crossbow.cpp_FUN_00448f20 (00448f20) at 00449318 [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_process_FUN_0047f140 (0047f140) at 0047f3fa [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 00484d4d [UNCONDITIONAL_CALL]
//   core_drip.cpp_FUN_0048e2a0 (0048e2a0) at 0048e3da [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048ec70 (0048ec70) at 0048efa6 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireball_process_FUN_004c0b30 (004c0b30) at 004c0d4e [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d4890 (004d4890) at 004d4afa [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004df569 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk6_FUN_004e4a00 (004e4a00) at 004e4d64 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e7cb5 [UNCONDITIONAL_CALL]
//   core_gun.cpp_FUN_004f0350 (004f0350) at 004f086d [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f1ab0 (004f1ab0) at 004f1b09 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f4d04 [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f6f20 (004f6f20) at 004f71e9 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f9490 (004f9490) at 004f94f2 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f9c30 (004f9c30) at 004f9e5c [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00505c70 (00505c70) at 00506384 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525840 (00525840) at 00525a0c [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00557d20 (00557d20) at 00557d83 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00568030 (00568030) at 0056858d [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056b810 (0056b810) at 0056bb3c [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a2800 (005a2800) at 005a2861 [UNCONDITIONAL_CALL]
//   core_spike.cpp_FUN_005b8950 (005b8950) at 005b8e03 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bda9f [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bdd20 (005bdd20) at 005be17b [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_AttackWithParentBone_FUN_005d9a10 (005d9a10) at 005d9b15 [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_FUN_005ddb30 (005ddb30) at 005de086 [UNCONDITIONAL_CALL]
//   core_trap.cpp_CTrap_process_FUN_005de770 (005de770) at 005de8ea [UNCONDITIONAL_CALL]
//   core_turret.cpp_FUN_005e3750 (005e3750) at 005e394b [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_process_FUN_005e4210 (005e4210) at 005e467e [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 (005e5970) at 005e6761 [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_process_FUN_005e7e80 (005e7e80) at 005e82b6 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_process_FUN_005efde0 (005efde0) at 005f02ce [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005f9822 [UNCONDITIONAL_CALL]

#include "nocturne.h"

SDamageInfo * __cdecl core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo *this_ptr)

{
  this_ptr->ammo_type = 0;
  this_ptr->weapon_damage_modifier = 0;
  this_ptr->field0_0x0 = -1;
  this_ptr->damage_flags = 0;
  (this_ptr->impact_point).z = 0.0;
  (this_ptr->impact_point).y = (this_ptr->impact_point).z;
  (this_ptr->impact_point).x = (this_ptr->impact_point).y;
  this_ptr->impact_force = 20.0;
  (this_ptr->impact_direction).z = 0.0;
  (this_ptr->impact_direction).y = (this_ptr->impact_direction).z;
  (this_ptr->impact_direction).x = (this_ptr->impact_direction).y;
  this_ptr->damage_type = 100;
  this_ptr->attacker = (CDemonActor *)0x0;
  this_ptr->wielder = (CDemonActor *)0x0;
  return this_ptr;
}


// Assembly code:
// 00427db0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: Stack[0x4] (READ)
// 00427db4: MOV dword ptr [EAX + 0x28],0x0
// 00427dbb: MOV dword ptr [EAX + 0x2c],0x0
// 00427dc2: MOV dword ptr [EAX],0xffffffff
// 00427dc8: LEA EDX,[EAX + 0xc]
// 00427dcb: MOV dword ptr [EAX + 0x8],0x0
// 00427dd2: MOV dword ptr [EDX + 0x8],0x0
// 00427dd9: MOV ECX,dword ptr [EDX + 0x8]
// 00427ddc: MOV dword ptr [EDX + 0x4],ECX
// 00427ddf: MOV ECX,dword ptr [EDX + 0x4]
// 00427de2: MOV dword ptr [EDX],ECX
// 00427de4: LEA EDX,[EAX + 0x1c]
// 00427de7: MOV dword ptr [EAX + 0x18],0x41a00000
// 00427dee: MOV dword ptr [EDX + 0x8],0x0
// 00427df5: MOV ECX,dword ptr [EDX + 0x8]
// 00427df8: MOV dword ptr [EDX + 0x4],ECX
// 00427dfb: MOV ECX,dword ptr [EDX + 0x4]
// 00427dfe: MOV dword ptr [EDX],ECX
// 00427e00: MOV dword ptr [EAX + 0x30],0x64
// 00427e07: MOV dword ptr [EAX + 0x34],0x0
// 00427e0e: MOV dword ptr [EAX + 0x38],0x0
// 00427e15: RET
