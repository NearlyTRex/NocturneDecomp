// Name: core_setedit.cpp_CDemonSet_FUN_00583170
// Address: 00583170
// Address Range: [[00583170, 00583633] [00583651, 00583aac] [00583ad6, 005848f1]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_CDemonSet_FUN_00583170(CDemonSet * this_ptr)
// Cross-references:
//   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 (00584940) at 00584c38 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Show_this_help_screen_00648c4d
//   TerminatedCString s_F1_00648c63
//   TerminatedCString s_Next_box_00648c66
//   TerminatedCString s_TAB_00648c6f
//   TerminatedCString s_Previous_box_00648c73
//   TerminatedCString s_SHIFT_TAB_00648c80
//   TerminatedCString s_Insert_box_00648c8a
//   TerminatedCString s_I_00648c95
//   TerminatedCString s_Delete_box_00648c97
//   TerminatedCString s_D_00648ca2
//   TerminatedCString s_Deselect_box_00648ca4
//   TerminatedCString s_N_00648cb1
//   TerminatedCString s_Replicate_box_00648cb3
//   TerminatedCString s_R_00648cc1
//   TerminatedCString s_To_position_the_selected_00648cc3
//   TerminatedCString s_To_size_the_selected_box_00648cfb
//   TerminatedCString s_Preparing_set_00648d37
//   TerminatedCString s_Max_number_of_boxes_has__00648d46
//   TerminatedCString s_Max_number_of_boxes_has__00648d86
//   TerminatedCString s_No_box_selected_can_t_re_00648dbd
//   TerminatedCString s_Delete_the_selected_box_00648ddf
//   double DOUBLE_00648dfd = 10
//   double DOUBLE_00648e05 = 0.0500000000000000
//   double DOUBLE_00648e0d = 1.57079632675000
//   double DOUBLE_00648e15 = 0.5
//   double DOUBLE_00648e1d = 4
//   double DOUBLE_00648e25 = 0.100000000000000
//   float FLOAT_00648e2d = 1000
//   double DOUBLE_00648e35 = -1.57079632675000
//   float FLOAT_00648e3d = -6.283185
//   float FLOAT_00648e41 = 6.283185
//   float FLOAT_00662a28 = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   int g_WindowWidth = 0x140
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CDemonRenderer g_CDemonRendererInstance
//   CEditorTools g_CEditorToolsPtr
//   int g_MouseX
//   int g_MouseY
//   int g_MouseButtonFlags
//   int g_ActiveRenderColor
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.delta_time_float
//   void* g_CKeysPtr
//   CDemonCamera g_CDemonCameraInstance
//   undefined4 DAT_032758e8
//   undefined4 g_CDemonCameraInstance.base.position.y
//   undefined4 g_CDemonCameraInstance.base.position.z
//   undefined4 g_CDemonCameraInstance.base.rotation_matrix.m[0][0]
//   undefined4 g_CDemonCameraInstance.base.projection_scale
// Function calls:
//   core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
//   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
//   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
//   core_dcamera.cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   core_set.cpp_CDemonSet_FUN_0056d2d0
//   core_set.cpp_CDemonSet_initScene_FUN_0056aa10
//   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
//   core_setdir.cpp_CDemonSet_FUN_00576340
//   core_setdir.cpp_CDemonSet_FUN_00576710
//   core_setedit.cpp_FUN_005817d0
//   core_skeleton.cpp_FUN_005a2060
//   core_skeleton.cpp_FUN_005a20b0
//   crt_string.c_memmove_FUN_005fe5e0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
//   engine_keys.cpp_CKeys_getInputKey_FUN_00502460
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
//   shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
//   shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
//   shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
//   shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   wincore_winrun.cpp_doNothing_FUN_005f2f80

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_FUN_00583170(CDemonSet *this_ptr)

{
  CVector3f *pCVar1;
  bool bVar2;
  CMatrix3x3f *pCVar3;
  CVector3i *pCVar4;
  uchar uVar5;
  CVector3f *pCVar6;
  undefined3 extraout_var;
  int iVar7;
  int iVar8;
  SVDBox *pSVar9;
  BADSPACEBASE *in_ESP;
  int iVar10;
  SRenderVertex *pSVar11;
  SRenderVertex *pSVar12;
  SVDBox *pSVar13;
  int *piVar14;
  byte bVar15;
  SRenderVertex *in_stack_fffffd34;
  SRenderVertex *in_stack_fffffd38;
  int aiStack_29c [5];
  undefined4 uStack_288;
  float *pfStack_284;
  CVector3f *pCStack_280;
  CGame *in_stack_fffffd94;
  CKeys *in_stack_fffffdbc;
  float in_stack_fffffdc0;
  CKeys *in_stack_fffffdc4;
  CKeys *in_stack_fffffdcc;
  float fVar16;
  float fVar17;
  undefined1 *puVar18;
  char *format;
  CVector3f local_1ac;
  CVector3i local_1a0;
  CVector3f local_194;
  int local_188;
  int local_184;
  int local_180;
  CVector3f local_17c;
  CVector3i local_170;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  CVector3i local_14c;
  float local_140;
  float local_13c;
  float local_138;
  CVector3f local_134;
  CVector3f local_128;
  float local_11c;
  float local_118;
  float local_114;
  CVector3f local_110;
  CVector3i local_104;
  float local_f8;
  float local_f4;
  float local_f0;
  CVector3f local_ec;
  CVector3i local_e0;
  CVector3f local_d4;
  float local_c8;
  CKeys *local_c4;
  undefined4 local_c0;
  CVector3f local_bc;
  CVector3i local_b0;
  CVector3i local_a4;
  CVector3f local_98;
  CVector3f local_8c;
  double local_78;
  int *local_70;
  int *local_6c;
  uint local_68;
  C3DSCamera *local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  SVDBox *local_44;
  SVDBox *local_40;
  SVDBox *local_3c;
  float local_38;
  CMatrix3x3f *local_34;
  int local_30;
  CVector3i *local_2c;
  int local_28;
  float local_24;
  CVector3f *local_20;
  CMatrix3x3f *local_1c;
  int local_18;
  float local_14;
  
  bVar15 = 0;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Preparing set.");
  core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
  this_ptr->actor_list_ptr = (void *)0x0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  core_skeleton_cpp_FUN_005a2060();
  local_c8 = 0.0;
  local_c4 = (CKeys *)0x0;
  local_c0 = 0;
  local_4c = 40.0;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_fffffd94);
  local_44 = this_ptr->vdir_boxes;
  this_ptr->field22_0x15ac80[0xc] = '\x01';
  this_ptr->field22_0x15ac80[0xd] = '\0';
  this_ptr->field22_0x15ac80[0xe] = '\0';
  this_ptr->field22_0x15ac80[0xf] = '\0';
  this_ptr->field22_0x15ac80[0x10] = '\x01';
  this_ptr->field22_0x15ac80[0x11] = '\0';
  this_ptr->field22_0x15ac80[0x12] = '\0';
  this_ptr->field22_0x15ac80[0x13] = '\0';
  this_ptr->field22_0x15ac80[4] = '\x01';
  this_ptr->field22_0x15ac80[5] = '\0';
  this_ptr->field22_0x15ac80[6] = '\0';
  this_ptr->field22_0x15ac80[7] = '\0';
  local_64 = this_ptr->cameras;
  local_6c = &g_CDemonCameraInstance.base.position.y;
  local_18 = 0;
  local_70 = &g_CDemonCameraInstance.base.position.z;
  local_40 = local_44;
  do {
    iVar10 = local_18;
    local_68 = g_MouseButtonFlags;
    core_setdir_cpp_CDemonSet_FUN_00576710(this_ptr);
    local_3c = (SVDBox *)0x0;
    if ((-1 < iVar10) && (iVar10 < this_ptr->vdir_box_count)) {
      local_3c = local_40 + iVar10;
    }
    wincore_winrun_cpp_doNothing_FUN_005f2f80();
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    pSVar9 = local_3c;
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    if (pSVar9 != (SVDBox *)0x0) {
      if ((float *)&stack0xfffffdc8 != &local_c8) {
        in_stack_fffffdcc = local_c4;
      }
      pCVar6 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                         (&local_3c->rotation_matrix,(CVector3f *)&stack0xfffffe24);
      in_stack_fffffdcc = (CKeys *)((float)in_stack_fffffdcc + pCVar6->y);
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                ((CMatrix3x3f *)&stack0xfffffd94,(CVector3f *)&stack0xfffffdc8);
      local_14 = -local_4c;
      pCVar6 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         ((CMatrix3x3f *)&stack0xfffffd94,&local_134,(CVector3f *)&stack0xfffffe30);
      if (&stack0xfffffdbc != &stack0xfffffe3c) {
        in_stack_fffffdbc = (CKeys *)(pCVar6->x + (local_3c->position).x);
        in_stack_fffffdc0 = pCVar6->y + (local_3c->position).y;
        in_stack_fffffdc4 = (CKeys *)(pCVar6->z + (local_3c->position).z);
      }
    }
    if ((int *)&stack0x00000000 != &g_CDemonCameraInstance.rect_array[7].top) {
      g_CDemonCameraInstance.base.position.x = (int)in_stack_fffffdbc;
      g_CDemonCameraInstance.base.position.y = (int)in_stack_fffffdc0;
      g_CDemonCameraInstance.base.position.z = (int)in_stack_fffffdc4;
    }
    fVar16 = 28.0;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              ((CMatrix3x3f *)&g_CDemonCameraInstance.base.rotation_matrix,
               (CVector3f *)&stack0xfffffdc8);
    g_CDemonCameraInstance.base.projection_scale = fVar16;
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(this_ptr,150.0,0);
    iVar10 = local_18;
    local_28 = -1;
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
    if ((-1 < iVar10) && (iVar10 < this_ptr->vdir_box_count)) {
      do {
        local_28 = iVar10;
        iVar10 = *(int *)(this_ptr->vdir_boxes[local_28].field3_0x3c + 4);
      } while (-1 < iVar10);
    }
    iVar10 = 0;
    if (0 < this_ptr->vdir_box_count) {
      local_34 = &local_44->rotation_matrix;
      do {
        pCVar6 = &local_44[iVar10].position;
        core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(local_34,&local_194);
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr,pCVar6);
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr,(CVector3i *)&local_194,(CVector3i *)0x0);
        iVar7 = iVar10;
        if (iVar10 == local_18) {
          pCVar1 = pCVar6 + 1;
          pfStack_284 = &local_158;
          local_158 = -pCVar1->x;
          local_154 = -pCVar6[1].y;
          local_150 = -pCVar6[1].z;
          uStack_288 = 0x583519;
          pCStack_280 = pCVar1;
          core_setedit_cpp_FUN_005817d0(pfStack_284);
          uVar5 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                            (g_CEditorToolsPtr);
          shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
                    (g_CEditorToolsPtr,2.0,CONCAT31(extraout_var,uVar5));
          local_128.x = -pCVar1->x;
          local_128.y = -pCVar6[1].y;
          local_128.z = -pCVar6[1].z;
          pCStack_280 = (CVector3f *)0x583576;
          shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
                    (g_CEditorToolsPtr,&local_128,pCVar1,CONCAT31(extraout_var,uVar5));
        }
        else {
          do {
            iVar8 = iVar7;
            iVar7 = *(int *)(this_ptr->vdir_boxes[iVar8].field3_0x3c + 4);
          } while (-1 < iVar7);
          pCVar1 = pCVar6 + 1;
          pCStack_280 = pCVar1;
          if (iVar8 == local_28) {
            pfStack_284 = &local_f8;
            local_f8 = -pCVar1->x;
            local_f4 = -pCVar6[1].y;
            local_f0 = -pCVar6[1].z;
            uStack_288 = 0x5835b5;
            core_setedit_cpp_FUN_005817d0(pfStack_284);
            local_8c.x = -pCVar1->x;
            local_8c.y = -pCVar6[1].y;
            local_8c.z = -pCVar6[1].z;
            pCStack_280 = (CVector3f *)0x5835e1;
            shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
                      (g_CEditorToolsPtr,&local_8c,pCVar1,2);
          }
          else {
            pfStack_284 = &local_140;
            local_140 = -pCVar1->x;
            local_13c = -pCVar6[1].y;
            local_138 = -pCVar6[1].z;
            uStack_288 = 0x583621;
            core_setedit_cpp_FUN_005817d0(pfStack_284);
          }
        }
        pCVar3 = local_34;
        iVar10 = iVar10 + 1;
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
        local_34 = (CMatrix3x3f *)((int)(pCVar3 + 1) + 0x20);
      } while (iVar10 < this_ptr->vdir_box_count);
    }
    local_30 = 0;
    if (0 < this_ptr->camera_count) {
      local_2c = (CVector3i *)&local_64->orientation;
      local_20 = &local_64->position;
      do {
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr,local_20);
        iVar10 = 4;
        bVar2 = true;
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr,local_2c,(CVector3i *)0x0);
        if (((-1 < local_18) && (local_18 < this_ptr->vdir_box_count)) &&
           (iVar7 = core_setdir_cpp_CDemonSet_FUN_00576340(this_ptr), iVar7 != 0)) {
          iVar10 = 0xfb;
          bVar2 = false;
        }
        local_164 = -1.0;
        local_15c = 2.0;
        local_160 = -1.0;
        local_e0.x = (int)ROUND(FLOAT_00662a28 * -1.0);
        local_e0.y = (int)ROUND(FLOAT_00662a28 * -1.0);
        local_e0.z = (int)ROUND(FLOAT_00662a28 * 2.0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_e0);
        local_164 = -local_164;
        local_104.x = (int)ROUND(local_164 * FLOAT_00662a28);
        local_104.y = (int)ROUND(local_160 * FLOAT_00662a28);
        local_104.z = (int)ROUND(local_15c * FLOAT_00662a28);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_104);
        local_160 = -local_160;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
                   (CVector3i *)&stack0xfffffe48);
        local_164 = -local_164;
        local_b0.x = (int)ROUND(local_164 * FLOAT_00662a28);
        local_b0.y = (int)ROUND(local_160 * FLOAT_00662a28);
        local_b0.z = (int)ROUND(local_15c * FLOAT_00662a28);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_b0);
        local_164 = -0.3;
        local_160 = -0.3;
        local_15c = 0.0;
        local_1a0.x = (int)ROUND(FLOAT_00662a28 * -0.3);
        local_1a0.y = (int)ROUND(FLOAT_00662a28 * -0.3);
        local_1a0.z = (int)ROUND(FLOAT_00662a28 * 0.0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[4].projected_vertex,&local_1a0);
        local_164 = -local_164;
        local_170.x = (int)ROUND(local_164 * FLOAT_00662a28);
        local_170.y = (int)ROUND(local_160 * FLOAT_00662a28);
        local_170.z = (int)ROUND(local_15c * FLOAT_00662a28);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[5].projected_vertex,&local_170);
        local_160 = -local_160;
        local_14c.x = (int)ROUND(local_164 * FLOAT_00662a28);
        local_14c.y = (int)ROUND(local_160 * FLOAT_00662a28);
        local_14c.z = (int)ROUND(local_15c * FLOAT_00662a28);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[6].projected_vertex,&local_14c);
        local_164 = -local_164;
        local_a4.x = (int)ROUND(local_164 * FLOAT_00662a28);
        local_a4.y = (int)ROUND(local_160 * FLOAT_00662a28);
        local_a4.z = (int)ROUND(local_15c * FLOAT_00662a28);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[7].projected_vertex,&local_a4);
        if (bVar2) {
          engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
                    (g_CDemonRendererPtr,iVar10);
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,0,1);
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,1,2);
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,2,3);
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,3,0);
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,4,5);
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,5,6);
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,6,7);
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,7,4);
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,0,4);
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,1,5);
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,2,6);
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,3,7);
        }
        else {
          pSVar12 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar11 = pSVar12 + 1;
          piVar14 = aiStack_29c;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar14 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          piVar14 = (int *)&stack0xfffffd34;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar14 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          g_ActiveRenderColor = iVar10;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd34,in_stack_fffffd38);
          pSVar12 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar11 = pSVar12 + 2;
          piVar14 = aiStack_29c;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          pSVar12 = pSVar12 + 1;
          piVar14 = (int *)&stack0xfffffd34;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd34,in_stack_fffffd38);
          pSVar12 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar11 = pSVar12 + 3;
          piVar14 = aiStack_29c;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          pSVar12 = pSVar12 + 2;
          piVar14 = (int *)&stack0xfffffd34;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd34,in_stack_fffffd38);
          pSVar12 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar11 = pSVar12;
          piVar14 = aiStack_29c;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          pSVar12 = pSVar12 + 3;
          piVar14 = (int *)&stack0xfffffd34;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd34,in_stack_fffffd38);
          pSVar12 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar11 = pSVar12 + 5;
          piVar14 = aiStack_29c;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          pSVar12 = pSVar12 + 4;
          piVar14 = (int *)&stack0xfffffd34;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd34,in_stack_fffffd38);
          pSVar12 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar11 = pSVar12 + 6;
          piVar14 = aiStack_29c;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          pSVar12 = pSVar12 + 5;
          piVar14 = (int *)&stack0xfffffd34;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd34,in_stack_fffffd38);
          pSVar12 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar11 = pSVar12 + 7;
          piVar14 = aiStack_29c;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          pSVar12 = pSVar12 + 6;
          piVar14 = (int *)&stack0xfffffd34;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd34,in_stack_fffffd38);
          pSVar12 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar11 = pSVar12 + 4;
          piVar14 = aiStack_29c;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          pSVar12 = pSVar12 + 7;
          piVar14 = (int *)&stack0xfffffd34;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd34,in_stack_fffffd38);
          pSVar12 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar11 = pSVar12 + 4;
          piVar14 = aiStack_29c;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          piVar14 = (int *)&stack0xfffffd34;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd34,in_stack_fffffd38);
          pSVar12 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar11 = pSVar12 + 5;
          piVar14 = aiStack_29c;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          pSVar12 = pSVar12 + 1;
          piVar14 = (int *)&stack0xfffffd34;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd34,in_stack_fffffd38);
          pSVar12 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar11 = pSVar12 + 6;
          piVar14 = aiStack_29c;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          pSVar12 = pSVar12 + 2;
          piVar14 = (int *)&stack0xfffffd34;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd34,in_stack_fffffd38);
          pSVar12 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar11 = pSVar12 + 7;
          piVar14 = aiStack_29c;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          pSVar12 = pSVar12 + 3;
          piVar14 = (int *)&stack0xfffffd34;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd34,in_stack_fffffd38);
        }
        pCVar6 = local_20;
        pCVar4 = local_2c;
        iVar10 = local_30;
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
        local_2c = pCVar4 + 0x23;
        local_20 = pCVar6 + 0x23;
        local_30 = iVar10 + 1;
      } while (local_30 < this_ptr->camera_count);
    }
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,false);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
    if (iVar10 != 0) {
      core_set_cpp_CDemonSet_FUN_0056d2d0(this_ptr);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      this_ptr->field22_0x15ac80[0xc] = '\0';
      this_ptr->field22_0x15ac80[0xd] = '\0';
      this_ptr->field22_0x15ac80[0xe] = '\0';
      this_ptr->field22_0x15ac80[0xf] = '\0';
      this_ptr->field22_0x15ac80[0x10] = '\0';
      this_ptr->field22_0x15ac80[0x11] = '\0';
      this_ptr->field22_0x15ac80[0x12] = '\0';
      this_ptr->field22_0x15ac80[0x13] = '\0';
      this_ptr->field22_0x15ac80[4] = '\0';
      this_ptr->field22_0x15ac80[5] = '\0';
      this_ptr->field22_0x15ac80[6] = '\0';
      this_ptr->field22_0x15ac80[7] = '\0';
      return;
    }
    if (local_3c == (SVDBox *)0x0) {
      core_skeleton_cpp_FUN_005a20b0();
    }
    else {
      local_5c = g_CGamePtr->delta_time_float;
      local_58 = local_5c;
      iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x38);
      if (iVar10 == 0) {
        iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
        if (iVar10 != 0) {
          local_5c = local_58 * (float)DOUBLE_00648dfd;
        }
      }
      else {
        local_5c = local_58 * (float)DOUBLE_00648e05;
      }
      local_50 = local_5c * (float)DOUBLE_00648e0d;
      local_60 = local_4c * (float)DOUBLE_00648e15 * local_5c;
      iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4a);
      if (iVar10 != 0) {
        local_c8 = local_c8 + local_50;
      }
      iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4e);
      if (iVar10 != 0) {
        local_c8 = local_c8 - local_50;
      }
      iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x52);
      if (iVar10 != 0) {
        local_c4 = (CKeys *)((float)local_c4 + local_50);
      }
      in_stack_fffffdbc = g_CKeysPtr;
      iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x53);
      if (iVar10 != 0) {
        local_c4 = (CKeys *)((float)local_c4 - local_50);
      }
      in_stack_fffffdc0 = 8.106091e-39;
      in_stack_fffffdc4 = g_CKeysPtr;
      iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0xd);
      if (iVar10 != 0) {
        local_4c = local_4c - local_60;
      }
      in_stack_fffffdcc = g_CKeysPtr;
      iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0xc);
      if (iVar10 != 0) {
        local_4c = local_4c + local_60;
      }
      if (local_c8 < (float)DOUBLE_00648e35) {
        local_c8 = -1.5707964;
      }
      if ((float)DOUBLE_00648e0d < local_c8) {
        local_c8 = 1.5707964;
      }
      if ((float)local_c4 < (float)DOUBLE_00648e35) {
        local_c4 = (CKeys *)((float)local_c4 + FLOAT_00648e41);
      }
      if ((float)DOUBLE_00648e0d < (float)local_c4) {
        local_c4 = (CKeys *)((float)local_c4 + FLOAT_00648e3d);
      }
      if (local_4c < (float)DOUBLE_00648e15) {
        local_4c = 0.5;
      }
      fVar16 = 4.06377e-44;
      iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
      pSVar9 = local_3c;
      if (iVar10 == 0) {
        puVar18 = &stack0xfffffdd8;
        fVar17 = 8.106865e-39;
        core_skeleton_cpp_FUN_005a2060();
        if ((SVDBox *)&stack0xfffffdd8 != pSVar9) {
          fVar16 = (pSVar9->position).x;
          fVar17 = (pSVar9->position).y;
          puVar18 = (undefined1 *)(pSVar9->position).z;
        }
        core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                  (&local_3c->rotation_matrix,&local_17c);
        pSVar9 = local_3c;
        core_skeleton_cpp_FUN_005a20b0();
        if ((SVDBox *)&stack0xfffffdd8 != pSVar9) {
          (pSVar9->position).x = fVar16;
          (pSVar9->position).y = fVar17;
          (pSVar9->position).z = (float)puVar18;
        }
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  (&local_3c->rotation_matrix,(CVector3f *)&stack0xfffffde4);
      }
      else {
        local_48 = g_CGamePtr->delta_time_float * (float)DOUBLE_00648e1d;
        iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x38);
        if (iVar10 != 0) {
          local_48 = local_48 * (float)DOUBLE_00648e25;
        }
        iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4b);
        if (iVar10 != 0) {
          (local_3c->extents).x = (local_3c->extents).x - local_48;
        }
        iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x4d);
        if (iVar10 != 0) {
          (local_3c->extents).x = (local_3c->extents).x + local_48;
        }
        iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1e);
        if (iVar10 != 0) {
          (local_3c->extents).y = (local_3c->extents).y - local_48;
        }
        iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x10);
        if (iVar10 != 0) {
          (local_3c->extents).y = (local_3c->extents).y + local_48;
        }
        iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x50);
        if (iVar10 != 0) {
          (local_3c->extents).z = (local_3c->extents).z - local_48;
        }
        iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x48);
        if (iVar10 != 0) {
          (local_3c->extents).z = (local_3c->extents).z + local_48;
        }
        local_54 = 0x3f800000;
        if ((int)(local_3c->extents).x < 0x3f800000) {
          (local_3c->extents).x = 1.0;
        }
        if ((local_3c->extents).y < 1.0) {
          (local_3c->extents).y = 1.0;
        }
        if ((local_3c->extents).z < 1.0) {
          (local_3c->extents).z = 1.0;
        }
      }
    }
    iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0xf);
    if (iVar10 != 0) {
      iVar10 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
      if (iVar10 == 0) {
        local_18 = local_18 + 1;
        if (this_ptr->vdir_box_count <= local_18) {
          local_18 = 0;
        }
      }
      else {
        local_18 = local_18 + -1;
        if (local_18 < 0) {
          local_18 = this_ptr->vdir_box_count + -1;
        }
      }
    }
    iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x17);
    if (iVar10 != 0) {
      iVar10 = this_ptr->vdir_box_count;
      if (iVar10 < 0xfa) {
        pSVar9 = local_40 + iVar10;
        if (pSVar9 != (SVDBox *)&stack0xfffffdbc) {
          (pSVar9->position).x = (float)in_stack_fffffdbc;
          (pSVar9->position).y = in_stack_fffffdc0;
          (pSVar9->position).z = (float)in_stack_fffffdc4;
        }
        local_bc.z = 0.0;
        local_bc.x = 0.0;
        local_bc.y = (float)in_stack_fffffdcc;
        local_18 = iVar10;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  (&pSVar9->rotation_matrix,&local_bc);
        (pSVar9->extents).x = 10.0;
        (pSVar9->extents).y = 10.0;
        (pSVar9->extents).z = 10.0;
        this_ptr->vdir_box_count = this_ptr->vdir_box_count + 1;
      }
      else {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Max number of boxes has been reached, can't add any more boxes.");
      }
    }
    iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x13);
    if (iVar10 != 0) {
      iVar10 = this_ptr->vdir_box_count;
      if (iVar10 < 0xfa) {
        if ((-1 < local_18) && (local_18 < iVar10)) {
          pSVar9 = local_40 + iVar10;
          pSVar13 = local_40 + local_18;
          if (pSVar9 != pSVar13) {
            (pSVar9->position).x = (pSVar13->position).x;
            (pSVar9->position).y = (pSVar13->position).y;
            (pSVar9->position).z = (pSVar13->position).z;
          }
          if (&pSVar9->extents != &pSVar13->extents) {
            (pSVar9->extents).x = (pSVar13->extents).x;
            (pSVar9->extents).y = (pSVar13->extents).y;
            (pSVar9->extents).z = (pSVar13->extents).z;
          }
          (pSVar9->rotation_matrix).m[0].x = (pSVar13->rotation_matrix).m[0].x;
          (pSVar9->rotation_matrix).m[0].y = (pSVar13->rotation_matrix).m[0].y;
          (pSVar9->rotation_matrix).m[0].z = (pSVar13->rotation_matrix).m[0].z;
          (pSVar9->rotation_matrix).m[1].x = (pSVar13->rotation_matrix).m[1].x;
          (pSVar9->rotation_matrix).m[1].y = (pSVar13->rotation_matrix).m[1].y;
          (pSVar9->rotation_matrix).m[1].z = (pSVar13->rotation_matrix).m[1].z;
          (pSVar9->rotation_matrix).m[2].x = (pSVar13->rotation_matrix).m[2].x;
          (pSVar9->rotation_matrix).m[2].y = (pSVar13->rotation_matrix).m[2].y;
          (pSVar9->rotation_matrix).m[2].z = (pSVar13->rotation_matrix).m[2].z;
          *(undefined4 *)pSVar9->field3_0x3c = *(undefined4 *)pSVar13->field3_0x3c;
          *(undefined4 *)(pSVar9->field3_0x3c + 4) = *(undefined4 *)(pSVar13->field3_0x3c + 4);
          local_18 = this_ptr->vdir_box_count;
          pSVar9 = local_40 + local_18;
          this_ptr->vdir_box_count = local_18 + 1;
          local_1ac.x = 0.5;
          local_1ac.y = 0.5;
          local_1ac.z = 0.5;
          pCVar6 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (&pSVar9->rotation_matrix,&local_ec,&local_1ac);
          (pSVar9->position).x = pCVar6->x + (pSVar9->position).x;
          (pSVar9->position).y = pCVar6->y + (pSVar9->position).y;
          (pSVar9->position).z = pCVar6->z + (pSVar9->position).z;
          goto LAB_00583c6f;
        }
        format = "No box selected - can't replicate";
      }
      else {
        format = "Max number of boxes has been reached, can't replicate.";
      }
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(g_CEditorToolsPtr,format);
    }
LAB_00583c6f:
    iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x20);
    if (((iVar10 != 0) && (-1 < local_18)) &&
       ((local_18 < this_ptr->vdir_box_count &&
        (iVar7 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                           (g_CEditorToolsPtr,"Delete the selected box?"), iVar10 = local_18
        , iVar7 != 0)))) {
      iVar7 = this_ptr->vdir_box_count + -1;
      this_ptr->vdir_box_count = iVar7;
      crt_string_c_memmove_FUN_005fe5e0
                (local_40 + local_18,local_40 + local_18 + 1,(iVar7 - local_18) * 0x44);
      if (this_ptr->vdir_box_count <= iVar10) {
        local_18 = 0;
      }
    }
    iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x31);
    if (iVar10 != 0) {
      local_18 = -1;
    }
    iVar10 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x3b);
    if (iVar10 != 0) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("F1",0,0);
      engine_2d_c_drawText_FUN_00401fd0("Show this help screen",g_WindowWidth / 10,0);
      engine_2d_c_drawText_FUN_00401fd0("TAB",0,0xb);
      engine_2d_c_drawText_FUN_00401fd0("Next box",g_WindowWidth / 10,0xb);
      engine_2d_c_drawText_FUN_00401fd0("SHIFT+TAB",0,0x16);
      engine_2d_c_drawText_FUN_00401fd0("Previous box",g_WindowWidth / 10,0x16);
      engine_2d_c_drawText_FUN_00401fd0("I",0,0x21);
      engine_2d_c_drawText_FUN_00401fd0("Insert box",g_WindowWidth / 10,0x21);
      engine_2d_c_drawText_FUN_00401fd0("D",0,0x2c);
      engine_2d_c_drawText_FUN_00401fd0("Delete box",g_WindowWidth / 10,0x2c);
      engine_2d_c_drawText_FUN_00401fd0("N",0,0x37);
      engine_2d_c_drawText_FUN_00401fd0("Deselect box",g_WindowWidth / 10,0x37);
      engine_2d_c_drawText_FUN_00401fd0("R",0,0x42);
      engine_2d_c_drawText_FUN_00401fd0("Replicate box",g_WindowWidth / 10,0x42);
      engine_2d_c_drawText_FUN_00401fd0("To position the selected box, use the normal slew keys.",0,99);
      engine_2d_c_drawText_FUN_00401fd0("To size the selected box, use arrow keys and Q/A with CTRL.",0,0x6e);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      engine_keys_cpp_CKeys_getInputKey_FUN_00502460(g_CKeysPtr);
      engine_2d_c_clearInputAndWait_FUN_00403260();
    }
    if (((local_68 & 1) != 0) && ((g_MouseButtonFlags & 1U) == 0)) {
      local_188 = g_CDemonCameraInstance.base.position.x;
      local_184 = *local_6c;
      local_180 = *local_70;
      core_dcamera_cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480
                (&g_CDemonCameraInstance,&local_d4,g_MouseX,g_MouseY);
      iVar10 = 0;
      local_38 = 1e+30;
      if (0 < this_ptr->vdir_box_count) {
        local_1c = &local_40->rotation_matrix;
        pCVar6 = &local_40->extents;
        do {
          core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                    (local_1c,&local_110,(CVector3f *)&stack0xfffffe0c);
          core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                    (local_1c,&local_98,(CVector3f *)&stack0xfffffe18);
          local_11c = -pCVar6->x;
          local_118 = -pCVar6->y;
          local_114 = -pCVar6->z;
          local_24 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                               ((CBoundingBox3D *)&stack0xfffffdf4,&local_110,&local_98,
                                (CVector3f *)0x0);
          local_78 = (double)local_24;
          if (((0.0 <= local_78) && (local_78 < 1.0)) && (local_24 < local_38)) {
            local_38 = local_24;
            local_18 = iVar10;
          }
          pCVar6 = (CVector3f *)((int)(pCVar6 + 5) + 8);
          iVar10 = iVar10 + 1;
          local_1c = (CMatrix3x3f *)((int)(local_1c + 1) + 0x20);
          local_14 = local_24;
        } while (iVar10 < this_ptr->vdir_box_count);
      }
    }
  } while( true );
}


// Assembly code:
// 00583170: PUSH EBX
//   Label: core_setedit.cpp_CDemonSet_FUN_00583170
// 00583171: PUSH ESI
// 00583172: PUSH EDI
// 00583173: PUSH EBP
// 00583174: MOV EBP,ESP
// 00583176: SUB ESP,0x25c
// 0058317c: SUB EBP,0x7e
// 0058317f: PUSH 0x648d37
//   XREF to: 00648d37 (DATA)
// 00583184: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0058318a: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0058318b: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 00583190: ADD ESP,0x8
// 00583193: MOV ECX,dword ptr [EBP + 0x92]
// 00583199: PUSH ECX
// 0058319a: CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10
//   XREF to: 0056aa10 (UNCONDITIONAL_CALL)
// 0058319f: MOV EAX,dword ptr [EBP + 0x92]
// 005831a5: ADD ESP,0x4
// 005831a8: MOV dword ptr [EAX + 0x14d154],0x0
// 005831b2: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 005831b7: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 005831bc: LEA EAX,[EBP + 0xfffffe4a]
// 005831c2: PUSH EAX
// 005831c3: XOR EBX,EBX
// 005831c5: CALL core_skeleton.cpp_FUN_005a2060
//   XREF to: 005a2060 (UNCONDITIONAL_CALL)
// 005831ca: MOV EAX,0x42200000
// 005831cf: MOV EDX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 005831d5: ADD ESP,0x4
// 005831d8: MOV dword ptr [EBP + -0x3a],EBX
// 005831db: MOV dword ptr [EBP + -0x36],EBX
// 005831de: PUSH EDX
//   XREF to: 02d81a9c (DATA)
// 005831df: MOV dword ptr [EBP + -0x32],EBX
// 005831e2: MOV dword ptr [EBP + 0x42],EAX
// 005831e5: CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
// 005831ea: MOV EAX,dword ptr [EBP + 0x92]
// 005831f0: ADD EAX,0x15b414
// 005831f5: MOV dword ptr [EAX + 0xfffff878],0x1
// 005831ff: MOV dword ptr [EAX + 0xfffff87c],0x1
// 00583209: MOV dword ptr [EAX + 0xfffff870],0x1
// 00583213: MOV dword ptr [EBP + 0x4e],EAX
// 00583216: MOV EAX,dword ptr [EBP + 0x92]
// 0058321c: ADD EAX,0x4
// 0058321f: MOV dword ptr [EBP + 0x2a],EAX
// 00583222: MOV EAX,0x32758e8
//   XREF to: 032758e8 (DATA)
// 00583227: ADD EAX,0x4
// 0058322a: MOV dword ptr [EBP + 0x22],EAX
//   XREF to: 032758ec (DATA)
// 0058322d: MOV EAX,0x32758e8
//   XREF to: 032758e8 (DATA)
// 00583232: ADD EAX,0x8
// 00583235: MOV dword ptr [EBP + 0x76],EBX
// 00583238: MOV dword ptr [EBP + 0x1e],EAX
//   XREF to: 032758f0 (DATA)
// 0058323b: MOV EAX,dword ptr [EBP + 0x4e]
// 0058323e: ADD ESP,0x4
// 00583241: MOV dword ptr [EBP + 0x4a],EAX
// 00583244: MOV EBX,dword ptr [EBP + 0x92]
//   Label: LAB_00583244
// 0058324a: MOV EDI,dword ptr [EBP + 0x76]
// 0058324d: MOV EAX,[0x02cf6a94]
//   XREF to: 02cf6a94 (READ)
// 00583252: PUSH EBX
// 00583253: XOR ESI,ESI
// 00583255: MOV dword ptr [EBP + 0x26],EAX
// 00583258: CALL core_setdir.cpp_CDemonSet_FUN_00576710
//   XREF to: 00576710 (UNCONDITIONAL_CALL)
// 0058325d: MOV dword ptr [EBP + 0x52],ESI
// 00583260: ADD ESP,0x4
// 00583263: TEST EDI,EDI
// 00583265: JL 0x0058327a
//   XREF to: 0058327a (CONDITIONAL_JUMP)
// 00583267: CMP EDI,dword ptr [EBX + 0x15b410]
// 0058326d: JGE 0x0058327a
//   XREF to: 0058327a (CONDITIONAL_JUMP)
// 0058326f: IMUL EAX,EDI,0x44
// 00583272: MOV EDX,dword ptr [EBP + 0x4e]
// 00583275: ADD EDX,EAX
// 00583277: MOV dword ptr [EBP + 0x52],EDX
// 0058327a: CALL wincore_winrun.cpp_doNothing_FUN_005f2f80
//   Label: LAB_0058327a
//   XREF to: 005f2f80 (UNCONDITIONAL_CALL)
// 0058327f: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00583284: MOV ESI,dword ptr [EBP + 0x52]
// 00583287: CALL wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
//   XREF to: 005b3ed4 (UNCONDITIONAL_CALL)
// 0058328c: TEST ESI,ESI
// 0058328e: JZ 0x0058338c
//   XREF to: 0058338c (CONDITIONAL_JUMP)
// 00583294: LEA EAX,[EBP + 0xfffffe56]
// 0058329a: LEA EDX,[EBP + -0x3a]
// 0058329d: CMP EAX,EDX
// 0058329f: JZ 0x005832bc
//   XREF to: 005832bc (CONDITIONAL_JUMP)
// 005832a1: MOV EAX,dword ptr [EBP + -0x3a]
// 005832a4: MOV dword ptr [EBP + 0xfffffe56],EAX
// 005832aa: MOV EAX,dword ptr [EBP + -0x36]
// 005832ad: MOV dword ptr [EBP + 0xfffffe5a],EAX
// 005832b3: MOV EAX,dword ptr [EBP + -0x32]
// 005832b6: MOV dword ptr [EBP + 0xfffffe5e],EAX
// 005832bc: LEA EAX,[EBP + 0xfffffeb2]
//   Label: LAB_005832bc
// 005832c2: PUSH EAX
// 005832c3: MOV EAX,dword ptr [EBP + 0x52]
// 005832c6: ADD EAX,0x18
// 005832c9: PUSH EAX
// 005832ca: CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
//   XREF to: 00472160 (UNCONDITIONAL_CALL)
// 005832cf: FLD float ptr [EBP + 0xfffffe5a]
// 005832d5: ADD ESP,0x8
// 005832d8: FADD float ptr [EAX + 0x4]
// 005832db: LEA EAX,[EBP + 0xfffffe56]
// 005832e1: PUSH EAX
// 005832e2: LEA EAX,[EBP + 0xfffffe22]
// 005832e8: PUSH EAX
// 005832e9: FSTP float ptr [EBP + 0xfffffe5a]
// 005832ef: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 005832f4: FLD float ptr [EBP + 0x42]
// 005832f7: FCHS
// 005832f9: FSTP float ptr [EBP + 0x7a]
// 005832fc: MOV EAX,dword ptr [EBP + 0x7a]
// 005832ff: ADD ESP,0x8
// 00583302: MOV dword ptr [EBP + 0xfffffec6],EAX
// 00583308: LEA EAX,[EBP + 0xfffffebe]
// 0058330e: PUSH EAX
// 0058330f: LEA EAX,[EBP + 0xffffff5a]
// 00583315: PUSH EAX
// 00583316: LEA EAX,[EBP + 0xfffffe22]
// 0058331c: XOR EDI,EDI
// 0058331e: PUSH EAX
// 0058331f: MOV dword ptr [EBP + 0xfffffebe],EDI
// 00583325: MOV dword ptr [EBP + 0xfffffec2],EDI
// 0058332b: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 00583330: MOV EDX,dword ptr [EBP + 0x52]
// 00583333: FLD float ptr [EAX]
// 00583335: FADD float ptr [EDX]
// 00583337: FSTP float ptr [EBP + 0xfffffeca]
// 0058333d: FLD float ptr [EAX + 0x4]
// 00583340: FADD float ptr [EDX + 0x4]
// 00583343: ADD ESP,0xc
// 00583346: FSTP float ptr [EBP + 0xfffffece]
// 0058334c: FLD float ptr [EAX + 0x8]
// 0058334f: LEA EAX,[EBP + 0xfffffe4a]
// 00583355: FADD float ptr [EDX + 0x8]
// 00583358: LEA EDX,[EBP + 0xfffffeca]
// 0058335e: FSTP float ptr [EBP + 0xfffffed2]
// 00583364: CMP EAX,EDX
// 00583366: JZ 0x0058338c
//   XREF to: 0058338c (CONDITIONAL_JUMP)
// 00583368: MOV EAX,dword ptr [EBP + 0xfffffeca]
// 0058336e: MOV dword ptr [EBP + 0xfffffe4a],EAX
// 00583374: MOV EAX,dword ptr [EBP + 0xfffffece]
// 0058337a: MOV dword ptr [EBP + 0xfffffe4e],EAX
// 00583380: MOV EAX,dword ptr [EBP + 0xfffffed2]
// 00583386: MOV dword ptr [EBP + 0xfffffe52],EAX
// 0058338c: MOV EDX,0x41e00000
//   Label: LAB_0058338c
// 00583391: LEA EAX,[EBP + 0xfffffe4a]
// 00583397: MOV dword ptr [EBP + 0xfffffe62],EDX
// 0058339d: CMP EAX,0x32758e8
//   XREF to: 032758e8 (DATA)
// 005833a2: JZ 0x005833c5
//   XREF to: 005833c5 (CONDITIONAL_JUMP)
// 005833a4: MOV EAX,dword ptr [EBP + 0xfffffe4a]
// 005833aa: MOV [0x032758e8],EAX
//   XREF to: 032758e8 (WRITE)
// 005833af: MOV EAX,dword ptr [EBP + 0xfffffe4e]
// 005833b5: MOV [0x032758ec],EAX
//   XREF to: 032758ec (WRITE)
// 005833ba: MOV EAX,dword ptr [EBP + 0xfffffe52]
// 005833c0: MOV [0x032758f0],EAX
//   XREF to: 032758f0 (WRITE)
// 005833c5: LEA EAX,[EBP + 0xfffffe56]
//   Label: LAB_005833c5
// 005833cb: PUSH EAX
// 005833cc: PUSH 0x32758f4
//   XREF to: 032758f4 (DATA)
// 005833d1: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 005833d6: ADD ESP,0x8
// 005833d9: PUSH 0x1
// 005833db: MOV EAX,dword ptr [EBP + 0xfffffe62]
// 005833e1: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 005833e6: MOV [0x0327591c],EAX
//   XREF to: 0327591c (WRITE)
// 005833eb: CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
//   XREF to: 0044c430 (UNCONDITIONAL_CALL)
// 005833f0: ADD ESP,0x8
// 005833f3: PUSH 0x0
// 005833f5: MOV ECX,dword ptr [EBP + 0x92]
// 005833fb: PUSH 0x43160000
// 00583400: PUSH ECX
// 00583401: CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
//   XREF to: 0056a190 (UNCONDITIONAL_CALL)
// 00583406: ADD ESP,0xc
// 00583409: PUSH 0x1
// 0058340b: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
//   XREF to: 02c6d578 (PARAM)
// 00583411: MOV ESI,0xffffffff
// 00583416: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00583417: MOV EDI,dword ptr [EBP + 0x76]
// 0058341a: MOV dword ptr [EBP + 0x66],ESI
// 0058341d: CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
//   XREF to: 0048caa0 (UNCONDITIONAL_CALL)
// 00583422: ADD ESP,0x8
// 00583425: TEST EDI,EDI
// 00583427: JL 0x00583450
//   XREF to: 00583450 (CONDITIONAL_JUMP)
// 00583429: MOV EDX,dword ptr [EBP + 0x92]
// 0058342f: CMP EDI,dword ptr [EDX + 0x15b410]
// 00583435: JGE 0x00583450
//   XREF to: 00583450 (CONDITIONAL_JUMP)
// 00583437: MOV ESI,dword ptr [EBP + 0x92]
// 0058343d: MOV dword ptr [EBP + 0x66],EDI
//   Label: LAB_0058343d
// 00583440: IMUL EAX,dword ptr [EBP + 0x66],0x44
// 00583444: ADD EAX,ESI
// 00583446: MOV EDI,dword ptr [EAX + 0x15b454]
// 0058344c: TEST EDI,EDI
// 0058344e: JGE 0x0058343d
//   XREF to: 0058343d (CONDITIONAL_JUMP)
// 00583450: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_00583450
// 00583456: MOV EDX,dword ptr [EAX + 0x15b410]
// 0058345c: XOR ESI,ESI
// 0058345e: TEST EDX,EDX
// 00583460: JLE 0x00583651
//   XREF to: 00583651 (CONDITIONAL_JUMP)
// 00583466: MOV EAX,dword ptr [EBP + 0x4a]
// 00583469: ADD EAX,0x18
// 0058346c: MOV dword ptr [EBP + 0x5a],EAX
// 0058346f: IMUL EDI,ESI,0x44
//   Label: LAB_0058346f
// 00583472: LEA EAX,[EBP + 0xfffffefa]
// 00583478: PUSH EAX
// 00583479: MOV EBX,dword ptr [EBP + 0x5a]
// 0058347c: MOV ECX,dword ptr [EBP + 0x4a]
// 0058347f: PUSH EBX
// 00583480: ADD EDI,ECX
// 00583482: CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
//   XREF to: 00472160 (UNCONDITIONAL_CALL)
// 00583487: ADD ESP,0x8
// 0058348a: PUSH EDI
// 0058348b: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00583490: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00583491: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 00583496: ADD ESP,0x8
// 00583499: PUSH 0x0
// 0058349b: LEA EAX,[EBP + 0xfffffefa]
// 005834a1: PUSH EAX
// 005834a2: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005834a8: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005834a9: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 005834ae: MOV ECX,dword ptr [EBP + 0x76]
// 005834b1: ADD ESP,0xc
// 005834b4: CMP ESI,ECX
// 005834b6: JZ 0x005834db
//   XREF to: 005834db (CONDITIONAL_JUMP)
// 005834bc: MOV ECX,dword ptr [EBP + 0x92]
// 005834c2: MOV EDX,ESI
// 005834c4: IMUL EAX,EDX,0x44
//   Label: LAB_005834c4
// 005834c7: ADD EAX,ECX
// 005834c9: MOV EBX,dword ptr [EAX + 0x15b454]
// 005834cf: TEST EBX,EBX
// 005834d1: JL 0x0058357e
//   XREF to: 0058357e (CONDITIONAL_JUMP)
// 005834d7: MOV EDX,EBX
// 005834d9: JMP 0x005834c4
//   XREF to: 005834c4 (UNCONDITIONAL_JUMP)
// 005834db: LEA EBX,[EDI + 0xc]
//   Label: LAB_005834db
// 005834de: PUSH 0x0
// 005834e0: LEA EAX,[EBP + 0xffffff36]
// 005834e6: FLD float ptr [EBX]
// 005834e8: PUSH 0xff
// 005834ed: FCHS
// 005834ef: FSTP float ptr [EBP + 0xffffff36]
// 005834f5: PUSH 0x0
// 005834f7: FLD float ptr [EBX + 0x4]
// 005834fa: PUSH 0x3f000000
// 005834ff: FCHS
// 00583501: FSTP float ptr [EBP + 0xffffff3a]
// 00583507: PUSH EBX
// 00583508: FLD float ptr [EBX + 0x8]
// 0058350b: FCHS
// 0058350d: PUSH EAX
// 0058350e: FSTP float ptr [EBP + 0xffffff3e]
// 00583514: CALL core_setedit.cpp_FUN_005817d0
//   XREF to: 005817d0 (UNCONDITIONAL_CALL)
// 00583519: ADD ESP,0x18
// 0058351c: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00583522: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 00583523: CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
//   XREF to: 004a1330 (UNCONDITIONAL_CALL)
// 00583528: ADD ESP,0x4
// 0058352b: PUSH EAX
// 0058352c: MOV EDI,EAX
// 0058352e: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 00583533: PUSH 0x40000000
// 00583538: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 00583539: CALL shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
//   XREF to: 004a1ca0 (UNCONDITIONAL_CALL)
// 0058353e: FLD float ptr [EBX]
// 00583540: LEA EAX,[EBP + 0xffffff66]
// 00583546: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0058354c: ADD ESP,0xc
// 0058354f: FCHS
// 00583551: FSTP float ptr [EBP + 0xffffff66]
// 00583557: PUSH EDI
// 00583558: FLD float ptr [EBX + 0x4]
// 0058355b: FCHS
// 0058355d: PUSH EBX
// 0058355e: FSTP float ptr [EBP + 0xffffff6a]
// 00583564: FLD float ptr [EBX + 0x8]
// 00583567: PUSH EAX
// 00583568: FCHS
// 0058356a: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0058356b: FSTP float ptr [EBP + 0xffffff6e]
// 00583571: CALL shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
//   XREF to: 004a2050 (UNCONDITIONAL_CALL)
// 00583576: ADD ESP,0x10
// 00583579: JMP 0x00583624
//   XREF to: 00583624 (UNCONDITIONAL_JUMP)
// 0058357e: LEA EBX,[EDI + 0xc]
//   Label: LAB_0058357e
// 00583581: CMP EDX,dword ptr [EBP + 0x66]
// 00583584: JNZ 0x005835e6
//   XREF to: 005835e6 (CONDITIONAL_JUMP)
// 00583586: FLD float ptr [EBX]
// 00583588: PUSH 0x0
// 0058358a: LEA EAX,[EBP + -0x6a]
// 0058358d: FCHS
// 0058358f: FSTP float ptr [EBP + -0x6a]
// 00583592: PUSH 0x80
// 00583597: FLD float ptr [EBX + 0x4]
// 0058359a: FCHS
// 0058359c: PUSH 0x0
// 0058359e: FSTP float ptr [EBP + -0x66]
// 005835a1: PUSH 0x3e99999a
// 005835a6: FLD float ptr [EBX + 0x8]
// 005835a9: PUSH EBX
// 005835aa: FCHS
// 005835ac: PUSH EAX
// 005835ad: FSTP float ptr [EBP + -0x62]
// 005835b0: CALL core_setedit.cpp_FUN_005817d0
//   XREF to: 005817d0 (UNCONDITIONAL_CALL)
// 005835b5: FLD float ptr [EBX]
// 005835b7: LEA EAX,[EBP + 0x2]
// 005835ba: ADD ESP,0x18
// 005835bd: FCHS
// 005835bf: FSTP float ptr [EBP + 0x2]
// 005835c2: PUSH 0x2
// 005835c4: FLD float ptr [EBX + 0x4]
// 005835c7: FCHS
// 005835c9: PUSH EBX
// 005835ca: FSTP float ptr [EBP + 0x6]
// 005835cd: FLD float ptr [EBX + 0x8]
// 005835d0: PUSH EAX
// 005835d1: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 005835d6: FCHS
// 005835d8: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 005835d9: FSTP float ptr [EBP + 0xa]
// 005835dc: CALL shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
//   XREF to: 004a2050 (UNCONDITIONAL_CALL)
// 005835e1: ADD ESP,0x10
// 005835e4: JMP 0x00583624
//   XREF to: 00583624 (UNCONDITIONAL_JUMP)
// 005835e6: FLD float ptr [EBX]
//   Label: LAB_005835e6
// 005835e8: PUSH 0xff
// 005835ed: LEA EAX,[EBP + 0xffffff4e]
// 005835f3: FCHS
// 005835f5: FSTP float ptr [EBP + 0xffffff4e]
// 005835fb: PUSH 0x0
// 005835fd: FLD float ptr [EBX + 0x4]
// 00583600: FCHS
// 00583602: PUSH 0x0
// 00583604: FSTP float ptr [EBP + 0xffffff52]
// 0058360a: PUSH 0x3e4ccccd
// 0058360f: FLD float ptr [EBX + 0x8]
// 00583612: PUSH EBX
// 00583613: FCHS
// 00583615: PUSH EAX
// 00583616: FSTP float ptr [EBP + 0xffffff56]
// 0058361c: CALL core_setedit.cpp_FUN_005817d0
//   XREF to: 005817d0 (UNCONDITIONAL_CALL)
// 00583621: ADD ESP,0x18
// 00583624: MOV ECX,dword ptr [0x006703ec]
//   Label: LAB_00583624
//   XREF to: 006703ec (READ)
// 0058362a: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0058362b: MOV EBX,dword ptr [EBP + 0x5a]
// 0058362e: INC ESI
// 0058362f: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 00583651: XOR EAX,EAX
//   Label: LAB_00583651
// 00583653: MOV dword ptr [EBP + 0x5e],EAX
// 00583656: MOV EAX,dword ptr [EBP + 0x92]
// 0058365c: CMP dword ptr [EAX],0x0
// 0058365f: JLE 0x00583ad6
//   XREF to: 00583ad6 (CONDITIONAL_JUMP)
// 00583665: MOV EAX,dword ptr [EBP + 0x2a]
// 00583668: ADD EAX,0x10c
// 0058366d: MOV dword ptr [EBP + 0x62],EAX
// 00583670: MOV EAX,dword ptr [EBP + 0x2a]
// 00583673: ADD EAX,0x100
// 00583678: MOV dword ptr [EBP + 0x6e],EAX
// 0058367b: MOV EBX,dword ptr [EBP + 0x6e]
//   Label: LAB_0058367b
// 0058367e: PUSH EBX
// 0058367f: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00583685: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 00583686: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 0058368b: ADD ESP,0x8
// 0058368e: PUSH 0x0
// 00583690: MOV EDI,dword ptr [EBP + 0x62]
// 00583693: PUSH EDI
// 00583694: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00583699: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0058369a: MOV ESI,0x4
// 0058369f: MOV EDI,0x1
// 005836a4: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 005836a9: MOV EDX,dword ptr [EBP + 0x76]
// 005836ac: ADD ESP,0xc
// 005836af: TEST EDX,EDX
// 005836b1: JL 0x005836d9
//   XREF to: 005836d9 (CONDITIONAL_JUMP)
// 005836b3: MOV EAX,EDX
// 005836b5: MOV EDX,dword ptr [EBP + 0x92]
// 005836bb: CMP EAX,dword ptr [EDX + 0x15b410]
// 005836c1: JGE 0x005836d9
//   XREF to: 005836d9 (CONDITIONAL_JUMP)
// 005836c3: PUSH EBX
// 005836c4: PUSH EAX
// 005836c5: PUSH EDX
// 005836c6: CALL core_setdir.cpp_CDemonSet_FUN_00576340
//   XREF to: 00576340 (UNCONDITIONAL_CALL)
// 005836cb: ADD ESP,0xc
// 005836ce: TEST EAX,EAX
// 005836d0: JZ 0x005836d9
//   XREF to: 005836d9 (CONDITIONAL_JUMP)
// 005836d2: MOV ESI,0xfb
// 005836d7: XOR EDI,EDI
// 005836d9: MOV ECX,0xbf800000
//   Label: LAB_005836d9
// 005836de: MOV EAX,0x40000000
// 005836e3: LEA EBX,[EBP + -0x52]
// 005836e6: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005836ec: MOV dword ptr [EBP + 0xffffff2a],ECX
// 005836f2: MOV dword ptr [EBP + 0xffffff32],EAX
// 005836f8: LEA EAX,[EBP + 0xffffff2a]
// 005836fe: MOV dword ptr [EBP + 0xffffff2e],ECX
// 00583704: FLD float ptr [EAX]
// 00583706: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 0058370c: FISTP dword ptr [EBX]
// 0058370e: FLD float ptr [EAX + 0x4]
// 00583711: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 00583717: FISTP dword ptr [EBX + 0x4]
// 0058371a: FLD float ptr [EAX + 0x8]
// 0058371d: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 00583723: FISTP dword ptr [EBX + 0x8]
// 00583726: LEA EAX,[EBP + -0x52]
// 00583729: PUSH EAX
// 0058372a: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0058372c: PUSH EAX
// 0058372d: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00583732: MOV DH,byte ptr [EBP + 0xffffff2d]
// 00583738: LEA EBX,[EBP + -0x76]
// 0058373b: LEA EAX,[EBP + 0xffffff2a]
// 00583741: XOR DH,0x80
// 00583744: ADD ESP,0x8
// 00583747: MOV byte ptr [EBP + 0xffffff2d],DH
// 0058374d: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00583753: FLD float ptr [EAX]
// 00583755: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 0058375b: FISTP dword ptr [EBX]
// 0058375d: FLD float ptr [EAX + 0x4]
// 00583760: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 00583766: FISTP dword ptr [EBX + 0x4]
// 00583769: FLD float ptr [EAX + 0x8]
// 0058376c: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 00583772: FISTP dword ptr [EBX + 0x8]
// 00583775: LEA EAX,[EBP + -0x76]
// 00583778: PUSH EAX
// 00583779: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0058377b: ADD EAX,0x30
// 0058377e: PUSH EAX
// 0058377f: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00583784: MOV BL,byte ptr [EBP + 0xffffff31]
// 0058378a: LEA EAX,[EBP + 0xffffff2a]
// 00583790: XOR BL,0x80
// 00583793: ADD ESP,0x8
// 00583796: MOV byte ptr [EBP + 0xffffff31],BL
// 0058379c: LEA EBX,[EBP + 0xfffffed6]
// 005837a2: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005837a8: FLD float ptr [EAX]
// 005837aa: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 005837b0: FISTP dword ptr [EBX]
// 005837b2: FLD float ptr [EAX + 0x4]
// 005837b5: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 005837bb: FISTP dword ptr [EBX + 0x4]
// 005837be: FLD float ptr [EAX + 0x8]
// 005837c1: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 005837c7: FISTP dword ptr [EBX + 0x8]
// 005837ca: LEA EAX,[EBP + 0xfffffed6]
// 005837d0: PUSH EAX
// 005837d1: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005837d3: ADD EAX,0x60
// 005837d6: PUSH EAX
// 005837d7: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005837dc: MOV BH,byte ptr [EBP + 0xffffff2d]
// 005837e2: LEA EAX,[EBP + 0xffffff2a]
// 005837e8: XOR BH,0x80
// 005837eb: ADD ESP,0x8
// 005837ee: MOV byte ptr [EBP + 0xffffff2d],BH
// 005837f4: LEA EBX,[EBP + -0x22]
// 005837f7: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005837fd: FLD float ptr [EAX]
// 005837ff: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 00583805: FISTP dword ptr [EBX]
// 00583807: FLD float ptr [EAX + 0x4]
// 0058380a: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 00583810: FISTP dword ptr [EBX + 0x4]
// 00583813: FLD float ptr [EAX + 0x8]
// 00583816: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 0058381c: FISTP dword ptr [EBX + 0x8]
// 0058381f: LEA EAX,[EBP + -0x22]
// 00583822: PUSH EAX
// 00583823: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00583825: ADD EAX,0x90
// 0058382a: PUSH EAX
// 0058382b: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00583830: MOV EDX,0xbe99999a
// 00583835: LEA EAX,[EBP + 0xffffff2a]
// 0058383b: ADD ESP,0x8
// 0058383e: XOR EBX,EBX
// 00583840: MOV dword ptr [EBP + 0xffffff2a],EDX
// 00583846: MOV dword ptr [EBP + 0xffffff2e],EDX
// 0058384c: MOV dword ptr [EBP + 0xffffff32],EBX
// 00583852: LEA EBX,[EBP + 0xfffffeee]
// 00583858: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0058385e: FLD float ptr [EAX]
// 00583860: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 00583866: FISTP dword ptr [EBX]
// 00583868: FLD float ptr [EAX + 0x4]
// 0058386b: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 00583871: FISTP dword ptr [EBX + 0x4]
// 00583874: FLD float ptr [EAX + 0x8]
// 00583877: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 0058387d: FISTP dword ptr [EBX + 0x8]
// 00583880: LEA EAX,[EBP + 0xfffffeee]
// 00583886: PUSH EAX
// 00583887: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00583889: ADD EAX,0xc0
// 0058388e: PUSH EAX
// 0058388f: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00583894: MOV CL,byte ptr [EBP + 0xffffff2d]
// 0058389a: LEA EBX,[EBP + 0xffffff1e]
// 005838a0: LEA EAX,[EBP + 0xffffff2a]
// 005838a6: ADD ESP,0x8
// 005838a9: XOR CL,0x80
// 005838ac: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005838b2: MOV byte ptr [EBP + 0xffffff2d],CL
// 005838b8: FLD float ptr [EAX]
// 005838ba: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 005838c0: FISTP dword ptr [EBX]
// 005838c2: FLD float ptr [EAX + 0x4]
// 005838c5: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 005838cb: FISTP dword ptr [EBX + 0x4]
// 005838ce: FLD float ptr [EAX + 0x8]
// 005838d1: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 005838d7: FISTP dword ptr [EBX + 0x8]
// 005838da: LEA EAX,[EBP + 0xffffff1e]
// 005838e0: PUSH EAX
// 005838e1: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005838e3: ADD EAX,0xf0
// 005838e8: PUSH EAX
// 005838e9: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005838ee: MOV CH,byte ptr [EBP + 0xffffff31]
// 005838f4: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005838fa: XOR CH,0x80
// 005838fd: ADD ESP,0x8
// 00583900: MOV byte ptr [EBP + 0xffffff31],CH
// 00583906: LEA EBX,[EBP + 0xffffff42]
// 0058390c: LEA EAX,[EBP + 0xffffff2a]
// 00583912: FLD float ptr [EAX]
// 00583914: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 0058391a: FISTP dword ptr [EBX]
// 0058391c: FLD float ptr [EAX + 0x4]
// 0058391f: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 00583925: FISTP dword ptr [EBX + 0x4]
// 00583928: FLD float ptr [EAX + 0x8]
// 0058392b: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 00583931: FISTP dword ptr [EBX + 0x8]
// 00583934: LEA EAX,[EBP + 0xffffff42]
// 0058393a: PUSH EAX
// 0058393b: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0058393d: ADD EAX,0x120
// 00583942: PUSH EAX
// 00583943: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 00583948: MOV AL,byte ptr [EBP + 0xffffff2d]
// 0058394e: LEA EBX,[EBP + -0x16]
// 00583951: XOR AL,0x80
// 00583953: ADD ESP,0x8
// 00583956: MOV byte ptr [EBP + 0xffffff2d],AL
// 0058395c: LEA EAX,[EBP + 0xffffff2a]
// 00583962: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00583968: FLD float ptr [EAX]
// 0058396a: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 00583970: FISTP dword ptr [EBX]
// 00583972: FLD float ptr [EAX + 0x4]
// 00583975: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 0058397b: FISTP dword ptr [EBX + 0x4]
// 0058397e: FLD float ptr [EAX + 0x8]
// 00583981: FMUL float ptr [0x00662a28]
//   XREF to: 00662a28 (READ)
// 00583987: FISTP dword ptr [EBX + 0x8]
// 0058398a: LEA EAX,[EBP + -0x16]
// 0058398d: PUSH EAX
// 0058398e: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 00583990: ADD EAX,0x150
// 00583995: PUSH EAX
// 00583996: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0058399b: ADD ESP,0x8
// 0058399e: TEST EDI,EDI
// 005839a0: JZ 0x0058415a
//   XREF to: 0058415a (CONDITIONAL_JUMP)
// 005839a6: PUSH ESI
// 005839a7: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005839ad: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 005839ae: CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
//   XREF to: 0048c960 (UNCONDITIONAL_CALL)
// 005839b3: ADD ESP,0x8
// 005839b6: PUSH 0x1
// 005839b8: PUSH 0x0
// 005839ba: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005839c0: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 005839c1: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 005839c6: ADD ESP,0xc
// 005839c9: PUSH 0x2
// 005839cb: PUSH 0x1
// 005839cd: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 005839d2: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 005839d3: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 005839d8: ADD ESP,0xc
// 005839db: PUSH 0x3
// 005839dd: PUSH 0x2
// 005839df: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005839e5: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005839e6: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 005839eb: ADD ESP,0xc
// 005839ee: PUSH 0x0
// 005839f0: PUSH 0x3
// 005839f2: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005839f8: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 005839f9: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 005839fe: ADD ESP,0xc
// 00583a01: PUSH 0x5
// 00583a03: PUSH 0x4
// 00583a05: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00583a0b: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00583a0c: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 00583a11: ADD ESP,0xc
// 00583a14: PUSH 0x6
// 00583a16: PUSH 0x5
// 00583a18: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00583a1e: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 00583a1f: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 00583a24: ADD ESP,0xc
// 00583a27: PUSH 0x7
// 00583a29: PUSH 0x6
// 00583a2b: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00583a31: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 00583a32: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 00583a37: ADD ESP,0xc
// 00583a3a: PUSH 0x4
// 00583a3c: PUSH 0x7
// 00583a3e: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00583a43: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 00583a44: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 00583a49: ADD ESP,0xc
// 00583a4c: PUSH 0x4
// 00583a4e: PUSH 0x0
// 00583a50: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00583a56: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00583a57: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 00583a5c: ADD ESP,0xc
// 00583a5f: PUSH 0x5
// 00583a61: PUSH 0x1
// 00583a63: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00583a69: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00583a6a: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 00583a6f: ADD ESP,0xc
// 00583a72: PUSH 0x6
// 00583a74: PUSH 0x2
// 00583a76: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00583a7c: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00583a7d: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 00583a82: ADD ESP,0xc
// 00583a85: PUSH 0x7
// 00583a87: PUSH 0x3
// 00583a89: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00583a8f: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 00583a90: CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
//   XREF to: 0048caf0 (UNCONDITIONAL_CALL)
// 00583a95: ADD ESP,0xc
// 00583a98: MOV ECX,dword ptr [0x006703ec]
//   Label: LAB_00583a98
//   XREF to: 006703ec (READ)
// 00583a9e: MOV EBX,dword ptr [EBP + 0x62]
// 00583aa1: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00583aa2: MOV ESI,dword ptr [EBP + 0x6e]
// 00583aa5: MOV EDI,dword ptr [EBP + 0x5e]
// 00583aa8: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 00583ad6: PUSH 0x0
//   Label: LAB_00583ad6
// 00583ad8: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 00583add: CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
//   XREF to: 0044cb80 (UNCONDITIONAL_CALL)
// 00583ae2: ADD ESP,0x8
// 00583ae5: PUSH 0x0
// 00583ae7: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
//   XREF to: 02cf1cd4 (PARAM)
// 00583aed: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 00583aee: CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
//   XREF to: 004a1380 (UNCONDITIONAL_CALL)
// 00583af3: ADD ESP,0x8
// 00583af6: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00583afb: MOV ESI,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 00583b01: PUSH ESI
//   XREF to: 02d81a9c (DATA)
// 00583b02: CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   XREF to: 004d7d90 (UNCONDITIONAL_CALL)
// 00583b07: ADD ESP,0x4
// 00583b0a: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00583b0f: PUSH 0x1
// 00583b11: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00583b13: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00583b14: CALL dword ptr [EDX + 0x4]
// 00583b17: ADD ESP,0x8
// 00583b1a: TEST EAX,EAX
// 00583b1c: JNZ 0x005848b2
//   XREF to: 005848b2 (CONDITIONAL_JUMP)
// 00583b22: CMP dword ptr [EBP + 0x52],0x0
// 00583b26: JNZ 0x005843ab
//   XREF to: 005843ab (CONDITIONAL_JUMP)
// 00583b2c: LEA EAX,[EBP + 0xfffffe4a]
// 00583b32: PUSH EAX
// 00583b33: CALL core_skeleton.cpp_FUN_005a20b0
//   XREF to: 005a20b0 (UNCONDITIONAL_CALL)
// 00583b38: ADD ESP,0x4
// 00583b3b: PUSH 0xf
//   Label: LAB_00583b3b
// 00583b3d: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00583b42: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00583b43: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00583b45: CALL dword ptr [EDX + 0x4]
// 00583b48: ADD ESP,0x8
// 00583b4b: TEST EAX,EAX
// 00583b4d: JZ 0x00583b75
//   XREF to: 00583b75 (CONDITIONAL_JUMP)
// 00583b4f: PUSH 0x2a
// 00583b51: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00583b56: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00583b57: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00583b59: CALL dword ptr [EDX]
// 00583b5b: ADD ESP,0x8
// 00583b5e: TEST EAX,EAX
// 00583b60: JZ 0x0058476d
//   XREF to: 0058476d (CONDITIONAL_JUMP)
// 00583b66: MOV EDI,dword ptr [EBP + 0x76]
// 00583b69: DEC EDI
// 00583b6a: MOV dword ptr [EBP + 0x76],EDI
// 00583b6d: TEST EDI,EDI
// 00583b6f: JL 0x00584758
//   XREF to: 00584758 (CONDITIONAL_JUMP)
// 00583b75: PUSH 0x17
//   Label: LAB_00583b75
// 00583b77: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00583b7c: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00583b7d: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00583b7f: CALL dword ptr [EDX + 0x4]
// 00583b82: ADD ESP,0x8
// 00583b85: TEST EAX,EAX
// 00583b87: JZ 0x00583c2f
//   XREF to: 00583c2f (CONDITIONAL_JUMP)
// 00583b8d: MOV EAX,dword ptr [EBP + 0x92]
// 00583b93: MOV EDX,dword ptr [EAX + 0x15b410]
// 00583b99: CMP EDX,0xfa
// 00583b9f: JGE 0x00584790
//   XREF to: 00584790 (CONDITIONAL_JUMP)
// 00583ba5: MOV dword ptr [EBP + 0x76],EDX
// 00583ba8: IMUL EBX,EDX,0x44
// 00583bab: MOV EDI,dword ptr [EBP + 0x4e]
// 00583bae: LEA EAX,[EBP + 0xfffffe4a]
// 00583bb4: ADD EBX,EDI
// 00583bb6: CMP EBX,EAX
// 00583bb8: JZ 0x00583bd4
//   XREF to: 00583bd4 (CONDITIONAL_JUMP)
// 00583bba: MOV EAX,dword ptr [EBP + 0xfffffe4a]
// 00583bc0: MOV dword ptr [EBX],EAX
// 00583bc2: MOV EAX,dword ptr [EBP + 0xfffffe4e]
// 00583bc8: MOV dword ptr [EBX + 0x4],EAX
// 00583bcb: MOV EAX,dword ptr [EBP + 0xfffffe52]
// 00583bd1: MOV dword ptr [EBX + 0x8],EAX
// 00583bd4: MOV EAX,dword ptr [EBP + 0xfffffe56]
//   Label: LAB_00583bd4
// 00583bda: MOV dword ptr [EBP + -0x2e],EAX
// 00583bdd: MOV EAX,dword ptr [EBP + 0xfffffe5a]
// 00583be3: MOV dword ptr [EBP + -0x2a],EAX
// 00583be6: MOV EAX,dword ptr [EBP + 0xfffffe5e]
// 00583bec: MOV dword ptr [EBP + -0x26],EAX
// 00583bef: XOR EAX,EAX
// 00583bf1: MOV dword ptr [EBP + -0x26],EAX
// 00583bf4: MOV dword ptr [EBP + -0x2e],EAX
// 00583bf7: LEA EAX,[EBP + -0x2e]
// 00583bfa: PUSH EAX
// 00583bfb: LEA EAX,[EBX + 0x18]
// 00583bfe: PUSH EAX
// 00583bff: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 00583c04: MOV dword ptr [EBX + 0xc],0x41200000
// 00583c0b: MOV dword ptr [EBX + 0x10],0x41200000
// 00583c12: MOV EAX,dword ptr [EBP + 0x92]
// 00583c18: MOV dword ptr [EBX + 0x14],0x41200000
// 00583c1f: MOV ECX,dword ptr [EAX + 0x15b410]
// 00583c25: INC ECX
// 00583c26: ADD ESP,0x8
// 00583c29: MOV dword ptr [EAX + 0x15b410],ECX
// 00583c2f: PUSH 0x13
//   Label: LAB_00583c2f
// 00583c31: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00583c36: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00583c37: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00583c39: CALL dword ptr [EDX + 0x4]
// 00583c3c: ADD ESP,0x8
// 00583c3f: TEST EAX,EAX
// 00583c41: JZ 0x00583c6f
//   XREF to: 00583c6f (CONDITIONAL_JUMP)
// 00583c43: MOV EAX,dword ptr [EBP + 0x92]
// 00583c49: MOV EBX,dword ptr [EAX + 0x15b410]
// 00583c4f: CMP EBX,0xfa
// 00583c55: JL 0x005847a9
//   XREF to: 005847a9 (CONDITIONAL_JUMP)
// 00583c5b: PUSH 0x648d86
//   XREF to: 00648d86 (DATA)
// 00583c60: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00583c66: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 00583c67: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   Label: LAB_00583c67
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00583c6c: ADD ESP,0x8
// 00583c6f: PUSH 0x20
//   Label: LAB_00583c6f
// 00583c71: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00583c76: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00583c77: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00583c79: CALL dword ptr [EDX + 0x4]
// 00583c7c: ADD ESP,0x8
// 00583c7f: TEST EAX,EAX
// 00583c81: JZ 0x00583d09
//   XREF to: 00583d09 (CONDITIONAL_JUMP)
// 00583c87: MOV ECX,dword ptr [EBP + 0x76]
// 00583c8a: TEST ECX,ECX
// 00583c8c: JL 0x00583d09
//   XREF to: 00583d09 (CONDITIONAL_JUMP)
// 00583c92: MOV EDX,dword ptr [EBP + 0x92]
// 00583c98: CMP ECX,dword ptr [EDX + 0x15b410]
// 00583c9e: JGE 0x00583d09
//   XREF to: 00583d09 (CONDITIONAL_JUMP)
// 00583ca0: PUSH 0x648ddf
//   XREF to: 00648ddf (DATA)
// 00583ca5: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00583cab: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 00583cac: CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   XREF to: 0049f060 (UNCONDITIONAL_CALL)
// 00583cb1: ADD ESP,0x8
// 00583cb4: TEST EAX,EAX
// 00583cb6: JZ 0x00583d09
//   XREF to: 00583d09 (CONDITIONAL_JUMP)
// 00583cb8: MOV EAX,dword ptr [EBP + 0x92]
// 00583cbe: MOV EDI,dword ptr [EAX + 0x15b410]
// 00583cc4: DEC EDI
// 00583cc5: MOV EDX,dword ptr [EBP + 0x76]
// 00583cc8: MOV dword ptr [EAX + 0x15b410],EDI
// 00583cce: MOV EAX,EDI
// 00583cd0: SUB EAX,EDX
// 00583cd2: IMUL EAX,EAX,0x44
// 00583cd5: PUSH EAX
// 00583cd6: LEA EAX,[EDX + 0x1]
// 00583cd9: IMUL EAX,EAX,0x44
// 00583cdc: MOV ECX,dword ptr [EBP + 0x4e]
// 00583cdf: ADD EAX,ECX
// 00583ce1: MOV EBX,EDX
// 00583ce3: PUSH EAX
// 00583ce4: IMUL EAX,EDX,0x44
// 00583ce7: ADD EAX,ECX
// 00583ce9: PUSH EAX
// 00583cea: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 00583cef: MOV EDX,dword ptr [EBP + 0x92]
// 00583cf5: MOV EAX,EBX
// 00583cf7: MOV EDI,dword ptr [EDX + 0x15b410]
// 00583cfd: ADD ESP,0xc
// 00583d00: CMP EAX,EDI
// 00583d02: JL 0x00583d09
//   XREF to: 00583d09 (CONDITIONAL_JUMP)
// 00583d04: XOR EAX,EAX
// 00583d06: MOV dword ptr [EBP + 0x76],EAX
// 00583d09: PUSH 0x31
//   Label: LAB_00583d09
// 00583d0b: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00583d10: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00583d11: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00583d13: CALL dword ptr [EDX + 0x4]
// 00583d16: ADD ESP,0x8
// 00583d19: TEST EAX,EAX
// 00583d1b: JZ 0x00583d24
//   XREF to: 00583d24 (CONDITIONAL_JUMP)
// 00583d1d: MOV dword ptr [EBP + 0x76],0xffffffff
// 00583d24: PUSH 0x3b
//   Label: LAB_00583d24
// 00583d26: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00583d2b: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00583d2c: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00583d2e: CALL dword ptr [EDX + 0x4]
// 00583d31: ADD ESP,0x8
// 00583d34: TEST EAX,EAX
// 00583d36: JZ 0x00583f58
//   XREF to: 00583f58 (CONDITIONAL_JUMP)
// 00583d3c: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00583d41: MOV ECX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00583d47: IMUL EDX,ECX,0x0
// 00583d4a: MOV EAX,EDX
// 00583d4c: SAR EDX,0x1f
// 00583d4f: SUB EAX,EDX
// 00583d51: SAR EAX,0x1
// 00583d53: PUSH 0x0
// 00583d55: PUSH EAX
// 00583d56: PUSH 0x648c63
//   XREF to: 00648c63 (DATA)
// 00583d5b: MOV EBX,EAX
// 00583d5d: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00583d62: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00583d67: MOV EDX,EAX
// 00583d69: MOV ESI,0xa
// 00583d6e: SAR EDX,0x1f
// 00583d71: IDIV ESI
// 00583d73: ADD ESP,0xc
// 00583d76: PUSH 0x0
// 00583d78: ADD EAX,EBX
// 00583d7a: PUSH EAX
// 00583d7b: PUSH 0x648c4d
//   XREF to: 00648c4d (DATA)
// 00583d80: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00583d85: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00583d8b: IMUL EDX,EBX,0x0
// 00583d8e: MOV EAX,EDX
// 00583d90: SAR EDX,0x1f
// 00583d93: SUB EAX,EDX
// 00583d95: SAR EAX,0x1
// 00583d97: ADD ESP,0xc
// 00583d9a: PUSH 0xb
// 00583d9c: PUSH EAX
// 00583d9d: PUSH 0x648c6f
//   XREF to: 00648c6f (DATA)
// 00583da2: MOV EBX,EAX
// 00583da4: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00583da9: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00583dae: MOV EDX,EAX
// 00583db0: SAR EDX,0x1f
// 00583db3: IDIV ESI
// 00583db5: ADD ESP,0xc
// 00583db8: PUSH 0xb
// 00583dba: ADD EAX,EBX
// 00583dbc: PUSH EAX
// 00583dbd: PUSH 0x648c66
//   XREF to: 00648c66 (DATA)
// 00583dc2: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00583dc7: MOV ESI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00583dcd: IMUL EDX,ESI,0x0
// 00583dd0: MOV EAX,EDX
// 00583dd2: SAR EDX,0x1f
// 00583dd5: SUB EAX,EDX
// 00583dd7: SAR EAX,0x1
// 00583dd9: ADD ESP,0xc
// 00583ddc: PUSH 0x16
// 00583dde: PUSH EAX
// 00583ddf: PUSH 0x648c80
//   XREF to: 00648c80 (DATA)
// 00583de4: MOV EBX,EAX
// 00583de6: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00583deb: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00583df0: MOV EDX,EAX
// 00583df2: MOV ESI,0xa
// 00583df7: SAR EDX,0x1f
// 00583dfa: IDIV ESI
// 00583dfc: ADD ESP,0xc
// 00583dff: PUSH 0x16
// 00583e01: ADD EAX,EBX
// 00583e03: PUSH EAX
// 00583e04: PUSH 0x648c73
//   XREF to: 00648c73 (DATA)
// 00583e09: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00583e0e: ADD ESP,0xc
// 00583e11: MOV EDI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00583e17: IMUL EDX,EDI,0x0
// 00583e1a: MOV EAX,EDX
// 00583e1c: SAR EDX,0x1f
// 00583e1f: SUB EAX,EDX
// 00583e21: SAR EAX,0x1
// 00583e23: PUSH 0x21
// 00583e25: PUSH EAX
// 00583e26: PUSH 0x648c95
//   XREF to: 00648c95 (DATA)
// 00583e2b: MOV EBX,EAX
// 00583e2d: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00583e32: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00583e37: MOV EDX,EAX
// 00583e39: SAR EDX,0x1f
// 00583e3c: IDIV ESI
// 00583e3e: ADD ESP,0xc
// 00583e41: PUSH 0x21
// 00583e43: ADD EAX,EBX
// 00583e45: PUSH EAX
// 00583e46: PUSH 0x648c8a
//   XREF to: 00648c8a (DATA)
// 00583e4b: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00583e50: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00583e55: IMUL EDX,EAX,0x0
// 00583e58: MOV EAX,EDX
// 00583e5a: SAR EDX,0x1f
// 00583e5d: SUB EAX,EDX
// 00583e5f: SAR EAX,0x1
// 00583e61: ADD ESP,0xc
// 00583e64: PUSH 0x2c
// 00583e66: PUSH EAX
// 00583e67: PUSH 0x648ca2
//   XREF to: 00648ca2 (DATA)
// 00583e6c: MOV EBX,EAX
// 00583e6e: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00583e73: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00583e78: MOV EDX,EAX
// 00583e7a: SAR EDX,0x1f
// 00583e7d: IDIV ESI
// 00583e7f: ADD ESP,0xc
// 00583e82: PUSH 0x2c
// 00583e84: ADD EAX,EBX
// 00583e86: PUSH EAX
// 00583e87: PUSH 0x648c97
//   XREF to: 00648c97 (DATA)
// 00583e8c: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00583e91: MOV ECX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00583e97: IMUL EDX,ECX,0x0
// 00583e9a: MOV EAX,EDX
// 00583e9c: SAR EDX,0x1f
// 00583e9f: SUB EAX,EDX
// 00583ea1: SAR EAX,0x1
// 00583ea3: ADD ESP,0xc
// 00583ea6: PUSH 0x37
// 00583ea8: PUSH EAX
// 00583ea9: PUSH 0x648cb1
//   XREF to: 00648cb1 (DATA)
// 00583eae: MOV EBX,EAX
// 00583eb0: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00583eb5: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00583eba: MOV EDX,EAX
// 00583ebc: SAR EDX,0x1f
// 00583ebf: IDIV ESI
// 00583ec1: ADD ESP,0xc
// 00583ec4: PUSH 0x37
// 00583ec6: ADD EAX,EBX
// 00583ec8: PUSH EAX
// 00583ec9: PUSH 0x648ca4
//   XREF to: 00648ca4 (DATA)
// 00583ece: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00583ed3: MOV EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00583ed9: IMUL EDX,EBX,0x0
// 00583edc: MOV EAX,EDX
// 00583ede: SAR EDX,0x1f
// 00583ee1: SUB EAX,EDX
// 00583ee3: SAR EAX,0x1
// 00583ee5: ADD ESP,0xc
// 00583ee8: PUSH 0x42
// 00583eea: PUSH EAX
// 00583eeb: PUSH 0x648cc1
//   XREF to: 00648cc1 (DATA)
// 00583ef0: MOV EBX,EAX
// 00583ef2: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00583ef7: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00583efc: MOV EDX,EAX
// 00583efe: SAR EDX,0x1f
// 00583f01: IDIV ESI
// 00583f03: ADD ESP,0xc
// 00583f06: PUSH 0x42
// 00583f08: ADD EAX,EBX
// 00583f0a: PUSH EAX
// 00583f0b: PUSH 0x648cb3
//   XREF to: 00648cb3 (DATA)
// 00583f10: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00583f15: ADD ESP,0xc
// 00583f18: PUSH 0x63
// 00583f1a: PUSH 0x0
// 00583f1c: PUSH 0x648cc3
//   XREF to: 00648cc3 (DATA)
// 00583f21: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00583f26: ADD ESP,0xc
// 00583f29: PUSH 0x6e
// 00583f2b: PUSH 0x0
// 00583f2d: PUSH 0x648cfb
//   XREF to: 00648cfb (DATA)
// 00583f32: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00583f37: ADD ESP,0xc
// 00583f3a: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00583f3f: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00583f44: MOV ESI,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00583f4a: PUSH ESI
//   XREF to: 02dcd7d4 (DATA)
// 00583f4b: CALL engine_keys.cpp_CKeys_getInputKey_FUN_00502460
//   XREF to: 00502460 (UNCONDITIONAL_CALL)
// 00583f50: ADD ESP,0x4
// 00583f53: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00583f58: TEST byte ptr [EBP + 0x26],0x1
//   Label: LAB_00583f58
// 00583f5c: JZ 0x00583244
//   XREF to: 00583244 (CONDITIONAL_JUMP)
// 00583f62: TEST byte ptr [0x02cf6a94],0x1
//   XREF to: 02cf6a94 (READ)
// 00583f69: JNZ 0x00583244
//   XREF to: 00583244 (CONDITIONAL_JUMP)
// 00583f6f: MOV EAX,[0x032758e8]
//   XREF to: 032758e8 (READ)
// 00583f74: MOV dword ptr [EBP + 0xffffff06],EAX
// 00583f7a: MOV EAX,dword ptr [EBP + 0x22]
// 00583f7d: MOV EAX,dword ptr [EAX]
//   XREF to: 032758ec (READ)
// 00583f7f: MOV dword ptr [EBP + 0xffffff0a],EAX
// 00583f85: MOV EAX,dword ptr [EBP + 0x1e]
// 00583f88: MOV EDI,dword ptr [0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 00583f8e: MOV EAX,dword ptr [EAX]
//   XREF to: 032758f0 (READ)
// 00583f90: PUSH EDI
// 00583f91: MOV dword ptr [EBP + 0xffffff0e],EAX
// 00583f97: MOV EAX,[0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 00583f9c: PUSH EAX
// 00583f9d: LEA EAX,[EBP + -0x46]
// 00583fa0: PUSH EAX
// 00583fa1: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 00583fa6: CALL core_dcamera.cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480
//   XREF to: 0044d480 (UNCONDITIONAL_CALL)
// 00583fab: FLD float ptr [0x00648e2d]
//   XREF to: 00648e2d (READ)
// 00583fb1: FLD float ptr [EAX]
// 00583fb3: FMUL ST1
// 00583fb5: FSTP float ptr [EBP + 0xfffffea6]
// 00583fbb: FLD float ptr [EAX + 0x4]
// 00583fbe: FMUL ST1
// 00583fc0: FSTP float ptr [EBP + 0xfffffeaa]
// 00583fc6: FMUL float ptr [EAX + 0x8]
// 00583fc9: XOR ESI,ESI
// 00583fcb: MOV EDX,0x7149f2ca
// 00583fd0: ADD ESP,0x10
// 00583fd3: MOV EAX,dword ptr [EBP + 0x92]
// 00583fd9: FSTP float ptr [EBP + 0xfffffeae]
// 00583fdf: MOV ECX,dword ptr [EAX + 0x15b410]
// 00583fe5: MOV dword ptr [EBP + 0x56],EDX
// 00583fe8: TEST ECX,ECX
// 00583fea: JLE 0x00583244
//   XREF to: 00583244 (CONDITIONAL_JUMP)
// 00583ff0: MOV EAX,dword ptr [EBP + 0x4e]
// 00583ff3: MOV EBX,dword ptr [EBP + 0x4e]
// 00583ff6: ADD EAX,0x18
// 00583ff9: ADD EBX,0xc
// 00583ffc: MOV dword ptr [EBP + 0x72],EAX
// 00583fff: IMUL EDI,ESI,0x44
//   Label: LAB_00583fff
// 00584002: FLD float ptr [EBP + 0xffffff06]
// 00584008: FLD float ptr [EBP + 0xffffff0a]
// 0058400e: FLD float ptr [EBP + 0xffffff0e]
// 00584014: MOV ECX,dword ptr [EBP + 0x4e]
// 00584017: LEA EAX,[EBP + 0xfffffe9a]
// 0058401d: ADD EDI,ECX
// 0058401f: PUSH EAX
// 00584020: LEA EAX,[EBP + 0xffffff7e]
// 00584026: FXCH ST2
// 00584028: FSUB float ptr [EDI]
// 0058402a: PUSH EAX
// 0058402b: FSTP float ptr [EBP + 0xfffffe9a]
// 00584031: FSUB float ptr [EDI + 0x4]
// 00584034: MOV EAX,dword ptr [EBP + 0x72]
// 00584037: FSTP float ptr [EBP + 0xfffffe9e]
// 0058403d: FSUB float ptr [EDI + 0x8]
// 00584040: PUSH EAX
// 00584041: FSTP float ptr [EBP + 0xfffffea2]
// 00584047: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 0058404c: ADD ESP,0xc
// 0058404f: LEA EAX,[EBP + 0xfffffea6]
// 00584055: PUSH EAX
// 00584056: LEA EAX,[EBP + -0xa]
// 00584059: PUSH EAX
// 0058405a: MOV EDX,dword ptr [EBP + 0x72]
// 0058405d: PUSH EDX
// 0058405e: CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
//   XREF to: 00472030 (UNCONDITIONAL_CALL)
// 00584063: FLD float ptr [EBX]
// 00584065: LEA EDX,[EBP + 0xffffff72]
// 0058406b: LEA EAX,[EBP + 0xfffffe82]
// 00584071: ADD ESP,0xc
// 00584074: FCHS
// 00584076: FSTP float ptr [EBP + 0xffffff72]
// 0058407c: FLD float ptr [EBX + 0x4]
// 0058407f: FCHS
// 00584081: FSTP float ptr [EBP + 0xffffff76]
// 00584087: FLD float ptr [EBX + 0x8]
// 0058408a: FCHS
// 0058408c: FSTP float ptr [EBP + 0xffffff7a]
// 00584092: CMP EAX,EDX
// 00584094: JZ 0x005840ba
//   XREF to: 005840ba (CONDITIONAL_JUMP)
// 00584096: MOV EAX,dword ptr [EBP + 0xffffff72]
// 0058409c: MOV dword ptr [EBP + 0xfffffe82],EAX
// 005840a2: MOV EAX,dword ptr [EBP + 0xffffff76]
// 005840a8: MOV dword ptr [EBP + 0xfffffe86],EAX
// 005840ae: MOV EAX,dword ptr [EBP + 0xffffff7a]
// 005840b4: MOV dword ptr [EBP + 0xfffffe8a],EAX
// 005840ba: LEA EAX,[EBP + 0xfffffe8e]
//   Label: LAB_005840ba
// 005840c0: ADD EDI,0xc
// 005840c3: CMP EAX,EDI
// 005840c5: JZ 0x005840e1
//   XREF to: 005840e1 (CONDITIONAL_JUMP)
// 005840c7: MOV EAX,dword ptr [EDI]
// 005840c9: MOV dword ptr [EBP + 0xfffffe8e],EAX
// 005840cf: MOV EAX,dword ptr [EDI + 0x4]
// 005840d2: MOV dword ptr [EBP + 0xfffffe92],EAX
// 005840d8: MOV EAX,dword ptr [EDI + 0x8]
// 005840db: MOV dword ptr [EBP + 0xfffffe96],EAX
// 005840e1: PUSH 0x0
//   Label: LAB_005840e1
// 005840e3: LEA EAX,[EBP + -0xa]
// 005840e6: PUSH EAX
// 005840e7: LEA EAX,[EBP + 0xffffff7e]
// 005840ed: PUSH EAX
// 005840ee: LEA EAX,[EBP + 0xfffffe82]
// 005840f4: PUSH EAX
// 005840f5: CALL core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
//   XREF to: 00420940 (UNCONDITIONAL_CALL)
// 005840fa: FLDZ
// 005840fc: MOV dword ptr [EBP + 0x7a],EAX
// 005840ff: ADD ESP,0x10
// 00584102: MOV EAX,dword ptr [EBP + 0x7a]
// 00584105: MOV dword ptr [EBP + 0x6a],EAX
// 00584108: FLD float ptr [EBP + 0x6a]
// 0058410b: FSTP double ptr [EBP + 0x16]
// 0058410e: FCOMP double ptr [EBP + 0x16]
// 00584111: FNSTSW AX
// 00584113: SAHF
// 00584114: JA 0x00584134
//   XREF to: 00584134 (CONDITIONAL_JUMP)
// 00584116: FLD1
// 00584118: FCOMP double ptr [EBP + 0x16]
// 0058411b: FNSTSW AX
// 0058411d: SAHF
// 0058411e: JBE 0x00584134
//   XREF to: 00584134 (CONDITIONAL_JUMP)
// 00584120: FLD float ptr [EBP + 0x6a]
// 00584123: FCOMP float ptr [EBP + 0x56]
// 00584126: FNSTSW AX
// 00584128: SAHF
// 00584129: JNC 0x00584134
//   XREF to: 00584134 (CONDITIONAL_JUMP)
// 0058412b: MOV EAX,dword ptr [EBP + 0x6a]
// 0058412e: MOV dword ptr [EBP + 0x76],ESI
// 00584131: MOV dword ptr [EBP + 0x56],EAX
// 00584134: MOV EDI,dword ptr [EBP + 0x72]
//   Label: LAB_00584134
// 00584137: MOV EAX,dword ptr [EBP + 0x92]
// 0058413d: ADD EBX,0x44
// 00584140: INC ESI
// 00584141: ADD EDI,0x44
// 00584144: MOV EDX,dword ptr [EAX + 0x15b410]
// 0058414a: MOV dword ptr [EBP + 0x72],EDI
// 0058414d: CMP ESI,EDX
// 0058414f: JGE 0x00583244
//   XREF to: 00583244 (CONDITIONAL_JUMP)
// 00584155: JMP 0x00583fff
//   XREF to: 00583fff (UNCONDITIONAL_JUMP)
// 0058415a: MOV EAX,[0x006703ec]
//   Label: LAB_0058415a
//   XREF to: 006703ec (READ)
// 0058415f: MOV ECX,0xc
// 00584164: SUB ESP,0x30
// 00584167: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00584169: MOV EDI,ESP
// 0058416b: MOV dword ptr [0x02d02570],ESI
//   XREF to: 02d02570 (WRITE)
// 00584171: LEA ESI,[EAX + 0x30]
// 00584174: MOVSD.REP ES:EDI,ESI
// 00584176: SUB ESP,0x30
// 00584179: MOV ECX,0xc
// 0058417e: MOV EDI,ESP
// 00584180: MOV ESI,EAX
// 00584182: MOVSD.REP ES:EDI,ESI
// 00584184: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 00584189: ADD ESP,0x60
// 0058418c: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00584191: SUB ESP,0x30
// 00584194: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00584196: MOV ECX,0xc
// 0058419b: MOV EDI,ESP
// 0058419d: LEA ESI,[EAX + 0x60]
// 005841a0: MOVSD.REP ES:EDI,ESI
// 005841a2: SUB ESP,0x30
// 005841a5: MOV ECX,0xc
// 005841aa: MOV EDI,ESP
// 005841ac: LEA ESI,[EAX + 0x30]
// 005841af: MOVSD.REP ES:EDI,ESI
// 005841b1: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 005841b6: ADD ESP,0x60
// 005841b9: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 005841be: SUB ESP,0x30
// 005841c1: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005841c3: MOV ECX,0xc
// 005841c8: MOV EDI,ESP
// 005841ca: LEA ESI,[EAX + 0x90]
// 005841d0: MOVSD.REP ES:EDI,ESI
// 005841d2: SUB ESP,0x30
// 005841d5: MOV ECX,0xc
// 005841da: MOV EDI,ESP
// 005841dc: LEA ESI,[EAX + 0x60]
// 005841df: MOVSD.REP ES:EDI,ESI
// 005841e1: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 005841e6: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 005841eb: ADD ESP,0x60
// 005841ee: MOV ECX,0xc
// 005841f3: SUB ESP,0x30
// 005841f6: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005841f8: MOV EDI,ESP
// 005841fa: MOV ESI,EAX
// 005841fc: MOVSD.REP ES:EDI,ESI
// 005841fe: SUB ESP,0x30
// 00584201: MOV ECX,0xc
// 00584206: MOV EDI,ESP
// 00584208: LEA ESI,[EAX + 0x90]
// 0058420e: MOVSD.REP ES:EDI,ESI
// 00584210: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 00584215: ADD ESP,0x60
// 00584218: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 0058421d: SUB ESP,0x30
// 00584220: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00584222: MOV ECX,0xc
// 00584227: MOV EDI,ESP
// 00584229: LEA ESI,[EAX + 0xf0]
// 0058422f: MOVSD.REP ES:EDI,ESI
// 00584231: SUB ESP,0x30
// 00584234: MOV ECX,0xc
// 00584239: MOV EDI,ESP
// 0058423b: LEA ESI,[EAX + 0xc0]
// 00584241: MOVSD.REP ES:EDI,ESI
// 00584243: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 00584248: ADD ESP,0x60
// 0058424b: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00584250: SUB ESP,0x30
// 00584253: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00584255: MOV ECX,0xc
// 0058425a: MOV EDI,ESP
// 0058425c: LEA ESI,[EAX + 0x120]
// 00584262: MOVSD.REP ES:EDI,ESI
// 00584264: SUB ESP,0x30
// 00584267: MOV ECX,0xc
// 0058426c: MOV EDI,ESP
// 0058426e: LEA ESI,[EAX + 0xf0]
// 00584274: MOVSD.REP ES:EDI,ESI
// 00584276: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 0058427b: ADD ESP,0x60
// 0058427e: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00584283: SUB ESP,0x30
// 00584286: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 00584288: MOV ECX,0xc
// 0058428d: MOV EDI,ESP
// 0058428f: LEA ESI,[EAX + 0x150]
// 00584295: MOVSD.REP ES:EDI,ESI
// 00584297: SUB ESP,0x30
// 0058429a: MOV ECX,0xc
// 0058429f: MOV EDI,ESP
// 005842a1: LEA ESI,[EAX + 0x120]
// 005842a7: MOVSD.REP ES:EDI,ESI
// 005842a9: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 005842ae: ADD ESP,0x60
// 005842b1: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 005842b6: SUB ESP,0x30
// 005842b9: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005842bb: MOV ECX,0xc
// 005842c0: MOV EDI,ESP
// 005842c2: LEA ESI,[EAX + 0xc0]
// 005842c8: MOVSD.REP ES:EDI,ESI
// 005842ca: SUB ESP,0x30
// 005842cd: MOV ECX,0xc
// 005842d2: MOV EDI,ESP
// 005842d4: LEA ESI,[EAX + 0x150]
// 005842da: MOVSD.REP ES:EDI,ESI
// 005842dc: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 005842e1: ADD ESP,0x60
// 005842e4: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 005842e9: SUB ESP,0x30
// 005842ec: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005842ee: MOV ECX,0xc
// 005842f3: MOV EDI,ESP
// 005842f5: LEA ESI,[EAX + 0xc0]
// 005842fb: MOVSD.REP ES:EDI,ESI
// 005842fd: SUB ESP,0x30
// 00584300: MOV ECX,0xc
// 00584305: MOV EDI,ESP
// 00584307: MOV ESI,EAX
// 00584309: MOVSD.REP ES:EDI,ESI
// 0058430b: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 00584310: ADD ESP,0x60
// 00584313: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00584318: SUB ESP,0x30
// 0058431b: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0058431d: MOV ECX,0xc
// 00584322: MOV EDI,ESP
// 00584324: LEA ESI,[EAX + 0xf0]
// 0058432a: MOVSD.REP ES:EDI,ESI
// 0058432c: SUB ESP,0x30
// 0058432f: MOV ECX,0xc
// 00584334: MOV EDI,ESP
// 00584336: LEA ESI,[EAX + 0x30]
// 00584339: MOVSD.REP ES:EDI,ESI
// 0058433b: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 00584340: ADD ESP,0x60
// 00584343: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00584348: SUB ESP,0x30
// 0058434b: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0058434d: MOV ECX,0xc
// 00584352: MOV EDI,ESP
// 00584354: LEA ESI,[EAX + 0x120]
// 0058435a: MOVSD.REP ES:EDI,ESI
// 0058435c: SUB ESP,0x30
// 0058435f: MOV ECX,0xc
// 00584364: MOV EDI,ESP
// 00584366: LEA ESI,[EAX + 0x60]
// 00584369: MOVSD.REP ES:EDI,ESI
// 0058436b: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 00584370: ADD ESP,0x60
// 00584373: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 00584378: SUB ESP,0x30
// 0058437b: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0058437d: MOV ECX,0xc
// 00584382: MOV EDI,ESP
// 00584384: LEA ESI,[EAX + 0x150]
// 0058438a: MOVSD.REP ES:EDI,ESI
// 0058438c: SUB ESP,0x30
// 0058438f: MOV ECX,0xc
// 00584394: MOV EDI,ESP
// 00584396: LEA ESI,[EAX + 0x90]
// 0058439c: MOVSD.REP ES:EDI,ESI
// 0058439e: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 005843a3: ADD ESP,0x60
// 005843a6: JMP 0x00583a98
//   XREF to: 00583a98 (UNCONDITIONAL_JUMP)
// 005843ab: MOV EAX,[0x0067b654]
//   Label: LAB_005843ab
//   XREF to: 0067b654 (READ)
// 005843b0: MOV EAX,dword ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 005843b6: PUSH 0x38
// 005843b8: MOV dword ptr [EBP + 0x36],EAX
// 005843bb: MOV dword ptr [EBP + 0x32],EAX
// 005843be: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005843c3: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005843c4: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005843c6: CALL dword ptr [EDX]
// 005843c8: ADD ESP,0x8
// 005843cb: TEST EAX,EAX
// 005843cd: JZ 0x0058466c
//   XREF to: 0058466c (CONDITIONAL_JUMP)
// 005843d3: FLD float ptr [EBP + 0x36]
// 005843d6: FMUL double ptr [0x00648e05]
//   XREF to: 00648e05 (READ)
// 005843dc: FSTP float ptr [EBP + 0x32]
//   Label: LAB_005843dc
// 005843df: FLD float ptr [EBP + 0x42]
//   Label: LAB_005843df
// 005843e2: FMUL double ptr [0x00648e15]
//   XREF to: 00648e15 (READ)
// 005843e8: FLD float ptr [EBP + 0x32]
// 005843eb: FLD ST0
// 005843ed: FMUL double ptr [0x00648e0d]
//   XREF to: 00648e0d (READ)
// 005843f3: PUSH 0x4a
// 005843f5: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005843fa: FXCH ST2
// 005843fc: FMULP
// 005843fe: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005843ff: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00584401: FXCH
// 00584403: FSTP float ptr [EBP + 0x3e]
// 00584406: FSTP float ptr [EBP + 0x2e]
// 00584409: CALL dword ptr [EDX]
// 0058440b: ADD ESP,0x8
// 0058440e: TEST EAX,EAX
// 00584410: JZ 0x0058441b
//   XREF to: 0058441b (CONDITIONAL_JUMP)
// 00584412: FLD float ptr [EBP + -0x3a]
// 00584415: FADD float ptr [EBP + 0x3e]
// 00584418: FSTP float ptr [EBP + -0x3a]
// 0058441b: PUSH 0x4e
//   Label: LAB_0058441b
// 0058441d: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00584422: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00584423: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00584425: CALL dword ptr [EDX]
// 00584427: ADD ESP,0x8
// 0058442a: TEST EAX,EAX
// 0058442c: JZ 0x00584437
//   XREF to: 00584437 (CONDITIONAL_JUMP)
// 0058442e: FLD float ptr [EBP + -0x3a]
// 00584431: FSUB float ptr [EBP + 0x3e]
// 00584434: FSTP float ptr [EBP + -0x3a]
// 00584437: PUSH 0x52
//   Label: LAB_00584437
// 00584439: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0058443e: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0058443f: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00584441: CALL dword ptr [EDX]
// 00584443: ADD ESP,0x8
// 00584446: TEST EAX,EAX
// 00584448: JZ 0x00584453
//   XREF to: 00584453 (CONDITIONAL_JUMP)
// 0058444a: FLD float ptr [EBP + -0x36]
// 0058444d: FADD float ptr [EBP + 0x3e]
// 00584450: FSTP float ptr [EBP + -0x36]
// 00584453: PUSH 0x53
//   Label: LAB_00584453
// 00584455: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0058445a: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0058445b: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0058445d: CALL dword ptr [EDX]
// 0058445f: ADD ESP,0x8
// 00584462: TEST EAX,EAX
// 00584464: JZ 0x0058446f
//   XREF to: 0058446f (CONDITIONAL_JUMP)
// 00584466: FLD float ptr [EBP + -0x36]
// 00584469: FSUB float ptr [EBP + 0x3e]
// 0058446c: FSTP float ptr [EBP + -0x36]
// 0058446f: PUSH 0xd
//   Label: LAB_0058446f
// 00584471: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00584476: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00584477: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00584479: CALL dword ptr [EDX + 0x4]
// 0058447c: ADD ESP,0x8
// 0058447f: TEST EAX,EAX
// 00584481: JZ 0x0058448c
//   XREF to: 0058448c (CONDITIONAL_JUMP)
// 00584483: FLD float ptr [EBP + 0x42]
// 00584486: FSUB float ptr [EBP + 0x2e]
// 00584489: FSTP float ptr [EBP + 0x42]
// 0058448c: PUSH 0xc
//   Label: LAB_0058448c
// 0058448e: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00584493: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00584494: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00584496: CALL dword ptr [EDX + 0x4]
// 00584499: ADD ESP,0x8
// 0058449c: TEST EAX,EAX
// 0058449e: JZ 0x005844a9
//   XREF to: 005844a9 (CONDITIONAL_JUMP)
// 005844a0: FLD float ptr [EBP + 0x42]
// 005844a3: FADD float ptr [EBP + 0x2e]
// 005844a6: FSTP float ptr [EBP + 0x42]
// 005844a9: FLD float ptr [EBP + -0x3a]
//   Label: LAB_005844a9
// 005844ac: FCOMP double ptr [0x00648e35]
//   XREF to: 00648e35 (READ)
// 005844b2: FNSTSW AX
// 005844b4: SAHF
// 005844b5: JNC 0x005844be
//   XREF to: 005844be (CONDITIONAL_JUMP)
// 005844b7: MOV dword ptr [EBP + -0x3a],0xbfc90fdb
// 005844be: FLD float ptr [EBP + -0x3a]
//   Label: LAB_005844be
// 005844c1: FCOMP double ptr [0x00648e0d]
//   XREF to: 00648e0d (READ)
// 005844c7: FNSTSW AX
// 005844c9: SAHF
// 005844ca: JBE 0x005844d3
//   XREF to: 005844d3 (CONDITIONAL_JUMP)
// 005844cc: MOV dword ptr [EBP + -0x3a],0x3fc90fdb
// 005844d3: FLD float ptr [EBP + -0x36]
//   Label: LAB_005844d3
// 005844d6: FCOMP double ptr [0x00648e35]
//   XREF to: 00648e35 (READ)
// 005844dc: FNSTSW AX
// 005844de: SAHF
// 005844df: JNC 0x005844ed
//   XREF to: 005844ed (CONDITIONAL_JUMP)
// 005844e1: FLD float ptr [EBP + -0x36]
// 005844e4: FADD float ptr [0x00648e41]
//   XREF to: 00648e41 (READ)
// 005844ea: FSTP float ptr [EBP + -0x36]
// 005844ed: FLD float ptr [EBP + -0x36]
//   Label: LAB_005844ed
// 005844f0: FCOMP double ptr [0x00648e0d]
//   XREF to: 00648e0d (READ)
// 005844f6: FNSTSW AX
// 005844f8: SAHF
// 005844f9: JBE 0x00584507
//   XREF to: 00584507 (CONDITIONAL_JUMP)
// 005844fb: FLD float ptr [EBP + -0x36]
// 005844fe: FADD float ptr [0x00648e3d]
//   XREF to: 00648e3d (READ)
// 00584504: FSTP float ptr [EBP + -0x36]
// 00584507: FLD float ptr [EBP + 0x42]
//   Label: LAB_00584507
// 0058450a: FCOMP double ptr [0x00648e15]
//   XREF to: 00648e15 (READ)
// 00584510: FNSTSW AX
// 00584512: SAHF
// 00584513: JNC 0x0058451c
//   XREF to: 0058451c (CONDITIONAL_JUMP)
// 00584515: MOV dword ptr [EBP + 0x42],0x3f000000
// 0058451c: PUSH 0x1d
//   Label: LAB_0058451c
// 0058451e: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00584523: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00584524: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00584526: CALL dword ptr [EDX]
// 00584528: ADD ESP,0x8
// 0058452b: TEST EAX,EAX
// 0058452d: JZ 0x00584695
//   XREF to: 00584695 (CONDITIONAL_JUMP)
// 00584533: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00584538: PUSH 0x38
// 0058453a: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 00584540: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00584545: FMUL double ptr [0x00648e1d]
//   XREF to: 00648e1d (READ)
// 0058454b: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0058454c: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0058454e: FSTP float ptr [EBP + 0x46]
// 00584551: CALL dword ptr [EDX]
// 00584553: ADD ESP,0x8
// 00584556: TEST EAX,EAX
// 00584558: JZ 0x00584566
//   XREF to: 00584566 (CONDITIONAL_JUMP)
// 0058455a: FLD float ptr [EBP + 0x46]
// 0058455d: FMUL double ptr [0x00648e25]
//   XREF to: 00648e25 (READ)
// 00584563: FSTP float ptr [EBP + 0x46]
// 00584566: PUSH 0x4b
//   Label: LAB_00584566
// 00584568: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0058456d: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0058456e: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00584570: CALL dword ptr [EDX]
// 00584572: ADD ESP,0x8
// 00584575: TEST EAX,EAX
// 00584577: JZ 0x00584585
//   XREF to: 00584585 (CONDITIONAL_JUMP)
// 00584579: MOV EAX,dword ptr [EBP + 0x52]
// 0058457c: FLD float ptr [EAX + 0xc]
// 0058457f: FSUB float ptr [EBP + 0x46]
// 00584582: FSTP float ptr [EAX + 0xc]
// 00584585: PUSH 0x4d
//   Label: LAB_00584585
// 00584587: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0058458c: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0058458d: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0058458f: CALL dword ptr [EDX]
// 00584591: ADD ESP,0x8
// 00584594: TEST EAX,EAX
// 00584596: JZ 0x005845a4
//   XREF to: 005845a4 (CONDITIONAL_JUMP)
// 00584598: MOV EAX,dword ptr [EBP + 0x52]
// 0058459b: FLD float ptr [EAX + 0xc]
// 0058459e: FADD float ptr [EBP + 0x46]
// 005845a1: FSTP float ptr [EAX + 0xc]
// 005845a4: PUSH 0x1e
//   Label: LAB_005845a4
// 005845a6: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005845ab: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005845ac: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005845ae: CALL dword ptr [EDX]
// 005845b0: ADD ESP,0x8
// 005845b3: TEST EAX,EAX
// 005845b5: JZ 0x005845c3
//   XREF to: 005845c3 (CONDITIONAL_JUMP)
// 005845b7: MOV EAX,dword ptr [EBP + 0x52]
// 005845ba: FLD float ptr [EAX + 0x10]
// 005845bd: FSUB float ptr [EBP + 0x46]
// 005845c0: FSTP float ptr [EAX + 0x10]
// 005845c3: PUSH 0x10
//   Label: LAB_005845c3
// 005845c5: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005845ca: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005845cb: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005845cd: CALL dword ptr [EDX]
// 005845cf: ADD ESP,0x8
// 005845d2: TEST EAX,EAX
// 005845d4: JZ 0x005845e2
//   XREF to: 005845e2 (CONDITIONAL_JUMP)
// 005845d6: MOV EAX,dword ptr [EBP + 0x52]
// 005845d9: FLD float ptr [EAX + 0x10]
// 005845dc: FADD float ptr [EBP + 0x46]
// 005845df: FSTP float ptr [EAX + 0x10]
// 005845e2: PUSH 0x50
//   Label: LAB_005845e2
// 005845e4: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005845e9: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005845ea: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005845ec: CALL dword ptr [EDX]
// 005845ee: ADD ESP,0x8
// 005845f1: TEST EAX,EAX
// 005845f3: JZ 0x00584601
//   XREF to: 00584601 (CONDITIONAL_JUMP)
// 005845f5: MOV EAX,dword ptr [EBP + 0x52]
// 005845f8: FLD float ptr [EAX + 0x14]
// 005845fb: FSUB float ptr [EBP + 0x46]
// 005845fe: FSTP float ptr [EAX + 0x14]
// 00584601: PUSH 0x48
//   Label: LAB_00584601
// 00584603: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00584608: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00584609: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0058460b: CALL dword ptr [EDX]
// 0058460d: ADD ESP,0x8
// 00584610: TEST EAX,EAX
// 00584612: JZ 0x00584620
//   XREF to: 00584620 (CONDITIONAL_JUMP)
// 00584614: MOV EAX,dword ptr [EBP + 0x52]
// 00584617: FLD float ptr [EAX + 0x14]
// 0058461a: FADD float ptr [EBP + 0x46]
// 0058461d: FSTP float ptr [EAX + 0x14]
// 00584620: MOV EAX,dword ptr [EBP + 0x52]
//   Label: LAB_00584620
// 00584623: MOV EDI,0x3f800000
// 00584628: MOV EDX,dword ptr [EAX + 0xc]
// 0058462b: MOV dword ptr [EBP + 0x3a],EDI
// 0058462e: CMP EDX,EDI
// 00584630: JGE 0x00584635
//   XREF to: 00584635 (CONDITIONAL_JUMP)
// 00584632: MOV dword ptr [EAX + 0xc],EDI
// 00584635: MOV EAX,dword ptr [EBP + 0x52]
//   Label: LAB_00584635
// 00584638: FLD float ptr [EAX + 0x10]
// 0058463b: FCOMP float ptr [EBP + 0x3a]
// 0058463e: FNSTSW AX
// 00584640: SAHF
// 00584641: JNC 0x0058464c
//   XREF to: 0058464c (CONDITIONAL_JUMP)
// 00584643: MOV EDX,dword ptr [EBP + 0x52]
// 00584646: MOV EAX,dword ptr [EBP + 0x3a]
// 00584649: MOV dword ptr [EDX + 0x10],EAX
// 0058464c: MOV EAX,dword ptr [EBP + 0x52]
//   Label: LAB_0058464c
// 0058464f: FLD float ptr [EAX + 0x14]
// 00584652: FCOMP float ptr [EBP + 0x3a]
// 00584655: FNSTSW AX
// 00584657: SAHF
// 00584658: JNC 0x00583b3b
//   XREF to: 00583b3b (CONDITIONAL_JUMP)
// 0058465e: MOV EDX,dword ptr [EBP + 0x52]
// 00584661: MOV EAX,dword ptr [EBP + 0x3a]
// 00584664: MOV dword ptr [EDX + 0x14],EAX
// 00584667: JMP 0x00583b3b
//   XREF to: 00583b3b (UNCONDITIONAL_JUMP)
// 0058466c: PUSH 0x2a
//   Label: LAB_0058466c
// 0058466e: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00584673: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00584674: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00584676: CALL dword ptr [EDX]
// 00584678: ADD ESP,0x8
// 0058467b: TEST EAX,EAX
// 0058467d: JZ 0x005843df
//   XREF to: 005843df (CONDITIONAL_JUMP)
// 00584683: FLD float ptr [EBP + 0x36]
// 00584686: FLD ST0
// 00584688: FMUL double ptr [0x00648dfd]
//   XREF to: 00648dfd (READ)
// 0058468e: FSTP ST1
// 00584690: JMP 0x005843dc
//   XREF to: 005843dc (UNCONDITIONAL_JUMP)
// 00584695: LEA EAX,[EBP + 0xfffffe66]
//   Label: LAB_00584695
// 0058469b: PUSH EAX
// 0058469c: MOV EBX,dword ptr [EBP + 0x52]
// 0058469f: CALL core_skeleton.cpp_FUN_005a2060
//   XREF to: 005a2060 (UNCONDITIONAL_CALL)
// 005846a4: LEA EAX,[EBP + 0xfffffe66]
// 005846aa: ADD ESP,0x4
// 005846ad: CMP EAX,EBX
// 005846af: JZ 0x005846cb
//   XREF to: 005846cb (CONDITIONAL_JUMP)
// 005846b1: MOV EAX,dword ptr [EBX]
// 005846b3: MOV dword ptr [EBP + 0xfffffe66],EAX
// 005846b9: MOV EAX,dword ptr [EBX + 0x4]
// 005846bc: MOV dword ptr [EBP + 0xfffffe6a],EAX
// 005846c2: MOV EAX,dword ptr [EBX + 0x8]
// 005846c5: MOV dword ptr [EBP + 0xfffffe6e],EAX
// 005846cb: LEA EAX,[EBP + 0xffffff12]
//   Label: LAB_005846cb
// 005846d1: PUSH EAX
// 005846d2: MOV EAX,dword ptr [EBP + 0x52]
// 005846d5: ADD EAX,0x18
// 005846d8: PUSH EAX
// 005846d9: CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
//   XREF to: 00472160 (UNCONDITIONAL_CALL)
// 005846de: MOV EDX,EAX
// 005846e0: LEA EAX,[EBP + 0xfffffe72]
// 005846e6: ADD ESP,0x8
// 005846e9: CMP EAX,EDX
// 005846eb: JZ 0x00584707
//   XREF to: 00584707 (CONDITIONAL_JUMP)
// 005846ed: MOV EAX,dword ptr [EDX]
// 005846ef: MOV dword ptr [EBP + 0xfffffe72],EAX
// 005846f5: MOV EAX,dword ptr [EDX + 0x4]
// 005846f8: MOV dword ptr [EBP + 0xfffffe76],EAX
// 005846fe: MOV EAX,dword ptr [EDX + 0x8]
// 00584701: MOV dword ptr [EBP + 0xfffffe7a],EAX
// 00584707: LEA EAX,[EBP + 0xfffffe66]
//   Label: LAB_00584707
// 0058470d: PUSH EAX
// 0058470e: MOV ESI,dword ptr [EBP + 0x52]
// 00584711: CALL core_skeleton.cpp_FUN_005a20b0
//   XREF to: 005a20b0 (UNCONDITIONAL_CALL)
// 00584716: LEA EAX,[EBP + 0xfffffe66]
// 0058471c: ADD ESP,0x4
// 0058471f: CMP EAX,ESI
// 00584721: JZ 0x0058473d
//   XREF to: 0058473d (CONDITIONAL_JUMP)
// 00584723: MOV EAX,dword ptr [EBP + 0xfffffe66]
// 00584729: MOV dword ptr [ESI],EAX
// 0058472b: MOV EAX,dword ptr [EBP + 0xfffffe6a]
// 00584731: MOV dword ptr [ESI + 0x4],EAX
// 00584734: MOV EAX,dword ptr [EBP + 0xfffffe6e]
// 0058473a: MOV dword ptr [ESI + 0x8],EAX
// 0058473d: LEA EAX,[EBP + 0xfffffe72]
//   Label: LAB_0058473d
// 00584743: PUSH EAX
// 00584744: MOV EAX,dword ptr [EBP + 0x52]
// 00584747: ADD EAX,0x18
// 0058474a: PUSH EAX
// 0058474b: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 00584750: ADD ESP,0x8
// 00584753: JMP 0x00583b3b
//   XREF to: 00583b3b (UNCONDITIONAL_JUMP)
// 00584758: MOV EAX,dword ptr [EBP + 0x92]
//   Label: LAB_00584758
// 0058475e: MOV EAX,dword ptr [EAX + 0x15b410]
// 00584764: DEC EAX
// 00584765: MOV dword ptr [EBP + 0x76],EAX
// 00584768: JMP 0x00583b75
//   XREF to: 00583b75 (UNCONDITIONAL_JUMP)
// 0058476d: MOV ECX,dword ptr [EBP + 0x76]
//   Label: LAB_0058476d
// 00584770: MOV EDX,dword ptr [EBP + 0x92]
// 00584776: INC ECX
// 00584777: MOV EBX,dword ptr [EDX + 0x15b410]
// 0058477d: MOV dword ptr [EBP + 0x76],ECX
// 00584780: CMP ECX,EBX
// 00584782: JL 0x00583b75
//   XREF to: 00583b75 (CONDITIONAL_JUMP)
// 00584788: MOV dword ptr [EBP + 0x76],EAX
// 0058478b: JMP 0x00583b75
//   XREF to: 00583b75 (UNCONDITIONAL_JUMP)
// 00584790: PUSH 0x648d46
//   Label: LAB_00584790
//   XREF to: 00648d46 (DATA)
// 00584795: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0058479b: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0058479c: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 005847a1: ADD ESP,0x8
// 005847a4: JMP 0x00583c2f
//   XREF to: 00583c2f (UNCONDITIONAL_JUMP)
// 005847a9: MOV ESI,dword ptr [EBP + 0x76]
//   Label: LAB_005847a9
// 005847ac: TEST ESI,ESI
// 005847ae: JL 0x005847b4
//   XREF to: 005847b4 (CONDITIONAL_JUMP)
// 005847b0: CMP ESI,EBX
// 005847b2: JL 0x005847c4
//   XREF to: 005847c4 (CONDITIONAL_JUMP)
// 005847b4: PUSH 0x648dbd
//   Label: LAB_005847b4
//   XREF to: 00648dbd (DATA)
// 005847b9: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 005847be: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 005847bf: JMP 0x00583c67
//   XREF to: 00583c67 (UNCONDITIONAL_JUMP)
// 005847c4: IMUL EBX,EBX,0x44
//   Label: LAB_005847c4
// 005847c7: IMUL ESI,ESI,0x44
// 005847ca: MOV EDX,dword ptr [EBP + 0x4e]
// 005847cd: ADD EBX,EDX
// 005847cf: ADD ESI,EDX
// 005847d1: MOV EDX,EBX
// 005847d3: MOV EAX,ESI
// 005847d5: CMP EBX,ESI
// 005847d7: JZ 0x005847e9
//   XREF to: 005847e9 (CONDITIONAL_JUMP)
// 005847d9: MOV ECX,dword ptr [ESI]
// 005847db: MOV dword ptr [EBX],ECX
// 005847dd: MOV ECX,dword ptr [ESI + 0x4]
// 005847e0: MOV dword ptr [EBX + 0x4],ECX
// 005847e3: MOV ECX,dword ptr [ESI + 0x8]
// 005847e6: MOV dword ptr [EBX + 0x8],ECX
// 005847e9: LEA ESI,[EAX + 0xc]
//   Label: LAB_005847e9
// 005847ec: LEA EBX,[EDX + 0xc]
// 005847ef: CMP EBX,ESI
// 005847f1: JZ 0x00584803
//   XREF to: 00584803 (CONDITIONAL_JUMP)
// 005847f3: MOV ECX,dword ptr [ESI]
// 005847f5: MOV dword ptr [EBX],ECX
// 005847f7: MOV ECX,dword ptr [ESI + 0x4]
// 005847fa: MOV dword ptr [EBX + 0x4],ECX
// 005847fd: MOV ECX,dword ptr [ESI + 0x8]
// 00584800: MOV dword ptr [EBX + 0x8],ECX
// 00584803: MOV ECX,dword ptr [EAX + 0x18]
//   Label: LAB_00584803
// 00584806: MOV dword ptr [EDX + 0x18],ECX
// 00584809: MOV ECX,dword ptr [EAX + 0x1c]
// 0058480c: MOV dword ptr [EDX + 0x1c],ECX
// 0058480f: MOV ECX,dword ptr [EAX + 0x20]
// 00584812: MOV dword ptr [EDX + 0x20],ECX
// 00584815: MOV ECX,dword ptr [EAX + 0x24]
// 00584818: MOV dword ptr [EDX + 0x24],ECX
// 0058481b: MOV ECX,dword ptr [EAX + 0x28]
// 0058481e: MOV dword ptr [EDX + 0x28],ECX
// 00584821: MOV ECX,dword ptr [EAX + 0x2c]
// 00584824: MOV dword ptr [EDX + 0x2c],ECX
// 00584827: MOV ECX,dword ptr [EAX + 0x30]
// 0058482a: MOV dword ptr [EDX + 0x30],ECX
// 0058482d: MOV ECX,dword ptr [EAX + 0x34]
// 00584830: MOV dword ptr [EDX + 0x34],ECX
// 00584833: MOV ECX,dword ptr [EAX + 0x38]
// 00584836: MOV dword ptr [EDX + 0x38],ECX
// 00584839: MOV EBX,dword ptr [EAX + 0x3c]
// 0058483c: MOV dword ptr [EDX + 0x3c],EBX
// 0058483f: MOV EAX,dword ptr [EAX + 0x40]
// 00584842: MOV dword ptr [EDX + 0x40],EAX
// 00584845: MOV EAX,dword ptr [EBP + 0x92]
// 0058484b: MOV EAX,dword ptr [EAX + 0x15b410]
// 00584851: MOV dword ptr [EBP + 0x76],EAX
// 00584854: IMUL EBX,EAX,0x44
// 00584857: ADD EBX,dword ptr [EBP + 0x4e]
// 0058485a: MOV EDX,dword ptr [EBP + 0x92]
// 00584860: INC EAX
// 00584861: MOV dword ptr [EDX + 0x15b410],EAX
// 00584867: LEA EAX,[EBP + 0xfffffee2]
// 0058486d: PUSH EAX
// 0058486e: LEA EAX,[EBP + -0x5e]
// 00584871: MOV ECX,0x3f000000
// 00584876: PUSH EAX
// 00584877: LEA EAX,[EBX + 0x18]
// 0058487a: MOV dword ptr [EBP + 0xfffffee2],ECX
// 00584880: PUSH EAX
// 00584881: MOV dword ptr [EBP + 0xfffffee6],ECX
// 00584887: MOV dword ptr [EBP + 0xfffffeea],ECX
// 0058488d: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 00584892: FLD float ptr [EAX]
// 00584894: FADD float ptr [EBX]
// 00584896: FSTP float ptr [EBX]
// 00584898: FLD float ptr [EAX + 0x4]
// 0058489b: FADD float ptr [EBX + 0x4]
// 0058489e: FSTP float ptr [EBX + 0x4]
// 005848a1: FLD float ptr [EAX + 0x8]
// 005848a4: FADD float ptr [EBX + 0x8]
// 005848a7: ADD ESP,0xc
// 005848aa: FSTP float ptr [EBX + 0x8]
// 005848ad: JMP 0x00583c6f
//   XREF to: 00583c6f (UNCONDITIONAL_JUMP)
// 005848b2: MOV EDX,dword ptr [EBP + 0x92]
//   Label: LAB_005848b2
// 005848b8: PUSH EDX
// 005848b9: CALL core_set.cpp_CDemonSet_FUN_0056d2d0
//   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)
// 005848be: ADD ESP,0x4
// 005848c1: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 005848c6: MOV EAX,dword ptr [EBP + 0x92]
// 005848cc: MOV dword ptr [EAX + 0x15ac8c],0x0
// 005848d6: MOV dword ptr [EAX + 0x15ac90],0x0
// 005848e0: MOV dword ptr [EAX + 0x15ac84],0x0
// 005848ea: LEA ESP,[EBP + 0x7e]
// 005848ed: POP EBP
// 005848ee: POP EDI
// 005848ef: POP ESI
// 005848f0: POP EBX
// 005848f1: RET
