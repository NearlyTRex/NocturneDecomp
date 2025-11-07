// Name: core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0
// Address: 005968b0
// Address Range: [[005968b0, 0059754b] [0059754f, 0059796e] [00597977, 00598ed7]]
// Convention: __cdecl
// Signature: void core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0(CDeformableModelInstance * this_ptr)
// Cross-references:
//   core_skeledit.cpp_FUN_00598f10 (00598f10) at 00598f84 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_viewModel_FUN_00598fc0 (00598fc0) at 00599226 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_bip01_r_hand_0064d8ea
//   TerminatedCString s_d_0064d8f7
//   TerminatedCString s_noc_d_pcx_0064d8fa
//   TerminatedCString s_f_d_0064d904
//   TerminatedCString s_s_7_2f_0064d90b
//   TerminatedCString s_Zone_5_2f_0064d916
//   TerminatedCString s_ON_0064d924
//   TerminatedCString s_OFF_0064d927
//   TerminatedCString s_ON_0064d93f
//   TerminatedCString s_OFF_0064d942
//   TerminatedCString s_Selected_part_d_s_Domina_0064d95d
//   TerminatedCString s_F1_for_key_list_0064d989
//   TerminatedCString s_LOD_d_PixHeight_d_Polys__0064d99b
//   TerminatedCString s_Current_texture_set_d_0064d9bb
//   TerminatedCString s_Item_pos_X_5_3f_Y_5_3f_Z_0064d9d4
//   TerminatedCString s_Item_orient_P_5_3f_B_5_3_0064d9fa
//   TerminatedCString s_Bias_model_x_y_z_0064da23
//   TerminatedCString s_Current_dimensions_X_7_3_0064da34
//   TerminatedCString s_Enter_frame_number_0064daaa
//   TerminatedCString s_Select_motion_0064dabd
//   TerminatedCString s_Enter_exit_forward_to_fr_0064dacb
//   TerminatedCString s_Select_texture_set_0064daee
//   TerminatedCString s_Select_LOD_0_d_or_1_for__0064db01
//   TerminatedCString s_s_s_0064db28
//   TerminatedCString s_Part_for_bone_info_0064db2e
//   TerminatedCString s_Model_s_0064db41
//   TerminatedCString s_Bone_s_0064db4b
//   TerminatedCString s_Pos_5_3f_5_3f_5_3f_0064db54
//   TerminatedCString s_Orient_5_3f_5_3f_5_3f_0064db6b
//   TerminatedCString s_Paste_position_orientati_0064db85
//   TerminatedCString s_Copy_position_orientatio_0064dbaf
//   TerminatedCString s_Item_tester_0064dbd6
//   TerminatedCString s_kfm_0064dbe2
//   TerminatedCString s_models_0064dbe8
//   TerminatedCString s_Select_model_to_position_0064dbef
//   TerminatedCString s_Select_bone_0064dc08
//   TerminatedCString s_Edit_item_pos_0064dc14
//   TerminatedCString s_Edit_item_orient_P_B_H_0064dc22
//   TerminatedCString s_f_n_0064dc3b
//   TerminatedCString s_Import_these_values_X_g__0064dc40
//   TerminatedCString s_Couldn_t_parse_clipboard_0064dc7a
//   TerminatedCString s_CVector_g_g_g_makePBH_g__0064dc99
//   TerminatedCString s_Copied_text_to_clipboard_0064dcbe
//   TerminatedCString s_Enter_S3D_filename_to_sa_0064dcdc
//   TerminatedCString s_s3d_0064dcfe
//   TerminatedCString s_No_reference_pose_record_0064dd02
//   TerminatedCString s_Pause_Unpause_0064dd49
//   TerminatedCString s_P_0064dd57
//   TerminatedCString s_Toggle_ground_plane_0064dd59
//   TerminatedCString s_G_0064dd6d
//   TerminatedCString s_Toggle_use_canceled_moti_0064dd6f
//   TerminatedCString s_C_0064dd8a
//   TerminatedCString s_Move_model_back_to_the_o_0064dd8c
//   TerminatedCString s_O_0064ddaa
//   TerminatedCString s_Toggle_bones_0064ddac
//   TerminatedCString s_B_0064ddb9
//   TerminatedCString s_Choose_LOD_0064ddbb
//   TerminatedCString s_D_0064ddc6
//   TerminatedCString s_Choose_Texture_set_0064ddc8
//   TerminatedCString s_X_0064dddb
//   TerminatedCString s_Toggle_home_pose_0064dddd
//   TerminatedCString s_H_0064ddee
//   TerminatedCString s_Toggle_label_vertices_0064ddf0
//   TerminatedCString s_v_0064de06
//   TerminatedCString s_Toggle_Axis_Hey_I_ran_ou_0064de08
//   TerminatedCString s_s_1_0064de2e
//   TerminatedCString s_Begin_end_interactive_bi_0064de30
//   TerminatedCString s_CTRL_B_0064de4b
//   TerminatedCString s_Enter_exact_bias_value_0064de52
//   TerminatedCString s_SHIFT_B_0064de69
//   TerminatedCString s_Toggle_reference_pose_0064de71
//   TerminatedCString s_R_0064de87
//   TerminatedCString s_Record_reference_pose_0064de89
//   TerminatedCString s_SHIFT_R_0064de9f
//   TerminatedCString s_Scale_model_0064dea7
//   TerminatedCString s_CTRL_S_0064deb3
//   TerminatedCString s_Previous_frame_in_pause__0064deba
//   TerminatedCString s_anon_0064ded9
//   TerminatedCString s_Next_frame_in_pause_mode_0064dedb
//   TerminatedCString s_anon_0064def6
//   TerminatedCString s_Go_to_a_specific_frame_n_0064def8
//   TerminatedCString s_F_0064df16
//   TerminatedCString s_Go_to_the_first_frame_of_0064df18
//   TerminatedCString s_HOME_0064df3d
//   TerminatedCString s_Previous_motion_0064df42
//   TerminatedCString s_SHIFT_0064df52
//   TerminatedCString s_Next_motion_0064df5a
//   TerminatedCString s_SHIFT_0064df66
//   TerminatedCString s_Select_motion_from_list_0064df6e
//   TerminatedCString s_M_0064df86
//   TerminatedCString s_Next_part_0064df88
//   TerminatedCString s_TAB_0064df92
//   TerminatedCString s_Prev_part_0064df96
//   TerminatedCString s_SHIFT_TAB_0064dfa0
//   TerminatedCString s_Cycle_part_mode_0064dfaa
//   TerminatedCString s_S_0064dfba
//   TerminatedCString s_Toggle_loop_mode_0064dfbc
//   TerminatedCString s_L_0064dfcd
//   TerminatedCString s_Change_loop_back_frame_n_0064dfcf
//   TerminatedCString s_T_0064e000
//   TerminatedCString s_Item_tester_help_place_i_0064e002
//   TerminatedCString s_I_0064e02f
//   TerminatedCString s_Show_some_useful_info_0064e031
//   TerminatedCString s_Z_0064e047
//   TerminatedCString s_Export_to_S3D_0064e049
//   TerminatedCString s_E_0064e057
//   TerminatedCString s_You_biased_scaled_the_mo_0064e059
//   TerminatedCString s_dfm_0064e099
//   TerminatedCString s_models_0064e09d
//   TerminatedCString s_Enter_DFM_filename_0064e0a4
//   float FLOAT_0064e0ba = 0.5
//   double DOUBLE_0064e0c2 = 2
//   float FLOAT_0064e0ca = 3
//   float FLOAT_0064e0ce = 0.05000000
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CDemonSet* g_CDemonSetPtr = 03114278
//   WatcomStaticDestructorNode DAT_00681850
//   SMRGLTextureBasic DAT_006819e4
//   undefined4 DAT_006819fc
//   undefined4 DAT_00681a04
//   undefined4 DAT_00fe0000
//   CDemonRenderer g_CDemonRendererInstance
//   CEditorTools g_CEditorToolsPtr
//   undefined4 UCHAR_ARRAY_02d00c20
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.delta_time_float
//   void* g_CKeysPtr
//   int g_RenderedTriangleCount
//   undefined4 g_CDemonSetInstance.lighting_quality_mode
//   undefined4 DAT_036644d8
//   CKeyFramedModel DAT_03665f74
//   undefined4 DAT_03665f74.poly_count
//   undefined1 DAT_0366b64c
//   undefined4 DAT_036712e0
//   undefined4 DAT_036712e8
//   CVector3f g_ZeroVector
//   undefined4 g_ZeroVector.y
//   undefined4 g_ZeroVector.z
// Function calls:
//   core_box.cpp_CBoundingBox3D_computeFromVertices_FUN_00420e90
//   core_box.cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840
//   core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0
//   core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
//   core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0
//   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
//   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   core_motion.cpp_CMotionController_reset_FUN_0052dad0
//   core_skeledit.cpp_CDeformableModel_save_FUN_0058f040
//   core_skeledit.cpp_CDeformableModelInstance_exportModelToS3D_FUN_00598ee0
//   core_skeledit.cpp_FUN_0058e3e0
//   core_skeledit.cpp_FUN_0058e600
//   core_skeleton.cpp_CDeformableModel_getBonePart_FUN_0059c2d0
//   core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_0059c220
//   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810
//   core_skeleton.cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_005a0430
//   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
//   core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
//   core_skeleton.cpp_CDeformableModelInstance_renderBones_FUN_005a17e0
//   core_skeleton.cpp_CDeformableModelInstance_renderSkeleton_FUN_005a17b0
//   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
//   core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
//   core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0
//   core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_005a0410
//   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
//   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   core_skeleton.cpp_freeAllModels_FUN_005a1dc0
//   core_skeleton.cpp_freeAllSkeletons_FUN_005a1ea0
//   core_slew.cpp_CSlew_init_FUN_005a2060
//   core_slew.cpp_CSlew_processInput_FUN_005a20b0
//   core_stairs.cpp_CSpotView_FUN_005b95c0
//   core_stairs.cpp_FUN_005b9620
//   core_stairs.cpp_FUN_005b9670
//   core_stairs.cpp_FUN_005b9a20
//   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
//   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   core_xform.cpp_getTranslation_FUN_005f6110
//   core_xform.cpp_invertAndGetTranslation_FUN_005f6140
//   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   core_xform.cpp_matrixToEulerAnglesZYX_FUN_005f5bd0
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   crt_file.c_makepath_FUN_005febfc
//   crt_math.c_round_FUN_005fe6b0
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_stdio.c_sscanf_FUN_0060013c
//   crt_stdlib.c_atexit_FUN_005ff060
//   crt_string.c_splitpath_FUN_005ff178
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_fillRectColor_FUN_00403170
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80
//   engine_drender.cpp_CDemonRenderer_renderTexturedLitNearPlane_FUN_0048ac40
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
//   engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0
//   engine_keys.cpp_CKeys_getInputKey_FUN_00502460
//   engine_pcx.c_saveScreenshotGeneral_FUN_005490c0
//   shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
//   shape_edittool.cpp_CEditorTools_getClipboardText_FUN_004a1b30
//   shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
//   shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020
//   shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_004a0300
//   shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0
//   shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
//   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

void __cdecl
core_skeledit_cpp_CDeformableModelInstance_viewModel_FUN_005968b0
          (CDeformableModelInstance *this_ptr)

{
  int *piVar1;
  char cVar2;
  SRenderVertex *pSVar3;
  float fVar4;
  CDemonRenderer *this_ptr_00;
  uint uVar5;
  uchar uVar6;
  bool bVar7;
  int iVar8;
  CDeformableModel *pCVar9;
  undefined3 extraout_var;
  float *extraout_EAX;
  SMotion *pSVar10;
  CMotionList *pCVar11;
  CVector3f *pCVar12;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined4 extraout_EDX;
  CVector3f *pCVar13;
  undefined4 extraout_EDX_00;
  CDeformableModelInstance *pCVar14;
  BADSPACEBASE *in_ESP;
  int iVar15;
  float *pfVar16;
  SBone *string_data;
  char *pcVar17;
  int x_pos;
  char *pcVar18;
  byte bVar19;
  float10 fVar20;
  double dVar21;
  CDeformableModelInstance *in_stack_0000000c;
  float fStackY_3394;
  CGame *in_stack_ffffcc80;
  CMatrix3x4f *in_stack_ffffcd80;
  float fVar22;
  CDeformableModel *in_stack_ffffce2c;
  CMatrix3x4f *in_stack_ffffce30;
  CMatrix3x4f *in_stack_ffffce40;
  undefined1 show_current_value;
  CKeys *in_stack_ffffcf64;
  float in_stack_ffffcf8c;
  float in_stack_ffffcf90;
  CEditorTools *in_stack_ffffcf94;
  char *in_stack_ffffcf98;
  float *in_stack_ffffcf9c;
  char *in_stack_ffffd01c;
  CEditorTools *in_stack_ffffd020;
  char *in_stack_ffffd024;
  char *in_stack_ffffd028;
  float in_stack_ffffd02c;
  CKeys *pCVar23;
  double dVar24;
  CPickList *pCVar25;
  char *in_stack_ffffd05c;
  char *in_stack_ffffd060;
  char *in_stack_ffffd064;
  char *in_stack_ffffd068;
  float in_stack_ffffd1c4;
  CPickList CStack_18f8;
  CPickList CStack_1550;
  CPickList CStack_11a8;
  CPickList CStack_e00;
  char acStack_a58 [256];
  char acStack_958 [256];
  char acStack_858 [256];
  char acStack_758 [256];
  char acStack_658 [200];
  char acStack_590 [100];
  char acStack_52c [100];
  char acStack_4c8 [100];
  char acStack_464 [100];
  char acStack_400 [100];
  SMRGLHeaderPrimitive local_39c;
  undefined4 local_384;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined4 local_374;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 uStack_358;
  undefined1 auStack_354 [20];
  float fStack_340;
  float afStack_318 [12];
  CVector3f aCStack_2e8 [4];
  CMatrix3x4f CStack_2b8;
  float afStack_288 [12];
  CVector3f aCStack_258 [4];
  CMatrix3x4f CStack_228;
  undefined1 local_1f8 [16];
  float fStack_1e8;
  float local_1e4;
  CBoundingBox3D local_1dc;
  float local_1c4;
  float local_1c0;
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
  CVector3f local_194;
  CMatrix3x3f CStack_188;
  undefined1 auStack_164 [28];
  float local_148 [2];
  CMatrix3x3f CStack_140;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float fStack_108;
  undefined1 auStack_104 [16];
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  CVector3i local_d4;
  CVector3i local_c8;
  float *local_bc;
  CDeformableModel *local_b8;
  CSkeleton *local_b4;
  uint local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  uint local_a0;
  int local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  int local_8c;
  float local_88;
  float local_84;
  int local_80;
  uint local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  CVector3f *local_64;
  int local_60;
  int local_5c;
  CBoundingBox3D *local_58;
  CVector3f *local_54;
  CVector3f *local_50;
  CMatrix3x4f *local_4c;
  float local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  int local_38;
  float local_34;
  float local_30;
  SPart *local_2c;
  SBone *local_28;
  int local_24;
  SBone *local_20;
  float local_1c;
  float local_18;
  int local_14;
  float local_10;
  char acStack_c [4];
  
  bVar19 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x33f0);
  core_skeleton_cpp_freeAllSkeletons_FUN_005a1ea0();
  fStackY_3394 = 8.210963e-39;
  core_skeleton_cpp_freeAllModels_FUN_005a1dc0();
  fStackY_3394 = 8.21098e-39;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(in_stack_0000000c);
  local_b8 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(in_stack_0000000c);
  local_b4 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(local_b8);
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_ffffcc80);
  core_stairs_cpp_CSpotView_FUN_005b95c0((CSpotView *)auStack_354);
  auStack_354[0] = '\0';
  auStack_354[1] = '\0';
  auStack_354[2] = 'p';
  auStack_354[3] = 'A';
  auStack_354[0xc] = -0x25;
  auStack_354[0xd] = '\x0f';
  auStack_354[0xe] = 'I';
  auStack_354[0xf] = '@';
  local_ec = (in_stack_0000000c->bounding_box).min.x + (in_stack_0000000c->bounding_box).max.x;
  local_e8 = (in_stack_0000000c->bounding_box).min.y + (in_stack_0000000c->bounding_box).max.y;
  auStack_354._16_4_ = local_ec * FLOAT_0064e0ba;
  local_e4 = (in_stack_0000000c->bounding_box).min.z + (in_stack_0000000c->bounding_box).max.z;
  local_dc = local_e8 * FLOAT_0064e0ba;
  local_d8 = local_e4 * FLOAT_0064e0ba;
  local_1ac = (in_stack_0000000c->bounding_box).min.x + (in_stack_0000000c->bounding_box).max.x;
  local_1a8 = (in_stack_0000000c->bounding_box).min.y + (in_stack_0000000c->bounding_box).max.y;
  auStack_164._12_4_ = local_1ac * FLOAT_0064e0ba;
  fStack_340 = local_1a8 * FLOAT_0064e0ba;
  local_1a4 = (in_stack_0000000c->bounding_box).min.z + (in_stack_0000000c->bounding_box).max.z;
  auStack_164._20_4_ = local_1a4 * FLOAT_0064e0ba;
  local_80 = -1;
  auStack_164._16_4_ = fStack_340;
  local_e0 = (float)auStack_354._16_4_;
  core_stairs_cpp_FUN_005b9620();
  local_a8 = -1;
  local_b0 = 0;
  local_40 = 0;
  local_3c = 0;
  local_ac = 0;
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  local_94 = 0;
  local_90 = 0;
  local_38 = 0;
  local_8c = 0;
  local_7c = 0;
  local_44 = 1;
  if ((DAT_0366b64c & 1) == 0) {
    DAT_0366b64c = DAT_0366b64c | 1;
  }
  local_5c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(local_b4,"bip01 r hand");
  if (local_5c < 0) {
    local_5c = 0;
  }
  core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)local_1f8);
  if ((DAT_0366b64c & 2) == 0) {
    DAT_0366b64c = DAT_0366b64c | 2;
    core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00476cf0(&DAT_03665f74);
    crt_stdlib_c_atexit_FUN_005ff060(&DAT_00681850);
  }
  core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(&DAT_03665f74);
  CStack_188.m[1].x = g_ZeroVector.x;
  CStack_188.m[1].y = g_ZeroVector.y;
  CStack_188.m[1].z = g_ZeroVector.z;
  local_194.x = g_ZeroVector.x;
  local_194.y = g_ZeroVector.y;
  local_194.z = g_ZeroVector.z;
  core_motion_cpp_CMotionController_reset_FUN_0052dad0(&in_stack_0000000c->motion_controller);
  dVar24 = (double)(ulonglong)(uint)in_stack_ffffd02c;
  auStack_104._12_4_ = 0.0;
  local_f4 = 0.0;
  local_f0 = 0.0;
  g_CDemonSetPtr->lighting_quality_mode = 1;
  local_28 = local_b4->bone_list;
  local_2c = local_b8->parts;
  local_54 = local_b8->vertex_pool;
  local_50 = in_stack_0000000c->transformed_vertices;
  local_bc = &(in_stack_0000000c->motion_controller).current_frame_number;
  local_4c = (in_stack_0000000c->bone_transform).bone_world_matrices;
  local_58 = &in_stack_0000000c->bounding_box;
  local_64 = &in_stack_0000000c->accumulated_root_motion;
  local_20 = local_28;
  do {
    local_88 = g_CGamePtr->delta_time_float;
    g_RenderedTriangleCount = 0;
    engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth,g_WindowHeight,0xf8);
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    core_stairs_cpp_FUN_005b9a20();
    iVar8 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
    if (iVar8 == 0) {
      iVar8 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
      if (iVar8 == 0) {
        iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x47);
        if (iVar8 != 0) {
          (in_stack_0000000c->motion_controller).current_frame_number = 0.0;
        }
        iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x4f);
        if (iVar8 != 0) {
          pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                              (&in_stack_0000000c->motion_controller);
          local_10 = (float)(pSVar10->frame_count + -1);
          (in_stack_0000000c->motion_controller).current_frame_number = (float)(int)local_10;
        }
      }
      else {
        iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x34);
        if (iVar8 != 0) {
          piVar1 = &(in_stack_0000000c->motion_controller).current_motion_index;
          *piVar1 = *piVar1 + 1;
        }
        iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x33);
        if (iVar8 != 0) {
          piVar1 = &(in_stack_0000000c->motion_controller).current_motion_index;
          *piVar1 = *piVar1 + -1;
        }
        if ((in_stack_0000000c->motion_controller).current_motion_index < 0) {
          pCVar11 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                              (&in_stack_0000000c->motion_controller);
          (in_stack_0000000c->motion_controller).current_motion_index = pCVar11->motion_count + -1;
        }
        pCVar11 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                            (&in_stack_0000000c->motion_controller);
        if (pCVar11->motion_count <= (in_stack_0000000c->motion_controller).current_motion_index) {
          (in_stack_0000000c->motion_controller).current_motion_index = 0;
        }
      }
    }
    local_64->z = 0.0;
    local_64->y = local_64->z;
    local_64->x = local_64->y;
    local_84 = 1.0;
    iVar8 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x38);
    if (iVar8 != 0) {
      local_84 = 0.33333334;
    }
    if (local_a0 == 0) {
      pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                          (&in_stack_0000000c->motion_controller);
      fVar22 = (float)pSVar10->frame_start;
      local_78 = (in_stack_0000000c->motion_controller).current_frame_number;
      pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                          (&in_stack_0000000c->motion_controller);
      local_74 = (float)pSVar10->frame_count;
      if (local_98 == 0) {
        pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                            (&in_stack_0000000c->motion_controller);
        fVar4 = local_88 * pSVar10->fps * local_84 +
                (in_stack_0000000c->motion_controller).current_frame_number;
        (in_stack_0000000c->motion_controller).current_frame_number = fVar4;
        if (local_74 < fVar4) {
          do {
            local_10 = fVar22;
            (*((in_stack_0000000c->motion_controller).vtable)->accumulateScaledRootMotion)
                      (&in_stack_0000000c->motion_controller,(float)(int)fVar22 + local_78,
                       (float)(int)fVar22 + local_74,1.0);
            if (local_b0 == 0) {
              (in_stack_0000000c->motion_controller).current_frame_number =
                   (in_stack_0000000c->motion_controller).current_frame_number - local_74;
            }
            else {
              pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                                  (&in_stack_0000000c->motion_controller);
              (in_stack_0000000c->motion_controller).current_frame_number =
                   pSVar10->exit_forward_to_frame;
            }
            local_78 = 0.0;
          } while (local_74 < (in_stack_0000000c->motion_controller).current_frame_number);
        }
        local_10 = fVar22;
        (*((in_stack_0000000c->motion_controller).vtable)->accumulateScaledRootMotion)
                  (&in_stack_0000000c->motion_controller,(float)(int)fVar22 + local_78,
                   (float)(int)fVar22 + (in_stack_0000000c->motion_controller).current_frame_number,
                   1.0);
      }
      else {
        iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x34);
        if (iVar8 != 0) {
          (in_stack_0000000c->motion_controller).current_frame_number =
               (in_stack_0000000c->motion_controller).current_frame_number + local_84;
          local_70 = local_74;
          if ((in_stack_0000000c->motion_controller).current_frame_number < local_74) {
            local_70 = (in_stack_0000000c->motion_controller).current_frame_number;
          }
          local_10 = fVar22;
          (*((in_stack_0000000c->motion_controller).vtable)->accumulateScaledRootMotion)
                    (&in_stack_0000000c->motion_controller,(float)(int)fVar22 + local_78,
                     (float)(int)fVar22 + local_70,1.0);
        }
        iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x33);
        if (iVar8 != 0) {
          (in_stack_0000000c->motion_controller).current_frame_number =
               (in_stack_0000000c->motion_controller).current_frame_number - local_84;
          local_6c = 0.0;
          if (0.0 < (in_stack_0000000c->motion_controller).current_frame_number) {
            local_6c = (in_stack_0000000c->motion_controller).current_frame_number;
          }
          local_68 = (float)(int)fVar22;
          local_10 = fVar22;
          (*((in_stack_0000000c->motion_controller).vtable)->accumulateScaledRootMotion)
                    (&in_stack_0000000c->motion_controller,local_68 + local_6c,local_68 + local_78,
                     1.0);
          if ((in_stack_0000000c->motion_controller).current_frame_number < 0.0) {
            local_10 = local_68 + local_74;
            (*((in_stack_0000000c->motion_controller).vtable)->accumulateScaledRootMotion)
                      (&in_stack_0000000c->motion_controller,
                       local_10 + (in_stack_0000000c->motion_controller).current_frame_number,
                       local_10,1.0);
          }
          CStack_188.m[2].x = -local_64->x;
          CStack_188.m[2].y = -local_64->y;
          CStack_188.m[2].z = -local_64->z;
          if (CStack_188.m + 2 != local_64) {
            local_64->x = CStack_188.m[2].x;
            local_64->y = CStack_188.m[2].y;
            local_64->z = CStack_188.m[2].z;
          }
        }
      }
      while ((in_stack_0000000c->motion_controller).current_frame_number < 0.0) {
        pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                            (&in_stack_0000000c->motion_controller);
        (in_stack_0000000c->motion_controller).current_frame_number =
             (float)pSVar10->frame_count +
             (in_stack_0000000c->motion_controller).current_frame_number;
      }
      pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                          (&in_stack_0000000c->motion_controller);
      if ((float)pSVar10->frame_count <= (in_stack_0000000c->motion_controller).current_frame_number
         ) {
        if (local_b0 == 0) {
          (in_stack_0000000c->motion_controller).current_frame_number = 0.0;
        }
        else {
          pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                              (&in_stack_0000000c->motion_controller);
          (in_stack_0000000c->motion_controller).current_frame_number =
               pSVar10->exit_forward_to_frame;
        }
      }
      if (local_40 != 0) {
        auStack_104._12_4_ = (float)auStack_104._12_4_ + local_64->x;
        local_f4 = local_f4 + local_64->y;
        local_f0 = local_f0 + local_64->z;
      }
    }
    iVar8 = local_3c;
    pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(in_stack_0000000c);
    if (iVar8 < pCVar9->num_parts) {
      if (iVar8 < 0) {
        pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                           (in_stack_0000000c);
        local_3c = pCVar9->num_parts + -1;
      }
    }
    else {
      local_3c = 0;
    }
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,(CVector3f *)(auStack_104 + 0xc));
    local_c8.x = 0;
    local_c8.y = 0;
    local_c8.z = 0;
    if (local_a0 == 0) {
      core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
                (in_stack_0000000c);
    }
    else {
      core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80(in_stack_0000000c);
      core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
                (in_stack_0000000c);
    }
    if (local_ac == 1) {
      pCVar14 = in_stack_0000000c;
      for (iVar8 = 0;
          pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                             (in_stack_0000000c), iVar8 < pCVar9->num_parts; iVar8 = iVar8 + 1) {
        pCVar14->part_visibility_flags[0] = 0;
        pCVar14 = (CDeformableModelInstance *)&(pCVar14->motion_controller).current_motion_index;
      }
      in_stack_0000000c->part_visibility_flags[local_3c] = 3;
    }
    else if (local_ac == 2) {
      pCVar14 = in_stack_0000000c;
      for (iVar8 = 0;
          pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                             (in_stack_0000000c), iVar8 < pCVar9->num_parts; iVar8 = iVar8 + 1) {
        pCVar14->part_visibility_flags[0] = 3;
        pCVar14 = (CDeformableModelInstance *)&(pCVar14->motion_controller).current_motion_index;
      }
      in_stack_0000000c->part_visibility_flags[local_3c] = 0;
    }
    core_skeleton_cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_005a0430
              (in_stack_0000000c);
    iVar8 = local_9c;
    this_ptr_00 = g_CDemonRendererPtr;
    in_stack_0000000c->texture_set_indices[local_3c] = local_a4;
    engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(this_ptr_00,0);
    if (iVar8 < 2) {
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
                (in_stack_0000000c,local_a8,0xffffffff,1,0);
    }
    engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(g_CDemonRendererPtr);
    uVar5 = local_7c;
    core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_005a0410(in_stack_0000000c);
    show_current_value = SUB41(in_stack_ffffcf64,0);
    if (uVar5 != 0) {
      iVar15 = 0;
      iVar8 = 0;
      while (show_current_value = SUB41(in_stack_ffffcf64,0),
            iVar8 < local_b8->vertex_count[in_stack_0000000c->cached_skinned_lod_index]) {
        pSVar3 = g_CDemonRendererPtr->vertex_buffer_ptr;
        if ((*(byte *)((int)&(pSVar3->projected_vertex).screen_x + iVar15 + 3) & 0x80) == 0) {
          local_60 = *(int *)((int)&(pSVar3->projected_vertex).screen_y + iVar15) >> 0x10;
          x_pos = *(int *)((int)&(pSVar3->projected_vertex).screen_x + iVar15) >> 0x10;
          if (x_pos < 0) goto LAB_0059722b;
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_590,"%d");
          engine_2d_c_drawText_FUN_00401fd0(acStack_590,x_pos,local_60);
          iVar8 = iVar8 + 1;
          iVar15 = iVar15 + 0x30;
        }
        else {
LAB_0059722b:
          iVar8 = iVar8 + 1;
          iVar15 = iVar15 + 0x30;
        }
      }
    }
    iVar8 = local_5c;
    if (0 < DAT_03665f74.poly_count) {
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (&CStack_2b8,CStack_188.m + 1,&local_194);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&CStack_2b8,local_4c + iVar8,in_stack_ffffcd80);
      pfVar16 = afStack_318;
      pCVar12 = aCStack_2e8;
      for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
        pCVar12->x = *pfVar16;
        pfVar16 = pfVar16 + (uint)bVar19 * -2 + 1;
        pCVar12 = (CVector3f *)((int)pCVar12 + ((uint)bVar19 * -2 + 1) * 4);
      }
      core_xform_cpp_getTranslation_FUN_005f6110(aCStack_2e8,(CMatrix3x4f *)auStack_164);
      if ((float *)local_1f8 != extraout_EAX) {
        local_1f8._0_4_ = *extraout_EAX;
        local_1f8._4_4_ = extraout_EAX[1];
        local_1f8._8_4_ = extraout_EAX[2];
      }
      pCVar12 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690(aCStack_2e8,&CStack_140);
      if ((CVector3f *)(local_1f8 + 0xc) != pCVar12) {
        local_1f8._12_4_ = pCVar12->x;
        fStack_1e8 = pCVar12->y;
        local_1e4 = pCVar12->z;
      }
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr,(CVector3i *)(local_1f8 + 0xc),(CVector3i *)local_1f8);
      core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
                (&DAT_03665f74,(CKeyFramedModelInstance *)0x0,0,-1);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    }
    if (0 < local_80) {
      core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510
                (in_stack_0000000c,(SBoneTransformData *)&fStackY_3394);
      core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0
                (in_stack_0000000c,(SBoneTransformData *)&DAT_036644d8);
      engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0(g_CDemonRendererPtr,1);
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0x8000);
      core_skeleton_cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
                (in_stack_0000000c,-1,0x2e7,1,0);
      engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80(g_CDemonRendererPtr);
      core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0
                (in_stack_0000000c,(SBoneTransformData *)&fStackY_3394);
    }
    iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x3e);
    if (iVar8 != 0) {
      DAT_036712e0 = DAT_036712e0 + 1;
      crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_036712e8,"noc%d.pcx");
      engine_pcx_c_saveScreenshotGeneral_FUN_005490c0(&DAT_036712e8);
    }
    if (local_44 != 0) {
      local_d4.x = (int)-(float)auStack_104._12_4_;
      local_d4.y = (int)-local_f4;
      local_d4.z = (int)-local_f0;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr,&local_c8,&local_d4);
      auStack_164._24_4_ = DAT_006819fc;
      local_148[(uint)bVar19 * -2] = (float)(&DAT_00681a00)[(uint)bVar19 * -2];
      *(undefined4 *)((int)&CStack_140 + (uint)bVar19 * -8 + (uint)bVar19 * -8 + -4) =
           (&DAT_00681a04)[(uint)bVar19 * -2 + (uint)bVar19 * -2];
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,
                 (CVector3i *)(auStack_164 + 0x18));
      auStack_164._24_4_ = 5.38099e-42;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
                 (CVector3i *)(auStack_164 + 0x18));
      local_148[1] = 5.38099e-42;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
                 (CVector3i *)(auStack_164 + 0x18));
      auStack_164._24_4_ = -NAN;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,
                 (CVector3i *)(auStack_164 + 0x18));
      local_39c.base.count = 4;
      local_374 = 0xfe0000;
      local_368 = 0xfe0000;
      local_364 = 0xfe0000;
      uStack_358 = 0xfe0000;
      local_39c.surface_normal.D = 0;
      local_39c.surface_normal.C = 0;
      local_39c.surface_normal.B = 0;
      local_39c.surface_normal.A = 0;
      local_384 = 0;
      local_360 = 3;
      local_380 = 0x20000;
      local_37c = 0x20000;
      local_370 = 0x20000;
      local_35c = 0x20000;
      local_378 = 1;
      local_36c = 2;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                (g_CDemonRendererPtr,&DAT_006819e4);
      engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970(g_CDemonRendererPtr,0xff,0,0xff);
      engine_drender_cpp_CDemonRenderer_renderTexturedLitNearPlane_FUN_0048ac40
                (g_CDemonRendererPtr,&local_39c);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    }
    iVar8 = local_9c;
    if (0 < local_9c) {
      iVar15 = 1;
      if (2 < local_9c) {
        iVar15 = 3;
      }
      core_skeleton_cpp_CDeformableModelInstance_renderSkeleton_FUN_005a17b0
                (in_stack_0000000c,(uint)g_ColorCubeLookup[0x7c00],iVar15);
      if (iVar8 == 4) {
        core_skeleton_cpp_CDeformableModelInstance_renderBones_FUN_005a17e0(in_stack_0000000c);
      }
    }
    if (local_90 == 0) {
      if (local_94 != 0) {
        fVar22 = 3.57331e-43;
        goto LAB_005975b4;
      }
    }
    else {
      uVar6 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(g_CEditorToolsPtr)
      ;
      fVar22 = (float)CONCAT31(extraout_var,uVar6);
LAB_005975b4:
      shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
                (g_CEditorToolsPtr,2.0,(int)fVar22);
    }
    in_stack_ffffcd80 = (CMatrix3x4f *)0x5975e0;
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_464,"%f, %d");
    engine_2d_c_drawText_FUN_00401fd0(acStack_464,0,g_WindowHeight + -0xb);
    core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
              (&in_stack_0000000c->motion_controller);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_464," %s %7.2f ");
    engine_2d_c_drawText_FUN_00401fd0(acStack_464,0,0xb);
    local_10 = core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
                         (&in_stack_0000000c->motion_controller);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_464," Zone: %5.2f ");
    engine_2d_c_drawText_FUN_00401fd0(acStack_464,0,0x16);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_464," [L] Loop mode: %s ");
    engine_2d_c_drawText_FUN_00401fd0(acStack_464,0,0x21);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_464," [C] Use canceled: %s ");
    engine_2d_c_drawText_FUN_00401fd0(acStack_464,0,0x2c);
    iVar8 = local_3c;
    core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_0059c220(local_b8,local_3c);
    core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_0059c220(local_b8,iVar8);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_464," Selected part: %d \"%s\" Dominant bone: \"%s\"");
    engine_2d_c_drawText_FUN_00401fd0(acStack_464,0,0x37);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_464," F1 for key list ");
    engine_2d_c_drawText_FUN_00401fd0(acStack_464,0,0x42);
    local_10 = core_box_cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840(local_58);
    fVar20 = (float10)local_10;
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,local_10));
    local_10 = (float)(int)ROUND(fVar20);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_464," LOD: %d PixHeight: %d Polys %d");
    engine_2d_c_drawText_FUN_00401fd0(acStack_464,0,0x4d);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_464," Current texture set: %d");
    engine_2d_c_drawText_FUN_00401fd0(acStack_464,0,0x58);
    if (0 < DAT_03665f74.poly_count) {
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_464," Item pos: X: %5.3f Y: %5.3f Z: %5.3f");
      engine_2d_c_drawText_FUN_00401fd0(acStack_464,0,99);
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_464," Item orient: P: %5.3f B: %5.3f H: %5.3f");
      engine_2d_c_drawText_FUN_00401fd0(acStack_464,0,0x6e);
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
    if (iVar8 != 0) break;
    iVar8 = 0;
    pCVar12 = local_54;
    pCVar13 = local_50;
    if (0 < local_b4->bone_count) {
      do {
        if (pCVar13 != pCVar12) {
          pCVar13->x = pCVar12->x;
          pCVar13->y = pCVar12->y;
          pCVar13->z = pCVar12->z;
        }
        iVar8 = iVar8 + 1;
        pCVar12 = pCVar12 + 1;
        pCVar13 = pCVar13 + 1;
      } while (iVar8 < local_b4->bone_count);
    }
    if (((DAT_03665f74.poly_count < 1) ||
        (iVar8 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d), iVar8 == 0)) || (local_98 == 0))
    {
      if (local_90 == 0) {
        core_stairs_cpp_FUN_005b9670();
      }
      else {
        core_stairs_cpp_FUN_005b9670();
        local_48 = g_CGamePtr->delta_time_float * (float)DOUBLE_0064e0c2;
        iVar8 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
        if (iVar8 != 0) {
          local_48 = local_48 * FLOAT_0064e0ca;
        }
        iVar8 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x38);
        if (iVar8 != 0) {
          local_48 = local_48 * FLOAT_0064e0ce;
        }
        local_110 = 0.0;
        local_10c = 0.0;
        fStack_108 = 0.0;
        iVar8 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1e);
        if (iVar8 != 0) {
          local_10c = local_10c - local_48;
        }
        iVar8 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x10);
        if (iVar8 != 0) {
          local_10c = local_10c + local_48;
        }
        iVar8 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4b);
        if (iVar8 != 0) {
          local_110 = local_110 - local_48;
        }
        iVar8 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4d);
        if (iVar8 != 0) {
          local_110 = local_110 + local_48;
        }
        iVar8 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x50);
        if (iVar8 != 0) {
          fStack_108 = fStack_108 - local_48;
        }
        iVar8 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x48);
        if (iVar8 != 0) {
          fStack_108 = fStack_108 + local_48;
        }
        if (0.0 < SQRT(fStack_108 * fStack_108 + local_110 * local_110 + local_10c * local_10c)) {
          local_38 = 1;
          core_skeledit_cpp_FUN_0058e600();
        }
      }
    }
    else {
      core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)local_1f8);
      in_stack_ffffce30 = &CStack_228;
      in_stack_ffffce2c = (CDeformableModel *)0x598059;
      core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
                (in_stack_ffffce30,(CVector3f *)local_1f8,(CVector3f *)(local_1f8 + 0xc));
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                (local_4c + local_5c,&CStack_228,in_stack_ffffce40);
      pfVar16 = afStack_288;
      pCVar12 = aCStack_258;
      for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
        pCVar12->x = *pfVar16;
        pfVar16 = pfVar16 + (uint)bVar19 * -2 + 1;
        pCVar12 = (CVector3f *)((int)pCVar12 + ((uint)bVar19 * -2 + 1) * 4);
      }
      pCVar12 = core_xform_cpp_invertAndGetTranslation_FUN_005f6140
                          (aCStack_258,(CMatrix3x4f *)auStack_104);
      if (CStack_188.m + 1 != pCVar12) {
        CStack_188.m[1].x = pCVar12->x;
        CStack_188.m[1].y = pCVar12->y;
        CStack_188.m[1].z = pCVar12->z;
      }
      pCVar12 = core_xform_cpp_matrixToEulerAnglesZYX_FUN_005f5bd0(aCStack_258,&CStack_188);
      if (&local_194 != pCVar12) {
        local_194.x = pCVar12->x;
        local_194.y = pCVar12->y;
        local_194.z = pCVar12->z;
      }
    }
    in_stack_ffffce40 = (CMatrix3x4f *)0x597c2c;
    iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x30);
    if (iVar8 != 0) {
      iVar8 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
      if (iVar8 == 0) {
        iVar8 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
        if (iVar8 == 0) {
          local_9c = local_9c + 1;
          if (4 < local_9c) {
            local_9c = 0;
          }
        }
        else {
          local_90 = (uint)(local_90 == 0);
        }
      }
      else {
        iVar8 = shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_004a0300
                          (g_CEditorToolsPtr,"Bias model x,y,z",CStack_140.m + 1,false);
        if ((iVar8 != 0) &&
           (0.0 < SQRT(CStack_140.m[1].z * CStack_140.m[1].z +
                       CStack_140.m[1].x * CStack_140.m[1].x + CStack_140.m[1].y * CStack_140.m[1].y
                      ))) {
          local_38 = 1;
          core_skeledit_cpp_FUN_0058e600();
        }
      }
    }
    iVar8 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x18);
    if (iVar8 != 0) {
      local_f4 = 0.0;
      auStack_104._12_4_ = 0.0;
      local_f0 = 0.0;
    }
    iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x19);
    if (iVar8 != 0) {
      local_98 = (uint)(local_98 == 0);
    }
    iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x26);
    if (iVar8 != 0) {
      local_b0 = (uint)(local_b0 == 0);
    }
    iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x22);
    if (iVar8 != 0) {
      local_44 = (uint)(local_44 == 0);
    }
    iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x2e);
    if (iVar8 != 0) {
      local_40 = (uint)(local_40 == 0);
    }
    iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,2);
    if (iVar8 != 0) {
      local_94 = (uint)(local_94 == 0);
    }
    iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x2f);
    if (iVar8 != 0) {
      local_7c = (uint)(local_7c == 0);
    }
    iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x1f);
    if (iVar8 != 0) {
      iVar8 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
      pCVar9 = local_b8;
      if (iVar8 == 0) {
        local_ac = (local_ac + 1) % 3;
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
                  (in_stack_0000000c,0);
        core_box_cpp_CBoundingBox3D_computeFromVertices_FUN_00420e90
                  (&local_1dc,pCVar9->vertex_count[in_stack_0000000c->cached_skinned_lod_index],
                   in_stack_0000000c->skinned_vertices_buffer);
        local_1a0 = local_1dc.max.x - local_1dc.min.x;
        local_19c = local_1dc.max.y - local_1dc.min.y;
        local_198 = local_1dc.max.z - local_1dc.min.z;
        CStack_140.m[2].x = local_1a0;
        CStack_140.m[2].y = local_19c;
        CStack_140.m[2].z = local_198;
        local_11c = local_1a0;
        local_118 = local_19c;
        local_114 = local_198;
        crt_stdio_c_sprintf_FUN_005fdbd0(acStack_658,"Current dimensions:\nX: %7.3f .. %7.3f : %7.3f\nY: %7.3f .. %7.3f : %7.3f\nZ: %7.3f .. %7.3f : %7.3f\n\nEnter scale factor");
        iVar8 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                          (g_CEditorToolsPtr,acStack_658,&local_34,true,0.0001,999999.9,false);
        if ((iVar8 != 0) && (local_34 != 1.0)) {
          core_skeledit_cpp_FUN_0058e3e0();
          local_8c = 1;
        }
      }
    }
    iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x21);
    if (iVar8 != 0) {
      pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                          (&in_stack_0000000c->motion_controller);
      shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                (g_CEditorToolsPtr,"Enter frame number",local_bc,true,0.0,
                 (float)pSVar10->frame_count,(bool)show_current_value);
    }
    in_stack_ffffcf64 = g_CKeysPtr;
    iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x32);
    if (iVar8 != 0) {
      iVar8 = 0;
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_18f8);
      for (iVar15 = 0;
          pCVar11 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                              (&in_stack_0000000c->motion_controller),
          iVar15 < pCVar11->motion_count; iVar15 = iVar15 + 1) {
        pCVar11 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                            (&in_stack_0000000c->motion_controller);
        pcVar18 = pCVar11->motions[0].motion_name + iVar8;
        iVar8 = iVar8 + 0x54c;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_18f8.base_strlist,pcVar18);
      }
      iVar8 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&CStack_18f8,"Select motion",
                         (in_stack_0000000c->motion_controller).current_motion_index,0);
      if (-1 < iVar8) {
        (in_stack_0000000c->motion_controller).current_motion_index = iVar8;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&CStack_18f8,0,(uint)in_stack_ffffcf8c,(uint)in_stack_ffffcf90,
                 (uint)in_stack_ffffcf94,(uint)in_stack_ffffcf98,(uint)in_stack_ffffcf9c);
    }
    in_stack_ffffcf8c = 2.8026e-44;
    iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x14);
    if (iVar8 != 0) {
      pSVar10 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                          (&in_stack_0000000c->motion_controller);
      fVar20 = (float10)pSVar10->exit_forward_to_frame;
      dVar21 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_00,pSVar10));
      local_30 = (float)(int)ROUND(fVar20);
      iVar8 = *(int *)(SUB84(dVar21,0) + 0x34);
      pCVar11 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                          (&in_stack_0000000c->motion_controller);
      in_stack_ffffcf9c = &local_30;
      in_stack_ffffcf98 = "Enter exit forward to frame number";
      in_stack_ffffcf90 = 8.22002e-39;
      in_stack_ffffcf94 = g_CEditorToolsPtr;
      bVar7 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                        (g_CEditorToolsPtr,"Enter exit forward to frame number",
                         (int *)in_stack_ffffcf9c,true,0,pCVar11->motions[iVar8].frame_count + -1,
                         true);
      if (CONCAT31(extraout_var_00,bVar7) != 0) {
        local_10 = local_30;
        *(float *)(SUB84(dVar21,0) + 0x38) = (float)(int)local_30;
      }
    }
    iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x2d);
    if (iVar8 != 0) {
      shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                (g_CEditorToolsPtr,"Select texture set",&local_a4,true,0,4,true);
    }
    iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x20);
    if (iVar8 != 0) {
      pCVar9 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                         (in_stack_0000000c);
      iVar8 = pCVar9->num_lods;
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_52c,"Select LOD (0..%d), or -1 for auto-LOD");
      shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                (g_CEditorToolsPtr,acStack_52c,&local_a8,true,-1,iVar8 + -1,true);
    }
    iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x23);
    if (iVar8 != 0) {
      local_a0 = (uint)(local_a0 == 0);
    }
    iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x2c);
    if (iVar8 != 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_1550);
      pCVar9 = local_b8;
      iVar8 = 0;
      if (0 < local_b4->bone_count) {
        do {
          core_skeleton_cpp_CDeformableModel_getBonePart_FUN_0059c2d0(pCVar9,iVar8);
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_464,"%s\t%s");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_1550.base_strlist,acStack_464);
          iVar8 = iVar8 + 1;
        } while (iVar8 < local_b4->bone_count);
      }
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                (&CStack_1550,"Part for bone info",-1,0);
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&CStack_1550,0,(uint)in_stack_ffffd01c,(uint)in_stack_ffffd020,
                 (uint)in_stack_ffffd024,(uint)in_stack_ffffd028,(uint)SUB84(dVar24,0));
    }
    in_stack_ffffd01c = (char *)0xf;
    iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0xf);
    if (iVar8 != 0) {
      in_stack_ffffd028 = (char *)0x5983ac;
      pCVar23 = g_CKeysPtr;
      iVar8 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
      dVar24 = (double)ZEXT48(pCVar23);
      if (iVar8 == 0) {
        local_3c = local_3c + 1;
      }
      else {
        local_3c = local_3c + -1;
        dVar24 = (double)ZEXT48(pCVar23);
      }
    }
    iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x17);
    dVar21 = (double)CONCAT44(SUB84(dVar24,0),in_stack_ffffd028);
    if (iVar8 != 0) {
      while( true ) {
        dVar24 = (double)((ulonglong)dVar21 >> 0x20);
        in_stack_ffffd028 = SUB84(dVar21,0);
        local_24 = 0;
        if (0 < DAT_03665f74.poly_count) {
          pCVar25 = &CStack_e00;
          shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(pCVar25);
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_464,"Model:\t%s");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_e00.base_strlist,acStack_464);
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_464,"Bone:\t%s");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_e00.base_strlist,acStack_464);
          in_stack_ffffd01c = acStack_464;
          crt_stdio_c_sprintf_FUN_005fdbd0(in_stack_ffffd01c,"Pos: %5.3f %5.3f %5.3f");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_e00.base_strlist,acStack_464);
          dVar24 = (double)local_194.x;
          in_stack_ffffd028 = "Orient: %5.3f %5.3f %5.3f";
          in_stack_ffffd024 = acStack_464;
          in_stack_ffffd020 = (CEditorTools *)0x5987d7;
          crt_stdio_c_sprintf_FUN_005fdbd0(in_stack_ffffd024,"Orient: %5.3f %5.3f %5.3f");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_e00.base_strlist,acStack_464);
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    (&CStack_e00.base_strlist,"Paste position/orientation from clipboard");
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    (&CStack_e00.base_strlist,"Copy position/orientation to clipboard");
          local_24 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                               (&CStack_e00,"Item tester",-1,0);
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (&CStack_e00,0,(uint)pCVar25,(uint)in_stack_ffffd05c,(uint)in_stack_ffffd060,
                     (uint)in_stack_ffffd064,(uint)in_stack_ffffd068);
        }
        if (local_24 < 0) break;
        if (local_24 == 0) {
          iVar8 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                            (g_CEditorToolsPtr,"Select model to position","models"
                             ,"*.kfm",false);
          if (iVar8 == 0) {
            if (DAT_03665f74.poly_count < 1) break;
          }
          else {
            core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0(&DAT_03665f74,acStack_400);
          }
        }
        if (local_24 == 1) {
          pCVar25 = &CStack_11a8;
          shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(pCVar25);
          iVar8 = 0;
          string_data = local_20;
          if (0 < local_b4->bone_count) {
            do {
              shape_edittool_cpp_CStrList_add_FUN_004a2b80
                        (&CStack_11a8.base_strlist,string_data->bone_name);
              iVar8 = iVar8 + 1;
              string_data = string_data + 1;
            } while (iVar8 < local_b4->bone_count);
          }
          iVar8 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                            (&CStack_11a8,"Select bone",-1,0);
          if (-1 < iVar8) {
            local_5c = iVar8;
          }
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    (&CStack_11a8,0,(uint)pCVar25,(uint)in_stack_ffffd05c,(uint)in_stack_ffffd060,
                     (uint)in_stack_ffffd064,(uint)in_stack_ffffd068);
        }
        if (local_24 == 2) {
          shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_004a0300
                    (g_CEditorToolsPtr,"Edit item pos",CStack_188.m + 1,true);
        }
        fVar22 = local_194.z;
        if (local_24 == 3) {
          local_1c = local_194.z;
          local_194.z = local_194.y;
          local_194.y = fVar22;
          shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_004a0300
                    (g_CEditorToolsPtr,"Edit item orient (P,B,H)",&local_194,true);
          fVar22 = local_194.z;
          local_18 = local_194.z;
          local_194.z = local_194.y;
          local_194.y = fVar22;
        }
        fVar22 = SUB84(dVar24,0);
        dVar21 = (double)CONCAT44(fVar22,in_stack_ffffd028);
        if (local_24 == 4) {
          iVar8 = 0;
          pcVar18 = shape_edittool_cpp_CEditorTools_getClipboardText_FUN_004a1b30(g_CEditorToolsPtr)
          ;
          cVar2 = *pcVar18;
          while (cVar2 != '\0') {
            local_14 = 0;
            crt_stdio_c_sscanf_FUN_0060013c(pcVar18,"%f%n");
            if (local_14 < 1) {
              pcVar18 = pcVar18 + 1;
            }
            else {
              iVar8 = iVar8 + 1;
              pcVar18 = pcVar18 + local_14;
            }
            if (5 < iVar8) break;
            cVar2 = *pcVar18;
          }
          if (iVar8 == 6) {
            dVar21 = (double)local_1c4;
            in_stack_ffffd024 = "Import these values:\nX: %g\nY: %g\nZ: %g\nP: %g\nB: %g\nH: %g\n";
            in_stack_ffffd01c = (char *)0x5985f0;
            in_stack_ffffd020 = g_CEditorToolsPtr;
            iVar8 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                              (g_CEditorToolsPtr,"Import these values:\nX: %g\nY: %g\nZ: %g\nP: %g\nB: %g\nH: %g\n");
            if (iVar8 != 0) {
              CStack_188.m[1].x = local_1c4;
              CStack_188.m[1].y = local_1c0;
              CStack_188.m[1].z = local_1bc;
              local_194.x = local_1b8;
              local_194.z = local_1b4;
              local_194.y = local_1b0;
            }
          }
          else {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Couldn't parse clipboard text.");
            dVar21 = (double)CONCAT44(fVar22,in_stack_ffffd028);
          }
        }
        if (local_24 == 5) {
          dVar24 = (double)CStack_188.m[1].x;
          pcVar18 = "CVector(%g,%g,%g), makePBH(%g,%g,%g)";
          in_stack_ffffd024 = acStack_464;
          in_stack_ffffd020 = (CEditorTools *)0x5986a2;
          crt_stdio_c_sprintf_FUN_005fdbd0(in_stack_ffffd024,"CVector(%g,%g,%g), makePBH(%g,%g,%g)");
          shape_edittool_cpp_CEditorTools_setClipboardText_FUN_004a1bc0
                    (g_CEditorToolsPtr,acStack_464);
          in_stack_ffffd060 = acStack_464;
          in_stack_ffffd05c = "Copied text to clipboard:\n\n%s";
          shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                    (g_CEditorToolsPtr,"Copied text to clipboard:\n\n%s");
          dVar21 = (double)CONCAT44(SUB84(dVar24,0),pcVar18);
        }
      }
    }
    iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x12);
    if (iVar8 != 0) {
      in_stack_ffffd068 = (char *)0x64;
      in_stack_ffffd064 = acStack_4c8;
      in_stack_ffffd060 = "Enter .S3D filename to save model";
      in_stack_ffffd05c = &g_CEditorToolsPtr->field0_0x0;
      iVar8 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                        (g_CEditorToolsPtr,"Enter .S3D filename to save model",in_stack_ffffd064,100
                         ,0);
      if (iVar8 != 0) {
        in_stack_ffffd068 = acStack_a58;
        in_stack_ffffd064 = acStack_c;
        in_stack_ffffd060 = acStack_4c8;
        in_stack_ffffd05c = (char *)0x5988b4;
        crt_string_c_splitpath_FUN_005ff178
                  (in_stack_ffffd060,in_stack_ffffd064,in_stack_ffffd068,acStack_958,acStack_758);
        if (acStack_758[0] == '\0') {
          in_stack_ffffd068 = acStack_c;
          in_stack_ffffd064 = acStack_4c8;
          in_stack_ffffd060 = (char *)0x5988e4;
          crt_file_c_makepath_FUN_005febfc
                    (in_stack_ffffd064,in_stack_ffffd068,acStack_a58,acStack_958,"s3d");
        }
        core_skeledit_cpp_CDeformableModelInstance_exportModelToS3D_FUN_00598ee0
                  (in_stack_0000000c,acStack_4c8);
      }
    }
    iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x13);
    if (iVar8 != 0) {
      iVar8 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
      if (iVar8 == 0) {
        if (local_80 < 0) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"No reference pose recorded.\n(Press Shift+R to record a refernece pose)");
        }
        else {
          local_80 = 1 - local_80;
        }
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510
                  (in_stack_0000000c,(SBoneTransformData *)&DAT_036644d8);
        local_80 = 1;
      }
    }
    iVar8 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x3b);
    if (iVar8 != 0) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("P",7,0xb);
      engine_2d_c_drawText_FUN_00401fd0("Pause/Unpause",0x69,0xb);
      engine_2d_c_drawText_FUN_00401fd0("G",7,0x16);
      engine_2d_c_drawText_FUN_00401fd0("Toggle ground plane",0x69,0x16);
      engine_2d_c_drawText_FUN_00401fd0("C",7,0x21);
      engine_2d_c_drawText_FUN_00401fd0("Toggle use canceled motion",0x69,0x21);
      engine_2d_c_drawText_FUN_00401fd0("O",7,0x2c);
      engine_2d_c_drawText_FUN_00401fd0("Move model back to the origin",0x69,0x2c);
      engine_2d_c_drawText_FUN_00401fd0("B",7,0x37);
      engine_2d_c_drawText_FUN_00401fd0("Toggle bones",0x69,0x37);
      engine_2d_c_drawText_FUN_00401fd0("D",7,0x42);
      engine_2d_c_drawText_FUN_00401fd0("Choose LOD",0x69,0x42);
      engine_2d_c_drawText_FUN_00401fd0("X",7,0x4d);
      engine_2d_c_drawText_FUN_00401fd0("Choose Texture set",0x69,0x4d);
      engine_2d_c_drawText_FUN_00401fd0("H",7,0x58);
      engine_2d_c_drawText_FUN_00401fd0("Toggle home pose",0x69,0x58);
      engine_2d_c_drawText_FUN_00401fd0("v",7,99);
      engine_2d_c_drawText_FUN_00401fd0("Toggle label vertices",0x69,99);
      engine_2d_c_drawText_FUN_00401fd0("1",7,0x6e);
      engine_2d_c_drawText_FUN_00401fd0("Toggle Axis (Hey, I ran out of keys!)",0x69,0x6e);
      engine_2d_c_drawText_FUN_00401fd0("CTRL-B",7,0x79);
      engine_2d_c_drawText_FUN_00401fd0("Begin/end interactive bias",0x69,0x79);
      engine_2d_c_drawText_FUN_00401fd0("SHIFT-B",7,0x84);
      engine_2d_c_drawText_FUN_00401fd0("Enter exact bias value",0x69,0x84);
      engine_2d_c_drawText_FUN_00401fd0("R",7,0x8f);
      engine_2d_c_drawText_FUN_00401fd0("Toggle reference pose",0x69,0x8f);
      engine_2d_c_drawText_FUN_00401fd0("SHIFT-R",7,0x9a);
      engine_2d_c_drawText_FUN_00401fd0("Record reference pose",0x69,0x9a);
      engine_2d_c_drawText_FUN_00401fd0("CTRL-S",7,0xa5);
      engine_2d_c_drawText_FUN_00401fd0("Scale model",0x69,0xa5);
      engine_2d_c_drawText_FUN_00401fd0("<",7,0xbb);
      engine_2d_c_drawText_FUN_00401fd0("Previous frame (in pause mode)",0x69,0xbb);
      engine_2d_c_drawText_FUN_00401fd0(">",7,0xc6);
      engine_2d_c_drawText_FUN_00401fd0("Next frame (in pause mode)",0x69,0xc6);
      engine_2d_c_drawText_FUN_00401fd0("F",7,0xd1);
      engine_2d_c_drawText_FUN_00401fd0("Go to a specific frame number",0x69,0xd1);
      engine_2d_c_drawText_FUN_00401fd0("HOME",7,0xdc);
      engine_2d_c_drawText_FUN_00401fd0("Go to the first frame of this motion",0x69,0xdc);
      engine_2d_c_drawText_FUN_00401fd0("SHIFT+<",7,0xf2);
      engine_2d_c_drawText_FUN_00401fd0("Previous motion",0x69,0xf2);
      engine_2d_c_drawText_FUN_00401fd0("SHIFT+>",7,0xfd);
      engine_2d_c_drawText_FUN_00401fd0("Next motion",0x69,0xfd);
      engine_2d_c_drawText_FUN_00401fd0("M",7,0x108);
      engine_2d_c_drawText_FUN_00401fd0("Select motion from list",0x69,0x108);
      engine_2d_c_drawText_FUN_00401fd0("TAB",7,0x11e);
      engine_2d_c_drawText_FUN_00401fd0("Next part",0x69,0x11e);
      engine_2d_c_drawText_FUN_00401fd0("SHIFT-TAB",7,0x129);
      engine_2d_c_drawText_FUN_00401fd0("Prev part",0x69,0x129);
      engine_2d_c_drawText_FUN_00401fd0("S",7,0x134);
      engine_2d_c_drawText_FUN_00401fd0("Cycle part mode",0x69,0x134);
      engine_2d_c_drawText_FUN_00401fd0("L",7,0x14a);
      engine_2d_c_drawText_FUN_00401fd0("Toggle loop mode",0x69,0x14a);
      engine_2d_c_drawText_FUN_00401fd0("T",7,0x155);
      engine_2d_c_drawText_FUN_00401fd0("Change loop back frame number (temp change only)",0x69,0x155);
      engine_2d_c_drawText_FUN_00401fd0("I",7,0x16b);
      engine_2d_c_drawText_FUN_00401fd0("Item tester (help place items in hands, etc)",0x69,0x16b);
      engine_2d_c_drawText_FUN_00401fd0("Z",7,0x176);
      engine_2d_c_drawText_FUN_00401fd0("Show some useful info",0x69,0x176);
      engine_2d_c_drawText_FUN_00401fd0("E",7,0x181);
      engine_2d_c_drawText_FUN_00401fd0("Export to S3D",0x69,0x181);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      engine_2d_c_clearInputAndWait_FUN_00403260();
      engine_keys_cpp_CKeys_getInputKey_FUN_00502460(g_CKeysPtr);
      engine_2d_c_clearInputAndWait_FUN_00403260();
    }
    (*g_CKeysPtr->vtable[1].isKeyDown)(g_CKeysPtr,(int)in_stack_ffffd1c4);
  } while( true );
  if (((local_38 != 0) || (local_8c != 0)) &&
     (iVar8 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                        (g_CEditorToolsPtr,"You biased/scaled the model.  Save model before exiting viewer?"), iVar8 != 0)) {
    pcVar18 = acStack_858;
    pcVar17 = local_b8->model_filename;
    do {
      cVar2 = *pcVar17;
      *pcVar18 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar17[1];
      pcVar17 = pcVar17 + 2;
      pcVar18[1] = cVar2;
      pcVar18 = pcVar18 + 2;
    } while (cVar2 != '\0');
    bVar7 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                      (g_CEditorToolsPtr,"Enter .DFM filename","models",0x64e099,
                       SUB41(acStack_858,0));
    if (CONCAT31(extraout_var_01,bVar7) != 0) {
      core_skeledit_cpp_CDeformableModel_save_FUN_0058f040
                (in_stack_ffffce2c,(char *)in_stack_ffffce30);
    }
  }
  g_CDemonSetPtr->lighting_quality_mode = 0;
  core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(&DAT_03665f74);
  return;
}


// Assembly code:
// 005968b0: PUSH 0x33f0
//   Label: core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0
// 005968b5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 005968ba: PUSH EBX
// 005968bb: PUSH ESI
// 005968bc: PUSH EDI
// 005968bd: PUSH EBP
// 005968be: MOV EBP,ESP
// 005968c0: SUB ESP,0x338c
// 005968c6: SUB EBP,0x7e
// 005968c9: CALL core_skeleton.cpp_freeAllSkeletons_FUN_005a1ea0
//   XREF to: 005a1ea0 (UNCONDITIONAL_CALL)
// 005968ce: CALL core_skeleton.cpp_freeAllModels_FUN_005a1dc0
//   XREF to: 005a1dc0 (UNCONDITIONAL_CALL)
// 005968d3: MOV EDX,dword ptr [EBP + 0x92]
// 005968d9: PUSH EDX
// 005968da: CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 005968df: ADD ESP,0x4
// 005968e2: MOV ECX,dword ptr [EBP + 0x92]
// 005968e8: PUSH ECX
// 005968e9: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 005968ee: ADD ESP,0x4
// 005968f1: PUSH EAX
// 005968f2: MOV dword ptr [EBP + -0x32],EAX
// 005968f5: CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810
//   XREF to: 0059a810 (UNCONDITIONAL_CALL)
// 005968fa: ADD ESP,0x4
// 005968fd: MOV EBX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 00596903: PUSH EBX
//   XREF to: 02d81a9c (DATA)
// 00596904: MOV dword ptr [EBP + -0x2e],EAX
// 00596907: CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
// 0059690c: ADD ESP,0x4
// 0059690f: LEA EAX,[EBP + 0xfffffd32]
// 00596915: MOV ESI,0x41700000
// 0059691a: PUSH EAX
// 0059691b: MOV EDI,0x40490fdb
// 00596920: MOV EBX,dword ptr [EBP + 0x92]
// 00596926: CALL core_stairs.cpp_CSpotView_FUN_005b95c0
//   XREF to: 005b95c0 (UNCONDITIONAL_CALL)
// 0059692b: MOV dword ptr [EBP + 0xfffffd32],ESI
// 00596931: MOV dword ptr [EBP + 0xfffffd3e],EDI
// 00596937: FLD float ptr [EBX + 0x2238]
// 0059693d: FADD float ptr [EBX + 0x2244]
// 00596943: FST float ptr [EBP + -0x66]
// 00596946: FLD float ptr [EBX + 0x223c]
// 0059694c: FADD float ptr [EBX + 0x2248]
// 00596952: FXCH
// 00596954: FLD float ptr [0x0064e0ba]
//   XREF to: 0064e0ba (READ)
// 0059695a: FXCH
// 0059695c: FMUL ST1
// 0059695e: FXCH ST2
// 00596960: FST float ptr [EBP + -0x62]
// 00596963: FLD float ptr [EBX + 0x2240]
// 00596969: FADD float ptr [EBX + 0x224c]
// 0059696f: FXCH
// 00596971: FMUL ST2
// 00596973: FXCH
// 00596975: FST float ptr [EBP + -0x5e]
// 00596978: FMUL ST2
// 0059697a: FXCH ST3
// 0059697c: FSTP float ptr [EBP + -0x5a]
// 0059697f: MOV EAX,dword ptr [EBP + -0x5a]
// 00596982: FSTP float ptr [EBP + -0x56]
// 00596985: MOV dword ptr [EBP + 0xfffffd42],EAX
// 0059698b: FXCH
// 0059698d: FSTP float ptr [EBP + -0x52]
// 00596990: FLD float ptr [EBX + 0x2238]
// 00596996: FADD float ptr [EBX + 0x2244]
// 0059699c: FST float ptr [EBP + 0xfffffeda]
// 005969a2: FLD float ptr [EBX + 0x223c]
// 005969a8: FADD float ptr [EBX + 0x2248]
// 005969ae: FXCH
// 005969b0: FMUL ST2
// 005969b2: FXCH
// 005969b4: FST float ptr [EBP + 0xfffffede]
// 005969ba: FMUL ST2
// 005969bc: FLD float ptr [EBX + 0x2240]
// 005969c2: FADD float ptr [EBX + 0x224c]
// 005969c8: ADD ESP,0x4
// 005969cb: FST float ptr [EBP + 0xfffffee2]
// 005969d1: FMULP ST3
// 005969d3: PUSH 0x1f
// 005969d5: MOV EDI,0xffffffff
// 005969da: FSTP float ptr [EBP + 0xffffff32]
// 005969e0: MOV EAX,dword ptr [EBP + 0xffffff32]
// 005969e6: MOV dword ptr [EBP + 0x6],EDI
// 005969e9: MOV dword ptr [EBP + 0xfffffd46],EAX
// 005969ef: LEA EAX,[EBP + 0xfffffd32]
// 005969f5: FSTP float ptr [EBP + 0xffffff2e]
// 005969fb: PUSH EAX
// 005969fc: FSTP float ptr [EBP + 0xffffff36]
// 00596a02: CALL core_stairs.cpp_FUN_005b9620
//   XREF to: 005b9620 (UNCONDITIONAL_CALL)
// 00596a07: MOV EDX,0x1
// 00596a0c: ADD ESP,0x8
// 00596a0f: XOR EAX,EAX
// 00596a11: MOV dword ptr [EBP + -0x22],EDI
// 00596a14: MOV dword ptr [EBP + -0x2a],EAX
// 00596a17: MOV dword ptr [EBP + 0x46],EAX
// 00596a1a: MOV dword ptr [EBP + 0x4a],EAX
// 00596a1d: MOV dword ptr [EBP + -0x26],EAX
// 00596a20: MOV dword ptr [EBP + -0x1e],EAX
// 00596a23: MOV dword ptr [EBP + -0x1a],EAX
// 00596a26: MOV dword ptr [EBP + -0x16],EAX
// 00596a29: MOV dword ptr [EBP + -0x12],EAX
// 00596a2c: MOV dword ptr [EBP + -0xe],EAX
// 00596a2f: MOV dword ptr [EBP + -0xa],EAX
// 00596a32: MOV dword ptr [EBP + 0x4e],EAX
// 00596a35: MOV dword ptr [EBP + -0x6],EAX
// 00596a38: MOV dword ptr [EBP + 0xa],EAX
// 00596a3b: MOV AH,byte ptr [0x0366b64c]
//   XREF to: 0366b64c (READ)
// 00596a41: MOV dword ptr [EBP + 0x42],EDX
// 00596a44: TEST AH,0x1
// 00596a47: JNZ 0x00596a54
//   XREF to: 00596a54 (CONDITIONAL_JUMP)
// 00596a49: MOV DL,AH
// 00596a4b: OR DL,0x1
// 00596a4e: MOV byte ptr [0x0366b64c],DL
//   XREF to: 0366b64c (WRITE)
// 00596a54: PUSH 0x0
//   Label: LAB_00596a54
// 00596a56: PUSH 0x64d8ea
//   XREF to: 0064d8ea (DATA)
// 00596a5b: MOV ESI,dword ptr [EBP + -0x2e]
// 00596a5e: PUSH ESI
// 00596a5f: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00596a64: ADD ESP,0xc
// 00596a67: MOV dword ptr [EBP + 0x2a],EAX
// 00596a6a: TEST EAX,EAX
// 00596a6c: JL 0x00596cb9
//   XREF to: 00596cb9 (CONDITIONAL_JUMP)
// 00596a72: LEA EAX,[EBP + 0xfffffe8e]
//   Label: LAB_00596a72
// 00596a78: PUSH EAX
// 00596a79: CALL core_slew.cpp_CSlew_init_FUN_005a2060
//   XREF to: 005a2060 (UNCONDITIONAL_CALL)
// 00596a7e: MOV DH,byte ptr [0x0366b64c]
//   XREF to: 0366b64c (READ)
// 00596a84: ADD ESP,0x4
// 00596a87: TEST DH,0x2
// 00596a8a: JZ 0x00596cc3
//   XREF to: 00596cc3 (CONDITIONAL_JUMP)
// 00596a90: PUSH 0x3665f74
//   Label: LAB_00596a90
//   XREF to: 03665f74 (DATA)
// 00596a95: CALL core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
//   XREF to: 00477690 (UNCONDITIONAL_CALL)
// 00596a9a: MOV EAX,[0x03f87558]
//   XREF to: 03f87558 (READ)
// 00596a9f: MOV dword ptr [EBP + 0xffffff0a],EAX
// 00596aa5: MOV EAX,[0x03f8755c]
//   XREF to: 03f8755c (READ)
// 00596aaa: MOV dword ptr [EBP + 0xffffff0e],EAX
// 00596ab0: MOV EAX,[0x03f87560]
//   XREF to: 03f87560 (READ)
// 00596ab5: MOV dword ptr [EBP + 0xffffff12],EAX
// 00596abb: MOV EAX,dword ptr [EBP + 0xffffff0a]
// 00596ac1: MOV dword ptr [EBP + 0xfffffef2],EAX
// 00596ac7: MOV EAX,dword ptr [EBP + 0xffffff0e]
// 00596acd: MOV dword ptr [EBP + 0xfffffef6],EAX
// 00596ad3: MOV EAX,dword ptr [EBP + 0xffffff12]
// 00596ad9: ADD ESP,0x4
// 00596adc: MOV dword ptr [EBP + 0xfffffefa],EAX
// 00596ae2: MOV EAX,dword ptr [EBP + 0x92]
// 00596ae8: PUSH EAX
// 00596ae9: CALL core_motion.cpp_CMotionController_reset_FUN_0052dad0
//   XREF to: 0052dad0 (UNCONDITIONAL_CALL)
// 00596aee: XOR EDX,EDX
// 00596af0: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 00596af5: MOV dword ptr [EBP + -0x72],EDX
// 00596af8: MOV dword ptr [EBP + -0x6e],EDX
// 00596afb: MOV dword ptr [EBP + -0x6a],EDX
// 00596afe: MOV dword ptr [EAX + 0x15ac80],0x1
//   XREF to: 0326eef8 (WRITE)
// 00596b08: MOV EAX,dword ptr [EBP + -0x2e]
// 00596b0b: ADD EAX,0x2855c
// 00596b10: MOV dword ptr [EBP + 0x66],EAX
// 00596b13: MOV EAX,dword ptr [EBP + -0x32]
// 00596b16: ADD EAX,0x7144
// 00596b1b: MOV dword ptr [EBP + 0x5a],EAX
// 00596b1e: MOV EAX,dword ptr [EBP + 0x66]
// 00596b21: MOV dword ptr [EBP + 0x5e],EAX
// 00596b24: MOV EAX,dword ptr [EBP + -0x32]
// 00596b27: ADD EAX,0x7c90
// 00596b2c: MOV dword ptr [EBP + 0x32],EAX
// 00596b2f: MOV EAX,dword ptr [EBP + 0x92]
// 00596b35: ADD EAX,0x58
// 00596b38: MOV dword ptr [EBP + 0x36],EAX
// 00596b3b: MOV EAX,dword ptr [EBP + 0x92]
// 00596b41: ADD EAX,0x8
// 00596b44: MOV dword ptr [EBP + -0x36],EAX
// 00596b47: MOV EAX,dword ptr [EBP + 0x92]
// 00596b4d: ADD EAX,0xe80
// 00596b52: MOV dword ptr [EBP + 0x3a],EAX
// 00596b55: MOV EAX,dword ptr [EBP + 0x92]
// 00596b5b: ADD EAX,0x2238
// 00596b60: MOV dword ptr [EBP + 0x2e],EAX
// 00596b63: MOV EAX,dword ptr [EBP + 0x92]
// 00596b69: ADD EAX,0x2254
// 00596b6e: ADD ESP,0x4
// 00596b71: MOV dword ptr [EBP + 0x22],EAX
// 00596b74: PUSH 0xf8
//   Label: LAB_00596b74
// 00596b79: MOV EDI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00596b7f: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00596b84: PUSH EDI
// 00596b85: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 00596b8b: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00596b90: PUSH EAX
// 00596b91: XOR ESI,ESI
// 00596b93: PUSH ESI
// 00596b94: PUSH ESI
// 00596b95: FSTP float ptr [EBP + -0x2]
// 00596b98: MOV dword ptr [0x030e56b8],ESI
//   XREF to: 030e56b8 (WRITE)
// 00596b9e: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 00596ba3: ADD ESP,0x14
// 00596ba6: CALL wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
//   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)
// 00596bab: LEA EAX,[EBP + 0xfffffd32]
// 00596bb1: PUSH EAX
// 00596bb2: CALL core_stairs.cpp_FUN_005b9a20
//   XREF to: 005b9a20 (UNCONDITIONAL_CALL)
// 00596bb7: ADD ESP,0x4
// 00596bba: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00596bbf: PUSH 0x1d
// 00596bc1: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00596bc3: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00596bc4: CALL dword ptr [EDX]
// 00596bc6: ADD ESP,0x8
// 00596bc9: TEST EAX,EAX
// 00596bcb: JZ 0x00596ced
//   XREF to: 00596ced (CONDITIONAL_JUMP)
// 00596bd1: MOV EAX,dword ptr [EBP + 0x22]
//   Label: LAB_00596bd1
// 00596bd4: MOV dword ptr [EAX + 0x8],0x0
// 00596bdb: PUSH 0x38
// 00596bdd: MOV EDX,dword ptr [EAX + 0x8]
// 00596be0: MOV dword ptr [EAX + 0x4],EDX
// 00596be3: MOV EDX,dword ptr [EAX + 0x4]
// 00596be6: MOV dword ptr [EAX],EDX
// 00596be8: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00596bed: MOV EBX,0x3f800000
// 00596bf2: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00596bf3: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00596bf5: MOV dword ptr [EBP + 0x2],EBX
// 00596bf8: CALL dword ptr [EDX]
// 00596bfa: ADD ESP,0x8
// 00596bfd: TEST EAX,EAX
// 00596bff: JZ 0x00596c08
//   XREF to: 00596c08 (CONDITIONAL_JUMP)
// 00596c01: MOV dword ptr [EBP + 0x2],0x3eaaaaab
// 00596c08: CMP dword ptr [EBP + -0x1a],0x0
//   Label: LAB_00596c08
// 00596c0c: JZ 0x00596df7
//   XREF to: 00596df7 (CONDITIONAL_JUMP)
// 00596c12: MOV ESI,dword ptr [EBP + 0x92]
//   Label: LAB_00596c12
// 00596c18: PUSH ESI
// 00596c19: MOV EDI,dword ptr [EBP + 0x4a]
// 00596c1c: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 00596c21: MOV EAX,dword ptr [EAX + 0x7140]
// 00596c27: ADD ESP,0x4
// 00596c2a: CMP EAX,EDI
// 00596c2c: JG 0x00597137
//   XREF to: 00597137 (CONDITIONAL_JUMP)
// 00596c32: XOR ECX,ECX
// 00596c34: MOV dword ptr [EBP + 0x4a],ECX
// 00596c37: LEA EAX,[EBP + -0x72]
//   Label: LAB_00596c37
// 00596c3a: PUSH EAX
// 00596c3b: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
//   XREF to: 02c6d578 (PARAM)
// 00596c41: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00596c42: XOR ESI,ESI
// 00596c44: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 00596c49: MOV EDX,dword ptr [EBP + -0x1a]
// 00596c4c: ADD ESP,0x8
// 00596c4f: MOV dword ptr [EBP + -0x42],ESI
// 00596c52: MOV dword ptr [EBP + -0x3e],ESI
// 00596c55: MOV dword ptr [EBP + -0x3a],ESI
// 00596c58: TEST EDX,EDX
// 00596c5a: JZ 0x00597157
//   XREF to: 00597157 (CONDITIONAL_JUMP)
// 00596c60: MOV EBX,dword ptr [EBP + 0x92]
// 00596c66: PUSH EBX
// 00596c67: CALL core_skeleton.cpp_CDeformableModelInstance_resetToRestPose_FUN_0059df80
//   XREF to: 0059df80 (UNCONDITIONAL_CALL)
// 00596c6c: ADD ESP,0x4
// 00596c6f: PUSH EBX
// 00596c70: CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
//   XREF to: 0059fb40 (UNCONDITIONAL_CALL)
// 00596c75: ADD ESP,0x4
//   Label: LAB_00596c75
// 00596c78: MOV EDI,dword ptr [EBP + -0x26]
// 00596c7b: CMP EDI,0x1
// 00596c7e: JNZ 0x00597231
//   XREF to: 00597231 (CONDITIONAL_JUMP)
// 00596c84: MOV EBX,dword ptr [EBP + 0x92]
// 00596c8a: MOV EDI,dword ptr [EBP + 0x92]
// 00596c90: XOR ESI,ESI
// 00596c92: PUSH EDI
//   Label: LAB_00596c92
// 00596c93: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 00596c98: MOV EAX,dword ptr [EAX + 0x7140]
// 00596c9e: ADD ESP,0x4
// 00596ca1: CMP ESI,EAX
// 00596ca3: JGE 0x00597168
//   XREF to: 00597168 (CONDITIONAL_JUMP)
// 00596ca9: ADD EBX,0x4
// 00596cac: INC ESI
// 00596cad: MOV dword ptr [EBX + 0x213c],0x0
// 00596cb7: JMP 0x00596c92
//   XREF to: 00596c92 (UNCONDITIONAL_JUMP)
// 00596cb9: XOR EDI,EDI
//   Label: LAB_00596cb9
// 00596cbb: MOV dword ptr [EBP + 0x2a],EDI
// 00596cbe: JMP 0x00596a72
//   XREF to: 00596a72 (UNCONDITIONAL_JUMP)
// 00596cc3: MOV BL,DH
//   Label: LAB_00596cc3
// 00596cc5: OR BL,0x2
// 00596cc8: PUSH 0x3665f74
//   XREF to: 03665f74 (DATA)
// 00596ccd: MOV byte ptr [0x0366b64c],BL
//   XREF to: 0366b64c (WRITE)
// 00596cd3: CALL core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0
//   XREF to: 00476cf0 (UNCONDITIONAL_CALL)
// 00596cd8: ADD ESP,0x4
// 00596cdb: PUSH 0x681850
//   XREF to: 00681850 (DATA)
// 00596ce0: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 00596ce5: ADD ESP,0x4
// 00596ce8: JMP 0x00596a90
//   XREF to: 00596a90 (UNCONDITIONAL_JUMP)
// 00596ced: PUSH 0x2a
//   Label: LAB_00596ced
// 00596cef: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00596cf4: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00596cf5: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00596cf7: CALL dword ptr [EDX]
// 00596cf9: ADD ESP,0x8
// 00596cfc: TEST EAX,EAX
// 00596cfe: JZ 0x00596d9b
//   XREF to: 00596d9b (CONDITIONAL_JUMP)
// 00596d04: PUSH 0x34
// 00596d06: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00596d0b: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00596d0c: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00596d0e: CALL dword ptr [EDX + 0x4]
// 00596d11: ADD ESP,0x8
// 00596d14: TEST EAX,EAX
// 00596d16: JZ 0x00596d21
//   XREF to: 00596d21 (CONDITIONAL_JUMP)
// 00596d18: MOV EAX,dword ptr [EBP + 0x92]
// 00596d1e: INC dword ptr [EAX + 0x4]
// 00596d21: PUSH 0x33
//   Label: LAB_00596d21
// 00596d23: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00596d28: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00596d29: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00596d2b: CALL dword ptr [EDX + 0x4]
// 00596d2e: ADD ESP,0x8
// 00596d31: TEST EAX,EAX
// 00596d33: JZ 0x00596d3e
//   XREF to: 00596d3e (CONDITIONAL_JUMP)
// 00596d35: MOV EAX,dword ptr [EBP + 0x92]
// 00596d3b: DEC dword ptr [EAX + 0x4]
// 00596d3e: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_00596d3e
// 00596d44: CMP dword ptr [EAX + 0x4],0x0
// 00596d48: JL 0x00596d82
//   XREF to: 00596d82 (CONDITIONAL_JUMP)
// 00596d4a: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_00596d4a
// 00596d50: PUSH EAX
// 00596d51: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 00596d56: MOV EDX,dword ptr [EBP + 0x92]
// 00596d5c: MOV ECX,dword ptr [EAX + 0x964]
// 00596d62: MOV EDX,dword ptr [EDX + 0x4]
// 00596d65: ADD ESP,0x4
// 00596d68: CMP EDX,ECX
// 00596d6a: JL 0x00596bd1
//   XREF to: 00596bd1 (CONDITIONAL_JUMP)
// 00596d70: MOV EAX,dword ptr [EBP + 0x92]
// 00596d76: MOV dword ptr [EAX + 0x4],0x0
// 00596d7d: JMP 0x00596bd1
//   XREF to: 00596bd1 (UNCONDITIONAL_JUMP)
// 00596d82: PUSH EAX
//   Label: LAB_00596d82
// 00596d83: MOV EDI,EAX
// 00596d85: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 00596d8a: MOV EAX,dword ptr [EAX + 0x964]
// 00596d90: MOV EDX,EDI
// 00596d92: DEC EAX
// 00596d93: ADD ESP,0x4
// 00596d96: MOV dword ptr [EDX + 0x4],EAX
// 00596d99: JMP 0x00596d4a
//   XREF to: 00596d4a (UNCONDITIONAL_JUMP)
// 00596d9b: PUSH 0x47
//   Label: LAB_00596d9b
// 00596d9d: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00596da2: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00596da3: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00596da5: CALL dword ptr [EDX + 0x4]
// 00596da8: ADD ESP,0x8
// 00596dab: TEST EAX,EAX
// 00596dad: JZ 0x00596db8
//   XREF to: 00596db8 (CONDITIONAL_JUMP)
// 00596daf: MOV EAX,dword ptr [EBP + 0x92]
// 00596db5: MOV dword ptr [EAX + 0x8],ESI
// 00596db8: PUSH 0x4f
//   Label: LAB_00596db8
// 00596dba: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00596dbf: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00596dc0: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00596dc2: CALL dword ptr [EDX + 0x4]
// 00596dc5: ADD ESP,0x8
// 00596dc8: TEST EAX,EAX
// 00596dca: JZ 0x00596bd1
//   XREF to: 00596bd1 (CONDITIONAL_JUMP)
// 00596dd0: MOV EDX,dword ptr [EBP + 0x92]
// 00596dd6: PUSH EDX
// 00596dd7: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00596ddc: MOV EAX,dword ptr [EAX + 0x64]
// 00596ddf: DEC EAX
// 00596de0: ADD ESP,0x4
// 00596de3: MOV dword ptr [EBP + 0x76],EAX
// 00596de6: MOV EAX,dword ptr [EBP + 0x92]
// 00596dec: FILD dword ptr [EBP + 0x76]
// 00596def: FSTP float ptr [EAX + 0x8]
// 00596df2: JMP 0x00596bd1
//   XREF to: 00596bd1 (UNCONDITIONAL_JUMP)
// 00596df7: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_00596df7
// 00596dfd: PUSH EAX
// 00596dfe: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00596e03: MOV EBX,dword ptr [EAX + 0x60]
// 00596e06: MOV EAX,dword ptr [EBP + 0x92]
// 00596e0c: ADD ESP,0x4
// 00596e0f: MOV EDX,dword ptr [EBP + 0x92]
// 00596e15: MOV EAX,dword ptr [EAX + 0x8]
// 00596e18: PUSH EDX
// 00596e19: MOV dword ptr [EBP + 0xe],EAX
// 00596e1c: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00596e21: FILD dword ptr [EAX + 0x64]
// 00596e24: MOV ECX,dword ptr [EBP + -0x12]
// 00596e27: ADD ESP,0x4
// 00596e2a: FSTP float ptr [EBP + 0x12]
// 00596e2d: TEST ECX,ECX
// 00596e2f: JZ 0x00596ffa
//   XREF to: 00596ffa (CONDITIONAL_JUMP)
// 00596e35: PUSH 0x34
// 00596e37: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00596e3c: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00596e3d: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00596e3f: CALL dword ptr [EDX + 0x4]
// 00596e42: ADD ESP,0x8
// 00596e45: TEST EAX,EAX
// 00596e47: JZ 0x00596eb0
//   XREF to: 00596eb0 (CONDITIONAL_JUMP)
// 00596e49: MOV EAX,dword ptr [EBP + 0x92]
// 00596e4f: FLD float ptr [EAX + 0x8]
// 00596e52: FADD float ptr [EBP + 0x2]
// 00596e55: FSTP float ptr [EAX + 0x8]
// 00596e58: MOV EAX,dword ptr [EBP + 0x12]
// 00596e5b: MOV dword ptr [EBP + 0x16],EAX
// 00596e5e: MOV EAX,dword ptr [EBP + 0x92]
// 00596e64: FLD float ptr [EAX + 0x8]
// 00596e67: FCOMP float ptr [EBP + 0x12]
// 00596e6a: FNSTSW AX
// 00596e6c: SAHF
// 00596e6d: JNC 0x00596e7b
//   XREF to: 00596e7b (CONDITIONAL_JUMP)
// 00596e6f: MOV EAX,dword ptr [EBP + 0x92]
// 00596e75: MOV EAX,dword ptr [EAX + 0x8]
// 00596e78: MOV dword ptr [EBP + 0x16],EAX
// 00596e7b: PUSH 0x3f800000
//   Label: LAB_00596e7b
// 00596e80: MOV EAX,dword ptr [EBP + 0x92]
// 00596e86: MOV dword ptr [EBP + 0x76],EBX
// 00596e89: SUB ESP,0x4
// 00596e8c: FILD dword ptr [EBP + 0x76]
// 00596e8f: FLD ST0
// 00596e91: FADD float ptr [EBP + 0x16]
// 00596e94: MOV EAX,dword ptr [EAX + 0x50]
// 00596e97: FSTP float ptr [ESP]
// 00596e9a: FADD float ptr [EBP + 0xe]
// 00596e9d: SUB ESP,0x4
// 00596ea0: MOV EDI,dword ptr [EBP + 0x92]
// 00596ea6: FSTP float ptr [ESP]
// 00596ea9: PUSH EDI
// 00596eaa: CALL dword ptr [EAX + 0x8]
// 00596ead: ADD ESP,0x10
// 00596eb0: PUSH 0x33
//   Label: LAB_00596eb0
// 00596eb2: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00596eb7: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00596eb8: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00596eba: CALL dword ptr [EDX + 0x4]
// 00596ebd: ADD ESP,0x8
// 00596ec0: TEST EAX,EAX
// 00596ec2: JNZ 0x00596ef4
//   XREF to: 00596ef4 (CONDITIONAL_JUMP)
// 00596ec4: MOV EBX,dword ptr [EBP + 0x92]
//   Label: LAB_00596ec4
// 00596eca: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_00596eca
// 00596ed0: FLD float ptr [EAX + 0x8]
// 00596ed3: FLDZ
// 00596ed5: FCOMPP
// 00596ed7: FNSTSW AX
// 00596ed9: SAHF
// 00596eda: JBE 0x005970d2
//   XREF to: 005970d2 (CONDITIONAL_JUMP)
// 00596ee0: PUSH EBX
// 00596ee1: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00596ee6: FILD dword ptr [EAX + 0x64]
// 00596ee9: FADD float ptr [EBX + 0x8]
// 00596eec: ADD ESP,0x4
// 00596eef: FSTP float ptr [EBX + 0x8]
// 00596ef2: JMP 0x00596eca
//   XREF to: 00596eca (UNCONDITIONAL_JUMP)
// 00596ef4: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_00596ef4
// 00596efa: FLD float ptr [EAX + 0x8]
// 00596efd: FSUB float ptr [EBP + 0x2]
// 00596f00: FSTP float ptr [EAX + 0x8]
// 00596f03: XOR EAX,EAX
// 00596f05: MOV dword ptr [EBP + 0x1a],EAX
// 00596f08: MOV EAX,dword ptr [EBP + 0x92]
// 00596f0e: FLDZ
// 00596f10: FCOMP float ptr [EAX + 0x8]
// 00596f13: FNSTSW AX
// 00596f15: SAHF
// 00596f16: JNC 0x00596f24
//   XREF to: 00596f24 (CONDITIONAL_JUMP)
// 00596f18: MOV EAX,dword ptr [EBP + 0x92]
// 00596f1e: MOV EAX,dword ptr [EAX + 0x8]
// 00596f21: MOV dword ptr [EBP + 0x1a],EAX
// 00596f24: PUSH 0x3f800000
//   Label: LAB_00596f24
// 00596f29: MOV EAX,dword ptr [EBP + 0x92]
// 00596f2f: MOV dword ptr [EBP + 0x76],EBX
// 00596f32: SUB ESP,0x4
// 00596f35: FILD dword ptr [EBP + 0x76]
// 00596f38: FSTP float ptr [EBP + 0x1e]
// 00596f3b: MOV EAX,dword ptr [EAX + 0x50]
// 00596f3e: FLD float ptr [EBP + 0x1e]
// 00596f41: FADD float ptr [EBP + 0xe]
// 00596f44: FLD float ptr [EBP + 0x1e]
// 00596f47: FXCH
// 00596f49: FSTP float ptr [ESP]
// 00596f4c: FADD float ptr [EBP + 0x1a]
// 00596f4f: SUB ESP,0x4
// 00596f52: MOV EDX,dword ptr [EBP + 0x92]
// 00596f58: FSTP float ptr [ESP]
// 00596f5b: PUSH EDX
// 00596f5c: CALL dword ptr [EAX + 0x8]
// 00596f5f: MOV EAX,dword ptr [EBP + 0x92]
// 00596f65: ADD ESP,0x10
// 00596f68: FLD float ptr [EAX + 0x8]
// 00596f6b: FLDZ
// 00596f6d: FCOMPP
// 00596f6f: FNSTSW AX
// 00596f71: SAHF
// 00596f72: JBE 0x00596fa7
//   XREF to: 00596fa7 (CONDITIONAL_JUMP)
// 00596f74: PUSH 0x3f800000
// 00596f79: FLD float ptr [EBP + 0x1e]
// 00596f7c: MOV EAX,dword ptr [EBP + 0x92]
// 00596f82: FADD float ptr [EBP + 0x12]
// 00596f85: MOV EDX,dword ptr [EBP + 0x92]
// 00596f8b: FSTP float ptr [EBP + 0x76]
// 00596f8e: PUSH dword ptr [EBP + 0x76]
// 00596f91: FLD float ptr [EBP + 0x76]
// 00596f94: SUB ESP,0x4
// 00596f97: FADD float ptr [EDX + 0x8]
// 00596f9a: MOV EAX,dword ptr [EAX + 0x50]
// 00596f9d: FSTP float ptr [ESP]
// 00596fa0: PUSH EDX
// 00596fa1: CALL dword ptr [EAX + 0x8]
// 00596fa4: ADD ESP,0x10
// 00596fa7: MOV EAX,dword ptr [EBP + 0x22]
//   Label: LAB_00596fa7
// 00596faa: MOV EBX,dword ptr [EBP + 0x22]
// 00596fad: FLD float ptr [EAX]
// 00596faf: FCHS
// 00596fb1: FSTP float ptr [EBP + 0xffffff16]
// 00596fb7: FLD float ptr [EAX + 0x4]
// 00596fba: FCHS
// 00596fbc: FSTP float ptr [EBP + 0xffffff1a]
// 00596fc2: FLD float ptr [EAX + 0x8]
// 00596fc5: FCHS
// 00596fc7: LEA EAX,[EBP + 0xffffff16]
// 00596fcd: FSTP float ptr [EBP + 0xffffff1e]
// 00596fd3: CMP EAX,EBX
// 00596fd5: JZ 0x00596ec4
//   XREF to: 00596ec4 (CONDITIONAL_JUMP)
// 00596fdb: MOV EAX,dword ptr [EBP + 0xffffff16]
// 00596fe1: MOV dword ptr [EBX],EAX
// 00596fe3: MOV EAX,dword ptr [EBP + 0xffffff1a]
// 00596fe9: MOV dword ptr [EBX + 0x4],EAX
// 00596fec: MOV EAX,dword ptr [EBP + 0xffffff1e]
// 00596ff2: MOV dword ptr [EBX + 0x8],EAX
// 00596ff5: JMP 0x00596ec4
//   XREF to: 00596ec4 (UNCONDITIONAL_JUMP)
// 00596ffa: MOV ESI,dword ptr [EBP + 0x92]
//   Label: LAB_00596ffa
// 00597000: PUSH ESI
// 00597001: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00597006: FLD float ptr [EBP + -0x2]
// 00597009: FMUL float ptr [EAX + 0x20]
// 0059700c: FMUL float ptr [EBP + 0x2]
// 0059700f: FADD float ptr [ESI + 0x8]
// 00597012: ADD ESP,0x4
// 00597015: FST float ptr [ESI + 0x8]
// 00597018: FCOMP float ptr [EBP + 0x12]
// 0059701b: FNSTSW AX
// 0059701d: SAHF
// 0059701e: JBE 0x00597087
//   XREF to: 00597087 (CONDITIONAL_JUMP)
// 00597020: PUSH 0x3f800000
//   Label: LAB_00597020
// 00597025: MOV EAX,dword ptr [EBP + 0x92]
// 0059702b: MOV dword ptr [EBP + 0x76],EBX
// 0059702e: SUB ESP,0x4
// 00597031: FILD dword ptr [EBP + 0x76]
// 00597034: FLD ST0
// 00597036: FADD float ptr [EBP + 0x12]
// 00597039: MOV EAX,dword ptr [EAX + 0x50]
// 0059703c: FSTP float ptr [ESP]
// 0059703f: FADD float ptr [EBP + 0xe]
// 00597042: SUB ESP,0x4
// 00597045: MOV EDX,dword ptr [EBP + 0x92]
// 0059704b: FSTP float ptr [ESP]
// 0059704e: PUSH EDX
// 0059704f: CALL dword ptr [EAX + 0x8]
// 00597052: MOV ECX,dword ptr [EBP + -0x2a]
// 00597055: ADD ESP,0x10
// 00597058: TEST ECX,ECX
// 0059705a: JZ 0x005970c1
//   XREF to: 005970c1 (CONDITIONAL_JUMP)
// 0059705c: MOV ESI,dword ptr [EBP + 0x92]
// 00597062: PUSH ESI
// 00597063: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00597068: FLD float ptr [EAX + 0x38]
// 0059706b: ADD ESP,0x4
// 0059706e: FSTP float ptr [ESI + 0x8]
// 00597071: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_00597071
// 00597077: XOR ESI,ESI
// 00597079: FLD float ptr [EAX + 0x8]
// 0059707c: MOV dword ptr [EBP + 0xe],ESI
// 0059707f: FCOMP float ptr [EBP + 0x12]
// 00597082: FNSTSW AX
// 00597084: SAHF
// 00597085: JA 0x00597020
//   XREF to: 00597020 (CONDITIONAL_JUMP)
// 00597087: PUSH 0x3f800000
//   Label: LAB_00597087
// 0059708c: MOV EAX,dword ptr [EBP + 0x92]
// 00597092: MOV EDX,dword ptr [EBP + 0x92]
// 00597098: MOV dword ptr [EBP + 0x76],EBX
// 0059709b: SUB ESP,0x4
// 0059709e: FILD dword ptr [EBP + 0x76]
// 005970a1: FLD ST0
// 005970a3: FADD float ptr [EDX + 0x8]
// 005970a6: MOV EAX,dword ptr [EAX + 0x50]
// 005970a9: FSTP float ptr [ESP]
// 005970ac: FADD float ptr [EBP + 0xe]
// 005970af: SUB ESP,0x4
// 005970b2: FSTP float ptr [ESP]
// 005970b5: PUSH EDX
// 005970b6: CALL dword ptr [EAX + 0x8]
// 005970b9: ADD ESP,0x10
// 005970bc: JMP 0x00596ec4
//   XREF to: 00596ec4 (UNCONDITIONAL_JUMP)
// 005970c1: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_005970c1
// 005970c7: FLD float ptr [EAX + 0x8]
// 005970ca: FSUB float ptr [EBP + 0x12]
// 005970cd: FSTP float ptr [EAX + 0x8]
// 005970d0: JMP 0x00597071
//   XREF to: 00597071 (UNCONDITIONAL_JUMP)
// 005970d2: MOV EDI,dword ptr [EBP + 0x92]
//   Label: LAB_005970d2
// 005970d8: PUSH EDI
// 005970d9: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005970de: FILD dword ptr [EAX + 0x64]
// 005970e1: ADD ESP,0x4
// 005970e4: FCOMP float ptr [EDI + 0x8]
// 005970e7: FNSTSW AX
// 005970e9: SAHF
// 005970ea: JA 0x00597102
//   XREF to: 00597102 (CONDITIONAL_JUMP)
// 005970ec: MOV EAX,dword ptr [EBP + -0x2a]
// 005970ef: TEST EAX,EAX
// 005970f1: JZ 0x00597132
//   XREF to: 00597132 (CONDITIONAL_JUMP)
// 005970f3: PUSH EDI
// 005970f4: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005970f9: FLD float ptr [EAX + 0x38]
// 005970fc: ADD ESP,0x4
// 005970ff: FSTP float ptr [EDI + 0x8]
// 00597102: CMP dword ptr [EBP + 0x46],0x0
//   Label: LAB_00597102
// 00597106: JZ 0x00596c12
//   XREF to: 00596c12 (CONDITIONAL_JUMP)
// 0059710c: MOV EAX,dword ptr [EBP + 0x22]
// 0059710f: FLD float ptr [EBP + -0x72]
// 00597112: FADD float ptr [EAX]
// 00597114: FLD float ptr [EBP + -0x6e]
// 00597117: FXCH
// 00597119: FSTP float ptr [EBP + -0x72]
// 0059711c: FADD float ptr [EAX + 0x4]
// 0059711f: FLD float ptr [EBP + -0x6a]
// 00597122: FXCH
// 00597124: FSTP float ptr [EBP + -0x6e]
// 00597127: FADD float ptr [EAX + 0x8]
// 0059712a: FSTP float ptr [EBP + -0x6a]
// 0059712d: JMP 0x00596c12
//   XREF to: 00596c12 (UNCONDITIONAL_JUMP)
// 00597132: MOV dword ptr [EDI + 0x8],EAX
//   Label: LAB_00597132
// 00597135: JMP 0x00597102
//   XREF to: 00597102 (UNCONDITIONAL_JUMP)
// 00597137: TEST EDI,EDI
//   Label: LAB_00597137
// 00597139: JGE 0x00596c37
//   XREF to: 00596c37 (CONDITIONAL_JUMP)
// 0059713f: PUSH ESI
// 00597140: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 00597145: MOV EAX,dword ptr [EAX + 0x7140]
// 0059714b: DEC EAX
// 0059714c: ADD ESP,0x4
// 0059714f: MOV dword ptr [EBP + 0x4a],EAX
// 00597152: JMP 0x00596c37
//   XREF to: 00596c37 (UNCONDITIONAL_JUMP)
// 00597157: MOV ECX,dword ptr [EBP + 0x92]
//   Label: LAB_00597157
// 0059715d: PUSH ECX
// 0059715e: CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
//   XREF to: 0059e000 (UNCONDITIONAL_CALL)
// 00597163: JMP 0x00596c75
//   XREF to: 00596c75 (UNCONDITIONAL_JUMP)
// 00597168: MOV EAX,dword ptr [EBP + 0x4a]
//   Label: LAB_00597168
// 0059716b: SHL EAX,0x2
// 0059716e: ADD EAX,EDI
// 00597170: MOV dword ptr [EAX + 0x2140],0x3
// 0059717a: MOV ECX,dword ptr [EBP + 0x92]
//   Label: LAB_0059717a
// 00597180: PUSH ECX
// 00597181: CALL core_skeleton.cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_005a0430
//   XREF to: 005a0430 (UNCONDITIONAL_CALL)
// 00597186: MOV EAX,dword ptr [EBP + 0x4a]
// 00597189: ADD ESP,0x4
// 0059718c: MOV EDX,dword ptr [EBP + 0x92]
// 00597192: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
//   XREF to: 02c6d578 (PARAM)
// 00597198: PUSH 0x0
// 0059719a: SHL EAX,0x2
// 0059719d: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 0059719e: ADD EDX,EAX
// 005971a0: MOV EAX,dword ptr [EBP + -0x1e]
// 005971a3: MOV ESI,dword ptr [EBP + -0x16]
// 005971a6: MOV dword ptr [EDX + 0x21b8],EAX
// 005971ac: CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0
//   XREF to: 0048d6c0 (UNCONDITIONAL_CALL)
// 005971b1: ADD ESP,0x8
// 005971b4: CMP ESI,0x2
// 005971b7: JGE 0x005971d2
//   XREF to: 005971d2 (CONDITIONAL_JUMP)
// 005971b9: PUSH 0x0
// 005971bb: PUSH 0x1
// 005971bd: PUSH -0x1
// 005971bf: MOV EDI,dword ptr [EBP + -0x22]
// 005971c2: PUSH EDI
// 005971c3: MOV EAX,dword ptr [EBP + 0x92]
// 005971c9: PUSH EAX
// 005971ca: CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
//   XREF to: 005a0150 (UNCONDITIONAL_CALL)
// 005971cf: ADD ESP,0x14
// 005971d2: MOV EDX,dword ptr [0x006703ec]
//   Label: LAB_005971d2
//   XREF to: 006703ec (READ)
// 005971d8: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005971d9: CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80
//   XREF to: 0048da80 (UNCONDITIONAL_CALL)
// 005971de: ADD ESP,0x4
// 005971e1: MOV ECX,dword ptr [EBP + 0x92]
// 005971e7: PUSH ECX
// 005971e8: MOV EBX,dword ptr [EBP + 0xa]
// 005971eb: CALL core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_005a0410
//   XREF to: 005a0410 (UNCONDITIONAL_CALL)
// 005971f0: ADD ESP,0x4
// 005971f3: TEST EBX,EBX
// 005971f5: JZ 0x005972cd
//   XREF to: 005972cd (CONDITIONAL_JUMP)
// 005971fb: XOR ESI,ESI
// 005971fd: XOR EBX,EBX
// 005971ff: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_005971ff
// 00597205: MOV EAX,dword ptr [EAX + 0x2230]
// 0059720b: MOV EDI,dword ptr [EBP + -0x32]
// 0059720e: SHL EAX,0x2
// 00597211: ADD EAX,EDI
// 00597213: CMP EBX,dword ptr [EAX + 0x2c]
// 00597216: JGE 0x005972cd
//   XREF to: 005972cd (CONDITIONAL_JUMP)
// 0059721c: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00597221: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00597223: ADD EAX,ESI
// 00597225: TEST byte ptr [EAX + 0x13],0x80
// 00597229: JZ 0x00597288
//   XREF to: 00597288 (CONDITIONAL_JUMP)
// 0059722b: INC EBX
//   Label: LAB_0059722b
// 0059722c: ADD ESI,0x30
// 0059722f: JMP 0x005971ff
//   XREF to: 005971ff (UNCONDITIONAL_JUMP)
// 00597231: CMP EDI,0x2
//   Label: LAB_00597231
// 00597234: JNZ 0x0059717a
//   XREF to: 0059717a (CONDITIONAL_JUMP)
// 0059723a: MOV ESI,dword ptr [EBP + 0x92]
// 00597240: XOR EBX,EBX
// 00597242: MOV EDX,dword ptr [EBP + 0x92]
//   Label: LAB_00597242
// 00597248: PUSH EDX
// 00597249: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 0059724e: MOV EAX,dword ptr [EAX + 0x7140]
// 00597254: ADD ESP,0x4
// 00597257: CMP EBX,EAX
// 00597259: JGE 0x0059726b
//   XREF to: 0059726b (CONDITIONAL_JUMP)
// 0059725b: ADD ESI,0x4
// 0059725e: INC EBX
// 0059725f: MOV dword ptr [ESI + 0x213c],0x3
// 00597269: JMP 0x00597242
//   XREF to: 00597242 (UNCONDITIONAL_JUMP)
// 0059726b: MOV EAX,dword ptr [EBP + 0x4a]
//   Label: LAB_0059726b
// 0059726e: MOV ECX,dword ptr [EBP + 0x92]
// 00597274: SHL EAX,0x2
// 00597277: ADD EAX,ECX
// 00597279: MOV dword ptr [EAX + 0x2140],0x0
// 00597283: JMP 0x0059717a
//   XREF to: 0059717a (UNCONDITIONAL_JUMP)
// 00597288: MOV EDI,dword ptr [EAX + 0x10]
//   Label: LAB_00597288
// 0059728b: MOV EAX,dword ptr [EAX + 0x14]
// 0059728e: SAR EAX,0x10
// 00597291: SAR EDI,0x10
// 00597294: MOV dword ptr [EBP + 0x26],EAX
// 00597297: TEST EDI,EDI
// 00597299: JL 0x0059722b
//   XREF to: 0059722b (CONDITIONAL_JUMP)
// 0059729b: PUSH EBX
// 0059729c: PUSH 0x64d8f7
//   XREF to: 0064d8f7 (DATA)
// 005972a1: LEA EAX,[EBP + 0xfffffaf6]
// 005972a7: PUSH EAX
// 005972a8: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005972ad: ADD ESP,0xc
// 005972b0: MOV ECX,dword ptr [EBP + 0x26]
// 005972b3: PUSH ECX
// 005972b4: PUSH EDI
// 005972b5: LEA EAX,[EBP + 0xfffffaf6]
// 005972bb: PUSH EAX
// 005972bc: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005972c1: ADD ESP,0xc
// 005972c4: INC EBX
// 005972c5: ADD ESI,0x30
// 005972c8: JMP 0x005971ff
//   XREF to: 005971ff (UNCONDITIONAL_JUMP)
// 005972cd: CMP dword ptr [0x03666084],0x1
//   Label: LAB_005972cd
//   XREF to: 03666084 (READ)
// 005972d4: JGE 0x0059786b
//   XREF to: 0059786b (CONDITIONAL_JUMP)
// 005972da: CMP dword ptr [EBP + 0x6],0x0
//   Label: LAB_005972da
// 005972de: JLE 0x0059735b
//   XREF to: 0059735b (CONDITIONAL_JUMP)
// 005972e0: LEA EAX,[EBP + 0xffffccf2]
// 005972e6: PUSH EAX
// 005972e7: MOV EBX,dword ptr [EBP + 0x92]
// 005972ed: PUSH EBX
// 005972ee: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510
//   XREF to: 005a1510 (UNCONDITIONAL_CALL)
// 005972f3: ADD ESP,0x8
// 005972f6: PUSH 0x36644d8
//   XREF to: 036644d8 (DATA)
// 005972fb: PUSH EBX
// 005972fc: CALL core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0
//   XREF to: 005a15e0 (UNCONDITIONAL_CALL)
// 00597301: ADD ESP,0x8
// 00597304: PUSH 0x1
// 00597306: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0059730c: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 0059730d: CALL engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0048d6c0
//   XREF to: 0048d6c0 (UNCONDITIONAL_CALL)
// 00597312: ADD ESP,0x8
// 00597315: PUSH 0x8000
// 0059731a: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 0059731f: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00597320: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 00597325: ADD ESP,0x8
// 00597328: PUSH 0x0
// 0059732a: PUSH 0x1
// 0059732c: PUSH 0x2e7
// 00597331: PUSH -0x1
// 00597333: PUSH EBX
// 00597334: CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_005a0150
//   XREF to: 005a0150 (UNCONDITIONAL_CALL)
// 00597339: ADD ESP,0x14
// 0059733c: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00597342: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00597343: CALL engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0048da80
//   XREF to: 0048da80 (UNCONDITIONAL_CALL)
// 00597348: ADD ESP,0x4
// 0059734b: LEA EAX,[EBP + 0xffffccf2]
// 00597351: PUSH EAX
// 00597352: PUSH EBX
// 00597353: CALL core_skeleton.cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0
//   XREF to: 005a15e0 (UNCONDITIONAL_CALL)
// 00597358: ADD ESP,0x8
// 0059735b: PUSH 0x3e
//   Label: LAB_0059735b
// 0059735d: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00597362: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00597363: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00597365: CALL dword ptr [EDX + 0x4]
// 00597368: ADD ESP,0x8
// 0059736b: TEST EAX,EAX
// 0059736d: JZ 0x0059739c
//   XREF to: 0059739c (CONDITIONAL_JUMP)
// 0059736f: MOV ESI,dword ptr [0x036712e0]
//   XREF to: 036712e0 (READ)
// 00597375: INC ESI
// 00597376: PUSH ESI
// 00597377: PUSH 0x64d8fa
//   XREF to: 0064d8fa (DATA)
// 0059737c: PUSH 0x36712e8
//   XREF to: 036712e8 (DATA)
// 00597381: MOV dword ptr [0x036712e0],ESI
//   XREF to: 036712e0 (WRITE)
// 00597387: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0059738c: ADD ESP,0xc
// 0059738f: PUSH 0x36712e8
//   XREF to: 036712e8 (DATA)
// 00597394: CALL engine_pcx.c_saveScreenshotGeneral_FUN_005490c0
//   XREF to: 005490c0 (UNCONDITIONAL_CALL)
// 00597399: ADD ESP,0x4
// 0059739c: CMP dword ptr [EBP + 0x42],0x0
//   Label: LAB_0059739c
// 005973a0: JZ 0x0059754f
//   XREF to: 0059754f (CONDITIONAL_JUMP)
// 005973a6: FLD float ptr [EBP + -0x72]
// 005973a9: FLD float ptr [EBP + -0x6e]
// 005973ac: FLD float ptr [EBP + -0x6a]
// 005973af: LEA EAX,[EBP + -0x4e]
// 005973b2: LEA EDI,[EBP + 0xffffff3a]
// 005973b8: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005973be: MOV ESI,0x6819fc
//   XREF to: 006819fc (DATA)
// 005973c3: FXCH ST2
// 005973c5: FCHS
// 005973c7: FXCH
// 005973c9: FCHS
// 005973cb: FXCH ST2
// 005973cd: FCHS
// 005973cf: PUSH EAX
// 005973d0: LEA EAX,[EBP + -0x42]
// 005973d3: FXCH
// 005973d5: FSTP float ptr [EBP + -0x4e]
// 005973d8: PUSH EAX
// 005973d9: FXCH
// 005973db: FSTP float ptr [EBP + -0x4a]
// 005973de: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005973df: FSTP float ptr [EBP + -0x46]
// 005973e2: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 005973e7: LEA EAX,[EBP + 0xffffff3a]
// 005973ed: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005973f3: ADD ESP,0xc
// 005973f6: MOVSD ES:EDI,ESI
//   XREF to: 006819fc (READ)
// 005973f7: MOVSD ES:EDI,ESI
//   XREF to: 00681a00 (READ)
// 005973f8: MOVSD ES:EDI,ESI
//   XREF to: 00681a04 (READ)
// 005973f9: PUSH EAX
// 005973fa: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005973fc: PUSH EAX
// 005973fd: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00597402: MOV ECX,0xf00
// 00597407: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 0059740c: ADD ESP,0x8
// 0059740f: MOV dword ptr [EBP + 0xffffff3a],ECX
// 00597415: LEA EDX,[EBP + 0xffffff3a]
// 0059741b: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0059741d: PUSH EDX
// 0059741e: ADD EAX,0x30
// 00597421: PUSH EAX
// 00597422: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00597427: MOV EBX,0xf00
// 0059742c: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00597431: ADD ESP,0x8
// 00597434: MOV dword ptr [EBP + 0xffffff42],EBX
// 0059743a: LEA EDX,[EBP + 0xffffff3a]
// 00597440: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00597442: PUSH EDX
// 00597443: ADD EAX,0x60
// 00597446: PUSH EAX
// 00597447: MOV ESI,0xfffff100
// 0059744c: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00597451: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00597456: ADD ESP,0x8
// 00597459: MOV dword ptr [EBP + 0xffffff3a],ESI
// 0059745f: LEA EDX,[EBP + 0xffffff3a]
// 00597465: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00597467: PUSH EDX
// 00597468: ADD EAX,0x90
// 0059746d: PUSH EAX
// 0059746e: MOV EDI,0x4
// 00597473: MOV ESI,0xfe0000
//   XREF to: 00fe0000 (DATA)
// 00597478: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0059747d: MOV EDX,0x3
// 00597482: MOV ECX,0x20000
// 00597487: ADD ESP,0x8
// 0059748a: MOV dword ptr [EBP + 0xfffffcee],EDI
// 00597490: MOV dword ptr [EBP + 0xfffffd12],ESI
//   XREF to: 00fe0000 (DATA)
// 00597496: MOV dword ptr [EBP + 0xfffffd1e],ESI
//   XREF to: 00fe0000 (DATA)
// 0059749c: MOV dword ptr [EBP + 0xfffffd22],ESI
//   XREF to: 00fe0000 (DATA)
// 005974a2: MOV dword ptr [EBP + 0xfffffd2e],ESI
//   XREF to: 00fe0000 (DATA)
// 005974a8: XOR EAX,EAX
// 005974aa: MOV EDI,0x1
// 005974af: PUSH 0x6819e4
//   XREF to: 006819e4 (DATA)
// 005974b4: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005974ba: MOV dword ptr [EBP + 0xfffffcfe],EAX
// 005974c0: MOV dword ptr [EBP + 0xfffffcfa],EAX
// 005974c6: MOV dword ptr [EBP + 0xfffffcf6],EAX
// 005974cc: MOV dword ptr [EBP + 0xfffffcf2],EAX
// 005974d2: MOV dword ptr [EBP + 0xfffffd02],EAX
// 005974d8: MOV dword ptr [EBP + 0xfffffd26],EDX
// 005974de: MOV dword ptr [EBP + 0xfffffd06],ECX
// 005974e4: MOV dword ptr [EBP + 0xfffffd0a],ECX
// 005974ea: MOV dword ptr [EBP + 0xfffffd16],ECX
// 005974f0: MOV dword ptr [EBP + 0xfffffd2a],ECX
// 005974f6: MOV EAX,0x2
// 005974fb: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 005974fc: MOV dword ptr [EBP + 0xfffffd0e],EDI
// 00597502: MOV dword ptr [EBP + 0xfffffd1a],EAX
// 00597508: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 0059750d: ADD ESP,0x8
// 00597510: PUSH 0xff
// 00597515: PUSH 0x0
// 00597517: PUSH 0xff
// 0059751c: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00597522: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 00597523: CALL engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
//   XREF to: 0048c970 (UNCONDITIONAL_CALL)
// 00597528: ADD ESP,0x10
// 0059752b: LEA EAX,[EBP + 0xfffffcea]
// 00597531: PUSH EAX
// 00597532: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00597537: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00597538: CALL engine_drender.cpp_CDemonRenderer_renderTexturedLitNearPlane_FUN_0048ac40
//   XREF to: 0048ac40 (UNCONDITIONAL_CALL)
// 0059753d: ADD ESP,0x8
// 00597540: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00597546: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00597547: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 0059754f: MOV ECX,dword ptr [EBP + -0x16]
//   Label: LAB_0059754f
// 00597552: TEST ECX,ECX
// 00597554: JLE 0x0059758e
//   XREF to: 0059758e (CONDITIONAL_JUMP)
// 00597556: MOV EAX,0x1
// 0059755b: CMP ECX,0x3
// 0059755e: JL 0x00597565
//   XREF to: 00597565 (CONDITIONAL_JUMP)
// 00597560: MOV EAX,0x3
// 00597565: PUSH EAX
//   Label: LAB_00597565
// 00597566: XOR EAX,EAX
// 00597568: MOV AL,[0x02d00c20]
//   XREF to: 02d00c20 (READ)
// 0059756d: PUSH EAX
// 0059756e: MOV ESI,dword ptr [EBP + 0x92]
// 00597574: PUSH ESI
// 00597575: MOV EDI,dword ptr [EBP + -0x16]
// 00597578: CALL core_skeleton.cpp_CDeformableModelInstance_renderSkeleton_FUN_005a17b0
//   XREF to: 005a17b0 (UNCONDITIONAL_CALL)
// 0059757d: ADD ESP,0xc
// 00597580: CMP EDI,0x4
// 00597583: JNZ 0x0059758e
//   XREF to: 0059758e (CONDITIONAL_JUMP)
// 00597585: PUSH ESI
// 00597586: CALL core_skeleton.cpp_CDeformableModelInstance_renderBones_FUN_005a17e0
//   XREF to: 005a17e0 (UNCONDITIONAL_CALL)
// 0059758b: ADD ESP,0x4
// 0059758e: CMP dword ptr [EBP + -0xa],0x0
//   Label: LAB_0059758e
// 00597592: JZ 0x00597977
//   XREF to: 00597977 (CONDITIONAL_JUMP)
// 00597598: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0059759e: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 0059759f: CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
//   XREF to: 004a1330 (UNCONDITIONAL_CALL)
// 005975a4: ADD ESP,0x4
// 005975a7: PUSH EAX
// 005975a8: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005975ae: PUSH 0x40000000
// 005975b3: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 005975b4: CALL shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
//   Label: LAB_005975b4
//   XREF to: 004a1ca0 (UNCONDITIONAL_CALL)
// 005975b9: ADD ESP,0xc
// 005975bc: FLD float ptr [EBP + -0x2]
//   Label: LAB_005975bc
// 005975bf: FLD1
// 005975c1: FDIVRP
// 005975c3: MOV EAX,[0x030e56b8]
//   XREF to: 030e56b8 (READ)
// 005975c8: PUSH EAX
// 005975c9: SUB ESP,0x8
// 005975cc: FSTP double ptr [ESP]
// 005975cf: PUSH 0x64d904
//   XREF to: 0064d904 (DATA)
// 005975d4: LEA EAX,[EBP + 0xfffffc22]
// 005975da: PUSH EAX
// 005975db: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005975e0: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 005975e5: ADD ESP,0x14
// 005975e8: SUB EAX,0xb
// 005975eb: PUSH EAX
// 005975ec: PUSH 0x0
// 005975ee: LEA EAX,[EBP + 0xfffffc22]
// 005975f4: PUSH EAX
// 005975f5: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005975fa: ADD ESP,0xc
// 005975fd: MOV EAX,dword ptr [EBP + 0x92]
// 00597603: SUB ESP,0x8
// 00597606: FLD float ptr [EAX + 0x8]
// 00597609: FSTP double ptr [ESP]
// 0059760c: PUSH EAX
// 0059760d: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00597612: ADD ESP,0x4
// 00597615: PUSH EAX
// 00597616: PUSH 0x64d90b
//   XREF to: 0064d90b (DATA)
// 0059761b: LEA EAX,[EBP + 0xfffffc22]
// 00597621: PUSH EAX
// 00597622: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00597627: ADD ESP,0x14
// 0059762a: PUSH 0xb
// 0059762c: PUSH 0x0
// 0059762e: LEA EAX,[EBP + 0xfffffc22]
// 00597634: PUSH EAX
// 00597635: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0059763a: ADD ESP,0xc
// 0059763d: MOV ECX,dword ptr [EBP + 0x92]
// 00597643: PUSH ECX
// 00597644: CALL core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
//   XREF to: 0052e2b0 (UNCONDITIONAL_CALL)
// 00597649: ADD ESP,0x4
// 0059764c: MOV dword ptr [EBP + 0x76],EAX
// 0059764f: SUB ESP,0x8
// 00597652: FLD float ptr [EBP + 0x76]
// 00597655: FSTP double ptr [ESP]
// 00597658: PUSH 0x64d916
//   XREF to: 0064d916 (DATA)
// 0059765d: LEA EAX,[EBP + 0xfffffc22]
// 00597663: PUSH EAX
// 00597664: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00597669: ADD ESP,0x10
// 0059766c: PUSH 0x16
// 0059766e: PUSH 0x0
// 00597670: LEA EAX,[EBP + 0xfffffc22]
// 00597676: PUSH EAX
// 00597677: MOV EBX,dword ptr [EBP + -0x2a]
// 0059767a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0059767f: ADD ESP,0xc
// 00597682: TEST EBX,EBX
// 00597684: JZ 0x00597997
//   XREF to: 00597997 (CONDITIONAL_JUMP)
// 0059768a: MOV EAX,0x64d924
//   XREF to: 0064d924 (DATA)
// 0059768f: PUSH EAX
//   Label: LAB_0059768f
//   XREF to: 0064d924 (DATA)
//   XREF to: 0064d927 (DATA)
// 00597690: PUSH 0x64d92b
//   XREF to: 0064d92b (DATA)
// 00597695: LEA EAX,[EBP + 0xfffffc22]
// 0059769b: PUSH EAX
// 0059769c: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005976a1: ADD ESP,0xc
// 005976a4: PUSH 0x21
// 005976a6: PUSH 0x0
// 005976a8: LEA EAX,[EBP + 0xfffffc22]
// 005976ae: PUSH EAX
// 005976af: MOV ESI,dword ptr [EBP + 0x46]
// 005976b2: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005976b7: ADD ESP,0xc
// 005976ba: TEST ESI,ESI
// 005976bc: JZ 0x005979a1
//   XREF to: 005979a1 (CONDITIONAL_JUMP)
// 005976c2: MOV EAX,0x64d93f
//   XREF to: 0064d93f (DATA)
// 005976c7: PUSH EAX
//   Label: LAB_005976c7
//   XREF to: 0064d93f (DATA)
//   XREF to: 0064d942 (DATA)
// 005976c8: PUSH 0x64d946
//   XREF to: 0064d946 (DATA)
// 005976cd: LEA EAX,[EBP + 0xfffffc22]
// 005976d3: PUSH EAX
// 005976d4: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005976d9: ADD ESP,0xc
// 005976dc: PUSH 0x2c
// 005976de: PUSH 0x0
// 005976e0: LEA EAX,[EBP + 0xfffffc22]
// 005976e6: PUSH EAX
// 005976e7: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005976ec: ADD ESP,0xc
// 005976ef: MOV EDI,dword ptr [EBP + 0x4a]
// 005976f2: PUSH EDI
// 005976f3: MOV EAX,dword ptr [EBP + -0x32]
// 005976f6: PUSH EAX
// 005976f7: CALL core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_0059c220
//   XREF to: 0059c220 (UNCONDITIONAL_CALL)
// 005976fc: IMUL EAX,dword ptr [EAX + 0x5c],0x24
// 00597700: MOV ECX,dword ptr [EBP + 0x66]
// 00597703: ADD ESP,0x8
// 00597706: ADD EAX,ECX
// 00597708: PUSH EAX
// 00597709: PUSH EDI
// 0059770a: MOV ESI,dword ptr [EBP + -0x32]
// 0059770d: PUSH ESI
// 0059770e: CALL core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_0059c220
//   XREF to: 0059c220 (UNCONDITIONAL_CALL)
// 00597713: ADD ESP,0x8
// 00597716: PUSH EAX
// 00597717: PUSH EDI
// 00597718: PUSH 0x64d95d
//   XREF to: 0064d95d (DATA)
// 0059771d: LEA EAX,[EBP + 0xfffffc22]
// 00597723: PUSH EAX
// 00597724: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00597729: ADD ESP,0x14
// 0059772c: PUSH 0x37
// 0059772e: PUSH 0x0
// 00597730: LEA EAX,[EBP + 0xfffffc22]
// 00597736: PUSH EAX
// 00597737: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0059773c: ADD ESP,0xc
// 0059773f: PUSH 0x64d989
//   XREF to: 0064d989 (DATA)
// 00597744: LEA EAX,[EBP + 0xfffffc22]
// 0059774a: PUSH EAX
// 0059774b: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00597750: ADD ESP,0x8
// 00597753: PUSH 0x42
// 00597755: PUSH 0x0
// 00597757: LEA EAX,[EBP + 0xfffffc22]
// 0059775d: PUSH EAX
// 0059775e: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00597763: MOV EAX,dword ptr [EBP + 0x92]
// 00597769: MOV EAX,dword ptr [EAX + 0x2230]
// 0059776f: SHL EAX,0x2
// 00597772: ADD EAX,ESI
// 00597774: ADD ESP,0xc
// 00597777: MOV ECX,dword ptr [EAX + 0x54]
// 0059777a: PUSH ECX
// 0059777b: MOV EBX,dword ptr [EBP + 0x2e]
// 0059777e: PUSH EBX
// 0059777f: CALL core_box.cpp_CBoundingBox3D_getBoundingBoxScreenSize_FUN_00420840
//   XREF to: 00420840 (UNCONDITIONAL_CALL)
// 00597784: MOV dword ptr [EBP + 0x76],EAX
// 00597787: ADD ESP,0x4
// 0059778a: FLD float ptr [EBP + 0x76]
// 0059778d: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00597792: FISTP dword ptr [EBP + 0x76]
// 00597795: MOV ESI,dword ptr [EBP + 0x76]
// 00597798: MOV EAX,dword ptr [EBP + 0x92]
// 0059779e: PUSH ESI
// 0059779f: MOV EDI,dword ptr [EAX + 0x2230]
// 005977a5: PUSH EDI
// 005977a6: PUSH 0x64d99b
//   XREF to: 0064d99b (DATA)
// 005977ab: LEA EAX,[EBP + 0xfffffc22]
// 005977b1: PUSH EAX
// 005977b2: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005977b7: ADD ESP,0x14
// 005977ba: PUSH 0x4d
// 005977bc: PUSH 0x0
// 005977be: LEA EAX,[EBP + 0xfffffc22]
// 005977c4: PUSH EAX
// 005977c5: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005977ca: ADD ESP,0xc
// 005977cd: MOV EAX,dword ptr [EBP + -0x1e]
// 005977d0: PUSH EAX
// 005977d1: PUSH 0x64d9bb
//   XREF to: 0064d9bb (DATA)
// 005977d6: LEA EAX,[EBP + 0xfffffc22]
// 005977dc: PUSH EAX
// 005977dd: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005977e2: ADD ESP,0xc
// 005977e5: PUSH 0x58
// 005977e7: PUSH 0x0
// 005977e9: LEA EAX,[EBP + 0xfffffc22]
// 005977ef: PUSH EAX
// 005977f0: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005977f5: MOV EDX,dword ptr [0x03666084]
//   XREF to: 03666084 (READ)
// 005977fb: ADD ESP,0xc
// 005977fe: CMP EDX,0x1
// 00597801: JGE 0x005979ab
//   XREF to: 005979ab (CONDITIONAL_JUMP)
// 00597807: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   Label: LAB_00597807
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0059780c: MOV ECX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 00597812: PUSH ECX
//   XREF to: 02d81a9c (DATA)
// 00597813: CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   XREF to: 004d7d90 (UNCONDITIONAL_CALL)
// 00597818: ADD ESP,0x4
// 0059781b: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00597820: PUSH 0x1
// 00597822: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00597824: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00597825: CALL dword ptr [EDX + 0x4]
// 00597828: ADD ESP,0x8
// 0059782b: TEST EAX,EAX
// 0059782d: JZ 0x00597a46
//   XREF to: 00597a46 (CONDITIONAL_JUMP)
// 00597833: CMP dword ptr [EBP + 0x4e],0x0
// 00597837: JNZ 0x00598e4d
//   XREF to: 00598e4d (CONDITIONAL_JUMP)
// 0059783d: CMP dword ptr [EBP + -0x6],0x0
// 00597841: JNZ 0x00598e4d
//   XREF to: 00598e4d (CONDITIONAL_JUMP)
// 00597847: MOV EAX,[0x006810c8]
//   Label: LAB_00597847
//   XREF to: 006810c8 (READ)
// 0059784c: PUSH 0x3665f74
//   XREF to: 03665f74 (DATA)
// 00597851: MOV dword ptr [EAX + 0x15ac80],0x0
//   XREF to: 0326eef8 (WRITE)
// 0059785b: CALL core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
//   XREF to: 00477690 (UNCONDITIONAL_CALL)
// 00597860: ADD ESP,0x4
// 00597863: LEA ESP,[EBP + 0x7e]
// 00597866: POP EBP
// 00597867: POP EDI
// 00597868: POP ESI
// 00597869: POP EBX
// 0059786a: RET
// 0059786b: LEA EAX,[EBP + 0xfffffef2]
//   Label: LAB_0059786b
// 00597871: PUSH EAX
// 00597872: LEA EAX,[EBP + 0xffffff0a]
// 00597878: PUSH EAX
// 00597879: LEA EAX,[EBP + 0xfffffdce]
// 0059787f: PUSH EAX
// 00597880: MOV ESI,dword ptr [EBP + 0x2a]
// 00597883: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 00597888: IMUL EAX,ESI,0x30
// 0059788b: MOV EDI,dword ptr [EBP + 0x3a]
// 0059788e: ADD ESP,0xc
// 00597891: ADD EAX,EDI
// 00597893: PUSH EAX
// 00597894: LEA EAX,[EBP + 0xfffffdce]
// 0059789a: PUSH EAX
// 0059789b: LEA ESI,[EBP + 0xfffffd6e]
// 005978a1: LEA EDI,[EBP + 0xfffffd9e]
// 005978a7: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 005978ac: ADD ESP,0x8
// 005978af: LEA EAX,[EBP + 0xffffff22]
// 005978b5: MOV ECX,0xc
// 005978ba: PUSH EAX
// 005978bb: LEA EAX,[EBP + 0xfffffd9e]
// 005978c1: LEA ESI,[EBP + 0xfffffd6e]
// 005978c7: PUSH EAX
// 005978c8: MOVSD.REP ES:EDI,ESI
// 005978ca: CALL core_xform.cpp_getTranslation_FUN_005f6110
//   XREF to: 005f6110 (UNCONDITIONAL_CALL)
// 005978cf: MOV EDX,EAX
// 005978d1: LEA EAX,[EBP + 0xfffffe8e]
// 005978d7: ADD ESP,0x8
// 005978da: CMP EAX,EDX
// 005978dc: JZ 0x005978f8
//   XREF to: 005978f8 (CONDITIONAL_JUMP)
// 005978de: MOV EAX,dword ptr [EDX]
// 005978e0: MOV dword ptr [EBP + 0xfffffe8e],EAX
// 005978e6: MOV EAX,dword ptr [EDX + 0x4]
// 005978e9: MOV dword ptr [EBP + 0xfffffe92],EAX
// 005978ef: MOV EAX,dword ptr [EDX + 0x8]
// 005978f2: MOV dword ptr [EBP + 0xfffffe96],EAX
// 005978f8: LEA EAX,[EBP + 0xffffff46]
//   Label: LAB_005978f8
// 005978fe: PUSH EAX
// 005978ff: LEA EAX,[EBP + 0xfffffd9e]
// 00597905: PUSH EAX
// 00597906: CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   XREF to: 005f5690 (UNCONDITIONAL_CALL)
// 0059790b: MOV EDX,EAX
// 0059790d: LEA EAX,[EBP + 0xfffffe9a]
// 00597913: ADD ESP,0x8
// 00597916: CMP EAX,EDX
// 00597918: JZ 0x00597934
//   XREF to: 00597934 (CONDITIONAL_JUMP)
// 0059791a: MOV EAX,dword ptr [EDX]
// 0059791c: MOV dword ptr [EBP + 0xfffffe9a],EAX
// 00597922: MOV EAX,dword ptr [EDX + 0x4]
// 00597925: MOV dword ptr [EBP + 0xfffffe9e],EAX
// 0059792b: MOV EAX,dword ptr [EDX + 0x8]
// 0059792e: MOV dword ptr [EBP + 0xfffffea2],EAX
// 00597934: LEA EAX,[EBP + 0xfffffe8e]
//   Label: LAB_00597934
// 0059793a: PUSH EAX
// 0059793b: LEA EAX,[EBP + 0xfffffe9a]
// 00597941: PUSH EAX
// 00597942: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00597947: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00597948: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 0059794d: ADD ESP,0xc
// 00597950: PUSH -0x1
// 00597952: PUSH 0x0
// 00597954: PUSH 0x0
// 00597956: PUSH 0x3665f74
//   XREF to: 03665f74 (DATA)
// 0059795b: CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
//   XREF to: 00477850 (UNCONDITIONAL_CALL)
// 00597960: ADD ESP,0x10
// 00597963: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00597969: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0059796a: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 00597977: CMP dword ptr [EBP + -0xe],0x0
//   Label: LAB_00597977
// 0059797b: JZ 0x005975bc
//   XREF to: 005975bc (CONDITIONAL_JUMP)
// 00597981: PUSH 0xff
// 00597986: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0059798c: PUSH 0x40000000
// 00597991: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 00597992: JMP 0x005975b4
//   XREF to: 005975b4 (UNCONDITIONAL_JUMP)
// 00597997: MOV EAX,0x64d927
//   Label: LAB_00597997
//   XREF to: 0064d927 (DATA)
// 0059799c: JMP 0x0059768f
//   XREF to: 0059768f (UNCONDITIONAL_JUMP)
// 005979a1: MOV EAX,0x64d942
//   Label: LAB_005979a1
//   XREF to: 0064d942 (DATA)
// 005979a6: JMP 0x005976c7
//   XREF to: 005976c7 (UNCONDITIONAL_JUMP)
// 005979ab: SUB ESP,0x8
//   Label: LAB_005979ab
// 005979ae: FLD float ptr [EBP + 0xffffff12]
// 005979b4: FSTP double ptr [ESP]
// 005979b7: SUB ESP,0x8
// 005979ba: FLD float ptr [EBP + 0xffffff0e]
// 005979c0: FSTP double ptr [ESP]
// 005979c3: SUB ESP,0x8
// 005979c6: FLD float ptr [EBP + 0xffffff0a]
// 005979cc: FSTP double ptr [ESP]
// 005979cf: PUSH 0x64d9d4
//   XREF to: 0064d9d4 (DATA)
// 005979d4: LEA EAX,[EBP + 0xfffffc22]
// 005979da: PUSH EAX
// 005979db: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005979e0: ADD ESP,0x20
// 005979e3: PUSH 0x63
// 005979e5: PUSH 0x0
// 005979e7: LEA EAX,[EBP + 0xfffffc22]
// 005979ed: PUSH EAX
// 005979ee: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005979f3: ADD ESP,0xc
// 005979f6: SUB ESP,0x8
// 005979f9: FLD float ptr [EBP + 0xfffffef6]
// 005979ff: FSTP double ptr [ESP]
// 00597a02: SUB ESP,0x8
// 00597a05: FLD float ptr [EBP + 0xfffffefa]
// 00597a0b: FSTP double ptr [ESP]
// 00597a0e: SUB ESP,0x8
// 00597a11: FLD float ptr [EBP + 0xfffffef2]
// 00597a17: FSTP double ptr [ESP]
// 00597a1a: PUSH 0x64d9fa
//   XREF to: 0064d9fa (DATA)
// 00597a1f: LEA EAX,[EBP + 0xfffffc22]
// 00597a25: PUSH EAX
// 00597a26: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00597a2b: ADD ESP,0x20
// 00597a2e: PUSH 0x6e
// 00597a30: PUSH 0x0
// 00597a32: LEA EAX,[EBP + 0xfffffc22]
// 00597a38: PUSH EAX
// 00597a39: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00597a3e: ADD ESP,0xc
// 00597a41: JMP 0x00597807
//   XREF to: 00597807 (UNCONDITIONAL_JUMP)
// 00597a46: MOV EAX,dword ptr [EBP + -0x2e]
//   Label: LAB_00597a46
// 00597a49: MOV EBX,dword ptr [EAX + 0x28558]
// 00597a4f: XOR ESI,ESI
// 00597a51: TEST EBX,EBX
// 00597a53: JLE 0x00597a83
//   XREF to: 00597a83 (CONDITIONAL_JUMP)
// 00597a55: MOV EAX,dword ptr [EBP + 0x32]
// 00597a58: MOV EBX,dword ptr [EBP + -0x2e]
// 00597a5b: MOV EDX,dword ptr [EBP + 0x36]
// 00597a5e: CMP EDX,EAX
//   Label: LAB_00597a5e
// 00597a60: JZ 0x00597a72
//   XREF to: 00597a72 (CONDITIONAL_JUMP)
// 00597a62: MOV ECX,dword ptr [EAX]
// 00597a64: MOV dword ptr [EDX],ECX
// 00597a66: MOV ECX,dword ptr [EAX + 0x4]
// 00597a69: MOV dword ptr [EDX + 0x4],ECX
// 00597a6c: MOV ECX,dword ptr [EAX + 0x8]
// 00597a6f: MOV dword ptr [EDX + 0x8],ECX
// 00597a72: ADD EDX,0xc
//   Label: LAB_00597a72
// 00597a75: INC ESI
// 00597a76: MOV EDI,dword ptr [EBX + 0x28558]
// 00597a7c: ADD EAX,0xc
// 00597a7f: CMP ESI,EDI
// 00597a81: JL 0x00597a5e
//   XREF to: 00597a5e (CONDITIONAL_JUMP)
// 00597a83: CMP dword ptr [0x03666084],0x1
//   Label: LAB_00597a83
//   XREF to: 03666084 (READ)
// 00597a8a: JGE 0x0059800f
//   XREF to: 0059800f (CONDITIONAL_JUMP)
// 00597a90: CMP dword ptr [EBP + -0xa],0x0
//   Label: LAB_00597a90
// 00597a94: JZ 0x0059810c
//   XREF to: 0059810c (CONDITIONAL_JUMP)
// 00597a9a: PUSH 0x17
// 00597a9c: LEA EAX,[EBP + 0xfffffd32]
// 00597aa2: PUSH EAX
// 00597aa3: CALL core_stairs.cpp_FUN_005b9670
//   XREF to: 005b9670 (UNCONDITIONAL_CALL)
// 00597aa8: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00597aad: ADD ESP,0x8
// 00597ab0: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 00597ab6: PUSH 0x2a
// 00597ab8: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00597abd: FMUL double ptr [0x0064e0c2]
//   XREF to: 0064e0c2 (READ)
// 00597ac3: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00597ac4: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00597ac6: FSTP float ptr [EBP + 0x3e]
// 00597ac9: CALL dword ptr [EDX]
// 00597acb: ADD ESP,0x8
// 00597ace: TEST EAX,EAX
// 00597ad0: JZ 0x00597ade
//   XREF to: 00597ade (CONDITIONAL_JUMP)
// 00597ad2: FLD float ptr [EBP + 0x3e]
// 00597ad5: FMUL float ptr [0x0064e0ca]
//   XREF to: 0064e0ca (READ)
// 00597adb: FSTP float ptr [EBP + 0x3e]
// 00597ade: PUSH 0x38
//   Label: LAB_00597ade
// 00597ae0: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00597ae5: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00597ae6: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00597ae8: CALL dword ptr [EDX]
// 00597aea: ADD ESP,0x8
// 00597aed: TEST EAX,EAX
// 00597aef: JZ 0x00597afd
//   XREF to: 00597afd (CONDITIONAL_JUMP)
// 00597af1: FLD float ptr [EBP + 0x3e]
// 00597af4: FMUL float ptr [0x0064e0ce]
//   XREF to: 0064e0ce (READ)
// 00597afa: FSTP float ptr [EBP + 0x3e]
// 00597afd: PUSH 0x1e
//   Label: LAB_00597afd
// 00597aff: XOR EDI,EDI
// 00597b01: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00597b06: MOV dword ptr [EBP + 0xffffff76],EDI
// 00597b0c: MOV dword ptr [EBP + 0xffffff7a],EDI
// 00597b12: MOV dword ptr [EBP + 0xffffff7e],EDI
// 00597b18: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00597b19: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00597b1b: CALL dword ptr [EDX]
// 00597b1d: ADD ESP,0x8
// 00597b20: TEST EAX,EAX
// 00597b22: JZ 0x00597b33
//   XREF to: 00597b33 (CONDITIONAL_JUMP)
// 00597b24: FLD float ptr [EBP + 0xffffff7a]
// 00597b2a: FSUB float ptr [EBP + 0x3e]
// 00597b2d: FSTP float ptr [EBP + 0xffffff7a]
// 00597b33: PUSH 0x10
//   Label: LAB_00597b33
// 00597b35: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00597b3a: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00597b3b: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00597b3d: CALL dword ptr [EDX]
// 00597b3f: ADD ESP,0x8
// 00597b42: TEST EAX,EAX
// 00597b44: JZ 0x00597b55
//   XREF to: 00597b55 (CONDITIONAL_JUMP)
// 00597b46: FLD float ptr [EBP + 0xffffff7a]
// 00597b4c: FADD float ptr [EBP + 0x3e]
// 00597b4f: FSTP float ptr [EBP + 0xffffff7a]
// 00597b55: PUSH 0x4b
//   Label: LAB_00597b55
// 00597b57: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00597b5c: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00597b5d: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00597b5f: CALL dword ptr [EDX]
// 00597b61: ADD ESP,0x8
// 00597b64: TEST EAX,EAX
// 00597b66: JZ 0x00597b77
//   XREF to: 00597b77 (CONDITIONAL_JUMP)
// 00597b68: FLD float ptr [EBP + 0xffffff76]
// 00597b6e: FSUB float ptr [EBP + 0x3e]
// 00597b71: FSTP float ptr [EBP + 0xffffff76]
// 00597b77: PUSH 0x4d
//   Label: LAB_00597b77
// 00597b79: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00597b7e: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00597b7f: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00597b81: CALL dword ptr [EDX]
// 00597b83: ADD ESP,0x8
// 00597b86: TEST EAX,EAX
// 00597b88: JZ 0x00597b99
//   XREF to: 00597b99 (CONDITIONAL_JUMP)
// 00597b8a: FLD float ptr [EBP + 0xffffff76]
// 00597b90: FADD float ptr [EBP + 0x3e]
// 00597b93: FSTP float ptr [EBP + 0xffffff76]
// 00597b99: PUSH 0x50
//   Label: LAB_00597b99
// 00597b9b: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00597ba0: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00597ba1: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00597ba3: CALL dword ptr [EDX]
// 00597ba5: ADD ESP,0x8
// 00597ba8: TEST EAX,EAX
// 00597baa: JZ 0x00597bbb
//   XREF to: 00597bbb (CONDITIONAL_JUMP)
// 00597bac: FLD float ptr [EBP + 0xffffff7e]
// 00597bb2: FSUB float ptr [EBP + 0x3e]
// 00597bb5: FSTP float ptr [EBP + 0xffffff7e]
// 00597bbb: PUSH 0x48
//   Label: LAB_00597bbb
// 00597bbd: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00597bc2: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00597bc3: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00597bc5: CALL dword ptr [EDX]
// 00597bc7: ADD ESP,0x8
// 00597bca: TEST EAX,EAX
// 00597bcc: JZ 0x00597bdd
//   XREF to: 00597bdd (CONDITIONAL_JUMP)
// 00597bce: FLD float ptr [EBP + 0xffffff7e]
// 00597bd4: FADD float ptr [EBP + 0x3e]
// 00597bd7: FSTP float ptr [EBP + 0xffffff7e]
// 00597bdd: FLD float ptr [EBP + 0xffffff7a]
//   Label: LAB_00597bdd
// 00597be3: FMUL ST0
// 00597be5: FLD float ptr [EBP + 0xffffff76]
// 00597beb: FMUL ST0
// 00597bed: FADDP
// 00597bef: FLD float ptr [EBP + 0xffffff7e]
// 00597bf5: FMUL ST0
// 00597bf7: FADDP
// 00597bf9: FSQRT
// 00597bfb: FLDZ
// 00597bfd: FCOMPP
// 00597bff: FNSTSW AX
// 00597c01: SAHF
// 00597c02: JNC 0x00597c1f
//   XREF to: 00597c1f (CONDITIONAL_JUMP)
// 00597c04: LEA EAX,[EBP + 0xffffff76]
// 00597c0a: PUSH EAX
// 00597c0b: MOV EBX,dword ptr [EBP + -0x32]
// 00597c0e: MOV ECX,0x1
// 00597c13: PUSH EBX
// 00597c14: MOV dword ptr [EBP + 0x4e],ECX
// 00597c17: CALL core_skeledit.cpp_FUN_0058e600
//   XREF to: 0058e600 (UNCONDITIONAL_CALL)
// 00597c1c: ADD ESP,0x8
//   Label: LAB_00597c1c
// 00597c1f: PUSH 0x30
//   Label: LAB_00597c1f
// 00597c21: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00597c26: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00597c27: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00597c29: CALL dword ptr [EDX + 0x4]
// 00597c2c: ADD ESP,0x8
// 00597c2f: TEST EAX,EAX
// 00597c31: JZ 0x00597cb1
//   XREF to: 00597cb1 (CONDITIONAL_JUMP)
// 00597c37: PUSH 0x2a
// 00597c39: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00597c3e: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00597c3f: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00597c41: CALL dword ptr [EDX]
// 00597c43: ADD ESP,0x8
// 00597c46: TEST EAX,EAX
// 00597c48: JZ 0x0059811f
//   XREF to: 0059811f (CONDITIONAL_JUMP)
// 00597c4e: PUSH 0x0
// 00597c50: LEA EAX,[EBP + 0xffffff52]
// 00597c56: PUSH EAX
// 00597c57: PUSH 0x64da23
//   XREF to: 0064da23 (DATA)
// 00597c5c: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00597c62: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 00597c63: CALL shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_004a0300
//   XREF to: 004a0300 (UNCONDITIONAL_CALL)
// 00597c68: ADD ESP,0x10
// 00597c6b: TEST EAX,EAX
// 00597c6d: JZ 0x00597cb1
//   XREF to: 00597cb1 (CONDITIONAL_JUMP)
// 00597c6f: FLD float ptr [EBP + 0xffffff56]
// 00597c75: FMUL ST0
// 00597c77: FLD float ptr [EBP + 0xffffff52]
// 00597c7d: FMUL ST0
// 00597c7f: FADDP
// 00597c81: FLD float ptr [EBP + 0xffffff5a]
// 00597c87: FMUL ST0
// 00597c89: FADDP
// 00597c8b: FSQRT
// 00597c8d: FLDZ
// 00597c8f: FCOMPP
// 00597c91: FNSTSW AX
// 00597c93: SAHF
// 00597c94: JNC 0x00597cb1
//   XREF to: 00597cb1 (CONDITIONAL_JUMP)
// 00597c96: LEA EAX,[EBP + 0xffffff52]
// 00597c9c: PUSH EAX
// 00597c9d: MOV ESI,dword ptr [EBP + -0x32]
// 00597ca0: MOV EBX,0x1
// 00597ca5: PUSH ESI
// 00597ca6: MOV dword ptr [EBP + 0x4e],EBX
// 00597ca9: CALL core_skeledit.cpp_FUN_0058e600
//   XREF to: 0058e600 (UNCONDITIONAL_CALL)
// 00597cae: ADD ESP,0x8
// 00597cb1: PUSH 0x18
//   Label: LAB_00597cb1
// 00597cb3: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00597cb8: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00597cb9: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00597cbb: CALL dword ptr [EDX]
// 00597cbd: ADD ESP,0x8
// 00597cc0: TEST EAX,EAX
// 00597cc2: JZ 0x00597ccf
//   XREF to: 00597ccf (CONDITIONAL_JUMP)
// 00597cc4: XOR EDI,EDI
// 00597cc6: MOV dword ptr [EBP + -0x6e],EDI
// 00597cc9: MOV dword ptr [EBP + -0x72],EDI
// 00597ccc: MOV dword ptr [EBP + -0x6a],EDI
// 00597ccf: PUSH 0x19
//   Label: LAB_00597ccf
// 00597cd1: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00597cd6: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00597cd7: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00597cd9: CALL dword ptr [EDX + 0x4]
// 00597cdc: ADD ESP,0x8
// 00597cdf: TEST EAX,EAX
// 00597ce1: JZ 0x00597cf2
//   XREF to: 00597cf2 (CONDITIONAL_JUMP)
// 00597ce3: CMP dword ptr [EBP + -0x12],0x0
// 00597ce7: SETZ AL
// 00597cea: AND EAX,0xff
// 00597cef: MOV dword ptr [EBP + -0x12],EAX
// 00597cf2: PUSH 0x26
//   Label: LAB_00597cf2
// 00597cf4: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00597cf9: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00597cfa: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00597cfc: CALL dword ptr [EDX + 0x4]
// 00597cff: ADD ESP,0x8
// 00597d02: TEST EAX,EAX
// 00597d04: JZ 0x00597d15
//   XREF to: 00597d15 (CONDITIONAL_JUMP)
// 00597d06: CMP dword ptr [EBP + -0x2a],0x0
// 00597d0a: SETZ AL
// 00597d0d: AND EAX,0xff
// 00597d12: MOV dword ptr [EBP + -0x2a],EAX
// 00597d15: PUSH 0x22
//   Label: LAB_00597d15
// 00597d17: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00597d1c: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00597d1d: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00597d1f: CALL dword ptr [EDX + 0x4]
// 00597d22: ADD ESP,0x8
// 00597d25: TEST EAX,EAX
// 00597d27: JZ 0x00597d38
//   XREF to: 00597d38 (CONDITIONAL_JUMP)
// 00597d29: CMP dword ptr [EBP + 0x42],0x0
// 00597d2d: SETZ AL
// 00597d30: AND EAX,0xff
// 00597d35: MOV dword ptr [EBP + 0x42],EAX
// 00597d38: PUSH 0x2e
//   Label: LAB_00597d38
// 00597d3a: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00597d3f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00597d40: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00597d42: CALL dword ptr [EDX + 0x4]
// 00597d45: ADD ESP,0x8
// 00597d48: TEST EAX,EAX
// 00597d4a: JZ 0x00597d5b
//   XREF to: 00597d5b (CONDITIONAL_JUMP)
// 00597d4c: CMP dword ptr [EBP + 0x46],0x0
// 00597d50: SETZ AL
// 00597d53: AND EAX,0xff
// 00597d58: MOV dword ptr [EBP + 0x46],EAX
// 00597d5b: PUSH 0x2
//   Label: LAB_00597d5b
// 00597d5d: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00597d62: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00597d63: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00597d65: CALL dword ptr [EDX + 0x4]
// 00597d68: ADD ESP,0x8
// 00597d6b: TEST EAX,EAX
// 00597d6d: JZ 0x00597d7e
//   XREF to: 00597d7e (CONDITIONAL_JUMP)
// 00597d6f: CMP dword ptr [EBP + -0xe],0x0
// 00597d73: SETZ AL
// 00597d76: AND EAX,0xff
// 00597d7b: MOV dword ptr [EBP + -0xe],EAX
// 00597d7e: PUSH 0x2f
//   Label: LAB_00597d7e
// 00597d80: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00597d85: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00597d86: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00597d88: CALL dword ptr [EDX + 0x4]
// 00597d8b: ADD ESP,0x8
// 00597d8e: TEST EAX,EAX
// 00597d90: JZ 0x00597da1
//   XREF to: 00597da1 (CONDITIONAL_JUMP)
// 00597d92: CMP dword ptr [EBP + 0xa],0x0
// 00597d96: SETZ AL
// 00597d99: AND EAX,0xff
// 00597d9e: MOV dword ptr [EBP + 0xa],EAX
// 00597da1: PUSH 0x1f
//   Label: LAB_00597da1
// 00597da3: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00597da8: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00597da9: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00597dab: CALL dword ptr [EDX + 0x4]
// 00597dae: ADD ESP,0x8
// 00597db1: TEST EAX,EAX
// 00597db3: JZ 0x00597f54
//   XREF to: 00597f54 (CONDITIONAL_JUMP)
// 00597db9: PUSH 0x1d
// 00597dbb: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00597dc0: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00597dc1: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00597dc3: CALL dword ptr [EDX]
// 00597dc5: ADD ESP,0x8
// 00597dc8: TEST EAX,EAX
// 00597dca: JZ 0x0059815e
//   XREF to: 0059815e (CONDITIONAL_JUMP)
// 00597dd0: PUSH 0x0
// 00597dd2: MOV EBX,dword ptr [EBP + 0x92]
// 00597dd8: PUSH EBX
// 00597dd9: MOV EDI,dword ptr [EBP + -0x32]
// 00597ddc: CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
//   XREF to: 005a01d0 (UNCONDITIONAL_CALL)
// 00597de1: MOV EAX,dword ptr [EBX + 0x2230]
// 00597de7: ADD ESP,0x8
// 00597dea: SHL EAX,0x2
// 00597ded: MOV ESI,dword ptr [EBX + 0x2234]
// 00597df3: ADD EAX,EDI
// 00597df5: PUSH ESI
// 00597df6: MOV EDX,dword ptr [EAX + 0x2c]
// 00597df9: PUSH EDX
// 00597dfa: LEA EAX,[EBP + 0xfffffeaa]
// 00597e00: PUSH EAX
// 00597e01: CALL core_box.cpp_CBoundingBox3D_computeFromVertices_FUN_00420e90
//   XREF to: 00420e90 (UNCONDITIONAL_CALL)
// 00597e06: FLD float ptr [EBP + 0xfffffeb6]
// 00597e0c: FLD float ptr [EBP + 0xfffffeba]
// 00597e12: ADD ESP,0xc
// 00597e15: FLD float ptr [EBP + 0xfffffebe]
// 00597e1b: SUB ESP,0x8
// 00597e1e: FXCH ST2
// 00597e20: FSUB float ptr [EBP + 0xfffffeaa]
// 00597e26: FXCH
// 00597e28: FSUB float ptr [EBP + 0xfffffeae]
// 00597e2e: FXCH ST2
// 00597e30: FSUB float ptr [EBP + 0xfffffeb2]
// 00597e36: FXCH
// 00597e38: FSTP float ptr [EBP + 0xffffff5e]
// 00597e3e: FXCH
// 00597e40: FSTP float ptr [EBP + 0xffffff62]
// 00597e46: FST float ptr [EBP + 0xffffff66]
// 00597e4c: FSTP double ptr [ESP]
// 00597e4f: SUB ESP,0x8
// 00597e52: FLD float ptr [EBP + 0xfffffebe]
// 00597e58: FSTP double ptr [ESP]
// 00597e5b: SUB ESP,0x8
// 00597e5e: FLD float ptr [EBP + 0xfffffeb2]
// 00597e64: FSTP double ptr [ESP]
// 00597e67: MOV EAX,dword ptr [EBP + 0xffffff5e]
// 00597e6d: MOV dword ptr [EBP + 0xfffffee6],EAX
// 00597e73: MOV EAX,dword ptr [EBP + 0xffffff62]
// 00597e79: MOV dword ptr [EBP + 0xfffffeea],EAX
// 00597e7f: MOV EAX,dword ptr [EBP + 0xffffff66]
// 00597e85: SUB ESP,0x8
// 00597e88: MOV dword ptr [EBP + 0xfffffeee],EAX
// 00597e8e: FLD float ptr [EBP + 0xffffff62]
// 00597e94: FSTP double ptr [ESP]
// 00597e97: SUB ESP,0x8
// 00597e9a: FLD float ptr [EBP + 0xfffffeba]
// 00597ea0: FSTP double ptr [ESP]
// 00597ea3: SUB ESP,0x8
// 00597ea6: FLD float ptr [EBP + 0xfffffeae]
// 00597eac: FSTP double ptr [ESP]
// 00597eaf: MOV EAX,dword ptr [EBP + 0xffffff5e]
// 00597eb5: MOV dword ptr [EBP + 0xffffff6a],EAX
// 00597ebb: MOV EAX,dword ptr [EBP + 0xffffff62]
// 00597ec1: MOV dword ptr [EBP + 0xffffff6e],EAX
// 00597ec7: MOV EAX,dword ptr [EBP + 0xffffff66]
// 00597ecd: SUB ESP,0x8
// 00597ed0: MOV dword ptr [EBP + 0xffffff72],EAX
// 00597ed6: FLD float ptr [EBP + 0xffffff5e]
// 00597edc: FSTP double ptr [ESP]
// 00597edf: SUB ESP,0x8
// 00597ee2: FLD float ptr [EBP + 0xfffffeb6]
// 00597ee8: FSTP double ptr [ESP]
// 00597eeb: SUB ESP,0x8
// 00597eee: FLD float ptr [EBP + 0xfffffeaa]
// 00597ef4: FSTP double ptr [ESP]
// 00597ef7: PUSH 0x64da34
//   XREF to: 0064da34 (DATA)
// 00597efc: LEA EAX,[EBP + 0xfffffa2e]
// 00597f02: PUSH EAX
// 00597f03: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00597f08: ADD ESP,0x50
// 00597f0b: PUSH 0x0
// 00597f0d: PUSH 0x497423fe
// 00597f12: PUSH 0x38d1b717
// 00597f17: PUSH 0x1
// 00597f19: LEA EAX,[EBP + 0x52]
// 00597f1c: PUSH EAX
// 00597f1d: LEA EAX,[EBP + 0xfffffa2e]
// 00597f23: PUSH EAX
// 00597f24: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00597f2a: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 00597f2b: CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   XREF to: 004a00f0 (UNCONDITIONAL_CALL)
// 00597f30: ADD ESP,0x1c
// 00597f33: TEST EAX,EAX
// 00597f35: JZ 0x00597f54
//   XREF to: 00597f54 (CONDITIONAL_JUMP)
// 00597f37: MOV EBX,dword ptr [EBP + 0x52]
// 00597f3a: CMP EBX,0x3f800000
// 00597f40: JZ 0x00597f54
//   XREF to: 00597f54 (CONDITIONAL_JUMP)
// 00597f42: PUSH EBX
// 00597f43: PUSH EDI
// 00597f44: CALL core_skeledit.cpp_FUN_0058e3e0
//   XREF to: 0058e3e0 (UNCONDITIONAL_CALL)
// 00597f49: MOV EDI,0x1
// 00597f4e: ADD ESP,0x8
// 00597f51: MOV dword ptr [EBP + -0x6],EDI
// 00597f54: PUSH 0x21
//   Label: LAB_00597f54
// 00597f56: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00597f5b: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00597f5c: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00597f5e: CALL dword ptr [EDX + 0x4]
// 00597f61: ADD ESP,0x8
// 00597f64: TEST EAX,EAX
// 00597f66: JZ 0x00597f9e
//   XREF to: 00597f9e (CONDITIONAL_JUMP)
// 00597f68: PUSH 0x0
// 00597f6a: MOV EAX,dword ptr [EBP + 0x92]
// 00597f70: PUSH EAX
// 00597f71: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 00597f76: ADD ESP,0x4
// 00597f79: SUB ESP,0x4
// 00597f7c: FILD dword ptr [EAX + 0x64]
// 00597f7f: FSTP float ptr [ESP]
// 00597f82: PUSH 0x0
// 00597f84: PUSH 0x1
// 00597f86: MOV EDX,dword ptr [EBP + -0x36]
// 00597f89: PUSH EDX
// 00597f8a: PUSH 0x64daaa
//   XREF to: 0064daaa (DATA)
// 00597f8f: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00597f95: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 00597f96: CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   XREF to: 004a00f0 (UNCONDITIONAL_CALL)
// 00597f9b: ADD ESP,0x1c
// 00597f9e: PUSH 0x32
//   Label: LAB_00597f9e
// 00597fa0: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00597fa5: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00597fa6: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00597fa8: CALL dword ptr [EDX + 0x4]
// 00597fab: ADD ESP,0x8
// 00597fae: TEST EAX,EAX
// 00597fb0: JZ 0x005981a8
//   XREF to: 005981a8 (CONDITIONAL_JUMP)
// 00597fb6: LEA EAX,[EBP + 0xffffe78e]
// 00597fbc: MOV EDI,dword ptr [EBP + 0x92]
// 00597fc2: PUSH EAX
// 00597fc3: XOR ESI,ESI
// 00597fc5: XOR EBX,EBX
// 00597fc7: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 00597fcc: ADD ESP,0x4
// 00597fcf: PUSH EDI
//   Label: LAB_00597fcf
// 00597fd0: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 00597fd5: MOV EDX,dword ptr [EAX + 0x964]
// 00597fdb: ADD ESP,0x4
// 00597fde: CMP ESI,EDX
// 00597fe0: JGE 0x00598176
//   XREF to: 00598176 (CONDITIONAL_JUMP)
// 00597fe6: PUSH EDI
// 00597fe7: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 00597fec: ADD EAX,0x968
// 00597ff1: ADD ESP,0x4
// 00597ff4: ADD EAX,EBX
// 00597ff6: PUSH EAX
// 00597ff7: LEA EAX,[EBP + 0xffffe78e]
// 00597ffd: PUSH EAX
// 00597ffe: INC ESI
// 00597fff: ADD EBX,0x54c
// 00598005: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0059800a: ADD ESP,0x8
// 0059800d: JMP 0x00597fcf
//   XREF to: 00597fcf (UNCONDITIONAL_JUMP)
// 0059800f: PUSH 0x1d
//   Label: LAB_0059800f
// 00598011: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00598016: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00598017: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00598019: CALL dword ptr [EDX]
// 0059801b: ADD ESP,0x8
// 0059801e: TEST EAX,EAX
// 00598020: JZ 0x00597a90
//   XREF to: 00597a90 (CONDITIONAL_JUMP)
// 00598026: CMP dword ptr [EBP + -0x12],0x0
// 0059802a: JZ 0x00597a90
//   XREF to: 00597a90 (CONDITIONAL_JUMP)
// 00598030: LEA EAX,[EBP + 0xfffffe8e]
// 00598036: PUSH EAX
// 00598037: CALL core_slew.cpp_CSlew_processInput_FUN_005a20b0
//   XREF to: 005a20b0 (UNCONDITIONAL_CALL)
// 0059803c: ADD ESP,0x4
// 0059803f: LEA EAX,[EBP + 0xfffffe9a]
// 00598045: PUSH EAX
// 00598046: LEA EAX,[EBP + 0xfffffe8e]
// 0059804c: PUSH EAX
// 0059804d: LEA EAX,[EBP + 0xfffffe5e]
// 00598053: PUSH EAX
// 00598054: CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
//   XREF to: 005f5390 (UNCONDITIONAL_CALL)
// 00598059: ADD ESP,0xc
// 0059805c: LEA EAX,[EBP + 0xfffffe5e]
// 00598062: MOV ECX,dword ptr [EBP + 0x2a]
// 00598065: PUSH EAX
// 00598066: IMUL EAX,ECX,0x30
// 00598069: ADD EAX,dword ptr [EBP + 0x3a]
// 0059806c: PUSH EAX
// 0059806d: LEA ESI,[EBP + 0xfffffdfe]
// 00598073: LEA EDI,[EBP + 0xfffffe2e]
// 00598079: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 0059807e: ADD ESP,0x8
// 00598081: LEA EAX,[EBP + -0x7e]
// 00598084: MOV ECX,0xc
// 00598089: PUSH EAX
// 0059808a: LEA EAX,[EBP + 0xfffffe2e]
// 00598090: LEA ESI,[EBP + 0xfffffdfe]
// 00598096: PUSH EAX
// 00598097: MOVSD.REP ES:EDI,ESI
// 00598099: CALL core_xform.cpp_invertAndGetTranslation_FUN_005f6140
//   XREF to: 005f6140 (UNCONDITIONAL_CALL)
// 0059809e: MOV EDX,EAX
// 005980a0: LEA EAX,[EBP + 0xffffff0a]
// 005980a6: ADD ESP,0x8
// 005980a9: CMP EAX,EDX
// 005980ab: JZ 0x005980c7
//   XREF to: 005980c7 (CONDITIONAL_JUMP)
// 005980ad: MOV EAX,dword ptr [EDX]
// 005980af: MOV dword ptr [EBP + 0xffffff0a],EAX
// 005980b5: MOV EAX,dword ptr [EDX + 0x4]
// 005980b8: MOV dword ptr [EBP + 0xffffff0e],EAX
// 005980be: MOV EAX,dword ptr [EDX + 0x8]
// 005980c1: MOV dword ptr [EBP + 0xffffff12],EAX
// 005980c7: LEA EAX,[EBP + 0xfffffefe]
//   Label: LAB_005980c7
// 005980cd: PUSH EAX
// 005980ce: LEA EAX,[EBP + 0xfffffe2e]
// 005980d4: PUSH EAX
// 005980d5: CALL core_xform.cpp_matrixToEulerAnglesZYX_FUN_005f5bd0
//   XREF to: 005f5bd0 (UNCONDITIONAL_CALL)
// 005980da: MOV EDX,EAX
// 005980dc: LEA EAX,[EBP + 0xfffffef2]
// 005980e2: ADD ESP,0x8
// 005980e5: CMP EAX,EDX
// 005980e7: JZ 0x00597c1f
//   XREF to: 00597c1f (CONDITIONAL_JUMP)
// 005980ed: MOV EAX,dword ptr [EDX]
// 005980ef: MOV dword ptr [EBP + 0xfffffef2],EAX
// 005980f5: MOV EAX,dword ptr [EDX + 0x4]
// 005980f8: MOV dword ptr [EBP + 0xfffffef6],EAX
// 005980fe: MOV EAX,dword ptr [EDX + 0x8]
// 00598101: MOV dword ptr [EBP + 0xfffffefa],EAX
// 00598107: JMP 0x00597c1f
//   XREF to: 00597c1f (UNCONDITIONAL_JUMP)
// 0059810c: PUSH 0x1f
//   Label: LAB_0059810c
// 0059810e: LEA EAX,[EBP + 0xfffffd32]
// 00598114: PUSH EAX
// 00598115: CALL core_stairs.cpp_FUN_005b9670
//   XREF to: 005b9670 (UNCONDITIONAL_CALL)
// 0059811a: JMP 0x00597c1c
//   XREF to: 00597c1c (UNCONDITIONAL_JUMP)
// 0059811f: PUSH 0x1d
//   Label: LAB_0059811f
// 00598121: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00598126: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00598127: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00598129: CALL dword ptr [EDX]
// 0059812b: ADD ESP,0x8
// 0059812e: TEST EAX,EAX
// 00598130: JZ 0x00598146
//   XREF to: 00598146 (CONDITIONAL_JUMP)
// 00598132: CMP dword ptr [EBP + -0xa],0x0
// 00598136: SETZ AL
// 00598139: AND EAX,0xff
// 0059813e: MOV dword ptr [EBP + -0xa],EAX
// 00598141: JMP 0x00597cb1
//   XREF to: 00597cb1 (UNCONDITIONAL_JUMP)
// 00598146: MOV ESI,dword ptr [EBP + -0x16]
//   Label: LAB_00598146
// 00598149: INC ESI
// 0059814a: MOV dword ptr [EBP + -0x16],ESI
// 0059814d: CMP ESI,0x4
// 00598150: JLE 0x00597cb1
//   XREF to: 00597cb1 (CONDITIONAL_JUMP)
// 00598156: MOV dword ptr [EBP + -0x16],EAX
// 00598159: JMP 0x00597cb1
//   XREF to: 00597cb1 (UNCONDITIONAL_JUMP)
// 0059815e: MOV EDX,dword ptr [EBP + -0x26]
//   Label: LAB_0059815e
// 00598161: INC EDX
// 00598162: MOV EBX,0x3
// 00598167: MOV EAX,EDX
// 00598169: SAR EDX,0x1f
// 0059816c: IDIV EBX
// 0059816e: MOV dword ptr [EBP + -0x26],EDX
// 00598171: JMP 0x00597f54
//   XREF to: 00597f54 (UNCONDITIONAL_JUMP)
// 00598176: PUSH 0x0
//   Label: LAB_00598176
// 00598178: MOV ECX,dword ptr [EDI + 0x4]
// 0059817b: PUSH ECX
// 0059817c: PUSH 0x64dabd
//   XREF to: 0064dabd (DATA)
// 00598181: LEA EAX,[EBP + 0xffffe78e]
// 00598187: PUSH EAX
// 00598188: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0059818d: ADD ESP,0x10
// 00598190: TEST EAX,EAX
// 00598192: JL 0x00598197
//   XREF to: 00598197 (CONDITIONAL_JUMP)
// 00598194: MOV dword ptr [EDI + 0x4],EAX
// 00598197: PUSH 0x0
//   Label: LAB_00598197
// 00598199: LEA EAX,[EBP + 0xffffe78e]
// 0059819f: PUSH EAX
// 005981a0: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 005981a5: ADD ESP,0x8
// 005981a8: PUSH 0x14
//   Label: LAB_005981a8
// 005981aa: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005981af: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005981b0: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005981b2: CALL dword ptr [EDX + 0x4]
// 005981b5: ADD ESP,0x8
// 005981b8: TEST EAX,EAX
// 005981ba: JZ 0x00598225
//   XREF to: 00598225 (CONDITIONAL_JUMP)
// 005981bc: MOV EAX,dword ptr [EBP + 0x92]
// 005981c2: PUSH EAX
// 005981c3: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 005981c8: FLD float ptr [EAX + 0x38]
// 005981cb: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005981d0: FISTP dword ptr [EBP + 0x56]
// 005981d3: IMUL ESI,dword ptr [EAX + 0x34],0x54c
// 005981da: ADD ESP,0x4
// 005981dd: MOV ECX,dword ptr [EBP + 0x92]
// 005981e3: PUSH ECX
// 005981e4: MOV EBX,EAX
// 005981e6: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 005981eb: ADD ESP,0x4
// 005981ee: MOV EAX,dword ptr [ESI + EAX*0x1 + 0x9cc]
// 005981f5: PUSH 0x1
// 005981f7: DEC EAX
// 005981f8: PUSH EAX
// 005981f9: PUSH 0x0
// 005981fb: PUSH 0x1
// 005981fd: LEA EAX,[EBP + 0x56]
// 00598200: PUSH EAX
// 00598201: PUSH 0x64dacb
//   XREF to: 0064dacb (DATA)
// 00598206: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0059820c: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 0059820d: CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020
//   XREF to: 004a0020 (UNCONDITIONAL_CALL)
// 00598212: ADD ESP,0x1c
// 00598215: TEST EAX,EAX
// 00598217: JZ 0x00598225
//   XREF to: 00598225 (CONDITIONAL_JUMP)
// 00598219: MOV EAX,dword ptr [EBP + 0x56]
// 0059821c: MOV dword ptr [EBP + 0x76],EAX
// 0059821f: FILD dword ptr [EBP + 0x76]
// 00598222: FSTP float ptr [EBX + 0x38]
// 00598225: PUSH 0x2d
//   Label: LAB_00598225
// 00598227: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0059822c: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0059822d: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0059822f: CALL dword ptr [EDX + 0x4]
// 00598232: ADD ESP,0x8
// 00598235: TEST EAX,EAX
// 00598237: JZ 0x00598259
//   XREF to: 00598259 (CONDITIONAL_JUMP)
// 00598239: PUSH 0x1
// 0059823b: PUSH 0x4
// 0059823d: PUSH 0x0
// 0059823f: PUSH 0x1
// 00598241: LEA EAX,[EBP + -0x1e]
// 00598244: PUSH EAX
// 00598245: PUSH 0x64daee
//   XREF to: 0064daee (DATA)
// 0059824a: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00598250: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 00598251: CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020
//   XREF to: 004a0020 (UNCONDITIONAL_CALL)
// 00598256: ADD ESP,0x1c
// 00598259: PUSH 0x20
//   Label: LAB_00598259
// 0059825b: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00598260: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00598261: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00598263: CALL dword ptr [EDX + 0x4]
// 00598266: ADD ESP,0x8
// 00598269: TEST EAX,EAX
// 0059826b: JZ 0x005982b5
//   XREF to: 005982b5 (CONDITIONAL_JUMP)
// 0059826d: MOV EAX,dword ptr [EBP + 0x92]
// 00598273: PUSH EAX
// 00598274: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 00598279: MOV EBX,dword ptr [EAX]
// 0059827b: ADD ESP,0x4
// 0059827e: DEC EBX
// 0059827f: PUSH EBX
// 00598280: PUSH 0x64db01
//   XREF to: 0064db01 (DATA)
// 00598285: LEA EAX,[EBP + 0xfffffb5a]
// 0059828b: PUSH EAX
// 0059828c: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00598291: ADD ESP,0xc
// 00598294: PUSH 0x1
// 00598296: PUSH EBX
// 00598297: PUSH -0x1
// 00598299: PUSH 0x1
// 0059829b: LEA EAX,[EBP + -0x22]
// 0059829e: PUSH EAX
// 0059829f: LEA EAX,[EBP + 0xfffffb5a]
// 005982a5: PUSH EAX
// 005982a6: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005982ac: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 005982ad: CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020
//   XREF to: 004a0020 (UNCONDITIONAL_CALL)
// 005982b2: ADD ESP,0x1c
// 005982b5: PUSH 0x23
//   Label: LAB_005982b5
// 005982b7: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005982bc: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005982bd: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005982bf: CALL dword ptr [EDX + 0x4]
// 005982c2: ADD ESP,0x8
// 005982c5: TEST EAX,EAX
// 005982c7: JZ 0x005982d8
//   XREF to: 005982d8 (CONDITIONAL_JUMP)
// 005982c9: CMP dword ptr [EBP + -0x1a],0x0
// 005982cd: SETZ AL
// 005982d0: AND EAX,0xff
// 005982d5: MOV dword ptr [EBP + -0x1a],EAX
// 005982d8: PUSH 0x2c
//   Label: LAB_005982d8
// 005982da: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005982df: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005982e0: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005982e2: CALL dword ptr [EDX + 0x4]
// 005982e5: ADD ESP,0x8
// 005982e8: TEST EAX,EAX
// 005982ea: JZ 0x0059838c
//   XREF to: 0059838c (CONDITIONAL_JUMP)
// 005982f0: LEA EAX,[EBP + 0xffffeb36]
// 005982f6: PUSH EAX
// 005982f7: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 005982fc: MOV EAX,dword ptr [EBP + -0x2e]
// 005982ff: XOR EBX,EBX
// 00598301: MOV ESI,dword ptr [EAX + 0x28558]
// 00598307: ADD ESP,0x4
// 0059830a: TEST ESI,ESI
// 0059830c: JLE 0x00598363
//   XREF to: 00598363 (CONDITIONAL_JUMP)
// 0059830e: MOV ESI,dword ptr [EBP + 0x5e]
// 00598311: MOV EDI,dword ptr [EBP + -0x32]
// 00598314: PUSH EBX
//   Label: LAB_00598314
// 00598315: PUSH EDI
// 00598316: CALL core_skeleton.cpp_CDeformableModel_getBonePart_FUN_0059c2d0
//   XREF to: 0059c2d0 (UNCONDITIONAL_CALL)
// 0059831b: IMUL EAX,EAX,0x60
// 0059831e: MOV EDX,dword ptr [EBP + 0x5a]
// 00598321: ADD ESP,0x8
// 00598324: ADD EAX,EDX
// 00598326: PUSH EAX
// 00598327: PUSH ESI
// 00598328: PUSH 0x64db28
//   XREF to: 0064db28 (DATA)
// 0059832d: LEA EAX,[EBP + 0xfffffc22]
// 00598333: PUSH EAX
// 00598334: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00598339: ADD ESP,0x10
// 0059833c: LEA EAX,[EBP + 0xfffffc22]
// 00598342: PUSH EAX
// 00598343: LEA EAX,[EBP + 0xffffeb36]
// 00598349: PUSH EAX
// 0059834a: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0059834f: MOV EAX,dword ptr [EBP + -0x2e]
// 00598352: INC EBX
// 00598353: ADD ESI,0x24
// 00598356: MOV ECX,dword ptr [EAX + 0x28558]
// 0059835c: ADD ESP,0x8
// 0059835f: CMP EBX,ECX
// 00598361: JL 0x00598314
//   XREF to: 00598314 (CONDITIONAL_JUMP)
// 00598363: PUSH 0x0
//   Label: LAB_00598363
// 00598365: PUSH -0x1
// 00598367: PUSH 0x64db2e
//   XREF to: 0064db2e (DATA)
// 0059836c: LEA EAX,[EBP + 0xffffeb36]
// 00598372: PUSH EAX
// 00598373: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 00598378: ADD ESP,0x10
// 0059837b: PUSH 0x0
// 0059837d: LEA EAX,[EBP + 0xffffeb36]
// 00598383: PUSH EAX
// 00598384: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00598389: ADD ESP,0x8
// 0059838c: PUSH 0xf
//   Label: LAB_0059838c
// 0059838e: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00598393: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00598394: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00598396: CALL dword ptr [EDX + 0x4]
// 00598399: ADD ESP,0x8
// 0059839c: TEST EAX,EAX
// 0059839e: JZ 0x005983ba
//   XREF to: 005983ba (CONDITIONAL_JUMP)
// 005983a0: PUSH 0x2a
// 005983a2: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005983a7: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005983a8: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005983aa: CALL dword ptr [EDX]
// 005983ac: ADD ESP,0x8
// 005983af: TEST EAX,EAX
// 005983b1: JZ 0x005986da
//   XREF to: 005986da (CONDITIONAL_JUMP)
// 005983b7: DEC dword ptr [EBP + 0x4a]
// 005983ba: PUSH 0x17
//   Label: LAB_005983ba
// 005983bc: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005983c1: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005983c2: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005983c4: CALL dword ptr [EDX + 0x4]
// 005983c7: ADD ESP,0x8
// 005983ca: TEST EAX,EAX
// 005983cc: JZ 0x00598854
//   XREF to: 00598854 (CONDITIONAL_JUMP)
// 005983d2: XOR EDI,EDI
//   Label: LAB_005983d2
// 005983d4: MOV EAX,[0x03666084]
//   XREF to: 03666084 (READ)
// 005983d9: MOV dword ptr [EBP + 0x62],EDI
// 005983dc: CMP EAX,0x1
// 005983df: JGE 0x005986e2
//   XREF to: 005986e2 (CONDITIONAL_JUMP)
// 005983e5: MOV EBX,dword ptr [EBP + 0x62]
//   Label: LAB_005983e5
// 005983e8: TEST EBX,EBX
// 005983ea: JL 0x00598854
//   XREF to: 00598854 (CONDITIONAL_JUMP)
// 005983f0: JNZ 0x00598434
//   XREF to: 00598434 (CONDITIONAL_JUMP)
// 005983f2: PUSH EBX
// 005983f3: LEA EAX,[EBP + 0xfffffc86]
// 005983f9: PUSH EAX
// 005983fa: PUSH 0x64dbe2
//   XREF to: 0064dbe2 (DATA)
// 005983ff: PUSH 0x64dbe8
//   XREF to: 0064dbe8 (DATA)
// 00598404: PUSH 0x64dbef
//   XREF to: 0064dbef (DATA)
// 00598409: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0059840f: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 00598410: CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   XREF to: 0049f270 (UNCONDITIONAL_CALL)
// 00598415: ADD ESP,0x18
// 00598418: TEST EAX,EAX
// 0059841a: JZ 0x00598847
//   XREF to: 00598847 (CONDITIONAL_JUMP)
// 00598420: LEA EAX,[EBP + 0xfffffc86]
// 00598426: PUSH EAX
// 00598427: PUSH 0x3665f74
//   XREF to: 03665f74 (DATA)
// 0059842c: CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0
//   XREF to: 00476db0 (UNCONDITIONAL_CALL)
// 00598431: ADD ESP,0x8
// 00598434: CMP dword ptr [EBP + 0x62],0x1
//   Label: LAB_00598434
// 00598438: JNZ 0x005984b0
//   XREF to: 005984b0 (CONDITIONAL_JUMP)
// 0059843e: LEA EAX,[EBP + 0xffffeede]
// 00598444: PUSH EAX
// 00598445: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0059844a: MOV EAX,dword ptr [EBP + -0x2e]
// 0059844d: XOR EBX,EBX
// 0059844f: MOV ECX,dword ptr [EAX + 0x28558]
// 00598455: ADD ESP,0x4
// 00598458: TEST ECX,ECX
// 0059845a: JLE 0x00598480
//   XREF to: 00598480 (CONDITIONAL_JUMP)
// 0059845c: MOV ESI,dword ptr [EBP + 0x66]
// 0059845f: PUSH ESI
//   Label: LAB_0059845f
// 00598460: LEA EAX,[EBP + 0xffffeede]
// 00598466: PUSH EAX
// 00598467: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0059846c: MOV EAX,dword ptr [EBP + -0x2e]
// 0059846f: INC EBX
// 00598470: ADD ESI,0x24
// 00598473: MOV EDI,dword ptr [EAX + 0x28558]
// 00598479: ADD ESP,0x8
// 0059847c: CMP EBX,EDI
// 0059847e: JL 0x0059845f
//   XREF to: 0059845f (CONDITIONAL_JUMP)
// 00598480: PUSH 0x0
//   Label: LAB_00598480
// 00598482: PUSH -0x1
// 00598484: PUSH 0x64dc08
//   XREF to: 0064dc08 (DATA)
// 00598489: LEA EAX,[EBP + 0xffffeede]
// 0059848f: PUSH EAX
// 00598490: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 00598495: ADD ESP,0x10
// 00598498: TEST EAX,EAX
// 0059849a: JL 0x0059849f
//   XREF to: 0059849f (CONDITIONAL_JUMP)
// 0059849c: MOV dword ptr [EBP + 0x2a],EAX
// 0059849f: PUSH 0x0
//   Label: LAB_0059849f
// 005984a1: LEA EAX,[EBP + 0xffffeede]
// 005984a7: PUSH EAX
// 005984a8: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 005984ad: ADD ESP,0x8
// 005984b0: CMP dword ptr [EBP + 0x62],0x2
//   Label: LAB_005984b0
// 005984b4: JNZ 0x005984d3
//   XREF to: 005984d3 (CONDITIONAL_JUMP)
// 005984b6: PUSH 0x1
// 005984b8: LEA EAX,[EBP + 0xffffff0a]
// 005984be: PUSH EAX
// 005984bf: PUSH 0x64dc14
//   XREF to: 0064dc14 (DATA)
// 005984c4: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005984ca: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 005984cb: CALL shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_004a0300
//   XREF to: 004a0300 (UNCONDITIONAL_CALL)
// 005984d0: ADD ESP,0x10
// 005984d3: CMP dword ptr [EBP + 0x62],0x3
//   Label: LAB_005984d3
// 005984d7: JNZ 0x00598532
//   XREF to: 00598532 (CONDITIONAL_JUMP)
// 005984d9: MOV EAX,dword ptr [EBP + 0xfffffefa]
// 005984df: MOV dword ptr [EBP + 0x6a],EAX
// 005984e2: MOV EAX,dword ptr [EBP + 0xfffffef6]
// 005984e8: MOV dword ptr [EBP + 0xfffffefa],EAX
// 005984ee: MOV EAX,dword ptr [EBP + 0x6a]
// 005984f1: PUSH 0x1
// 005984f3: MOV dword ptr [EBP + 0xfffffef6],EAX
// 005984f9: LEA EAX,[EBP + 0xfffffef2]
// 005984ff: PUSH EAX
// 00598500: PUSH 0x64dc22
//   XREF to: 0064dc22 (DATA)
// 00598505: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0059850b: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 0059850c: CALL shape_edittool.cpp_CEditorTools_promptForValidVector_FUN_004a0300
//   XREF to: 004a0300 (UNCONDITIONAL_CALL)
// 00598511: MOV EAX,dword ptr [EBP + 0xfffffefa]
// 00598517: MOV dword ptr [EBP + 0x6e],EAX
// 0059851a: MOV EAX,dword ptr [EBP + 0xfffffef6]
// 00598520: MOV dword ptr [EBP + 0xfffffefa],EAX
// 00598526: MOV EAX,dword ptr [EBP + 0x6e]
// 00598529: ADD ESP,0x10
// 0059852c: MOV dword ptr [EBP + 0xfffffef6],EAX
// 00598532: CMP dword ptr [EBP + 0x62],0x4
//   Label: LAB_00598532
// 00598536: JNZ 0x0059863f
//   XREF to: 0059863f (CONDITIONAL_JUMP)
// 0059853c: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00598542: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 00598543: XOR ESI,ESI
// 00598545: CALL shape_edittool.cpp_CEditorTools_getClipboardText_FUN_004a1b30
//   XREF to: 004a1b30 (UNCONDITIONAL_CALL)
// 0059854a: ADD ESP,0x4
// 0059854d: MOV CH,byte ptr [EAX]
// 0059854f: MOV EBX,EAX
// 00598551: TEST CH,CH
// 00598553: JZ 0x0059858e
//   XREF to: 0059858e (CONDITIONAL_JUMP)
// 00598555: LEA EDI,[EBP + 0xfffffec2]
// 0059855b: XOR EAX,EAX
//   Label: LAB_0059855b
// 0059855d: MOV dword ptr [EBP + 0x72],EAX
// 00598560: LEA EAX,[EBP + 0x72]
// 00598563: PUSH EAX
// 00598564: PUSH EDI
// 00598565: PUSH 0x64dc3b
//   XREF to: 0064dc3b (DATA)
// 0059856a: PUSH EBX
// 0059856b: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 00598570: MOV EDX,dword ptr [EBP + 0x72]
// 00598573: ADD ESP,0x10
// 00598576: TEST EDX,EDX
// 00598578: JLE 0x00598e00
//   XREF to: 00598e00 (CONDITIONAL_JUMP)
// 0059857e: ADD EDI,0x4
// 00598581: INC ESI
// 00598582: ADD EBX,EDX
// 00598584: CMP ESI,0x6
//   Label: LAB_00598584
// 00598587: JGE 0x0059858e
//   XREF to: 0059858e (CONDITIONAL_JUMP)
// 00598589: CMP byte ptr [EBX],0x0
// 0059858c: JNZ 0x0059855b
//   XREF to: 0059855b (CONDITIONAL_JUMP)
// 0059858e: CMP ESI,0x6
//   Label: LAB_0059858e
// 00598591: JNZ 0x00598e06
//   XREF to: 00598e06 (CONDITIONAL_JUMP)
// 00598597: SUB ESP,0x8
// 0059859a: FLD float ptr [EBP + 0xfffffed6]
// 005985a0: FSTP double ptr [ESP]
// 005985a3: SUB ESP,0x8
// 005985a6: FLD float ptr [EBP + 0xfffffed2]
// 005985ac: FSTP double ptr [ESP]
// 005985af: SUB ESP,0x8
// 005985b2: FLD float ptr [EBP + 0xfffffece]
// 005985b8: FSTP double ptr [ESP]
// 005985bb: SUB ESP,0x8
// 005985be: FLD float ptr [EBP + 0xfffffeca]
// 005985c4: FSTP double ptr [ESP]
// 005985c7: SUB ESP,0x8
// 005985ca: FLD float ptr [EBP + 0xfffffec6]
// 005985d0: FSTP double ptr [ESP]
// 005985d3: SUB ESP,0x8
// 005985d6: FLD float ptr [EBP + 0xfffffec2]
// 005985dc: FSTP double ptr [ESP]
// 005985df: PUSH 0x64dc40
//   XREF to: 0064dc40 (DATA)
// 005985e4: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005985ea: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 005985eb: CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   XREF to: 0049f060 (UNCONDITIONAL_CALL)
// 005985f0: ADD ESP,0x38
// 005985f3: TEST EAX,EAX
// 005985f5: JZ 0x0059863f
//   XREF to: 0059863f (CONDITIONAL_JUMP)
// 005985f7: MOV EAX,dword ptr [EBP + 0xfffffec2]
// 005985fd: MOV dword ptr [EBP + 0xffffff0a],EAX
// 00598603: MOV EAX,dword ptr [EBP + 0xfffffec6]
// 00598609: MOV dword ptr [EBP + 0xffffff0e],EAX
// 0059860f: MOV EAX,dword ptr [EBP + 0xfffffeca]
// 00598615: MOV dword ptr [EBP + 0xffffff12],EAX
// 0059861b: MOV EAX,dword ptr [EBP + 0xfffffece]
// 00598621: MOV dword ptr [EBP + 0xfffffef2],EAX
// 00598627: MOV EAX,dword ptr [EBP + 0xfffffed2]
// 0059862d: MOV dword ptr [EBP + 0xfffffefa],EAX
// 00598633: MOV EAX,dword ptr [EBP + 0xfffffed6]
// 00598639: MOV dword ptr [EBP + 0xfffffef6],EAX
// 0059863f: CMP dword ptr [EBP + 0x62],0x5
//   Label: LAB_0059863f
// 00598643: JNZ 0x005983d2
//   XREF to: 005983d2 (CONDITIONAL_JUMP)
// 00598649: SUB ESP,0x8
// 0059864c: FLD float ptr [EBP + 0xfffffef6]
// 00598652: FSTP double ptr [ESP]
// 00598655: SUB ESP,0x8
// 00598658: FLD float ptr [EBP + 0xfffffefa]
// 0059865e: FSTP double ptr [ESP]
// 00598661: SUB ESP,0x8
// 00598664: FLD float ptr [EBP + 0xfffffef2]
// 0059866a: FSTP double ptr [ESP]
// 0059866d: SUB ESP,0x8
// 00598670: FLD float ptr [EBP + 0xffffff12]
// 00598676: FSTP double ptr [ESP]
// 00598679: SUB ESP,0x8
// 0059867c: FLD float ptr [EBP + 0xffffff0e]
// 00598682: FSTP double ptr [ESP]
// 00598685: SUB ESP,0x8
// 00598688: FLD float ptr [EBP + 0xffffff0a]
// 0059868e: FSTP double ptr [ESP]
// 00598691: PUSH 0x64dc99
//   XREF to: 0064dc99 (DATA)
// 00598696: LEA EAX,[EBP + 0xfffffc22]
// 0059869c: PUSH EAX
// 0059869d: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005986a2: ADD ESP,0x38
// 005986a5: LEA EAX,[EBP + 0xfffffc22]
// 005986ab: PUSH EAX
// 005986ac: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 005986b1: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 005986b2: CALL shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0
//   XREF to: 004a1bc0 (UNCONDITIONAL_CALL)
// 005986b7: ADD ESP,0x8
// 005986ba: LEA EAX,[EBP + 0xfffffc22]
// 005986c0: PUSH EAX
// 005986c1: PUSH 0x64dcbe
//   XREF to: 0064dcbe (DATA)
// 005986c6: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005986cc: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 005986cd: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 005986d2: ADD ESP,0xc
// 005986d5: JMP 0x005983d2
//   XREF to: 005983d2 (UNCONDITIONAL_JUMP)
// 005986da: INC dword ptr [EBP + 0x4a]
//   Label: LAB_005986da
// 005986dd: JMP 0x005983ba
//   XREF to: 005983ba (UNCONDITIONAL_JUMP)
// 005986e2: LEA EAX,[EBP + 0xfffff286]
//   Label: LAB_005986e2
// 005986e8: PUSH EAX
// 005986e9: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 005986ee: ADD ESP,0x4
// 005986f1: PUSH 0x3665f74
//   XREF to: 03665f74 (DATA)
// 005986f6: PUSH 0x64db41
//   XREF to: 0064db41 (DATA)
// 005986fb: LEA EAX,[EBP + 0xfffffc22]
// 00598701: PUSH EAX
// 00598702: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00598707: ADD ESP,0xc
// 0059870a: LEA EAX,[EBP + 0xfffffc22]
// 00598710: PUSH EAX
// 00598711: LEA EAX,[EBP + 0xfffff286]
// 00598717: PUSH EAX
// 00598718: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0059871d: IMUL EAX,dword ptr [EBP + 0x2a],0x24
// 00598721: MOV ECX,dword ptr [EBP + 0x66]
// 00598724: ADD ESP,0x8
// 00598727: ADD EAX,ECX
// 00598729: PUSH EAX
// 0059872a: PUSH 0x64db4b
//   XREF to: 0064db4b (DATA)
// 0059872f: LEA EAX,[EBP + 0xfffffc22]
// 00598735: PUSH EAX
// 00598736: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0059873b: ADD ESP,0xc
// 0059873e: LEA EAX,[EBP + 0xfffffc22]
// 00598744: PUSH EAX
// 00598745: LEA EAX,[EBP + 0xfffff286]
// 0059874b: PUSH EAX
// 0059874c: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00598751: ADD ESP,0x8
// 00598754: SUB ESP,0x8
// 00598757: FLD float ptr [EBP + 0xffffff12]
// 0059875d: FSTP double ptr [ESP]
// 00598760: SUB ESP,0x8
// 00598763: FLD float ptr [EBP + 0xffffff0e]
// 00598769: FSTP double ptr [ESP]
// 0059876c: SUB ESP,0x8
// 0059876f: FLD float ptr [EBP + 0xffffff0a]
// 00598775: FSTP double ptr [ESP]
// 00598778: PUSH 0x64db54
//   XREF to: 0064db54 (DATA)
// 0059877d: LEA EAX,[EBP + 0xfffffc22]
// 00598783: PUSH EAX
// 00598784: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00598789: ADD ESP,0x20
// 0059878c: LEA EAX,[EBP + 0xfffffc22]
// 00598792: PUSH EAX
// 00598793: LEA EAX,[EBP + 0xfffff286]
// 00598799: PUSH EAX
// 0059879a: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0059879f: ADD ESP,0x8
// 005987a2: SUB ESP,0x8
// 005987a5: FLD float ptr [EBP + 0xfffffef6]
// 005987ab: FSTP double ptr [ESP]
// 005987ae: SUB ESP,0x8
// 005987b1: FLD float ptr [EBP + 0xfffffefa]
// 005987b7: FSTP double ptr [ESP]
// 005987ba: SUB ESP,0x8
// 005987bd: FLD float ptr [EBP + 0xfffffef2]
// 005987c3: FSTP double ptr [ESP]
// 005987c6: PUSH 0x64db6b
//   XREF to: 0064db6b (DATA)
// 005987cb: LEA EAX,[EBP + 0xfffffc22]
// 005987d1: PUSH EAX
// 005987d2: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005987d7: ADD ESP,0x20
// 005987da: LEA EAX,[EBP + 0xfffffc22]
// 005987e0: PUSH EAX
// 005987e1: LEA EAX,[EBP + 0xfffff286]
// 005987e7: PUSH EAX
// 005987e8: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005987ed: ADD ESP,0x8
// 005987f0: PUSH 0x64db85
//   XREF to: 0064db85 (DATA)
// 005987f5: LEA EAX,[EBP + 0xfffff286]
// 005987fb: PUSH EAX
// 005987fc: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00598801: ADD ESP,0x8
// 00598804: PUSH 0x64dbaf
//   XREF to: 0064dbaf (DATA)
// 00598809: LEA EAX,[EBP + 0xfffff286]
// 0059880f: PUSH EAX
// 00598810: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 00598815: ADD ESP,0x8
// 00598818: PUSH EDI
// 00598819: PUSH -0x1
// 0059881b: PUSH 0x64dbd6
//   XREF to: 0064dbd6 (DATA)
// 00598820: LEA EAX,[EBP + 0xfffff286]
// 00598826: PUSH EAX
// 00598827: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0059882c: ADD ESP,0x10
// 0059882f: PUSH EDI
// 00598830: MOV dword ptr [EBP + 0x62],EAX
// 00598833: LEA EAX,[EBP + 0xfffff286]
// 00598839: PUSH EAX
// 0059883a: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0059883f: ADD ESP,0x8
// 00598842: JMP 0x005983e5
//   XREF to: 005983e5 (UNCONDITIONAL_JUMP)
// 00598847: CMP dword ptr [0x03666084],0x1
//   Label: LAB_00598847
//   XREF to: 03666084 (READ)
// 0059884e: JGE 0x00598434
//   XREF to: 00598434 (CONDITIONAL_JUMP)
// 00598854: PUSH 0x12
//   Label: LAB_00598854
// 00598856: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0059885b: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0059885c: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0059885e: CALL dword ptr [EDX + 0x4]
// 00598861: ADD ESP,0x8
// 00598864: TEST EAX,EAX
// 00598866: JZ 0x005988fd
//   XREF to: 005988fd (CONDITIONAL_JUMP)
// 0059886c: PUSH 0x0
// 0059886e: PUSH 0x64
// 00598870: LEA EAX,[EBP + 0xfffffbbe]
// 00598876: PUSH EAX
// 00598877: PUSH 0x64dcdc
//   XREF to: 0064dcdc (DATA)
// 0059887c: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00598882: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 00598883: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 00598888: ADD ESP,0x14
// 0059888b: TEST EAX,EAX
// 0059888d: JZ 0x005988fd
//   XREF to: 005988fd (CONDITIONAL_JUMP)
// 0059888f: LEA EAX,[EBP + 0xfffff92e]
// 00598895: PUSH EAX
// 00598896: LEA EAX,[EBP + 0xfffff72e]
// 0059889c: PUSH EAX
// 0059889d: LEA EAX,[EBP + 0xfffff62e]
// 005988a3: PUSH EAX
// 005988a4: LEA EAX,[EBP + 0x7a]
// 005988a7: PUSH EAX
// 005988a8: LEA EAX,[EBP + 0xfffffbbe]
// 005988ae: PUSH EAX
// 005988af: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 005988b4: MOV AH,byte ptr [EBP + 0xfffff92e]
// 005988ba: ADD ESP,0x14
// 005988bd: TEST AH,AH
// 005988bf: JNZ 0x005988e7
//   XREF to: 005988e7 (CONDITIONAL_JUMP)
// 005988c1: PUSH 0x64dcfe
//   XREF to: 0064dcfe (DATA)
// 005988c6: LEA EAX,[EBP + 0xfffff72e]
// 005988cc: PUSH EAX
// 005988cd: LEA EAX,[EBP + 0xfffff62e]
// 005988d3: PUSH EAX
// 005988d4: LEA EAX,[EBP + 0x7a]
// 005988d7: PUSH EAX
// 005988d8: LEA EAX,[EBP + 0xfffffbbe]
// 005988de: PUSH EAX
// 005988df: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 005988e4: ADD ESP,0x14
// 005988e7: LEA EAX,[EBP + 0xfffffbbe]
//   Label: LAB_005988e7
// 005988ed: PUSH EAX
// 005988ee: MOV EBX,dword ptr [EBP + 0x92]
// 005988f4: PUSH EBX
// 005988f5: CALL core_skeledit.cpp_CDeformableModelInstance_exportModelToS3D_FUN_00598ee0
//   XREF to: 00598ee0 (UNCONDITIONAL_CALL)
// 005988fa: ADD ESP,0x8
// 005988fd: PUSH 0x13
//   Label: LAB_005988fd
// 005988ff: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00598904: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00598905: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00598907: CALL dword ptr [EDX + 0x4]
// 0059890a: ADD ESP,0x8
// 0059890d: TEST EAX,EAX
// 0059890f: JZ 0x00598944
//   XREF to: 00598944 (CONDITIONAL_JUMP)
// 00598911: PUSH 0x2a
// 00598913: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00598918: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00598919: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0059891b: CALL dword ptr [EDX]
// 0059891d: ADD ESP,0x8
// 00598920: TEST EAX,EAX
// 00598922: JZ 0x00598e1f
//   XREF to: 00598e1f (CONDITIONAL_JUMP)
// 00598928: PUSH 0x36644d8
//   XREF to: 036644d8 (DATA)
// 0059892d: MOV EDX,dword ptr [EBP + 0x92]
// 00598933: PUSH EDX
// 00598934: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510
//   XREF to: 005a1510 (UNCONDITIONAL_CALL)
// 00598939: MOV ECX,0x1
// 0059893e: ADD ESP,0x8
// 00598941: MOV dword ptr [EBP + 0x6],ECX
// 00598944: PUSH 0x3b
//   Label: LAB_00598944
// 00598946: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0059894b: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0059894c: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0059894e: CALL dword ptr [EDX + 0x4]
// 00598951: ADD ESP,0x8
// 00598954: TEST EAX,EAX
// 00598956: JZ 0x00598ded
//   XREF to: 00598ded (CONDITIONAL_JUMP)
// 0059895c: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00598961: PUSH 0xb
// 00598963: PUSH 0x7
// 00598965: PUSH 0x64dd57
//   XREF to: 0064dd57 (DATA)
// 0059896a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0059896f: ADD ESP,0xc
// 00598972: PUSH 0xb
// 00598974: PUSH 0x69
// 00598976: PUSH 0x64dd49
//   XREF to: 0064dd49 (DATA)
// 0059897b: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598980: ADD ESP,0xc
// 00598983: PUSH 0x16
// 00598985: PUSH 0x7
// 00598987: PUSH 0x64dd6d
//   XREF to: 0064dd6d (DATA)
// 0059898c: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598991: ADD ESP,0xc
// 00598994: PUSH 0x16
// 00598996: PUSH 0x69
// 00598998: PUSH 0x64dd59
//   XREF to: 0064dd59 (DATA)
// 0059899d: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005989a2: ADD ESP,0xc
// 005989a5: PUSH 0x21
// 005989a7: PUSH 0x7
// 005989a9: PUSH 0x64dd8a
//   XREF to: 0064dd8a (DATA)
// 005989ae: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005989b3: ADD ESP,0xc
// 005989b6: PUSH 0x21
// 005989b8: PUSH 0x69
// 005989ba: PUSH 0x64dd6f
//   XREF to: 0064dd6f (DATA)
// 005989bf: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005989c4: ADD ESP,0xc
// 005989c7: PUSH 0x2c
// 005989c9: PUSH 0x7
// 005989cb: PUSH 0x64ddaa
//   XREF to: 0064ddaa (DATA)
// 005989d0: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005989d5: ADD ESP,0xc
// 005989d8: PUSH 0x2c
// 005989da: PUSH 0x69
// 005989dc: PUSH 0x64dd8c
//   XREF to: 0064dd8c (DATA)
// 005989e1: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005989e6: ADD ESP,0xc
// 005989e9: PUSH 0x37
// 005989eb: PUSH 0x7
// 005989ed: PUSH 0x64ddb9
//   XREF to: 0064ddb9 (DATA)
// 005989f2: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005989f7: ADD ESP,0xc
// 005989fa: PUSH 0x37
// 005989fc: PUSH 0x69
// 005989fe: PUSH 0x64ddac
//   XREF to: 0064ddac (DATA)
// 00598a03: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598a08: ADD ESP,0xc
// 00598a0b: PUSH 0x42
// 00598a0d: PUSH 0x7
// 00598a0f: PUSH 0x64ddc6
//   XREF to: 0064ddc6 (DATA)
// 00598a14: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598a19: ADD ESP,0xc
// 00598a1c: PUSH 0x42
// 00598a1e: PUSH 0x69
// 00598a20: PUSH 0x64ddbb
//   XREF to: 0064ddbb (DATA)
// 00598a25: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598a2a: ADD ESP,0xc
// 00598a2d: PUSH 0x4d
// 00598a2f: PUSH 0x7
// 00598a31: PUSH 0x64dddb
//   XREF to: 0064dddb (DATA)
// 00598a36: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598a3b: ADD ESP,0xc
// 00598a3e: PUSH 0x4d
// 00598a40: PUSH 0x69
// 00598a42: PUSH 0x64ddc8
//   XREF to: 0064ddc8 (DATA)
// 00598a47: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598a4c: ADD ESP,0xc
// 00598a4f: PUSH 0x58
// 00598a51: PUSH 0x7
// 00598a53: PUSH 0x64ddee
//   XREF to: 0064ddee (DATA)
// 00598a58: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598a5d: ADD ESP,0xc
// 00598a60: PUSH 0x58
// 00598a62: PUSH 0x69
// 00598a64: PUSH 0x64dddd
//   XREF to: 0064dddd (DATA)
// 00598a69: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598a6e: ADD ESP,0xc
// 00598a71: PUSH 0x63
// 00598a73: PUSH 0x7
// 00598a75: PUSH 0x64de06
//   XREF to: 0064de06 (DATA)
// 00598a7a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598a7f: ADD ESP,0xc
// 00598a82: PUSH 0x63
// 00598a84: PUSH 0x69
// 00598a86: PUSH 0x64ddf0
//   XREF to: 0064ddf0 (DATA)
// 00598a8b: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598a90: ADD ESP,0xc
// 00598a93: PUSH 0x6e
// 00598a95: PUSH 0x7
// 00598a97: PUSH 0x64de2e
//   XREF to: 0064de2e (DATA)
// 00598a9c: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598aa1: ADD ESP,0xc
// 00598aa4: PUSH 0x6e
// 00598aa6: PUSH 0x69
// 00598aa8: PUSH 0x64de08
//   XREF to: 0064de08 (DATA)
// 00598aad: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598ab2: ADD ESP,0xc
// 00598ab5: PUSH 0x79
// 00598ab7: PUSH 0x7
// 00598ab9: PUSH 0x64de4b
//   XREF to: 0064de4b (DATA)
// 00598abe: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598ac3: ADD ESP,0xc
// 00598ac6: PUSH 0x79
// 00598ac8: PUSH 0x69
// 00598aca: PUSH 0x64de30
//   XREF to: 0064de30 (DATA)
// 00598acf: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598ad4: ADD ESP,0xc
// 00598ad7: PUSH 0x84
// 00598adc: PUSH 0x7
// 00598ade: PUSH 0x64de69
//   XREF to: 0064de69 (DATA)
// 00598ae3: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598ae8: ADD ESP,0xc
// 00598aeb: PUSH 0x84
// 00598af0: PUSH 0x69
// 00598af2: PUSH 0x64de52
//   XREF to: 0064de52 (DATA)
// 00598af7: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598afc: ADD ESP,0xc
// 00598aff: PUSH 0x8f
// 00598b04: PUSH 0x7
// 00598b06: PUSH 0x64de87
//   XREF to: 0064de87 (DATA)
// 00598b0b: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598b10: ADD ESP,0xc
// 00598b13: PUSH 0x8f
// 00598b18: PUSH 0x69
// 00598b1a: PUSH 0x64de71
//   XREF to: 0064de71 (DATA)
// 00598b1f: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598b24: ADD ESP,0xc
// 00598b27: PUSH 0x9a
// 00598b2c: PUSH 0x7
// 00598b2e: PUSH 0x64de9f
//   XREF to: 0064de9f (DATA)
// 00598b33: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598b38: ADD ESP,0xc
// 00598b3b: PUSH 0x9a
// 00598b40: PUSH 0x69
// 00598b42: PUSH 0x64de89
//   XREF to: 0064de89 (DATA)
// 00598b47: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598b4c: ADD ESP,0xc
// 00598b4f: PUSH 0xa5
// 00598b54: PUSH 0x7
// 00598b56: PUSH 0x64deb3
//   XREF to: 0064deb3 (DATA)
// 00598b5b: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598b60: ADD ESP,0xc
// 00598b63: PUSH 0xa5
// 00598b68: PUSH 0x69
// 00598b6a: PUSH 0x64dea7
//   XREF to: 0064dea7 (DATA)
// 00598b6f: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598b74: ADD ESP,0xc
// 00598b77: PUSH 0xbb
// 00598b7c: PUSH 0x7
// 00598b7e: PUSH 0x64ded9
//   XREF to: 0064ded9 (DATA)
// 00598b83: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598b88: ADD ESP,0xc
// 00598b8b: PUSH 0xbb
// 00598b90: PUSH 0x69
// 00598b92: PUSH 0x64deba
//   XREF to: 0064deba (DATA)
// 00598b97: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598b9c: ADD ESP,0xc
// 00598b9f: PUSH 0xc6
// 00598ba4: PUSH 0x7
// 00598ba6: PUSH 0x64def6
//   XREF to: 0064def6 (DATA)
// 00598bab: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598bb0: ADD ESP,0xc
// 00598bb3: PUSH 0xc6
// 00598bb8: PUSH 0x69
// 00598bba: PUSH 0x64dedb
//   XREF to: 0064dedb (DATA)
// 00598bbf: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598bc4: ADD ESP,0xc
// 00598bc7: PUSH 0xd1
// 00598bcc: PUSH 0x7
// 00598bce: PUSH 0x64df16
//   XREF to: 0064df16 (DATA)
// 00598bd3: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598bd8: ADD ESP,0xc
// 00598bdb: PUSH 0xd1
// 00598be0: PUSH 0x69
// 00598be2: PUSH 0x64def8
//   XREF to: 0064def8 (DATA)
// 00598be7: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598bec: ADD ESP,0xc
// 00598bef: PUSH 0xdc
// 00598bf4: PUSH 0x7
// 00598bf6: PUSH 0x64df3d
//   XREF to: 0064df3d (DATA)
// 00598bfb: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598c00: ADD ESP,0xc
// 00598c03: PUSH 0xdc
// 00598c08: PUSH 0x69
// 00598c0a: PUSH 0x64df18
//   XREF to: 0064df18 (DATA)
// 00598c0f: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598c14: ADD ESP,0xc
// 00598c17: PUSH 0xf2
// 00598c1c: PUSH 0x7
// 00598c1e: PUSH 0x64df52
//   XREF to: 0064df52 (DATA)
// 00598c23: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598c28: ADD ESP,0xc
// 00598c2b: PUSH 0xf2
// 00598c30: PUSH 0x69
// 00598c32: PUSH 0x64df42
//   XREF to: 0064df42 (DATA)
// 00598c37: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598c3c: ADD ESP,0xc
// 00598c3f: PUSH 0xfd
// 00598c44: PUSH 0x7
// 00598c46: PUSH 0x64df66
//   XREF to: 0064df66 (DATA)
// 00598c4b: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598c50: ADD ESP,0xc
// 00598c53: PUSH 0xfd
// 00598c58: PUSH 0x69
// 00598c5a: PUSH 0x64df5a
//   XREF to: 0064df5a (DATA)
// 00598c5f: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598c64: ADD ESP,0xc
// 00598c67: PUSH 0x108
// 00598c6c: PUSH 0x7
// 00598c6e: PUSH 0x64df86
//   XREF to: 0064df86 (DATA)
// 00598c73: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598c78: ADD ESP,0xc
// 00598c7b: PUSH 0x108
// 00598c80: PUSH 0x69
// 00598c82: PUSH 0x64df6e
//   XREF to: 0064df6e (DATA)
// 00598c87: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598c8c: ADD ESP,0xc
// 00598c8f: PUSH 0x11e
// 00598c94: PUSH 0x7
// 00598c96: PUSH 0x64df92
//   XREF to: 0064df92 (DATA)
// 00598c9b: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598ca0: ADD ESP,0xc
// 00598ca3: PUSH 0x11e
// 00598ca8: PUSH 0x69
// 00598caa: PUSH 0x64df88
//   XREF to: 0064df88 (DATA)
// 00598caf: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598cb4: ADD ESP,0xc
// 00598cb7: PUSH 0x129
// 00598cbc: PUSH 0x7
// 00598cbe: PUSH 0x64dfa0
//   XREF to: 0064dfa0 (DATA)
// 00598cc3: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598cc8: ADD ESP,0xc
// 00598ccb: PUSH 0x129
// 00598cd0: PUSH 0x69
// 00598cd2: PUSH 0x64df96
//   XREF to: 0064df96 (DATA)
// 00598cd7: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598cdc: ADD ESP,0xc
// 00598cdf: PUSH 0x134
// 00598ce4: PUSH 0x7
// 00598ce6: PUSH 0x64dfba
//   XREF to: 0064dfba (DATA)
// 00598ceb: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598cf0: ADD ESP,0xc
// 00598cf3: PUSH 0x134
// 00598cf8: PUSH 0x69
// 00598cfa: PUSH 0x64dfaa
//   XREF to: 0064dfaa (DATA)
// 00598cff: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598d04: ADD ESP,0xc
// 00598d07: PUSH 0x14a
// 00598d0c: PUSH 0x7
// 00598d0e: PUSH 0x64dfcd
//   XREF to: 0064dfcd (DATA)
// 00598d13: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598d18: ADD ESP,0xc
// 00598d1b: PUSH 0x14a
// 00598d20: PUSH 0x69
// 00598d22: PUSH 0x64dfbc
//   XREF to: 0064dfbc (DATA)
// 00598d27: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598d2c: ADD ESP,0xc
// 00598d2f: PUSH 0x155
// 00598d34: PUSH 0x7
// 00598d36: PUSH 0x64e000
//   XREF to: 0064e000 (DATA)
// 00598d3b: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598d40: ADD ESP,0xc
// 00598d43: PUSH 0x155
// 00598d48: PUSH 0x69
// 00598d4a: PUSH 0x64dfcf
//   XREF to: 0064dfcf (DATA)
// 00598d4f: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598d54: ADD ESP,0xc
// 00598d57: PUSH 0x16b
// 00598d5c: PUSH 0x7
// 00598d5e: PUSH 0x64e02f
//   XREF to: 0064e02f (DATA)
// 00598d63: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598d68: ADD ESP,0xc
// 00598d6b: PUSH 0x16b
// 00598d70: PUSH 0x69
// 00598d72: PUSH 0x64e002
//   XREF to: 0064e002 (DATA)
// 00598d77: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598d7c: ADD ESP,0xc
// 00598d7f: PUSH 0x176
// 00598d84: PUSH 0x7
// 00598d86: PUSH 0x64e047
//   XREF to: 0064e047 (DATA)
// 00598d8b: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598d90: ADD ESP,0xc
// 00598d93: PUSH 0x176
// 00598d98: PUSH 0x69
// 00598d9a: PUSH 0x64e031
//   XREF to: 0064e031 (DATA)
// 00598d9f: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598da4: ADD ESP,0xc
// 00598da7: PUSH 0x181
// 00598dac: PUSH 0x7
// 00598dae: PUSH 0x64e057
//   XREF to: 0064e057 (DATA)
// 00598db3: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598db8: ADD ESP,0xc
// 00598dbb: PUSH 0x181
// 00598dc0: PUSH 0x69
// 00598dc2: PUSH 0x64e049
//   XREF to: 0064e049 (DATA)
// 00598dc7: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00598dcc: ADD ESP,0xc
// 00598dcf: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00598dd4: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00598dd9: MOV EBX,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
//   XREF to: 02dcd7d4 (PARAM)
// 00598ddf: PUSH EBX
//   XREF to: 02dcd7d4 (DATA)
// 00598de0: CALL engine_keys.cpp_CKeys_getInputKey_FUN_00502460
//   XREF to: 00502460 (UNCONDITIONAL_CALL)
// 00598de5: ADD ESP,0x4
// 00598de8: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00598ded: MOV EAX,[0x0067cf44]
//   Label: LAB_00598ded
//   XREF to: 0067cf44 (READ)
// 00598df2: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00598df3: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00598df5: CALL dword ptr [EDX + 0x8]
// 00598df8: ADD ESP,0x4
// 00598dfb: JMP 0x00596b74
//   XREF to: 00596b74 (UNCONDITIONAL_JUMP)
// 00598e00: INC EBX
//   Label: LAB_00598e00
// 00598e01: JMP 0x00598584
//   XREF to: 00598584 (UNCONDITIONAL_JUMP)
// 00598e06: PUSH 0x64dc7a
//   Label: LAB_00598e06
//   XREF to: 0064dc7a (DATA)
// 00598e0b: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00598e11: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 00598e12: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00598e17: ADD ESP,0x8
// 00598e1a: JMP 0x0059863f
//   XREF to: 0059863f (UNCONDITIONAL_JUMP)
// 00598e1f: MOV ESI,dword ptr [EBP + 0x6]
//   Label: LAB_00598e1f
// 00598e22: TEST ESI,ESI
// 00598e24: JL 0x00598e35
//   XREF to: 00598e35 (CONDITIONAL_JUMP)
// 00598e26: MOV EAX,0x1
// 00598e2b: SUB EAX,ESI
// 00598e2d: MOV dword ptr [EBP + 0x6],EAX
// 00598e30: JMP 0x00598944
//   XREF to: 00598944 (UNCONDITIONAL_JUMP)
// 00598e35: PUSH 0x64dd02
//   Label: LAB_00598e35
//   XREF to: 0064dd02 (DATA)
// 00598e3a: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 00598e3f: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 00598e40: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00598e45: ADD ESP,0x8
// 00598e48: JMP 0x00598944
//   XREF to: 00598944 (UNCONDITIONAL_JUMP)
// 00598e4d: PUSH 0x64e059
//   Label: LAB_00598e4d
//   XREF to: 0064e059 (DATA)
// 00598e52: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 00598e57: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 00598e58: CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)
// 00598e5d: ADD ESP,0x8
// 00598e60: TEST EAX,EAX
// 00598e62: JZ 0x00597847
//   XREF to: 00597847 (CONDITIONAL_JUMP)
// 00598e68: MOV ESI,dword ptr [EBP + -0x32]
// 00598e6b: LEA EDI,[EBP + 0xfffff82e]
// 00598e71: ADD ESI,0x8fb0
// 00598e77: PUSH EDI
// 00598e78: MOV AL,byte ptr [ESI]
//   Label: LAB_00598e78
// 00598e7a: MOV byte ptr [EDI],AL
// 00598e7c: CMP AL,0x0
// 00598e7e: JZ 0x00598e90
//   XREF to: 00598e90 (CONDITIONAL_JUMP)
// 00598e80: MOV AL,byte ptr [ESI + 0x1]
// 00598e83: ADD ESI,0x2
// 00598e86: MOV byte ptr [EDI + 0x1],AL
// 00598e89: ADD EDI,0x2
// 00598e8c: CMP AL,0x0
// 00598e8e: JNZ 0x00598e78
//   XREF to: 00598e78 (CONDITIONAL_JUMP)
// 00598e90: POP EDI
//   Label: LAB_00598e90
// 00598e91: PUSH 0x1
// 00598e93: LEA EAX,[EBP + 0xfffff82e]
// 00598e99: PUSH EAX
// 00598e9a: PUSH 0x64e099
//   XREF to: 0064e099 (DATA)
// 00598e9f: PUSH 0x64e09d
//   XREF to: 0064e09d (DATA)
// 00598ea4: PUSH 0x64e0a4
//   XREF to: 0064e0a4 (DATA)
// 00598ea9: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00598eaf: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 00598eb0: CALL shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
//   XREF to: 0049fb70 (UNCONDITIONAL_CALL)
// 00598eb5: ADD ESP,0x18
// 00598eb8: TEST EAX,EAX
// 00598eba: JZ 0x00597847
//   XREF to: 00597847 (CONDITIONAL_JUMP)
// 00598ec0: LEA EAX,[EBP + 0xfffff82e]
// 00598ec6: PUSH EAX
// 00598ec7: MOV ECX,dword ptr [EBP + -0x32]
// 00598eca: PUSH ECX
// 00598ecb: CALL core_skeledit.cpp_CDeformableModel_save_FUN_0058f040
//   XREF to: 0058f040 (UNCONDITIONAL_CALL)
// 00598ed0: ADD ESP,0x8
// 00598ed3: JMP 0x00597847
//   XREF to: 00597847 (UNCONDITIONAL_JUMP)
