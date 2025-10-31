// Name: crt_memory.c_freeTypeArray_FUN_005feee9
// Address: 005feee9
// Address Range: [[005feee9, 005fef15]]
// Convention: __cdecl
// Signature: int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
// Cross-references:
//   core_actor.cpp_freeVectors_FUN_00410500 (00410500) at 0041050c [UNCONDITIONAL_CALL]
//   core_backgnd.cpp_cleanupVector_FUN_004126e0 (004126e0) at 004126ec [UNCONDITIONAL_CALL]
//   core_backgnd.cpp_freeFires_FUN_00412700 (00412700) at 0041270c [UNCONDITIONAL_CALL]
//   core_backgnd.cpp_freeFlames_FUN_00412720 (00412720) at 0041272c [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_freeBodyPartFires_FUN_0041b6b0 (0041b6b0) at 0041b6bc [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_freeBodyPartModels_FUN_0041b690 (0041b690) at 0041b69c [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041db30 (0041db30) at 0041db3c [UNCONDITIONAL_CALL]
//   core_box.cpp_freeScrapes_FUN_00420220 (00420220) at 0042022c [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_004236e0 (004236e0) at 004236ec [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00427cc0 (00427cc0) at 00427ccf [UNCONDITIONAL_CALL]
//   core_chain.cpp_FUN_004313f0 (004313f0) at 004313fc [UNCONDITIONAL_CALL]
//   core_cloth.cpp_freeClothBones_FUN_0043e4a0 (0043e4a0) at 0043e4ac [UNCONDITIONAL_CALL]
//   core_cloth.cpp_freeClothVertices_FUN_0043e480 (0043e480) at 0043e48f [UNCONDITIONAL_CALL]
//   core_cloth.cpp_freeVectors_FUN_0043e460 (0043e460) at 0043e46c [UNCONDITIONAL_CALL]
//   core_curtain.cpp_FUN_0044bad0 (0044bad0) at 0044badf [UNCONDITIONAL_CALL]
//   core_curtain.cpp_FUN_0044baf0 (0044baf0) at 0044bafc [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_freeVectors_FUN_00454700 (00454700) at 0045470f [UNCONDITIONAL_CALL]
//   core_dcube.cpp_freeVectors_FUN_00457eb0 (00457eb0) at 00457ebc [UNCONDITIONAL_CALL]
//   core_dfilter.cpp_freeFilters_FUN_00470980 (00470980) at 0047098c [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_freeModels_FUN_0047efc0 (0047efc0) at 0047efcf [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00486e30 (00486e30) at 00486e3c [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00486e50 (00486e50) at 00486e5c [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_freeVectors_FUN_0049a410 (0049a410) at 0049a41f [UNCONDITIONAL_CALL]
//   core_dtri.cpp_freeTriangles_FUN_0049cd20 (0049cd20) at 0049cd2c [UNCONDITIONAL_CALL]
//   core_fire.cpp_freeBulletHoles_FUN_004c99f0 (004c99f0) at 004c99ff [UNCONDITIONAL_CALL]
//   core_fire.cpp_freeBulletTrails_FUN_004c9950 (004c9950) at 004c995c [UNCONDITIONAL_CALL]
//   core_fire.cpp_freeCraters_FUN_004c9890 (004c9890) at 004c989c [UNCONDITIONAL_CALL]
//   core_fire.cpp_freeExplosions_FUN_004c98d0 (004c98d0) at 004c98dc [UNCONDITIONAL_CALL]
//   core_fire.cpp_freeFireballs_FUN_004c9930 (004c9930) at 004c993c [UNCONDITIONAL_CALL]
//   core_fire.cpp_freeGlassParticles_FUN_004c9970 (004c9970) at 004c997f [UNCONDITIONAL_CALL]
//   core_fire.cpp_freeGunFlames_FUN_004c9870 (004c9870) at 004c987f [UNCONDITIONAL_CALL]
//   core_fire.cpp_freeLaserBeams_FUN_004c98f0 (004c98f0) at 004c98fc [UNCONDITIONAL_CALL]
//   core_fire.cpp_freeLightningBolts_FUN_004c9850 (004c9850) at 004c985c [UNCONDITIONAL_CALL]
//   core_fire.cpp_freeMuzzleFlashes_FUN_004c9990 (004c9990) at 004c999c [UNCONDITIONAL_CALL]
//   core_fire.cpp_freePopcorn_FUN_004c97f0 (004c97f0) at 004c97ff [UNCONDITIONAL_CALL]
//   core_fire.cpp_freeRainDrops_FUN_004c97d0 (004c97d0) at 004c97df [UNCONDITIONAL_CALL]
//   core_fire.cpp_freeRocks_FUN_004c9910 (004c9910) at 004c991c [UNCONDITIONAL_CALL]
//   core_fire.cpp_freeShells_FUN_004c9810 (004c9810) at 004c981c [UNCONDITIONAL_CALL]
//   core_fire.cpp_freeSmokeParticles_FUN_004c9a10 (004c9a10) at 004c9a1f [UNCONDITIONAL_CALL]
//   core_fire.cpp_freeSparks_FUN_004c99b0 (004c99b0) at 004c99bf [UNCONDITIONAL_CALL]
//   core_fire.cpp_freeStakes_FUN_004c99d0 (004c99d0) at 004c99df [UNCONDITIONAL_CALL]
//   core_fire.cpp_freeTosses_FUN_004c98b0 (004c98b0) at 004c98bc [UNCONDITIONAL_CALL]
//   core_fire.cpp_freeTrails_FUN_004c9830 (004c9830) at 004c983c [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004ccd60 (004ccd60) at 004ccd6f [UNCONDITIONAL_CALL]
//   core_glass.cpp_freeVectorArray25_FUN_004eb8a0 (004eb8a0) at 004eb8ac [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ee420 (004ee420) at 004ee42f [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ee440 (004ee440) at 004ee44c [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ee460 (004ee460) at 004ee46f [UNCONDITIONAL_CALL]
//   core_gore.cpp_cleanupBloodParticles_FUN_004ee480 (004ee480) at 004ee48f [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050ba70 (0050ba70) at 0050ba7c [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050ba90 (0050ba90) at 0050ba9c [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050bab0 (0050bab0) at 0050babc [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050bad0 (0050bad0) at 0050badc [UNCONDITIONAL_CALL]
//   core_menu.cpp_freeBitmap_FUN_00514f50 (00514f50) at 00514f5c [UNCONDITIONAL_CALL]
//   core_mirror.cpp_freeClipPlaneArray_FUN_00522c10 (00522c10) at 00522c1c [UNCONDITIONAL_CALL]
//   core_mirror.cpp_freeVectorArray32_FUN_00522c30 (00522c30) at 00522c3c [UNCONDITIONAL_CALL]
//   core_moon.cpp_FUN_0052a430 (0052a430) at 0052a43c [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052a450 (0052a450) at 0052a45c [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052a470 (0052a470) at 0052a47c [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052cc90 (0052cc90) at 0052cc9c [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052ccb0 (0052ccb0) at 0052ccbc [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052ccd0 (0052ccd0) at 0052ccdc [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052ccf0 (0052ccf0) at 0052ccfc [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052cd10 (0052cd10) at 0052cd1c [UNCONDITIONAL_CALL]
//   core_path.cpp_freePathMaps_FUN_00548c30 (00548c30) at 00548c3c [UNCONDITIONAL_CALL]
//   core_set.cpp_free3DSCameras_FUN_00571530 (00571530) at 0057153f [UNCONDITIONAL_CALL]
//   core_set.cpp_free3DSLights_FUN_00571550 (00571550) at 0057155f [UNCONDITIONAL_CALL]
//   core_set.cpp_freeRooms_FUN_00571570 (00571570) at 0057157c [UNCONDITIONAL_CALL]
//   core_set.cpp_freeVDBoxes_FUN_00571590 (00571590) at 0057159f [UNCONDITIONAL_CALL]
//   core_set.cpp_freeVectors_FUN_00571510 (00571510) at 0057151f [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_freeRaytraceState_FUN_00574770 (00574770) at 0057477c [UNCONDITIONAL_CALL]
//   core_setdir.cpp_freeBoundingBoxes_FUN_005768f0 (005768f0) at 005768ff [UNCONDITIONAL_CALL]
//   core_setdir.cpp_freeCZThumbs_FUN_00576910 (00576910) at 0057691f [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_FUN_005a1fb0 (005a1fb0) at 005a1fbc [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_FUN_005a1fd0 (005a1fd0) at 005a1fdc [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_FUN_005a1ff0 (005a1ff0) at 005a1fff [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_FUN_005a2010 (005a2010) at 005a201f [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_FUN_005a2030 (005a2030) at 005a203c [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b3e50 (005b3e50) at 005b3e5c [UNCONDITIONAL_CALL]
//   core_stairs.cpp_FUN_005bac80 (005bac80) at 005bac8c [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_FUN_005e8dd0 (005e8dd0) at 005e8ddc [UNCONDITIONAL_CALL]
//   core_wateract.cpp_FUN_005ebcf0 (005ebcf0) at 005ebcff [UNCONDITIONAL_CALL]
//   core_weather.cpp_FUN_005efb50 (005efb50) at 005efb5f [UNCONDITIONAL_CALL]
//   crt_memory.c_freeSingleInstance_FUN_005fe632 (005fe632) at 005fe64d [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_freeVector8_FUN_004a6f50 (004a6f50) at 004a6f5c [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051f0c0 (0051f0c0) at 0051f0cf [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051f0e0 (0051f0e0) at 0051f0ef [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005ade40 (005ade40) at 005ade4c [UNCONDITIONAL_CALL]
//   support_newmsg.cpp_freeBitmap_FUN_00544730 (00544730) at 0054473c [UNCONDITIONAL_CALL]
//   support_newmsg.cpp_freeSkullBitmaps_FUN_00544750 (00544750) at 0054475c [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_destroyTypeArray_FUN_005feeaf

#include "nocturne.h"

int __cdecl
crt_memory_c_freeTypeArray_FUN_005feee9(void **obj_array,int obj_count,WatcomTypeInfo *type_info)

{
  BADSPACEBASE *in_ESP;
  WatcomTypeArrayInfo local_destroy_info;
  
  local_destroy_info.obj_count = obj_count;
  local_destroy_info.type_info = type_info;
  local_destroy_info.obj_array = obj_array;
  crt_memory_c_destroyTypeArray_FUN_005feeaf(&local_destroy_info);
  return obj_count;
}


// Assembly code:
// 005feee9: SUB ESP,0xc
//   Label: crt_memory.c_freeTypeArray_FUN_005feee9
// 005feeec: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005feef0: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0xc] (DATA)
// 005feef3: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 005feef7: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 005feefb: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005feeff: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x4] (WRITE)
// 005fef03: MOV EAX,ESP
// 005fef05: PUSH EAX
// 005fef06: CALL crt_memory.c_destroyTypeArray_FUN_005feeaf
//   XREF to: 005feeaf (UNCONDITIONAL_CALL)
// 005fef0b: ADD ESP,0x4
// 005fef0e: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005fef12: ADD ESP,0xc
// 005fef15: RET
