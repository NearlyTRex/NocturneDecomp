// Name: shape_memdbg.cpp_debugFree_FUN_0050f210
// Address: 0050f210
// Address Range: [[0050f210, 0050f248]]
// Convention: __cdecl
// Signature: void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
// Cross-references:
//   cockpit_ckptutil.c_generateScrollHeightMap_FUN_00432df0 (00432df0) at 00432fa4 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30 (00408a30) at 00408a72 [UNCONDITIONAL_CALL]
//   core_ammo.cpp_CAmmo_dtor_FUN_004114e0 (004114e0) at 00411522 [UNCONDITIONAL_CALL]
//   core_ammobox.cpp_CAmmoBox_dtor_FUN_00411c20 (00411c20) at 00411c62 [UNCONDITIONAL_CALL]
//   core_anvil.cpp_CAnvil_dtor_FUN_004120e0 (004120e0) at 00412122 [UNCONDITIONAL_CALL]
//   core_armour.cpp_CArmour_dtor_FUN_00412500 (00412500) at 004125ad [UNCONDITIONAL_CALL]
//   core_backgnd.cpp_CBackgroundActor_dtor_FUN_00412ad0 (00412ad0) at 00412b12 [UNCONDITIONAL_CALL]
//   core_backgnd.cpp_CFlame_dtor_FUN_00412690 (00412690) at 004126d2 [UNCONDITIONAL_CALL]
//   core_baron.cpp_CBaronWeapon_dtor_FUN_004140b0 (004140b0) at 004140f2 [UNCONDITIONAL_CALL]
//   core_baron.cpp_CBaron_dtor_FUN_00414100 (00414100) at 00414142 [UNCONDITIONAL_CALL]
//   core_barrier.cpp_CBarrier_dtor_FUN_00414670 (00414670) at 004146b2 [UNCONDITIONAL_CALL]
//   core_bat.cpp_CBat_dtor_FUN_00414fe0 (00414fe0) at 00415039 [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_dtor_FUN_00416320 (00416320) at 004163cd [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_dtor_FUN_00417d60 (00417d60) at 00417e0d [UNCONDITIONAL_CALL]
//   core_battery.cpp_CBattery_dtor_FUN_00418160 (00418160) at 004181a2 [UNCONDITIONAL_CALL]
//   core_beast.cpp_CBeast_dtor_FUN_00418490 (00418490) at 0041853d [UNCONDITIONAL_CALL]
//   core_biggs.cpp_CBiggs_dtor_FUN_00418d10 (00418d10) at 00418dcd [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CBodyPart_dtor_FUN_00419130 (00419130) at 004191c0 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_CBoneGuy_dtor_FUN_0041da40 (0041da40) at 0041dafd [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CBoxActor_dtor_FUN_00423670 (00423670) at 004236c9 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CLightActor_dtor_FUN_004235f0 (004235f0) at 00423659 [UNCONDITIONAL_CALL]
//   core_bride.cpp_CBride_dtor_FUN_00424b80 (00424b80) at 00424c2d [UNCONDITIONAL_CALL]
//   core_bugs.cpp_CBugs_dtor_FUN_00427bd0 (00427bd0) at 00427c8d [UNCONDITIONAL_CALL]
//   core_camview.cpp_CCameraView_dtor_FUN_00427d00 (00427d00) at 00427d3d [UNCONDITIONAL_CALL]
//   core_chain.cpp_CChain_dtor_FUN_00431360 (00431360) at 004313b9 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_dtor_FUN_0042f9f0 (0042f9f0) at 0042fa9d [UNCONDITIONAL_CALL]
//   core_cloth.cpp_CClothList_load_FUN_0043bfa0 (0043bfa0) at 0043c062 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_CClothList_remove_FUN_0043c170 (0043c170) at 0043c1e0 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043c070 (0043c070) at 0043c0ad [UNCONDITIONAL_CALL]
//   core_colonel.cpp_CColonel_dtor_FUN_00440670 (00440670) at 004406b2 [UNCONDITIONAL_CALL]
//   core_conveyor.cpp_FUN_00442380 (00442380) at 004423d9 [UNCONDITIONAL_CALL]
//   core_conveyor.cpp_dtor_FUN_00442310 (00442310) at 00442369 [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444cd0 (00444cd0) at 00444d7d [UNCONDITIONAL_CALL]
//   core_crate.cpp_FUN_00448bb0 (00448bb0) at 00448bf2 [UNCONDITIONAL_CALL]
//   core_crossbow.cpp_CCrossbow_dtor_FUN_004495a0 (004495a0) at 004495f9 [UNCONDITIONAL_CALL]
//   core_curtain.cpp_FUN_0044ba30 (0044ba30) at 0044ba89 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_dtor_FUN_0044c090 (0044c090) at 0044c0e2 [UNCONDITIONAL_CALL]
//   core_dest.cpp_FUN_0046ff00 (0046ff00) at 0046ff42 [UNCONDITIONAL_CALL]
//   core_dfilter.cpp_CFilterCache_free_FUN_00470000 (00470000) at 00470052 [UNCONDITIONAL_CALL]
//   core_dfont.cpp_freeFonts_FUN_004710a0 (004710a0) at 004711aa [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_dtor_FUN_00472760 (00472760) at 004727b2 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_writeModelDependencies_FUN_0047ee30 (0047ee30) at 0047eee3 [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_dtor_FUN_0047f9a0 (0047f9a0) at 0047fa4d [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_dtor_FUN_00481670 (00481670) at 004816b2 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_dtor_FUN_00486d70 (00486d70) at 00486e1d [UNCONDITIONAL_CALL]
//   core_drip.cpp_dtor_FUN_0048ea90 (0048ea90) at 0048ead2 [UNCONDITIONAL_CALL]
//   core_drone.cpp_dtor_FUN_0048f5a0 (0048f5a0) at 0048f64d [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004942d0 (004942d0) at 0049434a [UNCONDITIONAL_CALL]
//   core_dynamite.cpp_dtor_FUN_0049d120 (0049d120) at 0049d162 [UNCONDITIONAL_CALL]
//   core_elephant.cpp_dtor_FUN_004a7be0 (004a7be0) at 004a7c22 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_dtor_FUN_004a93c0 (004a93c0) at 004a9402 [UNCONDITIONAL_CALL]
//   core_enemy.cpp_CEnemy_dtor_FUN_004125c0 (004125c0) at 0041266d [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_addClothFileToExtractList_FUN_004be150 (004be150) at 004be21d [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_addDeformableModelToExtractList_FUN_004be070 (004be070) at 004be136 [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_dtor_FUN_004bee80 (004bee80) at 004beec2 [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_dtor_FUN_004beed0 (004beed0) at 004bef12 [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_FUN_004cb7a0 (004cb7a0) at 004cb7f9 [UNCONDITIONAL_CALL]
//   core_flamegun.cpp_FUN_004cbb00 (004cbb00) at 004cbb42 [UNCONDITIONAL_CALL]
//   core_flamegun.cpp_FUN_004cbc60 (004cbc60) at 004cbca2 [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004cccb0 (004cccb0) at 004ccd09 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_FUN_004d28a0 (004d28a0) at 004d28f9 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_freeMaybe_FUN_004d7660 (004d7660) at 004d76b9 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_FUN_004e5bd0 (004e5bd0) at 004e5c7d [UNCONDITIONAL_CALL]
//   core_gasmask.cpp_FUN_004e5f40 (004e5f40) at 004e5f82 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e8f10 (004e8f10) at 004e8fbd [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_dtor_FUN_004eb820 (004eb820) at 004eb889 [UNCONDITIONAL_CALL]
//   core_grave.cpp_FUN_004eeb40 (004eeb40) at 004eeb82 [UNCONDITIONAL_CALL]
//   core_ground.cpp_CGround_free_FUN_004eefb0 (004eefb0) at 004ef00e [UNCONDITIONAL_CALL]
//   core_gun.cpp_FUN_004f0b50 (004f0b50) at 004f0b92 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f1d10 (004f1d10) at 004f1d52 [UNCONDITIONAL_CALL]
//   core_health.cpp_FUN_004f20d0 (004f20d0) at 004f2112 [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHeroPlaceholder_dtor_FUN_004f3c30 (004f3c30) at 004f3c7c [UNCONDITIONAL_CALL]
//   core_hiram.cpp_FUN_004f4450 (004f4450) at 004f4517 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_FUN_004f6b60 (004f6b60) at 004f6c1d [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f7a40 (004f7a40) at 004f7aed [UNCONDITIONAL_CALL]
//   core_hpriest.cpp_FUN_004f7cb0 (004f7cb0) at 004f7d6d [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f97e0 (004f97e0) at 004f9822 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004fb180 (004fb180) at 004fb22d [UNCONDITIONAL_CALL]
//   core_keyactor.cpp_FUN_005019b0 (005019b0) at 005019f2 [UNCONDITIONAL_CALL]
//   core_ladder.cpp_FUN_00502ed0 (00502ed0) at 00502f12 [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503cc0 (00503cc0) at 00503d6d [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_00505430 (00505430) at 00505472 [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00506a50 (00506a50) at 00506a92 [UNCONDITIONAL_CALL]
//   core_litecone.cpp_FUN_00506e30 (00506e30) at 00506e72 [UNCONDITIONAL_CALL]
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 00507825 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050b840 (0050b840) at 0050b882 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050b890 (0050b890) at 0050b909 [UNCONDITIONAL_CALL]
//   core_marquee.cpp_FUN_0050c4c0 (0050c4c0) at 0050c519 [UNCONDITIONAL_CALL]
//   core_melee.cpp_FUN_0050edf0 (0050edf0) at 0050ee32 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051f2c0 (0051f2c0) at 0051f3d3 [UNCONDITIONAL_CALL]
//   core_minecar.cpp_FUN_00520f40 (00520f40) at 00520f99 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_CMobster_dtor_FUN_00527c70 (00527c70) at 00527d1d [UNCONDITIONAL_CALL]
//   core_moloch.cpp_CMoloch_dtor_FUN_00528bf0 (00528bf0) at 00528c63 [UNCONDITIONAL_CALL]
//   core_motion.cpp_CMotionController_dtor_FUN_0052d5a0 (0052d5a0) at 0052d5d8 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0 (0053ccf0) at 0053cf10 [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_dtor_FUN_004f4700 (004f4700) at 004f47bd [UNCONDITIONAL_CALL]
//   core_passngr.cpp_CPassenger_dtor_FUN_00545c10 (00545c10) at 00545d20 [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_CPendulum_dtor_FUN_0054a7d0 (0054a7d0) at 0054a812 [UNCONDITIONAL_CALL]
//   core_podmain.cpp_CDemonPod_dtor_FUN_00551b20 (00551b20) at 00551b62 [UNCONDITIONAL_CALL]
//   core_scat.cpp_CScat_dtor_FUN_00559160 (00559160) at 005591a2 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_CSentinel_dtor_FUN_00568f80 (00568f80) at 0056902d [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057dbb0 [UNCONDITIONAL_CALL]
//   core_shotgun.cpp_CShotgun_dtor_FUN_00588ae0 (00588ae0) at 00588b22 [UNCONDITIONAL_CALL]
//   core_shovel.cpp_CShovel_dtor_FUN_00588c80 (00588c80) at 00588cc2 [UNCONDITIONAL_CALL]
//   core_simbox.cpp_CSimBox_dtor_FUN_005893e0 (005893e0) at 00589439 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 (0059de40) at 0059dea3 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_CSmiley_dtor_FUN_005a3880 (005a3880) at 005a392d [UNCONDITIONAL_CALL]
//   core_spike.cpp_CSpike_dtor_FUN_005b9050 (005b9050) at 005b9092 [UNCONDITIONAL_CALL]
//   core_stairs.cpp_CStairs_dtor_FUN_005bac10 (005bac10) at 005bac69 [UNCONDITIONAL_CALL]
//   core_stone.cpp_CTempleStone_dtor_FUN_005bae10 (005bae10) at 005bae69 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_dtor_FUN_005c69c0 (005c69c0) at 005c6a02 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_dtor_FUN_005c7820 (005c7820) at 005c78fd [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_dtor_FUN_005d9f50 (005d9f50) at 005d9fb9 [UNCONDITIONAL_CALL]
//   core_tbplayer.cpp_CBassPlayer_dtor_FUN_005da610 (005da610) at 005da6cd [UNCONDITIONAL_CALL]
//   core_tbplayer.cpp_CDrummer_dtor_FUN_005da540 (005da540) at 005da5fd [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleportDest_dtor_FUN_005daea0 (005daea0) at 005daee2 [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleport_dtor_FUN_005dae50 (005dae50) at 005dae92 [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_dtor_FUN_005dbcf0 (005dbcf0) at 005dbd9d [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_CTommyGun_dtor_FUN_005de5d0 (005de5d0) at 005de612 [UNCONDITIONAL_CALL]
//   core_trap.cpp_CTrap_dtor_FUN_005deab0 (005deab0) at 005deaf2 [UNCONDITIONAL_CALL]
//   core_trash.cpp_CTrash_dtor_FUN_005df780 (005df780) at 005df7c2 [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_dtor_FUN_005e1660 (005e1660) at 005e16a2 [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_dtor_FUN_005e3e00 (005e3e00) at 005e3e42 [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_dtor_FUN_005e5460 (005e5460) at 005e550d [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_dtor_FUN_005e7700 (005e7700) at 005e77fd [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_dtor_FUN_005e8d20 (005e8d20) at 005e8d89 [UNCONDITIONAL_CALL]
//   core_vessel.cpp_CCryptVessel_dtor_FUN_005e9d30 (005e9d30) at 005e9d89 [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_dtor_FUN_005ebc60 (005ebc60) at 005ebcb9 [UNCONDITIONAL_CALL]
//   core_waypoint.cpp_CWayPoint_dtor_FUN_005ec8d0 (005ec8d0) at 005ec912 [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_dtor_FUN_005edf80 (005edf80) at 005edfe3 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_dtor_FUN_005f2220 (005f2220) at 005f22cd [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_dtor_FUN_005fcc50 (005fcc50) at 005fccfd [UNCONDITIONAL_CALL]
//   crt_fstream.cpp_filebuf_dtor_FUN_0060bdf9 (0060bdf9) at 0060be6a [UNCONDITIONAL_CALL]
//   crt_fstream.cpp_fstreambase_dtor_FUN_00606509 (00606509) at 00606588 [UNCONDITIONAL_CALL]
//   crt_fstream.cpp_ifstream_dtor_FUN_005ff856 (005ff856) at 005ff8e9 [UNCONDITIONAL_CALL]
//   crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc (005ff7bc) at 005ff84f [UNCONDITIONAL_CALL]
//   crt_iostream.cpp_ios_dtor_FUN_0060632c (0060632c) at 0060636f [UNCONDITIONAL_CALL]
//   crt_iostream.cpp_istream_dtor_FUN_006063e1 (006063e1) at 0060644f [UNCONDITIONAL_CALL]
//   crt_iostream.cpp_ostream_dtor_FUN_00606231 (00606231) at 0060629f [UNCONDITIONAL_CALL]
//   crt_memory.c_free_FUN_005fe659 (005fe659) at 005fe65e [UNCONDITIONAL_CALL]
//   crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca (005ff5ca) at 005ff65d [UNCONDITIONAL_CALL]
//   crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a (005ff48a) at 005ff51d [UNCONDITIONAL_CALL]
//   crt_strstream.cpp_strstreambase_dtor_FUN_006062a6 (006062a6) at 00606325 [UNCONDITIONAL_CALL]
//   crt_strstream.cpp_strstreambuf_dtor_FUN_0060bb7f (0060bb7f) at 0060bbf1 [UNCONDITIONAL_CALL]
//   engine_palette.cpp_CPaletteManager_createOutputPalette_FUN_00545180 (00545180) at 005454fa [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_cleanup_FUN_00550c80 (00550c80) at 00550cd6 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_dismountPod_FUN_005518c0 (005518c0) at 00551921 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_dtor_FUN_005509b0 (005509b0) at 005509fd [UNCONDITIONAL_CALL]
//   engine_texture.cpp_freeTextureCache_FUN_005dd7a0 (005dd7a0) at 005dd7e8 [UNCONDITIONAL_CALL]
//   engine_winfont.cpp_CWinFont_dtor_FUN_005f2390 (005f2390) at 005f23e1 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 (004a3c80) at 004a3d07 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40 (004a2a40) at 004a2a83 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_FUN_00516f50 (00516f50) at 00516fb7 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_free_FUN_00515970 (00515970) at 00515a9f [UNCONDITIONAL_CALL]
//   shape_multicrm.cpp_CMultiCram_run_FUN_0053ee70 (0053ee70) at 0053f2d6 [UNCONDITIONAL_CALL]
//   shape_quantize.cpp_ColorQuantizationMaybe_FUN_00556490 (00556490) at 005567a5 [UNCONDITIONAL_CALL]
//   shape_quantize.cpp_FUN_00556180 (00556180) at 005563a7 [UNCONDITIONAL_CALL]
//   shape_quantize.cpp_FreeSomething1_FUN_00556c20 (00556c20) at 00556c99 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_DeletingTJunctionsMaybe_FUN_005d47b0 (005d47b0) at 005d4d4b [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_FUN_005d3960 (005d3960) at 005d3b1a [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_FUN_005d44d0 (005d44d0) at 005d46ce [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_FUN_005d7000 (005d7000) at 005d70ae [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_MallocAndDeletingInvalidPolygons_FUN_005d46f0 (005d46f0) at 005d4790 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_WeldingVerticesMaybe_FUN_005d4160 (005d4160) at 005d4237 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_FUN_00534210 (00534210) at 00534414 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSample_freeMemory_FUN_005a62c0 (005a62c0) at 005a631b [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20 (005acf20) at 005ad017 [UNCONDITIONAL_CALL]
//   support_codec.cpp_CCodec_dtor_FUN_0043e9b0 (0043e9b0) at 0043e9ed [UNCONDITIONAL_CALL]
//   support_codec.cpp_CLZWCompress_dtor_FUN_0043f710 (0043f710) at 0043f763 [UNCONDITIONAL_CALL]
//   support_codec.cpp_CLZWDecompress_dtor_FUN_0043f6b0 (0043f6b0) at 0043f703 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_unknown_0067d200
//   char* g_CurrentDebugFilename = 0067d200
//   int g_CurrentDebugLine
// Function calls:
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

void __cdecl shape_memdbg_cpp_debugFree_FUN_0050f210(void *ptr)

{
  if (ptr != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(ptr,g_CurrentDebugFilename,g_CurrentDebugLine);
  }
  g_CurrentDebugLine = 0;
  g_CurrentDebugFilename = "(unknown)";
  return;
}


// Assembly code:
// 0050f210: PUSH EBX
//   Label: shape_memdbg.cpp_debugFree_FUN_0050f210
// 0050f211: PUSH ESI
// 0050f212: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0050f216: TEST EAX,EAX
// 0050f218: JNZ 0x0050f230
//   XREF to: 0050f230 (CONDITIONAL_JUMP)
// 0050f21a: XOR ESI,ESI
//   Label: LAB_0050f21a
// 0050f21c: MOV EBX,0x67d200
//   XREF to: 0067d200 (DATA)
// 0050f221: MOV dword ptr [0x02f0d944],ESI
//   XREF to: 02f0d944 (WRITE)
// 0050f227: MOV dword ptr [0x0067d20c],EBX
//   XREF to: 0067d20c (WRITE)
// 0050f22d: POP ESI
// 0050f22e: POP EBX
// 0050f22f: RET
// 0050f230: MOV EDX,dword ptr [0x02f0d944]
//   Label: LAB_0050f230
//   XREF to: 02f0d944 (READ)
// 0050f236: PUSH EDX
// 0050f237: MOV ECX,dword ptr [0x0067d20c]
//   XREF to: 0067d200 (PARAM)
//   XREF to: 0067d20c (READ)
// 0050f23d: PUSH ECX
//   XREF to: 0067d200 (DATA)
// 0050f23e: PUSH EAX
// 0050f23f: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 0050f244: ADD ESP,0xc
// 0050f247: JMP 0x0050f21a
//   XREF to: 0050f21a (UNCONDITIONAL_JUMP)
