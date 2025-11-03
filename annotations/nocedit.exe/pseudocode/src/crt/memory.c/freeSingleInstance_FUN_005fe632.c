// Name: crt_memory.c_freeSingleInstance_FUN_005fe632
// Address: 005fe632
// Address Range: [[005fe632, 005fe658]]
// Convention: __cdecl
// Signature: void * crt_memory.c_freeSingleInstance_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
// Cross-references:
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_reset_FUN_0054bd60 (0054bd60) at 0054bd85 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30 (00408a30) at 00408a5c [UNCONDITIONAL_CALL]
//   core_ammo.cpp_CAmmo_dtor_FUN_004114e0 (004114e0) at 0041150c [UNCONDITIONAL_CALL]
//   core_ammobox.cpp_CAmmoBox_dtor_FUN_00411c20 (00411c20) at 00411c4c [UNCONDITIONAL_CALL]
//   core_anvil.cpp_CAnvil_dtor_FUN_004120e0 (004120e0) at 0041210c [UNCONDITIONAL_CALL]
//   core_armour.cpp_CArmour_dtor_FUN_00412500 (00412500) at 00412597 [UNCONDITIONAL_CALL]
//   core_backgnd.cpp_CBackgroundActor_dtor_FUN_00412ad0 (00412ad0) at 00412afc [UNCONDITIONAL_CALL]
//   core_backgnd.cpp_CFlame_dtor_FUN_00412690 (00412690) at 004126bc [UNCONDITIONAL_CALL]
//   core_baron.cpp_CBaronWeapon_dtor_FUN_004140b0 (004140b0) at 004140dc [UNCONDITIONAL_CALL]
//   core_baron.cpp_CBaron_dtor_FUN_00414100 (00414100) at 0041412c [UNCONDITIONAL_CALL]
//   core_barrier.cpp_CBarrier_dtor_FUN_00414670 (00414670) at 0041469c [UNCONDITIONAL_CALL]
//   core_bat.cpp_CBat_dtor_FUN_00414fe0 (00414fe0) at 00415023 [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_dtor_FUN_00416320 (00416320) at 004163b7 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_dtor_FUN_00417d60 (00417d60) at 00417df7 [UNCONDITIONAL_CALL]
//   core_battery.cpp_CBattery_dtor_FUN_00418160 (00418160) at 0041818c [UNCONDITIONAL_CALL]
//   core_beast.cpp_CBeast_dtor_FUN_00418490 (00418490) at 00418527 [UNCONDITIONAL_CALL]
//   core_biggs.cpp_CBiggs_dtor_FUN_00418d10 (00418d10) at 00418db7 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CBodyPart_dtor_FUN_00419130 (00419130) at 004191aa [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_CBoneGuy_dtor_FUN_0041da40 (0041da40) at 0041dae7 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CBoxActor_dtor_FUN_00423670 (00423670) at 004236b3 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CLightActor_dtor_FUN_004235f0 (004235f0) at 00423643 [UNCONDITIONAL_CALL]
//   core_bride.cpp_CBride_dtor_FUN_00424b80 (00424b80) at 00424c17 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_CBugs_dtor_FUN_00427bd0 (00427bd0) at 00427c77 [UNCONDITIONAL_CALL]
//   core_camview.cpp_CCameraView_dtor_FUN_00427d00 (00427d00) at 00427d27 [UNCONDITIONAL_CALL]
//   core_chain.cpp_CChain_dtor_FUN_00431360 (00431360) at 004313a3 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_dtor_FUN_0042f9f0 (0042f9f0) at 0042fa87 [UNCONDITIONAL_CALL]
//   core_colonel.cpp_CColonel_dtor_FUN_00440670 (00440670) at 0044069c [UNCONDITIONAL_CALL]
//   core_conveyor.cpp_FUN_00442380 (00442380) at 004423c3 [UNCONDITIONAL_CALL]
//   core_conveyor.cpp_dtor_FUN_00442310 (00442310) at 00442353 [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444cd0 (00444cd0) at 00444d67 [UNCONDITIONAL_CALL]
//   core_crate.cpp_FUN_00448bb0 (00448bb0) at 00448bdc [UNCONDITIONAL_CALL]
//   core_crossbow.cpp_CCrossbow_dtor_FUN_004495a0 (004495a0) at 004495e3 [UNCONDITIONAL_CALL]
//   core_curtain.cpp_FUN_0044ba30 (0044ba30) at 0044ba73 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_dtor_FUN_0044c090 (0044c090) at 0044c0cc [UNCONDITIONAL_CALL]
//   core_dest.cpp_FUN_0046ff00 (0046ff00) at 0046ff2c [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_dtor_FUN_00472760 (00472760) at 0047279c [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_dtor_FUN_0047f9a0 (0047f9a0) at 0047fa37 [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_dtor_FUN_00481670 (00481670) at 0048169c [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_dtor_FUN_00486d70 (00486d70) at 00486e07 [UNCONDITIONAL_CALL]
//   core_drip.cpp_dtor_FUN_0048ea90 (0048ea90) at 0048eabc [UNCONDITIONAL_CALL]
//   core_drone.cpp_dtor_FUN_0048f5a0 (0048f5a0) at 0048f637 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_freeNewCubeList_FUN_00494400 (00494400) at 00494425 [UNCONDITIONAL_CALL]
//   core_dynamite.cpp_dtor_FUN_0049d120 (0049d120) at 0049d14c [UNCONDITIONAL_CALL]
//   core_elephant.cpp_dtor_FUN_004a7be0 (004a7be0) at 004a7c0c [UNCONDITIONAL_CALL]
//   core_emitter.cpp_dtor_FUN_004a93c0 (004a93c0) at 004a93ec [UNCONDITIONAL_CALL]
//   core_enemy.cpp_CEnemy_dtor_FUN_004125c0 (004125c0) at 00412657 [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_dtor_FUN_004bee80 (004bee80) at 004beeac [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_dtor_FUN_004beed0 (004beed0) at 004beefc [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_FUN_004cb7a0 (004cb7a0) at 004cb7e3 [UNCONDITIONAL_CALL]
//   core_flamegun.cpp_FUN_004cbb00 (004cbb00) at 004cbb2c [UNCONDITIONAL_CALL]
//   core_flamegun.cpp_FUN_004cbc60 (004cbc60) at 004cbc8c [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004cccb0 (004cccb0) at 004cccf3 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_FUN_004d28a0 (004d28a0) at 004d28e3 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_freeMaybe_FUN_004d7660 (004d7660) at 004d76a3 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_FUN_004e5bd0 (004e5bd0) at 004e5c67 [UNCONDITIONAL_CALL]
//   core_gasmask.cpp_FUN_004e5f40 (004e5f40) at 004e5f6c [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e8f10 (004e8f10) at 004e8fa7 [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_dtor_FUN_004eb820 (004eb820) at 004eb873 [UNCONDITIONAL_CALL]
//   core_grave.cpp_FUN_004eeb40 (004eeb40) at 004eeb6c [UNCONDITIONAL_CALL]
//   core_gun.cpp_FUN_004f0b50 (004f0b50) at 004f0b7c [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f1d10 (004f1d10) at 004f1d3c [UNCONDITIONAL_CALL]
//   core_health.cpp_FUN_004f20d0 (004f20d0) at 004f20fc [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHeroPlaceholder_dtor_FUN_004f3c30 (004f3c30) at 004f3c66 [UNCONDITIONAL_CALL]
//   core_hiram.cpp_FUN_004f4450 (004f4450) at 004f4501 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_FUN_004f6b60 (004f6b60) at 004f6c07 [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f7a40 (004f7a40) at 004f7ad7 [UNCONDITIONAL_CALL]
//   core_hpriest.cpp_FUN_004f7cb0 (004f7cb0) at 004f7d57 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f97e0 (004f97e0) at 004f980c [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004fb180 (004fb180) at 004fb217 [UNCONDITIONAL_CALL]
//   core_keyactor.cpp_FUN_005019b0 (005019b0) at 005019dc [UNCONDITIONAL_CALL]
//   core_ladder.cpp_FUN_00502ed0 (00502ed0) at 00502efc [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503cc0 (00503cc0) at 00503d57 [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_00505430 (00505430) at 0050545c [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00506a50 (00506a50) at 00506a7c [UNCONDITIONAL_CALL]
//   core_litecone.cpp_FUN_00506e30 (00506e30) at 00506e5c [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050b840 (0050b840) at 0050b86c [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050b890 (0050b890) at 0050b8f3 [UNCONDITIONAL_CALL]
//   core_marquee.cpp_FUN_0050c4c0 (0050c4c0) at 0050c503 [UNCONDITIONAL_CALL]
//   core_melee.cpp_FUN_0050edf0 (0050edf0) at 0050ee1c [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051f2c0 (0051f2c0) at 0051f3bd [UNCONDITIONAL_CALL]
//   core_minecar.cpp_FUN_00520f40 (00520f40) at 00520f83 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_CMobster_dtor_FUN_00527c70 (00527c70) at 00527d07 [UNCONDITIONAL_CALL]
//   core_moloch.cpp_CMoloch_dtor_FUN_00528bf0 (00528bf0) at 00528c4d [UNCONDITIONAL_CALL]
//   core_motion.cpp_CMotionController_dtor_FUN_0052d5a0 (0052d5a0) at 0052d5c2 [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_dtor_FUN_004f4700 (004f4700) at 004f47a7 [UNCONDITIONAL_CALL]
//   core_passngr.cpp_CPassenger_dtor_FUN_00545c10 (00545c10) at 00545d09 [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_CPendulum_dtor_FUN_0054a7d0 (0054a7d0) at 0054a7fc [UNCONDITIONAL_CALL]
//   core_podmain.cpp_CDemonPod_dtor_FUN_00551b20 (00551b20) at 00551b4c [UNCONDITIONAL_CALL]
//   core_scat.cpp_CScat_dtor_FUN_00559160 (00559160) at 0055918c [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_CSentinel_dtor_FUN_00568f80 (00568f80) at 00569017 [UNCONDITIONAL_CALL]
//   core_shotgun.cpp_CShotgun_dtor_FUN_00588ae0 (00588ae0) at 00588b0c [UNCONDITIONAL_CALL]
//   core_shovel.cpp_CShovel_dtor_FUN_00588c80 (00588c80) at 00588cac [UNCONDITIONAL_CALL]
//   core_simbox.cpp_CSimBox_dtor_FUN_005893e0 (005893e0) at 00589423 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 (0059de40) at 0059de8d [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510 (0059a510) at 0059a567 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_free_FUN_0059a2b0 (0059a2b0) at 0059a2e5 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_CSmiley_dtor_FUN_005a3880 (005a3880) at 005a3917 [UNCONDITIONAL_CALL]
//   core_spike.cpp_CSpike_dtor_FUN_005b9050 (005b9050) at 005b907c [UNCONDITIONAL_CALL]
//   core_stairs.cpp_CStairs_dtor_FUN_005bac10 (005bac10) at 005bac53 [UNCONDITIONAL_CALL]
//   core_stone.cpp_CTempleStone_dtor_FUN_005bae10 (005bae10) at 005bae53 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_dtor_FUN_005c69c0 (005c69c0) at 005c69ec [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_dtor_FUN_005c7820 (005c7820) at 005c78e7 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_dtor_FUN_005d9f50 (005d9f50) at 005d9fa3 [UNCONDITIONAL_CALL]
//   core_tbplayer.cpp_CBassPlayer_dtor_FUN_005da610 (005da610) at 005da6b7 [UNCONDITIONAL_CALL]
//   core_tbplayer.cpp_CDrummer_dtor_FUN_005da540 (005da540) at 005da5e7 [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleportDest_dtor_FUN_005daea0 (005daea0) at 005daecc [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleport_dtor_FUN_005dae50 (005dae50) at 005dae7c [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_dtor_FUN_005dbcf0 (005dbcf0) at 005dbd87 [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_CTommyGun_dtor_FUN_005de5d0 (005de5d0) at 005de5fc [UNCONDITIONAL_CALL]
//   core_trap.cpp_CTrap_dtor_FUN_005deab0 (005deab0) at 005deadc [UNCONDITIONAL_CALL]
//   core_trash.cpp_CTrash_dtor_FUN_005df780 (005df780) at 005df7ac [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_dtor_FUN_005e1660 (005e1660) at 005e168c [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_dtor_FUN_005e3e00 (005e3e00) at 005e3e2c [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_dtor_FUN_005e5460 (005e5460) at 005e54f7 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_dtor_FUN_005e7700 (005e7700) at 005e77e7 [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_dtor_FUN_005e8d20 (005e8d20) at 005e8d73 [UNCONDITIONAL_CALL]
//   core_vessel.cpp_CCryptVessel_dtor_FUN_005e9d30 (005e9d30) at 005e9d73 [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_dtor_FUN_005ebc60 (005ebc60) at 005ebca3 [UNCONDITIONAL_CALL]
//   core_waypoint.cpp_CWayPoint_dtor_FUN_005ec8d0 (005ec8d0) at 005ec8fc [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_dtor_FUN_005edf80 (005edf80) at 005edfcd [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_dtor_FUN_005f2220 (005f2220) at 005f22b7 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_dtor_FUN_005fcc50 (005fcc50) at 005fcce7 [UNCONDITIONAL_CALL]
//   crt_fstream.cpp_filebuf_dtor_FUN_0060bdf9 (0060bdf9) at 0060be54 [UNCONDITIONAL_CALL]
//   crt_fstream.cpp_fstreambase_dtor_FUN_00606509 (00606509) at 0060655f [UNCONDITIONAL_CALL]
//   crt_fstream.cpp_ifstream_dtor_FUN_005ff856 (005ff856) at 005ff8c0 [UNCONDITIONAL_CALL]
//   crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc (005ff7bc) at 005ff826 [UNCONDITIONAL_CALL]
//   crt_iostream.cpp_ios_dtor_FUN_0060632c (0060632c) at 00606359 [UNCONDITIONAL_CALL]
//   crt_iostream.cpp_istream_dtor_FUN_006063e1 (006063e1) at 00606426 [UNCONDITIONAL_CALL]
//   crt_iostream.cpp_ostream_dtor_FUN_00606231 (00606231) at 00606276 [UNCONDITIONAL_CALL]
//   crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca (005ff5ca) at 005ff634 [UNCONDITIONAL_CALL]
//   crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a (005ff48a) at 005ff4f4 [UNCONDITIONAL_CALL]
//   crt_strstream.cpp_strstreambase_dtor_FUN_006062a6 (006062a6) at 006062fc [UNCONDITIONAL_CALL]
//   crt_strstream.cpp_strstreambuf_dtor_FUN_0060bb7f (0060bb7f) at 0060bbd5 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40 (004b9f40) at 004ba294 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_dtor_FUN_005509b0 (005509b0) at 005509e7 [UNCONDITIONAL_CALL]
//   engine_winfont.cpp_CWinFont_dtor_FUN_005f2390 (005f2390) at 005f23cb [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 (004a3c80) at 004a3cf1 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 (004a2a40) at 004a2a6d [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0 (0049e9d0) at 0049f019 [UNCONDITIONAL_CALL]
//   support_codec.cpp_CCodec_dtor_FUN_0043e9b0 (0043e9b0) at 0043e9d7 [UNCONDITIONAL_CALL]
//   support_codec.cpp_CLZWCompress_dtor_FUN_0043f710 (0043f710) at 0043f74d [UNCONDITIONAL_CALL]
//   support_codec.cpp_CLZWDecompress_dtor_FUN_0043f6b0 (0043f6b0) at 0043f6ed [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void * __cdecl
crt_memory_c_freeSingleInstance_FUN_005fe632(void *object_ptr,WatcomTypeInfo *type_info)

{
  if (object_ptr == (void *)0x0) {
    return (void *)0x0;
  }
  crt_memory_c_freeTypeArray_FUN_005feee9
            ((void **)object_ptr,*(int *)((int)object_ptr + -4),type_info);
  return (int *)((int)object_ptr + -4);
}


// Assembly code:
// 005fe632: PUSH EBX
//   Label: crt_memory.c_freeSingleInstance_FUN_005fe632
// 005fe633: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005fe637: TEST EAX,EAX
// 005fe639: JNZ 0x005fe641
//   XREF to: 005fe641 (CONDITIONAL_JUMP)
// 005fe63b: XOR EBX,EBX
// 005fe63d: MOV EAX,EBX
// 005fe63f: POP EBX
// 005fe640: RET
// 005fe641: MOV EDX,dword ptr [ESP + 0xc]
//   Label: LAB_005fe641
//   XREF to: Stack[0x8] (READ)
// 005fe645: LEA EBX,[EAX + -0x4]
// 005fe648: PUSH EDX
// 005fe649: MOV ECX,dword ptr [EBX]
// 005fe64b: PUSH ECX
// 005fe64c: PUSH EAX
// 005fe64d: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 005fe652: ADD ESP,0xc
// 005fe655: MOV EAX,EBX
// 005fe657: POP EBX
// 005fe658: RET
