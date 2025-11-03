// Name: core_actor.cpp_CDemonActor_dtor_FUN_00408a30
// Address: 00408a30
// Address Range: [[00408a30, 00408a7d]]
// Convention: __cdecl
// Signature: CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor * this_ptr, uint d1)
// Cross-references:
//   core_ammo.cpp_CAmmo_dtor_FUN_004114e0 (004114e0) at 004114ef [UNCONDITIONAL_CALL]
//   core_ammobox.cpp_CAmmoBox_dtor_FUN_00411c20 (00411c20) at 00411c2f [UNCONDITIONAL_CALL]
//   core_anvil.cpp_CAnvil_dtor_FUN_004120e0 (004120e0) at 004120ef [UNCONDITIONAL_CALL]
//   core_armour.cpp_CArmour_dtor_FUN_00412500 (00412500) at 0041257a [UNCONDITIONAL_CALL]
//   core_backgnd.cpp_CBackgroundActor_dtor_FUN_00412ad0 (00412ad0) at 00412adf [UNCONDITIONAL_CALL]
//   core_backgnd.cpp_CFlame_dtor_FUN_00412690 (00412690) at 0041269f [UNCONDITIONAL_CALL]
//   core_barrier.cpp_CBarrier_dtor_FUN_00414670 (00414670) at 0041467f [UNCONDITIONAL_CALL]
//   core_bat.cpp_CBat_dtor_FUN_00414fe0 (00414fe0) at 00415006 [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_dtor_FUN_00416320 (00416320) at 0041639a [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_dtor_FUN_00417d60 (00417d60) at 00417dda [UNCONDITIONAL_CALL]
//   core_battery.cpp_CBattery_dtor_FUN_00418160 (00418160) at 0041816f [UNCONDITIONAL_CALL]
//   core_beast.cpp_CBeast_dtor_FUN_00418490 (00418490) at 0041850a [UNCONDITIONAL_CALL]
//   core_biggs.cpp_CBiggs_dtor_FUN_00418d10 (00418d10) at 00418d9a [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CBodyPart_dtor_FUN_00419130 (00419130) at 0041918d [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_SBodyPartFire_dtor_FUN_0041b640 (0041b640) at 0041b64a [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_CBoneGuy_dtor_FUN_0041da40 (0041da40) at 0041daca [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CBoxActor_dtor_FUN_00423670 (00423670) at 00423696 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CLightActor_dtor_FUN_004235f0 (004235f0) at 00423626 [UNCONDITIONAL_CALL]
//   core_bride.cpp_CBride_dtor_FUN_00424b80 (00424b80) at 00424bfa [UNCONDITIONAL_CALL]
//   core_bugs.cpp_CBugs_dtor_FUN_00427bd0 (00427bd0) at 00427c5a [UNCONDITIONAL_CALL]
//   core_chain.cpp_CChain_dtor_FUN_00431360 (00431360) at 00431386 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_dtor_FUN_0042f9f0 (0042f9f0) at 0042fa6a [UNCONDITIONAL_CALL]
//   core_conveyor.cpp_FUN_00442380 (00442380) at 004423a6 [UNCONDITIONAL_CALL]
//   core_conveyor.cpp_dtor_FUN_00442310 (00442310) at 00442336 [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444cd0 (00444cd0) at 00444d4a [UNCONDITIONAL_CALL]
//   core_crate.cpp_FUN_00448bb0 (00448bb0) at 00448bbf [UNCONDITIONAL_CALL]
//   core_crossbow.cpp_CCrossbow_dtor_FUN_004495a0 (004495a0) at 004495b5 [UNCONDITIONAL_CALL]
//   core_curtain.cpp_FUN_0044ba30 (0044ba30) at 0044ba56 [UNCONDITIONAL_CALL]
//   core_dest.cpp_FUN_0046ff00 (0046ff00) at 0046ff0f [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_dtor_FUN_0047f9a0 (0047f9a0) at 0047fa1a [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_dtor_FUN_00481670 (00481670) at 0048167f [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_dtor_FUN_00486d70 (00486d70) at 00486dea [UNCONDITIONAL_CALL]
//   core_drip.cpp_dtor_FUN_0048ea90 (0048ea90) at 0048ea9f [UNCONDITIONAL_CALL]
//   core_drone.cpp_dtor_FUN_0048f5a0 (0048f5a0) at 0048f61a [UNCONDITIONAL_CALL]
//   core_emitter.cpp_dtor_FUN_004a93c0 (004a93c0) at 004a93cf [UNCONDITIONAL_CALL]
//   core_enemy.cpp_CEnemy_dtor_FUN_004125c0 (004125c0) at 0041263a [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_dtor_FUN_004bee80 (004bee80) at 004bee8f [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_dtor_FUN_004beed0 (004beed0) at 004beedf [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_FUN_004cb7a0 (004cb7a0) at 004cb7c6 [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004cccb0 (004cccb0) at 004cccd6 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_FUN_004d28a0 (004d28a0) at 004d28c6 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_FUN_004e5bd0 (004e5bd0) at 004e5c4a [UNCONDITIONAL_CALL]
//   core_gasmask.cpp_FUN_004e5f40 (004e5f40) at 004e5f4f [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e8f10 (004e8f10) at 004e8f8a [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_dtor_FUN_004eb820 (004eb820) at 004eb856 [UNCONDITIONAL_CALL]
//   core_grave.cpp_FUN_004eeb40 (004eeb40) at 004eeb4f [UNCONDITIONAL_CALL]
//   core_health.cpp_FUN_004f20d0 (004f20d0) at 004f20df [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHeroPlaceholder_dtor_FUN_004f3c30 (004f3c30) at 004f3c49 [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHero_dtor_FUN_004f2470 (004f2470) at 004f251f [UNCONDITIONAL_CALL]
//   core_hiram.cpp_FUN_004f4450 (004f4450) at 004f44e4 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_FUN_004f6b60 (004f6b60) at 004f6bea [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f7a40 (004f7a40) at 004f7aba [UNCONDITIONAL_CALL]
//   core_hpriest.cpp_FUN_004f7cb0 (004f7cb0) at 004f7d3a [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004fb180 (004fb180) at 004fb1fa [UNCONDITIONAL_CALL]
//   core_keyactor.cpp_FUN_005019b0 (005019b0) at 005019bf [UNCONDITIONAL_CALL]
//   core_ladder.cpp_FUN_00502ed0 (00502ed0) at 00502edf [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503cc0 (00503cc0) at 00503d3a [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_00505430 (00505430) at 0050543f [UNCONDITIONAL_CALL]
//   core_litecone.cpp_FUN_00506e30 (00506e30) at 00506e3f [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050b840 (0050b840) at 0050b84f [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050b890 (0050b890) at 0050b8d6 [UNCONDITIONAL_CALL]
//   core_marquee.cpp_FUN_0050c4c0 (0050c4c0) at 0050c4e6 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051f2c0 (0051f2c0) at 0051f3a0 [UNCONDITIONAL_CALL]
//   core_minecar.cpp_FUN_00520f40 (00520f40) at 00520f66 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_CMobster_dtor_FUN_00527c70 (00527c70) at 00527cea [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_dtor_FUN_004f4700 (004f4700) at 004f478a [UNCONDITIONAL_CALL]
//   core_passngr.cpp_CPassenger_dtor_FUN_00545c10 (00545c10) at 00545ceb [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_CPendulum_dtor_FUN_0054a7d0 (0054a7d0) at 0054a7df [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_CSentinel_dtor_FUN_00568f80 (00568f80) at 00568ffa [UNCONDITIONAL_CALL]
//   core_simbox.cpp_CSimBox_dtor_FUN_005893e0 (005893e0) at 00589406 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_CSmiley_dtor_FUN_005a3880 (005a3880) at 005a38fa [UNCONDITIONAL_CALL]
//   core_spike.cpp_CSpike_dtor_FUN_005b9050 (005b9050) at 005b905f [UNCONDITIONAL_CALL]
//   core_stairs.cpp_CStairs_dtor_FUN_005bac10 (005bac10) at 005bac36 [UNCONDITIONAL_CALL]
//   core_stone.cpp_CTempleStone_dtor_FUN_005bae10 (005bae10) at 005bae36 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_dtor_FUN_005c7820 (005c7820) at 005c78ca [UNCONDITIONAL_CALL]
//   core_tbplayer.cpp_CBassPlayer_dtor_FUN_005da610 (005da610) at 005da69a [UNCONDITIONAL_CALL]
//   core_tbplayer.cpp_CDrummer_dtor_FUN_005da540 (005da540) at 005da5ca [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleportDest_dtor_FUN_005daea0 (005daea0) at 005daeaf [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleport_dtor_FUN_005dae50 (005dae50) at 005dae5f [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_dtor_FUN_005dbcf0 (005dbcf0) at 005dbd6a [UNCONDITIONAL_CALL]
//   core_trap.cpp_CTrap_dtor_FUN_005deab0 (005deab0) at 005deabf [UNCONDITIONAL_CALL]
//   core_trash.cpp_CTrash_dtor_FUN_005df780 (005df780) at 005df78f [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_dtor_FUN_005e1660 (005e1660) at 005e166f [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_dtor_FUN_005e5460 (005e5460) at 005e54da [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_dtor_FUN_005e7700 (005e7700) at 005e77ca [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_dtor_FUN_005e8d20 (005e8d20) at 005e8d56 [UNCONDITIONAL_CALL]
//   core_vessel.cpp_CCryptVessel_dtor_FUN_005e9d30 (005e9d30) at 005e9d45 [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_dtor_FUN_005ebc60 (005ebc60) at 005ebc86 [UNCONDITIONAL_CALL]
//   core_waypoint.cpp_CWayPoint_dtor_FUN_005ec8d0 (005ec8d0) at 005ec8df [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_dtor_FUN_005edf80 (005edf80) at 005edfb0 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_dtor_FUN_005f2220 (005f2220) at 005f229a [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_dtor_FUN_005fcc50 (005fcc50) at 005fccca [UNCONDITIONAL_CALL]
// Globals:
//   CDemonActor_vtable g_CDemonActorVTable
//   WatcomTypeInfo g_CDemonActorTypeInfo
// Function calls:
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CDemonActor * __cdecl core_actor_cpp_CDemonActor_dtor_FUN_00408a30(CDemonActor *this_ptr,uint d1)

{
  void *ptr;
  
  if ((d1 & 4) != 0) {
    ptr = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CDemonActorTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr);
    return this_ptr;
  }
  this_ptr->field6_0x68 = 0x495fd67;
  this_ptr->vtable = &g_CDemonActorVTable;
  if ((d1 & 2) == 0) {
    return this_ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  return this_ptr;
}


// Assembly code:
// 00408a30: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_dtor_FUN_00408a30
// 00408a31: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00408a35: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00408a39: TEST AL,0x4
// 00408a3b: JNZ 0x00408a56
//   XREF to: 00408a56 (CONDITIONAL_JUMP)
// 00408a3d: MOV dword ptr [EBX + 0x68],0x495fd67
// 00408a44: MOV dword ptr [EBX + 0x154],0x6597d4
//   XREF to: 006597d4 (DATA)
// 00408a4e: TEST AL,0x2
// 00408a50: JNZ 0x00408a71
//   XREF to: 00408a71 (CONDITIONAL_JUMP)
// 00408a52: MOV EAX,EBX
// 00408a54: POP EBX
// 00408a55: RET
// 00408a56: PUSH 0x6598e0
//   Label: LAB_00408a56
//   XREF to: 006598e0 (DATA)
// 00408a5b: PUSH EBX
// 00408a5c: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 00408a61: ADD ESP,0x8
// 00408a64: PUSH EAX
// 00408a65: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00408a6a: ADD ESP,0x4
// 00408a6d: MOV EAX,EBX
// 00408a6f: POP EBX
// 00408a70: RET
// 00408a71: PUSH EBX
//   Label: LAB_00408a71
// 00408a72: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00408a77: ADD ESP,0x4
// 00408a7a: MOV EAX,EBX
// 00408a7c: POP EBX
// 00408a7d: RET
