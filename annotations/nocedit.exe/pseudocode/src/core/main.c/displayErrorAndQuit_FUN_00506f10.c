// Name: core_main.c_displayErrorAndQuit_FUN_00506f10
// Address: 00506f10
// Address Range: [[00506f10, 005070ea]]
// Convention: __cdecl
// Signature: void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format, ...)
// Cross-references:
//   cockpit_ckptutil.c_generateScrollHeightMap_FUN_00432df0 (00432df0) at 00432fcf [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_generateTransparencySpans_FUN_00435730 (00435730) at 00435873 [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_loadACTPaletteFile_FUN_00431ac0 (00431ac0) at 00431bb5 [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_loadEdgeListFile_FUN_004331f0 (004331f0) at 0043324a [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_loadRotatedBitmapFile_FUN_00434690 (00434690) at 0043474e [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_rasterizeEdgeEndpoints_FUN_004336e0 (004336e0) at 00433778 [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_readBitmapFile_FUN_00431870 (00431870) at 004318cf [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_rotateBitmap_FUN_00434870 (00434870) at 0043499c [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_saveEdgeListFile_FUN_00433480 (00433480) at 004334de [UNCONDITIONAL_CALL]
//   cockpit_ckptutil.c_traceConnectedEdges_FUN_00434af0 (00434af0) at 00434c1b [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_00487e20 (00487e20) at 004880ed [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00488110 (00488110) at 0048821e [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawVerticalLine_FUN_00488230 (00488230) at 0048832e [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_fillPoly_FUN_00488cd0 (00488cd0) at 00488fbb [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_00488ad0 (00488ad0) at 00488c59 [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 (004874d0) at 00487585 [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_setColorRGB_FUN_00487220 (00487220) at 00487370 [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_setColor_FUN_00487010 (00487010) at 00487209 [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_CPackedBitmap_copyNoClip_FUN_0054ae70 (0054ae70) at 0054af96 [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0054b190 (0054b190) at 0054b30d [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_0054b860 (0054b860) at 0054b8c8 [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0054b690 (0054b690) at 0054b6f5 [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_CPackedBitmap_saveToPBMFile_FUN_0054b520 (0054b520) at 0054b5a7 [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_0054b5c0 (0054b5c0) at 0054b67d [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_FUN_0054b930 (0054b930) at 0054b99b [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_loadPBGFile_FUN_0054bb40 (0054bb40) at 0054bc36 [UNCONDITIONAL_CALL]
//   cockpit_pkbitmap.cpp_parsePBGFile_FUN_0054b9b0 (0054b9b0) at 0054ba0d [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_0054bdb0 (0054bdb0) at 0054be4d [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_loadJoinedRAW_FUN_0054bf40 (0054bf40) at 0054c00c [UNCONDITIONAL_CALL]
//   cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_0054c1e0 (0054c1e0) at 0054c266 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0 (0040e6c0) at 0040e759 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CActorProperty_FUN_0040ea50 (0040ea50) at 0040ee1f [UNCONDITIONAL_CALL]
//   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 (0040eed0) at 004102f4 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_customGetFloorHeight_FUN_00408d50 (00408d50) at 00408d83 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10 (00408d10) at 00408d43 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_customRayIntersect_FUN_00408cc0 (00408cc0) at 00408cf9 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 (0040ac80) at 0040aea1 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_getActorType_FUN_00408b50 (00408b50) at 00408b83 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_load_FUN_0040b050 (0040b050) at 0040b167 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_processActionButton_FUN_00409f60 (00409f60) at 00409f93 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470 (00409470) at 004096ec [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_save_FUN_0040af30 (0040af30) at 0040af71 [UNCONDITIONAL_CALL]
//   core_actor.cpp_createActorByName_FUN_0040c430 (0040c430) at 0040c4c0 [UNCONDITIONAL_CALL]
//   core_actor.cpp_handleActorPropertyParseError_FUN_0040b210 (0040b210) at 0040b26e [UNCONDITIONAL_CALL]
//   core_actor.cpp_registerActorClass_FUN_0040c2e0 (0040c2e0) at 0040c3aa [UNCONDITIONAL_CALL]
//   core_ammobox.cpp_AllocateMemoryMaybe_FUN_00411700 (00411700) at 0041178a [UNCONDITIONAL_CALL]
//   core_baron.cpp_CBaronWeapon_setWeaponState_FUN_00413e90 (00413e90) at 00413ee0 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CBodyPart_FUN_0041af90 (0041af90) at 0041aff1 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CBodyPart_setCounts_FUN_004191d0 (004191d0) at 004192e7 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CreateBodyPart_FUN_00418e10 (00418e10) at 00418e60 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_CBoneGuy_FUN_0041d680 (0041d680) at 0041d890 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_CBoneGuy_explode_FUN_0041bd90 (0041bd90) at 0041bf63 [UNCONDITIONAL_CALL]
//   core_box.cpp_CBox_setupN_FUN_0041df50 (0041df50) at 0041e0cb [UNCONDITIONAL_CALL]
//   core_bugs.cpp_CBugs_addSwarmGraphEdge_FUN_00425740 (00425740) at 0042577e [UNCONDITIONAL_CALL]
//   core_chain.cpp_CChain_addFilesToExtractList_FUN_00431250 (00431250) at 004312f3 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0 (0042e5d0) at 0042e659 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042e370 (0042e370) at 0042e3ac [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_applyGesture_FUN_0042d3d0 (0042d3d0) at 0042d4c0 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_applyLookAt_FUN_0042dcd0 (0042dcd0) at 0042ddbc [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0 (0042e8c0) at 0042e8fe [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_computePickup_FUN_0042ce80 (0042ce80) at 0042cfba [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0 (0042d5a0) at 0042da7a [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0 (0042cdb0) at 0042cde4 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_CClothList_add_FUN_0043c0f0 (0043c0f0) at 0043c15b [UNCONDITIONAL_CALL]
//   core_cloth.cpp_CClothList_load_FUN_0043bfa0 (0043bfa0) at 0043c027 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_CClothList_remove_FUN_0043c170 (0043c170) at 0043c19f [UNCONDITIONAL_CALL]
//   core_cloth.cpp_CCloth_allocMemory_FUN_00438c50 (00438c50) at 00438c9e [UNCONDITIONAL_CALL]
//   core_cloth.cpp_CCloth_grabCloth_FUN_0043e0d0 (0043e0d0) at 0043e15b [UNCONDITIONAL_CALL]
//   core_cloth.cpp_CCloth_load_FUN_00438cf0 (00438cf0) at 00438d86 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_CCloth_saveJoinedLight_FUN_0043b9f0 (0043b9f0) at 0043baa0 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_ConnectingVerticesCheck_FUN_004394e0 (004394e0) at 004396ea [UNCONDITIONAL_CALL]
//   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590 (0043d590) at 0043dc4a [UNCONDITIONAL_CALL]
//   core_cloth.cpp_OrientBoneCheck_FUN_0043a110 (0043a110) at 0043a1c4 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_ParseClothFile_FUN_00439260 (00439260) at 004394d3 [UNCONDITIONAL_CALL]
//   core_course.cpp_CCourse_allocMemory_FUN_00442500 (00442500) at 0044256d [UNCONDITIONAL_CALL]
//   core_course.cpp_CCourse_importMatrices_FUN_00442ea0 (00442ea0) at 00442f2d [UNCONDITIONAL_CALL]
//   core_course.cpp_CCourse_load_FUN_00442580 (00442580) at 004426a7 [UNCONDITIONAL_CALL]
//   core_curtain.cpp_FindCurtainTextures_FUN_0044b960 (0044b960) at 0044ba25 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70 (0044cc70) at 0044cde3 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 (0044c430) at 0044c56d [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80 (0044cb80) at 0044cc47 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_init_FUN_0044c190 (0044c190) at 0044c34b [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0 (0044f3e0) at 0044f44a [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_004511c0 (004511c0) at 00451226 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0044de10 (0044de10) at 0044df32 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0 (004529b0) at 00452ec3 [UNCONDITIONAL_CALL]
//   core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00456840 (00456840) at 004569a3 [UNCONDITIONAL_CALL]
//   core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_004567b0 (004567b0) at 004567ee [UNCONDITIONAL_CALL]
//   core_dcube.cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0 (004570a0) at 00457147 [UNCONDITIONAL_CALL]
//   core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457650 (00457650) at 0045787f [UNCONDITIONAL_CALL]
//   core_dcube.cpp_clipEdgeToPlane_FUN_004547d0 (004547d0) at 00454940 [UNCONDITIONAL_CALL]
//   core_dest.cpp_CDestActor_renderTransparent_FUN_0046fb70 (0046fb70) at 0046fc70 [UNCONDITIONAL_CALL]
//   core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00470260 (00470260) at 004702ac [UNCONDITIONAL_CALL]
//   core_dfilter.cpp_CDemonFilter_load_FUN_004702f0 (004702f0) at 00470381 [UNCONDITIONAL_CALL]
//   core_dfilter.cpp_CDemonFilter_save_FUN_00470510 (00470510) at 00470576 [UNCONDITIONAL_CALL]
//   core_dfilter.cpp_CFilterCache_getFilter_FUN_00470060 (00470060) at 00470193 [UNCONDITIONAL_CALL]
//   core_dfilter.cpp_CFilterFX_openMovie_FUN_00470730 (00470730) at 004707a1 [UNCONDITIONAL_CALL]
//   core_dfont.cpp_initFonts_FUN_004709a0 (004709a0) at 00470e61 [UNCONDITIONAL_CALL]
//   core_dimage.cpp_CDemonImage_allocMemory_FUN_004719e0 (004719e0) at 00471a33 [UNCONDITIONAL_CALL]
//   core_dimage.cpp_CDemonImage_load_FUN_00471ad0 (00471ad0) at 00471bb4 [UNCONDITIONAL_CALL]
//   core_dirmat.cpp_CMatrix3x3f_invert_FUN_00471e10 (00471e10) at 00471fb6 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_004729d0 (004729d0) at 00472a3d [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_allocateFilter_FUN_00474720 (00474720) at 00474762 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_00472e40 (00472e40) at 00472f21 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80 (00472a80) at 00472c2c [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_blitZBuffer_FUN_00472c70 (00472c70) at 00472d20 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_endScene_FUN_00472d30 (00472d30) at 00472e25 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_init_FUN_004727c0 (004727c0) at 00472896 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80 (00472f80) at 004731ec [UNCONDITIONAL_CALL]
//   core_dlight.cpp_getRestoreMemory_FUN_00472950 (00472950) at 004729ac [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 (00478d80) at 00478db6 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_allocate_FUN_00477bf0 (00477bf0) at 00477da1 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830 (00478830) at 0047891d [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60 (00477e60) at 00477fba [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_exportToDSE_FUN_0047e810 (0047e810) at 0047e9f5 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_export_FUN_00478e10 (00478e10) at 00478ea3 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_getFloorHeight_FUN_00478740 (00478740) at 00478789 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10 (0047ea10) at 0047ec35 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 (00479330) at 004799e3 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_00478650 (00478650) at 004786ba [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0 (00476db0) at 00476e6f [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0 (0047b1e0) at 0047b2ce [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_00476f20 (00476f20) at 00476f6c [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00477110 (00477110) at 004775a1 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30 (0047aa30) at 0047acd5 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40 (0047bf40) at 0047c024 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0 (0047ada0) at 0047af9c [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_loadModel_FUN_00478c00 (00478c00) at 00478c65 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_writeModelDependencies_FUN_0047ee30 (0047ee30) at 0047ee87 [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_getMoveType_FUN_00481070 (00481070) at 004811ed [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_getOpenStandPos_FUN_00480e20 (00480e20) at 00480ffe [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_reposition_FUN_0047fd20 (0047fd20) at 0047fff4 [UNCONDITIONAL_CALL]
//   core_dpart.cpp_CDemonPart_alloc_FUN_00482180 (00482180) at 00482246 [UNCONDITIONAL_CALL]
//   core_dpart.cpp_CDemonPart_importTriangleMesh_FUN_00482a10 (00482a10) at 00482a84 [UNCONDITIONAL_CALL]
//   core_dpart.cpp_CDemonPart_load_FUN_00482490 (00482490) at 004824ab [UNCONDITIONAL_CALL]
//   core_dpart.cpp_CDemonPart_save_FUN_004824c0 (004824c0) at 004824db [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_addTriangle_FUN_00495100 (00495100) at 00495297 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_allocCubeList_FUN_00494270 (00494270) at 004942bc [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380 (00494380) at 004943ed [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_allocTriList_FUN_00494600 (00494600) at 00494681 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310 (00495310) at 0049543d [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0 (00494de0) at 00494ee3 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 (004947a0) at 00494dc5 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00497500 (00497500) at 00497b77 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_saveBinary_FUN_00494f50 (00494f50) at 00495024 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_savePVS_FUN_00498fb0 (00498fb0) at 0049902d [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_save_FUN_00495040 (00495040) at 0049509f [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_setPVS_FUN_00498e50 (00498e50) at 00498f94 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0049a160 (0049a160) at 0049a23e [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_transferVoxelShadowBit_FUN_0049a280 (0049a280) at 0049a35d [UNCONDITIONAL_CALL]
//   core_dtri.cpp_clipLineToPlane_FUN_0049b6c0 (0049b6c0) at 0049b830 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004aacc0 (004aacc0) at 004aae41 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004ae140 (004ae140) at 004ae778 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004b0330 (004b0330) at 004b040f [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004b0470 (004b0470) at 004b054f [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_loadState_FUN_004b0fc0 (004b0fc0) at 004b1309 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_setActorVariable_FUN_004b09a0 (004b09a0) at 004b09e3 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_setCounter_FUN_004b0720 (004b0720) at 004b07d6 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_setSfxHandle_FUN_004b0c80 (004b0c80) at 004b0cc9 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_setTimerEvent_FUN_004b05a0 (004b05a0) at 004b06c0 [UNCONDITIONAL_CALL]
//   core_event.cpp_CRuleList_insert_FUN_004b1680 (004b1680) at 004b17ae [UNCONDITIONAL_CALL]
//   core_event.cpp_CRuleList_remove_FUN_004b17c0 (004b17c0) at 004b1878 [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_addClothFileToExtractList_FUN_004be150 (004be150) at 004be1ad [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_addDeformableModelToExtractList_FUN_004be070 (004be070) at 004be0de [UNCONDITIONAL_CALL]
//   core_fileman.cpp_preprocessMusicFiles_FUN_004bd750 (004bd750) at 004bd8a0 [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_CFilmProjector_load_FUN_004beb40 (004beb40) at 004bec47 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CGunFlame_initProcess_FUN_004c4b00 (004c4b00) at 004c4baf [UNCONDITIONAL_CALL]
//   core_fire.cpp_CSmokeParticle_render_FUN_004bf4c0 (004bf4c0) at 004bf556 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CToss_create_FUN_004c3ee0 (004c3ee0) at 004c3f2a [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_CFrankenstienMachine_findLeader_FUN_004d2330 (004d2330) at 004d2385 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_CFrankenstienMachine_setCourseFrame_FUN_004d2430 (004d2430) at 004d24d8 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_LoadModel_FUN_004d2190 (004d2190) at 004d2307 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_PlaySounds_FUN_004d1a40 (004d1a40) at 004d1ea3 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_CGabriella_FUN_004d7120 (004d7120) at 004d750e [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_PickupSomething_FUN_004d5870 (004d5870) at 004d5bfc [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_displayBitmap_FUN_004e2890 (004e2890) at 004e28ff [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e16a9 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_openSomething_FUN_004e2910 (004e2910) at 004e2b7a [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_playerControls_FUN_004dbd80 (004dbd80) at 004dbe51 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_rollCredits_FUN_004e4010 (004e4010) at 004e4380 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_setGameRes_FUN_004dade0 (004dade0) at 004dae64 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_slamDT_FUN_004e3080 (004e3080) at 004e30dc [UNCONDITIONAL_CALL]
//   core_game.cpp_giveHeroWeapon_FUN_004dd870 (004dd870) at 004dd91b [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_writeDependencies_FUN_004eb690 (004eb690) at 004eb7d0 [UNCONDITIONAL_CALL]
//   core_gore.cpp_CreateFlies_FUN_004edf30 (004edf30) at 004edf7b [UNCONDITIONAL_CALL]
//   core_ground.cpp_CGround_init_FUN_004eef00 (004eef00) at 004eefa1 [UNCONDITIONAL_CALL]
//   core_ground.cpp_CGround_load_FUN_004ef030 (004ef030) at 004ef102 [UNCONDITIONAL_CALL]
//   core_ground.cpp_openFileWithExtension_FUN_004eebc0 (004eebc0) at 004eec24 [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHeroPlaceholder_createHero_FUN_004f3d80 (004f3d80) at 004f3dd8 [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHero_FUN_004f2a30 (004f2a30) at 004f2ad7 [UNCONDITIONAL_CALL]
//   core_hero.cpp_closestHeroToPoint_FUN_004f2170 (004f2170) at 004f220d [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f8b20 (004f8b20) at 004f8c63 [UNCONDITIONAL_CALL]
//   core_inivar.cpp_readIniData_FUN_004fbd90 (004fbd90) at 004fc500 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_createAmmoFromWeapon_FUN_004fe900 (004fe900) at 004fe959 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_load_FUN_004ff400 (004ff400) at 004ff729 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_select_FUN_004ff800 (004ff800) at 004ff8e1 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_setupItems_FUN_004ff780 (004ff780) at 004ff7f0 [UNCONDITIONAL_CALL]
//   core_inv.cpp_getItemModel_FUN_004fcda0 (004fcda0) at 004fcee6 [UNCONDITIONAL_CALL]
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 00507b12 [UNCONDITIONAL_CALL]
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 005077ea [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_0050b040 (0050b040) at 0050b070 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_0050a290 (0050a290) at 0050a33e [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0 (0050aba0) at 0050ac15 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40 (0050ad40) at 0050ade5 [UNCONDITIONAL_CALL]
//   core_melee.cpp_CMelee_fire_FUN_0050ea40 (0050ea40) at 0050ea5b [UNCONDITIONAL_CALL]
//   core_menu.cpp_FUN_00513460 (00513460) at 005134cf [UNCONDITIONAL_CALL]
//   core_menu.cpp_SettingCustomKeys_FUN_005138e0 (005138e0) at 00514580 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_beginMorph_FUN_00520a80 (00520a80) at 00520b86 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_processMorph_FUN_00520ba0 (00520ba0) at 00520c1b [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_setup2_FUN_0051f780 (0051f780) at 0051f832 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_setup_FUN_0051f3e0 (0051f3e0) at 0051f765 [UNCONDITIONAL_CALL]
//   core_mirror.cpp_computePlaneIntersection_FUN_00521160 (00521160) at 0052124b [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_00524120 (00524120) at 005241dd [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60 (00523e60) at 00523ef6 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_createHeros_FUN_00524a80 (00524a80) at 00524bfb [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_createOneHero_FUN_00524920 (00524920) at 005249d4 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_getNextLoadedInventoryActor_FUN_00523520 (00523520) at 005235a5 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_loadActor_FUN_00523990 (00523990) at 00523a10 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_load_FUN_00522d90 (00522d90) at 00522e22 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0 (005240a0) at 00524110 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0 (00522eb0) at 005233e0 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_run_FUN_00524420 (00524420) at 00524520 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_save_FUN_00522e30 (00522e30) at 00522ea1 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_writeFile_FUN_00523600 (00523600) at 0052384c [UNCONDITIONAL_CALL]
//   core_mission.cpp_FUN_00524c20 (00524c20) at 00524ce9 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_CMobster_aimTommyGun_FUN_005267a0 (005267a0) at 0052681e [UNCONDITIONAL_CALL]
//   core_morph.cpp_CMorphModel_FUN_0052a710 (0052a710) at 0052a7e4 [UNCONDITIONAL_CALL]
//   core_morph.cpp_CMorphModel_FUN_0052aca0 (0052aca0) at 0052ad13 [UNCONDITIONAL_CALL]
//   core_morph.cpp_CMorphModel_addPart_FUN_0052a580 (0052a580) at 0052a6c7 [UNCONDITIONAL_CALL]
//   core_morph.cpp_CMorphModel_animate_FUN_0052a920 (0052a920) at 0052a995 [UNCONDITIONAL_CALL]
//   core_morph.cpp_CMorphModel_findOrAddTexture_FUN_0052ae60 (0052ae60) at 0052aeb5 [UNCONDITIONAL_CALL]
//   core_morph.cpp_CMorphModel_rotatePoints_FUN_0052af70 (0052af70) at 0052b0e5 [UNCONDITIONAL_CALL]
//   core_morph.cpp_CMorphModel_setFaceList_FUN_0052aac0 (0052aac0) at 0052ab33 [UNCONDITIONAL_CALL]
//   core_morph.cpp_CMorph_getReady_FUN_0052b680 (0052b680) at 0052b76a [UNCONDITIONAL_CALL]
//   core_motion.cpp_CMotionController_advance_FUN_0052d610 (0052d610) at 0052d84d [UNCONDITIONAL_CALL]
//   core_motion.cpp_CMotionController_findPatchToFrame_FUN_0052dc80 (0052dc80) at 0052dc9b [UNCONDITIONAL_CALL]
//   core_motion.cpp_CMotionController_load_FUN_0052e5d0 (0052e5d0) at 0052e65a [UNCONDITIONAL_CALL]
//   core_motion.cpp_CMotionController_save_FUN_0052e670 (0052e670) at 0052e69d [UNCONDITIONAL_CALL]
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 (0052db00) at 0052db66 [UNCONDITIONAL_CALL]
//   core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460 (0052d460) at 0052d4d1 [UNCONDITIONAL_CALL]
//   core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0 (0052d4f0) at 0052d553 [UNCONDITIONAL_CALL]
//   core_motion.cpp_CMotionList_load_FUN_0052cd70 (0052cd70) at 0052d124 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_CDemonMission_makeOptimizedPalette_FUN_0053ccc0 (0053ccc0) at 0053ccdb [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DeleteActors_FUN_0053df90 (0053df90) at 0053e0d7 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DuplicateActorCheckMaybe_FUN_0053bd80 (0053bd80) at 0053be71 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_00537dd0 (00537dd0) at 00537e28 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_HideActors_FUN_0053dcf0 (0053dcf0) at 0053de3c [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_OpenAndCreateWorld_FUN_00537f60 (00537f60) at 00538180 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e924 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053ac82 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0 (0053ccf0) at 0053d04e [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_addPlayer_FUN_005412b0 (005412b0) at 00541383 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_allocSimFrame_FUN_005406a0 (005406a0) at 00541144 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_applyNewGameSettings_FUN_00542470 (00542470) at 005424ae [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_applySimFrameHistory_FUN_00543800 (00543800) at 005438ab [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_gameSettingsChanged_FUN_00542cf0 (00542cf0) at 00542db0 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_getMyControls_FUN_005438c0 (005438c0) at 0054391f [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_processChatOut_FUN_00541e40 (00541e40) at 00541f9a [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_processClientFrame_FUN_005435a0 (005435a0) at 00543741 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_processServerFrame_FUN_00543150 (00543150) at 00543426 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_removeChatOut_FUN_00541ff0 (00541ff0) at 005421d5 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_removePlayer_FUN_00542b00 (00542b00) at 00542b65 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_sendGameSetting_FUN_00542dd0 (00542dd0) at 00542e08 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_sendMyStateChanged_FUN_00542ff0 (00542ff0) at 00543021 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_sendSimFrameAck_FUN_00543970 (00543970) at 005439a4 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_send_FUN_005411c0 (005411c0) at 00541219 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0 (005401e0) at 0054046e [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_updatePing_FUN_00541c80 (00541c80) at 00541cb6 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_allocSimFrame_FUN_0053f5a0 (0053f5a0) at 0053f607 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_removeChatOut_FUN_0053f4b0 (0053f4b0) at 0053f537 [UNCONDITIONAL_CALL]
//   core_particle.cpp_CParticle_render_FUN_00545a80 (00545a80) at 00545a9b [UNCONDITIONAL_CALL]
//   core_path.cpp_CPathMap_ctor_FUN_00546450 (00546450) at 005464bf [UNCONDITIONAL_CALL]
//   core_path.cpp_CPathMap_findPathToDestination_FUN_00547320 (00547320) at 00547bca [UNCONDITIONAL_CALL]
//   core_path.cpp_CPathMap_getDirection_FUN_005465b0 (005465b0) at 005468f9 [UNCONDITIONAL_CALL]
//   core_path.cpp_CPathMap_queuePop_FUN_005487a0 (005487a0) at 0054897a [UNCONDITIONAL_CALL]
//   core_path.cpp_FUN_005463d0 (005463d0) at 00546444 [UNCONDITIONAL_CALL]
//   core_path.cpp_FUN_005485f0 (005485f0) at 00548653 [UNCONDITIONAL_CALL]
//   core_path.cpp_FUN_00548680 (00548680) at 00548706 [UNCONDITIONAL_CALL]
//   core_path.cpp_GlobalPathmapListCorruption_FUN_00548590 (00548590) at 005485c4 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_CPlatform_attachActor_FUN_0054e1e0 (0054e1e0) at 0054e2c3 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_CPlatform_load_FUN_0054dbc0 (0054dbc0) at 0054df17 [UNCONDITIONAL_CALL]
//   core_procedur.cpp_CreateProceduralWaterFrame_FUN_005542b0 (005542b0) at 00554604 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_LoadingScriptFile_FUN_0055a370 (0055a370) at 0055a411 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_ReallocSomething_FUN_00567510 (00567510) at 0056758c [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_SkipCinematic_FUN_005602e0 (005602e0) at 00560376 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_checkInitSection_FUN_0055a6c0 (0055a6c0) at 0055a800 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_dbLoad_FUN_005603c0 (005603c0) at 005604a8 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_editorAction_FUN_00564820 (00564820) at 00564881 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_editorIndex2X_FUN_00566b30 (00566b30) at 00566b90 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_editorPutLine_FUN_005662a0 (005662a0) at 0056630a [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_editorX2Index_FUN_00566a90 (00566a90) at 00566af2 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_loadState_FUN_00560820 (00560820) at 00560ae0 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_processTimer_FUN_005600c0 (005600c0) at 00560123 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_removeEventXRef_FUN_005676e0 (005676e0) at 00567761 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055a849 [UNCONDITIONAL_CALL]
//   core_script.cpp_SCmdParm_setTemplateText_FUN_00560de0 (00560de0) at 005615c6 [UNCONDITIONAL_CALL]
//   core_script.cpp_SCmdParse_bestParse_FUN_00561db0 (00561db0) at 00561f8e [UNCONDITIONAL_CALL]
//   core_script.cpp_SCmdParse_parse_FUN_00561fd0 (00561fd0) at 00562265 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090 (0056d090) at 0056d0ff [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_buildMirrorList_FUN_00570b70 (00570b70) at 00570c23 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_initScene_FUN_0056aa10 (0056aa10) at 0056ac91 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_isCameraPanning_FUN_00571320 (00571320) at 0057135d [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_lightVertexColor_FUN_0056ddb0 (0056ddb0) at 0056ddec [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0 (0056eac0) at 0056f4c5 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_load_FUN_00569410 (00569410) at 00569e87 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 (0056a470) at 0056a643 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_rotateVertices_FUN_0056e7c0 (0056e7c0) at 0056e86b [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_saveStateInfo_FUN_00571230 (00571230) at 00571301 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056b560 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 (005741b0) at 00574202 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_popRaytraceState_FUN_00573fc0 (00573fc0) at 00574150 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 (005716b0) at 00572307 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_pushRaytraceState_FUN_00573e10 (00573e10) at 00573fa1 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230 (00574230) at 00574260 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470 (00573470) at 00573d89 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0 (005751d0) at 00575527 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CDemonSet_writeThumbs_FUN_00575e40 (00575e40) at 00575f25 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CZThumb_restoreZBufferTable_FUN_00574830 (00574830) at 00574887 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CZThumb_saveZBufferTable_FUN_005747d0 (005747d0) at 0057481e [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00574910 (00574910) at 00574aa1 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0 (00576da0) at 00576ff2 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_ExportSomething_FUN_0057a0c0 (0057a0c0) at 0057a263 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00584e70 (00584e70) at 00584f2c [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940 (0057a940) at 0057ad38 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 0057a040 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_save_FUN_0057a2a0 (0057a2a0) at 0057a8d7 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DefineTexturesMaybe_FUN_00578290 (00578290) at 00578389 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057f307 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_EditingGroundTypesAndSaving_FUN_00578630 (00578630) at 00578909 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_0057a270 (0057a270) at 0057a28b [UNCONDITIONAL_CALL]
//   core_setedit.cpp_ImportA3DBroken_FUN_00578c60 (00578c60) at 00578c7b [UNCONDITIONAL_CALL]
//   core_setedit.cpp_ImportingGroundTextures_FUN_00578420 (00578420) at 005785e1 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_OpenSomethingBackdropThumbs_FUN_005769a0 (005769a0) at 00576d84 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_ResolveMasterLights_FUN_0057c550 (0057c550) at 0057c5b4 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_Something2MemoryConstructorMaybe_FUN_0057fd00 (0057fd00) at 0057fdab [UNCONDITIONAL_CALL]
//   core_setedit.cpp_SomethingMemoryConstructorMaybe_FUN_00580310 (00580310) at 00580370 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057dc4a [UNCONDITIONAL_CALL]
//   core_setedit.cpp_WriteActBackdrop_FUN_0057ce80 (0057ce80) at 0057d0e0 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSCamera_apply_FUN_00585870 (00585870) at 00585949 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSCamera_importS3D_FUN_00585ff0 (00585ff0) at 00586067 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSCamera_loadPVS_FUN_005857b0 (005857b0) at 0058585b [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSCamera_load_FUN_00585420 (00585420) at 0058578e [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_addFilter_FUN_00586fa0 (00586fa0) at 00587077 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_advanceFilter_FUN_00586e70 (00586e70) at 00586ef0 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_create_FUN_00586a90 (00586a90) at 00586adc [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_exportS3D_FUN_00587850 (00587850) at 0058793d [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_importS3D_FUN_00587710 (00587710) at 005877b1 [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_load_FUN_00586310 (00586310) at 00586a7f [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_process_FUN_00586cb0 (00586cb0) at 00586e4b [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSLight_setFilterFrame_FUN_00586f00 (00586f00) at 00586f66 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CBoneStructure_fixupMatrices_FUN_0058adb0 (0058adb0) at 0058ae68 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CBoneStructure_importBON_FUN_0058a3d0 (0058a3d0) at 0058a493 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CBoneStructure_readBONframe_FUN_0058aa10 (0058aa10) at 0058aa80 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CBoneStructure_readBONheader_FUN_0058a4a0 (0058a4a0) at 0058a9a5 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CBoneStructure_skipBONframe_FUN_0058abb0 (0058abb0) at 0058ac18 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_calcRootOffsetScale_FUN_0058e690 (0058e690) at 0058e70e [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModel_save_FUN_0058f040 (0058f040) at 0058f10f [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_ExportModel_FUN_00595fc0 (00595fc0) at 00596422 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589bb0 (00589bb0) at 00589c07 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00589c20 (00589c20) at 00589e6b [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058b2c0 (0058b2c0) at 0058b38f [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058b3a0 (0058b3a0) at 0058b649 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058b660 (0058b660) at 0058b71b [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058bd00 (0058bd00) at 0058bdad [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058ca6c [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058d790 (0058d790) at 0058d9e7 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058e0b0 (0058e0b0) at 0058e20c [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058e4e0 (0058e4e0) at 0058e535 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058ec60 (0058ec60) at 0058ecfa [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058f810 (0058f810) at 0058f84c [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 0059287a [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00598f10 (00598f10) at 00598f5a [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_LoadFileBoneStructureMaybe_FUN_005895f0 (005895f0) at 0058963a [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_ParseSkeletonBase_FUN_0058f120 (0058f120) at 0058f77d [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_viewModel_FUN_00598fc0 (00598fc0) at 00599205 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_0059deb0 (0059deb0) at 0059df1e [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50 (0059eb50) at 0059f215 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_blendWithQuaternions_FUN_0059f260 (0059f260) at 0059f6d0 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_005a1800 (005a1800) at 005a18ff [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 (005a07a0) at 005a0809 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_outlinePolygons_FUN_005a03b0 (005a03b0) at 005a03f7 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340 (005a0340) at 005a03a1 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_allocLOD_FUN_0059a510 (0059a510) at 0059a540 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_allocMemory_FUN_0059a3f0 (0059a3f0) at 0059a502 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0059d9e0 (0059d9e0) at 0059dbc7 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0 (0059c2f0) at 0059c36f [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0059d460 (0059d460) at 0059d514 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_dismember_FUN_0059c5e0 (0059c5e0) at 0059c801 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_0059cba0 (0059cba0) at 0059cbea [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240 (0059c240) at 0059c2b4 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810 (0059a810) at 0059a844 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_loadStream_FUN_0059b970 (0059b970) at 0059ba05 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_load_FUN_0059b8d0 (0059b8d0) at 0059b957 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_shatter_FUN_0059cec0 (0059cec0) at 0059cf31 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CSkeleton_allocMemory_FUN_00599910 (00599910) at 00599a42 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0 (00599fc0) at 0059a034 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CSkeleton_loadStream_FUN_00599bb0 (00599bb0) at 00599c44 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CSkeleton_load_FUN_00599b10 (00599b10) at 00599b97 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_getDeformableModel_FUN_005a1cf0 (005a1cf0) at 005a1d6a [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_loadSkeleton_FUN_005a1df0 (005a1df0) at 005a1e62 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_setReverbPreset_FUN_005b3cc0 (005b3cc0) at 005b3d0f [UNCONDITIONAL_CALL]
//   core_sound.cpp_PlaySfxByStringMaybe_FUN_005b1fd0 (005b1fd0) at 005b25c8 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bfb60 (005bfb60) at 005bfb9c [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c07b0 (005c07b0) at 005c15fd [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c1680 (005c1680) at 005c1eed [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_aimLeftPistol_FUN_005c4370 (005c4370) at 005c4730 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_AttackWithParentBone_FUN_005d9a10 (005d9a10) at 005d9b05 [UNCONDITIONAL_CALL]
//   core_texlist.cpp_CTextureList_addTextureSelection_FUN_005dc5e0 (005dc5e0) at 005dc676 [UNCONDITIONAL_CALL]
//   core_texlist.cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0 (005dc2a0) at 005dc4f1 [UNCONDITIONAL_CALL]
//   core_texlist.cpp_CTextureList_load_FUN_005dbe00 (005dbe00) at 005dbff1 [UNCONDITIONAL_CALL]
//   core_texlist.cpp_CTextureList_save_FUN_005dc0d0 (005dc0d0) at 005dc186 [UNCONDITIONAL_CALL]
//   core_texlist.cpp_CTextureList_setMasterTextureSelection_FUN_005dc6c0 (005dc6c0) at 005dc73d [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_containsActor_FUN_005e0cd0 (005e0cd0) at 005e0f2b [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_getCurFrame_FUN_005e2b30 (005e2b30) at 005e2bc5 [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_process_FUN_005e2430 (005e2430) at 005e286b [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_process_FUN_005e4210 (005e4210) at 005e4464 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_chooseDestWayPoint_FUN_005e7510 (005e7510) at 005e75e0 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 (005e5970) at 005e5fa9 [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_process_FUN_005e7e80 (005e7e80) at 005e847f [UNCONDITIONAL_CALL]
//   core_water.cpp_CWater_calculateVisibleTiles_FUN_005e9e70 (005e9e70) at 005ea2f0 [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_process_FUN_005eb100 (005eb100) at 005eb26d [UNCONDITIONAL_CALL]
//   core_waypoint.cpp_CWayPoint_addAdj_FUN_005ec700 (005ec700) at 005ec799 [UNCONDITIONAL_CALL]
//   core_waypoint.cpp_CWayPoint_removeAdj_FUN_005ec7b0 (005ec7b0) at 005ec817 [UNCONDITIONAL_CALL]
//   core_waypoint.cpp_CWaypoint_FUN_005ebeb0 (005ebeb0) at 005ebf5d [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_process_FUN_005efde0 (005efde0) at 005f0a7c [UNCONDITIONAL_CALL]
//   core_xform.cpp_inverse_FUN_005f6210 (005f6210) at 005f644c [UNCONDITIONAL_CALL]
//   core_xform.cpp_somebodyWriteMe_FUN_005f5160 (005f5160) at 005f517b [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_PickupSomethingPossibly_FUN_005fb530 (005fb530) at 005fbb01 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005f9a0e [UNCONDITIONAL_CALL]
//   engine_2d.c_clipAndDrawLine_FUN_00402ca0 (00402ca0) at 00402d4c [UNCONDITIONAL_CALL]
//   engine_2d.c_draw320x200SizeDot_FUN_00402a8e (00402a8e) at 00402c01 [UNCONDITIONAL_CALL]
//   engine_2d.c_drawHLine_FUN_00402ee0 (00402ee0) at 00402fdc [UNCONDITIONAL_CALL]
//   engine_2d.c_drawVLine_FUN_00402ff0 (00402ff0) at 00403108 [UNCONDITIONAL_CALL]
//   engine_2d.c_initGraphicsSystem_FUN_00401010 (00401010) at 004010ea [UNCONDITIONAL_CALL]
//   engine_2d.c_loadOrBuildColorMap_FUN_00402930 (00402930) at 00402a03 [UNCONDITIONAL_CALL]
//   engine_2d.c_loadPaletteFile_FUN_004015a0 (004015a0) at 00401604 [UNCONDITIONAL_CALL]
//   engine_2d.c_mapFrameBuffer_FUN_00403430 (00403430) at 0040352a [UNCONDITIONAL_CALL]
//   engine_2d.c_unmapFrameBuffer_FUN_00403670 (00403670) at 0040372e [UNCONDITIONAL_CALL]
//   engine_3d.c_addFaceIfVisible_FUN_004079c0 (004079c0) at 00407a18 [UNCONDITIONAL_CALL]
//   engine_3d.c_badMRGLStruct_FUN_004037b0 (004037b0) at 004037cb [UNCONDITIONAL_CALL]
//   engine_3d.c_dispatchMRGLBlockChain_FUN_00407890 (00407890) at 004078c6 [UNCONDITIONAL_CALL]
//   engine_3d.c_dispatchMRGLToRenderer_FUN_00407aa0 (00407aa0) at 00407c16 [UNCONDITIONAL_CALL]
//   engine_3d.c_oldFunc_FUN_00403740 (00403740) at 00403776 [UNCONDITIONAL_CALL]
//   engine_3d.c_oldFunction_FUN_00403e00 (00403e00) at 00403e1b [UNCONDITIONAL_CALL]
//   engine_3d.c_oldFunction_FUN_00403ec0 (00403ec0) at 00403edb [UNCONDITIONAL_CALL]
//   engine_3d.c_oldFunction_FUN_00403ef0 (00403ef0) at 00403f0b [UNCONDITIONAL_CALL]
//   engine_3d.c_oldFunction_FUN_004041d0 (004041d0) at 00404206 [UNCONDITIONAL_CALL]
//   engine_3d.c_oldFunction_FUN_00404420 (00404420) at 0040443b [UNCONDITIONAL_CALL]
//   engine_3d.c_oldFunction_FUN_00404690 (00404690) at 004046ab [UNCONDITIONAL_CALL]
//   engine_3d.c_oldFunction_FUN_00404df0 (00404df0) at 00404e26 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPrim_FUN_00407920 (00407920) at 0040796c [UNCONDITIONAL_CALL]
//   engine_3d.c_transformAndBufferVertices_FUN_00403840 (00403840) at 0040392f [UNCONDITIONAL_CALL]
//   engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0 (004105d0) at 004106a8 [UNCONDITIONAL_CALL]
//   engine_boss.c_modelStructNotSupported_FUN_0041db50 (0041db50) at 0041db6b [UNCONDITIONAL_CALL]
//   engine_boss.c_modelStructNotSupported_FUN_0041db80 (0041db80) at 0041db9b [UNCONDITIONAL_CALL]
//   engine_boss.c_modelStructNotSupported_FUN_0041dbb0 (0041dbb0) at 0041dbcb [UNCONDITIONAL_CALL]
//   engine_boss.c_modelStructNotSupported_FUN_0041dbe0 (0041dbe0) at 0041dc08 [UNCONDITIONAL_CALL]
//   engine_boss.c_modelStructNotSupported_FUN_0041dc20 (0041dc20) at 0041dc3b [UNCONDITIONAL_CALL]
//   engine_clipper.c_allocateClipVertex_FUN_00435980 (00435980) at 004359c4 [UNCONDITIONAL_CALL]
//   engine_clipper.c_clipPolygonBottomPlane_FUN_004361a0 (004361a0) at 0043623f [UNCONDITIONAL_CALL]
//   engine_clipper.c_clipPolygonLeftPlane_FUN_00435f20 (00435f20) at 00435fbd [UNCONDITIONAL_CALL]
//   engine_clipper.c_clipPolygonRightPlane_FUN_00436060 (00436060) at 00436103 [UNCONDITIONAL_CALL]
//   engine_clipper.c_clipPolygonToViewFrustum_FUN_004366e0 (004366e0) at 00436ea2 [UNCONDITIONAL_CALL]
//   engine_clipper.c_clipPolygonTopPlane_FUN_004362e0 (004362e0) at 00436385 [UNCONDITIONAL_CALL]
//   engine_dosio.c_CFileFinder_convertStruct_FUN_00481dc0 (00481dc0) at 00481e4d [UNCONDITIONAL_CALL]
//   engine_dosio.c_CFileFinder_findNext_FUN_00481cf0 (00481cf0) at 00481d24 [UNCONDITIONAL_CALL]
//   engine_dosio.c_addGetFileInfoHook_FUN_00481710 (00481710) at 00481751 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_captureFace_FUN_0048d8a0 (0048d8a0) at 0048d937 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80 (0048db80) at 0048dbc7 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 (0048a740) at 0048a79e [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0048d170 (0048d170) at 0048d3c5 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderGeometryBatch_FUN_0048d410 (0048d410) at 0048d455 [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderStandardTextured_FUN_0048aa50 (0048aa50) at 0048aade [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_renderTriangleFacetList_FUN_0048cf00 (0048cf00) at 0048d11f [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_setProjectionMode_FUN_0048a700 (0048a700) at 0048a72c [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 (004b3920) at 004b3c52 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b43ba [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0 (004b35a0) at 004b3730 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutList_load_FUN_004b2890 (004b2890) at 004b29e3 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutList_remove_FUN_004b2d70 (004b2d70) at 004b2d9f [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_addPodAuditRecord_FUN_004b5950 (004b5950) at 004b5a37 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bb5e8 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 (004ba740) at 004bab05 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40 (004b9f40) at 004ba07c [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0 (004b76d0) at 004b7a88 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractTexture_FUN_004b53e0 (004b53e0) at 004b5458 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_load_FUN_004b6c00 (004b6c00) at 004b6c96 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b8848 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10 (004b7c10) at 004b7c55 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_parsePodConfigFile_FUN_004ba4f0 (004ba4f0) at 004ba5a8 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b6080 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_registerFiles_FUN_004b5640 (004b5640) at 004b57a9 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190 (004bd190) at 004bd56a [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_writePodConfigFile_FUN_004ba620 (004ba620) at 004ba696 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_buildCheckoutFilePath_FUN_004b1e60 (004b1e60) at 004b1ef5 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_buildHistoryFilePath_FUN_004b1f10 (004b1f10) at 004b1fd2 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_logOnAsVersionControlUser_FUN_004b2770 (004b2770) at 004b27a5 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650 (004bc650) at 004bc94a [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80 (004cda80) at 004cdb74 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_loadBitmap_FUN_004ccff0 (004ccff0) at 004cd10f [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_parseCharacterMetrics_FUN_004cd550 (004cd550) at 004cd628 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_remapPalette_FUN_004d02a0 (004d02a0) at 004d0465 [UNCONDITIONAL_CALL]
//   engine_font.cpp_setShadowColor_FUN_004ce0f0 (004ce0f0) at 004ce204 [UNCONDITIONAL_CALL]
//   engine_ini.cpp_CIniFile_getString_FUN_004fbb20 (004fbb20) at 004fbb72 [UNCONDITIONAL_CALL]
//   engine_ini.cpp_CIniFile_setString_FUN_004fbbb0 (004fbbb0) at 004fbc23 [UNCONDITIONAL_CALL]
//   engine_ini.cpp_CIni_findLineNumberOfVariable_FUN_004fb470 (004fb470) at 004fb5ee [UNCONDITIONAL_CALL]
//   engine_ini.cpp_CIni_getProfileString_FUN_004fb250 (004fb250) at 004fb341 [UNCONDITIONAL_CALL]
//   engine_ini.cpp_CIni_writeProfileString_FUN_004fb660 (004fb660) at 004fb781 [UNCONDITIONAL_CALL]
//   engine_ini.cpp_getProfileInteger_FUN_004fb9a0 (004fb9a0) at 004fba32 [UNCONDITIONAL_CALL]
//   engine_keyframe.c_interpolateCubicKeyframes_FUN_00501f30 (00501f30) at 00501ffb [UNCONDITIONAL_CALL]
//   engine_keyframe.c_loadAndInterpolateKeyframes_FUN_00501d40 (00501d40) at 00501e28 [UNCONDITIONAL_CALL]
//   engine_keyframe.c_recomputeKeyFrameNormals_FUN_00502320 (00502320) at 00502363 [UNCONDITIONAL_CALL]
//   engine_matrix.c_integerSquareRoot_FUN_0050d890 (0050d890) at 0050d954 [UNCONDITIONAL_CALL]
//   engine_matrix.c_matrixPushAndTransform_FUN_0050cee0 (0050cee0) at 0050d610 [UNCONDITIONAL_CALL]
//   engine_matrix.c_matrixPushAndTransform_FUN_0050db00 (0050db00) at 0050e25a [UNCONDITIONAL_CALL]
//   engine_matrix.c_matrixPush_FUN_0050d620 (0050d620) at 0050d714 [UNCONDITIONAL_CALL]
//   engine_matrix.c_popMatrixRelativeOffset_FUN_0050e6f0 (0050e6f0) at 0050e74a [UNCONDITIONAL_CALL]
//   engine_matrix.c_popViewport_FUN_0050e480 (0050e480) at 0050e5a1 [UNCONDITIONAL_CALL]
//   engine_matrix.c_pop_FUN_0050d720 (0050d720) at 0050d81a [UNCONDITIONAL_CALL]
//   engine_matrix.c_pushMatrixRelativeOffset_FUN_0050e640 (0050e640) at 0050e6d5 [UNCONDITIONAL_CALL]
//   engine_matrix.c_pushViewport_FUN_0050e320 (0050e320) at 0050e46e [UNCONDITIONAL_CALL]
//   engine_model.c_byteswapMRGLData_FUN_00527e40 (00527e40) at 00527e9f [UNCONDITIONAL_CALL]
//   engine_model.c_getMRGLBounds_FUN_00528140 (00528140) at 005281db [UNCONDITIONAL_CALL]
//   engine_model.c_getMRGLSize_FUN_00528700 (00528700) at 00528851 [UNCONDITIONAL_CALL]
//   engine_model.c_loadModelChunk_FUN_00528970 (00528970) at 005289e3 [UNCONDITIONAL_CALL]
//   engine_model.c_loadModelFile_FUN_00527ec0 (00527ec0) at 00528069 [UNCONDITIONAL_CALL]
//   engine_palette.cpp_CPaletteManager_addTexture_FUN_00544fc0 (00544fc0) at 00545045 [UNCONDITIONAL_CALL]
//   engine_palette.cpp_CPaletteManager_createOutputPalette_FUN_00545180 (00545180) at 005451c1 [UNCONDITIONAL_CALL]
//   engine_palette.cpp_CPaletteManager_ctor_FUN_00544f10 (00544f10) at 00544f63 [UNCONDITIONAL_CALL]
//   engine_pcx.c_saveScreenRaw16_FUN_00548d20 (00548d20) at 00548ee5 [UNCONDITIONAL_CALL]
//   engine_pcx.c_saveScreenRaw32_FUN_00548f00 (00548f00) at 00548fab [UNCONDITIONAL_CALL]
//   engine_pcx.c_saveScreenshotGeneral_FUN_005490c0 (005490c0) at 005491c9 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_computeFileCRC_FUN_005507f0 (005507f0) at 00550826 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_getAuditRecord_FUN_00550590 (00550590) at 005505d0 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_getDependencyRecord_FUN_005506c0 (005506c0) at 00550700 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650 (0054f650) at 0054fa0b [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPodFile_verifyChecksum_FUN_00550230 (00550230) at 00550582 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_computeAndStoreCRC_FUN_00551000 (00551000) at 00551066 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_dismountPod_FUN_005518c0 (005518c0) at 005518ef [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_init_FUN_00550c30 (00550c30) at 00550c5b [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_mount_FUN_00550a10 (00550a10) at 00550a6d [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_remount_FUN_00550af0 (00550af0) at 00550b79 [UNCONDITIONAL_CALL]
//   engine_pod.cpp_CPod_resolveDependenciesAndSort_FUN_005513d0 (005513d0) at 005516e0 [UNCONDITIONAL_CALL]
//   engine_texture.cpp_CTextureCache_loadTexture_FUN_005dcc00 (005dcc00) at 005dcea3 [UNCONDITIONAL_CALL]
//   shape_design.c_bisectMesh_FUN_0046ed50 (0046ed50) at 0046edb6 [UNCONDITIONAL_CALL]
//   shape_design.c_centerKeyframeModels_FUN_004681a0 (004681a0) at 004682c5 [UNCONDITIONAL_CALL]
//   shape_design.c_combineTextureMaps_FUN_00469ee0 (00469ee0) at 00469f6a [UNCONDITIONAL_CALL]
//   shape_design.c_complexPolygonReduction_FUN_00463b30 (00463b30) at 00463ba1 [UNCONDITIONAL_CALL]
//   shape_design.c_cramTextureList_FUN_0046bb80 (0046bb80) at 0046db01 [UNCONDITIONAL_CALL]
//   shape_design.c_cramTextures_FUN_0046a970 (0046a970) at 0046ab27 [UNCONDITIONAL_CALL]
//   shape_design.c_createKeyframeModel_FUN_00468320 (00468320) at 0046853d [UNCONDITIONAL_CALL]
//   shape_design.c_duplicateSharedVertices_FUN_00465d50 (00465d50) at 00465e3f [UNCONDITIONAL_CALL]
//   shape_design.c_exportVertexListFile_FUN_0045a610 (0045a610) at 0045a659 [UNCONDITIONAL_CALL]
//   shape_design.c_findVertexListInModel_FUN_00468000 (00468000) at 0046804f [UNCONDITIONAL_CALL]
//   shape_design.c_fixupCramUV_FUN_0046e090 (0046e090) at 0046e2d0 [UNCONDITIONAL_CALL]
//   shape_design.c_getVertexCountFromModel_FUN_00468080 (00468080) at 004680cf [UNCONDITIONAL_CALL]
//   shape_design.c_loadModelBinary_FUN_00458170 (00458170) at 004588b1 [UNCONDITIONAL_CALL]
//   shape_design.c_loadTextureData_FUN_0046b060 (0046b060) at 0046b0d4 [UNCONDITIONAL_CALL]
//   shape_design.c_mouseWheelPolygonReducer_FUN_004648e0 (004648e0) at 004649e2 [UNCONDITIONAL_CALL]
//   shape_design.c_qsortByOriginalIndex_FUN_004677c0 (004677c0) at 00467829 [UNCONDITIONAL_CALL]
//   shape_design.c_qsortByVertexX_FUN_004676f0 (004676f0) at 0046779e [UNCONDITIONAL_CALL]
//   shape_design.c_triangulateDSE_FUN_0046e4d0 (0046e4d0) at 0046e560 [UNCONDITIONAL_CALL]
//   shape_dsemodel.cpp_CDSEModel_convertVertex_FUN_0048f6f0 (0048f6f0) at 0048f74a [UNCONDITIONAL_CALL]
//   shape_dsemodel.cpp_CDSEModel_logVertex_FUN_0048f660 (0048f660) at 0048f6df [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEdCheck_setupWithText_FUN_004a6a60 (004a6a60) at 004a6b35 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_004a5ea0 (004a5ea0) at 004a5f84 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60 (004a5b60) at 004a5c00 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_0049e940 (0049e940) at 0049e9b6 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_004a0890 (004a0890) at 004a08c0 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_createModalWindow_FUN_004a0970 (004a0970) at 004a09ce [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 (0049e790) at 0049e85a [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0 (004a1ca0) at 004a1e2a [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_drawWindowSeparator_FUN_004a1230 (004a1230) at 004a1258 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870 (0049e870) at 0049e933 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80 (004a0f80) at 004a0fdb [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_popWindowState_FUN_004a0ea0 (004a0ea0) at 004a0f4b [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380 (004a1380) at 004a1b14 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a2920 (004a2920) at 004a29fe [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 (004a0430) at 004a045c [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 (0049fb70) at 0049fbb3 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 (004a0530) at 004a0880 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CInputString_calcX_FUN_0049d8f0 (0049d8f0) at 0049d93e [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CInputString_draw_FUN_0049d9b0 (0049d9b0) at 0049da22 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0 (004a45d0) at 004a46b3 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 (004a3e20) at 004a3e4c [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_enableItem_FUN_004a5410 (004a5410) at 004a54cf [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_getItemHotKey_FUN_004a5610 (004a5610) at 004a563e [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_insert_FUN_004a5670 (004a5670) at 004a56ba [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_isItemEnabled_FUN_004a54e0 (004a54e0) at 004a550e [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_remove_FUN_004a56f0 (004a56f0) at 004a573a [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_setCancelButtonText_FUN_004a3d90 (004a3d90) at 004a3dd3 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_setItemHotKey_FUN_004a5540 (004a5540) at 004a556f [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_setOkButtonText_FUN_004a3d20 (004a3d20) at 004a3d60 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_sort_FUN_004a57f0 (004a57f0) at 004a583a [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_swap_FUN_004a5870 (004a5870) at 004a58ba [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_allocate_FUN_004a2cc0 (004a2cc0) at 004a2d6a [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_copyToClipboard_FUN_004a3270 (004a3270) at 004a32ea [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_insert_FUN_004a2bc0 (004a2bc0) at 004a2cad [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_remove_FUN_004a2e00 (004a2e00) at 004a2e37 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_setStringAt_FUN_004a3120 (004a3120) at 004a31e4 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_sort_FUN_004a2f00 (004a2f00) at 004a2f36 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_swap_FUN_004a31f0 (004a31f0) at 004a3224 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_calculateButtonHeight_FUN_004a6970 (004a6970) at 004a699b [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_calculateButtonWidth_FUN_004a68e0 (004a68e0) at 004a690b [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130 (0049e130) at 0049e3be [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_initEditorFontMetrics_FUN_0049d1f0 (0049d1f0) at 0049d237 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_paintWindowBackground_FUN_0049e590 (0049e590) at 0049e693 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0 (0049e9d0) at 0049e9fd [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 (0049db10) at 0049de48 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_CLeakChecker_dtor_FUN_0050fbc0 (0050fbc0) at 0050fd80 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_SMemHead_checkMemory_FUN_0050f020 (0050f020) at 0050f082 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_SMemHead_remove_FUN_0050ef20 (0050ef20) at 0050ef51 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0 (0050f9b0) at 0050fb02 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugFree_FUN_0050f460 (0050f460) at 0050f528 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540 (0050f540) at 0050f5c4 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_getMemoryHeaderFromPtr_FUN_0050efa0 (0050efa0) at 0050efcb [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_openFile_FUN_0050f7a0 (0050f7a0) at 0050f96f [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_AdjacentEdgesCheck_FUN_00515d90 (00515d90) at 00515de8 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CallocSomething1_FUN_00515ac0 (00515ac0) at 00515b87 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_00515ca0 (00515ca0) at 00515cec [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_00516620 (00516620) at 00516926 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_00516f50 (00516f50) at 00516fdd [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_00517000 (00517000) at 00517135 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_00517630 (00517630) at 00517a5b [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_00518300 (00518300) at 005183c4 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051a400 (0051a400) at 0051a64a [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051a6b0 (0051a6b0) at 0051a89d [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051a9d0 (0051a9d0) at 0051aa4e [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051ad60 (0051ad60) at 0051adde [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051b2b0 (0051b2b0) at 0051b2cb [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051bac0 (0051bac0) at 0051bc9a [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051c070 (0051c070) at 0051c0ee [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051cdf0 (0051cdf0) at 0051d068 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051d180 (0051d180) at 0051d1e5 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051d2d0 (0051d2d0) at 0051d3a1 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051d4a0 (0051d4a0) at 0051d515 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051d990 (0051d990) at 0051e3f4 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_LodMesh_getLOD_FUN_0051b920 (0051b920) at 0051b9ba [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_MemoryAdjacentThing_FUN_00515ec0 (00515ec0) at 00515f60 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_NeighboringFacesEdgesCheck_FUN_00518910 (00518910) at 00519170 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_OpenS3DFile_FUN_0051aa60 (0051aa60) at 0051ab08 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_ReallocSomething_FUN_00518790 (00518790) at 00518814 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_SamplePointsCheck_FUN_00519b50 (00519b50) at 00519fbf [UNCONDITIONAL_CALL]
//   shape_multicrm.cpp_CMultiCram_run_FUN_0053ee70 (0053ee70) at 0053eefa [UNCONDITIONAL_CALL]
//   shape_quantize.cpp_AllocateMemForSomething_FUN_00556a00 (00556a00) at 00556a63 [UNCONDITIONAL_CALL]
//   shape_quantize.cpp_AllocateMemoryForSomething_FUN_00554a50 (00554a50) at 00554b49 [UNCONDITIONAL_CALL]
//   shape_quantize.cpp_ColorQuantizationMaybe_FUN_00556490 (00556490) at 00556885 [UNCONDITIONAL_CALL]
//   shape_quantize.cpp_FUN_00556cb0 (00556cb0) at 00556ccc [UNCONDITIONAL_CALL]
//   shape_quantize.cpp_FUN_00556ce0 (00556ce0) at 00556cfc [UNCONDITIONAL_CALL]
//   shape_quantize.cpp_QuantizeSomething_FUN_00554cc0 (00554cc0) at 00554d03 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_BonesAndPointsCheck_FUN_005d7e00 (005d7e00) at 005d7f74 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_TriListSomething_FUN_005d77a0 (005d77a0) at 005d7d97 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_FUN_0052e8d0 (0052e8d0) at 0052e9fc [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_FUN_0052ea10 (0052ea10) at 0052ea61 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_FUN_0052ea80 (0052ea80) at 0052eaef [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_FUN_0052ecf0 (0052ecf0) at 0052eddc [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_FUN_00533d30 (00533d30) at 00533e4e [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_FUN_00533f80 (00533f80) at 005340af [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_FUN_00534210 (00534210) at 00534310 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_HuffmanCodeCheck_FUN_0052f350 (0052f350) at 0052f50d [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_HuffmanDecodeTableThing_FUN_00531680 (00531680) at 00531992 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_MPEGPickTable_LayerCheck_FUN_00534630 (00534630) at 005346ed [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_MemoryCheckOverflow_FUN_0052f170 (0052f170) at 0052f23b [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_MpegLoadMaybe_FUN_00534d40 (00534d40) at 00534fe9 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_OpenAndPrepareDecoding_FUN_00534550 (00534550) at 005345a4 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_ReadOrWriteBits_FUN_0052ef40 (0052ef40) at 0052efdb [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_SideInfoBadCheck_FUN_005307a0 (005307a0) at 00530982 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_StereoProcessingFile_FUN_005325e0 (005325e0) at 0053344a [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_hPutBuf_FUN_0052f260 (0052f260) at 0052f2ab [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_DirectSoundDevice_HardwareSfx3DBuffer_FUN_005af750 (005af750) at 005af9a5 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_DirectSoundDevice_allocateSfx_FUN_005af410 (005af410) at 005af44a [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_DirectSoundDevice_freeSample_FUN_005af190 (005af190) at 005af1bd [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_DirectSoundDevice_getSfxPlaybackPos_FUN_005afd60 (005afd60) at 005afd9d [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_DirectSoundDevice_lockSample_FUN_005af220 (005af220) at 005af294 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_DirectSoundDevice_startSfx_FUN_005afe80 (005afe80) at 005aff26 [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_DirectSoundDevice_unlockSample_FUN_005af320 (005af320) at 005af35a [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_CalculateDistanceMaybe_FUN_005a45c0 (005a45c0) at 005a4b81 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_ComputingDelay_FUN_005a7100 (005a7100) at 005a73a5 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a43a0 (005a43a0) at 005a43ee [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a5200 (005a5200) at 005a5308 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a59c0 (005a59c0) at 005a59f8 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a5db0 (005a5db0) at 005a5dfb [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a9de0 (005a9de0) at 005a9e0d [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_ReadingOrDecodingSoundFile_FUN_005a4c80 (005a4c80) at 005a508a [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SampleInfo_cvtPlaybackPos_FUN_005a8580 (005a8580) at 005a86c3 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSample_freeMemory_FUN_005a62c0 (005a62c0) at 005a6378 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSample_lock_FUN_005a6430 (005a6430) at 005a64b1 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSample_seek_FUN_005a65a0 (005a65a0) at 005a6625 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSlot_Something1_FUN_005a6f00 (005a6f00) at 005a6fb8 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSlot_Something2_FUN_005a6df0 (005a6df0) at 005a6e68 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSlot_autoCalcDelayRemaining_FUN_005a7070 (005a7070) at 005a70b6 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSlot_kill_2_FUN_005aca90 (005aca90) at 005acd66 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSlot_kill_FUN_005a7e60 (005a7e60) at 005a7fa9 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSlot_kill_FUN_005acdb0 (005acdb0) at 005ace36 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSlot_pollHwHandle_FUN_005a7fe0 (005a7fe0) at 005a8017 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSlot_pollStream_FUN_005a6730 (005a6730) at 005a6b8b [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSlot_seek_FUN_005a8390 (005a8390) at 005a83bc [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSlot_updatePlaybackPos_FUN_005a8170 (005a8170) at 005a82c1 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_UnknownPlayOrUseSample_FUN_005a75e0 (005a75e0) at 005a7769 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_allocMixBuffers_FUN_005a5730 (005a5730) at 005a5825 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_convertMixBufToOutput_FUN_005a5b80 (005a5b80) at 005a5ce9 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_convertMp3ToSfxMetadata_FUN_005acf20 (005acf20) at 005acf81 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_enableHwSoundMixing_FUN_005ab550 (005ab550) at 005ab57e [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_enableSfxChannel_FUN_005a9e20 (005a9e20) at 005a9e4f [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getRecordingDeviceInfo_FUN_005ab780 (005ab780) at 005ab7cc [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0 (005aa3f0) at 005aa613 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90 (005a9d90) at 005a9dc5 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getSoundDeviceInfo_FUN_005ab370 (005ab370) at 005ab3c3 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_isSfxChannelEnabled_FUN_005a9ea0 (005a9ea0) at 005a9ed3 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_lockSound_FUN_005abd30 (005abd30) at 005abd65 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0 (005a8cb0) at 005a8cdf [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30 (005a8c30) at 005a8c97 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_selectRecordingDevice_FUN_005ab860 (005ab860) at 005ab8ab [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_selectSoundDevice_FUN_005ab4c0 (005ab4c0) at 005ab50b [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_setMaxSwSoundLatency_FUN_005abeb0 (005abeb0) at 005abf04 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_setNextSfxChannel_FUN_005a8af0 (005a8af0) at 005a8b31 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_setNextSfxUserData_FUN_005a8aa0 (005a8aa0) at 005a8ae6 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_setRecordingFormat_FUN_005ab9a0 (005ab9a0) at 005aba0a [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_setSfxChannelVol_FUN_005a9cf0 (005a9cf0) at 005a9d1b [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_setSfxUserData_FUN_005a9ba0 (005a9ba0) at 005a9bcb [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170 (005ab170) at 005ab1cb [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_startSfx_FUN_005a8e90 (005a8e90) at 005a9187 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0 (005abdc0) at 005abe06 [UNCONDITIONAL_CALL]
//   support_codec.cpp_CLZWDictionary_init_FUN_0043ee60 (0043ee60) at 0043eec6 [UNCONDITIONAL_CALL]
//   support_newmsg.cpp_decryptMessage_FUN_00544270 (00544270) at 005442e2 [UNCONDITIONAL_CALL]
//   support_newmsg.cpp_readMessageFile_FUN_00543e40 (00543e40) at 00544141 [UNCONDITIONAL_CALL]
//   support_trisock.cpp_buildIPAddressOrDie_FUN_005e1750 (005e1750) at 005e17a6 [UNCONDITIONAL_CALL]
//   support_trisock.cpp_convertSockAddr_FUN_005e1960 (005e1960) at 005e19bb [UNCONDITIONAL_CALL]
//   support_trisock.cpp_parseIPAddress_FUN_005e1700 (005e1700) at 005e173d [UNCONDITIONAL_CALL]
//   support_trisock.cpp_shouldNeverBeCalled_FUN_005e1a80 (005e1a80) at 005e1a9b [UNCONDITIONAL_CALL]
//   support_trisock.cpp_shouldNeverBeCalled_FUN_005e1ab0 (005e1ab0) at 005e1acb [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_allocateRenderBuffers_FUN_005ecac0 (005ecac0) at 005ecb1c [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_analyzePixelFormat_FUN_005ed730 (005ed730) at 005ed80b [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630 (005ed630) at 005ed6e6 [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_initializeGraphicsSystem_FUN_005ecc10 (005ecc10) at 005ecd66 [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580 (005ed580) at 005ed5f6 [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0 (005ecef0) at 005ed069 [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_setupColorPalette_FUN_005ed8f0 (005ed8f0) at 005ed9ca [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 (005eda20) at 005edc33 [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_videoRestore_FUN_005edc80 (005edc80) at 005edde6 [UNCONDITIONAL_CALL]
//   wincore_winrun.cpp_addWindowsMessageHook_FUN_005f3100 (005f3100) at 005f3141 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_main_c_006315be
//   TerminatedCString s_at_006315cd
//   TerminatedCString s_gtfo_txt_006315d0
//   TerminatedCString s_Recursive_GTFO_006315d9
//   TerminatedCString s_core_main_c_006315ea
//   TerminatedCString s_core_main_c_006315f9
//   TerminatedCString s_at_00631608
//   TerminatedCString s_gtfo_txt_0063160b
//   TerminatedCString s_anon_00631614
//   TerminatedCString s_Msg_s_00631656
//   TerminatedCString s_File_s_line_d_0063165f
//   TerminatedCString s_Time_s_00631671
//   TerminatedCString s_errno_d_s_0063167a
//   TerminatedCString s_core_main_c_0063168b
//   CSound* g_CSoundPtr = 03f6af64
//   char[512] g_ErrorMessageBuffer
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   BOOL g_RecursiveCallFlag
//   CSound g_CSoundInstance
// Function calls:
//   core_sound.cpp_FUN_005aaeb0
//   crt_errno.c_errno_FUN_00601450
//   crt_startup.c_notifyAbnormalTermination_FUN_00601620
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   crt_stdio.c_vsprintf_FUN_005fdba8
//   crt_string.c_strerror_FUN_00601470
//   crt_time.c_asctime_FUN_00601768
//   crt_time.c_localtime_FUN_00600288
//   crt_time.c_time_with_rounding_FUN_006001f0
//   engine_2d.c_cleanupGraphicsSystem_FUN_005ecd90
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0
//   wincore_winrun.cpp_displayMessageBoxAndQuit_FUN_005f3920
//   wincore_winrun.cpp_endPeriod_FUN_005f2db0

#include "nocturne.h"

void __cdecl core_main_c_displayErrorAndQuit_FUN_00506f10(char *format,...)

{
  FILE *pFVar1;
  int *piVar2;
  undefined4 *puVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  FILE *in_stack_0000000c;
  char *in_stack_00000010;
  char *in_stack_00000014;
  FILE *in_stack_00000018;
  char *in_stack_0000001c;
  FILE *in_stack_00000020;
  char *in_stack_00000024;
  undefined4 in_stack_00000028;
  
  if (g_RecursiveCallFlag != 0) {
    pFVar1 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       ("gtfo.txt",(char *)0x0,"at","..\\core\\main.c",0x80);
    if (pFVar1 != (FILE *)0x0) {
      crt_stdio_c_fprintf_FUN_005fe6d0(pFVar1,"Recursive GTFO!\n");
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar1,"..\\core\\main.c",0x83);
    }
    crt_startup_c_notifyAbnormalTermination_FUN_00601620();
  }
  g_RecursiveCallFlag = 1;
  crt_stdio_c_vsprintf_FUN_005fdba8
            (g_ErrorMessageBuffer,in_stack_00000014,(va_list_t *)&stack0xfffffffc);
  pcVar5 = g_CurrentFilename;
  do {
    pcVar4 = pcVar5;
    if (*pcVar5 == '\\') goto LAB_00506f71;
    if (*pcVar5 == '\0') goto LAB_00506f6f;
    pcVar4 = pcVar5 + 1;
    if (*pcVar4 == '\\') goto LAB_00506f71;
    pcVar5 = pcVar5 + 2;
    if (*pcVar4 == '\0') {
LAB_00506f6f:
      pcVar4 = (char *)0x0;
LAB_00506f71:
      if (pcVar4 == (char *)0x0) {
        pFVar1 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           ("gtfo.txt",(char *)0x0,"at","..\\core\\main.c",
                            0xa4);
        if (pFVar1 != (FILE *)0x0) {
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar1,"----------------------------------------------------------------\n");
          crt_time_c_time_with_rounding_FUN_006001f0((time_t *)&stack0x0000000c);
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar1,"Msg: %s\n");
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar1,"File: %s line %d\n");
          in_stack_0000000c = (FILE *)&stack0x00000018;
          in_stack_00000010 = (char *)crt_time_c_localtime_FUN_00600288((time_t *)in_stack_0000000c)
          ;
          in_stack_0000000c = (FILE *)0x507099;
          crt_time_c_asctime_FUN_00601768((tm *)in_stack_00000010);
          in_stack_00000010 = "Time: %s";
          in_stack_0000000c = pFVar1;
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar1,"Time: %s");
          in_stack_00000018 = (FILE *)0x5070b0;
          piVar2 = (int *)crt_errno_c_errno_FUN_00601450();
          in_stack_0000001c = (char *)*piVar2;
          in_stack_00000018 = (FILE *)0x5070b8;
          in_stack_00000020 = (FILE *)crt_string_c_strerror_FUN_00601470((int)in_stack_0000001c);
          in_stack_0000001c = (char *)0x5070c1;
          puVar3 = (undefined4 *)crt_errno_c_errno_FUN_00601450();
          in_stack_00000020 = (FILE *)*puVar3;
          in_stack_0000001c = "errno = %d (%s)\n";
          in_stack_00000018 = pFVar1;
          crt_stdio_c_fprintf_FUN_005fe6d0(pFVar1,"errno = %d (%s)\n");
          in_stack_00000028 = 0xad;
          in_stack_00000024 = "..\\core\\main.c";
          in_stack_0000001c = (char *)0x5070e2;
          in_stack_00000020 = pFVar1;
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar1,"..\\core\\main.c",0xad);
        }
        core_sound_cpp_FUN_005aaeb0();
        engine_2d_c_cleanupGraphicsSystem_FUN_005ecd90();
        wincore_winrun_cpp_endPeriod_FUN_005f2db0();
        wincore_winrun_cpp_displayMessageBoxAndQuit_FUN_005f3920(g_ErrorMessageBuffer);
        return;
      }
      do {
        pcVar5 = g_CurrentFilename;
        if (*g_CurrentFilename == '\\') goto LAB_00506f93;
        if (*g_CurrentFilename == '\0') break;
        pcVar5 = g_CurrentFilename + 1;
        if (*pcVar5 == '\\') goto LAB_00506f93;
        g_CurrentFilename = g_CurrentFilename + 2;
      } while (*pcVar5 != '\0');
      pcVar5 = (char *)0x0;
LAB_00506f93:
      pcVar5 = pcVar5 + 1;
      g_CurrentFilename = pcVar5;
    }
  } while( true );
}


// Assembly code:
// 00506f10: PUSH EBX
//   Label: core_main.c_displayErrorAndQuit_FUN_00506f10
// 00506f11: PUSH ESI
// 00506f12: PUSH EBP
// 00506f13: SUB ESP,0x8
// 00506f16: CMP dword ptr [0x02f0ca50],0x0
//   XREF to: 02f0ca50 (READ)
// 00506f1d: JNZ 0x00506f9c
//   XREF to: 00506f9c (CONDITIONAL_JUMP)
// 00506f23: LEA EAX,[ESP + 0x1c]
//   Label: LAB_00506f23
//   XREF to: Stack[0x8] (DATA)
// 00506f27: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00506f2a: MOV EAX,ESP
// 00506f2c: PUSH EAX
// 00506f2d: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00506f31: PUSH EBX
// 00506f32: MOV ECX,0x1
// 00506f37: PUSH 0x2dd3130
//   XREF to: 02dd3130 (DATA)
// 00506f3c: XOR ESI,ESI
// 00506f3e: MOV dword ptr [0x02f0ca50],ECX
//   XREF to: 02f0ca50 (WRITE)
// 00506f44: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 00506f49: ADD ESP,0xc
// 00506f4c: MOV DH,0x5c
// 00506f4e: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x14] (DATA)
// 00506f51: MOV DL,DH
// 00506f53: MOV ESI,dword ptr [0x02f0ca48]
//   Label: LAB_00506f53
//   XREF to: 02f0ca48 (READ)
// 00506f59: MOV AL,byte ptr [ESI]
//   Label: LAB_00506f59
// 00506f5b: CMP AL,DL
// 00506f5d: JZ 0x00506f71
//   XREF to: 00506f71 (CONDITIONAL_JUMP)
// 00506f5f: CMP AL,0x0
// 00506f61: JZ 0x00506f6f
//   XREF to: 00506f6f (CONDITIONAL_JUMP)
// 00506f63: INC ESI
// 00506f64: MOV AL,byte ptr [ESI]
// 00506f66: CMP AL,DL
// 00506f68: JZ 0x00506f71
//   XREF to: 00506f71 (CONDITIONAL_JUMP)
// 00506f6a: INC ESI
// 00506f6b: CMP AL,0x0
// 00506f6d: JNZ 0x00506f59
//   XREF to: 00506f59 (CONDITIONAL_JUMP)
// 00506f6f: SUB ESI,ESI
//   Label: LAB_00506f6f
// 00506f71: TEST ESI,ESI
//   Label: LAB_00506f71
// 00506f73: JZ 0x00506feb
//   XREF to: 00506feb (CONDITIONAL_JUMP)
// 00506f75: MOV ESI,dword ptr [0x02f0ca48]
//   XREF to: 02f0ca48 (READ)
// 00506f7b: MOV AL,byte ptr [ESI]
//   Label: LAB_00506f7b
// 00506f7d: CMP AL,DL
// 00506f7f: JZ 0x00506f93
//   XREF to: 00506f93 (CONDITIONAL_JUMP)
// 00506f81: CMP AL,0x0
// 00506f83: JZ 0x00506f91
//   XREF to: 00506f91 (CONDITIONAL_JUMP)
// 00506f85: INC ESI
// 00506f86: MOV AL,byte ptr [ESI]
// 00506f88: CMP AL,DL
// 00506f8a: JZ 0x00506f93
//   XREF to: 00506f93 (CONDITIONAL_JUMP)
// 00506f8c: INC ESI
// 00506f8d: CMP AL,0x0
// 00506f8f: JNZ 0x00506f7b
//   XREF to: 00506f7b (CONDITIONAL_JUMP)
// 00506f91: SUB ESI,ESI
//   Label: LAB_00506f91
// 00506f93: INC ESI
//   Label: LAB_00506f93
// 00506f94: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 00506f9a: JMP 0x00506f53
//   XREF to: 00506f53 (UNCONDITIONAL_JUMP)
// 00506f9c: PUSH 0x80
//   Label: LAB_00506f9c
// 00506fa1: PUSH 0x6315be
//   XREF to: 006315be (DATA)
// 00506fa6: PUSH 0x6315cd
//   XREF to: 006315cd (DATA)
// 00506fab: PUSH 0x0
// 00506fad: PUSH 0x6315d0
//   XREF to: 006315d0 (DATA)
// 00506fb2: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 00506fb7: MOV ESI,EAX
// 00506fb9: ADD ESP,0x14
// 00506fbc: TEST EAX,EAX
// 00506fbe: JZ 0x00506fe1
//   XREF to: 00506fe1 (CONDITIONAL_JUMP)
// 00506fc0: PUSH 0x6315d9
//   XREF to: 006315d9 (DATA)
// 00506fc5: PUSH EAX
// 00506fc6: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00506fcb: ADD ESP,0x8
// 00506fce: PUSH 0x83
// 00506fd3: PUSH 0x6315ea
//   XREF to: 006315ea (DATA)
// 00506fd8: PUSH ESI
// 00506fd9: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00506fde: ADD ESP,0xc
// 00506fe1: CALL crt_startup.c_notifyAbnormalTermination_FUN_00601620
//   Label: LAB_00506fe1
//   XREF to: 00601620 (UNCONDITIONAL_CALL)
// 00506fe6: JMP 0x00506f23
//   XREF to: 00506f23 (UNCONDITIONAL_JUMP)
// 00506feb: PUSH 0xa4
//   Label: LAB_00506feb
// 00506ff0: PUSH 0x6315f9
//   XREF to: 006315f9 (DATA)
// 00506ff5: PUSH 0x631608
//   XREF to: 00631608 (DATA)
// 00506ffa: PUSH ESI
// 00506ffb: PUSH 0x63160b
//   XREF to: 0063160b (DATA)
// 00507000: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 00507005: MOV ESI,EAX
// 00507007: ADD ESP,0x14
// 0050700a: TEST EAX,EAX
// 0050700c: JNZ 0x0050703b
//   XREF to: 0050703b (CONDITIONAL_JUMP)
// 0050700e: MOV EBX,dword ptr [0x00681ef8]
//   Label: LAB_0050700e
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 00507014: PUSH EBX
//   XREF to: 03f6af64 (DATA)
// 00507015: CALL core_sound.cpp_FUN_005aaeb0
//   XREF to: 005b2d60 (UNCONDITIONAL_CALL)
// 0050701a: ADD ESP,0x4
// 0050701d: CALL engine_2d.c_cleanupGraphicsSystem_FUN_005ecd90
//   XREF to: 00401130 (UNCONDITIONAL_CALL)
// 00507022: CALL wincore_winrun.cpp_endPeriod_FUN_005f2db0
//   XREF to: 005f2db0 (UNCONDITIONAL_CALL)
// 00507027: PUSH 0x2dd3130
//   XREF to: 02dd3130 (DATA)
// 0050702c: CALL wincore_winrun.cpp_displayMessageBoxAndQuit_FUN_005f3920
//   XREF to: 005f3920 (UNCONDITIONAL_CALL)
// 00507031: ADD ESP,0x4
// 00507034: ADD ESP,0x8
// 00507037: POP EBP
// 00507038: POP ESI
// 00507039: POP EBX
// 0050703a: RET
// 0050703b: PUSH EDI
//   Label: LAB_0050703b
// 0050703c: PUSH 0x631614
//   XREF to: 00631614 (DATA)
// 00507041: PUSH EAX
// 00507042: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00507047: ADD ESP,0x8
// 0050704a: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x10] (DATA)
// 0050704e: PUSH EAX
// 0050704f: CALL crt_time.c_time_with_rounding_FUN_006001f0
//   XREF to: 006001f0 (UNCONDITIONAL_CALL)
// 00507054: ADD ESP,0x4
// 00507057: PUSH 0x2dd3130
//   XREF to: 02dd3130 (DATA)
// 0050705c: PUSH 0x631656
//   XREF to: 00631656 (DATA)
// 00507061: PUSH ESI
// 00507062: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00507067: ADD ESP,0xc
// 0050706a: MOV EDI,dword ptr [0x02f0ca4c]
//   XREF to: 02f0ca4c (READ)
// 00507070: PUSH EDI
// 00507071: MOV EBP,dword ptr [0x02f0ca48]
//   XREF to: 02f0ca48 (READ)
// 00507077: PUSH EBP
// 00507078: PUSH 0x63165f
//   XREF to: 0063165f (DATA)
// 0050707d: PUSH ESI
// 0050707e: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00507083: ADD ESP,0x10
// 00507086: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x10] (DATA)
// 0050708a: PUSH EAX
// 0050708b: CALL crt_time.c_localtime_FUN_00600288
//   XREF to: 00600288 (UNCONDITIONAL_CALL)
// 00507090: ADD ESP,0x4
// 00507093: PUSH EAX
// 00507094: CALL crt_time.c_asctime_FUN_00601768
//   XREF to: 00601768 (UNCONDITIONAL_CALL)
// 00507099: ADD ESP,0x4
// 0050709c: PUSH EAX
// 0050709d: PUSH 0x631671
//   XREF to: 00631671 (DATA)
// 005070a2: PUSH ESI
// 005070a3: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005070a8: ADD ESP,0xc
// 005070ab: CALL crt_errno.c_errno_FUN_00601450
//   XREF to: 00601450 (UNCONDITIONAL_CALL)
// 005070b0: MOV EDX,dword ptr [EAX]
// 005070b2: PUSH EDX
// 005070b3: CALL crt_string.c_strerror_FUN_00601470
//   XREF to: 00601470 (UNCONDITIONAL_CALL)
// 005070b8: ADD ESP,0x4
// 005070bb: PUSH EAX
// 005070bc: CALL crt_errno.c_errno_FUN_00601450
//   XREF to: 00601450 (UNCONDITIONAL_CALL)
// 005070c1: MOV ECX,dword ptr [EAX]
// 005070c3: PUSH ECX
// 005070c4: PUSH 0x63167a
//   XREF to: 0063167a (DATA)
// 005070c9: PUSH ESI
// 005070ca: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005070cf: ADD ESP,0x10
// 005070d2: PUSH 0xad
// 005070d7: PUSH 0x63168b
//   XREF to: 0063168b (DATA)
// 005070dc: PUSH ESI
// 005070dd: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 005070e2: ADD ESP,0xc
// 005070e5: POP EDI
// 005070e6: JMP 0x0050700e
//   XREF to: 0050700e (UNCONDITIONAL_JUMP)
