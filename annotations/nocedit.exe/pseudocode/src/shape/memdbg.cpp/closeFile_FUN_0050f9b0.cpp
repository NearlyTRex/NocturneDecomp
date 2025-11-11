// Name: shape_memdbg.cpp_closeFile_FUN_0050f9b0
// Address: 0050f9b0
// Address Range: [[0050f9b0, 0050fb94]]
// Convention: __cdecl
// Signature: int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
// Cross-references:
//   cockpit_ckptutil.c_loadACTPaletteFile_FUN_00431ac0 (00431ac0) at 00431bc8 [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_loadEdgeListFile_FUN_004331f0 (004331f0) at 004333fc [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_loadRotatedBitmapFile_FUN_00434690 (00434690) at 0043472e [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_readBitmapFile_FUN_00431870 (00431870) at 00431980 [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_saveEdgeListFile_FUN_00433480 (00433480) at 004335d9 [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_0054b860 (0054b860) at 0054b8e8 [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_CPackedBitmap_saveToPBMFile_FUN_0054b520 (0054b520) at 0054b565 [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_loadPBGFile_FUN_0054bb40 (0054bb40) at 0054bbab [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40 (0054bf40) at 0054c151 [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_0054c1e0 (0054c1e0) at 0054c2e2 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_CCloth_load_FUN_00438cf0 (00438cf0) at 00439184 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_ParseClothFile_FUN_00439260 (00439260) at 004394ab [UNCONDITIONAL_CALL]
//   core_course.cpp_CCourse_load_FUN_00442580 (00442580) at 0044267b [UNCONDITIONAL_CALL]
//   core_course.cpp_CCourse_save_FUN_00442a90 (00442a90) at 00442b8b [UNCONDITIONAL_CALL]
//   core_course.cpp_OpeningCourseFile2_FUN_00442d70 (00442d70) at 00442e67 [UNCONDITIONAL_CALL]
//   core_course.cpp_OpeningCourseFileMaybe_FUN_00442bc0 (00442bc0) at 00442d50 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0 (0044f3e0) at 0044f870 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0 (004529b0) at 00452f82 [UNCONDITIONAL_CALL]
//   core_dfilter.cpp_CDemonFilter_load_FUN_004702f0 (004702f0) at 00470327 [UNCONDITIONAL_CALL]
//   core_dfilter.cpp_CDemonFilter_save_FUN_00470510 (00470510) at 0047054e [UNCONDITIONAL_CALL]
//   core_dfilter.cpp_CFilterFX_openMovie_FUN_00470730 (00470730) at 004707c3 [UNCONDITIONAL_CALL]
//   core_dimage.cpp_CDemonImage_load_FUN_00471ad0 (00471ad0) at 00471b70 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_backupModel_FUN_00479260 (00479260) at 004792d5 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_exportToS3D_FUN_00479f30 (00479f30) at 0047a392 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_export_FUN_00478e10 (00478e10) at 00479221 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 (00479330) at 00479947 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0 (00476db0) at 00476e2b [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_copyFile_FUN_0047c930 (0047c930) at 0047c9ed [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0 (00494de0) at 00494e31 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_save_FUN_00495040 (00495040) at 00495078 [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 (004bda20) at 004be038 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e1500 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_openSomething_FUN_004e2910 (004e2910) at 004e2a0e [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004dad8f [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_rollCredits_FUN_004e4010 (004e4010) at 004e40ec [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_saveGame_FUN_004e0cd0 (004e0cd0) at 004e0f4d [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 (004e1cb0) at 004e2681 [UNCONDITIONAL_CALL]
//   core_game.cpp_FUN_004d7810 (004d7810) at 004d7ae6 [UNCONDITIONAL_CALL]
//   core_game.cpp_FUN_004e1c30 (004e1c30) at 004e1c8d [UNCONDITIONAL_CALL]
//   core_game.cpp_SaveRelated_FUN_004dcee0 (004dcee0) at 004dd59c [UNCONDITIONAL_CALL]
//   core_ground.cpp_CGround_load_FUN_004ef030 (004ef030) at 004ef192 [UNCONDITIONAL_CALL]
//   core_inv.cpp_loadInventory_FUN_004fd220 (004fd220) at 004fd4e0 [UNCONDITIONAL_CALL]
//   core_main.c_displayErrorAndQuit_FUN_00506f10 (00506f10) at 00506fd9 [UNCONDITIONAL_CALL]
//   core_main.c_finalizeGameSystems_FUN_00508570 (00508570) at 0050884e [UNCONDITIONAL_CALL]
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 00507ad9 [UNCONDITIONAL_CALL]
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 00507995 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_load_FUN_00522d90 (00522d90) at 00522ded [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_save_FUN_00522e30 (00522e30) at 00522e7a [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DuplicateActorCheckMaybe_FUN_0053bd80 (0053bd80) at 0053be01 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00537dd0 (00537dd0) at 00537f16 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_OpenAndCreateWorld_FUN_00537f60 (00537f60) at 005381a6 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UndoChangeMaybe_FUN_0053c0b0 (0053c0b0) at 0053c12b [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140 (0053c140) at 0053c1f8 [UNCONDITIONAL_CALL]
//   core_podmain.cpp_CDemonPod_load_FUN_005519c0 (005519c0) at 00551ad8 [UNCONDITIONAL_CALL]
//   core_procedur.cpp_CreateProceduralWaterFrame_FUN_005542b0 (005542b0) at 00554551 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80 (00559f80) at 0055a2a6 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_dbLoad_FUN_005603c0 (005603c0) at 005606ca [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00566180 (00566180) at 0056621d [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_load_FUN_00569410 (00569410) at 00569d2a [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CDemonSet_refreshThumbs_FUN_00575b40 (00575b40) at 00575b92 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CDemonSet_writeThumbs_FUN_00575e40 (00575e40) at 00575ef5 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0 (00576da0) at 005770f3 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_ExportSomething_FUN_0057a0c0 (0057a0c0) at 0057a21b [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00584e70 (00584e70) at 0058518b [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_OpenAndProcessFileMaybe_FUN_00578a20 (00578a20) at 00578c22 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 00579a0d [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_save_FUN_0057a2a0 (0057a2a0) at 0057a82b [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057f940 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_EditingGroundTypesAndSaving_FUN_00578630 (00578630) at 0057896b [UNCONDITIONAL_CALL]
//   core_setedit.cpp_ImportingGroundTextures_FUN_00578420 (00578420) at 005785f6 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_OpenSomethingBackdropThumbs_FUN_005769a0 (005769a0) at 00576ca2 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057d93e [UNCONDITIONAL_CALL]
//   core_setedit.cpp_WriteActBackdrop_FUN_0057ce80 (0057ce80) at 0057d20f [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CBoneStructure_importBON_FUN_0058a3d0 (0058a3d0) at 0058a45e [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810 (0058f810) at 0058f8fd [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0 (00595fc0) at 00596830 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_save_FUN_0058f040 (0058f040) at 0058f0d1 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CSkeleton_save_FUN_0058b2c0 (0058b2c0) at 0058b351 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_005897b0 (005897b0) at 0058992e [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589a40 (00589a40) at 00589afd [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058b660 (0058b660) at 0058b8a1 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058bd00 (0058bd00) at 0058c0e5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c641 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 0059281b [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_viewModel_FUN_00598fc0 (00598fc0) at 00599461 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_load_FUN_0059b8d0 (0059b8d0) at 0059b92f [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CSkeleton_load_FUN_00599b10 (00599b10) at 00599b6f [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b1fd0 (005b1fd0) at 005b2554 [UNCONDITIONAL_CALL]
//   core_texlist.cpp_CTextureList_load_FUN_005dbe00 (005dbe00) at 005dc0a2 [UNCONDITIONAL_CALL]
//   core_texlist.cpp_CTextureList_save_FUN_005dc0d0 (005dc0d0) at 005dc1f2 [UNCONDITIONAL_CALL]
//   engine_2d.c_initGraphicsSystem_FUN_00401010 (00401010) at 00401118 [UNCONDITIONAL_CALL]
//   engine_2d.c_loadOrBuildColorMap_FUN_00402930 (00402930) at 00402a2b [UNCONDITIONAL_CALL]
//   engine_2d.c_loadPaletteFile_FUN_004015a0 (004015a0) at 004015de [UNCONDITIONAL_CALL]
//   engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 (004105d0) at 00410809 [UNCONDITIONAL_CALL]
//   engine_console.cpp_CConsole_printf_FUN_00441890 (00441890) at 00441957 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 (004b3920) at 004b3b07 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b4780 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0 (004b35a0) at 004b36f2 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutList_load_FUN_004b2890 (004b2890) at 004b299c [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutList_parse_FUN_004b2a60 (004b2a60) at 004b2ae7 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutList_write_FUN_004b2eb0 (004b2eb0) at 004b2f4d [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_buildPodFromResponseFile_FUN_004b7ac0 (004b7ac0) at 004b7be0 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bb85f [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 (004ba740) at 004baa4a [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_closeExtractFile_FUN_004b7c60 (004b7c60) at 004b7c78 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_createPodConfigWizard_FUN_004bccf0 (004bccf0) at 004bce6a [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0 (004b76d0) at 004b79d4 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 (004b6e10) at 004b70cf [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractTexture_FUN_004b53e0 (004b53e0) at 004b54ac [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_load_FUN_004b6c00 (004b6c00) at 004b6cc3 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b9b98 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0 (004ba4f0) at 004ba5da [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b6303 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190 (004bd190) at 004bd49c [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620 (004ba620) at 004ba66f [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_extractFileWithTimestamp_FUN_004b7d50 (004b7d50) at 004b7e65 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_findMaxFieldInTimestampFile_FUN_004b2640 (004b2640) at 004b26c2 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_getLatestFileFromRepository_FUN_004b3220 (004b3220) at 004b32e5 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_readTimestampFile_FUN_004b23a0 (004b23a0) at 004b243f [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_safeCloseFile_FUN_004b1db0 (004b1db0) at 004b1dc8 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650 (004bc650) at 004bc9a1 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_loadBitmap_FUN_004ccff0 (004ccff0) at 004cd211 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_loadFromFile_FUN_004cd2c0 (004cd2c0) at 004cd423 [UNCONDITIONAL_CALL]
//   engine_ini.cpp_CIni_findLineNumberOfVariable_FUN_004fb470 (004fb470) at 004fb5b6 [UNCONDITIONAL_CALL]
//   engine_ini.cpp_CIni_getProfileString_FUN_004fb250 (004fb250) at 004fb2e2 [UNCONDITIONAL_CALL]
//   engine_ini.cpp_CIni_writeProfileString_FUN_004fb660 (004fb660) at 004fb842 [UNCONDITIONAL_CALL]
//   engine_model.c_loadModelChunk_FUN_00528970 (00528970) at 00528a2a [UNCONDITIONAL_CALL]
//   engine_model.c_loadModelFile_FUN_00527ec0 (00527ec0) at 00528027 [UNCONDITIONAL_CALL]
//   engine_palette.cpp_CPaletteManager_createOutputPalette_FUN_00545180 (00545180) at 00545303 [UNCONDITIONAL_CALL]
//   engine_pcx.c_saveScreenRaw16_FUN_00548d20 (00548d20) at 00548eba [UNCONDITIONAL_CALL]
//   engine_pcx.c_saveScreenRaw32_FUN_00548f00 (00548f00) at 00549086 [UNCONDITIONAL_CALL]
//   engine_pcx.c_saveScreenshotGeneral_FUN_005490c0 (005490c0) at 0054926c [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_computeFileCRC_FUN_005507f0 (005507f0) at 0055095f [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_getAuditRecord_FUN_00550590 (00550590) at 00550674 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_getDependencyRecord_FUN_005506c0 (005506c0) at 0055079d [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 (0054f650) at 0054f714 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_verifyChecksum_FUN_00550230 (00550230) at 005502e1 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_computeAndStoreCRC_FUN_00551000 (00551000) at 005511a2 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_crc32ComputeFileRange_FUN_0054f490 (0054f490) at 0054f57f [UNCONDITIONAL_CALL]
//   engine_texture.cpp_CTextureCache_loadTexture_FUN_005dcc00 (005dcc00) at 005dcdac [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_generateTextureAtlasLayout_FUN_00444d90 (00444d90) at 00445482 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_generateTextureAtlas_FUN_00445820 (00445820) at 00445a40 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160 (00446160) at 00446362 [UNCONDITIONAL_CALL]
//   shape_design.c_centerKeyframeModels_FUN_004681a0 (004681a0) at 004682f2 [UNCONDITIONAL_CALL]
//   shape_design.c_combineTextureMaps_FUN_00469ee0 (00469ee0) at 0046a16e [UNCONDITIONAL_CALL]
//   shape_design.c_cramTextureList_FUN_0046bb80 (0046bb80) at 0046dcc4 [UNCONDITIONAL_CALL]
//   shape_design.c_createKeyframeModel_FUN_00468320 (00468320) at 00468589 [UNCONDITIONAL_CALL]
//   shape_design.c_exportModelToBIN_FUN_0045aa80 (0045aa80) at 0045b83e [UNCONDITIONAL_CALL]
//   shape_design.c_exportModelToMDL_FUN_00459e80 (00459e80) at 0045a1f0 [UNCONDITIONAL_CALL]
//   shape_design.c_exportVertexListFile_FUN_0045a610 (0045a610) at 0045a79c [UNCONDITIONAL_CALL]
//   shape_design.c_loadModelBinary_FUN_00458170 (00458170) at 00458686 [UNCONDITIONAL_CALL]
//   shape_design.c_loadModelFile_FUN_00458ac0 (00458ac0) at 00458eca [UNCONDITIONAL_CALL]
//   shape_design.c_loadS3DModelFile_FUN_004593a0 (004593a0) at 004594a0 [UNCONDITIONAL_CALL]
//   shape_design.c_loadTextureData_FUN_0046b060 (0046b060) at 0046b276 [UNCONDITIONAL_CALL]
//   shape_design.c_showHelpFile_FUN_00457f00 (00457f00) at 00457fa7 [UNCONDITIONAL_CALL]
//   shape_design.c_simpleTexture_FUN_00467350 (00467350) at 004673ea [UNCONDITIONAL_CALL]
//   shape_dsemodel.cpp_CDSEModel_fitToExistingBIN_FUN_0048fed0 (0048fed0) at 0048ff18 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_FUN_005173f0 (005173f0) at 005174fd [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_FUN_0051b870 (0051b870) at 0051b889 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051a9d0 (0051a9d0) at 0051aa25 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051ad60 (0051ad60) at 0051adb5 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051b6f0 (0051b6f0) at 0051b712 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051b720 (0051b720) at 0051b754 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051c070 (0051c070) at 0051c0c5 [UNCONDITIONAL_CALL]
//   shape_multicrm.cpp_CMultiCram_run_FUN_0053ee70 (0053ee70) at 0053f17e [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_SomethingAboutLogTXTCreate_FUN_005c7910 (005c7910) at 005c7986 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_TriListSomething_FUN_005d77a0 (005d77a0) at 005d7c28 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CFileBitStream_close_FUN_0052edf0 (0052edf0) at 0052ee11 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CFileBitStream_init_FUN_0052ecf0 (0052ecf0) at 0052eda9 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CMP3Decoder_free_FUN_005349e0 (005349e0) at 00534a22 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_CMP3Decoder_parseHeader_FUN_00534630 (00534630) at 00534789 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_testMP3DecoderBenchmark_FUN_00534210 (00534210) at 005343cf [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_005a62c0 (005a62c0) at 005a6391 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_CalculateDistanceMaybe_FUN_005a45c0 (005a45c0) at 005a4c6e [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_HandleSoundError_FUN_005adba0 (005adba0) at 005add4d [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_ReadingOrDecodingSoundFile_FUN_005a4c80 (005a4c80) at 005a4f24 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_WavReadingFunc1_FUN_005a3fe0 (005a3fe0) at 005a4016 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20 (005acf20) at 005ad0e9 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0 (005aa3f0) at 005aa4ee [UNCONDITIONAL_CALL]
//   support_newmsg.cpp_readMessageFile_FUN_00543e40 (00543e40) at 00543f5d [UNCONDITIONAL_CALL]
//   wincore_winvideo.cpp_playMovie_FUN_005f4a00 (005f4a00) at 005f4a67 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_memdbg_cpp_0063629b
//   TerminatedCString s_Tried_to_close_NULL_file_006362af
//   TerminatedCString s_shape_memdbg_cpp_00636366
//   TerminatedCString s_Tried_to_close_file_whic_0063637a
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   BOOL g_RecursiveCallFlag
//   HANDLE g_FileMutex
//   int g_OpenFileCount
//   FileTrackingEntry[100] g_FileRegistry
//   undefined4 g_FileRegistry[0].directory[0]
//   undefined4 g_FileRegistry[0].mode[0]
//   undefined4 g_FileRegistry[0].source_file[0]
//   undefined4 g_FileRegistry[0].line_number
//   undefined4 g_FileRegistry[0].file_ptr
//   undefined4 g_FileRegistry[1].filename[0]
//   undefined4 g_FileRegistry[1].directory[0]
//   undefined4 g_FileRegistry[1].source_file[0]
//   undefined4 g_FileRegistry[1].line_number
//   undefined4 g_FileRegistry[1].file_ptr
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_closeTrackedFile_FUN_00601ea0
//   crt_string.c_memmove_FUN_005fe5e0
//   shape_memdbg.cpp_traceFile_FUN_0050f180
//   wincore_winrun.cpp_createMutex_FUN_005f3fe0
//   wincore_winrun.cpp_releaseMutex_FUN_005f4050
//   wincore_winrun.cpp_waitForMutex_FUN_005f3ff0

#include "nocturne.h"

int __cdecl
shape_memdbg_cpp_closeFile_FUN_0050f9b0(FILE *file_ptr,char *source_file,int line_number)

{
  int iVar1;
  int iVar2;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  if (g_RecursiveCallFlag == 0) {
    if (g_FileMutex == (HANDLE)0x0) {
      g_FileMutex = wincore_winrun_cpp_createMutex_FUN_005f3fe0();
    }
    wincore_winrun_cpp_waitForMutex_FUN_005f3ff0(g_FileMutex);
  }
  if (file_ptr == (FILE *)0x0) {
    wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
    if (g_RecursiveCallFlag != 0) {
      return 0;
    }
    g_CurrentFilename = "..\\shape\\memdbg.cpp";
    g_CurrentLineNumber = 0x216;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Tried to close NULL file pointer at %s line %d",in_stack_00000014,line_number);
  }
  iVar2 = 0;
  if (0 < g_OpenFileCount) {
    iVar1 = 0;
    do {
      if (file_ptr == *(FILE **)((int)&g_FileRegistry[0].file_ptr + iVar1)) {
        if (g_FileRegistry[0].directory[iVar1] == '\0') {
          shape_memdbg_cpp_traceFile_FUN_0050f180
                    ("Closing %s at %s line %d, originally opened for %s at %s line %d",g_FileRegistry[0].filename + iVar1,
                     in_stack_00000010,line_number,iVar1 + 0x2f0db54,iVar1 + 0x2f0db68,
                     *(undefined4 *)((int)&g_FileRegistry[0].line_number + iVar1));
        }
        else {
          shape_memdbg_cpp_traceFile_FUN_0050f180
                    ("Closing %s in %s at %s line %d, originally opened for %s in %s line %d",iVar1 + 0x2f0da50,
                     g_FileRegistry[0].filename + iVar1,in_stack_00000010,line_number,
                     iVar1 + 0x2f0db54,iVar1 + 0x2f0db68,
                     *(undefined4 *)((int)&g_FileRegistry[0].line_number + iVar1));
        }
        g_OpenFileCount = g_OpenFileCount + -1;
        crt_string_c_memmove_FUN_005fe5e0
                  (g_FileRegistry + iVar2,g_FileRegistry + iVar2 + 1,
                   (g_OpenFileCount - iVar2) * 0x328);
        wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
        iVar2 = crt_stdio_c_closeTrackedFile_FUN_00601ea0(file_ptr);
        return iVar2;
      }
      iVar1 = iVar1 + 0x328;
      iVar2 = iVar2 + 1;
    } while (iVar1 < g_OpenFileCount * 0x328);
  }
  wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
  if (g_RecursiveCallFlag == 0) {
    g_CurrentFilename = "..\\shape\\memdbg.cpp";
    g_CurrentLineNumber = 0x235;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Tried to close file which which was never opened.  (Possibly closing a file twice?)\n%s line %d",in_stack_00000014,line_number);
  }
  return 0;
}


// Assembly code:
// 0050f9b0: PUSH EBX
//   Label: shape_memdbg.cpp_closeFile_FUN_0050f9b0
// 0050f9b1: PUSH ESI
// 0050f9b2: PUSH EDI
// 0050f9b3: PUSH EBP
// 0050f9b4: SUB ESP,0x4
// 0050f9b7: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0050f9bb: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0050f9bf: CMP dword ptr [0x02f0ca50],0x0
//   XREF to: 02f0ca50 (READ)
// 0050f9c6: JZ 0x0050fa98
//   XREF to: 0050fa98 (CONDITIONAL_JUMP)
// 0050f9cc: TEST ESI,ESI
//   Label: LAB_0050f9cc
// 0050f9ce: JZ 0x0050fabf
//   XREF to: 0050fabf (CONDITIONAL_JUMP)
// 0050f9d4: MOV EBP,dword ptr [0x02f0d948]
//   Label: LAB_0050f9d4
//   XREF to: 02f0d948 (READ)
// 0050f9da: XOR EBX,EBX
// 0050f9dc: TEST EBP,EBP
// 0050f9de: JLE 0x0050fb1d
//   XREF to: 0050fb1d (CONDITIONAL_JUMP)
// 0050f9e4: XOR EAX,EAX
// 0050f9e6: IMUL EDX,EBP,0x328
// 0050f9ec: CMP ESI,dword ptr [EAX + 0x2f0dc70]
//   Label: LAB_0050f9ec
//   XREF to: 02f0dc70 (READ)
//   XREF to: 02f0df98 (READ)
// 0050f9f2: JNZ 0x0050fb0f
//   XREF to: 0050fb0f (CONDITIONAL_JUMP)
// 0050f9f8: MOV EDX,0x2f0d94c
//   XREF to: 02f0d94c (DATA)
// 0050f9fd: ADD EDX,EAX
// 0050f9ff: LEA ECX,[EDX + 0x208]
//   XREF to: 02f0db54 (DATA)
// 0050fa05: LEA EBP,[EDX + 0x21c]
//   XREF to: 02f0db68 (DATA)
// 0050fa0b: MOV dword ptr [ESP],EBP
//   XREF to: Stack[-0x14] (DATA)
//   XREF to: 02f0db68 (DATA)
//   XREF to: 02f0de90 (DATA)
// 0050fa0e: CMP byte ptr [EAX + 0x2f0da50],0x0
//   XREF to: 02f0da50 (READ)
//   XREF to: 02f0dd78 (READ)
// 0050fa15: JNZ 0x0050fb68
//   XREF to: 0050fb68 (CONDITIONAL_JUMP)
// 0050fa1b: MOV EBP,dword ptr [EAX + 0x2f0dc6c]
//   XREF to: 02f0dc6c (READ)
//   XREF to: 02f0df94 (READ)
// 0050fa21: PUSH EBP
// 0050fa22: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 0050fa26: PUSH EAX
//   XREF to: 02f0db68 (DATA)
//   XREF to: 02f0de90 (DATA)
// 0050fa27: PUSH ECX
//   XREF to: 02f0db54 (DATA)
//   XREF to: 02f0de7c (DATA)
// 0050fa28: PUSH EDI
// 0050fa29: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 0050fa2d: PUSH ECX
// 0050fa2e: PUSH EDX
//   XREF to: 02f0d94c (DATA)
// 0050fa2f: PUSH 0x6362de
//   XREF to: 006362de (DATA)
// 0050fa34: CALL shape_memdbg.cpp_traceFile_FUN_0050f180
//   XREF to: 0050f180 (UNCONDITIONAL_CALL)
// 0050fa39: ADD ESP,0x1c
// 0050fa3c: MOV EDI,dword ptr [0x02f0d948]
//   Label: LAB_0050fa3c
//   XREF to: 02f0d948 (READ)
// 0050fa42: DEC EDI
// 0050fa43: MOV EAX,EDI
// 0050fa45: SUB EAX,EBX
// 0050fa47: IMUL EAX,EAX,0x328
// 0050fa4d: PUSH EAX
// 0050fa4e: LEA EAX,[EBX + 0x1]
// 0050fa51: IMUL EAX,EAX,0x328
// 0050fa57: IMUL EBX,EBX,0x328
// 0050fa5d: ADD EAX,0x2f0d94c
//   XREF to: 02f0d94c (DATA)
// 0050fa62: PUSH EAX
//   XREF to: 02f0dc74 (DATA)
// 0050fa63: ADD EBX,0x2f0d94c
//   XREF to: 02f0d94c (DATA)
// 0050fa69: PUSH EBX
//   XREF to: 02f0d94c (DATA)
// 0050fa6a: MOV dword ptr [0x02f0d948],EDI
//   XREF to: 02f0d948 (WRITE)
// 0050fa70: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 0050fa75: ADD ESP,0xc
// 0050fa78: MOV EBP,dword ptr [0x02f0d93c]
//   XREF to: 02f0d93c (READ)
// 0050fa7e: PUSH EBP
// 0050fa7f: CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050
//   XREF to: 005f4050 (UNCONDITIONAL_CALL)
// 0050fa84: ADD ESP,0x4
// 0050fa87: PUSH ESI
// 0050fa88: CALL crt_stdio.c_closeTrackedFile_FUN_00601ea0
//   XREF to: 00601ea0 (UNCONDITIONAL_CALL)
// 0050fa8d: ADD ESP,0x4
// 0050fa90: ADD ESP,0x4
// 0050fa93: POP EBP
// 0050fa94: POP EDI
// 0050fa95: POP ESI
// 0050fa96: POP EBX
// 0050fa97: RET
// 0050fa98: CMP dword ptr [0x02f0d93c],0x0
//   Label: LAB_0050fa98
//   XREF to: 02f0d93c (READ)
// 0050fa9f: JNZ 0x0050faab
//   XREF to: 0050faab (CONDITIONAL_JUMP)
// 0050faa1: CALL wincore_winrun.cpp_createMutex_FUN_005f3fe0
//   XREF to: 005f3fe0 (UNCONDITIONAL_CALL)
// 0050faa6: MOV [0x02f0d93c],EAX
//   XREF to: 02f0d93c (WRITE)
// 0050faab: MOV EBX,dword ptr [0x02f0d93c]
//   Label: LAB_0050faab
//   XREF to: 02f0d93c (READ)
// 0050fab1: PUSH EBX
// 0050fab2: CALL wincore_winrun.cpp_waitForMutex_FUN_005f3ff0
//   XREF to: 005f3ff0 (UNCONDITIONAL_CALL)
// 0050fab7: ADD ESP,0x4
// 0050faba: JMP 0x0050f9cc
//   XREF to: 0050f9cc (UNCONDITIONAL_JUMP)
// 0050fabf: MOV EBP,dword ptr [0x02f0d93c]
//   Label: LAB_0050fabf
//   XREF to: 02f0d93c (READ)
// 0050fac5: PUSH EBP
// 0050fac6: CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050
//   XREF to: 005f4050 (UNCONDITIONAL_CALL)
// 0050facb: MOV EAX,[0x02f0ca50]
//   XREF to: 02f0ca50 (READ)
// 0050fad0: ADD ESP,0x4
// 0050fad3: TEST EAX,EAX
// 0050fad5: JZ 0x0050fae1
//   XREF to: 0050fae1 (CONDITIONAL_JUMP)
// 0050fad7: XOR EAX,EAX
// 0050fad9: ADD ESP,0x4
// 0050fadc: POP EBP
// 0050fadd: POP EDI
// 0050fade: POP ESI
// 0050fadf: POP EBX
// 0050fae0: RET
// 0050fae1: PUSH EDI
//   Label: LAB_0050fae1
// 0050fae2: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0050fae6: PUSH EBX
// 0050fae7: MOV EDX,0x63629b
//   XREF to: 0063629b (PARAM)
// 0050faec: MOV ECX,0x216
// 0050faf1: PUSH 0x6362af
//   XREF to: 006362af (DATA)
// 0050faf6: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0050fafc: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0050fb02: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0050fb07: ADD ESP,0xc
// 0050fb0a: JMP 0x0050f9d4
//   XREF to: 0050f9d4 (UNCONDITIONAL_JUMP)
// 0050fb0f: ADD EAX,0x328
//   Label: LAB_0050fb0f
// 0050fb14: INC EBX
// 0050fb15: CMP EAX,EDX
// 0050fb17: JL 0x0050f9ec
//   XREF to: 0050f9ec (CONDITIONAL_JUMP)
// 0050fb1d: MOV EAX,[0x02f0d93c]
//   Label: LAB_0050fb1d
//   XREF to: 02f0d93c (READ)
// 0050fb22: PUSH EAX
// 0050fb23: CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050
//   XREF to: 005f4050 (UNCONDITIONAL_CALL)
// 0050fb28: MOV EDX,dword ptr [0x02f0ca50]
//   XREF to: 02f0ca50 (READ)
// 0050fb2e: ADD ESP,0x4
// 0050fb31: TEST EDX,EDX
// 0050fb33: JNZ 0x0050fb5e
//   XREF to: 0050fb5e (CONDITIONAL_JUMP)
// 0050fb35: PUSH EDI
// 0050fb36: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0050fb3a: PUSH ESI
// 0050fb3b: MOV ECX,0x636366
//   XREF to: 00636366 (PARAM)
// 0050fb40: MOV EBX,0x235
// 0050fb45: PUSH 0x63637a
//   XREF to: 0063637a (DATA)
// 0050fb4a: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0050fb50: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0050fb56: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0050fb5b: ADD ESP,0xc
// 0050fb5e: XOR EAX,EAX
//   Label: LAB_0050fb5e
// 0050fb60: ADD ESP,0x4
// 0050fb63: POP EBP
// 0050fb64: POP EDI
// 0050fb65: POP ESI
// 0050fb66: POP EBX
// 0050fb67: RET
// 0050fb68: MOV EBP,dword ptr [EAX + 0x2f0dc6c]
//   Label: LAB_0050fb68
//   XREF to: 02f0dc6c (READ)
// 0050fb6e: PUSH EBP
// 0050fb6f: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 0050fb73: PUSH EAX
//   XREF to: 02f0db68 (DATA)
// 0050fb74: PUSH ECX
//   XREF to: 02f0db54 (DATA)
// 0050fb75: PUSH EDI
// 0050fb76: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 0050fb7a: PUSH ECX
// 0050fb7b: PUSH EDX
//   XREF to: 02f0d94c (DATA)
// 0050fb7c: ADD EDX,0x104
// 0050fb82: PUSH EDX
//   XREF to: 02f0da50 (DATA)
// 0050fb83: PUSH 0x63631f
//   XREF to: 0063631f (DATA)
// 0050fb88: CALL shape_memdbg.cpp_traceFile_FUN_0050f180
//   XREF to: 0050f180 (UNCONDITIONAL_CALL)
// 0050fb8d: ADD ESP,0x20
// 0050fb90: JMP 0x0050fa3c
//   XREF to: 0050fa3c (UNCONDITIONAL_JUMP)
