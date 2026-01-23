// Name: core_setedit.cpp_CDemonSet_FUN_00583170
// Address: 00583170
// Address Range: [[00583170, 00583633] [00583651, 00583aac] [00583ad6, 005848f1]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_CDemonSet_FUN_00583170(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_FUN_00583170(CDemonSet *this_ptr)

{
  CVector3f *corner2;
  bool bVar1;
  SRenderVertex vertex2;
  SRenderVertex vertex2_00;
  SRenderVertex vertex2_01;
  SRenderVertex vertex2_02;
  SRenderVertex vertex2_03;
  SRenderVertex vertex2_04;
  SRenderVertex vertex2_05;
  SRenderVertex vertex2_06;
  SRenderVertex vertex2_07;
  SRenderVertex vertex2_08;
  SRenderVertex vertex2_09;
  SRenderVertex vertex2_10;
  CMatrix3x3f *pCVar2;
  uchar uVar3;
  CVector3f *pCVar4;
  undefined3 extraout_var;
  int iVar5;
  int iVar6;
  SVDBox *pSVar7;
  int iVar8;
  SRenderVertex *pSVar9;
  SRenderVertex *pSVar10;
  SVDBox *pSVar11;
  int *piVar12;
  byte bVar13;
  SRenderVertex in_stack_fffffd38;
  byte in_stack_fffffd68 [20];
  uint in_stack_fffffd7c;
  float *in_stack_fffffd80;
  CVector3f *in_stack_fffffd84;
  uint uVar14;
  uint uVar15;
  SRenderVertex *output;
  CVector3i *pCVar16;
  CGame *in_stack_fffffd98;
  float in_stack_fffffdbc;
  CKeys *in_stack_fffffdc0;
  float in_stack_fffffdc4;
  float in_stack_fffffdcc;
  CKeys *pCVar17;
  float fVar18;
  float fVar19;
  char *format;
  CVector3f local_1dc;
  CVector3f local_1d0;
  float local_1c4;
  CKeys *local_1c0;
  float local_1bc;
  CVector3i local_1b8;
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
  float local_c4;
  uint local_c0;
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
  uint local_54;
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
  
  bVar13 = 0;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Preparing set.");
  core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
  this_ptr->actor_list_ptr = (void *)0x0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)&stack0xfffffdbc);
  local_c8 = 0.0;
  local_c4 = 0.0;
  local_c0 = 0;
  local_4c = 40.0;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_fffffd98);
  local_44 = this_ptr->vdir_boxes;
  this_ptr->unk_lighting_param3 = 1;
  this_ptr->unk_lighting_param4 = 1;
  this_ptr->unk_lighting_param1 = 1;
  local_64 = this_ptr->cameras;
  local_6c = &g_CDemonCameraInstance.base.position.y;
  local_18 = 0;
  local_70 = &g_CDemonCameraInstance.base.position.z;
  local_40 = local_44;
  do {
    iVar8 = local_18;
    local_68 = g_MouseButtonFlags;
    core_setdir_cpp_CDemonSet_FUN_00576710(this_ptr);
    local_3c = (SVDBox *)0x0;
    if ((-1 < iVar8) && (iVar8 < this_ptr->vdir_box_count)) {
      local_3c = local_40 + iVar8;
    }
    wincore_winrun_cpp_doNothing_FUN_005f2f80();
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    pSVar7 = local_3c;
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    if (pSVar7 != (SVDBox *)0x0) {
      if ((float *)&stack0xfffffdc8 != &local_c8) {
        in_stack_fffffdcc = local_c4;
      }
      pCVar4 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                         (&local_3c->rotation_matrix,&local_1dc);
      in_stack_fffffdcc = in_stack_fffffdcc + pCVar4->y;
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                ((CMatrix3x3f *)&stack0xfffffd94,(CVector3f *)&stack0xfffffdc8);
      local_1d0.z = -local_4c;
      local_1d0.x = 0.0;
      local_1d0.y = 0.0;
      local_14 = local_1d0.z;
      pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         ((CMatrix3x3f *)&stack0xfffffd94,&local_134,&local_1d0);
      local_1c4 = pCVar4->x + (local_3c->position).x;
      local_1c0 = (CKeys *)(pCVar4->y + (local_3c->position).y);
      local_1bc = pCVar4->z + (local_3c->position).z;
      if ((float *)&stack0xfffffdbc != &local_1c4) {
        in_stack_fffffdbc = local_1c4;
        in_stack_fffffdc0 = local_1c0;
        in_stack_fffffdc4 = local_1bc;
      }
    }
    if ((int *)&stack0x00000000 != &g_CDemonCameraInstance.rect_array[7].top) {
      g_CDemonCameraInstance.base.position.x = (int)in_stack_fffffdbc;
      g_CDemonCameraInstance.base.position.y = (int)in_stack_fffffdc0;
      g_CDemonCameraInstance.base.position.z = (int)in_stack_fffffdc4;
    }
    fVar18 = 28.0;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              ((CMatrix3x3f *)&g_CDemonCameraInstance.base.rotation_matrix,
               (CVector3f *)&stack0xfffffdc8);
    g_CDemonCameraInstance.base.projection_scale = fVar18;
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(this_ptr,150.0,0);
    iVar8 = local_18;
    local_28 = -1;
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2,1);
    if ((-1 < iVar8) && (iVar8 < this_ptr->vdir_box_count)) {
      do {
        local_28 = iVar8;
        iVar8 = *(int *)(this_ptr->vdir_boxes[local_28].field3_0x3c + 4);
      } while (-1 < iVar8);
    }
    iVar8 = 0;
    if (0 < this_ptr->vdir_box_count) {
      local_34 = &local_44->rotation_matrix;
      do {
        pCVar4 = &local_44[iVar8].position;
        core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(local_34,&local_194);
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr2,pCVar4);
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr2,(CVector3i *)&local_194,(CVector3i *)0x0);
        iVar5 = iVar8;
        if (iVar8 == local_18) {
          corner2 = pCVar4 + 1;
          in_stack_fffffd80 = &local_158;
          local_158 = -corner2->x;
          local_154 = -pCVar4[1].y;
          local_150 = -pCVar4[1].z;
          in_stack_fffffd7c = 0x583519;
          core_setedit_cpp_FUN_005817d0(in_stack_fffffd80);
          uVar3 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                            (g_CEditorToolsPtr);
          shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
                    (g_CEditorToolsPtr,2.0,CONCAT31(extraout_var,uVar3));
          local_128.x = -corner2->x;
          local_128.y = -pCVar4[1].y;
          local_128.z = -pCVar4[1].z;
          in_stack_fffffd84 = (CVector3f *)0x583576;
          shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
                    (g_CEditorToolsPtr,&local_128,corner2,CONCAT31(extraout_var,uVar3));
        }
        else {
          do {
            iVar6 = iVar5;
            iVar5 = *(int *)(this_ptr->vdir_boxes[iVar6].field3_0x3c + 4);
          } while (-1 < iVar5);
          in_stack_fffffd84 = pCVar4 + 1;
          if (iVar6 == local_28) {
            in_stack_fffffd80 = &local_f8;
            local_f8 = -in_stack_fffffd84->x;
            local_f4 = -pCVar4[1].y;
            local_f0 = -pCVar4[1].z;
            in_stack_fffffd7c = 0x5835b5;
            core_setedit_cpp_FUN_005817d0(in_stack_fffffd80);
            local_8c.x = -in_stack_fffffd84->x;
            local_8c.y = -pCVar4[1].y;
            local_8c.z = -pCVar4[1].z;
            pCVar4 = (CVector3f *)0x5835e1;
            shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
                      (g_CEditorToolsPtr,&local_8c,in_stack_fffffd84,2);
            in_stack_fffffd84 = pCVar4;
          }
          else {
            in_stack_fffffd80 = &local_140;
            local_140 = -in_stack_fffffd84->x;
            local_13c = -pCVar4[1].y;
            local_138 = -pCVar4[1].z;
            in_stack_fffffd7c = 0x583621;
            core_setedit_cpp_FUN_005817d0(in_stack_fffffd80);
          }
        }
        pCVar2 = local_34;
        iVar8 = iVar8 + 1;
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
        local_34 = (CMatrix3x3f *)((int)(pCVar2 + 1) + 0x20);
      } while (iVar8 < this_ptr->vdir_box_count);
    }
    local_30 = 0;
    if (0 < this_ptr->camera_count) {
      local_2c = (CVector3i *)&local_64->orientation;
      local_20 = &local_64->position;
      do {
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr2,local_20);
        iVar8 = 4;
        bVar1 = true;
        uVar14 = 0x5836a9;
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr2,local_2c,(CVector3i *)0x0);
        if ((-1 < local_18) && (local_18 < this_ptr->vdir_box_count)) {
          uVar14 = 0x5836cb;
          iVar5 = core_setdir_cpp_CDemonSet_FUN_00576340(this_ptr);
          if (iVar5 != 0) {
            iVar8 = 0xfb;
            bVar1 = false;
          }
        }
        local_164 = -1.0;
        local_15c = 2.0;
        local_160 = -1.0;
        local_e0.x = (int)ROUND(256.0f * -1.0);
        local_e0.y = (int)ROUND(256.0f * -1.0);
        local_e0.z = (int)ROUND(256.0f * 2.0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_e0);
        local_164 = -local_164;
        local_104.x = (int)ROUND(local_164 * 256.0f);
        local_104.y = (int)ROUND(local_160 * 256.0f);
        local_104.z = (int)ROUND(local_15c * 256.0f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_104);
        local_160 = -local_160;
        local_1b8.x = (int)ROUND(local_164 * 256.0f);
        local_1b8.y = (int)ROUND(local_160 * 256.0f);
        local_1b8.z = (int)ROUND(local_15c * 256.0f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_1b8);
        local_164 = -local_164;
        local_b0.x = (int)ROUND(local_164 * 256.0f);
        local_b0.y = (int)ROUND(local_160 * 256.0f);
        local_b0.z = (int)ROUND(local_15c * 256.0f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_b0);
        local_164 = -0.3;
        local_160 = -0.3;
        local_15c = 0.0;
        local_1a0.x = (int)ROUND(256.0f * -0.3);
        local_1a0.y = (int)ROUND(256.0f * -0.3);
        local_1a0.z = (int)ROUND(256.0f * 0.0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[4].projected_vertex,&local_1a0);
        local_164 = -local_164;
        local_170.x = (int)ROUND(local_164 * 256.0f);
        local_170.y = (int)ROUND(local_160 * 256.0f);
        local_170.z = (int)ROUND(local_15c * 256.0f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[5].projected_vertex,&local_170);
        local_160 = -local_160;
        local_14c.x = (int)ROUND(local_164 * 256.0f);
        local_14c.y = (int)ROUND(local_160 * 256.0f);
        local_14c.z = (int)ROUND(local_15c * 256.0f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[6].projected_vertex,&local_14c);
        local_164 = -local_164;
        local_a4.x = (int)ROUND(local_164 * 256.0f);
        local_a4.y = (int)ROUND(local_160 * 256.0f);
        local_a4.z = (int)ROUND(local_15c * 256.0f);
        pCVar16 = &local_a4;
        output = g_CDemonRendererPtr2->vertex_buffer_ptr + 7;
        uVar15 = 0x58399b;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c(&output->projected_vertex,pCVar16);
        if (bVar1) {
          engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
                    (g_CDemonRendererPtr2,iVar8);
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,0,1)
          ;
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,1,2)
          ;
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,2,3)
          ;
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,3,0)
          ;
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,4,5)
          ;
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,5,6)
          ;
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,6,7)
          ;
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,7,4)
          ;
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,0,4)
          ;
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,1,5)
          ;
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,2,6)
          ;
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,3,7)
          ;
        }
        else {
          pSVar10 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          pSVar9 = pSVar10 + 1;
          piVar12 = (int *)&stack0xfffffd68;
          for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar12 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar13 * -2 + 1) * 4);
            piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
          }
          piVar12 = (int *)&stack0xfffffd38;
          for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar12 = (pSVar10->projected_vertex).transformed_x;
            pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar13 * -2 + 1) * 4);
            piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
          }
          vertex2.projected_vertex.screen_y = in_stack_fffffd7c;
          vertex2.projected_vertex.transformed_x = in_stack_fffffd68._0_4_;
          vertex2.projected_vertex.transformed_y = in_stack_fffffd68._4_4_;
          vertex2.projected_vertex.transformed_z = in_stack_fffffd68._8_4_;
          vertex2.projected_vertex.inv_z = in_stack_fffffd68._12_4_;
          vertex2.projected_vertex.screen_x = in_stack_fffffd68._16_4_;
          vertex2.u = (float)in_stack_fffffd80;
          vertex2.v = (float)in_stack_fffffd84;
          vertex2.light = (float)uVar14;
          vertex2.color = uVar15;
          vertex2.fog = (float)output;
          vertex2.w_recip = (float)pCVar16;
          g_ActiveRenderColor = iVar8;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd38,vertex2);
          pSVar10 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          pSVar9 = pSVar10 + 2;
          piVar12 = (int *)&stack0xfffffd68;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar12 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar13 * -2 + 1) * 4);
            piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
          }
          pSVar10 = pSVar10 + 1;
          piVar12 = (int *)&stack0xfffffd38;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar12 = (pSVar10->projected_vertex).transformed_x;
            pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar13 * -2 + 1) * 4);
            piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
          }
          vertex2_00.projected_vertex.screen_y = in_stack_fffffd7c;
          vertex2_00.projected_vertex.transformed_x = in_stack_fffffd68._0_4_;
          vertex2_00.projected_vertex.transformed_y = in_stack_fffffd68._4_4_;
          vertex2_00.projected_vertex.transformed_z = in_stack_fffffd68._8_4_;
          vertex2_00.projected_vertex.inv_z = in_stack_fffffd68._12_4_;
          vertex2_00.projected_vertex.screen_x = in_stack_fffffd68._16_4_;
          vertex2_00.u = (float)in_stack_fffffd80;
          vertex2_00.v = (float)in_stack_fffffd84;
          vertex2_00.light = (float)uVar14;
          vertex2_00.color = uVar15;
          vertex2_00.fog = (float)output;
          vertex2_00.w_recip = (float)pCVar16;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd38,vertex2_00);
          pSVar10 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          pSVar9 = pSVar10 + 3;
          piVar12 = (int *)&stack0xfffffd68;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar12 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar13 * -2 + 1) * 4);
            piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
          }
          pSVar10 = pSVar10 + 2;
          piVar12 = (int *)&stack0xfffffd38;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar12 = (pSVar10->projected_vertex).transformed_x;
            pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar13 * -2 + 1) * 4);
            piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
          }
          vertex2_01.projected_vertex.screen_y = in_stack_fffffd7c;
          vertex2_01.projected_vertex.transformed_x = in_stack_fffffd68._0_4_;
          vertex2_01.projected_vertex.transformed_y = in_stack_fffffd68._4_4_;
          vertex2_01.projected_vertex.transformed_z = in_stack_fffffd68._8_4_;
          vertex2_01.projected_vertex.inv_z = in_stack_fffffd68._12_4_;
          vertex2_01.projected_vertex.screen_x = in_stack_fffffd68._16_4_;
          vertex2_01.u = (float)in_stack_fffffd80;
          vertex2_01.v = (float)in_stack_fffffd84;
          vertex2_01.light = (float)uVar14;
          vertex2_01.color = uVar15;
          vertex2_01.fog = (float)output;
          vertex2_01.w_recip = (float)pCVar16;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd38,vertex2_01);
          pSVar10 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          pSVar9 = pSVar10;
          piVar12 = (int *)&stack0xfffffd68;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar12 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar13 * -2 + 1) * 4);
            piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
          }
          pSVar10 = pSVar10 + 3;
          piVar12 = (int *)&stack0xfffffd38;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar12 = (pSVar10->projected_vertex).transformed_x;
            pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar13 * -2 + 1) * 4);
            piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
          }
          vertex2_02.projected_vertex.screen_y = in_stack_fffffd7c;
          vertex2_02.projected_vertex.transformed_x = in_stack_fffffd68._0_4_;
          vertex2_02.projected_vertex.transformed_y = in_stack_fffffd68._4_4_;
          vertex2_02.projected_vertex.transformed_z = in_stack_fffffd68._8_4_;
          vertex2_02.projected_vertex.inv_z = in_stack_fffffd68._12_4_;
          vertex2_02.projected_vertex.screen_x = in_stack_fffffd68._16_4_;
          vertex2_02.u = (float)in_stack_fffffd80;
          vertex2_02.v = (float)in_stack_fffffd84;
          vertex2_02.light = (float)uVar14;
          vertex2_02.color = uVar15;
          vertex2_02.fog = (float)output;
          vertex2_02.w_recip = (float)pCVar16;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd38,vertex2_02);
          pSVar10 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          pSVar9 = pSVar10 + 5;
          piVar12 = (int *)&stack0xfffffd68;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar12 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar13 * -2 + 1) * 4);
            piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
          }
          pSVar10 = pSVar10 + 4;
          piVar12 = (int *)&stack0xfffffd38;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar12 = (pSVar10->projected_vertex).transformed_x;
            pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar13 * -2 + 1) * 4);
            piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
          }
          vertex2_03.projected_vertex.screen_y = in_stack_fffffd7c;
          vertex2_03.projected_vertex.transformed_x = in_stack_fffffd68._0_4_;
          vertex2_03.projected_vertex.transformed_y = in_stack_fffffd68._4_4_;
          vertex2_03.projected_vertex.transformed_z = in_stack_fffffd68._8_4_;
          vertex2_03.projected_vertex.inv_z = in_stack_fffffd68._12_4_;
          vertex2_03.projected_vertex.screen_x = in_stack_fffffd68._16_4_;
          vertex2_03.u = (float)in_stack_fffffd80;
          vertex2_03.v = (float)in_stack_fffffd84;
          vertex2_03.light = (float)uVar14;
          vertex2_03.color = uVar15;
          vertex2_03.fog = (float)output;
          vertex2_03.w_recip = (float)pCVar16;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd38,vertex2_03);
          pSVar10 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          pSVar9 = pSVar10 + 6;
          piVar12 = (int *)&stack0xfffffd68;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar12 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar13 * -2 + 1) * 4);
            piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
          }
          pSVar10 = pSVar10 + 5;
          piVar12 = (int *)&stack0xfffffd38;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar12 = (pSVar10->projected_vertex).transformed_x;
            pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar13 * -2 + 1) * 4);
            piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
          }
          vertex2_04.projected_vertex.screen_y = in_stack_fffffd7c;
          vertex2_04.projected_vertex.transformed_x = in_stack_fffffd68._0_4_;
          vertex2_04.projected_vertex.transformed_y = in_stack_fffffd68._4_4_;
          vertex2_04.projected_vertex.transformed_z = in_stack_fffffd68._8_4_;
          vertex2_04.projected_vertex.inv_z = in_stack_fffffd68._12_4_;
          vertex2_04.projected_vertex.screen_x = in_stack_fffffd68._16_4_;
          vertex2_04.u = (float)in_stack_fffffd80;
          vertex2_04.v = (float)in_stack_fffffd84;
          vertex2_04.light = (float)uVar14;
          vertex2_04.color = uVar15;
          vertex2_04.fog = (float)output;
          vertex2_04.w_recip = (float)pCVar16;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd38,vertex2_04);
          pSVar10 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          pSVar9 = pSVar10 + 7;
          piVar12 = (int *)&stack0xfffffd68;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar12 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar13 * -2 + 1) * 4);
            piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
          }
          pSVar10 = pSVar10 + 6;
          piVar12 = (int *)&stack0xfffffd38;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar12 = (pSVar10->projected_vertex).transformed_x;
            pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar13 * -2 + 1) * 4);
            piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
          }
          vertex2_05.projected_vertex.screen_y = in_stack_fffffd7c;
          vertex2_05.projected_vertex.transformed_x = in_stack_fffffd68._0_4_;
          vertex2_05.projected_vertex.transformed_y = in_stack_fffffd68._4_4_;
          vertex2_05.projected_vertex.transformed_z = in_stack_fffffd68._8_4_;
          vertex2_05.projected_vertex.inv_z = in_stack_fffffd68._12_4_;
          vertex2_05.projected_vertex.screen_x = in_stack_fffffd68._16_4_;
          vertex2_05.u = (float)in_stack_fffffd80;
          vertex2_05.v = (float)in_stack_fffffd84;
          vertex2_05.light = (float)uVar14;
          vertex2_05.color = uVar15;
          vertex2_05.fog = (float)output;
          vertex2_05.w_recip = (float)pCVar16;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd38,vertex2_05);
          pSVar10 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          pSVar9 = pSVar10 + 4;
          piVar12 = (int *)&stack0xfffffd68;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar12 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar13 * -2 + 1) * 4);
            piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
          }
          pSVar10 = pSVar10 + 7;
          piVar12 = (int *)&stack0xfffffd38;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar12 = (pSVar10->projected_vertex).transformed_x;
            pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar13 * -2 + 1) * 4);
            piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
          }
          vertex2_06.projected_vertex.screen_y = in_stack_fffffd7c;
          vertex2_06.projected_vertex.transformed_x = in_stack_fffffd68._0_4_;
          vertex2_06.projected_vertex.transformed_y = in_stack_fffffd68._4_4_;
          vertex2_06.projected_vertex.transformed_z = in_stack_fffffd68._8_4_;
          vertex2_06.projected_vertex.inv_z = in_stack_fffffd68._12_4_;
          vertex2_06.projected_vertex.screen_x = in_stack_fffffd68._16_4_;
          vertex2_06.u = (float)in_stack_fffffd80;
          vertex2_06.v = (float)in_stack_fffffd84;
          vertex2_06.light = (float)uVar14;
          vertex2_06.color = uVar15;
          vertex2_06.fog = (float)output;
          vertex2_06.w_recip = (float)pCVar16;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd38,vertex2_06);
          pSVar10 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          pSVar9 = pSVar10 + 4;
          piVar12 = (int *)&stack0xfffffd68;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar12 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar13 * -2 + 1) * 4);
            piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
          }
          piVar12 = (int *)&stack0xfffffd38;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar12 = (pSVar10->projected_vertex).transformed_x;
            pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar13 * -2 + 1) * 4);
            piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
          }
          vertex2_07.projected_vertex.screen_y = in_stack_fffffd7c;
          vertex2_07.projected_vertex.transformed_x = in_stack_fffffd68._0_4_;
          vertex2_07.projected_vertex.transformed_y = in_stack_fffffd68._4_4_;
          vertex2_07.projected_vertex.transformed_z = in_stack_fffffd68._8_4_;
          vertex2_07.projected_vertex.inv_z = in_stack_fffffd68._12_4_;
          vertex2_07.projected_vertex.screen_x = in_stack_fffffd68._16_4_;
          vertex2_07.u = (float)in_stack_fffffd80;
          vertex2_07.v = (float)in_stack_fffffd84;
          vertex2_07.light = (float)uVar14;
          vertex2_07.color = uVar15;
          vertex2_07.fog = (float)output;
          vertex2_07.w_recip = (float)pCVar16;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd38,vertex2_07);
          pSVar10 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          pSVar9 = pSVar10 + 5;
          piVar12 = (int *)&stack0xfffffd68;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar12 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar13 * -2 + 1) * 4);
            piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
          }
          pSVar10 = pSVar10 + 1;
          piVar12 = (int *)&stack0xfffffd38;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar12 = (pSVar10->projected_vertex).transformed_x;
            pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar13 * -2 + 1) * 4);
            piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
          }
          vertex2_08.projected_vertex.screen_y = in_stack_fffffd7c;
          vertex2_08.projected_vertex.transformed_x = in_stack_fffffd68._0_4_;
          vertex2_08.projected_vertex.transformed_y = in_stack_fffffd68._4_4_;
          vertex2_08.projected_vertex.transformed_z = in_stack_fffffd68._8_4_;
          vertex2_08.projected_vertex.inv_z = in_stack_fffffd68._12_4_;
          vertex2_08.projected_vertex.screen_x = in_stack_fffffd68._16_4_;
          vertex2_08.u = (float)in_stack_fffffd80;
          vertex2_08.v = (float)in_stack_fffffd84;
          vertex2_08.light = (float)uVar14;
          vertex2_08.color = uVar15;
          vertex2_08.fog = (float)output;
          vertex2_08.w_recip = (float)pCVar16;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd38,vertex2_08);
          pSVar10 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          pSVar9 = pSVar10 + 6;
          piVar12 = (int *)&stack0xfffffd68;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar12 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar13 * -2 + 1) * 4);
            piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
          }
          pSVar10 = pSVar10 + 2;
          piVar12 = (int *)&stack0xfffffd38;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar12 = (pSVar10->projected_vertex).transformed_x;
            pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar13 * -2 + 1) * 4);
            piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
          }
          vertex2_09.projected_vertex.screen_y = in_stack_fffffd7c;
          vertex2_09.projected_vertex.transformed_x = in_stack_fffffd68._0_4_;
          vertex2_09.projected_vertex.transformed_y = in_stack_fffffd68._4_4_;
          vertex2_09.projected_vertex.transformed_z = in_stack_fffffd68._8_4_;
          vertex2_09.projected_vertex.inv_z = in_stack_fffffd68._12_4_;
          vertex2_09.projected_vertex.screen_x = in_stack_fffffd68._16_4_;
          vertex2_09.u = (float)in_stack_fffffd80;
          vertex2_09.v = (float)in_stack_fffffd84;
          vertex2_09.light = (float)uVar14;
          vertex2_09.color = uVar15;
          vertex2_09.fog = (float)output;
          vertex2_09.w_recip = (float)pCVar16;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd38,vertex2_09);
          pSVar10 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          pSVar9 = pSVar10 + 7;
          piVar12 = (int *)&stack0xfffffd68;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar12 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar13 * -2 + 1) * 4);
            piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
          }
          pSVar10 = pSVar10 + 3;
          piVar12 = (int *)&stack0xfffffd38;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar12 = (pSVar10->projected_vertex).transformed_x;
            pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar13 * -2 + 1) * 4);
            piVar12 = piVar12 + (uint)bVar13 * -2 + 1;
          }
          vertex2_10.projected_vertex.screen_y = in_stack_fffffd7c;
          vertex2_10.projected_vertex.transformed_x = in_stack_fffffd68._0_4_;
          vertex2_10.projected_vertex.transformed_y = in_stack_fffffd68._4_4_;
          vertex2_10.projected_vertex.transformed_z = in_stack_fffffd68._8_4_;
          vertex2_10.projected_vertex.inv_z = in_stack_fffffd68._12_4_;
          vertex2_10.projected_vertex.screen_x = in_stack_fffffd68._16_4_;
          vertex2_10.u = (float)in_stack_fffffd80;
          vertex2_10.v = (float)in_stack_fffffd84;
          vertex2_10.light = (float)uVar14;
          vertex2_10.color = uVar15;
          vertex2_10.fog = (float)output;
          vertex2_10.w_recip = (float)pCVar16;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd38,vertex2_10);
        }
        pCVar4 = local_20;
        pCVar16 = local_2c;
        iVar8 = local_30;
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
        local_2c = pCVar16 + 0x23;
        local_20 = pCVar4 + 0x23;
        local_30 = iVar8 + 1;
      } while (local_30 < this_ptr->camera_count);
    }
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if (iVar8 != 0) {
      core_set_cpp_CDemonSet_FUN_0056d2d0(this_ptr);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      this_ptr->unk_lighting_param3 = 0;
      this_ptr->unk_lighting_param4 = 0;
      this_ptr->unk_lighting_param1 = 0;
      return;
    }
    if (local_3c == (SVDBox *)0x0) {
      core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)&stack0xfffffdbc);
    }
    else {
      local_5c = g_CGamePtr->delta_time_float;
      local_58 = local_5c;
      iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
      if (iVar8 == 0) {
        iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
        if (iVar8 != 0) {
          local_5c = local_58 * (float)10;
        }
      }
      else {
        local_5c = local_58 * (float)0.050000000000000003;
      }
      local_50 = local_5c * (float)1.57079632675;
      local_60 = local_4c * (float)0.5 * local_5c;
      iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4a);
      if (iVar8 != 0) {
        local_c8 = local_c8 + local_50;
      }
      iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4e);
      if (iVar8 != 0) {
        local_c8 = local_c8 - local_50;
      }
      iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x52);
      if (iVar8 != 0) {
        local_c4 = local_c4 + local_50;
      }
      in_stack_fffffdbc = 8.10605e-39;
      in_stack_fffffdc0 = g_CKeysPtr;
      iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x53);
      if (iVar8 != 0) {
        local_c4 = local_c4 - local_50;
      }
      in_stack_fffffdc4 = 8.106091e-39;
      iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xd);
      if (iVar8 != 0) {
        local_4c = local_4c - local_60;
      }
      in_stack_fffffdcc = 8.106132e-39;
      iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xc);
      if (iVar8 != 0) {
        local_4c = local_4c + local_60;
      }
      if (local_c8 < (float)-1.57079632675) {
        local_c8 = -1.5707964;
      }
      if ((float)1.57079632675 < local_c8) {
        local_c8 = 1.5707964;
      }
      if (local_c4 < (float)-1.57079632675) {
        local_c4 = local_c4 + 6.283185f;
      }
      if ((float)1.57079632675 < local_c4) {
        local_c4 = local_c4 + -6.283185f;
      }
      if (local_4c < (float)0.5) {
        local_4c = 0.5;
      }
      fVar18 = 4.06377e-44;
      pCVar17 = g_CKeysPtr;
      iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
      pSVar7 = local_3c;
      if (iVar8 == 0) {
        core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)&stack0xfffffdd8);
        if ((SVDBox *)&stack0xfffffdd8 != pSVar7) {
          pCVar17 = (CKeys *)(pSVar7->position).x;
          fVar18 = (pSVar7->position).y;
        }
        fVar19 = 8.106946e-39;
        core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                  (&local_3c->rotation_matrix,&local_17c);
        pSVar7 = local_3c;
        core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)&stack0xfffffdd8);
        if ((SVDBox *)&stack0xfffffdd8 != pSVar7) {
          (pSVar7->position).x = (float)pCVar17;
          (pSVar7->position).y = fVar18;
          (pSVar7->position).z = fVar19;
        }
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  (&local_3c->rotation_matrix,(CVector3f *)&stack0xfffffde4);
      }
      else {
        local_48 = g_CGamePtr->delta_time_float * (float)4;
        iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
        if (iVar8 != 0) {
          local_48 = local_48 * (float)0.10000000000000001;
        }
        iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
        if (iVar8 != 0) {
          (local_3c->extents).x = (local_3c->extents).x - local_48;
        }
        iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
        if (iVar8 != 0) {
          (local_3c->extents).x = (local_3c->extents).x + local_48;
        }
        iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
        if (iVar8 != 0) {
          (local_3c->extents).y = (local_3c->extents).y - local_48;
        }
        iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
        if (iVar8 != 0) {
          (local_3c->extents).y = (local_3c->extents).y + local_48;
        }
        iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
        if (iVar8 != 0) {
          (local_3c->extents).z = (local_3c->extents).z - local_48;
        }
        iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
        if (iVar8 != 0) {
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
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xf);
    if (iVar8 != 0) {
      iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
      if (iVar8 == 0) {
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
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x17);
    if (iVar8 != 0) {
      iVar8 = this_ptr->vdir_box_count;
      if (iVar8 < 0xfa) {
        pSVar7 = local_40 + iVar8;
        if (pSVar7 != (SVDBox *)&stack0xfffffdbc) {
          (pSVar7->position).x = in_stack_fffffdbc;
          (pSVar7->position).y = (float)in_stack_fffffdc0;
          (pSVar7->position).z = in_stack_fffffdc4;
        }
        local_bc.z = 0.0;
        local_bc.x = 0.0;
        local_bc.y = in_stack_fffffdcc;
        local_18 = iVar8;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  (&pSVar7->rotation_matrix,&local_bc);
        (pSVar7->extents).x = 10.0;
        (pSVar7->extents).y = 10.0;
        (pSVar7->extents).z = 10.0;
        this_ptr->vdir_box_count = this_ptr->vdir_box_count + 1;
      }
      else {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Max number of boxes has been reached, can't add any more boxes.");
      }
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x13);
    if (iVar8 != 0) {
      iVar8 = this_ptr->vdir_box_count;
      if (iVar8 < 0xfa) {
        if ((-1 < local_18) && (local_18 < iVar8)) {
          pSVar7 = local_40 + iVar8;
          pSVar11 = local_40 + local_18;
          if (pSVar7 != pSVar11) {
            (pSVar7->position).x = (pSVar11->position).x;
            (pSVar7->position).y = (pSVar11->position).y;
            (pSVar7->position).z = (pSVar11->position).z;
          }
          if (&pSVar7->extents != &pSVar11->extents) {
            (pSVar7->extents).x = (pSVar11->extents).x;
            (pSVar7->extents).y = (pSVar11->extents).y;
            (pSVar7->extents).z = (pSVar11->extents).z;
          }
          (pSVar7->rotation_matrix).m[0].x = (pSVar11->rotation_matrix).m[0].x;
          (pSVar7->rotation_matrix).m[0].y = (pSVar11->rotation_matrix).m[0].y;
          (pSVar7->rotation_matrix).m[0].z = (pSVar11->rotation_matrix).m[0].z;
          (pSVar7->rotation_matrix).m[1].x = (pSVar11->rotation_matrix).m[1].x;
          (pSVar7->rotation_matrix).m[1].y = (pSVar11->rotation_matrix).m[1].y;
          (pSVar7->rotation_matrix).m[1].z = (pSVar11->rotation_matrix).m[1].z;
          (pSVar7->rotation_matrix).m[2].x = (pSVar11->rotation_matrix).m[2].x;
          (pSVar7->rotation_matrix).m[2].y = (pSVar11->rotation_matrix).m[2].y;
          (pSVar7->rotation_matrix).m[2].z = (pSVar11->rotation_matrix).m[2].z;
          *(uint *)pSVar7->field3_0x3c = *(uint *)pSVar11->field3_0x3c;
          *(uint *)(pSVar7->field3_0x3c + 4) = *(uint *)(pSVar11->field3_0x3c + 4);
          local_18 = this_ptr->vdir_box_count;
          pSVar7 = local_40 + local_18;
          this_ptr->vdir_box_count = local_18 + 1;
          local_1ac.x = 0.5;
          local_1ac.y = 0.5;
          local_1ac.z = 0.5;
          pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (&pSVar7->rotation_matrix,&local_ec,&local_1ac);
          (pSVar7->position).x = pCVar4->x + (pSVar7->position).x;
          (pSVar7->position).y = pCVar4->y + (pSVar7->position).y;
          (pSVar7->position).z = pCVar4->z + (pSVar7->position).z;
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
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x20);
    if ((((iVar8 != 0) && (-1 < local_18)) && (local_18 < this_ptr->vdir_box_count)) &&
       (iVar5 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                          (g_CEditorToolsPtr,"Delete the selected box?"), iVar8 = local_18,
       iVar5 != 0)) {
      iVar5 = this_ptr->vdir_box_count + -1;
      this_ptr->vdir_box_count = iVar5;
      crt_string_c_memmove_FUN_005fe5e0
                (local_40 + local_18,local_40 + local_18 + 1,(iVar5 - local_18) * 0x44);
      if (this_ptr->vdir_box_count <= iVar8) {
        local_18 = 0;
      }
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x31);
    if (iVar8 != 0) {
      local_18 = -1;
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3b);
    if (iVar8 != 0) {
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
      iVar8 = 0;
      local_38 = 1e+30;
      if (0 < this_ptr->vdir_box_count) {
        local_1c = &local_40->rotation_matrix;
        pCVar4 = &local_40->extents;
        do {
          core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                    (local_1c,&local_110,(CVector3f *)&stack0xfffffe0c);
          core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                    (local_1c,&local_98,(CVector3f *)&stack0xfffffe18);
          local_11c = -pCVar4->x;
          local_118 = -pCVar4->y;
          local_114 = -pCVar4->z;
          local_24 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                               ((CBoundingBox3D *)&stack0xfffffdf4,&local_110,&local_98,
                                (CVector3f *)0x0);
          local_78 = (double)local_24;
          if (((0.0 <= local_78) && (local_78 < 1.0)) && (local_24 < local_38)) {
            local_38 = local_24;
            local_18 = iVar8;
          }
          pCVar4 = (CVector3f *)((int)(pCVar4 + 5) + 8);
          iVar8 = iVar8 + 1;
          local_1c = (CMatrix3x3f *)((int)(local_1c + 1) + 0x20);
          local_14 = local_24;
        } while (iVar8 < this_ptr->vdir_box_count);
      }
    }
  } while( true );
}
