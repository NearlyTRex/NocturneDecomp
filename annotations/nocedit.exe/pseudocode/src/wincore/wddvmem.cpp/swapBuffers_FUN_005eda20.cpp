// Name: wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
// Address: 005eda20
// Address Range: [[005eda20, 005edc4e]]
// Convention: __cdecl
// Signature: void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20(void)
// Cross-references:
//   core_cloth.cpp_FUN_0043ddf0 (0043ddf0) at 0043dea7 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590 (0043d590) at 0043da5b [UNCONDITIONAL_CALL]
//   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 (00443040) at 00443142 [UNCONDITIONAL_CALL]
//   core_course.cpp_FUN_00443bc0 (00443bc0) at 00443f95 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 (00479330) at 0047968a [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047ce65 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_snapRotationToAxis_FUN_0047c5f0 (0047c5f0) at 0047c615 [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 (004be270) at 004be3ba [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_finishAct_FUN_004e3b90 (004e3b90) at 004e3fe0 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_openSomething_FUN_004e2910 (004e2910) at 004e2ce3 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_rollCredits_FUN_004e4010 (004e4010) at 004e428f [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004dbad1 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004daed0 (004daed0) at 004daf50 [UNCONDITIONAL_CALL]
//   core_level.cpp_CLevelLoader_update_FUN_00504160 (00504160) at 005046e8 [UNCONDITIONAL_CALL]
//   core_main.c_finalizeGameSystems_FUN_00508570 (00508570) at 005086a9 [UNCONDITIONAL_CALL]
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 005080ee [UNCONDITIONAL_CALL]
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 005074e8 [UNCONDITIONAL_CALL]
//   core_main.c_showLicenseAgreement_FUN_005070f0 (005070f0) at 005072da [UNCONDITIONAL_CALL]
//   core_main.c_showPromoScreen_FUN_00508340 (00508340) at 00508448 [UNCONDITIONAL_CALL]
//   core_main.c_waitWithSkip_FUN_005082a0 (005082a0) at 005082b8 [UNCONDITIONAL_CALL]
//   core_menu.cpp_CustomKeySettings_FUN_00511890 (00511890) at 00511b8b [UNCONDITIONAL_CALL]
//   core_menu.cpp_GraphicsOptions_FUN_00510c80 (00510c80) at 0051110f [UNCONDITIONAL_CALL]
//   core_menu.cpp_MonitorCalibrationPressAnyKeyToContinue_FUN_00510a50 (00510a50) at 00510b7c [UNCONDITIONAL_CALL]
//   core_menu.cpp_SetUpGamepadControls_FUN_005104d0 (005104d0) at 005105b0 [UNCONDITIONAL_CALL]
//   core_menu.cpp_SettingMouseSensitivity_FUN_005107c0 (005107c0) at 005109a6 [UNCONDITIONAL_CALL]
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 005126b6 [UNCONDITIONAL_CALL]
//   core_menu.cpp_ShowOptionsScreen_FUN_00512d30 (00512d30) at 00512e4c [UNCONDITIONAL_CALL]
//   core_menu.cpp_configureCustomKeyBindings_FUN_005138e0 (005138e0) at 00514943 [UNCONDITIONAL_CALL]
//   core_menu.cpp_showMainGameMenu_FUN_00512f40 (00512f40) at 005132a2 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_process_FUN_00524250 (00524250) at 00524359 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_run_FUN_00524420 (00524420) at 005245e3 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052bcb0 (0052bcb0) at 0052c3e3 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052ca90 (0052ca90) at 0052cb3c [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 00538781 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DementedMissionEditorSomething_FUN_00537680 (00537680) at 00537872 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_MasterEditorKeysHelpScreen_FUN_00535e70 (00535e70) at 00536a9f [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e53e [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 005399a8 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_syncPlayers_FUN_005401e0 (005401e0) at 0054036c [UNCONDITIONAL_CALL]
//   core_netgame.cpp_FUN_00540550 (00540550) at 0054057b [UNCONDITIONAL_CALL]
//   core_netgame.cpp_FUN_00541390 (00541390) at 00541835 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_initializeNetworkToJoin_FUN_0053f900 (0053f900) at 0053faba [UNCONDITIONAL_CALL]
//   core_procedur.cpp_CreateProceduralWaterFrame_FUN_005542b0 (005542b0) at 005545ca [UNCONDITIONAL_CALL]
//   core_procedur.cpp_ProceduralTextureMenuPrompt_FUN_00554880 (00554880) at 005548bf [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_load_FUN_00569410 (00569410) at 0056a166 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 (0056a470) at 0056a6cc [UNCONDITIONAL_CALL]
//   core_setedit.cpp_BackdropMaybe_FUN_005805a0 (005805a0) at 005806b7 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00581aa0 (00581aa0) at 00581e1d [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 00583af6 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_OpenAndProcessFileMaybe_FUN_00578a20 (00578a20) at 00578c40 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940 (0057a940) at 0057aca4 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 (00584940) at 00584ace [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50 (0057ae50) at 0057b1ef [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057ea51 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 00580ae0 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_00581320 (00581320) at 005813bf [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_00581590 (00581590) at 005817b0 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_00582f30 (00582f30) at 00583150 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_RelatedToDemonLightEditor_FUN_0057bbe0 (0057bbe0) at 0057c00c [UNCONDITIONAL_CALL]
//   core_setedit.cpp_UserInputCreate_FUN_0057d660 (0057d660) at 0057db22 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 (0057c5d0) at 0057c997 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 (005968b0) at 00597807 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_viewModel_FUN_00598fc0 (00598fc0) at 00599163 [UNCONDITIONAL_CALL]
//   engine_2d.c_getInputWithPrompt_FUN_004032c0 (004032c0) at 00403313 [UNCONDITIONAL_CALL]
//   engine_colquant.c_FUN_004406c0 (004406c0) at 0044084a [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 (004b6e10) at 004b70ef [UNCONDITIONAL_CALL]
//   engine_texture.cpp_renderTextureAtlas_FUN_005dd990 (005dd990) at 005dd9b9 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_visualizeTextureAtlas_FUN_00447f20 (00447f20) at 00448086 [UNCONDITIONAL_CALL]
//   shape_design.c_centerObject_FUN_00466610 (00466610) at 004667b0 [UNCONDITIONAL_CALL]
//   shape_design.c_centerVerticesAroundPoint_FUN_0045ea90 (0045ea90) at 0045eb01 [UNCONDITIONAL_CALL]
//   shape_design.c_checkVertexCountLimit_FUN_00460a10 (00460a10) at 00460a9a [UNCONDITIONAL_CALL]
//   shape_design.c_complexPolygonReduction_FUN_00463b30 (00463b30) at 00463be0 [UNCONDITIONAL_CALL]
//   shape_design.c_configureSinglePassPolygonReduction_FUN_00465560 (00465560) at 00465629 [UNCONDITIONAL_CALL]
//   shape_design.c_configureSpatialSplittingPlane_FUN_004617c0 (004617c0) at 00461886 [UNCONDITIONAL_CALL]
//   shape_design.c_cramTextureList_FUN_0046bb80 (0046bb80) at 0046cd41 [UNCONDITIONAL_CALL]
//   shape_design.c_createBoxPrimitive_FUN_0045e520 (0045e520) at 0045e62e [UNCONDITIONAL_CALL]
//   shape_design.c_createRotationalSweepGeometry_FUN_0045e070 (0045e070) at 0045e093 [UNCONDITIONAL_CALL]
//   shape_design.c_crushModel_FUN_00469bd0 (00469bd0) at 00469c5e [UNCONDITIONAL_CALL]
//   shape_design.c_deletePolygonRange_FUN_0045dd70 (0045dd70) at 0045de04 [UNCONDITIONAL_CALL]
//   shape_design.c_detachFaces_FUN_0046eba0 (0046eba0) at 0046ece6 [UNCONDITIONAL_CALL]
//   shape_design.c_displayPalette_FUN_00461560 (00461560) at 00461683 [UNCONDITIONAL_CALL]
//   shape_design.c_exportModelToBIN_FUN_0045aa80 (0045aa80) at 0045ab60 [UNCONDITIONAL_CALL]
//   shape_design.c_exportModelToMDL_FUN_00459e80 (00459e80) at 00459ee4 [UNCONDITIONAL_CALL]
//   shape_design.c_groundCenterObject_FUN_00466a30 (00466a30) at 00466c50 [UNCONDITIONAL_CALL]
//   shape_design.c_interactiveGlobalWeld_FUN_00466040 (00466040) at 004660b1 [UNCONDITIONAL_CALL]
//   shape_design.c_interactiveWeldVertices_FUN_00465e90 (00465e90) at 00465fa2 [UNCONDITIONAL_CALL]
//   shape_design.c_loadModelBinary_FUN_00458170 (00458170) at 004581da [UNCONDITIONAL_CALL]
//   shape_design.c_loadModelFile_FUN_00458ac0 (00458ac0) at 00458e61 [UNCONDITIONAL_CALL]
//   shape_design.c_loadPalette_FUN_0046e810 (0046e810) at 0046e857 [UNCONDITIONAL_CALL]
//   shape_design.c_loadS3DModelFile_FUN_004593a0 (004593a0) at 004593e6 [UNCONDITIONAL_CALL]
//   shape_design.c_mergeAdjacentPolygons_FUN_00462b70 (00462b70) at 00462c3c [UNCONDITIONAL_CALL]
//   shape_design.c_modelExportWizard_FUN_0045a7b0 (0045a7b0) at 0045a9f7 [UNCONDITIONAL_CALL]
//   shape_design.c_optimizePolygonMesh_FUN_004658e0 (004658e0) at 00465b27 [UNCONDITIONAL_CALL]
//   shape_design.c_realignObject_FUN_0045ee70 (0045ee70) at 0045ee93 [UNCONDITIONAL_CALL]
//   shape_design.c_removeUnusedVertices_FUN_00463830 (00463830) at 00463886 [UNCONDITIONAL_CALL]
//   shape_design.c_showFacetPartEditorHelp_FUN_00460ac0 (00460ac0) at 00460d7b [UNCONDITIONAL_CALL]
//   shape_design.c_showFacetPartEditor_FUN_0045f1d0 (0045f1d0) at 0045f313 [UNCONDITIONAL_CALL]
//   shape_design.c_showHelpFile_FUN_00457f00 (00457f00) at 00457faf [UNCONDITIONAL_CALL]
//   shape_design.c_showModelEditor_FUN_00461aa0 (00461aa0) at 00461ac3 [UNCONDITIONAL_CALL]
//   shape_design.c_showModelPartsList_FUN_0045dbe0 (0045dbe0) at 0045dca3 [UNCONDITIONAL_CALL]
//   shape_design.c_showPointEditor_FUN_0045c6c0 (0045c6c0) at 0045ca80 [UNCONDITIONAL_CALL]
//   shape_design.c_showPolygonDetailsList_FUN_0045d9c0 (0045d9c0) at 0045dbc2 [UNCONDITIONAL_CALL]
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f3a2 [UNCONDITIONAL_CALL]
//   shape_design.c_simpleTexture_FUN_00467350 (00467350) at 004673c7 [UNCONDITIONAL_CALL]
//   shape_design.c_sizeModelInOneDimension_FUN_00469850 (00469850) at 0046994d [UNCONDITIONAL_CALL]
//   shape_design.c_sizeModelToXFeet_FUN_00466e40 (00466e40) at 00466ed0 [UNCONDITIONAL_CALL]
//   shape_design.c_sizeModelToYFeet_FUN_00467010 (00467010) at 004670a0 [UNCONDITIONAL_CALL]
//   shape_design.c_sizeModelToZFeet_FUN_00466c70 (00466c70) at 00466d00 [UNCONDITIONAL_CALL]
//   shape_design.c_smoothMesh_FUN_0046ed00 (0046ed00) at 0046ed41 [UNCONDITIONAL_CALL]
//   shape_design.c_squashShapeFor3DMorph_FUN_004685e0 (004685e0) at 00468608 [UNCONDITIONAL_CALL]
//   shape_design.c_tileTextureMaps_FUN_0046a180 (0046a180) at 0046a4c1 [UNCONDITIONAL_CALL]
//   shape_design.c_translateAllVerticesAlongAxis_FUN_0045ec90 (0045ec90) at 0045ed4c [UNCONDITIONAL_CALL]
//   shape_design.c_turnModelInsideOut_FUN_004671e0 (004671e0) at 0046733e [UNCONDITIONAL_CALL]
//   shape_design.c_validateModelTextures_FUN_00459a20 (00459a20) at 00459dc0 [UNCONDITIONAL_CALL]
//   shape_design.c_vertexReducer_FUN_00467850 (00467850) at 004679c6 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 (0049e790) at 0049e832 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870 (0049e870) at 0049e90b [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 (0049fb70) at 0049ffe0 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 (004a0530) at 004a082e [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 (004a3e20) at 004a3eb9 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130 (0049e130) at 0049e399 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showMultiChoiceDialog_FUN_0049e9d0 (0049e9d0) at 0049efe8 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 (0049db10) at 0049dd57 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990 (0051d990) at 0051e005 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051d520 (0051d520) at 0051d80d [UNCONDITIONAL_CALL]
//   shape_multicrm.cpp_CMultiCram_run_FUN_0053ee70 (0053ee70) at 0053f1e1 [UNCONDITIONAL_CALL]
//   shape_quantize.cpp_ColorQuantizationMaybe_FUN_00556490 (00556490) at 00556693 [UNCONDITIONAL_CALL]
//   shape_quantize.cpp_FUN_005568f0 (005568f0) at 00556991 [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_resetGraphicsSystem_FUN_005ed2a0 (005ed2a0) at 005ed483 [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0 (005ecef0) at 005ed25b [UNCONDITIONAL_CALL]
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 (005f2e90) at 005f2ead [UNCONDITIONAL_CALL]
//   wincore_winvideo.cpp_playMovie_FUN_005f4a00 (005f4a00) at 005f4da6 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_wincore_wddvmem_cpp_00657a2b
//   TerminatedCString s_Unable_to_unlock_front_b_00657a42
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_BitsPerPixel = 0x8
//   int g_WindowActive = -0x1
//   void* g_BackBuffer
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   int g_UseExternalRenderer
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   IDirectDrawSurface* g_DirectDrawSurface
//   int g_RenderingInProgress
//   int g_UseSoftwareRendering
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_memset_FUN_005fde40
//   wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630
//   wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580
//   wincore_wddvmem.cpp_videoRestore_FUN_005edc80
//   wincore_windll.cpp_presentToExternalRenderer_FUN_005b7c30
//   wincore_winrun.cpp_processWindowMessages_FUN_005f35e0

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_swapBuffers_FUN_005eda20(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 *puVar5;
  HRESULT HVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  BADSPACEBASE *in_ESP;
  int iVar10;
  int iVar11;
  DDSURFACEDESC_union1 local_7c;
  undefined8 *in_stack_ffffff98;
  undefined8 *local_20;
  undefined8 *local_18;
  int local_14;
  
  puVar9 = (undefined8 *)g_BackBuffer;
  if (g_WindowActive != 0) {
    if (g_UseExternalRenderer != 0) {
      wincore_windll_cpp_presentToExternalRenderer_FUN_005b7c30(0);
      g_RenderingInProgress = 0;
      wincore_winrun_cpp_processWindowMessages_FUN_005f35e0();
      return;
    }
    if (g_RenderingInProgress == 0) {
      if (g_UseSoftwareRendering == 0) {
        local_20 = (undefined8 *)g_BackBuffer;
        iVar11 = g_WindowWidth *
                 ((int)((g_BitsPerPixel + (g_BitsPerPixel >> 0x1f) * -8) -
                       (uint)((g_BitsPerPixel >> 0x1f) << 2 < 0)) >> 3);
        crt_memory_c_memset_FUN_005fde40(&stack0xffffff74,0,0x6c);
        HVar6 = (*g_DirectDrawSurface->vtable->Lock)
                          (g_DirectDrawSurface,(RECT *)0x0,(DDSURFACEDESC *)&stack0xffffff74,1,
                           (void *)0x6c);
        if ((HVar6 == 0) && (in_stack_ffffff98 != (undefined8 *)0x0)) {
          local_14 = 0;
          iVar10 = iVar11;
          local_18 = in_stack_ffffff98;
          if (0 < g_WindowHeight) {
            do {
              do {
                uVar1 = puVar9[1];
                uVar2 = puVar9[2];
                uVar3 = puVar9[3];
                *in_stack_ffffff98 = *puVar9;
                in_stack_ffffff98[1] = uVar1;
                in_stack_ffffff98[2] = uVar2;
                in_stack_ffffff98[3] = uVar3;
                puVar9 = puVar9 + 4;
                in_stack_ffffff98 = in_stack_ffffff98 + 4;
                iVar7 = iVar10 + -0x20;
                bVar4 = 0x1f < iVar10;
                iVar10 = iVar7;
              } while (iVar7 != 0 && bVar4);
              puVar9 = (undefined8 *)((int)local_20 + iVar11);
              in_stack_ffffff98 = (undefined8 *)((int)local_18 + local_7c.lPitch);
              local_14 = local_14 + 1;
              iVar10 = iVar11;
              local_18 = in_stack_ffffff98;
              local_20 = puVar9;
            } while (local_14 < g_WindowHeight);
          }
                    /* this unlocks the front direct draw buffer */
          HVar6 = (*g_DirectDrawSurface->vtable->Unlock)(g_DirectDrawSurface,(void *)0x0);
          if (HVar6 != 0) {
            g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
            g_CurrentLineNumber = 0x36e;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to unlock front buffer");
            g_RenderingInProgress = 0;
            wincore_winrun_cpp_processWindowMessages_FUN_005f35e0();
            return;
          }
        }
        goto LAB_005edaf2;
      }
      g_UseSoftwareRendering = g_UseExternalRenderer;
      wincore_wddvmem_cpp_openScreenDevice_FUN_005ed580();
      iVar11 = 0;
      if (0 < g_WindowHeight) {
        iVar10 = 0;
        do {
          puVar5 = *(undefined1 **)((int)g_ScreenBufferArray + iVar10);
          iVar7 = 0;
          puVar8 = (undefined1 *)puVar9;
          if (0 < g_WindowWidth) {
            do {
              *puVar5 = *puVar8;
              puVar9 = (undefined8 *)(puVar8 + 4);
              puVar5[1] = puVar8[1];
              iVar7 = iVar7 + 1;
              puVar5[2] = puVar8[2];
              puVar5 = puVar5 + 3;
              puVar8 = (undefined1 *)puVar9;
            } while (iVar7 < g_WindowWidth);
          }
          iVar11 = iVar11 + 1;
          iVar10 = iVar10 + 4;
        } while (iVar11 < g_WindowHeight);
      }
      wincore_wddvmem_cpp_closeScreenDevice_FUN_005ed630();
      g_UseSoftwareRendering = 1;
    }
    if (((g_DirectDrawSurface != (IDirectDrawSurface *)0x0) &&
        (HVar6 = (*g_DirectDrawSurface->vtable->Flip)
                           (g_DirectDrawSurface,(IDirectDrawSurface *)0x0,1), HVar6 != 0)) &&
       (HVar6 == SYSTEM_DDERR_SURFACELOST)) {
      wincore_wddvmem_cpp_videoRestore_FUN_005edc80();
    }
  }
LAB_005edaf2:
  g_RenderingInProgress = 0;
  wincore_winrun_cpp_processWindowMessages_FUN_005f35e0();
  return;
}


// Assembly code:
// 005eda20: PUSH EBX
//   Label: wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
// 005eda21: PUSH ESI
// 005eda22: PUSH EDI
// 005eda23: PUSH EBP
// 005eda24: MOV EBP,ESP
// 005eda26: SUB ESP,0x7c
// 005eda29: CMP dword ptr [0x006849a4],0x0
//   XREF to: 006849a4 (READ)
// 005eda30: JZ 0x005edaf2
//   XREF to: 005edaf2 (CONDITIONAL_JUMP)
// 005eda36: MOV ECX,dword ptr [0x02d03e94]
//   XREF to: 02d03e94 (READ)
// 005eda3c: TEST ECX,ECX
// 005eda3e: JNZ 0x005edb06
//   XREF to: 005edb06 (CONDITIONAL_JUMP)
// 005eda44: MOV EBX,dword ptr [0x03f95934]
//   XREF to: 03f95934 (READ)
// 005eda4a: TEST EBX,EBX
// 005eda4c: JNZ 0x005edace
//   XREF to: 005edace (CONDITIONAL_JUMP)
// 005eda52: MOV ESI,dword ptr [0x03f9593c]
//   XREF to: 03f9593c (READ)
// 005eda58: TEST ESI,ESI
// 005eda5a: JZ 0x005edb24
//   XREF to: 005edb24 (CONDITIONAL_JUMP)
// 005eda60: MOV EBX,dword ptr [0x00688010]
//   XREF to: 00688010 (READ)
// 005eda66: MOV dword ptr [0x03f9593c],ECX
//   XREF to: 03f9593c (WRITE)
// 005eda6c: CALL wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580
//   XREF to: 005ed580 (UNCONDITIONAL_CALL)
// 005eda71: MOV ESI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005eda77: XOR EDI,EDI
// 005eda79: TEST ESI,ESI
// 005eda7b: JLE 0x005edabf
//   XREF to: 005edabf (CONDITIONAL_JUMP)
// 005eda7d: XOR ESI,ESI
// 005eda7f: MOV ECX,dword ptr [0x00679394]
//   Label: LAB_005eda7f
//   XREF to: 00679394 (READ)
// 005eda85: MOV EAX,dword ptr [ESI + 0x2cf6a9c]
//   XREF to: 02cf6a9c (READ)
//   XREF to: 02cf6aa0 (READ)
// 005eda8b: XOR EDX,EDX
// 005eda8d: TEST ECX,ECX
// 005eda8f: JLE 0x005edab2
//   XREF to: 005edab2 (CONDITIONAL_JUMP)
// 005eda91: MOV CL,byte ptr [EBX]
//   Label: LAB_005eda91
// 005eda93: MOV byte ptr [EAX],CL
// 005eda95: MOV CL,byte ptr [EBX + 0x1]
// 005eda98: ADD EBX,0x4
// 005eda9b: MOV byte ptr [EAX + 0x1],CL
// 005eda9e: MOV CL,byte ptr [EBX + -0x2]
// 005edaa1: INC EDX
// 005edaa2: MOV byte ptr [EAX + 0x2],CL
// 005edaa5: MOV ECX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 005edaab: ADD EAX,0x3
// 005edaae: CMP EDX,ECX
// 005edab0: JL 0x005eda91
//   XREF to: 005eda91 (CONDITIONAL_JUMP)
// 005edab2: MOV EAX,[0x00679398]
//   Label: LAB_005edab2
//   XREF to: 00679398 (READ)
// 005edab7: INC EDI
// 005edab8: ADD ESI,0x4
// 005edabb: CMP EDI,EAX
// 005edabd: JL 0x005eda7f
//   XREF to: 005eda7f (CONDITIONAL_JUMP)
// 005edabf: CALL wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630
//   Label: LAB_005edabf
//   XREF to: 005ed630 (UNCONDITIONAL_CALL)
// 005edac4: MOV dword ptr [0x03f9593c],0x1
//   XREF to: 03f9593c (WRITE)
// 005edace: MOV EBX,dword ptr [0x03f95924]
//   Label: LAB_005edace
//   XREF to: 03f95924 (READ)
// 005edad4: TEST EBX,EBX
// 005edad6: JZ 0x005edaf2
//   XREF to: 005edaf2 (CONDITIONAL_JUMP)
// 005edad8: PUSH 0x1
// 005edada: PUSH 0x0
// 005edadc: MOV EDX,dword ptr [EBX]
// 005edade: PUSH EBX
// 005edadf: CALL dword ptr [EDX + 0x2c]
// 005edae2: TEST EAX,EAX
// 005edae4: JZ 0x005edaf2
//   XREF to: 005edaf2 (CONDITIONAL_JUMP)
// 005edae6: CMP EAX,0x887601c2
// 005edaeb: JNZ 0x005edaf2
//   XREF to: 005edaf2 (CONDITIONAL_JUMP)
// 005edaed: CALL wincore_wddvmem.cpp_videoRestore_FUN_005edc80
//   XREF to: 005edc80 (UNCONDITIONAL_CALL)
// 005edaf2: XOR ESI,ESI
//   Label: LAB_005edaf2
// 005edaf4: MOV dword ptr [0x03f95934],ESI
//   XREF to: 03f95934 (WRITE)
// 005edafa: CALL wincore_winrun.cpp_processWindowMessages_FUN_005f35e0
//   XREF to: 005f35e0 (UNCONDITIONAL_CALL)
// 005edaff: MOV ESP,EBP
// 005edb01: POP EBP
// 005edb02: POP EDI
// 005edb03: POP ESI
// 005edb04: POP EBX
// 005edb05: RET
// 005edb06: PUSH 0x0
//   Label: LAB_005edb06
// 005edb08: CALL wincore_windll.cpp_presentToExternalRenderer_FUN_005b7c30
//   XREF to: 005b7c30 (UNCONDITIONAL_CALL)
// 005edb0d: ADD ESP,0x4
// 005edb10: XOR ESI,ESI
// 005edb12: MOV dword ptr [0x03f95934],ESI
//   XREF to: 03f95934 (WRITE)
// 005edb18: CALL wincore_winrun.cpp_processWindowMessages_FUN_005f35e0
//   XREF to: 005f35e0 (UNCONDITIONAL_CALL)
// 005edb1d: MOV ESP,EBP
// 005edb1f: POP EBP
// 005edb20: POP EDI
// 005edb21: POP ESI
// 005edb22: POP EBX
// 005edb23: RET
// 005edb24: MOV EAX,[0x00688010]
//   Label: LAB_005edb24
//   XREF to: 00688010 (READ)
// 005edb29: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005edb2c: MOV EAX,[0x0067939c]
//   XREF to: 0067939c (READ)
// 005edb31: MOV EDX,EAX
// 005edb33: SAR EDX,0x1f
// 005edb36: SHL EDX,0x3
// 005edb39: SBB EAX,EDX
// 005edb3b: SAR EAX,0x3
// 005edb3e: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 005edb44: IMUL EDX,EAX
// 005edb47: PUSH 0x6c
// 005edb49: PUSH ECX
// 005edb4a: MOV dword ptr [EBP + -0xc],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 005edb4d: LEA EAX,[EBP + -0x7c]
//   XREF to: Stack[-0x8c] (DATA)
// 005edb50: PUSH EAX
// 005edb51: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005edb56: ADD ESP,0xc
// 005edb59: PUSH EBX
// 005edb5a: PUSH 0x1
// 005edb5c: LEA EBX,[EBP + -0x7c]
//   XREF to: Stack[-0x8c] (DATA)
// 005edb5f: MOV EDI,0x6c
// 005edb64: PUSH EBX
// 005edb65: MOV EAX,[0x03f95924]
//   XREF to: 03f95924 (READ)
// 005edb6a: MOV dword ptr [EBP + -0x7c],EDI
//   XREF to: Stack[-0x8c] (WRITE)
// 005edb6d: PUSH ESI
// 005edb6e: MOV EDX,dword ptr [EAX]
// 005edb70: PUSH EAX
// 005edb71: CALL dword ptr [EDX + 0x64]
// 005edb74: MOV EDX,EAX
// 005edb76: MOV EAX,dword ptr [EBP + -0x58]
//   XREF to: Stack[-0x68] (READ)
// 005edb79: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005edb7c: TEST EDX,EDX
// 005edb7e: JNZ 0x005edaf2
//   XREF to: 005edaf2 (CONDITIONAL_JUMP)
// 005edb84: CMP dword ptr [EBP + -0x8],0x0
//   XREF to: Stack[-0x18] (READ)
// 005edb88: JZ 0x005edaf2
//   XREF to: 005edaf2 (CONDITIONAL_JUMP)
// 005edb8e: MOV ECX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005edb94: MOV dword ptr [EBP + -0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005edb97: TEST ECX,ECX
// 005edb99: JLE 0x005edc00
//   XREF to: 005edc00 (CONDITIONAL_JUMP)
// 005edb9b: MOV ECX,dword ptr [EBP + 0xfffffff4]
//   Label: LAB_005edb9b
//   XREF to: Stack[-0x1c] (READ)
// 005edba1: MOV ESI,dword ptr [EBP + 0xfffffff0]
//   XREF to: Stack[-0x20] (READ)
// 005edba7: MOV EDI,dword ptr [EBP + 0xfffffff8]
//   XREF to: Stack[-0x18] (READ)
// 005edbad: MOVQ MM0,qword ptr [ESI]
//   Label: LAB_005edbad
// 005edbb0: MOVQ MM1,qword ptr [ESI + 0x8]
// 005edbb4: MOVQ MM2,qword ptr [ESI + 0x10]
// 005edbb8: MOVQ MM3,qword ptr [ESI + 0x18]
// 005edbbc: MOVQ qword ptr [EDI],MM0
// 005edbbf: MOVQ qword ptr [EDI + 0x8],MM1
// 005edbc3: MOVQ qword ptr [EDI + 0x10],MM2
// 005edbc7: MOVQ qword ptr [EDI + 0x18],MM3
// 005edbcb: ADD ESI,0x20
// 005edbce: ADD EDI,0x20
// 005edbd1: SUB ECX,0x20
// 005edbd4: JG 0x005edbad
//   XREF to: 005edbad (CONDITIONAL_JUMP)
// 005edbd6: EMMS
// 005edbd8: MOV EAX,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 005edbdb: ADD dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (READ_WRITE)
// 005edbde: MOV EAX,dword ptr [EBP + -0x6c]
//   XREF to: Stack[-0x7c] (READ)
// 005edbe1: ADD dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (READ_WRITE)
// 005edbe4: MOV ECX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 005edbe7: INC ECX
// 005edbe8: MOV EBX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005edbee: MOV dword ptr [EBP + -0x4],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 005edbf1: CMP ECX,EBX
// 005edbf3: JL 0x005edb9b
//   XREF to: 005edb9b (CONDITIONAL_JUMP)
// 005edbf5: LEA EAX,[EAX]
// 005edbfb: LEA EDX,[EDX]
// 005edbfe: MOV EBX,EBX
// 005edc00: PUSH 0x0
//   Label: LAB_005edc00
// 005edc02: MOV EAX,[0x03f95924]
//   XREF to: 03f95924 (READ)
// 005edc07: PUSH EAX
// 005edc08: MOV EDX,dword ptr [EAX]
// 005edc0a: CALL dword ptr [EDX + 0x80]
// 005edc10: TEST EAX,EAX
// 005edc12: JZ 0x005edaf2
//   XREF to: 005edaf2 (CONDITIONAL_JUMP)
// 005edc18: MOV ESI,0x657a2b
//   XREF to: 00657a2b (DATA)
// 005edc1d: MOV EDI,0x36e
// 005edc22: PUSH 0x657a42
//   XREF to: 00657a42 (DATA)
// 005edc27: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 005edc2d: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005edc33: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005edc38: ADD ESP,0x4
// 005edc3b: XOR ESI,ESI
// 005edc3d: MOV dword ptr [0x03f95934],ESI
//   XREF to: 03f95934 (WRITE)
// 005edc43: CALL wincore_winrun.cpp_processWindowMessages_FUN_005f35e0
//   XREF to: 005f35e0 (UNCONDITIONAL_CALL)
// 005edc48: MOV ESP,EBP
// 005edc4a: POP EBP
// 005edc4b: POP EDI
// 005edc4c: POP ESI
// 005edc4d: POP EBX
// 005edc4e: RET
