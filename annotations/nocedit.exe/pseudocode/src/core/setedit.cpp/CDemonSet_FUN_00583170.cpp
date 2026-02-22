// Name: core_setedit.cpp_CDemonSet_FUN_00583170
// Address: 00583170
// Address Range: [[00583170, 00583633] [00583651, 00583aac] [00583ad6, 005848f1]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_FUN_00583170(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: core_slew.cpp_CSlew_init_FUN_005a2060 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

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
  CVector3f *pCVar3;
  uint text_color;
  int iVar4;
  int iVar5;
  SVDBox *pSVar6;
  int iVar7;
  SRenderVertex *pSVar8;
  SRenderVertex *pSVar9;
  SVDBox *pSVar10;
  int *piVar11;
  byte bVar12;
  SRenderVertex in_stack_fffffd34;
  byte in_stack_fffffd64 [20];
  uint in_stack_fffffd78;
  float *in_stack_fffffd7c;
  CVector3f *in_stack_fffffd80;
  uint uVar13;
  uint uVar14;
  SRenderVertex *output;
  CVector3i *pCVar15;
  CKeys *pCVar16;
  float fVar17;
  CKeys *pCVar18;
  CKeys *pCVar19;
  float fVar20;
  float fVar21;
  CSlew *this_ptr_00;
  char *format;
  CVector3f local_1dc;
  CVector3f local_1d0;
  CKeys *local_1c4;
  float local_1c0;
  CKeys *local_1bc;
  CVector3i local_1b8;
  CVector3f local_1ac;
  CVector3i local_1a0;
  CVector3f local_194;
  int local_188;
  int local_184;
  float local_180;
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
  uint local_c0;
  CVector3f local_bc;
  CVector3i local_b0;
  CVector3i local_a4;
  CVector3f local_98;
  CVector3f local_8c;
  double local_78;
  int *local_70;
  int *local_6c;
  _BIT_INTEGER32 local_68;
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
  
  bVar12 = 0;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Preparing set.");
  core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
  this_ptr->actor_count = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  pCVar18 = (CKeys *)0x0;
  fVar17 = 0.0;
  pCVar16 = (CKeys *)0x0;
  pCVar19 = (CKeys *)0x0;
  local_c8 = 0.0;
  local_c4 = (CKeys *)0x0;
  local_c0 = 0;
  local_4c = 40.0;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
  local_44 = this_ptr->vdir_boxes;
  this_ptr->disable_water_rendering = 1;
  this_ptr->disable_sky_rendering = 1;
  this_ptr->disable_spotlight_shadows = 1;
  local_64 = this_ptr->cameras;
  local_6c = &g_CDemonCameraInstance.base.position.y;
  local_18 = 0;
  local_70 = &g_CDemonCameraInstance.base.position.z;
  local_40 = local_44;
  do {
    iVar7 = local_18;
    local_68 = g_MouseButtonFlags;
    core_setdir_cpp_CDemonSet_FUN_00576710(this_ptr);
    local_3c = (SVDBox *)0x0;
    if ((-1 < iVar7) && (iVar7 < this_ptr->vdir_box_count)) {
      local_3c = local_40 + iVar7;
    }
    wincore_winrun_cpp_doNothing_FUN_005f2f80();
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    pSVar6 = local_3c;
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    if (pSVar6 != (SVDBox *)0x0) {
      if ((float *)&stack0xfffffdc8 != &local_c8) {
        pCVar19 = local_c4;
      }
      pCVar3 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                         (&local_3c->rotation_matrix,&local_1dc);
      pCVar19 = (CKeys *)((float)pCVar19 + pCVar3->y);
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                ((CMatrix3x3f *)&stack0xfffffd94,(CVector3f *)&stack0xfffffdc8);
      local_1d0.z = -local_4c;
      local_1d0.x = 0.0;
      local_1d0.y = 0.0;
      local_14 = local_1d0.z;
      pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         ((CMatrix3x3f *)&stack0xfffffd94,&local_134,&local_1d0);
      local_1c4 = (CKeys *)(pCVar3->x + (local_3c->position).x);
      local_1c0 = pCVar3->y + (local_3c->position).y;
      local_1bc = (CKeys *)(pCVar3->z + (local_3c->position).z);
      if ((CKeys **)&stack0xfffffdbc != &local_1c4) {
        pCVar16 = local_1c4;
        fVar17 = local_1c0;
        pCVar18 = local_1bc;
      }
    }
    if ((int *)&stack0x00000000 != &g_CDemonCameraInstance.rect_array[7].top) {
      g_CDemonCameraInstance.base.position.x = (int)pCVar16;
      g_CDemonCameraInstance.base.position.y = (int)fVar17;
      g_CDemonCameraInstance.base.position.z = (int)pCVar18;
    }
    fVar20 = 28.0;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              ((CMatrix3x3f *)&g_CDemonCameraInstance.base.rotation_matrix,
               (CVector3f *)&stack0xfffffdc8);
    g_CDemonCameraInstance.base.projection_scale = fVar20;
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(this_ptr,150.0,0);
    iVar7 = local_18;
    local_28 = -1;
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2,1);
    if ((-1 < iVar7) && (iVar7 < this_ptr->vdir_box_count)) {
      do {
        local_28 = iVar7;
        iVar7 = this_ptr->vdir_boxes[local_28].parent_index;
      } while (-1 < iVar7);
    }
    iVar7 = 0;
    if (0 < this_ptr->vdir_box_count) {
      local_34 = &local_44->rotation_matrix;
      do {
        pCVar3 = &local_44[iVar7].position;
        core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(local_34,&local_194);
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr2,pCVar3);
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr2,(CVector3i *)&local_194,(CVector3i *)0x0);
        iVar4 = iVar7;
        if (iVar7 == local_18) {
          corner2 = pCVar3 + 1;
          in_stack_fffffd7c = &local_158;
          local_158 = -corner2->x;
          local_154 = -pCVar3[1].y;
          local_150 = -pCVar3[1].z;
          in_stack_fffffd78 = 0x583519;
          core_setedit_cpp_FUN_005817d0(in_stack_fffffd7c);
          text_color = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                                 (g_CEditorToolsPtr);
          shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
                    (g_CEditorToolsPtr,2.0,text_color);
          local_128.x = -corner2->x;
          local_128.y = -pCVar3[1].y;
          local_128.z = -pCVar3[1].z;
          in_stack_fffffd80 = (CVector3f *)0x583576;
          shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
                    (g_CEditorToolsPtr,&local_128,corner2,text_color);
        }
        else {
          do {
            iVar5 = iVar4;
            iVar4 = this_ptr->vdir_boxes[iVar5].parent_index;
          } while (-1 < iVar4);
          in_stack_fffffd80 = pCVar3 + 1;
          if (iVar5 == local_28) {
            in_stack_fffffd7c = &local_f8;
            local_f8 = -in_stack_fffffd80->x;
            local_f4 = -pCVar3[1].y;
            local_f0 = -pCVar3[1].z;
            in_stack_fffffd78 = 0x5835b5;
            core_setedit_cpp_FUN_005817d0(in_stack_fffffd7c);
            local_8c.x = -in_stack_fffffd80->x;
            local_8c.y = -pCVar3[1].y;
            local_8c.z = -pCVar3[1].z;
            pCVar3 = (CVector3f *)0x5835e1;
            shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
                      (g_CEditorToolsPtr,&local_8c,in_stack_fffffd80,2);
            in_stack_fffffd80 = pCVar3;
          }
          else {
            in_stack_fffffd7c = &local_140;
            local_140 = -in_stack_fffffd80->x;
            local_13c = -pCVar3[1].y;
            local_138 = -pCVar3[1].z;
            in_stack_fffffd78 = 0x583621;
            core_setedit_cpp_FUN_005817d0(in_stack_fffffd7c);
          }
        }
        pCVar2 = local_34;
        iVar7 = iVar7 + 1;
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
        local_34 = (CMatrix3x3f *)((int)(pCVar2 + 1) + 0x20);
      } while (iVar7 < this_ptr->vdir_box_count);
    }
    local_30 = 0;
    if (0 < this_ptr->camera_count) {
      local_2c = (CVector3i *)&local_64->orientation;
      local_20 = &local_64->position;
      do {
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr2,local_20);
        iVar7 = 4;
        bVar1 = true;
        uVar13 = 0x5836a9;
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr2,local_2c,(CVector3i *)0x0);
        if ((-1 < local_18) && (local_18 < this_ptr->vdir_box_count)) {
          uVar13 = 0x5836cb;
          iVar4 = core_setdir_cpp_CDemonSet_FUN_00576340(this_ptr);
          if (iVar4 != 0) {
            iVar7 = 0xfb;
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
        pCVar15 = &local_a4;
        output = g_CDemonRendererPtr2->vertex_buffer_ptr + 7;
        uVar14 = 0x58399b;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c(&output->projected_vertex,pCVar15);
        if (bVar1) {
          engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
                    (g_CDemonRendererPtr2,iVar7);
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
          pSVar9 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          pSVar8 = pSVar9 + 1;
          piVar11 = (int *)&stack0xfffffd64;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar11 = (pSVar8->projected_vertex).transformed_x;
            pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          piVar11 = (int *)&stack0xfffffd34;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar11 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          vertex2.projected_vertex.screen_y = in_stack_fffffd78;
          vertex2.projected_vertex.transformed_x = in_stack_fffffd64._0_4_;
          vertex2.projected_vertex.transformed_y = in_stack_fffffd64._4_4_;
          vertex2.projected_vertex.transformed_z = in_stack_fffffd64._8_4_;
          vertex2.projected_vertex.inv_z = in_stack_fffffd64._12_4_;
          vertex2.projected_vertex.screen_x = in_stack_fffffd64._16_4_;
          vertex2.u = (int)in_stack_fffffd7c;
          vertex2.v = (int)in_stack_fffffd80;
          vertex2.z = uVar13;
          vertex2.r = uVar14;
          vertex2.g = (int)output;
          vertex2.fog = (int)pCVar15;
          g_ActiveRenderColor = iVar7;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd34,vertex2);
          pSVar9 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          pSVar8 = pSVar9 + 2;
          piVar11 = (int *)&stack0xfffffd64;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar8->projected_vertex).transformed_x;
            pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          pSVar9 = pSVar9 + 1;
          piVar11 = (int *)&stack0xfffffd34;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          vertex2_00.projected_vertex.screen_y = in_stack_fffffd78;
          vertex2_00.projected_vertex.transformed_x = in_stack_fffffd64._0_4_;
          vertex2_00.projected_vertex.transformed_y = in_stack_fffffd64._4_4_;
          vertex2_00.projected_vertex.transformed_z = in_stack_fffffd64._8_4_;
          vertex2_00.projected_vertex.inv_z = in_stack_fffffd64._12_4_;
          vertex2_00.projected_vertex.screen_x = in_stack_fffffd64._16_4_;
          vertex2_00.u = (int)in_stack_fffffd7c;
          vertex2_00.v = (int)in_stack_fffffd80;
          vertex2_00.z = uVar13;
          vertex2_00.r = uVar14;
          vertex2_00.g = (int)output;
          vertex2_00.fog = (int)pCVar15;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd34,vertex2_00);
          pSVar9 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          pSVar8 = pSVar9 + 3;
          piVar11 = (int *)&stack0xfffffd64;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar8->projected_vertex).transformed_x;
            pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          pSVar9 = pSVar9 + 2;
          piVar11 = (int *)&stack0xfffffd34;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          vertex2_01.projected_vertex.screen_y = in_stack_fffffd78;
          vertex2_01.projected_vertex.transformed_x = in_stack_fffffd64._0_4_;
          vertex2_01.projected_vertex.transformed_y = in_stack_fffffd64._4_4_;
          vertex2_01.projected_vertex.transformed_z = in_stack_fffffd64._8_4_;
          vertex2_01.projected_vertex.inv_z = in_stack_fffffd64._12_4_;
          vertex2_01.projected_vertex.screen_x = in_stack_fffffd64._16_4_;
          vertex2_01.u = (int)in_stack_fffffd7c;
          vertex2_01.v = (int)in_stack_fffffd80;
          vertex2_01.z = uVar13;
          vertex2_01.r = uVar14;
          vertex2_01.g = (int)output;
          vertex2_01.fog = (int)pCVar15;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd34,vertex2_01);
          pSVar9 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          pSVar8 = pSVar9;
          piVar11 = (int *)&stack0xfffffd64;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar8->projected_vertex).transformed_x;
            pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          pSVar9 = pSVar9 + 3;
          piVar11 = (int *)&stack0xfffffd34;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          vertex2_02.projected_vertex.screen_y = in_stack_fffffd78;
          vertex2_02.projected_vertex.transformed_x = in_stack_fffffd64._0_4_;
          vertex2_02.projected_vertex.transformed_y = in_stack_fffffd64._4_4_;
          vertex2_02.projected_vertex.transformed_z = in_stack_fffffd64._8_4_;
          vertex2_02.projected_vertex.inv_z = in_stack_fffffd64._12_4_;
          vertex2_02.projected_vertex.screen_x = in_stack_fffffd64._16_4_;
          vertex2_02.u = (int)in_stack_fffffd7c;
          vertex2_02.v = (int)in_stack_fffffd80;
          vertex2_02.z = uVar13;
          vertex2_02.r = uVar14;
          vertex2_02.g = (int)output;
          vertex2_02.fog = (int)pCVar15;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd34,vertex2_02);
          pSVar9 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          pSVar8 = pSVar9 + 5;
          piVar11 = (int *)&stack0xfffffd64;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar8->projected_vertex).transformed_x;
            pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          pSVar9 = pSVar9 + 4;
          piVar11 = (int *)&stack0xfffffd34;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          vertex2_03.projected_vertex.screen_y = in_stack_fffffd78;
          vertex2_03.projected_vertex.transformed_x = in_stack_fffffd64._0_4_;
          vertex2_03.projected_vertex.transformed_y = in_stack_fffffd64._4_4_;
          vertex2_03.projected_vertex.transformed_z = in_stack_fffffd64._8_4_;
          vertex2_03.projected_vertex.inv_z = in_stack_fffffd64._12_4_;
          vertex2_03.projected_vertex.screen_x = in_stack_fffffd64._16_4_;
          vertex2_03.u = (int)in_stack_fffffd7c;
          vertex2_03.v = (int)in_stack_fffffd80;
          vertex2_03.z = uVar13;
          vertex2_03.r = uVar14;
          vertex2_03.g = (int)output;
          vertex2_03.fog = (int)pCVar15;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd34,vertex2_03);
          pSVar9 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          pSVar8 = pSVar9 + 6;
          piVar11 = (int *)&stack0xfffffd64;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar8->projected_vertex).transformed_x;
            pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          pSVar9 = pSVar9 + 5;
          piVar11 = (int *)&stack0xfffffd34;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          vertex2_04.projected_vertex.screen_y = in_stack_fffffd78;
          vertex2_04.projected_vertex.transformed_x = in_stack_fffffd64._0_4_;
          vertex2_04.projected_vertex.transformed_y = in_stack_fffffd64._4_4_;
          vertex2_04.projected_vertex.transformed_z = in_stack_fffffd64._8_4_;
          vertex2_04.projected_vertex.inv_z = in_stack_fffffd64._12_4_;
          vertex2_04.projected_vertex.screen_x = in_stack_fffffd64._16_4_;
          vertex2_04.u = (int)in_stack_fffffd7c;
          vertex2_04.v = (int)in_stack_fffffd80;
          vertex2_04.z = uVar13;
          vertex2_04.r = uVar14;
          vertex2_04.g = (int)output;
          vertex2_04.fog = (int)pCVar15;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd34,vertex2_04);
          pSVar9 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          pSVar8 = pSVar9 + 7;
          piVar11 = (int *)&stack0xfffffd64;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar8->projected_vertex).transformed_x;
            pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          pSVar9 = pSVar9 + 6;
          piVar11 = (int *)&stack0xfffffd34;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          vertex2_05.projected_vertex.screen_y = in_stack_fffffd78;
          vertex2_05.projected_vertex.transformed_x = in_stack_fffffd64._0_4_;
          vertex2_05.projected_vertex.transformed_y = in_stack_fffffd64._4_4_;
          vertex2_05.projected_vertex.transformed_z = in_stack_fffffd64._8_4_;
          vertex2_05.projected_vertex.inv_z = in_stack_fffffd64._12_4_;
          vertex2_05.projected_vertex.screen_x = in_stack_fffffd64._16_4_;
          vertex2_05.u = (int)in_stack_fffffd7c;
          vertex2_05.v = (int)in_stack_fffffd80;
          vertex2_05.z = uVar13;
          vertex2_05.r = uVar14;
          vertex2_05.g = (int)output;
          vertex2_05.fog = (int)pCVar15;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd34,vertex2_05);
          pSVar9 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          pSVar8 = pSVar9 + 4;
          piVar11 = (int *)&stack0xfffffd64;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar8->projected_vertex).transformed_x;
            pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          pSVar9 = pSVar9 + 7;
          piVar11 = (int *)&stack0xfffffd34;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          vertex2_06.projected_vertex.screen_y = in_stack_fffffd78;
          vertex2_06.projected_vertex.transformed_x = in_stack_fffffd64._0_4_;
          vertex2_06.projected_vertex.transformed_y = in_stack_fffffd64._4_4_;
          vertex2_06.projected_vertex.transformed_z = in_stack_fffffd64._8_4_;
          vertex2_06.projected_vertex.inv_z = in_stack_fffffd64._12_4_;
          vertex2_06.projected_vertex.screen_x = in_stack_fffffd64._16_4_;
          vertex2_06.u = (int)in_stack_fffffd7c;
          vertex2_06.v = (int)in_stack_fffffd80;
          vertex2_06.z = uVar13;
          vertex2_06.r = uVar14;
          vertex2_06.g = (int)output;
          vertex2_06.fog = (int)pCVar15;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd34,vertex2_06);
          pSVar9 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          pSVar8 = pSVar9 + 4;
          piVar11 = (int *)&stack0xfffffd64;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar8->projected_vertex).transformed_x;
            pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          piVar11 = (int *)&stack0xfffffd34;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          vertex2_07.projected_vertex.screen_y = in_stack_fffffd78;
          vertex2_07.projected_vertex.transformed_x = in_stack_fffffd64._0_4_;
          vertex2_07.projected_vertex.transformed_y = in_stack_fffffd64._4_4_;
          vertex2_07.projected_vertex.transformed_z = in_stack_fffffd64._8_4_;
          vertex2_07.projected_vertex.inv_z = in_stack_fffffd64._12_4_;
          vertex2_07.projected_vertex.screen_x = in_stack_fffffd64._16_4_;
          vertex2_07.u = (int)in_stack_fffffd7c;
          vertex2_07.v = (int)in_stack_fffffd80;
          vertex2_07.z = uVar13;
          vertex2_07.r = uVar14;
          vertex2_07.g = (int)output;
          vertex2_07.fog = (int)pCVar15;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd34,vertex2_07);
          pSVar9 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          pSVar8 = pSVar9 + 5;
          piVar11 = (int *)&stack0xfffffd64;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar8->projected_vertex).transformed_x;
            pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          pSVar9 = pSVar9 + 1;
          piVar11 = (int *)&stack0xfffffd34;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          vertex2_08.projected_vertex.screen_y = in_stack_fffffd78;
          vertex2_08.projected_vertex.transformed_x = in_stack_fffffd64._0_4_;
          vertex2_08.projected_vertex.transformed_y = in_stack_fffffd64._4_4_;
          vertex2_08.projected_vertex.transformed_z = in_stack_fffffd64._8_4_;
          vertex2_08.projected_vertex.inv_z = in_stack_fffffd64._12_4_;
          vertex2_08.projected_vertex.screen_x = in_stack_fffffd64._16_4_;
          vertex2_08.u = (int)in_stack_fffffd7c;
          vertex2_08.v = (int)in_stack_fffffd80;
          vertex2_08.z = uVar13;
          vertex2_08.r = uVar14;
          vertex2_08.g = (int)output;
          vertex2_08.fog = (int)pCVar15;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd34,vertex2_08);
          pSVar9 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          pSVar8 = pSVar9 + 6;
          piVar11 = (int *)&stack0xfffffd64;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar8->projected_vertex).transformed_x;
            pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          pSVar9 = pSVar9 + 2;
          piVar11 = (int *)&stack0xfffffd34;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          vertex2_09.projected_vertex.screen_y = in_stack_fffffd78;
          vertex2_09.projected_vertex.transformed_x = in_stack_fffffd64._0_4_;
          vertex2_09.projected_vertex.transformed_y = in_stack_fffffd64._4_4_;
          vertex2_09.projected_vertex.transformed_z = in_stack_fffffd64._8_4_;
          vertex2_09.projected_vertex.inv_z = in_stack_fffffd64._12_4_;
          vertex2_09.projected_vertex.screen_x = in_stack_fffffd64._16_4_;
          vertex2_09.u = (int)in_stack_fffffd7c;
          vertex2_09.v = (int)in_stack_fffffd80;
          vertex2_09.z = uVar13;
          vertex2_09.r = uVar14;
          vertex2_09.g = (int)output;
          vertex2_09.fog = (int)pCVar15;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd34,vertex2_09);
          pSVar9 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          pSVar8 = pSVar9 + 7;
          piVar11 = (int *)&stack0xfffffd64;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar8->projected_vertex).transformed_x;
            pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          pSVar9 = pSVar9 + 3;
          piVar11 = (int *)&stack0xfffffd34;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          vertex2_10.projected_vertex.screen_y = in_stack_fffffd78;
          vertex2_10.projected_vertex.transformed_x = in_stack_fffffd64._0_4_;
          vertex2_10.projected_vertex.transformed_y = in_stack_fffffd64._4_4_;
          vertex2_10.projected_vertex.transformed_z = in_stack_fffffd64._8_4_;
          vertex2_10.projected_vertex.inv_z = in_stack_fffffd64._12_4_;
          vertex2_10.projected_vertex.screen_x = in_stack_fffffd64._16_4_;
          vertex2_10.u = (int)in_stack_fffffd7c;
          vertex2_10.v = (int)in_stack_fffffd80;
          vertex2_10.z = uVar13;
          vertex2_10.r = uVar14;
          vertex2_10.g = (int)output;
          vertex2_10.fog = (int)pCVar15;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd34,vertex2_10);
        }
        pCVar3 = local_20;
        pCVar15 = local_2c;
        iVar7 = local_30;
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
        local_2c = pCVar15 + 0x23;
        local_20 = pCVar3 + 0x23;
        local_30 = iVar7 + 1;
      } while (local_30 < this_ptr->camera_count);
    }
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (iVar7 != 0) {
      core_set_cpp_CDemonSet_clearLights_FUN_0056d2d0(this_ptr);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      this_ptr->disable_water_rendering = 0;
      this_ptr->disable_sky_rendering = 0;
      this_ptr->disable_spotlight_shadows = 0;
      return;
    }
    if (local_3c == (SVDBox *)0x0) {
      core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)&stack0xfffffdbc);
    }
    else {
      local_5c = g_CGamePtr->delta_time_float;
      local_58 = local_5c;
      iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
      if (iVar7 == 0) {
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
        if (iVar7 != 0) {
          local_5c = local_58 * (float)10;
        }
      }
      else {
        local_5c = local_58 * (float)0.050000000000000003;
      }
      local_50 = local_5c * (float)1.57079632675;
      local_60 = local_4c * (float)0.5 * local_5c;
      iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_SUBTRACT);
      if (iVar7 != 0) {
        local_c8 = local_c8 + local_50;
      }
      iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_ADD);
      if (iVar7 != 0) {
        local_c8 = local_c8 - local_50;
      }
      iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD0);
      if (iVar7 != 0) {
        local_c4 = (CKeys *)((float)local_c4 + local_50);
      }
      pCVar16 = g_CKeysPtr;
      iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_DECIMAL);
      if (iVar7 != 0) {
        local_c4 = (CKeys *)((float)local_c4 - local_50);
      }
      fVar17 = 8.106091e-39;
      pCVar18 = g_CKeysPtr;
      iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_EQUALS);
      if (iVar7 != 0) {
        local_4c = local_4c - local_60;
      }
      pCVar19 = g_CKeysPtr;
      iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_MINUS);
      if (iVar7 != 0) {
        local_4c = local_4c + local_60;
      }
      if (local_c8 < (float)-1.57079632675) {
        local_c8 = -1.5707964;
      }
      if ((float)1.57079632675 < local_c8) {
        local_c8 = 1.5707964;
      }
      if ((float)local_c4 < (float)-1.57079632675) {
        local_c4 = (CKeys *)((float)local_c4 + 6.283185f);
      }
      if ((float)1.57079632675 < (float)local_c4) {
        local_c4 = (CKeys *)((float)local_c4 + -6.283185f);
      }
      if (local_4c < (float)0.5) {
        local_4c = 0.5;
      }
      iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
      if (iVar7 == 0) {
        fVar20 = 8.106946e-39;
        core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                  (&local_3c->rotation_matrix,&local_17c);
        pSVar6 = local_3c;
        this_ptr_00 = (CSlew *)&stack0xfffffdd8;
        fVar21 = 8.107024e-39;
        core_slew_cpp_CSlew_processInput_FUN_005a20b0(this_ptr_00);
        if ((SVDBox *)&stack0xfffffdd8 != pSVar6) {
          (pSVar6->position).x = fVar20;
          (pSVar6->position).y = fVar21;
          (pSVar6->position).z = (float)this_ptr_00;
        }
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  (&local_3c->rotation_matrix,(CVector3f *)&stack0xfffffde4);
      }
      else {
        local_48 = g_CGamePtr->delta_time_float * (float)4;
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
        if (iVar7 != 0) {
          local_48 = local_48 * (float)0.10000000000000001;
        }
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD4);
        if (iVar7 != 0) {
          (local_3c->extents).x = (local_3c->extents).x - local_48;
        }
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD6);
        if (iVar7 != 0) {
          (local_3c->extents).x = (local_3c->extents).x + local_48;
        }
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_A);
        if (iVar7 != 0) {
          (local_3c->extents).y = (local_3c->extents).y - local_48;
        }
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_Q);
        if (iVar7 != 0) {
          (local_3c->extents).y = (local_3c->extents).y + local_48;
        }
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD2);
        if (iVar7 != 0) {
          (local_3c->extents).z = (local_3c->extents).z - local_48;
        }
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD8);
        if (iVar7 != 0) {
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
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_TAB);
    if (iVar7 != 0) {
      iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
      if (iVar7 == 0) {
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
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_I);
    if (iVar7 != 0) {
      iVar7 = this_ptr->vdir_box_count;
      if (iVar7 < 0xfa) {
        pSVar6 = local_40 + iVar7;
        if (pSVar6 != (SVDBox *)&stack0xfffffdbc) {
          (pSVar6->position).x = (float)pCVar16;
          (pSVar6->position).y = fVar17;
          (pSVar6->position).z = (float)pCVar18;
        }
        local_bc.z = 0.0;
        local_bc.x = 0.0;
        local_bc.y = (float)pCVar19;
        local_18 = iVar7;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  (&pSVar6->rotation_matrix,&local_bc);
        (pSVar6->extents).x = 10.0;
        (pSVar6->extents).y = 10.0;
        (pSVar6->extents).z = 10.0;
        this_ptr->vdir_box_count = this_ptr->vdir_box_count + 1;
      }
      else {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Max number of boxes has been reached, can't add any more boxes.");
      }
    }
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_R);
    if (iVar7 != 0) {
      iVar7 = this_ptr->vdir_box_count;
      if (iVar7 < 0xfa) {
        if ((-1 < local_18) && (local_18 < iVar7)) {
          pSVar6 = local_40 + iVar7;
          pSVar10 = local_40 + local_18;
          if (pSVar6 != pSVar10) {
            (pSVar6->position).x = (pSVar10->position).x;
            (pSVar6->position).y = (pSVar10->position).y;
            (pSVar6->position).z = (pSVar10->position).z;
          }
          if (&pSVar6->extents != &pSVar10->extents) {
            (pSVar6->extents).x = (pSVar10->extents).x;
            (pSVar6->extents).y = (pSVar10->extents).y;
            (pSVar6->extents).z = (pSVar10->extents).z;
          }
          (pSVar6->rotation_matrix).m[0].x = (pSVar10->rotation_matrix).m[0].x;
          (pSVar6->rotation_matrix).m[0].y = (pSVar10->rotation_matrix).m[0].y;
          (pSVar6->rotation_matrix).m[0].z = (pSVar10->rotation_matrix).m[0].z;
          (pSVar6->rotation_matrix).m[1].x = (pSVar10->rotation_matrix).m[1].x;
          (pSVar6->rotation_matrix).m[1].y = (pSVar10->rotation_matrix).m[1].y;
          (pSVar6->rotation_matrix).m[1].z = (pSVar10->rotation_matrix).m[1].z;
          (pSVar6->rotation_matrix).m[2].x = (pSVar10->rotation_matrix).m[2].x;
          (pSVar6->rotation_matrix).m[2].y = (pSVar10->rotation_matrix).m[2].y;
          (pSVar6->rotation_matrix).m[2].z = (pSVar10->rotation_matrix).m[2].z;
          pSVar6->reserved = pSVar10->reserved;
          pSVar6->parent_index = pSVar10->parent_index;
          local_18 = this_ptr->vdir_box_count;
          pSVar6 = local_40 + local_18;
          this_ptr->vdir_box_count = local_18 + 1;
          local_1ac.x = 0.5;
          local_1ac.y = 0.5;
          local_1ac.z = 0.5;
          pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (&pSVar6->rotation_matrix,&local_ec,&local_1ac);
          (pSVar6->position).x = pCVar3->x + (pSVar6->position).x;
          (pSVar6->position).y = pCVar3->y + (pSVar6->position).y;
          (pSVar6->position).z = pCVar3->z + (pSVar6->position).z;
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
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_D);
    if ((((iVar7 != 0) && (-1 < local_18)) && (local_18 < this_ptr->vdir_box_count)) &&
       (iVar4 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                          (g_CEditorToolsPtr,"Delete the selected box?"), iVar7 = local_18,
       iVar4 != 0)) {
      iVar4 = this_ptr->vdir_box_count + -1;
      this_ptr->vdir_box_count = iVar4;
      memmove
                (local_40 + local_18,local_40 + local_18 + 1,(iVar4 - local_18) * 0x44);
      if (this_ptr->vdir_box_count <= iVar7) {
        local_18 = 0;
      }
    }
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_N);
    if (iVar7 != 0) {
      local_18 = -1;
    }
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F1);
    if (iVar7 != 0) {
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
    if (((local_68.dword & 1) != 0) && ((g_MouseButtonFlags.dword & 1) == 0)) {
      local_188 = g_CDemonCameraInstance.base.position.x;
      local_184 = *local_6c;
      local_180 = (float)*local_70;
      core_dcamera_cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480
                (&g_CDemonCameraInstance,&local_d4,g_MouseX,g_MouseY);
      iVar7 = 0;
      local_38 = 1e+30;
      if (0 < this_ptr->vdir_box_count) {
        local_1c = &local_40->rotation_matrix;
        pCVar3 = &local_40->extents;
        do {
          core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                    (local_1c,(CVector3f *)(local_180 - local_40[iVar7].position.z),
                     (CVector3f *)&stack0xfffffe0c);
          core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                    (local_1c,&local_98,(CVector3f *)&stack0xfffffe18);
          local_11c = -pCVar3->x;
          local_118 = -pCVar3->y;
          local_114 = -pCVar3->z;
          local_24 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                               ((CBoundingBox3D *)&stack0xfffffdf4,&local_110,&local_98,
                                (CVector3f *)0x0);
          local_78 = (double)local_24;
          if (((0.0 <= local_78) && (local_78 < 1.0)) && (local_24 < local_38)) {
            local_38 = local_24;
            local_18 = iVar7;
          }
          pCVar3 = (CVector3f *)((int)(pCVar3 + 5) + 8);
          iVar7 = iVar7 + 1;
          local_1c = (CMatrix3x3f *)((int)(local_1c + 1) + 0x20);
          local_14 = local_24;
        } while (iVar7 < this_ptr->vdir_box_count);
      }
    }
  } while( true );
}
