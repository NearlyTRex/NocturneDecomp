// Name: crt_memory.c_memset_FUN_005fde40
// Address: 005fde40
// Address Range: [[005fde40, 005fde5f]]
// Convention: __cdecl
// Signature: void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00488110 (00488110) at 0048818c [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_00488ad0 (00488ad0) at 00488b7a [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_CPackedBitmap_ctor_FUN_0054a820 (0054a820) at 0054a833 [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_CPackedBitmap_init_FUN_0054a840 (0054a840) at 0054a856 [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_ctor_FUN_0054bcd0 (0054bcd0) at 0054bcf7 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 (0040ac80) at 0040ad90 [UNCONDITIONAL_CALL]
//   core_actor.cpp_copyToActorDebugBuffer_FUN_0040ac30 (0040ac30) at 0040ac3e [UNCONDITIONAL_CALL]
//   core_baron.cpp_FUN_00413470 (00413470) at 00413548 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CBodyPart_FUN_0041af90 (0041af90) at 0041b018 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_0041a050 (0041a050) at 0041a3fe [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_CBoneGuy_ctor_FUN_0041bbc0 (0041bbc0) at 0041bc9f [UNCONDITIONAL_CALL]
//   core_bugs.cpp_CBugs_ctor_FUN_00424cb0 (00424cb0) at 00424d1f [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00425660 (00425660) at 00425685 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043bf40 (0043bf40) at 0043bf69 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043c070 (0043c070) at 0043c0e3 [UNCONDITIONAL_CALL]
//   core_colonel.cpp_FUN_0043ff20 (0043ff20) at 0043ff63 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0 (0044f3e0) at 0044fc6e [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_generateFogGrid_FUN_0044bba0 (0044bba0) at 0044bbb5 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_initializeCoronaBuffers_FUN_004502e0 (004502e0) at 004502ec [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_drawShadowDepthBuffer_FUN_00476670 (00476670) at 004766d9 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60 (00477e60) at 00477ea5 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_00476f20 (00476f20) at 00477086 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30 (0047aa30) at 0047aadc [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 (004947a0) at 00494c5a [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d4190 (004d4190) at 004d41b9 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_resetInputAndCenterCursor_FUN_004dce70 (004dce70) at 004dce84 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f13f0 (004f13f0) at 004f1433 [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f2340 (004f2340) at 004f238b [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f3930 (004f3930) at 004f3948 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f8c70 (004f8c70) at 004f8cb3 [UNCONDITIONAL_CALL]
//   core_moloch.cpp_FUN_005293b0 (005293b0) at 005293e9 [UNCONDITIONAL_CALL]
//   core_morph.cpp_CMorphModel_findOrAddTexture_FUN_0052ae60 (0052ae60) at 0052aed6 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00537330 (00537330) at 0053739a [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_addPlayer_FUN_005412b0 (005412b0) at 005412e5 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0 (005406a0) at 00541111 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_processChatOut_FUN_00541e40 (00541e40) at 00541edf [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150 (00543150) at 00543458 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_allocSimFrame_FUN_0053f5a0 (0053f5a0) at 0053f639 [UNCONDITIONAL_CALL]
//   core_path.cpp_CPathMap_queuePop_FUN_005487a0 (005487a0) at 005487be [UNCONDITIONAL_CALL]
//   core_path.cpp_CPathMap_reset_FUN_00548510 (00548510) at 00548523 [UNCONDITIONAL_CALL]
//   core_procedur.cpp_CreateProceduralWaterFrame_FUN_005542b0 (005542b0) at 005543a6 [UNCONDITIONAL_CALL]
//   core_procedur.cpp_FUN_00554670 (00554670) at 005546c3 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_005578e0 (005578e0) at 0055792a [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00561a30 (00561a30) at 00561a7c [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00562920 (00562920) at 00563db8 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0 (0056eac0) at 0056f721 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0 (00576da0) at 00576e7a [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_0057b410 (0057b410) at 0057b43f [UNCONDITIONAL_CALL]
//   core_setedit.cpp_Something2MemoryConstructorMaybe_FUN_0057fd00 (0057fd00) at 0057fd28 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSCamera_reset_FUN_005853b0 (005853b0) at 005853c6 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_load_FUN_00586310 (00586310) at 00586966 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_ExportModel_FUN_00595fc0 (00595fc0) at 005960e7 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589fc0 (00589fc0) at 00589fd6 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058bd00 (0058bd00) at 0058bdee [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 005931c9 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_ctor_FUN_0059a160 (0059a160) at 0059a1e1 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_dismember_FUN_0059c5e0 (0059c5e0) at 0059c6df [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_free_FUN_0059a2b0 (0059a2b0) at 0059a3c8 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_FUN_005d9260 (005d9260) at 005d92a3 [UNCONDITIONAL_CALL]
//   crt_env.c_updateEnvironTable_FUN_0060f04c (0060f04c) at 0060f176 [UNCONDITIONAL_CALL]
//   crt_io.c_extend_file_for_append_FUN_00608410 (00608410) at 0060847e [UNCONDITIONAL_CALL]
//   crt_io.c_stat_FUN_00607e64 (00607e64) at 00607f77 [UNCONDITIONAL_CALL]
//   crt_memory.c_calloc_FUN_0060ca90 (0060ca90) at 0060caab [UNCONDITIONAL_CALL]
//   crt_process.c_spawn_FUN_006105a0 (006105a0) at 006105cf [UNCONDITIONAL_CALL]
//   crt_startup.cpp_WinMainBootstrap_FUN_00609e70 (00609e70) at 00609e99 [UNCONDITIONAL_CALL]
//   crt_stdio.c_AllocateFileStruct_FUN_006092f0 (006092f0) at 0060936e [UNCONDITIONAL_CALL]
//   crt_thread.c_threadStartupWrapper_FUN_0060f8c0 (0060f8c0) at 0060f8fa [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00600c80 (00600c80) at 00600cba [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00604478 (00604478) at 00604545 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060501c (0060501c) at 0060502c [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00607080 (00607080) at 0060708f [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060b670 (0060b670) at 0060b6ca [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060d230 (0060d230) at 0060d271 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060fcf4 (0060fcf4) at 0060fe1d [UNCONDITIONAL_CALL]
//   crt_unknown.c_staticInit_FUN_0060c650 (0060c650) at 0060c710 [UNCONDITIONAL_CALL]
//   engine_2d.c_drawHLine_FUN_00402ee0 (00402ee0) at 00402f4b [UNCONDITIONAL_CALL]
//   engine_colquant.c_FUN_004406c0 (004406c0) at 004406e0 [UNCONDITIONAL_CALL]
//   engine_console.cpp_CConsole_reset_FUN_00441a40 (00441a40) at 00441a50 [UNCONDITIONAL_CALL]
//   engine_console.cpp_CConsole_scrollUp_FUN_00441a80 (00441a80) at 00441ac4 [UNCONDITIONAL_CALL]
//   engine_dosio.c_CFileFinder_convertStruct_FUN_00481dc0 (00481dc0) at 00481dd7 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_addPodAuditRecord_FUN_004b5950 (004b5950) at 004b59cf [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b9432 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b5ce2 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190 (004bd190) at 004bd34e [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_wrapText_FUN_004d0010 (004d0010) at 004d002d [UNCONDITIONAL_CALL]
//   engine_pcx.c_saveScreenshotGeneral_FUN_005490c0 (005490c0) at 005490fa [UNCONDITIONAL_CALL]
//   engine_texture.cpp_CTextureCache_loadTexture_FUN_005dcc00 (005dcc00) at 005dcf2e [UNCONDITIONAL_CALL]
//   engine_winfont.cpp_CWinFont_createTextBackground_FUN_005f2860 (005f2860) at 005f28fa [UNCONDITIONAL_CALL]
//   shape_design.c_cramTextureList_FUN_0046bb80 (0046bb80) at 0046cfa6 [UNCONDITIONAL_CALL]
//   shape_design.c_createKeyframeModel_FUN_00468320 (00468320) at 0046833a [UNCONDITIONAL_CALL]
//   shape_design.c_initializeCramConfig_FUN_0046b6e0 (0046b6e0) at 0046b6f4 [UNCONDITIONAL_CALL]
//   shape_design.c_loadS3DModelFile_FUN_004593a0 (004593a0) at 00459804 [UNCONDITIONAL_CALL]
//   shape_design.c_loadTextureData_FUN_0046b060 (0046b060) at 0046b320 [UNCONDITIONAL_CALL]
//   shape_design.c_removeUnusedVertices_FUN_00463830 (00463830) at 004638a4 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_ctor_FUN_0049df80 (0049df80) at 0049df98 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CInputString_calcX_FUN_0049d8f0 (0049d8f0) at 0049d94e [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CInputString_draw_FUN_0049d9b0 (0049d9b0) at 0049da38 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CInputString_init_FUN_0049d3d0 (0049d3d0) at 0049d3f9 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0 (004a45d0) at 004a4606 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugCalloc_FUN_0050f350 (0050f350) at 0050f434 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_00515880 (00515880) at 005158ee [UNCONDITIONAL_CALL]
//   shape_quantize.cpp_AllocateMemForSomething_FUN_00556a00 (00556a00) at 00556a13 [UNCONDITIONAL_CALL]
//   shape_quantize.cpp_FUN_00554900 (00554900) at 00554917 [UNCONDITIONAL_CALL]
//   shape_quantize.cpp_FUN_00555500 (00555500) at 005556c2 [UNCONDITIONAL_CALL]
//   shape_quantize.cpp_FUN_005568f0 (005568f0) at 00556962 [UNCONDITIONAL_CALL]
//   shape_quantize.cpp_FreeSomething2_FUN_00554d40 (00554d40) at 00554e17 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_BonesAndPointsCheck_FUN_005d7e00 (005d7e00) at 005d7e20 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_FUN_005ce580 (005ce580) at 005ce6de [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_FUN_005d2580 (005d2580) at 005d25d1 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_FUN_005d44d0 (005d44d0) at 005d4516 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_UnableToAllocateRamForObject_FUN_005d2500 (005d2500) at 005d2568 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CMP3Decoder_ctor_FUN_005344f0 (005344f0) at 00534514 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_FUN_00533690 (00533690) at 00533a4e [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_FUN_00534ba0 (00534ba0) at 00534c6a [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_CreatePrimaryBufferMaybe_FUN_005b0440 (005b0440) at 005b052a [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_FUN_005ae660 (005ae660) at 005ae6ae [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_FUN_005ae830 (005ae830) at 005aeb65 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_FUN_005aef40 (005aef40) at 005af025 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_FUN_005b0120 (005b0120) at 005b01ce [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_FUN_005b08f0 (005b08f0) at 005b090c [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_waveInStart_FUN_005b0e20 (005b0e20) at 005b0e41 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a5db0 (005a5db0) at 005a5dcf [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a8480 (005a8480) at 005a848d [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a8830 (005a8830) at 005a88a5 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005aaef0 (005aaef0) at 005aaf86 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSlot_kill_2_FUN_005aca90 (005aca90) at 005acbef [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSlot_pollStream_FUN_005a6730 (005a6730) at 005a6c06 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_UnknownPlayOrUseSample_FUN_005a75e0 (005a75e0) at 005a76dc [UNCONDITIONAL_CALL]
//   support_trisock.cpp_buildSockaddrIn_FUN_005e19d0 (005e19d0) at 005e1a13 [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_analyzePixelFormat_FUN_005ed730 (005ed730) at 005ed73d [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580 (005ed580) at 005ed5ae [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0 (005ecef0) at 005ed18d [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 (005eda20) at 005edb51 [UNCONDITIONAL_CALL]
//   wincore_windll.cpp_CExternalRenderer_ctor_FUN_005b7f90 (005b7f90) at 005b7f9d [UNCONDITIONAL_CALL]
//   wincore_windll.cpp_drawFullScreenQuad_FUN_005b7a50 (005b7a50) at 005b7a62 [UNCONDITIONAL_CALL]
//   wincore_windll.cpp_loadExternalRenderer_FUN_005b6750 (005b6750) at 005b6ffb [UNCONDITIONAL_CALL]
//   wincore_winrun.cpp_getComputerAndUserName_FUN_005f4140 (005f4140) at 005f4152 [UNCONDITIONAL_CALL]
//   wincore_winrun.cpp_winMain_FUN_005f3680 (005f3680) at 005f38bd [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_OptimizedMemFill_FUN_00603b00

#include "nocturne.h"

void * __cdecl crt_memory_c_memset_FUN_005fde40(void *dest,int value,ulong count)

{
  undefined1 uVar1;
  uint unaff_EBX;
  void *unaff_retaddr;
  
  uVar1 = (undefined1)value;
  crt_memory_c_OptimizedMemFill_FUN_00603b00
            (dest,CONCAT31(CONCAT21(CONCAT11(uVar1,uVar1),uVar1),uVar1),unaff_EBX);
  return unaff_retaddr;
}


// Assembly code:
// 005fde40: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_memory.c_memset_FUN_005fde40
//   XREF to: Stack[0x4] (READ)
// 005fde44: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005fde48: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 005fde4c: PUSH EAX
// 005fde4d: MOV DH,DL
// 005fde4f: SHL EDX,0x8
// 005fde52: MOV DL,DH
// 005fde54: SHL EDX,0x8
// 005fde57: MOV DL,DH
// 005fde59: CALL crt_memory.c_OptimizedMemFill_FUN_00603b00
//   XREF to: 00603b00 (UNCONDITIONAL_CALL)
// 005fde5e: POP EAX
// 005fde5f: RET
