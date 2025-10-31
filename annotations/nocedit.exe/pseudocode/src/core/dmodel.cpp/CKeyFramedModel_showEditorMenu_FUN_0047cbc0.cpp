// Name: core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0
// Address: 0047cbc0
// Address Range: [[0047cbc0, 0047cdf1] [0047ce5a, 0047d1bb] [0047d250, 0047e805]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0(CKeyFramedModel * this_ptr)
// Cross-references:
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 005077f8 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053af50 (0053af50) at 0053af94 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_No_model_00620667
//   TerminatedCString s_Model_not_crammed_00620672
//   TerminatedCString s_Nocturne_R_Keyframed_Mod_00620699
//   TerminatedCString s_s_1_Load_model_006206c0
//   TerminatedCString s_s_2_Save_model_006206cf
//   TerminatedCString s_s_3_Import_S3D_006206de
//   TerminatedCString s_s_4_Get_model_and_textur_006206ee
//   TerminatedCString s_s_5_Put_model_and_textur_00620716
//   TerminatedCString s_s_6_CramTex_0062073c
//   TerminatedCString s_s_7_Reduce_00620748
//   TerminatedCString s_s_8_Remove_Null_duplicat_00620753
//   TerminatedCString s_s_9_Export_S3D_00620774
//   TerminatedCString s_R_Recenter_bias_00620784
//   TerminatedCString s_G_Ground_bias_00620796
//   TerminatedCString s_B_Bias_model_using_manua_006207a6
//   TerminatedCString s_ACTIVE_006207c8
//   TerminatedCString s_INACTIVE_006207cf
//   TerminatedCString s_S_Scale_006207f7
//   TerminatedCString s_X_Reorient_model_00620801
//   TerminatedCString s_C_Reorient_to_put_model__00620814
//   TerminatedCString s_F1_Hide_menu_00620838
//   TerminatedCString s_D_Demented_TM_Shape_Edit_00620846
//   TerminatedCString s_Model_options_00620864
//   TerminatedCString s_ENABLED_00620873
//   TerminatedCString s_DISABLED_0062087b
//   TerminatedCString s_ENABLED_006208a7
//   TerminatedCString s_DISABLED_006208af
//   TerminatedCString s_Vertex_count_d_006208dd
//   TerminatedCString s_Poly_count_d_006208ee
//   TerminatedCString s_Frame_count_d_006208fd
//   TerminatedCString s_noc_d_pcx_0062090d
//   TerminatedCString s_kfm_00620917
//   TerminatedCString s_models_0062091d
//   TerminatedCString s_Load_Keyframed_model_00620924
//   TerminatedCString s_You_haven_t_crammed_this_00620939
//   TerminatedCString s_kfm_00620967
//   TerminatedCString s_models_0062096b
//   TerminatedCString s_Save_Keyframed_model_00620972
//   TerminatedCString s_Nothing_to_save_00620987
//   TerminatedCString s_models_00620998
//   undefined4 s_odels_00620999
//   undefined4 s_dels\_0062099a
//   undefined4 s_els\_0062099b
//   TerminatedCString s_s3d_006209a0
//   TerminatedCString s_Import_Keyframed_model_006209a6
//   TerminatedCString s_kfm_006209bd
//   undefined4 DAT_006209be
//   undefined4 s_fm_006209bf
//   undefined4 s_m_006209c0
//   TerminatedCString s_kfm_006209c2
//   TerminatedCString s_Get_model_and_textures_f_006209c8
//   TerminatedCString s_models_006209ec
//   TerminatedCString s_s_is_in_mounted_pod_s_006209f3
//   TerminatedCString s_art_00620a0b
//   TerminatedCString s_No_model_00620a0f
//   TerminatedCString s_kfm_00620a3d
//   TerminatedCString s_art_00620a41
//   TerminatedCString s_Nothing_to_cram_00620a45
//   TerminatedCString s_Enter_number_of_crams_00620a56
//   TerminatedCString s_Enter_base_name_for_cram_00620a6c
//   TerminatedCString s_Must_enter_something_00620a85
//   TerminatedCString s_Enter_crams_output_size_00620a9b
//   TerminatedCString s_Cram_size_must_be_64_128_00620ab3
//   TerminatedCString s_Enter_vertex_tolerance_00620ad5
//   TerminatedCString s_Enter_angle_tolerance_de_00620aec
//   TerminatedCString s_Nothing_to_reduce_00620b0c
//   TerminatedCString s_Nothing_to_do_00620b1f
//   TerminatedCString s_Enter_S3D_filename_00620b2e
//   TerminatedCString s_Nothing_to_export_00620b41
//   TerminatedCString s_Nothing_to_recenter_00620b54
//   TerminatedCString s_Nothing_to_bias_00620b69
//   TerminatedCString s_Current_dimensions_on_fr_00620b7a
//   TerminatedCString s_Nothing_to_bias_00620c19
//   TerminatedCString s_Nothing_to_bias_00620c2a
//   TerminatedCString s_Current_dimensions_on_fr_00620c3b
//   TerminatedCString s_f_f_f_00620cee
//   TerminatedCString s_Please_enter_either_a_si_00620cf7
//   TerminatedCString s_Nothing_to_scale_00620d47
//   TerminatedCString s_pth_00620d59
//   TerminatedCString s_data_00620d5f
//   TerminatedCString s_Reorient_using_course_00620d64
//   TerminatedCString s_Can_t_import_multi_frame_00620d7a
//   TerminatedCString s_core_dmodel_cpp_00620dbb
//   TerminatedCString s_Building_exact_collision_00620dce
//   undefined4 DAT_00620def
//   float FLOAT_00620df3 = 3
//   double DOUBLE_00620dfb = 3.14159265350000
//   float FLOAT_00620e03 = 10
//   double DOUBLE_00620e0b = 0.00555555555555555
//   double DOUBLE_00620e13 = 0.00390625
//   double DOUBLE_00620e1b = 256
//   float FLOAT_00620e23 = -1
//   double DOUBLE_00620e2b = -1.57079632675000
//   double DOUBLE_00620e33 = 1.57079632675000
//   double DOUBLE_00620e3b = 40
//   undefined4 DAT_0065c96c
//   TerminatedCString s_t_00670108
//   undefined4 DAT_00670210
//   undefined4 DAT_00670214
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   char* g_CurrentDebugFilename = 0067d200
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CKeyFramedModel* g_KeyFrameModelPoolEnd
//   undefined4 DAT_02c14c88
//   CDemonRenderer g_CDemonRendererInstance
//   CEditorTools g_CEditorToolsPtr
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.game_pixy
//   undefined4 g_CGameInstance.delta_time_float
//   void* g_CKeysPtr
//   int g_CurrentDebugLine
//   undefined4 DAT_0326f0e8
//   undefined4 DAT_0326f0ec
//   undefined4 DAT_0326f0f0
//   undefined4 DAT_0326f0f4
//   undefined4 DAT_0326f0f8
// Function calls:
//   core_course.cpp_CCourse_ctor_FUN_004424c0
//   core_course.cpp_CCourse_dtor_FUN_004424e0
//   core_course.cpp_CCourse_FUN_00442710
//   core_course.cpp_CCourse_load_FUN_00442580
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   core_dmodel.cpp_CKeyFramedModel_applyBias_FUN_0047c370
//   core_dmodel.cpp_CKeyFramedModel_applyVertexBias_FUN_0047c2d0
//   core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830
//   core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010
//   core_dmodel.cpp_CKeyFramedModel_copyTextureFiles_FUN_0047ca50
//   core_dmodel.cpp_CKeyFramedModel_export_FUN_00478e10
//   core_dmodel.cpp_CKeyFramedModel_exportToDSE_FUN_0047e810
//   core_dmodel.cpp_CKeyFramedModel_exportToS3D_FUN_00479f30
//   core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
//   core_dmodel.cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10
//   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330
//   core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0
//   core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0
//   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
//   core_dmodel.cpp_CKeyFramedModel_recenter_FUN_0047c220
//   core_dmodel.cpp_CKeyFramedModel_reducePolygons_FUN_0047aa00
//   core_dmodel.cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0
//   core_dmodel.cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0
//   core_dmodel.cpp_CKeyFramedModel_scale_FUN_0047c4d0
//   core_dmodel.cpp_CKeyFramedModel_scaleUniform_FUN_0047c4a0
//   core_dmodel.cpp_CKeyFramedModel_snapRotationToAxis_FUN_0047c5f0
//   core_dmodel.cpp_copyFile_FUN_0047c930
//   core_dmodel.cpp_freeAllModels_FUN_00478cb0
//   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   crt_file.c_makepath_FUN_005febfc
//   crt_math.c_round_FUN_005fe6b0
//   crt_memory.c_free_FUN_005fe659
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_stdio.c_sscanf_FUN_0060013c
//   crt_string.c_splitpath_FUN_005ff178
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_fillRectColor_FUN_00403170
//   engine_dosio.c_findFile_FUN_00481760
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
//   engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
//   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
//   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
//   engine_pcx.c_saveScreenshotGeneral_FUN_005490c0
//   shape_design.c_calculateTextureQualityLevel_FUN_0046a930
//   shape_design.c_initializeTextureManager_FUN_0046a880
//   shape_design.c_setTextureQualityParameter_FUN_0046a8e0
//   shape_design.c_showShapeEditorMenu_FUN_0046f290
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020
//   shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_004a0300
//   shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
//   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
//   wincore_winrun.cpp_clearKeypresses_FUN_005f2e70
//   wincore_winrun.cpp_processWindowMessages_FUN_005f35e0
//   wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dmodel_cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0(CKeyFramedModel *this_ptr)

{
  char cVar1;
  SRenderVertex *pSVar2;
  CVector3i **ppCVar3;
  CDemonTriangle *pCVar4;
  float fVar5;
  CDemonSet *pCVar6;
  uint uVar7;
  bool bVar8;
  CVector3f *pCVar9;
  undefined4 extraout_EAX;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  CVector3f *pCVar10;
  undefined3 extraout_var_04;
  undefined4 extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  int iVar11;
  int iVar12;
  CKeyFramedModel *pCVar13;
  BADSPACEBASE *in_ESP;
  int iVar14;
  char *pcVar15;
  undefined4 *puVar16;
  int x_pos;
  char *pcVar17;
  CKeyFramedModel *pCVar18;
  byte bVar19;
  float10 fVar20;
  float10 fVar21;
  double dVar22;
  CGame *in_stack_fffff154;
  CMatrix3x3f *this_ptr_00;
  int local_ca8;
  char local_c9c [260];
  char local_b98 [256];
  char local_a98 [256];
  char local_998 [256];
  char local_898 [256];
  char local_798 [256];
  char local_698 [256];
  char local_598 [200];
  char local_4d0 [200];
  char local_408 [200];
  char local_340 [100];
  char local_2dc [100];
  char local_278 [100];
  CMatrix3x4f local_214;
  CMatrix3x3f local_1e4;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  CVector3f local_15c;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  CVector3f local_138;
  CVector3f local_12c;
  float local_120;
  float local_11c;
  float local_118;
  CVector3f local_114;
  CVector3f local_108;
  CVector3f local_fc;
  CCourse local_f0;
  float local_e4;
  float local_e0;
  float local_dc;
  CVector3f local_d8;
  int local_cc;
  int local_c8;
  int local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  CVector3f local_b4;
  float local_a8;
  float local_a4;
  float local_a0;
  CVector3f local_9c;
  CVector3f local_90;
  uint local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  float local_5c;
  float local_58;
  float local_54;
  int local_50;
  int local_4c;
  float local_48;
  SMRGLTextureExtended *local_44;
  SMRGLTextureExtended *local_40;
  int local_3c;
  int local_38;
  float local_34;
  float local_30 [4];
  int local_20;
  CKeyFramedModelInstance *local_1c;
  char local_18 [4];
  char local_14 [4];
  
  bVar19 = 0;
  local_84 = 0;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  local_78 = 0.0;
  local_74 = 0.0;
  local_70 = 0.0;
  local_d8.z = 0.0;
  local_d8.x = 0.0;
  local_d8.y = 0.0;
  local_80 = 28.0;
  local_7c = 15.0;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_fffff154);
  local_6c = 0;
  local_68 = 0;
  local_64 = (uint)(0 < this_ptr->poly_count);
  local_60 = 0;
  wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0
            (g_CGamePtr->game_pixx,g_CGamePtr->game_pixy,0x20);
  local_44 = this_ptr->texture_list;
  local_40 = local_44;
  do {
    engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,0xf8);
    pCVar6 = g_CDemonSetPtr;
    g_CDemonSetPtr->rendering_mode = 1;
    pCVar6->field34_0x15ae74[0] = -0x44;
    pCVar6->field34_0x15ae74[1] = -0x49;
    pCVar6->field34_0x15ae74[2] = -1;
    pCVar6->field34_0x15ae74[3] = -1;
    pCVar6->field34_0x15ae74[4] = -0x44;
    pCVar6->field34_0x15ae74[5] = -0x49;
    pCVar6->field34_0x15ae74[6] = -1;
    pCVar6->field34_0x15ae74[7] = -1;
    pCVar6->field34_0x15ae74[8] = 'D';
    pCVar6->field34_0x15ae74[9] = 'H';
    pCVar6->field34_0x15ae74[10] = '\0';
    pCVar6->field34_0x15ae74[0xb] = '\0';
    pCVar6->field34_0x15ae74[0xc] = '\0';
    pCVar6->field34_0x15ae74[0xd] = '}';
    pCVar6->field34_0x15ae74[0xe] = '\0';
    pCVar6->field34_0x15ae74[0xf] = '\0';
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    iVar11 = g_WindowWidth / 2 + -0x28;
    if (this_ptr->frame_count < 1) {
      engine_2d_c_drawText_FUN_00401fd0("(No model)",iVar11,g_WindowHeight / 2);
    }
    else if (local_64 == 0) {
      engine_2d_c_drawText_FUN_00401fd0("(Model not crammed)",iVar11,g_WindowHeight / 2);
    }
    else {
      this_ptr_00 = &local_1e4;
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(this_ptr_00,&local_d8);
      local_90.z = -local_7c;
      local_90.x = local_78;
      local_90.y = local_74;
      local_1c = (CKeyFramedModelInstance *)local_90.z;
      pCVar9 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         (&local_1e4,&local_b4,&local_90);
      if (&local_90 != pCVar9) {
        local_90.x = pCVar9->x;
        local_90.y = pCVar9->y;
        local_90.z = pCVar9->z;
      }
      engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
                (g_CDemonRendererPtr,(CVector3i *)&local_90);
      engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(g_CDemonRendererPtr);
      engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
                (g_CDemonRendererPtr,local_80);
      local_114.x = 0.0;
      local_114.y = 0.0;
      local_114.z = 0.0;
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                (g_CDemonRendererPtr,&local_114);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr,(CVector3i *)&local_114,(CVector3i *)0x0);
      fVar20 = (float10)local_70;
      crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
      local_1c = (CKeyFramedModelInstance *)(int)ROUND(fVar20);
      core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
                (this_ptr,local_1c,0,(int)this_ptr_00);
      uVar7 = local_68;
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
      iVar11 = extraout_EDX_00;
      if (uVar7 != 0) {
        iVar11 = this_ptr->vertex_count;
        iVar12 = 0;
        if (0 < iVar11) {
          iVar14 = 0;
          do {
            pSVar2 = g_CDemonRendererPtr->vertex_buffer_ptr;
            if ((*(byte *)((int)&(pSVar2->projected_vertex).screen_x + iVar14 + 3) & 0x80) == 0) {
              local_4c = *(int *)((int)&(pSVar2->projected_vertex).screen_y + iVar14) >> 0x10;
              x_pos = *(int *)((int)&(pSVar2->projected_vertex).screen_x + iVar14) >> 0x10;
              if (-1 < x_pos) {
                crt_stdio_c_sprintf_FUN_005fdbd0(local_2dc,"%d");
                engine_2d_c_drawText_FUN_00401fd0(local_2dc,x_pos,local_4c);
                iVar11 = extraout_EDX_02;
              }
            }
            iVar12 = iVar12 + 1;
            iVar14 = iVar14 + 0x30;
          } while (iVar12 < this_ptr->vertex_count);
        }
      }
      if (local_6c != 0) {
        shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(g_CEditorToolsPtr,4.0,3);
        iVar11 = extraout_EDX_01;
      }
      if (local_60 == 0) {
        fVar20 = (float10)local_70;
        crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar11,this_ptr->frame_count));
        local_1c = (CKeyFramedModelInstance *)(int)ROUND(fVar20);
        crt_stdio_c_sprintf_FUN_005fdbd0(local_408,"Frame: %d of %d");
        engine_2d_c_drawText_FUN_00401fd0(local_408,0,g_WindowHeight + -0x37);
      }
    }
    if (local_60 == 0) {
      engine_2d_c_drawText_FUN_00401fd0("Nocturne(R) Keyframed Model Editor(TM)",0,0);
      engine_2d_c_drawText_FUN_00401fd0("1.  Load model",0,0x16);
      engine_2d_c_drawText_FUN_00401fd0("2.  Save model",0,0x21);
      engine_2d_c_drawText_FUN_00401fd0("3.  Import .S3D",0,0x37);
      engine_2d_c_drawText_FUN_00401fd0("4.  Get model and textures from network",0,0x4d);
      engine_2d_c_drawText_FUN_00401fd0("5.  Put model and textures to network",0,0x58);
      engine_2d_c_drawText_FUN_00401fd0("6.  CramTex",0,0x6e);
      engine_2d_c_drawText_FUN_00401fd0("7.  Reduce",0,0x79);
      engine_2d_c_drawText_FUN_00401fd0("8.  Remove Null/duplicate faces.",0,0x84);
      engine_2d_c_drawText_FUN_00401fd0("9.  Export S3D.",0,0x8f);
      engine_2d_c_drawText_FUN_00401fd0("R.  Recenter bias",0,0xa5);
      engine_2d_c_drawText_FUN_00401fd0("G.  Ground bias",0,0xb0);
      engine_2d_c_drawText_FUN_00401fd0("B.  Bias model using manual value",0,0xbb);
      crt_stdio_c_sprintf_FUN_005fdbd0(local_408,"I.  Interactive bias is now %s");
      engine_2d_c_drawText_FUN_00401fd0(local_408,0,0xc6);
      engine_2d_c_drawText_FUN_00401fd0("S.  Scale",0,0xd1);
      engine_2d_c_drawText_FUN_00401fd0("X.  Reorient model",0,0xe7);
      engine_2d_c_drawText_FUN_00401fd0("C.  Reorient to put model on course",0,0xf2);
      engine_2d_c_drawText_FUN_00401fd0("F1. Hide menu",0,0x108);
      engine_2d_c_drawText_FUN_00401fd0("D.  Demented(TM) Shape Editor",0,0x11e);
      engine_2d_c_drawText_FUN_00401fd0("Model options:",0,0x134);
      crt_stdio_c_sprintf_FUN_005fdbd0(local_408,"E.  Exact collision (currently %s)");
      engine_2d_c_drawText_FUN_00401fd0(local_408,0,0x13f);
      crt_stdio_c_sprintf_FUN_005fdbd0(local_408,"T.  Transparent pixel (currently %s)");
      engine_2d_c_drawText_FUN_00401fd0(local_408,0,0x14a);
      crt_stdio_c_sprintf_FUN_005fdbd0(local_408,"Vertex count: %d");
      engine_2d_c_drawText_FUN_00401fd0(local_408,0,g_WindowHeight + -0x2c);
      crt_stdio_c_sprintf_FUN_005fdbd0(local_408,"Poly count: %d");
      engine_2d_c_drawText_FUN_00401fd0(local_408,0,g_WindowHeight + -0x21);
      crt_stdio_c_sprintf_FUN_005fdbd0(local_408,"Frame count: %d");
      engine_2d_c_drawText_FUN_00401fd0(local_408,0,g_WindowHeight + -0x16);
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    local_5c = g_CGamePtr->delta_time_float;
    local_48 = local_5c;
    iVar11 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x38);
    if (iVar11 != 0) {
      local_5c = local_48 * _DAT_00620def;
    }
    iVar11 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
    if (iVar11 != 0) {
      local_5c = local_5c * FLOAT_00620df3;
    }
    local_58 = local_5c * (float)DOUBLE_00620dfb;
    local_54 = local_5c * FLOAT_00620e03;
    local_50 = 1;
    iVar11 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x52);
    if (iVar11 != 0) {
      local_d8.y = local_d8.y + local_58;
      local_50 = 0;
    }
    iVar11 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x53);
    if (iVar11 != 0) {
      local_d8.y = local_d8.y - local_58;
      local_50 = 0;
    }
    iVar11 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4a);
    if (iVar11 != 0) {
      local_d8.x = local_d8.x + local_58;
      local_50 = 0;
    }
    iVar11 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4e);
    if (iVar11 != 0) {
      local_d8.x = local_d8.x - local_58;
      local_50 = 0;
    }
    if (local_d8.x < (float)DOUBLE_00620e2b) {
      local_d8.x = -1.5707964;
    }
    if ((float)DOUBLE_00620e33 < local_d8.x) {
      local_d8.x = 1.5707964;
    }
    iVar11 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0xd);
    if (iVar11 != 0) {
      local_80 = local_80 + 1.0;
    }
    iVar11 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0xc);
    if (iVar11 != 0) {
      local_80 = local_80 + FLOAT_00620e23;
    }
    if ((float)DOUBLE_00620e3b < local_80) {
      local_80 = 40.0;
    }
    if (local_80 < 1.0) {
      local_80 = 1.0;
    }
    if (local_6c == 0) {
      iVar11 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x48);
      if (iVar11 != 0) {
        local_7c = local_7c - local_54;
        local_50 = 0;
      }
      iVar11 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x50);
      if (iVar11 != 0) {
        local_7c = local_7c + local_54;
        local_50 = 0;
      }
      iVar11 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4b);
      if (iVar11 != 0) {
        local_78 = local_78 - local_54;
        local_50 = 0;
      }
      iVar11 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4d);
      if (iVar11 != 0) {
        local_78 = local_78 + local_54;
        local_50 = 0;
      }
      iVar11 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1e);
      if (iVar11 != 0) {
        local_74 = local_74 - local_54;
        local_50 = 0;
      }
      iVar11 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x10);
      if (iVar11 != 0) {
        local_74 = local_74 + local_54;
        local_50 = 0;
      }
      iVar11 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4c);
      if (iVar11 != 0) {
        local_78 = 0.0;
        local_50 = 0;
        local_74 = 0.0;
      }
    }
    else {
      local_18c = 0.0;
      local_188 = 0.0;
      local_184 = 0.0;
      iVar11 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x48);
      if (iVar11 != 0) {
        local_184 = local_184 - local_54;
        local_50 = 0;
      }
      iVar11 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x50);
      if (iVar11 != 0) {
        local_184 = local_184 + local_54;
        local_50 = 0;
      }
      iVar11 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4b);
      if (iVar11 != 0) {
        local_18c = local_18c - local_54;
        local_50 = 0;
      }
      iVar11 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4d);
      if (iVar11 != 0) {
        local_18c = local_18c + local_54;
        local_50 = 0;
      }
      iVar11 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1e);
      if (iVar11 != 0) {
        local_188 = local_188 - local_54;
        local_50 = 0;
      }
      iVar11 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x10);
      if (iVar11 != 0) {
        local_188 = local_188 + local_54;
        local_50 = 0;
      }
      local_cc = (int)ROUND(local_18c * _DAT_0065c96c);
      local_c8 = (int)ROUND(local_188 * _DAT_0065c96c);
      local_c4 = (int)ROUND(local_184 * _DAT_0065c96c);
      if ((local_cc != 0 || local_c8 != 0) || local_c4 != 0) {
        iVar11 = 0;
        for (iVar12 = 0; iVar12 < this_ptr->vertex_count * this_ptr->frame_count;
            iVar12 = iVar12 + 1) {
          ppCVar3 = this_ptr->vertex_list;
          *(int *)(iVar11 + (int)ppCVar3) = *(int *)(iVar11 + (int)ppCVar3) + local_cc;
          *(int *)(iVar11 + 4 + (int)ppCVar3) = *(int *)(iVar11 + 4 + (int)ppCVar3) + local_c8;
          *(int *)(iVar11 + 8 + (int)ppCVar3) = *(int *)(iVar11 + 8 + (int)ppCVar3) + local_c4;
          iVar11 = iVar11 + 0xc;
        }
        core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(this_ptr);
      }
    }
    iVar11 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x3e);
    if (iVar11 != 0) {
      g_KeyFrameModelPoolEnd = (CKeyFramedModel *)(g_KeyFrameModelPoolEnd->model_filename + 1);
      crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_02c14c88,"noc%d.pcx");
      engine_pcx_c_saveScreenshotGeneral_FUN_005490c0(&DAT_02c14c88);
    }
    iVar11 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x4c);
    if (iVar11 != 0) {
      local_d8.y = 0.0;
      local_d8.x = 0.0;
      local_7c = 15.0;
      local_d8.z = 0.0;
    }
    iVar11 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x3b);
    if (iVar11 != 0) {
      local_60 = (uint)(local_60 == 0);
    }
    iVar11 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x34);
    if (iVar11 != 0) {
      local_70 = local_70 + 1.0;
    }
    iVar11 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x33);
    if (iVar11 != 0) {
      local_70 = local_70 + FLOAT_00620e23;
    }
    local_1c = (CKeyFramedModelInstance *)this_ptr->frame_count;
    if (local_70 < (float)(int)local_1c) {
      if (local_70 < 0.0) {
        local_1c = (CKeyFramedModelInstance *)((int)&local_1c[-1].model_ptr + 3);
        local_70 = (float)(int)local_1c;
      }
    }
    else {
      local_70 = 0.0;
    }
    if (local_50 == 0) {
      wincore_winrun_cpp_processWindowMessages_FUN_005f35e0();
      wincore_winrun_cpp_clearKeypresses_FUN_005f2e70();
      wincore_winrun_cpp_processWindowMessages_FUN_005f35e0();
      wincore_winrun_cpp_clearKeypresses_FUN_005f2e70();
    }
    else {
      bVar8 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
      if (CONCAT31(extraout_var,bVar8) != 0) {
        local_84 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
        if (local_84 < 0x42) {
          if (local_84 < 0x35) {
            if (local_84 < 0x32) {
              if ((local_84 == 0x31) &&
                 (iVar11 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                                     (g_CEditorToolsPtr,"Load Keyframed model",
                                      "models","*.kfm",SUB41(local_408,0)),
                 iVar11 != 0)) {
                core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0(this_ptr,local_408);
                local_64 = 1;
              }
            }
            else if (local_84 < 0x33) {
              if (this_ptr->frame_count < 1) {
                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                          (g_CEditorToolsPtr,"Nothing to save!");
              }
              else if (((local_64 != 0) ||
                       (iVar11 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                                           (g_CEditorToolsPtr,"You haven't crammed this model.  Save anyway?"),
                       iVar11 != 0)) &&
                      (bVar8 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                                         (g_CEditorToolsPtr,"Save Keyframed model",
                                          "models",0x620967,SUB41(this_ptr,0)),
                      CONCAT31(extraout_var_00,bVar8) != 0)) {
                core_dmodel_cpp_CKeyFramedModel_export_FUN_00478e10
                          (this_ptr,this_ptr->model_filename);
                local_64 = 1;
              }
            }
            else if (local_84 < 0x34) {
              pcVar15 = "models\\";
              pcVar17 = local_408;
              do {
                cVar1 = *pcVar15;
                *pcVar17 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar15[1];
                pcVar15 = pcVar15 + 2;
                pcVar17[1] = cVar1;
                pcVar17 = pcVar17 + 2;
              } while (cVar1 != '\0');
              bVar8 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                                (g_CEditorToolsPtr,"Import Keyframed model",true,local_408)
              ;
              if (CONCAT31(extraout_var_01,bVar8) != 0) {
                core_dmodel_cpp_CKeyFramedModel_importFromS3D_FUN_00479330(this_ptr,local_408);
                local_64 = 0;
                crt_string_c_splitpath_FUN_005ff178
                          (local_408,(char *)0x0,(char *)0x0,this_ptr->model_filename,(char *)0x0);
                pcVar17 = ".kfm";
                iVar11 = -1;
                pCVar13 = this_ptr;
                do {
                  pCVar18 = pCVar13;
                  if (iVar11 == 0) break;
                  iVar11 = iVar11 + -1;
                  pCVar18 = (CKeyFramedModel *)((int)pCVar13 + (uint)bVar19 * -2 + 1);
                  pcVar15 = pCVar13->model_filename;
                  pCVar13 = pCVar18;
                } while (*pcVar15 != '\0');
                pcVar15 = (char *)((int)&pCVar18[-1].padding + 3);
                do {
                  cVar1 = *pcVar17;
                  *pcVar15 = cVar1;
                  if (cVar1 == '\0') break;
                  cVar1 = pcVar17[1];
                  pcVar17 = pcVar17 + 2;
                  pcVar15[1] = cVar1;
                  pcVar15 = pcVar15 + 2;
                } while (cVar1 != '\0');
              }
            }
            else {
              bVar8 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                                (g_CEditorToolsPtr,"Get model and textures from network",true,
                                 "t:\\");
              if (CONCAT31(extraout_var_04,bVar8) != 0) {
                crt_string_c_splitpath_FUN_005ff178
                          ("t:\\",local_18,local_998,local_698,local_b98);
                crt_file_c_makepath_FUN_005febfc
                          (&stack0xfffff150,(char *)0x0,"models",local_698,local_b98);
                iVar11 = engine_dosio_c_findFile_FUN_00481760((SFoundFileInfo *)&stack0xfffff150);
                if ((iVar11 == 0) || (local_ca8 == 0)) {
                  iVar11 = core_dmodel_cpp_copyFile_FUN_0047c930("t:\\",&stack0xfffff150,1);
                  if (iVar11 != 0) {
                    crt_file_c_makepath_FUN_005febfc
                              (local_408,(char *)0x0,(char *)0x0,local_698,local_b98);
                    iVar11 = 0;
                    core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0(this_ptr,local_408);
                    local_64 = 1;
                    if (0 < this_ptr->texture_count) {
                      pCVar13 = (CKeyFramedModel *)(local_44->base).texture_name;
                      do {
                        iVar12 = core_dmodel_cpp_CKeyFramedModel_copyTextureFiles_FUN_0047ca50
                                           (pCVar13,local_18,local_998,(char *)0x0,"art");
                        if (iVar12 == 0) {
                          core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(this_ptr);
                          break;
                        }
                        iVar11 = iVar11 + 1;
                        pCVar13 = (CKeyFramedModel *)(pCVar13->model_filename + 0x48);
                      } while (iVar11 < this_ptr->texture_count);
                    }
                  }
                }
                else {
                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                            (g_CEditorToolsPtr,"%s is in mounted pod %s");
                }
              }
            }
          }
          else if (local_84 < 0x36) {
            if (this_ptr->frame_count < 1) {
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"No model");
            }
            else {
              do {
                while( true ) {
                  iVar11 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                                     (g_CEditorToolsPtr,"Enter network model filename (*.KFM)",
                                      "t:\\",200,1);
                  if (iVar11 == 0) goto LAB_0047d6c7;
                  crt_string_c_splitpath_FUN_005ff178
                            ("t:\\",local_14,local_a98,local_798,local_898);
                  if (local_898[0] != '\0') break;
                  crt_file_c_makepath_FUN_005febfc
                            ("t:\\",local_14,local_a98,local_798,"kfm");
                }
                core_dmodel_cpp_CKeyFramedModel_export_FUN_00478e10(this_ptr,"t:\\");
                iVar11 = 0;
                if (0 < this_ptr->texture_count) {
                  pCVar13 = (CKeyFramedModel *)(local_40->base).texture_name;
                  do {
                    iVar12 = core_dmodel_cpp_CKeyFramedModel_copyTextureFiles_FUN_0047ca50
                                       (pCVar13,(char *)0x0,"art",local_14,local_a98);
                    if (iVar12 == 0) break;
                    iVar11 = iVar11 + 1;
                    pCVar13 = (CKeyFramedModel *)(pCVar13->model_filename + 0x48);
                  } while (iVar11 < this_ptr->texture_count);
                }
              } while (iVar11 < this_ptr->texture_count);
            }
          }
          else if (local_84 < 0x37) {
            if (this_ptr->frame_count < 1) {
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"Nothing to cram!");
            }
            else {
              local_3c = 1;
              bVar8 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                                (g_CEditorToolsPtr,"Enter number of crams",&local_3c,true,1
                                 ,4,true);
              if (CONCAT31(extraout_var_02,bVar8) != 0) {
                crt_string_c_splitpath_FUN_005ff178
                          (this_ptr->model_filename,(char *)0x0,(char *)0x0,local_408,(char *)0x0);
                shape_design_c_initializeTextureManager_FUN_0046a880(1);
                shape_design_c_setTextureQualityParameter_FUN_0046a8e0(0x40);
                iVar11 = shape_design_c_calculateTextureQualityLevel_FUN_0046a930(local_3c);
                local_408[iVar11] = '\0';
                while (iVar12 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                                          (g_CEditorToolsPtr,"Enter base name for cram",
                                           local_408,iVar11 + 1,1), iVar12 != 0) {
                  if (local_408[0] != '\0') {
                    local_38 = 0x40;
                    goto LAB_0047dc33;
                  }
                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                            (g_CEditorToolsPtr,"Must enter something!");
                }
              }
            }
          }
          else if (local_84 < 0x38) {
            if (this_ptr->frame_count < 1) {
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"Nothing to reduce!");
            }
            else {
              local_34 = 0.01;
              iVar11 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                                 (g_CEditorToolsPtr,"Enter vertex tolerance",&local_34,true
                                  ,0.0,2.0,true);
              if (iVar11 != 0) {
                local_30[0] = 4.0;
                iVar11 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                                   (g_CEditorToolsPtr,"Enter angle tolerance (degrees)",local_30,
                                    true,0.0,90.0,true);
                if (iVar11 != 0) {
                  core_dmodel_cpp_CKeyFramedModel_reducePolygons_FUN_0047aa00
                            (this_ptr,local_34,
                             local_30[0] * (float)DOUBLE_00620dfb * (float)DOUBLE_00620e0b);
                }
              }
            }
          }
          else if (local_84 < 0x39) {
            if (this_ptr->frame_count < 1) {
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"Nothing to do!");
            }
            else {
              core_dmodel_cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0(this_ptr);
              core_dmodel_cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0(this_ptr);
            }
          }
          else if (local_84 == 0x39) {
            if (this_ptr->frame_count < 1) {
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"Nothing to export!");
            }
            else {
              iVar11 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                                 (g_CEditorToolsPtr,"Enter S3D filename",local_c9c,0x104,0)
              ;
              if (iVar11 != 0) {
                core_dmodel_cpp_CKeyFramedModel_exportToS3D_FUN_00479f30(this_ptr,local_c9c);
              }
            }
          }
        }
        else if (local_84 < 0x43) {
          if (this_ptr->frame_count < 1) {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Nothing to bias!");
          }
          else {
            fVar20 = (float10)local_70;
            dVar22 = crt_math_c_round_FUN_005fe6b0
                               ((double)CONCAT44(extraout_EDX_03,this_ptr->frame_count));
            local_1c = (CKeyFramedModelInstance *)(int)ROUND(fVar20);
            pCVar9 = this_ptr->frame_bounds + (int)local_1c * 2;
            local_1a4 = pCVar9->x;
            local_1a0 = pCVar9->y;
            local_19c = pCVar9->z;
            local_198 = pCVar9[1].x;
            local_194 = pCVar9[1].y;
            local_190 = pCVar9[1].z;
            local_30[1] = 0.5;
            local_180 = local_1a4 + local_198;
            local_17c = local_1a0 + local_194;
            local_178 = local_19c + local_190;
            local_c0 = local_180 * 0.5;
            local_bc = local_17c * 0.5;
            local_b8 = local_178 * 0.5;
            local_30[2] = 0.5;
            local_150 = local_1a4 + local_198;
            local_14c = local_1a0 + local_194;
            local_148 = local_19c + local_190;
            local_e4 = local_150 * 0.5;
            local_e0 = local_14c * 0.5;
            local_dc = local_148 * 0.5;
            local_30[3] = 0.5;
            local_a8 = local_1a4 + local_198;
            local_a4 = local_1a0 + local_194;
            local_a0 = local_19c + local_190;
            local_144 = local_a8 * 0.5;
            local_140 = local_a4 * 0.5;
            fVar20 = (float10)local_a0 * (float10)0.5;
            fVar21 = (float10)local_70;
            crt_math_c_round_FUN_005fe6b0
                      ((double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),&local_a8));
            local_13c = (float)fVar20;
            local_1c = (CKeyFramedModelInstance *)(int)ROUND(fVar21);
            crt_stdio_c_sprintf_FUN_005fdbd0(local_598,"Current dimensions on frame %d\nX: (%6.2f ... %6.2f), center = %g\nY: (%6.2f ... %6.2f), center = %g\nZ: (%6.2f ... %6.2f), center = %g\n\nEnter x,y,z bias amount\n");
            iVar11 = shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_004a0300
                               (g_CEditorToolsPtr,local_598,&local_138,false);
            if (iVar11 != 0) {
              core_dmodel_cpp_CKeyFramedModel_applyBias_FUN_0047c370(this_ptr,&local_138);
            }
          }
        }
        else if (local_84 < 0x49) {
          if (local_84 < 0x44) {
            iVar11 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                               (g_CEditorToolsPtr,"Reorient using course","data",
                                "*.pth",SUB41(local_340,0));
            if (iVar11 != 0) {
              core_course_cpp_CCourse_ctor_FUN_004424c0(&local_f0);
              core_course_cpp_CCourse_load_FUN_00442580(&local_f0,local_340);
              core_course_cpp_CCourse_FUN_00442710(&local_f0);
              core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
                        (&local_214,&local_fc,&local_9c);
              iVar11 = 0;
              for (iVar12 = 0; iVar12 < this_ptr->vertex_count; iVar12 = iVar12 + 1) {
                fVar5 = (float)DOUBLE_00620e13;
                local_108.x = (float)*(int *)(iVar11 + (int)this_ptr->vertex_list) * fVar5;
                local_108.y = (float)*(int *)(iVar11 + 4 + (int)this_ptr->vertex_list) * fVar5;
                local_108.z = (float)*(int *)(iVar11 + 8 + (int)this_ptr->vertex_list) * fVar5;
                pCVar10 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                    (&local_15c,&local_108,&local_214);
                pCVar9 = &local_108;
                if (pCVar9 != pCVar10) {
                  local_108.x = pCVar10->x;
                  local_108.y = pCVar10->y;
                  pCVar9 = (CVector3f *)pCVar10->z;
                  local_108.z = (float)pCVar9;
                }
                fVar21 = (float10)DOUBLE_00620e1b;
                fVar20 = (float10)local_108.x * fVar21;
                ppCVar3 = this_ptr->vertex_list;
                dVar22 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_04,pCVar9));
                local_1c = (CKeyFramedModelInstance *)(int)ROUND(fVar20);
                *(CKeyFramedModelInstance **)(iVar11 + (int)ppCVar3) = local_1c;
                fVar20 = (float10)local_108.y * fVar21;
                dVar22 = crt_math_c_round_FUN_005fe6b0
                                   ((double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),
                                                     this_ptr->vertex_list));
                local_1c = (CKeyFramedModelInstance *)(int)ROUND(fVar20);
                *(CKeyFramedModelInstance **)(SUB84(dVar22,0) + iVar11 + 4) = local_1c;
                fVar21 = fVar21 * (float10)local_108.z;
                ppCVar3 = this_ptr->vertex_list;
                crt_math_c_round_FUN_005fe6b0
                          ((double)CONCAT44((int)((ulonglong)dVar22 >> 0x20),local_1c));
                local_1c = (CKeyFramedModelInstance *)(int)ROUND(fVar21);
                *(CKeyFramedModelInstance **)(iVar11 + 8 + (int)ppCVar3) = local_1c;
                iVar11 = iVar11 + 0xc;
              }
              core_course_cpp_CCourse_dtor_FUN_004424e0(&local_f0);
            }
          }
          else if (local_84 < 0x45) {
            if (this_ptr->frame_count < 2) {
              core_dmodel_cpp_CKeyFramedModel_exportToDSE_FUN_0047e810(this_ptr);
              shape_design_c_showShapeEditorMenu_FUN_0046f290();
              core_dmodel_cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10(this_ptr);
            }
            else {
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"Can't import multi-frame model into the demented shape editor...");
            }
          }
          else if (local_84 < 0x46) {
            pCVar4 = this_ptr->collision_triangle_list;
            if (pCVar4 == (CDemonTriangle *)0x0) {
              shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                        (g_CEditorToolsPtr,"Building exact collision list");
              core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830(this_ptr);
            }
            else {
              g_CurrentDebugLine = 0xdca;
              g_CurrentDebugFilename = "..\\core\\dmodel.cpp";
              if (pCVar4 != (CDemonTriangle *)0x0) {
                crt_memory_c_free_FUN_005fe659(&pCVar4[-1].area);
              }
              this_ptr->collision_triangle_count = 0;
              this_ptr->collision_triangle_list = (CDemonTriangle *)0x0;
            }
          }
          else if (local_84 == 0x47) {
            if (this_ptr->frame_count < 1) {
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"Nothing to bias!");
            }
            else {
              fVar20 = (float10)local_70;
              crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_03,this_ptr->frame_count))
              ;
              local_1c = (CKeyFramedModelInstance *)(int)ROUND(fVar20);
              core_dmodel_cpp_CKeyFramedModel_applyVertexBias_FUN_0047c2d0(this_ptr,(int)local_1c);
            }
          }
        }
        else if (local_84 < 0x4a) {
          if (this_ptr->frame_count < 1) {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Nothing to bias!");
          }
          else {
            local_6c = (uint)(local_6c == 0);
          }
        }
        else if (local_84 < 0x54) {
          if (0x51 < local_84) {
            if (local_84 < 0x53) {
              if (this_ptr->frame_count < 1) {
                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                          (g_CEditorToolsPtr,"Nothing to recenter!");
              }
              else {
                fVar20 = (float10)local_70;
                crt_math_c_round_FUN_005fe6b0
                          ((double)CONCAT44(extraout_EDX_03,this_ptr->frame_count));
                local_1c = (CKeyFramedModelInstance *)(int)ROUND(fVar20);
                core_dmodel_cpp_CKeyFramedModel_recenter_FUN_0047c220(this_ptr,(int)local_1c);
              }
            }
            else if (this_ptr->frame_count < 1) {
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"Nothing to scale!");
            }
            else {
              fVar20 = (float10)local_70;
              crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_03,this_ptr->frame_count))
              ;
              local_20 = (int)ROUND(fVar20);
              pCVar9 = this_ptr->frame_bounds + local_20 * 2;
              local_1bc = pCVar9->x;
              local_1b8 = pCVar9->y;
              local_1b4 = pCVar9->z;
              local_1b0 = pCVar9[1].x;
              local_1ac = pCVar9[1].y;
              local_174 = local_1b0 - local_1bc;
              local_1a8 = pCVar9[1].z;
              local_170 = local_1ac - local_1b8;
              local_16c = local_1a8 - local_1b4;
              local_168 = local_174;
              local_164 = local_170;
              local_160 = local_16c;
              local_120 = local_174;
              local_11c = local_170;
              local_118 = local_16c;
              crt_stdio_c_sprintf_FUN_005fdbd0(local_4d0,"Current dimensions on frame %d\nX: (%6.2f ... %6.2f), size = %g\nY: (%6.2f ... %6.2f), size = %g\nZ: (%6.2f ... %6.2f), size = %g\n\nEnter uniform scale factor, or x,y,z scale factor\n");
              puVar16 = &DAT_00670210;
              pcVar17 = local_278;
              for (iVar11 = 0x19; iVar11 != 0; iVar11 = iVar11 + -1) {
                *(undefined4 *)pcVar17 = *puVar16;
                puVar16 = puVar16 + (uint)bVar19 * -2 + 1;
                pcVar17 = pcVar17 + ((uint)bVar19 * -2 + 1) * 4;
              }
              while (iVar11 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                                        (g_CEditorToolsPtr,local_4d0,local_278,100,1), iVar11 != 0)
              {
                iVar11 = crt_stdio_c_sscanf_FUN_0060013c(local_278,"%f,%f,%f");
                if (iVar11 == 3) {
                  core_dmodel_cpp_CKeyFramedModel_scale_FUN_0047c4d0(this_ptr,&local_12c);
                  break;
                }
                if (iVar11 == 1) {
                  core_dmodel_cpp_CKeyFramedModel_scaleUniform_FUN_0047c4a0(this_ptr,local_12c.x);
                  break;
                }
                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                          (g_CEditorToolsPtr,"Please enter either a single scale factor, or x,y,z scale factors on each axis.");
              }
            }
          }
        }
        else if (local_84 < 0x55) {
          this_ptr->transparent_pixel_flag = (uint)(this_ptr->transparent_pixel_flag == 0);
        }
        else if (0x55 < local_84) {
          if (local_84 < 0x57) {
            local_68 = (uint)(local_68 == 0);
          }
          else if (local_84 == 0x58) {
            core_dmodel_cpp_CKeyFramedModel_snapRotationToAxis_FUN_0047c5f0(this_ptr,&local_d8);
            local_d8.z = 0.0;
            local_d8.y = 0.0;
            local_d8.x = 0.0;
          }
        }
      }
    }
LAB_0047d6c7:
    if (local_84 == 0x1b) {
      wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0(0x280,0x1e0,0x20);
      core_dmodel_cpp_freeAllModels_FUN_00478cb0();
      engine_2d_c_clearInputAndWait_FUN_00403260();
      g_CDemonSetPtr->rendering_mode = 0;
      return;
    }
  } while( true );
LAB_0047dc33:
  bVar8 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                    (g_CEditorToolsPtr,"Enter crams output size",&local_38,true,0x40,0x100,
                     true);
  if (CONCAT31(extraout_var_03,bVar8) == 0) goto LAB_0047d6c7;
  if (((local_38 == 0x40) || (local_38 == 0x100)) || (local_38 == 0x80)) {
    local_64 = 1;
    core_dmodel_cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0
              (this_ptr,local_408,local_3c,local_38);
    goto LAB_0047d6c7;
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Cram size must be 64, 128, or 256");
  goto LAB_0047dc33;
}


// Assembly code:
// 0047cbc0: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0
// 0047cbc1: PUSH ESI
// 0047cbc2: PUSH EDI
// 0047cbc3: PUSH EBP
// 0047cbc4: MOV EBP,ESP
// 0047cbc6: SUB ESP,0xea0
// 0047cbcc: SUB EBP,0x7e
// 0047cbcf: XOR EDX,EDX
// 0047cbd1: XOR EBX,EBX
// 0047cbd3: MOV dword ptr [EBP + 0xa],EDX
// 0047cbd6: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0047cbdb: MOV dword ptr [EBP + 0x16],EBX
// 0047cbde: MOV dword ptr [EBP + 0x1a],EBX
// 0047cbe1: MOV dword ptr [EBP + 0x1e],EBX
// 0047cbe4: MOV ECX,0x41e00000
// 0047cbe9: MOV EAX,0x41700000
// 0047cbee: MOV ESI,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 0047cbf4: MOV dword ptr [EBP + -0x42],EBX
// 0047cbf7: MOV dword ptr [EBP + -0x4a],EBX
// 0047cbfa: MOV dword ptr [EBP + -0x46],EBX
// 0047cbfd: PUSH ESI
//   XREF to: 02d81a9c (DATA)
// 0047cbfe: MOV dword ptr [EBP + 0xe],ECX
// 0047cc01: MOV dword ptr [EBP + 0x12],EAX
// 0047cc04: CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
// 0047cc09: MOV EAX,dword ptr [EBP + 0x92]
// 0047cc0f: MOV dword ptr [EBP + 0x22],EBX
// 0047cc12: MOV dword ptr [EBP + 0x26],EBX
// 0047cc15: MOV EDX,dword ptr [EAX + 0x110]
// 0047cc1b: ADD ESP,0x4
// 0047cc1e: TEST EDX,EDX
// 0047cc20: SETG AL
// 0047cc23: AND EAX,0xff
// 0047cc28: MOV dword ptr [EBP + 0x2a],EAX
// 0047cc2b: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 0047cc30: PUSH 0x20
// 0047cc32: MOV dword ptr [EBP + 0x2e],EBX
// 0047cc35: MOV EBX,dword ptr [EAX + 0x4]
//   XREF to: 02d81aa0 (READ)
// 0047cc38: PUSH EBX
// 0047cc39: MOV ESI,dword ptr [EAX]
//   XREF to: 02d81a9c (READ)
// 0047cc3b: PUSH ESI
// 0047cc3c: CALL wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0
//   XREF to: 005ecef0 (UNCONDITIONAL_CALL)
// 0047cc41: MOV EAX,dword ptr [EBP + 0x92]
// 0047cc47: ADD EAX,0x124
// 0047cc4c: ADD ESP,0xc
// 0047cc4f: MOV dword ptr [EBP + 0x4e],EAX
// 0047cc52: MOV dword ptr [EBP + 0x4a],EAX
// 0047cc55: MOV EAX,[0x00679398]
//   Label: LAB_0047cc55
//   XREF to: 00679398 (READ)
// 0047cc5a: PUSH 0xf8
// 0047cc5f: DEC EAX
// 0047cc60: PUSH EAX
// 0047cc61: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0047cc66: DEC EAX
// 0047cc67: PUSH EAX
// 0047cc68: PUSH 0x0
// 0047cc6a: PUSH 0x0
// 0047cc6c: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 0047cc71: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 0047cc76: MOV dword ptr [EAX + 0x15ae70],0x1
//   XREF to: 0326f0e8 (WRITE)
// 0047cc80: MOV dword ptr [EAX + 0x15ae74],0xffffb7bc
//   XREF to: 0326f0ec (WRITE)
// 0047cc8a: MOV dword ptr [EAX + 0x15ae78],0xffffb7bc
//   XREF to: 0326f0f0 (WRITE)
// 0047cc94: MOV dword ptr [EAX + 0x15ae7c],0x4844
//   XREF to: 0326f0f4 (WRITE)
// 0047cc9e: ADD ESP,0x14
// 0047cca1: MOV dword ptr [EAX + 0x15ae80],0x7d00
//   XREF to: 0326f0f8 (WRITE)
// 0047ccab: CALL wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
//   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)
// 0047ccb0: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0047ccb5: MOV EDX,EAX
// 0047ccb7: SAR EDX,0x1f
// 0047ccba: SUB EAX,EDX
// 0047ccbc: SAR EAX,0x1
// 0047ccbe: MOV EBX,EAX
// 0047ccc0: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0047ccc5: MOV EDX,EAX
// 0047ccc7: SAR EDX,0x1f
// 0047ccca: SUB EAX,EDX
// 0047cccc: SAR EAX,0x1
// 0047ccce: MOV ESI,dword ptr [EBP + 0x92]
// 0047ccd4: MOV ESI,dword ptr [ESI + 0x100]
// 0047ccda: SUB EBX,0x28
// 0047ccdd: CMP ESI,0x1
// 0047cce0: JL 0x0047d194
//   XREF to: 0047d194 (CONDITIONAL_JUMP)
// 0047cce6: CMP dword ptr [EBP + 0x2a],0x0
// 0047ccea: JZ 0x0047d1a8
//   XREF to: 0047d1a8 (CONDITIONAL_JUMP)
// 0047ccf0: LEA EAX,[EBP + -0x4a]
// 0047ccf3: PUSH EAX
// 0047ccf4: LEA EAX,[EBP + 0xfffffeaa]
// 0047ccfa: PUSH EAX
// 0047ccfb: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 0047cd00: FLD float ptr [EBP + 0x12]
// 0047cd03: MOV EAX,dword ptr [EBP + 0x16]
// 0047cd06: FCHS
// 0047cd08: MOV dword ptr [EBP + -0x2],EAX
// 0047cd0b: MOV EAX,dword ptr [EBP + 0x1a]
// 0047cd0e: FSTP float ptr [EBP + 0x72]
// 0047cd11: MOV dword ptr [EBP + 0x2],EAX
// 0047cd14: MOV EAX,dword ptr [EBP + 0x72]
// 0047cd17: ADD ESP,0x8
// 0047cd1a: MOV dword ptr [EBP + 0x6],EAX
// 0047cd1d: LEA EAX,[EBP + -0x2]
// 0047cd20: PUSH EAX
// 0047cd21: LEA EAX,[EBP + -0x26]
// 0047cd24: PUSH EAX
// 0047cd25: LEA EAX,[EBP + 0xfffffeaa]
// 0047cd2b: PUSH EAX
// 0047cd2c: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 0047cd31: MOV EBX,EAX
// 0047cd33: LEA EAX,[EBP + -0x2]
// 0047cd36: ADD ESP,0xc
// 0047cd39: CMP EAX,EBX
// 0047cd3b: JZ 0x0047cd4e
//   XREF to: 0047cd4e (CONDITIONAL_JUMP)
// 0047cd3d: MOV EAX,dword ptr [EBX]
// 0047cd3f: MOV dword ptr [EBP + -0x2],EAX
// 0047cd42: MOV EAX,dword ptr [EBX + 0x4]
// 0047cd45: MOV dword ptr [EBP + 0x2],EAX
// 0047cd48: MOV EAX,dword ptr [EBX + 0x8]
// 0047cd4b: MOV dword ptr [EBP + 0x6],EAX
// 0047cd4e: LEA EAX,[EBP + -0x2]
//   Label: LAB_0047cd4e
// 0047cd51: PUSH EAX
// 0047cd52: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 0047cd57: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0047cd58: CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
//   XREF to: 0048c150 (UNCONDITIONAL_CALL)
// 0047cd5d: ADD ESP,0x8
// 0047cd60: LEA EAX,[EBP + -0x4a]
// 0047cd63: PUSH EAX
// 0047cd64: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0047cd6a: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0047cd6b: CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
//   XREF to: 0048c1d0 (UNCONDITIONAL_CALL)
// 0047cd70: ADD ESP,0x8
// 0047cd73: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0047cd79: PUSH dword ptr [EBP + 0xe]
// 0047cd7c: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0047cd7d: CALL engine_drender.cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
//   XREF to: 0048c650 (UNCONDITIONAL_CALL)
// 0047cd82: ADD ESP,0x8
// 0047cd85: LEA EAX,[EBP + 0xffffff7a]
// 0047cd8b: XOR EBX,EBX
// 0047cd8d: PUSH EAX
// 0047cd8e: MOV EAX,[0x006703e8]
//   XREF to: 006703e8 (READ)
// 0047cd93: MOV dword ptr [EBP + 0xffffff7a],EBX
// 0047cd99: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0047cd9a: MOV dword ptr [EBP + 0xffffff7e],EBX
// 0047cda0: MOV dword ptr [EBP + -0x7e],EBX
// 0047cda3: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 0047cda8: ADD ESP,0x8
// 0047cdab: PUSH EBX
// 0047cdac: LEA EAX,[EBP + 0xffffff7a]
// 0047cdb2: PUSH EAX
// 0047cdb3: MOV EDX,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 0047cdb9: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0047cdba: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 0047cdbf: ADD ESP,0xc
// 0047cdc2: FLD float ptr [EBP + 0x1e]
// 0047cdc5: PUSH -0x1
// 0047cdc7: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047cdcc: PUSH EBX
// 0047cdcd: FISTP dword ptr [EBP + 0x72]
// 0047cdd0: MOV ECX,dword ptr [EBP + 0x72]
// 0047cdd3: PUSH ECX
// 0047cdd4: MOV EBX,dword ptr [EBP + 0x92]
// 0047cdda: PUSH EBX
// 0047cddb: CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
//   XREF to: 00477850 (UNCONDITIONAL_CALL)
// 0047cde0: ADD ESP,0x10
// 0047cde3: MOV ESI,dword ptr [0x006703e8]
//   XREF to: 006703e8 (READ)
// 0047cde9: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 0047cdea: MOV EDI,dword ptr [EBP + 0x26]
// 0047cded: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 0047ce5a: MOV ESI,dword ptr [EBP + 0x2e]
//   Label: LAB_0047ce5a
// 0047ce5d: TEST ESI,ESI
// 0047ce5f: JZ 0x0047d250
//   XREF to: 0047d250 (CONDITIONAL_JUMP)
// 0047ce65: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   Label: LAB_0047ce65
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0047ce6a: MOV EBX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 0047ce70: PUSH EBX
//   XREF to: 02d81a9c (DATA)
// 0047ce71: CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   XREF to: 004d7d90 (UNCONDITIONAL_CALL)
// 0047ce76: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 0047ce7b: ADD ESP,0x4
// 0047ce7e: MOV EAX,dword ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 0047ce84: PUSH 0x38
// 0047ce86: MOV dword ptr [EBP + 0x46],EAX
// 0047ce89: MOV dword ptr [EBP + 0x32],EAX
// 0047ce8c: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0047ce91: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0047ce92: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0047ce94: CALL dword ptr [EBX]
// 0047ce96: ADD ESP,0x8
// 0047ce99: TEST EAX,EAX
// 0047ce9b: JZ 0x0047cea9
//   XREF to: 0047cea9 (CONDITIONAL_JUMP)
// 0047ce9d: FLD float ptr [EBP + 0x46]
// 0047cea0: FMUL float ptr [0x00620def]
//   XREF to: 00620def (READ)
// 0047cea6: FSTP float ptr [EBP + 0x32]
// 0047cea9: PUSH 0x2a
//   Label: LAB_0047cea9
// 0047ceab: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0047ceb0: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0047ceb1: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0047ceb3: CALL dword ptr [EBX]
// 0047ceb5: ADD ESP,0x8
// 0047ceb8: TEST EAX,EAX
// 0047ceba: JZ 0x0047cec8
//   XREF to: 0047cec8 (CONDITIONAL_JUMP)
// 0047cebc: FLD float ptr [EBP + 0x32]
// 0047cebf: FMUL float ptr [0x00620df3]
//   XREF to: 00620df3 (READ)
// 0047cec5: FSTP float ptr [EBP + 0x32]
// 0047cec8: FLD float ptr [EBP + 0x32]
//   Label: LAB_0047cec8
// 0047cecb: FLD ST0
// 0047cecd: FMUL double ptr [0x00620dfb]
//   XREF to: 00620dfb (READ)
// 0047ced3: FXCH
// 0047ced5: FMUL float ptr [0x00620e03]
//   XREF to: 00620e03 (READ)
// 0047cedb: MOV ESI,0x1
// 0047cee0: PUSH 0x52
// 0047cee2: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0047cee7: MOV dword ptr [EBP + 0x3e],ESI
// 0047ceea: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0047ceeb: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0047ceed: FXCH
// 0047ceef: FSTP float ptr [EBP + 0x36]
// 0047cef2: FSTP float ptr [EBP + 0x3a]
// 0047cef5: CALL dword ptr [EBX]
// 0047cef7: ADD ESP,0x8
// 0047cefa: TEST EAX,EAX
// 0047cefc: JZ 0x0047cf0c
//   XREF to: 0047cf0c (CONDITIONAL_JUMP)
// 0047cefe: FLD float ptr [EBP + -0x46]
// 0047cf01: XOR EDI,EDI
// 0047cf03: FADD float ptr [EBP + 0x36]
// 0047cf06: MOV dword ptr [EBP + 0x3e],EDI
// 0047cf09: FSTP float ptr [EBP + -0x46]
// 0047cf0c: PUSH 0x53
//   Label: LAB_0047cf0c
// 0047cf0e: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0047cf13: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0047cf14: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0047cf16: CALL dword ptr [EBX]
// 0047cf18: ADD ESP,0x8
// 0047cf1b: TEST EAX,EAX
// 0047cf1d: JZ 0x0047cf2d
//   XREF to: 0047cf2d (CONDITIONAL_JUMP)
// 0047cf1f: FLD float ptr [EBP + -0x46]
// 0047cf22: XOR EAX,EAX
// 0047cf24: FSUB float ptr [EBP + 0x36]
// 0047cf27: MOV dword ptr [EBP + 0x3e],EAX
// 0047cf2a: FSTP float ptr [EBP + -0x46]
// 0047cf2d: PUSH 0x4a
//   Label: LAB_0047cf2d
// 0047cf2f: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0047cf34: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0047cf35: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0047cf37: CALL dword ptr [EBX]
// 0047cf39: ADD ESP,0x8
// 0047cf3c: TEST EAX,EAX
// 0047cf3e: JZ 0x0047cf4e
//   XREF to: 0047cf4e (CONDITIONAL_JUMP)
// 0047cf40: FLD float ptr [EBP + -0x4a]
// 0047cf43: XOR EDX,EDX
// 0047cf45: FADD float ptr [EBP + 0x36]
// 0047cf48: MOV dword ptr [EBP + 0x3e],EDX
// 0047cf4b: FSTP float ptr [EBP + -0x4a]
// 0047cf4e: PUSH 0x4e
//   Label: LAB_0047cf4e
// 0047cf50: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0047cf55: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0047cf56: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0047cf58: CALL dword ptr [EBX]
// 0047cf5a: ADD ESP,0x8
// 0047cf5d: TEST EAX,EAX
// 0047cf5f: JZ 0x0047cf6f
//   XREF to: 0047cf6f (CONDITIONAL_JUMP)
// 0047cf61: FLD float ptr [EBP + -0x4a]
// 0047cf64: XOR ECX,ECX
// 0047cf66: FSUB float ptr [EBP + 0x36]
// 0047cf69: MOV dword ptr [EBP + 0x3e],ECX
// 0047cf6c: FSTP float ptr [EBP + -0x4a]
// 0047cf6f: FLD float ptr [EBP + -0x4a]
//   Label: LAB_0047cf6f
// 0047cf72: FCOMP double ptr [0x00620e2b]
//   XREF to: 00620e2b (READ)
// 0047cf78: FNSTSW AX
// 0047cf7a: SAHF
// 0047cf7b: JNC 0x0047cf84
//   XREF to: 0047cf84 (CONDITIONAL_JUMP)
// 0047cf7d: MOV dword ptr [EBP + -0x4a],0xbfc90fdb
// 0047cf84: FLD float ptr [EBP + -0x4a]
//   Label: LAB_0047cf84
// 0047cf87: FCOMP double ptr [0x00620e33]
//   XREF to: 00620e33 (READ)
// 0047cf8d: FNSTSW AX
// 0047cf8f: SAHF
// 0047cf90: JBE 0x0047cf99
//   XREF to: 0047cf99 (CONDITIONAL_JUMP)
// 0047cf92: MOV dword ptr [EBP + -0x4a],0x3fc90fdb
// 0047cf99: PUSH 0xd
//   Label: LAB_0047cf99
// 0047cf9b: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0047cfa0: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0047cfa1: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0047cfa3: CALL dword ptr [EBX + 0x4]
// 0047cfa6: ADD ESP,0x8
// 0047cfa9: TEST EAX,EAX
// 0047cfab: JZ 0x0047cfb5
//   XREF to: 0047cfb5 (CONDITIONAL_JUMP)
// 0047cfad: FLD1
// 0047cfaf: FADD float ptr [EBP + 0xe]
// 0047cfb2: FSTP float ptr [EBP + 0xe]
// 0047cfb5: PUSH 0xc
//   Label: LAB_0047cfb5
// 0047cfb7: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0047cfbc: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0047cfbd: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0047cfbf: CALL dword ptr [EBX + 0x4]
// 0047cfc2: ADD ESP,0x8
// 0047cfc5: TEST EAX,EAX
// 0047cfc7: JZ 0x0047cfd5
//   XREF to: 0047cfd5 (CONDITIONAL_JUMP)
// 0047cfc9: FLD float ptr [EBP + 0xe]
// 0047cfcc: FADD float ptr [0x00620e23]
//   XREF to: 00620e23 (READ)
// 0047cfd2: FSTP float ptr [EBP + 0xe]
// 0047cfd5: FLD float ptr [EBP + 0xe]
//   Label: LAB_0047cfd5
// 0047cfd8: FCOMP double ptr [0x00620e3b]
//   XREF to: 00620e3b (READ)
// 0047cfde: FNSTSW AX
// 0047cfe0: SAHF
// 0047cfe1: JBE 0x0047cfea
//   XREF to: 0047cfea (CONDITIONAL_JUMP)
// 0047cfe3: MOV dword ptr [EBP + 0xe],0x42200000
// 0047cfea: FLD float ptr [EBP + 0xe]
//   Label: LAB_0047cfea
// 0047cfed: FLD1
// 0047cfef: FCOMPP
// 0047cff1: FNSTSW AX
// 0047cff3: SAHF
// 0047cff4: JBE 0x0047cffd
//   XREF to: 0047cffd (CONDITIONAL_JUMP)
// 0047cff6: MOV dword ptr [EBP + 0xe],0x3f800000
// 0047cffd: CMP dword ptr [EBP + 0x22],0x0
//   Label: LAB_0047cffd
// 0047d001: JZ 0x0047d706
//   XREF to: 0047d706 (CONDITIONAL_JUMP)
// 0047d007: PUSH 0x48
// 0047d009: XOR EDI,EDI
// 0047d00b: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0047d010: MOV dword ptr [EBP + 0xffffff02],EDI
// 0047d016: MOV dword ptr [EBP + 0xffffff06],EDI
// 0047d01c: MOV dword ptr [EBP + 0xffffff0a],EDI
// 0047d022: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0047d023: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0047d025: CALL dword ptr [EBX]
// 0047d027: ADD ESP,0x8
// 0047d02a: TEST EAX,EAX
// 0047d02c: JZ 0x0047d040
//   XREF to: 0047d040 (CONDITIONAL_JUMP)
// 0047d02e: FLD float ptr [EBP + 0xffffff0a]
// 0047d034: FSUB float ptr [EBP + 0x3a]
// 0047d037: MOV dword ptr [EBP + 0x3e],EDI
// 0047d03a: FSTP float ptr [EBP + 0xffffff0a]
// 0047d040: PUSH 0x50
//   Label: LAB_0047d040
// 0047d042: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0047d047: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0047d048: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0047d04a: CALL dword ptr [EBX]
// 0047d04c: ADD ESP,0x8
// 0047d04f: TEST EAX,EAX
// 0047d051: JZ 0x0047d067
//   XREF to: 0047d067 (CONDITIONAL_JUMP)
// 0047d053: FLD float ptr [EBP + 0xffffff0a]
// 0047d059: XOR EBX,EBX
// 0047d05b: FADD float ptr [EBP + 0x3a]
// 0047d05e: MOV dword ptr [EBP + 0x3e],EBX
// 0047d061: FSTP float ptr [EBP + 0xffffff0a]
// 0047d067: PUSH 0x4b
//   Label: LAB_0047d067
// 0047d069: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0047d06e: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0047d06f: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0047d071: CALL dword ptr [EBX]
// 0047d073: ADD ESP,0x8
// 0047d076: TEST EAX,EAX
// 0047d078: JZ 0x0047d08e
//   XREF to: 0047d08e (CONDITIONAL_JUMP)
// 0047d07a: FLD float ptr [EBP + 0xffffff02]
// 0047d080: XOR ESI,ESI
// 0047d082: FSUB float ptr [EBP + 0x3a]
// 0047d085: MOV dword ptr [EBP + 0x3e],ESI
// 0047d088: FSTP float ptr [EBP + 0xffffff02]
// 0047d08e: PUSH 0x4d
//   Label: LAB_0047d08e
// 0047d090: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0047d095: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0047d096: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0047d098: CALL dword ptr [EBX]
// 0047d09a: ADD ESP,0x8
// 0047d09d: TEST EAX,EAX
// 0047d09f: JZ 0x0047d0b5
//   XREF to: 0047d0b5 (CONDITIONAL_JUMP)
// 0047d0a1: FLD float ptr [EBP + 0xffffff02]
// 0047d0a7: XOR EDI,EDI
// 0047d0a9: FADD float ptr [EBP + 0x3a]
// 0047d0ac: MOV dword ptr [EBP + 0x3e],EDI
// 0047d0af: FSTP float ptr [EBP + 0xffffff02]
// 0047d0b5: PUSH 0x1e
//   Label: LAB_0047d0b5
// 0047d0b7: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0047d0bc: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0047d0bd: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0047d0bf: CALL dword ptr [EBX]
// 0047d0c1: ADD ESP,0x8
// 0047d0c4: TEST EAX,EAX
// 0047d0c6: JZ 0x0047d0dc
//   XREF to: 0047d0dc (CONDITIONAL_JUMP)
// 0047d0c8: FLD float ptr [EBP + 0xffffff06]
// 0047d0ce: XOR EAX,EAX
// 0047d0d0: FSUB float ptr [EBP + 0x3a]
// 0047d0d3: MOV dword ptr [EBP + 0x3e],EAX
// 0047d0d6: FSTP float ptr [EBP + 0xffffff06]
// 0047d0dc: PUSH 0x10
//   Label: LAB_0047d0dc
// 0047d0de: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0047d0e3: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0047d0e4: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0047d0e6: CALL dword ptr [EBX]
// 0047d0e8: ADD ESP,0x8
// 0047d0eb: TEST EAX,EAX
// 0047d0ed: JZ 0x0047d103
//   XREF to: 0047d103 (CONDITIONAL_JUMP)
// 0047d0ef: FLD float ptr [EBP + 0xffffff06]
// 0047d0f5: XOR EDX,EDX
// 0047d0f7: FADD float ptr [EBP + 0x3a]
// 0047d0fa: MOV dword ptr [EBP + 0x3e],EDX
// 0047d0fd: FSTP float ptr [EBP + 0xffffff06]
// 0047d103: LEA EBX,[EBP + -0x3e]
//   Label: LAB_0047d103
// 0047d106: LEA EAX,[EBP + 0xffffff02]
// 0047d10c: FLD float ptr [EAX]
// 0047d10e: FMUL float ptr [0x0065c96c]
//   XREF to: 0065c96c (READ)
// 0047d114: FISTP dword ptr [EBX]
// 0047d116: FLD float ptr [EAX + 0x4]
// 0047d119: FMUL float ptr [0x0065c96c]
//   XREF to: 0065c96c (READ)
// 0047d11f: FISTP dword ptr [EBX + 0x4]
// 0047d122: FLD float ptr [EAX + 0x8]
// 0047d125: FMUL float ptr [0x0065c96c]
//   XREF to: 0065c96c (READ)
// 0047d12b: FISTP dword ptr [EBX + 0x8]
// 0047d12e: MOV EAX,dword ptr [EBP + -0x3e]
// 0047d131: MOV ECX,dword ptr [EBP + -0x3a]
// 0047d134: MOV EBX,dword ptr [EBP + -0x36]
// 0047d137: OR EAX,ECX
// 0047d139: OR EAX,EBX
// 0047d13b: JZ 0x0047d546
//   XREF to: 0047d546 (CONDITIONAL_JUMP)
// 0047d141: XOR ESI,ESI
// 0047d143: XOR EDI,EDI
// 0047d145: MOV EBX,dword ptr [EBP + 0x92]
//   Label: LAB_0047d145
// 0047d14b: MOV EAX,dword ptr [EBP + 0x92]
// 0047d151: MOV EDX,dword ptr [EBX + 0x100]
// 0047d157: MOV EAX,dword ptr [EAX + 0x104]
// 0047d15d: IMUL EAX,EDX
// 0047d160: CMP EDI,EAX
// 0047d162: JGE 0x0047d53d
//   XREF to: 0047d53d (CONDITIONAL_JUMP)
// 0047d168: MOV EBX,dword ptr [EBX + 0x10c]
// 0047d16e: MOV EAX,dword ptr [EBP + -0x3e]
// 0047d171: ADD dword ptr [ESI + EBX*0x1],EAX
// 0047d174: MOV ECX,dword ptr [ESI + EBX*0x1 + 0x4]
// 0047d178: MOV EAX,dword ptr [EBP + -0x3a]
// 0047d17b: ADD ECX,EAX
// 0047d17d: MOV dword ptr [ESI + EBX*0x1 + 0x4],ECX
// 0047d181: MOV EDX,dword ptr [ESI + EBX*0x1 + 0x8]
// 0047d185: MOV EAX,dword ptr [EBP + -0x36]
// 0047d188: ADD ESI,0xc
// 0047d18b: ADD EDX,EAX
// 0047d18d: INC EDI
// 0047d18e: MOV dword ptr [ESI + EBX*0x1 + -0x4],EDX
// 0047d192: JMP 0x0047d145
//   XREF to: 0047d145 (UNCONDITIONAL_JUMP)
// 0047d194: PUSH EAX
//   Label: LAB_0047d194
// 0047d195: PUSH EBX
// 0047d196: PUSH 0x620667
//   XREF to: 00620667 (DATA)
// 0047d19b: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0047d1a0: ADD ESP,0xc
// 0047d1a3: JMP 0x0047ce5a
//   XREF to: 0047ce5a (UNCONDITIONAL_JUMP)
// 0047d1a8: PUSH EAX
//   Label: LAB_0047d1a8
// 0047d1a9: PUSH EBX
// 0047d1aa: PUSH 0x620672
//   XREF to: 00620672 (DATA)
// 0047d1af: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0047d1b4: ADD ESP,0xc
// 0047d1b7: JMP 0x0047ce5a
//   XREF to: 0047ce5a (UNCONDITIONAL_JUMP)
// 0047d250: PUSH ESI
//   Label: LAB_0047d250
// 0047d251: PUSH ESI
// 0047d252: PUSH 0x620699
//   XREF to: 00620699 (DATA)
// 0047d257: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0047d25c: ADD ESP,0xc
// 0047d25f: PUSH 0x16
// 0047d261: PUSH ESI
// 0047d262: PUSH 0x6206c0
//   XREF to: 006206c0 (DATA)
// 0047d267: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0047d26c: ADD ESP,0xc
// 0047d26f: PUSH 0x21
// 0047d271: PUSH ESI
// 0047d272: PUSH 0x6206cf
//   XREF to: 006206cf (DATA)
// 0047d277: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0047d27c: ADD ESP,0xc
// 0047d27f: PUSH 0x37
// 0047d281: PUSH ESI
// 0047d282: PUSH 0x6206de
//   XREF to: 006206de (DATA)
// 0047d287: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0047d28c: ADD ESP,0xc
// 0047d28f: PUSH 0x4d
// 0047d291: PUSH ESI
// 0047d292: PUSH 0x6206ee
//   XREF to: 006206ee (DATA)
// 0047d297: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0047d29c: ADD ESP,0xc
// 0047d29f: PUSH 0x58
// 0047d2a1: PUSH ESI
// 0047d2a2: PUSH 0x620716
//   XREF to: 00620716 (DATA)
// 0047d2a7: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0047d2ac: ADD ESP,0xc
// 0047d2af: PUSH 0x6e
// 0047d2b1: PUSH ESI
// 0047d2b2: PUSH 0x62073c
//   XREF to: 0062073c (DATA)
// 0047d2b7: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0047d2bc: ADD ESP,0xc
// 0047d2bf: PUSH 0x79
// 0047d2c1: PUSH ESI
// 0047d2c2: PUSH 0x620748
//   XREF to: 00620748 (DATA)
// 0047d2c7: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0047d2cc: ADD ESP,0xc
// 0047d2cf: PUSH 0x84
// 0047d2d4: PUSH ESI
// 0047d2d5: PUSH 0x620753
//   XREF to: 00620753 (DATA)
// 0047d2da: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0047d2df: ADD ESP,0xc
// 0047d2e2: PUSH 0x8f
// 0047d2e7: PUSH ESI
// 0047d2e8: PUSH 0x620774
//   XREF to: 00620774 (DATA)
// 0047d2ed: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0047d2f2: ADD ESP,0xc
// 0047d2f5: PUSH 0xa5
// 0047d2fa: PUSH ESI
// 0047d2fb: PUSH 0x620784
//   XREF to: 00620784 (DATA)
// 0047d300: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0047d305: ADD ESP,0xc
// 0047d308: PUSH 0xb0
// 0047d30d: PUSH ESI
// 0047d30e: PUSH 0x620796
//   XREF to: 00620796 (DATA)
// 0047d313: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0047d318: ADD ESP,0xc
// 0047d31b: PUSH 0xbb
// 0047d320: PUSH ESI
// 0047d321: PUSH 0x6207a6
//   XREF to: 006207a6 (DATA)
// 0047d326: MOV EDI,dword ptr [EBP + 0x22]
// 0047d329: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0047d32e: ADD ESP,0xc
// 0047d331: TEST EDI,EDI
// 0047d333: JZ 0x0047d51f
//   XREF to: 0047d51f (CONDITIONAL_JUMP)
// 0047d339: MOV EAX,0x6207c8
//   XREF to: 006207c8 (DATA)
// 0047d33e: PUSH EAX
//   Label: LAB_0047d33e
//   XREF to: 006207c8 (DATA)
//   XREF to: 006207cf (DATA)
// 0047d33f: PUSH 0x6207d8
//   XREF to: 006207d8 (DATA)
// 0047d344: LEA EAX,[EBP + 0xfffffc86]
// 0047d34a: PUSH EAX
// 0047d34b: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0047d350: ADD ESP,0xc
// 0047d353: PUSH 0xc6
// 0047d358: PUSH 0x0
// 0047d35a: LEA EAX,[EBP + 0xfffffc86]
// 0047d360: PUSH EAX
// 0047d361: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0047d366: ADD ESP,0xc
// 0047d369: PUSH 0xd1
// 0047d36e: PUSH 0x0
// 0047d370: PUSH 0x6207f7
//   XREF to: 006207f7 (DATA)
// 0047d375: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0047d37a: ADD ESP,0xc
// 0047d37d: PUSH 0xe7
// 0047d382: PUSH 0x0
// 0047d384: PUSH 0x620801
//   XREF to: 00620801 (DATA)
// 0047d389: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0047d38e: ADD ESP,0xc
// 0047d391: PUSH 0xf2
// 0047d396: PUSH 0x0
// 0047d398: PUSH 0x620814
//   XREF to: 00620814 (DATA)
// 0047d39d: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0047d3a2: ADD ESP,0xc
// 0047d3a5: PUSH 0x108
// 0047d3aa: PUSH 0x0
// 0047d3ac: PUSH 0x620838
//   XREF to: 00620838 (DATA)
// 0047d3b1: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0047d3b6: ADD ESP,0xc
// 0047d3b9: PUSH 0x11e
// 0047d3be: PUSH 0x0
// 0047d3c0: PUSH 0x620846
//   XREF to: 00620846 (DATA)
// 0047d3c5: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0047d3ca: ADD ESP,0xc
// 0047d3cd: PUSH 0x134
// 0047d3d2: PUSH 0x0
// 0047d3d4: PUSH 0x620864
//   XREF to: 00620864 (DATA)
// 0047d3d9: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0047d3de: MOV EAX,dword ptr [EBP + 0x92]
// 0047d3e4: MOV EDX,dword ptr [EAX + 0x5698]
// 0047d3ea: ADD ESP,0xc
// 0047d3ed: TEST EDX,EDX
// 0047d3ef: JZ 0x0047d529
//   XREF to: 0047d529 (CONDITIONAL_JUMP)
// 0047d3f5: MOV EAX,0x620873
//   XREF to: 00620873 (DATA)
// 0047d3fa: PUSH EAX
//   Label: LAB_0047d3fa
//   XREF to: 00620873 (DATA)
//   XREF to: 0062087b (DATA)
// 0047d3fb: PUSH 0x620884
//   XREF to: 00620884 (DATA)
// 0047d400: LEA EAX,[EBP + 0xfffffc86]
// 0047d406: PUSH EAX
// 0047d407: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0047d40c: ADD ESP,0xc
// 0047d40f: PUSH 0x13f
// 0047d414: PUSH 0x0
// 0047d416: LEA EAX,[EBP + 0xfffffc86]
// 0047d41c: PUSH EAX
// 0047d41d: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0047d422: MOV EAX,dword ptr [EBP + 0x92]
// 0047d428: MOV ECX,dword ptr [EAX + 0x569c]
// 0047d42e: ADD ESP,0xc
// 0047d431: TEST ECX,ECX
// 0047d433: JZ 0x0047d533
//   XREF to: 0047d533 (CONDITIONAL_JUMP)
// 0047d439: MOV EAX,0x6208a7
//   XREF to: 006208a7 (DATA)
// 0047d43e: PUSH EAX
//   Label: LAB_0047d43e
//   XREF to: 006208a7 (DATA)
//   XREF to: 006208af (DATA)
// 0047d43f: PUSH 0x6208b8
//   XREF to: 006208b8 (DATA)
// 0047d444: LEA EAX,[EBP + 0xfffffc86]
// 0047d44a: PUSH EAX
// 0047d44b: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0047d450: ADD ESP,0xc
// 0047d453: PUSH 0x14a
// 0047d458: PUSH 0x0
// 0047d45a: LEA EAX,[EBP + 0xfffffc86]
// 0047d460: PUSH EAX
// 0047d461: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0047d466: MOV EAX,dword ptr [EBP + 0x92]
// 0047d46c: ADD ESP,0xc
// 0047d46f: MOV EAX,dword ptr [EAX + 0x104]
// 0047d475: PUSH EAX
// 0047d476: PUSH 0x6208dd
//   XREF to: 006208dd (DATA)
// 0047d47b: LEA EAX,[EBP + 0xfffffc86]
// 0047d481: PUSH EAX
// 0047d482: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0047d487: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0047d48c: ADD ESP,0xc
// 0047d48f: SUB EAX,0x2c
// 0047d492: PUSH EAX
// 0047d493: PUSH 0x0
// 0047d495: LEA EAX,[EBP + 0xfffffc86]
// 0047d49b: PUSH EAX
// 0047d49c: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0047d4a1: MOV EAX,dword ptr [EBP + 0x92]
// 0047d4a7: ADD ESP,0xc
// 0047d4aa: MOV EAX,dword ptr [EAX + 0x110]
// 0047d4b0: PUSH EAX
// 0047d4b1: PUSH 0x6208ee
//   XREF to: 006208ee (DATA)
// 0047d4b6: LEA EAX,[EBP + 0xfffffc86]
// 0047d4bc: PUSH EAX
// 0047d4bd: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0047d4c2: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0047d4c7: ADD ESP,0xc
// 0047d4ca: SUB EAX,0x21
// 0047d4cd: PUSH EAX
// 0047d4ce: PUSH 0x0
// 0047d4d0: LEA EAX,[EBP + 0xfffffc86]
// 0047d4d6: PUSH EAX
// 0047d4d7: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0047d4dc: MOV EAX,dword ptr [EBP + 0x92]
// 0047d4e2: ADD ESP,0xc
// 0047d4e5: MOV EAX,dword ptr [EAX + 0x100]
// 0047d4eb: PUSH EAX
// 0047d4ec: PUSH 0x6208fd
//   XREF to: 006208fd (DATA)
// 0047d4f1: LEA EAX,[EBP + 0xfffffc86]
// 0047d4f7: PUSH EAX
// 0047d4f8: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0047d4fd: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0047d502: ADD ESP,0xc
// 0047d505: SUB EAX,0x16
// 0047d508: PUSH EAX
// 0047d509: PUSH 0x0
// 0047d50b: LEA EAX,[EBP + 0xfffffc86]
// 0047d511: PUSH EAX
// 0047d512: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0047d517: ADD ESP,0xc
// 0047d51a: JMP 0x0047ce65
//   XREF to: 0047ce65 (UNCONDITIONAL_JUMP)
// 0047d51f: MOV EAX,0x6207cf
//   Label: LAB_0047d51f
//   XREF to: 006207cf (DATA)
// 0047d524: JMP 0x0047d33e
//   XREF to: 0047d33e (UNCONDITIONAL_JUMP)
// 0047d529: MOV EAX,0x62087b
//   Label: LAB_0047d529
//   XREF to: 0062087b (DATA)
// 0047d52e: JMP 0x0047d3fa
//   XREF to: 0047d3fa (UNCONDITIONAL_JUMP)
// 0047d533: MOV EAX,0x6208af
//   Label: LAB_0047d533
//   XREF to: 006208af (DATA)
// 0047d538: JMP 0x0047d43e
//   XREF to: 0047d43e (UNCONDITIONAL_JUMP)
// 0047d53d: PUSH EBX
//   Label: LAB_0047d53d
// 0047d53e: CALL core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010
//   XREF to: 00478010 (UNCONDITIONAL_CALL)
// 0047d543: ADD ESP,0x4
// 0047d546: PUSH 0x3e
//   Label: LAB_0047d546
// 0047d548: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0047d54d: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0047d54e: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0047d550: CALL dword ptr [EBX + 0x4]
// 0047d553: ADD ESP,0x8
// 0047d556: TEST EAX,EAX
// 0047d558: JZ 0x0047d587
//   XREF to: 0047d587 (CONDITIONAL_JUMP)
// 0047d55a: MOV ECX,dword ptr [0x02c14c84]
//   XREF to: 02c14c84 (READ)
// 0047d560: INC ECX
// 0047d561: PUSH ECX
// 0047d562: PUSH 0x62090d
//   XREF to: 0062090d (DATA)
// 0047d567: PUSH 0x2c14c88
//   XREF to: 02c14c88 (DATA)
// 0047d56c: MOV dword ptr [0x02c14c84],ECX
//   XREF to: 02c14c84 (WRITE)
// 0047d572: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0047d577: ADD ESP,0xc
// 0047d57a: PUSH 0x2c14c88
//   XREF to: 02c14c88 (DATA)
// 0047d57f: CALL engine_pcx.c_saveScreenshotGeneral_FUN_005490c0
//   XREF to: 005490c0 (UNCONDITIONAL_CALL)
// 0047d584: ADD ESP,0x4
// 0047d587: PUSH 0x4c
//   Label: LAB_0047d587
// 0047d589: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0047d58e: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0047d58f: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0047d591: CALL dword ptr [EBX + 0x4]
// 0047d594: ADD ESP,0x8
// 0047d597: TEST EAX,EAX
// 0047d599: JZ 0x0047d5ae
//   XREF to: 0047d5ae (CONDITIONAL_JUMP)
// 0047d59b: XOR ESI,ESI
// 0047d59d: MOV EDX,0x41700000
// 0047d5a2: MOV dword ptr [EBP + -0x46],ESI
// 0047d5a5: MOV dword ptr [EBP + -0x4a],ESI
// 0047d5a8: MOV dword ptr [EBP + 0x12],EDX
// 0047d5ab: MOV dword ptr [EBP + -0x42],ESI
// 0047d5ae: PUSH 0x3b
//   Label: LAB_0047d5ae
// 0047d5b0: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0047d5b5: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0047d5b6: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0047d5b8: CALL dword ptr [EBX + 0x4]
// 0047d5bb: ADD ESP,0x8
// 0047d5be: TEST EAX,EAX
// 0047d5c0: JZ 0x0047d5d1
//   XREF to: 0047d5d1 (CONDITIONAL_JUMP)
// 0047d5c2: CMP dword ptr [EBP + 0x2e],0x0
// 0047d5c6: SETZ AL
// 0047d5c9: AND EAX,0xff
// 0047d5ce: MOV dword ptr [EBP + 0x2e],EAX
// 0047d5d1: PUSH 0x34
//   Label: LAB_0047d5d1
// 0047d5d3: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0047d5d8: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0047d5d9: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0047d5db: CALL dword ptr [EBX + 0x4]
// 0047d5de: ADD ESP,0x8
// 0047d5e1: TEST EAX,EAX
// 0047d5e3: JZ 0x0047d5ed
//   XREF to: 0047d5ed (CONDITIONAL_JUMP)
// 0047d5e5: FLD1
// 0047d5e7: FADD float ptr [EBP + 0x1e]
// 0047d5ea: FSTP float ptr [EBP + 0x1e]
// 0047d5ed: PUSH 0x33
//   Label: LAB_0047d5ed
// 0047d5ef: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0047d5f4: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0047d5f5: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0047d5f7: CALL dword ptr [EBX + 0x4]
// 0047d5fa: ADD ESP,0x8
// 0047d5fd: TEST EAX,EAX
// 0047d5ff: JZ 0x0047d60d
//   XREF to: 0047d60d (CONDITIONAL_JUMP)
// 0047d601: FLD float ptr [EBP + 0x1e]
// 0047d604: FADD float ptr [0x00620e23]
//   XREF to: 00620e23 (READ)
// 0047d60a: FSTP float ptr [EBP + 0x1e]
// 0047d60d: MOV EBX,dword ptr [EBP + 0x92]
//   Label: LAB_0047d60d
// 0047d613: MOV EBX,dword ptr [EBX + 0x100]
// 0047d619: MOV dword ptr [EBP + 0x72],EBX
// 0047d61c: FILD dword ptr [EBP + 0x72]
// 0047d61f: FCOMP float ptr [EBP + 0x1e]
// 0047d622: FNSTSW AX
// 0047d624: SAHF
// 0047d625: JA 0x0047d7f3
//   XREF to: 0047d7f3 (CONDITIONAL_JUMP)
// 0047d62b: XOR EBX,EBX
// 0047d62d: MOV dword ptr [EBP + 0x1e],EBX
// 0047d630: CMP dword ptr [EBP + 0x3e],0x0
//   Label: LAB_0047d630
// 0047d634: JZ 0x0047d810
//   XREF to: 0047d810 (CONDITIONAL_JUMP)
// 0047d63a: CALL wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00
//   XREF to: 005f2f00 (UNCONDITIONAL_CALL)
// 0047d63f: TEST EAX,EAX
// 0047d641: JZ 0x0047d6c7
//   XREF to: 0047d6c7 (CONDITIONAL_JUMP)
// 0047d647: MOV EDI,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0047d64d: PUSH EDI
//   XREF to: 02dcd7d4 (DATA)
// 0047d64e: CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
//   XREF to: 00502470 (UNCONDITIONAL_CALL)
// 0047d653: ADD ESP,0x4
// 0047d656: MOV dword ptr [EBP + 0xa],EAX
// 0047d659: MOV EDI,EAX
// 0047d65b: CMP EAX,0x42
// 0047d65e: JNC 0x0047e48a
//   XREF to: 0047e48a (CONDITIONAL_JUMP)
// 0047d664: CMP EAX,0x35
// 0047d667: JNC 0x0047e708
//   XREF to: 0047e708 (CONDITIONAL_JUMP)
// 0047d66d: CMP EAX,0x32
// 0047d670: JNC 0x0047e734
//   XREF to: 0047e734 (CONDITIONAL_JUMP)
// 0047d676: CMP EAX,0x31
// 0047d679: JNZ 0x0047d6c7
//   XREF to: 0047d6c7 (CONDITIONAL_JUMP)
// 0047d67b: PUSH 0x0
// 0047d67d: LEA EAX,[EBP + 0xfffffc86]
// 0047d683: PUSH EAX
// 0047d684: MOV EAX,0x620917
//   XREF to: 00620917 (DATA)
// 0047d689: PUSH EAX
//   XREF to: 00620917 (DATA)
// 0047d68a: MOV EAX,0x62091d
//   XREF to: 0062091d (DATA)
// 0047d68f: PUSH EAX
//   XREF to: 0062091d (DATA)
// 0047d690: MOV EAX,0x620924
//   XREF to: 00620924 (DATA)
// 0047d695: PUSH EAX
//   XREF to: 00620924 (DATA)
// 0047d696: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047d69c: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 0047d69d: CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   XREF to: 0049f270 (UNCONDITIONAL_CALL)
// 0047d6a2: ADD ESP,0x18
// 0047d6a5: TEST EAX,EAX
// 0047d6a7: JZ 0x0047d6c7
//   XREF to: 0047d6c7 (CONDITIONAL_JUMP)
// 0047d6a9: LEA EAX,[EBP + 0xfffffc86]
// 0047d6af: PUSH EAX
// 0047d6b0: MOV EDI,dword ptr [EBP + 0x92]
// 0047d6b6: PUSH EDI
// 0047d6b7: CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0
//   XREF to: 00476db0 (UNCONDITIONAL_CALL)
// 0047d6bc: MOV EAX,0x1
// 0047d6c1: ADD ESP,0x8
// 0047d6c4: MOV dword ptr [EBP + 0x2a],EAX
// 0047d6c7: CMP dword ptr [EBP + 0xa],0x1b
//   Label: LAB_0047d6c7
// 0047d6cb: JNZ 0x0047cc55
//   XREF to: 0047cc55 (CONDITIONAL_JUMP)
// 0047d6d1: PUSH 0x20
// 0047d6d3: PUSH 0x1e0
// 0047d6d8: PUSH 0x280
// 0047d6dd: CALL wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0
//   XREF to: 005ecef0 (UNCONDITIONAL_CALL)
// 0047d6e2: ADD ESP,0xc
// 0047d6e5: CALL core_dmodel.cpp_freeAllModels_FUN_00478cb0
//   XREF to: 00478cb0 (UNCONDITIONAL_CALL)
// 0047d6ea: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0047d6ef: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 0047d6f4: MOV dword ptr [EAX + 0x15ae70],0x0
//   XREF to: 0326f0e8 (WRITE)
// 0047d6fe: LEA ESP,[EBP + 0x7e]
// 0047d701: POP EBP
// 0047d702: POP EDI
// 0047d703: POP ESI
// 0047d704: POP EBX
// 0047d705: RET
// 0047d706: PUSH 0x48
//   Label: LAB_0047d706
// 0047d708: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0047d70d: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0047d70e: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0047d710: CALL dword ptr [EBX]
// 0047d712: ADD ESP,0x8
// 0047d715: TEST EAX,EAX
// 0047d717: JZ 0x0047d727
//   XREF to: 0047d727 (CONDITIONAL_JUMP)
// 0047d719: FLD float ptr [EBP + 0x12]
// 0047d71c: XOR ECX,ECX
// 0047d71e: FSUB float ptr [EBP + 0x3a]
// 0047d721: MOV dword ptr [EBP + 0x3e],ECX
// 0047d724: FSTP float ptr [EBP + 0x12]
// 0047d727: PUSH 0x50
//   Label: LAB_0047d727
// 0047d729: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0047d72e: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0047d72f: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0047d731: CALL dword ptr [EBX]
// 0047d733: ADD ESP,0x8
// 0047d736: TEST EAX,EAX
// 0047d738: JZ 0x0047d748
//   XREF to: 0047d748 (CONDITIONAL_JUMP)
// 0047d73a: FLD float ptr [EBP + 0x12]
// 0047d73d: XOR EBX,EBX
// 0047d73f: FADD float ptr [EBP + 0x3a]
// 0047d742: MOV dword ptr [EBP + 0x3e],EBX
// 0047d745: FSTP float ptr [EBP + 0x12]
// 0047d748: PUSH 0x4b
//   Label: LAB_0047d748
// 0047d74a: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0047d74f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0047d750: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0047d752: CALL dword ptr [EBX]
// 0047d754: ADD ESP,0x8
// 0047d757: TEST EAX,EAX
// 0047d759: JZ 0x0047d769
//   XREF to: 0047d769 (CONDITIONAL_JUMP)
// 0047d75b: FLD float ptr [EBP + 0x16]
// 0047d75e: XOR ESI,ESI
// 0047d760: FSUB float ptr [EBP + 0x3a]
// 0047d763: MOV dword ptr [EBP + 0x3e],ESI
// 0047d766: FSTP float ptr [EBP + 0x16]
// 0047d769: PUSH 0x4d
//   Label: LAB_0047d769
// 0047d76b: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0047d770: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0047d771: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0047d773: CALL dword ptr [EBX]
// 0047d775: ADD ESP,0x8
// 0047d778: TEST EAX,EAX
// 0047d77a: JZ 0x0047d78a
//   XREF to: 0047d78a (CONDITIONAL_JUMP)
// 0047d77c: FLD float ptr [EBP + 0x16]
// 0047d77f: XOR EDI,EDI
// 0047d781: FADD float ptr [EBP + 0x3a]
// 0047d784: MOV dword ptr [EBP + 0x3e],EDI
// 0047d787: FSTP float ptr [EBP + 0x16]
// 0047d78a: PUSH 0x1e
//   Label: LAB_0047d78a
// 0047d78c: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0047d791: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0047d792: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0047d794: CALL dword ptr [EBX]
// 0047d796: ADD ESP,0x8
// 0047d799: TEST EAX,EAX
// 0047d79b: JZ 0x0047d7ab
//   XREF to: 0047d7ab (CONDITIONAL_JUMP)
// 0047d79d: FLD float ptr [EBP + 0x1a]
// 0047d7a0: XOR EAX,EAX
// 0047d7a2: FSUB float ptr [EBP + 0x3a]
// 0047d7a5: MOV dword ptr [EBP + 0x3e],EAX
// 0047d7a8: FSTP float ptr [EBP + 0x1a]
// 0047d7ab: PUSH 0x10
//   Label: LAB_0047d7ab
// 0047d7ad: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0047d7b2: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0047d7b3: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0047d7b5: CALL dword ptr [EBX]
// 0047d7b7: ADD ESP,0x8
// 0047d7ba: TEST EAX,EAX
// 0047d7bc: JZ 0x0047d7cc
//   XREF to: 0047d7cc (CONDITIONAL_JUMP)
// 0047d7be: FLD float ptr [EBP + 0x1a]
// 0047d7c1: XOR EDX,EDX
// 0047d7c3: FADD float ptr [EBP + 0x3a]
// 0047d7c6: MOV dword ptr [EBP + 0x3e],EDX
// 0047d7c9: FSTP float ptr [EBP + 0x1a]
// 0047d7cc: PUSH 0x4c
//   Label: LAB_0047d7cc
// 0047d7ce: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0047d7d3: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0047d7d4: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0047d7d6: CALL dword ptr [EBX]
// 0047d7d8: ADD ESP,0x8
// 0047d7db: TEST EAX,EAX
// 0047d7dd: JZ 0x0047d546
//   XREF to: 0047d546 (CONDITIONAL_JUMP)
// 0047d7e3: XOR ECX,ECX
// 0047d7e5: MOV dword ptr [EBP + 0x16],ECX
// 0047d7e8: MOV dword ptr [EBP + 0x3e],ECX
// 0047d7eb: MOV dword ptr [EBP + 0x1a],ECX
// 0047d7ee: JMP 0x0047d546
//   XREF to: 0047d546 (UNCONDITIONAL_JUMP)
// 0047d7f3: FLDZ
//   Label: LAB_0047d7f3
// 0047d7f5: FCOMP float ptr [EBP + 0x1e]
// 0047d7f8: FNSTSW AX
// 0047d7fa: SAHF
// 0047d7fb: JBE 0x0047d630
//   XREF to: 0047d630 (CONDITIONAL_JUMP)
// 0047d801: DEC EBX
// 0047d802: MOV dword ptr [EBP + 0x72],EBX
// 0047d805: FILD dword ptr [EBP + 0x72]
// 0047d808: FSTP float ptr [EBP + 0x1e]
// 0047d80b: JMP 0x0047d630
//   XREF to: 0047d630 (UNCONDITIONAL_JUMP)
// 0047d810: CALL wincore_winrun.cpp_processWindowMessages_FUN_005f35e0
//   Label: LAB_0047d810
//   XREF to: 005f35e0 (UNCONDITIONAL_CALL)
// 0047d815: CALL wincore_winrun.cpp_clearKeypresses_FUN_005f2e70
//   XREF to: 005f2e70 (UNCONDITIONAL_CALL)
// 0047d81a: CALL wincore_winrun.cpp_processWindowMessages_FUN_005f35e0
//   XREF to: 005f35e0 (UNCONDITIONAL_CALL)
// 0047d81f: CALL wincore_winrun.cpp_clearKeypresses_FUN_005f2e70
//   XREF to: 005f2e70 (UNCONDITIONAL_CALL)
// 0047d824: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047d829: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_0047d829
// 0047d82f: MOV EAX,dword ptr [EAX + 0x100]
// 0047d835: TEST EAX,EAX
// 0047d837: JLE 0x0047d8a2
//   XREF to: 0047d8a2 (CONDITIONAL_JUMP)
// 0047d839: CMP dword ptr [EBP + 0x2a],0x0
// 0047d83d: JZ 0x0047d884
//   XREF to: 0047d884 (CONDITIONAL_JUMP)
// 0047d83f: PUSH 0x1
//   Label: LAB_0047d83f
// 0047d841: MOV EDI,dword ptr [EBP + 0x92]
// 0047d847: PUSH EDI
// 0047d848: PUSH 0x620967
//   XREF to: 00620967 (DATA)
// 0047d84d: PUSH 0x62096b
//   XREF to: 0062096b (DATA)
// 0047d852: PUSH 0x620972
//   XREF to: 00620972 (DATA)
// 0047d857: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047d85c: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0047d85d: CALL shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
//   XREF to: 0049fb70 (UNCONDITIONAL_CALL)
// 0047d862: ADD ESP,0x18
// 0047d865: TEST EAX,EAX
// 0047d867: JZ 0x0047d6c7
//   XREF to: 0047d6c7 (CONDITIONAL_JUMP)
// 0047d86d: PUSH EDI
// 0047d86e: PUSH EDI
// 0047d86f: MOV EBX,0x1
// 0047d874: CALL core_dmodel.cpp_CKeyFramedModel_export_FUN_00478e10
//   XREF to: 00478e10 (UNCONDITIONAL_CALL)
// 0047d879: MOV dword ptr [EBP + 0x2a],EBX
// 0047d87c: ADD ESP,0x8
// 0047d87f: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047d884: MOV EAX,0x620939
//   Label: LAB_0047d884
//   XREF to: 00620939 (DATA)
// 0047d889: PUSH EAX
//   XREF to: 00620939 (DATA)
// 0047d88a: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047d890: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 0047d891: CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   XREF to: 0049f060 (UNCONDITIONAL_CALL)
// 0047d896: ADD ESP,0x8
// 0047d899: TEST EAX,EAX
// 0047d89b: JNZ 0x0047d83f
//   XREF to: 0047d83f (CONDITIONAL_JUMP)
// 0047d89d: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047d8a2: MOV EAX,0x620987
//   Label: LAB_0047d8a2
//   XREF to: 00620987 (DATA)
// 0047d8a7: PUSH EAX
//   XREF to: 00620987 (DATA)
// 0047d8a8: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047d8ae: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0047d8af: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0047d8b4: ADD ESP,0x8
// 0047d8b7: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047d8bc: MOV ESI,0x620998
//   Label: LAB_0047d8bc
//   XREF to: 00620998 (DATA)
// 0047d8c1: LEA EDI,[EBP + 0xfffffc86]
// 0047d8c7: PUSH EDI
// 0047d8c8: MOV AL,byte ptr [ESI]
//   Label: LAB_0047d8c8
//   XREF to: 00620998 (READ)
//   XREF to: 0062099a (READ)
// 0047d8ca: MOV byte ptr [EDI],AL
// 0047d8cc: CMP AL,0x0
// 0047d8ce: JZ 0x0047d8e0
//   XREF to: 0047d8e0 (CONDITIONAL_JUMP)
// 0047d8d0: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00620999 (READ)
//   XREF to: 0062099b (READ)
// 0047d8d3: ADD ESI,0x2
// 0047d8d6: MOV byte ptr [EDI + 0x1],AL
// 0047d8d9: ADD EDI,0x2
// 0047d8dc: CMP AL,0x0
// 0047d8de: JNZ 0x0047d8c8
//   XREF to: 0047d8c8 (CONDITIONAL_JUMP)
// 0047d8e0: POP EDI
//   Label: LAB_0047d8e0
// 0047d8e1: PUSH 0x1
// 0047d8e3: LEA EAX,[EBP + 0xfffffc86]
// 0047d8e9: PUSH EAX
// 0047d8ea: MOV EAX,0x6209a0
//   XREF to: 006209a0 (DATA)
// 0047d8ef: PUSH EAX
//   XREF to: 006209a0 (DATA)
// 0047d8f0: MOV EAX,0x6209a6
//   XREF to: 006209a6 (DATA)
// 0047d8f5: PUSH EAX
//   XREF to: 006209a6 (DATA)
// 0047d8f6: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047d8fc: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 0047d8fd: CALL shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
//   XREF to: 0049f420 (UNCONDITIONAL_CALL)
// 0047d902: ADD ESP,0x14
// 0047d905: TEST EAX,EAX
// 0047d907: JZ 0x0047d6c7
//   XREF to: 0047d6c7 (CONDITIONAL_JUMP)
// 0047d90d: LEA EAX,[EBP + 0xfffffc86]
// 0047d913: PUSH EAX
// 0047d914: MOV EDI,dword ptr [EBP + 0x92]
// 0047d91a: PUSH EDI
// 0047d91b: CALL core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330
//   XREF to: 00479330 (UNCONDITIONAL_CALL)
// 0047d920: ADD ESP,0x8
// 0047d923: XOR EAX,EAX
// 0047d925: PUSH EAX
// 0047d926: PUSH EDI
// 0047d927: PUSH EAX
// 0047d928: PUSH EAX
// 0047d929: MOV dword ptr [EBP + 0x2a],EAX
// 0047d92c: LEA EAX,[EBP + 0xfffffc86]
// 0047d932: PUSH EAX
// 0047d933: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 0047d938: ADD ESP,0x14
// 0047d93b: MOV ESI,0x6209bd
//   XREF to: 006209bd (DATA)
// 0047d940: PUSH EDI
// 0047d941: SUB ECX,ECX
// 0047d943: DEC ECX
// 0047d944: MOV AL,0x0
// 0047d946: SCASB.REPNE ES:EDI
// 0047d948: DEC EDI
// 0047d949: MOV AL,byte ptr [ESI]
//   Label: LAB_0047d949
//   XREF to: 006209bd (READ)
//   XREF to: 006209bf (READ)
// 0047d94b: MOV byte ptr [EDI],AL
// 0047d94d: CMP AL,0x0
// 0047d94f: JZ 0x0047d961
//   XREF to: 0047d961 (CONDITIONAL_JUMP)
// 0047d951: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006209be (READ)
//   XREF to: 006209c0 (READ)
// 0047d954: ADD ESI,0x2
// 0047d957: MOV byte ptr [EDI + 0x1],AL
// 0047d95a: ADD EDI,0x2
// 0047d95d: CMP AL,0x0
// 0047d95f: JNZ 0x0047d949
//   XREF to: 0047d949 (CONDITIONAL_JUMP)
// 0047d961: POP EDI
//   Label: LAB_0047d961
// 0047d962: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047d967: PUSH 0x1
//   Label: LAB_0047d967
// 0047d969: LEA EAX,[EBP + 0xfffff1de]
// 0047d96f: PUSH EAX
// 0047d970: PUSH 0x670108
//   XREF to: 00670108 (DATA)
// 0047d975: CALL core_dmodel.cpp_copyFile_FUN_0047c930
//   XREF to: 0047c930 (UNCONDITIONAL_CALL)
// 0047d97a: ADD ESP,0xc
// 0047d97d: TEST EAX,EAX
// 0047d97f: JZ 0x0047d6c7
//   XREF to: 0047d6c7 (CONDITIONAL_JUMP)
// 0047d985: LEA EAX,[EBP + 0xfffff4f6]
// 0047d98b: PUSH EAX
// 0047d98c: LEA EAX,[EBP + 0xfffff9f6]
// 0047d992: PUSH EAX
// 0047d993: PUSH 0x0
// 0047d995: PUSH 0x0
// 0047d997: LEA EAX,[EBP + 0xfffffc86]
// 0047d99d: PUSH EAX
// 0047d99e: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 0047d9a3: ADD ESP,0x14
// 0047d9a6: LEA EAX,[EBP + 0xfffffc86]
// 0047d9ac: PUSH EAX
// 0047d9ad: MOV EAX,dword ptr [EBP + 0x92]
// 0047d9b3: PUSH EAX
// 0047d9b4: XOR EDI,EDI
// 0047d9b6: CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0
//   XREF to: 00476db0 (UNCONDITIONAL_CALL)
// 0047d9bb: MOV EAX,dword ptr [EBP + 0x92]
// 0047d9c1: MOV EDX,0x1
// 0047d9c6: ADD ESP,0x8
// 0047d9c9: MOV ECX,dword ptr [EAX + 0x120]
// 0047d9cf: MOV dword ptr [EBP + 0x2a],EDX
// 0047d9d2: TEST ECX,ECX
// 0047d9d4: JLE 0x0047d6c7
//   XREF to: 0047d6c7 (CONDITIONAL_JUMP)
// 0047d9da: MOV EBX,dword ptr [EBP + 0x4a]
// 0047d9dd: ADD EBX,0x8
// 0047d9e0: XOR ESI,ESI
// 0047d9e2: PUSH 0x620a0b
//   Label: LAB_0047d9e2
//   XREF to: 00620a0b (DATA)
// 0047d9e7: PUSH ESI
// 0047d9e8: LEA EAX,[EBP + 0xfffff6f6]
// 0047d9ee: PUSH EAX
// 0047d9ef: LEA EAX,[EBP + 0x76]
// 0047d9f2: PUSH EAX
// 0047d9f3: PUSH EBX
// 0047d9f4: CALL core_dmodel.cpp_CKeyFramedModel_copyTextureFiles_FUN_0047ca50
//   XREF to: 0047ca50 (UNCONDITIONAL_CALL)
// 0047d9f9: ADD ESP,0x14
// 0047d9fc: TEST EAX,EAX
// 0047d9fe: JZ 0x0047da19
//   XREF to: 0047da19 (CONDITIONAL_JUMP)
// 0047da00: MOV EAX,dword ptr [EBP + 0x92]
// 0047da06: INC EDI
// 0047da07: MOV EDX,dword ptr [EAX + 0x120]
// 0047da0d: ADD EBX,0x48
// 0047da10: CMP EDI,EDX
// 0047da12: JL 0x0047d9e2
//   XREF to: 0047d9e2 (CONDITIONAL_JUMP)
// 0047da14: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047da19: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_0047da19
// 0047da1f: PUSH EAX
// 0047da20: CALL core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
//   XREF to: 00477690 (UNCONDITIONAL_CALL)
// 0047da25: ADD ESP,0x4
// 0047da28: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047da2d: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_0047da2d
// 0047da33: MOV EAX,dword ptr [EAX + 0x100]
// 0047da39: CMP EAX,0x1
// 0047da3c: JL 0x0047db0d
//   XREF to: 0047db0d (CONDITIONAL_JUMP)
// 0047da42: MOV EDI,0x670108
//   XREF to: 00670108 (DATA)
// 0047da47: PUSH 0x1
//   Label: LAB_0047da47
// 0047da49: PUSH 0xc8
// 0047da4e: PUSH EDI
//   XREF to: 00670108 (DATA)
// 0047da4f: PUSH 0x620a18
//   XREF to: 00620a18 (DATA)
// 0047da54: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047da5a: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0047da5b: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 0047da60: ADD ESP,0x14
// 0047da63: TEST EAX,EAX
// 0047da65: JZ 0x0047d6c7
//   XREF to: 0047d6c7 (CONDITIONAL_JUMP)
// 0047da6b: LEA EAX,[EBP + 0xfffff7f6]
// 0047da71: PUSH EAX
// 0047da72: LEA EAX,[EBP + 0xfffff8f6]
// 0047da78: PUSH EAX
// 0047da79: LEA EAX,[EBP + 0xfffff5f6]
// 0047da7f: PUSH EAX
// 0047da80: LEA EAX,[EBP + 0x7a]
// 0047da83: PUSH EAX
// 0047da84: PUSH EDI
//   XREF to: 00670108 (DATA)
// 0047da85: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 0047da8a: MOV CH,byte ptr [EBP + 0xfffff7f6]
// 0047da90: ADD ESP,0x14
// 0047da93: TEST CH,CH
// 0047da95: JZ 0x0047db27
//   XREF to: 0047db27 (CONDITIONAL_JUMP)
// 0047da9b: PUSH EDI
//   XREF to: 00670108 (DATA)
// 0047da9c: MOV EBX,dword ptr [EBP + 0x92]
// 0047daa2: PUSH EBX
// 0047daa3: CALL core_dmodel.cpp_CKeyFramedModel_export_FUN_00478e10
//   XREF to: 00478e10 (UNCONDITIONAL_CALL)
// 0047daa8: MOV EAX,dword ptr [EBP + 0x92]
// 0047daae: ADD ESP,0x8
// 0047dab1: MOV ESI,dword ptr [EAX + 0x120]
// 0047dab7: XOR EBX,EBX
// 0047dab9: TEST ESI,ESI
// 0047dabb: JLE 0x0047daf6
//   XREF to: 0047daf6 (CONDITIONAL_JUMP)
// 0047dabd: MOV ESI,dword ptr [EBP + 0x4e]
// 0047dac0: ADD ESI,0x8
// 0047dac3: LEA EAX,[EBP + 0xfffff5f6]
//   Label: LAB_0047dac3
// 0047dac9: PUSH EAX
// 0047daca: LEA EAX,[EBP + 0x7a]
// 0047dacd: PUSH EAX
// 0047dace: PUSH 0x620a41
//   XREF to: 00620a41 (DATA)
// 0047dad3: PUSH 0x0
// 0047dad5: PUSH ESI
// 0047dad6: CALL core_dmodel.cpp_CKeyFramedModel_copyTextureFiles_FUN_0047ca50
//   XREF to: 0047ca50 (UNCONDITIONAL_CALL)
// 0047dadb: ADD ESP,0x14
// 0047dade: TEST EAX,EAX
// 0047dae0: JZ 0x0047daf6
//   XREF to: 0047daf6 (CONDITIONAL_JUMP)
// 0047dae2: MOV EAX,dword ptr [EBP + 0x92]
// 0047dae8: INC EBX
// 0047dae9: MOV EDX,dword ptr [EAX + 0x120]
// 0047daef: ADD ESI,0x48
// 0047daf2: CMP EBX,EDX
// 0047daf4: JL 0x0047dac3
//   XREF to: 0047dac3 (CONDITIONAL_JUMP)
// 0047daf6: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_0047daf6
// 0047dafc: CMP EBX,dword ptr [EAX + 0x120]
// 0047db02: JGE 0x0047d6c7
//   XREF to: 0047d6c7 (CONDITIONAL_JUMP)
// 0047db08: JMP 0x0047da47
//   XREF to: 0047da47 (UNCONDITIONAL_JUMP)
// 0047db0d: MOV EAX,0x620a0f
//   Label: LAB_0047db0d
//   XREF to: 00620a0f (DATA)
// 0047db12: PUSH EAX
//   XREF to: 00620a0f (DATA)
// 0047db13: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047db19: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 0047db1a: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0047db1f: ADD ESP,0x8
// 0047db22: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047db27: PUSH 0x620a3d
//   Label: LAB_0047db27
//   XREF to: 00620a3d (DATA)
// 0047db2c: LEA EAX,[EBP + 0xfffff8f6]
// 0047db32: PUSH EAX
// 0047db33: LEA EAX,[EBP + 0xfffff5f6]
// 0047db39: PUSH EAX
// 0047db3a: LEA EAX,[EBP + 0x7a]
// 0047db3d: PUSH EAX
// 0047db3e: PUSH EDI
//   XREF to: 00670108 (DATA)
// 0047db3f: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 0047db44: ADD ESP,0x14
// 0047db47: JMP 0x0047da47
//   XREF to: 0047da47 (UNCONDITIONAL_JUMP)
// 0047db4c: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_0047db4c
// 0047db52: MOV EAX,dword ptr [EAX + 0x100]
// 0047db58: CMP EAX,0x1
// 0047db5b: JGE 0x0047db77
//   XREF to: 0047db77 (CONDITIONAL_JUMP)
// 0047db5d: MOV EAX,0x620a45
//   XREF to: 00620a45 (DATA)
// 0047db62: PUSH EAX
//   XREF to: 00620a45 (DATA)
// 0047db63: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047db69: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0047db6a: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0047db6f: ADD ESP,0x8
// 0047db72: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047db77: MOV ESI,0x1
//   Label: LAB_0047db77
// 0047db7c: PUSH ESI
// 0047db7d: PUSH 0x4
// 0047db7f: PUSH ESI
// 0047db80: PUSH ESI
// 0047db81: LEA EAX,[EBP + 0x52]
// 0047db84: PUSH EAX
// 0047db85: MOV EAX,0x620a56
//   XREF to: 00620a56 (DATA)
// 0047db8a: PUSH EAX
//   XREF to: 00620a56 (DATA)
// 0047db8b: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047db91: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 0047db92: MOV dword ptr [EBP + 0x52],ESI
// 0047db95: CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020
//   XREF to: 004a0020 (UNCONDITIONAL_CALL)
// 0047db9a: ADD ESP,0x1c
// 0047db9d: TEST EAX,EAX
// 0047db9f: JZ 0x0047d6c7
//   XREF to: 0047d6c7 (CONDITIONAL_JUMP)
// 0047dba5: PUSH 0x0
// 0047dba7: LEA EAX,[EBP + 0xfffffc86]
// 0047dbad: PUSH EAX
// 0047dbae: PUSH 0x0
// 0047dbb0: PUSH 0x0
// 0047dbb2: MOV EAX,dword ptr [EBP + 0x92]
// 0047dbb8: PUSH EAX
// 0047dbb9: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 0047dbbe: ADD ESP,0x14
// 0047dbc1: PUSH ESI
// 0047dbc2: CALL shape_design.c_initializeTextureManager_FUN_0046a880
//   XREF to: 0046a880 (UNCONDITIONAL_CALL)
// 0047dbc7: ADD ESP,0x4
// 0047dbca: PUSH 0x40
// 0047dbcc: CALL shape_design.c_setTextureQualityParameter_FUN_0046a8e0
//   XREF to: 0046a8e0 (UNCONDITIONAL_CALL)
// 0047dbd1: ADD ESP,0x4
// 0047dbd4: MOV EDX,dword ptr [EBP + 0x52]
// 0047dbd7: PUSH EDX
// 0047dbd8: CALL shape_design.c_calculateTextureQualityLevel_FUN_0046a930
//   XREF to: 0046a930 (UNCONDITIONAL_CALL)
// 0047dbdd: ADD ESP,0x4
// 0047dbe0: XOR DH,DH
// 0047dbe2: LEA EDI,[EAX + ESI*0x1]
// 0047dbe5: MOV byte ptr [EAX + EBP*0x1 + 0xfffffc86],DH
// 0047dbec: XOR EBX,EBX
// 0047dbee: PUSH 0x1
//   Label: LAB_0047dbee
// 0047dbf0: PUSH EDI
// 0047dbf1: LEA EAX,[EBP + 0xfffffc86]
// 0047dbf7: PUSH EAX
// 0047dbf8: PUSH 0x620a6c
//   XREF to: 00620a6c (DATA)
// 0047dbfd: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047dc02: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0047dc03: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 0047dc08: ADD ESP,0x14
// 0047dc0b: TEST EAX,EAX
// 0047dc0d: JZ 0x0047d6c7
//   XREF to: 0047d6c7 (CONDITIONAL_JUMP)
// 0047dc13: CMP BL,byte ptr [EBP + 0xfffffc86]
// 0047dc19: JZ 0x0047dcaa
//   XREF to: 0047dcaa (CONDITIONAL_JUMP)
// 0047dc1f: MOV EDX,0x40
// 0047dc24: MOV EBX,EDX
// 0047dc26: MOV dword ptr [EBP + 0x56],EDX
// 0047dc29: MOV ESI,0x100
// 0047dc2e: MOV EDI,0x1
// 0047dc33: PUSH EDI
//   Label: LAB_0047dc33
// 0047dc34: PUSH ESI
// 0047dc35: PUSH EBX
// 0047dc36: PUSH EDI
// 0047dc37: LEA EAX,[EBP + 0x56]
// 0047dc3a: PUSH EAX
// 0047dc3b: PUSH 0x620a9b
//   XREF to: 00620a9b (DATA)
// 0047dc40: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047dc45: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0047dc46: CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020
//   XREF to: 004a0020 (UNCONDITIONAL_CALL)
// 0047dc4b: ADD ESP,0x1c
// 0047dc4e: TEST EAX,EAX
// 0047dc50: JZ 0x0047d6c7
//   XREF to: 0047d6c7 (CONDITIONAL_JUMP)
// 0047dc56: MOV EDX,dword ptr [EBP + 0x56]
// 0047dc59: CMP EBX,EDX
// 0047dc5b: JZ 0x0047dc7f
//   XREF to: 0047dc7f (CONDITIONAL_JUMP)
// 0047dc5d: CMP ESI,EDX
// 0047dc5f: JZ 0x0047dc7f
//   XREF to: 0047dc7f (CONDITIONAL_JUMP)
// 0047dc61: CMP EDX,0x80
// 0047dc67: JZ 0x0047dc7f
//   XREF to: 0047dc7f (CONDITIONAL_JUMP)
// 0047dc69: PUSH 0x620ab3
//   XREF to: 00620ab3 (DATA)
// 0047dc6e: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047dc74: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0047dc75: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0047dc7a: ADD ESP,0x8
// 0047dc7d: JMP 0x0047dc33
//   XREF to: 0047dc33 (UNCONDITIONAL_JUMP)
// 0047dc7f: MOV ECX,dword ptr [EBP + 0x56]
//   Label: LAB_0047dc7f
// 0047dc82: PUSH ECX
// 0047dc83: MOV EBX,dword ptr [EBP + 0x52]
// 0047dc86: PUSH EBX
// 0047dc87: LEA EAX,[EBP + 0xfffffc86]
// 0047dc8d: PUSH EAX
// 0047dc8e: MOV ESI,dword ptr [EBP + 0x92]
// 0047dc94: MOV EDI,0x1
// 0047dc99: PUSH ESI
// 0047dc9a: MOV dword ptr [EBP + 0x2a],EDI
// 0047dc9d: CALL core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0
//   XREF to: 0047a3e0 (UNCONDITIONAL_CALL)
// 0047dca2: ADD ESP,0x10
// 0047dca5: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047dcaa: PUSH 0x620a85
//   Label: LAB_0047dcaa
//   XREF to: 00620a85 (DATA)
// 0047dcaf: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047dcb5: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0047dcb6: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0047dcbb: ADD ESP,0x8
// 0047dcbe: JMP 0x0047dbee
//   XREF to: 0047dbee (UNCONDITIONAL_JUMP)
// 0047dcc3: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_0047dcc3
// 0047dcc9: MOV EAX,dword ptr [EAX + 0x100]
// 0047dccf: TEST EAX,EAX
// 0047dcd1: JLE 0x0047dd6a
//   XREF to: 0047dd6a (CONDITIONAL_JUMP)
// 0047dcd7: PUSH 0x1
// 0047dcd9: PUSH 0x40000000
// 0047dcde: PUSH 0x0
// 0047dce0: PUSH 0x1
// 0047dce2: LEA EAX,[EBP + 0x5a]
// 0047dce5: PUSH EAX
// 0047dce6: MOV EAX,0x620ad5
//   XREF to: 00620ad5 (DATA)
// 0047dceb: PUSH EAX
//   XREF to: 00620ad5 (DATA)
// 0047dcec: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047dcf1: MOV EDI,0x3c23d70a
// 0047dcf6: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0047dcf7: MOV dword ptr [EBP + 0x5a],EDI
// 0047dcfa: CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   XREF to: 004a00f0 (UNCONDITIONAL_CALL)
// 0047dcff: ADD ESP,0x1c
// 0047dd02: TEST EAX,EAX
// 0047dd04: JZ 0x0047d6c7
//   XREF to: 0047d6c7 (CONDITIONAL_JUMP)
// 0047dd0a: PUSH 0x1
// 0047dd0c: PUSH 0x42b40000
// 0047dd11: PUSH 0x0
// 0047dd13: PUSH 0x1
// 0047dd15: LEA EAX,[EBP + 0x5e]
// 0047dd18: PUSH EAX
// 0047dd19: MOV EAX,0x620aec
//   XREF to: 00620aec (DATA)
// 0047dd1e: PUSH EAX
//   XREF to: 00620aec (DATA)
// 0047dd1f: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047dd25: MOV EDX,0x40800000
// 0047dd2a: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0047dd2b: MOV dword ptr [EBP + 0x5e],EDX
// 0047dd2e: CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   XREF to: 004a00f0 (UNCONDITIONAL_CALL)
// 0047dd33: ADD ESP,0x1c
// 0047dd36: TEST EAX,EAX
// 0047dd38: JZ 0x0047d6c7
//   XREF to: 0047d6c7 (CONDITIONAL_JUMP)
// 0047dd3e: FLD float ptr [EBP + 0x5e]
// 0047dd41: FMUL double ptr [0x00620dfb]
//   XREF to: 00620dfb (READ)
// 0047dd47: FMUL double ptr [0x00620e0b]
//   XREF to: 00620e0b (READ)
// 0047dd4d: SUB ESP,0x4
// 0047dd50: MOV EBX,dword ptr [EBP + 0x92]
// 0047dd56: FSTP float ptr [ESP]
// 0047dd59: PUSH dword ptr [EBP + 0x5a]
// 0047dd5c: PUSH EBX
// 0047dd5d: CALL core_dmodel.cpp_CKeyFramedModel_reducePolygons_FUN_0047aa00
//   XREF to: 0047aa00 (UNCONDITIONAL_CALL)
// 0047dd62: ADD ESP,0xc
// 0047dd65: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047dd6a: MOV EAX,0x620b0c
//   Label: LAB_0047dd6a
//   XREF to: 00620b0c (DATA)
// 0047dd6f: PUSH EAX
//   XREF to: 00620b0c (DATA)
// 0047dd70: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047dd76: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 0047dd77: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0047dd7c: ADD ESP,0x8
// 0047dd7f: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047dd84: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_0047dd84
// 0047dd8a: MOV EAX,dword ptr [EAX + 0x100]
// 0047dd90: TEST EAX,EAX
// 0047dd92: JLE 0x0047ddb7
//   XREF to: 0047ddb7 (CONDITIONAL_JUMP)
// 0047dd94: MOV ECX,dword ptr [EBP + 0x92]
// 0047dd9a: PUSH ECX
// 0047dd9b: CALL core_dmodel.cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0
//   XREF to: 0047bdb0 (UNCONDITIONAL_CALL)
// 0047dda0: ADD ESP,0x4
// 0047dda3: MOV EBX,dword ptr [EBP + 0x92]
// 0047dda9: PUSH EBX
// 0047ddaa: CALL core_dmodel.cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0
//   XREF to: 0047bbc0 (UNCONDITIONAL_CALL)
// 0047ddaf: ADD ESP,0x4
// 0047ddb2: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047ddb7: MOV EAX,0x620b1f
//   Label: LAB_0047ddb7
//   XREF to: 00620b1f (DATA)
// 0047ddbc: PUSH EAX
//   XREF to: 00620b1f (DATA)
// 0047ddbd: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047ddc3: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0047ddc4: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0047ddc9: ADD ESP,0x8
// 0047ddcc: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047ddd1: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_0047ddd1
// 0047ddd7: MOV EAX,dword ptr [EAX + 0x100]
// 0047dddd: TEST EAX,EAX
// 0047dddf: JLE 0x0047de27
//   XREF to: 0047de27 (CONDITIONAL_JUMP)
// 0047dde1: PUSH 0x0
// 0047dde3: PUSH 0x104
// 0047dde8: LEA EAX,[EBP + 0xfffff3f2]
// 0047ddee: PUSH EAX
// 0047ddef: MOV EAX,0x620b2e
//   XREF to: 00620b2e (DATA)
// 0047ddf4: PUSH EAX
//   XREF to: 00620b2e (DATA)
// 0047ddf5: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047ddfb: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 0047ddfc: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 0047de01: ADD ESP,0x14
// 0047de04: TEST EAX,EAX
// 0047de06: JZ 0x0047d6c7
//   XREF to: 0047d6c7 (CONDITIONAL_JUMP)
// 0047de0c: LEA EAX,[EBP + 0xfffff3f2]
// 0047de12: PUSH EAX
// 0047de13: MOV EAX,dword ptr [EBP + 0x92]
// 0047de19: PUSH EAX
// 0047de1a: CALL core_dmodel.cpp_CKeyFramedModel_exportToS3D_FUN_00479f30
//   XREF to: 00479f30 (UNCONDITIONAL_CALL)
// 0047de1f: ADD ESP,0x8
// 0047de22: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047de27: MOV EAX,0x620b41
//   Label: LAB_0047de27
//   XREF to: 00620b41 (DATA)
// 0047de2c: PUSH EAX
//   XREF to: 00620b41 (DATA)
// 0047de2d: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047de33: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 0047de34: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0047de39: ADD ESP,0x8
// 0047de3c: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047de41: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_0047de41
// 0047de47: MOV EAX,dword ptr [EAX + 0x100]
// 0047de4d: TEST EAX,EAX
// 0047de4f: JLE 0x0047de74
//   XREF to: 0047de74 (CONDITIONAL_JUMP)
// 0047de51: FLD float ptr [EBP + 0x1e]
// 0047de54: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047de59: FISTP dword ptr [EBP + 0x72]
// 0047de5c: MOV EBX,dword ptr [EBP + 0x72]
// 0047de5f: PUSH EBX
// 0047de60: MOV ESI,dword ptr [EBP + 0x92]
// 0047de66: PUSH ESI
// 0047de67: CALL core_dmodel.cpp_CKeyFramedModel_recenter_FUN_0047c220
//   XREF to: 0047c220 (UNCONDITIONAL_CALL)
// 0047de6c: ADD ESP,0x8
// 0047de6f: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047de74: PUSH 0x620b54
//   Label: LAB_0047de74
//   XREF to: 00620b54 (DATA)
// 0047de79: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047de7f: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0047de80: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0047de85: ADD ESP,0x8
// 0047de88: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047de8d: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_0047de8d
// 0047de93: MOV EAX,dword ptr [EAX + 0x100]
// 0047de99: TEST EAX,EAX
// 0047de9b: JLE 0x0047dec0
//   XREF to: 0047dec0 (CONDITIONAL_JUMP)
// 0047de9d: FLD float ptr [EBP + 0x1e]
// 0047dea0: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047dea5: FISTP dword ptr [EBP + 0x72]
// 0047dea8: MOV EBX,dword ptr [EBP + 0x72]
// 0047deab: PUSH EBX
// 0047deac: MOV ESI,dword ptr [EBP + 0x92]
// 0047deb2: PUSH ESI
// 0047deb3: CALL core_dmodel.cpp_CKeyFramedModel_applyVertexBias_FUN_0047c2d0
//   XREF to: 0047c2d0 (UNCONDITIONAL_CALL)
// 0047deb8: ADD ESP,0x8
// 0047debb: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047dec0: PUSH 0x620b69
//   Label: LAB_0047dec0
//   XREF to: 00620b69 (DATA)
// 0047dec5: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047decb: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0047decc: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0047ded1: ADD ESP,0x8
// 0047ded4: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047ded9: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_0047ded9
// 0047dedf: MOV EAX,dword ptr [EAX + 0x100]
// 0047dee5: TEST EAX,EAX
// 0047dee7: JLE 0x0047e129
//   XREF to: 0047e129 (CONDITIONAL_JUMP)
// 0047deed: FLD float ptr [EBP + 0x1e]
// 0047def0: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047def5: FISTP dword ptr [EBP + 0x72]
// 0047def8: MOV EBX,dword ptr [EBP + 0x72]
// 0047defb: LEA EAX,[EBX*0x4 + 0x0]
// 0047df02: SUB EAX,EBX
// 0047df04: MOV ESI,dword ptr [EBP + 0x92]
// 0047df0a: LEA EBX,[EAX*0x8 + 0x0]
// 0047df11: MOV EAX,dword ptr [ESI + 0x5690]
// 0047df17: LEA ESI,[EAX + EBX*0x1]
// 0047df1a: MOV EAX,dword ptr [ESI]
// 0047df1c: MOV dword ptr [EBP + 0xfffffeea],EAX
// 0047df22: LEA EAX,[ESI + 0x4]
// 0047df25: MOV EAX,dword ptr [EAX]
// 0047df27: MOV dword ptr [EBP + 0xfffffeee],EAX
// 0047df2d: LEA EAX,[ESI + 0x8]
// 0047df30: MOV EAX,dword ptr [EAX]
// 0047df32: LEA EBX,[ESI + 0xc]
// 0047df35: MOV dword ptr [EBP + 0xfffffef2],EAX
// 0047df3b: MOV EAX,dword ptr [EBX]
// 0047df3d: MOV dword ptr [EBP + 0xfffffef6],EAX
// 0047df43: LEA EAX,[EBX + 0x4]
// 0047df46: MOV EAX,dword ptr [EAX]
// 0047df48: MOV dword ptr [EBP + 0xfffffefa],EAX
// 0047df4e: LEA EAX,[EBX + 0x8]
// 0047df51: LEA ESI,[EBP + -0x32]
// 0047df54: MOV EAX,dword ptr [EAX]
// 0047df56: MOV EBX,0x3f000000
// 0047df5b: MOV dword ptr [EBP + 0xfffffefe],EAX
// 0047df61: MOV dword ptr [EBP + 0x62],EBX
// 0047df64: LEA EBX,[EBP + 0xfffffeea]
// 0047df6a: LEA EAX,[EBP + 0xfffffef6]
// 0047df70: FLD float ptr [EBX]
// 0047df72: FADD float ptr [EAX]
// 0047df74: FSTP float ptr [EBP + 0xffffff0e]
// 0047df7a: FLD float ptr [EBX + 0x4]
// 0047df7d: FADD float ptr [EAX + 0x4]
// 0047df80: FSTP float ptr [EBP + 0xffffff12]
// 0047df86: FLD float ptr [EBX + 0x8]
// 0047df89: FADD float ptr [EAX + 0x8]
// 0047df8c: LEA EBX,[EBP + 0xffffff0e]
// 0047df92: FSTP float ptr [EBP + 0xffffff16]
// 0047df98: LEA EAX,[EBP + 0x62]
// 0047df9b: FLD float ptr [EBX]
// 0047df9d: FMUL float ptr [EAX]
// 0047df9f: FSTP float ptr [EBP + -0x32]
// 0047dfa2: FLD float ptr [EBX + 0x4]
// 0047dfa5: FMUL float ptr [EAX]
// 0047dfa7: FSTP float ptr [EBP + -0x2e]
// 0047dfaa: FLD float ptr [EBX + 0x8]
// 0047dfad: FMUL float ptr [EAX]
// 0047dfaf: SUB ESP,0x8
// 0047dfb2: FSTP float ptr [EBP + -0x2a]
// 0047dfb5: FLD float ptr [ESI + 0x8]
// 0047dfb8: FSTP double ptr [ESP]
// 0047dfbb: MOV EDI,0x3f000000
// 0047dfc0: SUB ESP,0x8
// 0047dfc3: FLD float ptr [EBP + 0xfffffefe]
// 0047dfc9: FSTP double ptr [ESP]
// 0047dfcc: LEA EBX,[EBP + 0xfffffeea]
// 0047dfd2: SUB ESP,0x8
// 0047dfd5: FLD float ptr [EBP + 0xfffffef2]
// 0047dfdb: FSTP double ptr [ESP]
// 0047dfde: MOV dword ptr [EBP + 0x66],EDI
// 0047dfe1: LEA EAX,[EBP + 0xfffffef6]
// 0047dfe7: FLD float ptr [EBX]
// 0047dfe9: FADD float ptr [EAX]
// 0047dfeb: FSTP float ptr [EBP + 0xffffff3e]
// 0047dff1: FLD float ptr [EBX + 0x4]
// 0047dff4: FADD float ptr [EAX + 0x4]
// 0047dff7: FSTP float ptr [EBP + 0xffffff42]
// 0047dffd: FLD float ptr [EBX + 0x8]
// 0047e000: FADD float ptr [EAX + 0x8]
// 0047e003: LEA EBX,[EBP + 0xffffff3e]
// 0047e009: FSTP float ptr [EBP + 0xffffff46]
// 0047e00f: LEA EAX,[EBP + 0x66]
// 0047e012: FLD float ptr [EBX]
// 0047e014: FMUL float ptr [EAX]
// 0047e016: FSTP float ptr [EBP + -0x56]
// 0047e019: FLD float ptr [EBX + 0x4]
// 0047e01c: FMUL float ptr [EAX]
// 0047e01e: FSTP float ptr [EBP + -0x52]
// 0047e021: FLD float ptr [EBX + 0x8]
// 0047e024: FMUL float ptr [EAX]
// 0047e026: LEA ESI,[EBP + -0x56]
// 0047e029: SUB ESP,0x8
// 0047e02c: FSTP float ptr [EBP + -0x4e]
// 0047e02f: FLD float ptr [ESI + 0x4]
// 0047e032: FSTP double ptr [ESP]
// 0047e035: SUB ESP,0x8
// 0047e038: FLD float ptr [EBP + 0xfffffefa]
// 0047e03e: FSTP double ptr [ESP]
// 0047e041: LEA ESI,[EBP + 0xffffff4a]
// 0047e047: SUB ESP,0x8
// 0047e04a: FLD float ptr [EBP + 0xfffffeee]
// 0047e050: FSTP double ptr [ESP]
// 0047e053: MOV dword ptr [EBP + 0x6a],EDI
// 0047e056: LEA EBX,[EBP + 0xfffffeea]
// 0047e05c: LEA EAX,[EBP + 0xfffffef6]
// 0047e062: FLD float ptr [EBX]
// 0047e064: FADD float ptr [EAX]
// 0047e066: FSTP float ptr [EBP + -0x1a]
// 0047e069: FLD float ptr [EBX + 0x4]
// 0047e06c: FADD float ptr [EAX + 0x4]
// 0047e06f: FSTP float ptr [EBP + -0x16]
// 0047e072: FLD float ptr [EBX + 0x8]
// 0047e075: LEA EBX,[EBP + 0x6a]
// 0047e078: FADD float ptr [EAX + 0x8]
// 0047e07b: LEA EAX,[EBP + -0x1a]
// 0047e07e: FSTP float ptr [EBP + -0x12]
// 0047e081: FLD float ptr [EAX]
// 0047e083: FMUL float ptr [EBX]
// 0047e085: FSTP float ptr [EBP + 0xffffff4a]
// 0047e08b: FLD float ptr [EAX + 0x4]
// 0047e08e: FMUL float ptr [EBX]
// 0047e090: FSTP float ptr [EBP + 0xffffff4e]
// 0047e096: FLD float ptr [EAX + 0x8]
// 0047e099: FMUL float ptr [EBX]
// 0047e09b: FLD float ptr [EBP + 0x1e]
// 0047e09e: SUB ESP,0x8
// 0047e0a1: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047e0a6: FXCH
// 0047e0a8: FSTP float ptr [EBP + 0xffffff52]
// 0047e0ae: FLD float ptr [ESI]
// 0047e0b0: FSTP double ptr [ESP]
// 0047e0b3: FISTP dword ptr [EBP + 0x72]
// 0047e0b6: SUB ESP,0x8
// 0047e0b9: FLD float ptr [EBP + 0xfffffef6]
// 0047e0bf: FSTP double ptr [ESP]
// 0047e0c2: MOV EDX,dword ptr [EBP + 0x72]
// 0047e0c5: SUB ESP,0x8
// 0047e0c8: FLD float ptr [EBP + 0xfffffeea]
// 0047e0ce: FSTP double ptr [ESP]
// 0047e0d1: PUSH EDX
// 0047e0d2: MOV EAX,0x620b7a
//   XREF to: 00620b7a (DATA)
// 0047e0d7: PUSH EAX
//   XREF to: 00620b7a (DATA)
// 0047e0d8: LEA EAX,[EBP + 0xfffffaf6]
// 0047e0de: PUSH EAX
// 0047e0df: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0047e0e4: ADD ESP,0x54
// 0047e0e7: PUSH 0x0
// 0047e0e9: LEA EAX,[EBP + 0xffffff56]
// 0047e0ef: PUSH EAX
// 0047e0f0: LEA EAX,[EBP + 0xfffffaf6]
// 0047e0f6: PUSH EAX
// 0047e0f7: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047e0fd: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0047e0fe: CALL shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_004a0300
//   XREF to: 004a0300 (UNCONDITIONAL_CALL)
// 0047e103: ADD ESP,0x10
// 0047e106: TEST EAX,EAX
// 0047e108: JZ 0x0047d6c7
//   XREF to: 0047d6c7 (CONDITIONAL_JUMP)
// 0047e10e: LEA EAX,[EBP + 0xffffff56]
// 0047e114: PUSH EAX
// 0047e115: MOV EBX,dword ptr [EBP + 0x92]
// 0047e11b: PUSH EBX
// 0047e11c: CALL core_dmodel.cpp_CKeyFramedModel_applyBias_FUN_0047c370
//   XREF to: 0047c370 (UNCONDITIONAL_CALL)
// 0047e121: ADD ESP,0x8
// 0047e124: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047e129: MOV EAX,0x620c19
//   Label: LAB_0047e129
//   XREF to: 00620c19 (DATA)
// 0047e12e: PUSH EAX
//   XREF to: 00620c19 (DATA)
// 0047e12f: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047e135: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0047e136: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0047e13b: ADD ESP,0x8
// 0047e13e: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047e143: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_0047e143
// 0047e149: MOV EAX,dword ptr [EAX + 0x100]
// 0047e14f: TEST EAX,EAX
// 0047e151: JLE 0x0047e167
//   XREF to: 0047e167 (CONDITIONAL_JUMP)
// 0047e153: CMP dword ptr [EBP + 0x22],0x0
// 0047e157: SETZ AL
// 0047e15a: AND EAX,0xff
// 0047e15f: MOV dword ptr [EBP + 0x22],EAX
// 0047e162: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047e167: PUSH 0x620c2a
//   Label: LAB_0047e167
//   XREF to: 00620c2a (DATA)
// 0047e16c: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047e172: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 0047e173: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0047e178: ADD ESP,0x8
// 0047e17b: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047e180: LEA EAX,[EBP + 0xffffff62]
//   Label: LAB_0047e180
// 0047e186: PUSH EAX
// 0047e187: MOV ESI,dword ptr [EBP + 0x92]
// 0047e18d: PUSH ESI
// 0047e18e: CALL core_dmodel.cpp_CKeyFramedModel_scale_FUN_0047c4d0
//   XREF to: 0047c4d0 (UNCONDITIONAL_CALL)
// 0047e193: ADD ESP,0x8
// 0047e196: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047e19b: MOV EBX,dword ptr [EBP + 0x92]
//   Label: LAB_0047e19b
// 0047e1a1: PUSH dword ptr [EBP + 0xffffff62]
// 0047e1a7: PUSH EBX
// 0047e1a8: CALL core_dmodel.cpp_CKeyFramedModel_scaleUniform_FUN_0047c4a0
//   XREF to: 0047c4a0 (UNCONDITIONAL_CALL)
// 0047e1ad: ADD ESP,0x8
// 0047e1b0: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047e1b5: PUSH 0x620d47
//   Label: LAB_0047e1b5
//   XREF to: 00620d47 (DATA)
// 0047e1ba: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047e1bf: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0047e1c0: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0047e1c5: ADD ESP,0x8
// 0047e1c8: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047e1cd: CMP dword ptr [EBP + 0x26],0x0
//   Label: LAB_0047e1cd
// 0047e1d1: SETZ AL
// 0047e1d4: AND EAX,0xff
// 0047e1d9: MOV dword ptr [EBP + 0x26],EAX
// 0047e1dc: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047e1e1: LEA EAX,[EBP + -0x4a]
//   Label: LAB_0047e1e1
// 0047e1e4: PUSH EAX
// 0047e1e5: MOV EAX,dword ptr [EBP + 0x92]
// 0047e1eb: PUSH EAX
// 0047e1ec: CALL core_dmodel.cpp_CKeyFramedModel_snapRotationToAxis_FUN_0047c5f0
//   XREF to: 0047c5f0 (UNCONDITIONAL_CALL)
// 0047e1f1: XOR EDX,EDX
// 0047e1f3: ADD ESP,0x8
// 0047e1f6: MOV dword ptr [EBP + -0x42],EDX
// 0047e1f9: MOV dword ptr [EBP + -0x46],EDX
// 0047e1fc: MOV dword ptr [EBP + -0x4a],EDX
// 0047e1ff: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047e204: PUSH 0x0
//   Label: LAB_0047e204
// 0047e206: LEA EAX,[EBP + 0xfffffd4e]
// 0047e20c: PUSH EAX
// 0047e20d: MOV EAX,0x620d59
//   XREF to: 00620d59 (DATA)
// 0047e212: PUSH EAX
//   XREF to: 00620d59 (DATA)
// 0047e213: MOV EAX,0x620d5f
//   XREF to: 00620d5f (DATA)
// 0047e218: PUSH EAX
//   XREF to: 00620d5f (DATA)
// 0047e219: MOV EAX,0x620d64
//   XREF to: 00620d64 (DATA)
// 0047e21e: PUSH EAX
//   XREF to: 00620d64 (DATA)
// 0047e21f: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047e225: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0047e226: CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   XREF to: 0049f270 (UNCONDITIONAL_CALL)
// 0047e22b: ADD ESP,0x18
// 0047e22e: TEST EAX,EAX
// 0047e230: JZ 0x0047d6c7
//   XREF to: 0047d6c7 (CONDITIONAL_JUMP)
// 0047e236: XOR EDI,EDI
// 0047e238: IMUL ESI,EDI,0xc
// 0047e23b: LEA EAX,[EBP + -0x62]
// 0047e23e: PUSH EAX
// 0047e23f: CALL core_course.cpp_CCourse_ctor_FUN_004424c0
//   XREF to: 004424c0 (UNCONDITIONAL_CALL)
// 0047e244: ADD ESP,0x4
// 0047e247: LEA EAX,[EBP + 0xfffffd4e]
// 0047e24d: PUSH EAX
// 0047e24e: LEA EAX,[EBP + -0x62]
// 0047e251: PUSH EAX
// 0047e252: CALL core_course.cpp_CCourse_load_FUN_00442580
//   XREF to: 00442580 (UNCONDITIONAL_CALL)
// 0047e257: ADD ESP,0x8
// 0047e25a: LEA EAX,[EBP + -0xe]
// 0047e25d: PUSH EAX
// 0047e25e: LEA EAX,[EBP + -0x6e]
// 0047e261: PUSH EAX
// 0047e262: LEA EAX,[EBP + -0x62]
// 0047e265: PUSH 0x0
// 0047e267: PUSH EAX
// 0047e268: CALL core_course.cpp_CCourse_FUN_00442710
//   XREF to: 00442710 (UNCONDITIONAL_CALL)
// 0047e26d: ADD ESP,0x10
// 0047e270: LEA EAX,[EBP + -0xe]
// 0047e273: PUSH EAX
// 0047e274: LEA EAX,[EBP + -0x6e]
// 0047e277: PUSH EAX
// 0047e278: LEA EAX,[EBP + 0xfffffe7a]
// 0047e27e: PUSH EAX
// 0047e27f: CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
//   XREF to: 005f5390 (UNCONDITIONAL_CALL)
// 0047e284: ADD ESP,0xc
// 0047e287: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_0047e287
// 0047e28d: MOV EAX,dword ptr [EAX + 0x104]
// 0047e293: CMP EDI,EAX
// 0047e295: JGE 0x0047e388
//   XREF to: 0047e388 (CONDITIONAL_JUMP)
// 0047e29b: MOV EAX,dword ptr [EBP + 0x92]
// 0047e2a1: MOV EAX,dword ptr [EAX + 0x10c]
// 0047e2a7: FLD double ptr [0x00620e13]
//   XREF to: 00620e13 (READ)
// 0047e2ad: FILD dword ptr [ESI + EAX*0x1]
// 0047e2b0: FMUL ST1
// 0047e2b2: MOV EAX,dword ptr [EBP + 0x92]
// 0047e2b8: FSTP float ptr [EBP + -0x7a]
// 0047e2bb: MOV EAX,dword ptr [EAX + 0x10c]
// 0047e2c1: FILD dword ptr [ESI + EAX*0x1 + 0x4]
// 0047e2c5: FMUL ST1
// 0047e2c7: MOV EAX,dword ptr [EBP + 0x92]
// 0047e2cd: FSTP float ptr [EBP + -0x76]
// 0047e2d0: MOV EAX,dword ptr [EAX + 0x10c]
// 0047e2d6: FILD dword ptr [ESI + EAX*0x1 + 0x8]
// 0047e2da: LEA EAX,[EBP + 0xfffffe7a]
// 0047e2e0: FMULP
// 0047e2e2: PUSH EAX
// 0047e2e3: LEA EAX,[EBP + -0x7a]
// 0047e2e6: PUSH EAX
// 0047e2e7: LEA EAX,[EBP + 0xffffff32]
// 0047e2ed: PUSH EAX
// 0047e2ee: FSTP float ptr [EBP + -0x72]
// 0047e2f1: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 0047e2f6: MOV EBX,EAX
// 0047e2f8: LEA EAX,[EBP + -0x7a]
// 0047e2fb: ADD ESP,0xc
// 0047e2fe: CMP EAX,EBX
// 0047e300: JNZ 0x0047e372
//   XREF to: 0047e372 (CONDITIONAL_JUMP)
// 0047e302: FLD float ptr [EBP + -0x7a]
//   Label: LAB_0047e302
// 0047e305: MOV EBX,dword ptr [EBP + 0x92]
// 0047e30b: FLD double ptr [0x00620e1b]
//   XREF to: 00620e1b (READ)
// 0047e311: FXCH
// 0047e313: FMUL ST1
// 0047e315: MOV EBX,dword ptr [EBX + 0x10c]
// 0047e31b: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047e320: FISTP dword ptr [EBP + 0x72]
// 0047e323: MOV EAX,dword ptr [EBP + 0x72]
// 0047e326: MOV dword ptr [ESI + EBX*0x1],EAX
// 0047e329: FLD float ptr [EBP + -0x76]
// 0047e32c: MOV EAX,dword ptr [EBP + 0x92]
// 0047e332: FMUL ST1
// 0047e334: MOV EAX,dword ptr [EAX + 0x10c]
// 0047e33a: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047e33f: LEA EBX,[EAX + ESI*0x1]
// 0047e342: FISTP dword ptr [EBP + 0x72]
// 0047e345: MOV EAX,dword ptr [EBP + 0x72]
// 0047e348: MOV dword ptr [EBX + 0x4],EAX
// 0047e34b: FMUL float ptr [EBP + -0x72]
// 0047e34e: MOV EBX,dword ptr [EBP + 0x92]
// 0047e354: ADD ESI,0xc
// 0047e357: MOV EBX,dword ptr [EBX + 0x10c]
// 0047e35d: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047e362: FISTP dword ptr [EBP + 0x72]
// 0047e365: MOV EAX,dword ptr [EBP + 0x72]
// 0047e368: INC EDI
// 0047e369: MOV dword ptr [ESI + EBX*0x1 + -0x4],EAX
// 0047e36d: JMP 0x0047e287
//   XREF to: 0047e287 (UNCONDITIONAL_JUMP)
// 0047e372: MOV EAX,dword ptr [EBX]
//   Label: LAB_0047e372
// 0047e374: MOV dword ptr [EBP + -0x7a],EAX
// 0047e377: MOV EAX,dword ptr [EBX + 0x4]
// 0047e37a: MOV dword ptr [EBP + -0x76],EAX
// 0047e37d: MOV EAX,dword ptr [EBX + 0x8]
// 0047e380: MOV dword ptr [EBP + -0x72],EAX
// 0047e383: JMP 0x0047e302
//   XREF to: 0047e302 (UNCONDITIONAL_JUMP)
// 0047e388: PUSH 0x0
//   Label: LAB_0047e388
// 0047e38a: LEA EAX,[EBP + -0x62]
// 0047e38d: PUSH EAX
// 0047e38e: CALL core_course.cpp_CCourse_dtor_FUN_004424e0
//   XREF to: 004424e0 (UNCONDITIONAL_CALL)
// 0047e393: ADD ESP,0x8
// 0047e396: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047e39b: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_0047e39b
// 0047e3a1: MOV EAX,dword ptr [EAX + 0x100]
// 0047e3a7: CMP EAX,0x1
// 0047e3aa: JLE 0x0047e3c5
//   XREF to: 0047e3c5 (CONDITIONAL_JUMP)
// 0047e3ac: MOV EAX,0x620d7a
//   XREF to: 00620d7a (DATA)
// 0047e3b1: PUSH EAX
//   XREF to: 00620d7a (DATA)
// 0047e3b2: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047e3b7: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0047e3b8: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0047e3bd: ADD ESP,0x8
// 0047e3c0: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047e3c5: MOV ESI,dword ptr [EBP + 0x92]
//   Label: LAB_0047e3c5
// 0047e3cb: PUSH ESI
// 0047e3cc: CALL core_dmodel.cpp_CKeyFramedModel_exportToDSE_FUN_0047e810
//   XREF to: 0047e810 (UNCONDITIONAL_CALL)
// 0047e3d1: ADD ESP,0x4
// 0047e3d4: CALL shape_design.c_showShapeEditorMenu_FUN_0046f290
//   XREF to: 0046f290 (UNCONDITIONAL_CALL)
// 0047e3d9: PUSH ESI
// 0047e3da: CALL core_dmodel.cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10
//   XREF to: 0047ea10 (UNCONDITIONAL_CALL)
// 0047e3df: ADD ESP,0x4
// 0047e3e2: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047e3e7: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_0047e3e7
// 0047e3ed: MOV EDI,dword ptr [EAX + 0x5698]
// 0047e3f3: TEST EDI,EDI
// 0047e3f5: JZ 0x0047e43c
//   XREF to: 0047e43c (CONDITIONAL_JUMP)
// 0047e3f7: MOV EBX,0xdca
// 0047e3fc: MOV ECX,0x620dbb
//   XREF to: 00620dbb (DATA)
// 0047e401: MOV EAX,EDI
// 0047e403: MOV dword ptr [0x02f0d944],EBX
//   XREF to: 02f0d944 (WRITE)
// 0047e409: MOV dword ptr [0x0067d20c],ECX
//   XREF to: 0067d20c (WRITE)
// 0047e40f: JZ 0x0047e41d
//   XREF to: 0047e41d (CONDITIONAL_JUMP)
// 0047e411: LEA EAX,[EDI + -0x4]
// 0047e414: PUSH EAX
// 0047e415: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0047e41a: ADD ESP,0x4
// 0047e41d: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_0047e41d
// 0047e423: MOV dword ptr [EAX + 0x5694],0x0
// 0047e42d: MOV dword ptr [EAX + 0x5698],0x0
// 0047e437: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047e43c: MOV EAX,0x620dce
//   Label: LAB_0047e43c
//   XREF to: 00620dce (DATA)
// 0047e441: PUSH EAX
//   XREF to: 00620dce (DATA)
// 0047e442: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047e447: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0047e448: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0047e44d: ADD ESP,0x8
// 0047e450: MOV EDX,dword ptr [EBP + 0x92]
// 0047e456: PUSH EDX
// 0047e457: CALL core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830
//   XREF to: 00478830 (UNCONDITIONAL_CALL)
// 0047e45c: ADD ESP,0x4
// 0047e45f: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047e464: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_0047e464
// 0047e46a: CMP dword ptr [EAX + 0x569c],0x0
// 0047e471: SETZ AL
// 0047e474: MOV EBX,dword ptr [EBP + 0x92]
// 0047e47a: AND EAX,0xff
// 0047e47f: MOV dword ptr [EBX + 0x569c],EAX
// 0047e485: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047e48a: JBE 0x0047ded9
//   Label: LAB_0047e48a
//   XREF to: 0047ded9 (CONDITIONAL_JUMP)
// 0047e490: CMP EAX,0x49
// 0047e493: JNC 0x0047e4bb
//   XREF to: 0047e4bb (CONDITIONAL_JUMP)
// 0047e495: CMP EAX,0x44
// 0047e498: JC 0x0047e204
//   XREF to: 0047e204 (CONDITIONAL_JUMP)
// 0047e49e: JBE 0x0047e39b
//   XREF to: 0047e39b (CONDITIONAL_JUMP)
// 0047e4a4: CMP EAX,0x45
// 0047e4a7: JBE 0x0047e3e7
//   XREF to: 0047e3e7 (CONDITIONAL_JUMP)
// 0047e4ad: CMP EAX,0x47
// 0047e4b0: JZ 0x0047de8d
//   XREF to: 0047de8d (CONDITIONAL_JUMP)
// 0047e4b6: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047e4bb: JBE 0x0047e143
//   Label: LAB_0047e4bb
//   XREF to: 0047e143 (CONDITIONAL_JUMP)
// 0047e4c1: CMP EAX,0x54
// 0047e4c4: JNC 0x0047e6e5
//   XREF to: 0047e6e5 (CONDITIONAL_JUMP)
// 0047e4ca: CMP EAX,0x52
// 0047e4cd: JC 0x0047d6c7
//   XREF to: 0047d6c7 (CONDITIONAL_JUMP)
// 0047e4d3: JBE 0x0047de41
//   XREF to: 0047de41 (CONDITIONAL_JUMP)
// 0047e4d9: MOV EAX,dword ptr [EBP + 0x92]
// 0047e4df: MOV EAX,dword ptr [EAX + 0x100]
// 0047e4e5: TEST EAX,EAX
// 0047e4e7: JLE 0x0047e1b5
//   XREF to: 0047e1b5 (CONDITIONAL_JUMP)
// 0047e4ed: FLD float ptr [EBP + 0x1e]
// 0047e4f0: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0047e4f5: FISTP dword ptr [EBP + 0x6e]
// 0047e4f8: MOV EBX,dword ptr [EBP + 0x6e]
// 0047e4fb: LEA EAX,[EBX*0x4 + 0x0]
// 0047e502: SUB EAX,EBX
// 0047e504: MOV EBX,dword ptr [EBP + 0x92]
// 0047e50a: SHL EAX,0x3
// 0047e50d: MOV EBX,dword ptr [EBX + 0x5690]
// 0047e513: ADD EBX,EAX
// 0047e515: MOV EAX,dword ptr [EBX]
// 0047e517: MOV dword ptr [EBP + 0xfffffed2],EAX
// 0047e51d: LEA EAX,[EBX + 0x4]
// 0047e520: MOV EAX,dword ptr [EAX]
// 0047e522: MOV dword ptr [EBP + 0xfffffed6],EAX
// 0047e528: LEA EAX,[EBX + 0x8]
// 0047e52b: MOV EAX,dword ptr [EAX]
// 0047e52d: MOV dword ptr [EBP + 0xfffffeda],EAX
// 0047e533: SUB ESP,0x8
// 0047e536: MOV EAX,dword ptr [EBX + 0xc]
// 0047e539: ADD EBX,0xc
// 0047e53c: MOV dword ptr [EBP + 0xfffffede],EAX
// 0047e542: LEA EAX,[EBX + 0x4]
// 0047e545: FLD float ptr [EBP + 0xfffffede]
// 0047e54b: MOV EAX,dword ptr [EAX]
// 0047e54d: FSUB float ptr [EBP + 0xfffffed2]
// 0047e553: MOV dword ptr [EBP + 0xfffffee2],EAX
// 0047e559: LEA EAX,[EBX + 0x8]
// 0047e55c: FLD float ptr [EBP + 0xfffffee2]
// 0047e562: MOV EAX,dword ptr [EAX]
// 0047e564: FSUB float ptr [EBP + 0xfffffed6]
// 0047e56a: MOV dword ptr [EBP + 0xfffffee6],EAX
// 0047e570: FXCH
// 0047e572: FSTP float ptr [EBP + 0xffffff26]
// 0047e578: FLD float ptr [EBP + 0xfffffee6]
// 0047e57e: FSUB float ptr [EBP + 0xfffffeda]
// 0047e584: FXCH
// 0047e586: FSTP float ptr [EBP + 0xffffff2a]
// 0047e58c: FST float ptr [EBP + 0xffffff2e]
// 0047e592: FSTP double ptr [ESP]
// 0047e595: SUB ESP,0x8
// 0047e598: FLD float ptr [EBP + 0xfffffee6]
// 0047e59e: FSTP double ptr [ESP]
// 0047e5a1: SUB ESP,0x8
// 0047e5a4: FLD float ptr [EBP + 0xfffffeda]
// 0047e5aa: FSTP double ptr [ESP]
// 0047e5ad: MOV EAX,dword ptr [EBP + 0xffffff26]
// 0047e5b3: MOV dword ptr [EBP + 0xffffff1a],EAX
// 0047e5b9: MOV EAX,dword ptr [EBP + 0xffffff2a]
// 0047e5bf: MOV dword ptr [EBP + 0xffffff1e],EAX
// 0047e5c5: MOV EAX,dword ptr [EBP + 0xffffff2e]
// 0047e5cb: SUB ESP,0x8
// 0047e5ce: MOV dword ptr [EBP + 0xffffff22],EAX
// 0047e5d4: FLD float ptr [EBP + 0xffffff2a]
// 0047e5da: FSTP double ptr [ESP]
// 0047e5dd: SUB ESP,0x8
// 0047e5e0: FLD float ptr [EBP + 0xfffffee2]
// 0047e5e6: FSTP double ptr [ESP]
// 0047e5e9: SUB ESP,0x8
// 0047e5ec: FLD float ptr [EBP + 0xfffffed6]
// 0047e5f2: FSTP double ptr [ESP]
// 0047e5f5: MOV EAX,dword ptr [EBP + 0xffffff26]
// 0047e5fb: MOV dword ptr [EBP + 0xffffff6e],EAX
// 0047e601: MOV EAX,dword ptr [EBP + 0xffffff2a]
// 0047e607: MOV dword ptr [EBP + 0xffffff72],EAX
// 0047e60d: MOV EAX,dword ptr [EBP + 0xffffff2e]
// 0047e613: SUB ESP,0x8
// 0047e616: MOV dword ptr [EBP + 0xffffff76],EAX
// 0047e61c: FLD float ptr [EBP + 0xffffff26]
// 0047e622: FSTP double ptr [ESP]
// 0047e625: SUB ESP,0x8
// 0047e628: FLD float ptr [EBP + 0xfffffede]
// 0047e62e: FSTP double ptr [ESP]
// 0047e631: MOV EDX,dword ptr [EBP + 0x6e]
// 0047e634: SUB ESP,0x8
// 0047e637: FLD float ptr [EBP + 0xfffffed2]
// 0047e63d: FSTP double ptr [ESP]
// 0047e640: PUSH EDX
// 0047e641: PUSH 0x620c3b
//   XREF to: 00620c3b (DATA)
// 0047e646: LEA EAX,[EBP + 0xfffffbbe]
// 0047e64c: PUSH EAX
// 0047e64d: LEA EDI,[EBP + 0xfffffe16]
// 0047e653: MOV ESI,0x670210
//   XREF to: 00670210 (DATA)
// 0047e658: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0047e65d: MOV ECX,0x19
// 0047e662: ADD ESP,0x54
// 0047e665: MOVSD.REP ES:EDI,ESI
//   XREF to: 00670210 (READ)
//   XREF to: 00670214 (READ)
// 0047e667: MOV EBX,0x1
// 0047e66c: PUSH EBX
//   Label: LAB_0047e66c
// 0047e66d: PUSH 0x64
// 0047e66f: LEA EAX,[EBP + 0xfffffe16]
// 0047e675: PUSH EAX
// 0047e676: LEA EAX,[EBP + 0xfffffbbe]
// 0047e67c: PUSH EAX
// 0047e67d: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047e683: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0047e684: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 0047e689: ADD ESP,0x14
// 0047e68c: TEST EAX,EAX
// 0047e68e: JZ 0x0047d6c7
//   XREF to: 0047d6c7 (CONDITIONAL_JUMP)
// 0047e694: LEA EAX,[EBP + 0xffffff6a]
// 0047e69a: PUSH EAX
// 0047e69b: LEA EAX,[EBP + 0xffffff66]
// 0047e6a1: PUSH EAX
// 0047e6a2: LEA EAX,[EBP + 0xffffff62]
// 0047e6a8: PUSH EAX
// 0047e6a9: PUSH 0x620cee
//   XREF to: 00620cee (DATA)
// 0047e6ae: LEA EAX,[EBP + 0xfffffe16]
// 0047e6b4: PUSH EAX
// 0047e6b5: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 0047e6ba: ADD ESP,0x14
// 0047e6bd: CMP EAX,0x3
// 0047e6c0: JZ 0x0047e180
//   XREF to: 0047e180 (CONDITIONAL_JUMP)
// 0047e6c6: CMP EAX,0x1
// 0047e6c9: JZ 0x0047e19b
//   XREF to: 0047e19b (CONDITIONAL_JUMP)
// 0047e6cf: PUSH 0x620cf7
//   XREF to: 00620cf7 (DATA)
// 0047e6d4: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047e6da: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0047e6db: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0047e6e0: ADD ESP,0x8
// 0047e6e3: JMP 0x0047e66c
//   XREF to: 0047e66c (UNCONDITIONAL_JUMP)
// 0047e6e5: JBE 0x0047e464
//   Label: LAB_0047e6e5
//   XREF to: 0047e464 (CONDITIONAL_JUMP)
// 0047e6eb: CMP EAX,0x56
// 0047e6ee: JC 0x0047d6c7
//   XREF to: 0047d6c7 (CONDITIONAL_JUMP)
// 0047e6f4: JBE 0x0047e1cd
//   XREF to: 0047e1cd (CONDITIONAL_JUMP)
// 0047e6fa: CMP EAX,0x58
// 0047e6fd: JZ 0x0047e1e1
//   XREF to: 0047e1e1 (CONDITIONAL_JUMP)
// 0047e703: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047e708: JBE 0x0047da2d
//   Label: LAB_0047e708
//   XREF to: 0047da2d (CONDITIONAL_JUMP)
// 0047e70e: CMP EAX,0x37
// 0047e711: JC 0x0047db4c
//   XREF to: 0047db4c (CONDITIONAL_JUMP)
// 0047e717: JBE 0x0047dcc3
//   XREF to: 0047dcc3 (CONDITIONAL_JUMP)
// 0047e71d: CMP EAX,0x38
// 0047e720: JBE 0x0047dd84
//   XREF to: 0047dd84 (CONDITIONAL_JUMP)
// 0047e726: CMP EAX,0x39
// 0047e729: JZ 0x0047ddd1
//   XREF to: 0047ddd1 (CONDITIONAL_JUMP)
// 0047e72f: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
// 0047e734: JBE 0x0047d829
//   Label: LAB_0047e734
//   XREF to: 0047d829 (CONDITIONAL_JUMP)
// 0047e73a: CMP EAX,0x33
// 0047e73d: JBE 0x0047d8bc
//   XREF to: 0047d8bc (CONDITIONAL_JUMP)
// 0047e743: PUSH 0x1
// 0047e745: MOV EAX,0x670108
//   XREF to: 00670108 (DATA)
// 0047e74a: PUSH EAX
//   XREF to: 00670108 (DATA)
// 0047e74b: MOV EAX,0x6209c2
//   XREF to: 006209c2 (DATA)
// 0047e750: PUSH EAX
//   XREF to: 006209c2 (DATA)
// 0047e751: MOV EAX,0x6209c8
//   XREF to: 006209c8 (DATA)
// 0047e756: PUSH EAX
//   XREF to: 006209c8 (DATA)
// 0047e757: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047e75d: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 0047e75e: CALL shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
//   XREF to: 0049f420 (UNCONDITIONAL_CALL)
// 0047e763: ADD ESP,0x14
// 0047e766: TEST EAX,EAX
// 0047e768: JZ 0x0047d6c7
//   XREF to: 0047d6c7 (CONDITIONAL_JUMP)
// 0047e76e: LEA EAX,[EBP + 0xfffff4f6]
// 0047e774: PUSH EAX
// 0047e775: LEA EAX,[EBP + 0xfffff9f6]
// 0047e77b: PUSH EAX
// 0047e77c: LEA EAX,[EBP + 0xfffff6f6]
// 0047e782: PUSH EAX
// 0047e783: LEA EAX,[EBP + 0x76]
// 0047e786: PUSH EAX
// 0047e787: MOV EAX,0x670108
//   XREF to: 00670108 (DATA)
// 0047e78c: PUSH EAX
//   XREF to: 00670108 (DATA)
// 0047e78d: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 0047e792: ADD ESP,0x14
// 0047e795: LEA EAX,[EBP + 0xfffff4f6]
// 0047e79b: PUSH EAX
// 0047e79c: LEA EAX,[EBP + 0xfffff9f6]
// 0047e7a2: PUSH EAX
// 0047e7a3: MOV EAX,0x6209ec
//   XREF to: 006209ec (DATA)
// 0047e7a8: PUSH EAX
//   XREF to: 006209ec (DATA)
// 0047e7a9: PUSH 0x0
// 0047e7ab: LEA EAX,[EBP + 0xfffff1de]
// 0047e7b1: PUSH EAX
// 0047e7b2: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 0047e7b7: ADD ESP,0x14
// 0047e7ba: LEA EAX,[EBP + 0xfffff1de]
// 0047e7c0: PUSH EAX
// 0047e7c1: CALL engine_dosio.c_findFile_FUN_00481760
//   XREF to: 00481760 (UNCONDITIONAL_CALL)
// 0047e7c6: ADD ESP,0x4
// 0047e7c9: TEST EAX,EAX
// 0047e7cb: JZ 0x0047d967
//   XREF to: 0047d967 (CONDITIONAL_JUMP)
// 0047e7d1: CMP dword ptr [EBP + 0xfffff3e6],0x0
// 0047e7d8: JZ 0x0047d967
//   XREF to: 0047d967 (CONDITIONAL_JUMP)
// 0047e7de: LEA EAX,[EBP + 0xfffff2de]
// 0047e7e4: PUSH EAX
// 0047e7e5: LEA EAX,[EBP + 0xfffff1de]
// 0047e7eb: PUSH EAX
// 0047e7ec: MOV EAX,0x6209f3
//   XREF to: 006209f3 (DATA)
// 0047e7f1: PUSH EAX
//   XREF to: 006209f3 (DATA)
// 0047e7f2: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0047e7f8: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 0047e7f9: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0047e7fe: ADD ESP,0x10
// 0047e801: JMP 0x0047d6c7
//   XREF to: 0047d6c7 (UNCONDITIONAL_JUMP)
