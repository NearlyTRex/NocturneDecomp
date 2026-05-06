// Name: core_setedit.cpp_CDemonSet_showVdirBoxEditor_FUN_00583170
// Address: 00583170
// Address Range: [[00583170, 005848f1] [00603ef8, 0060477f]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_showVdirBoxEditor_FUN_00583170(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_showVdirBoxEditor_FUN_00583170(CDemonSet *this_ptr)

{
  CVector3f *pCVar1;
  bool bVar2;
  SRenderVertex vertex1;
  SRenderVertex vertex1_00;
  SRenderVertex vertex1_01;
  SRenderVertex vertex1_02;
  SRenderVertex vertex1_03;
  SRenderVertex vertex1_04;
  SRenderVertex vertex1_05;
  SRenderVertex vertex1_06;
  SRenderVertex vertex1_07;
  SRenderVertex vertex1_08;
  SRenderVertex vertex1_09;
  SRenderVertex vertex1_10;
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
  CMatrix3x3f *pCVar3;
  CVector3f *pCVar4;
  uint text_color;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  SVDBox *pSVar10;
  int iVar11;
  SRenderVertex *pSVar12;
  SRenderVertex *pSVar13;
  SVDBox *pSVar14;
  int *piVar15;
  byte bVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  CKeys *in_stack_fffffdbc;
  float in_stack_fffffdc0;
  CKeys *in_stack_fffffdc4;
  uint in_stack_fffffdcc;
  float fVar37;
  float fVar38;
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
  float local_188;
  uint local_184;
  float local_180;
  CVector3f local_17c;
  CVector3i local_170;
  float local_164;
  float local_160;
  float local_15c;
  CVector3f local_158;
  CVector3i local_14c;
  CVector3f local_140;
  CVector3f local_134;
  CVector3f local_128;
  float local_11c;
  float local_118;
  float local_114;
  CVector3f local_110;
  CVector3i local_104;
  CVector3f local_f8;
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
  float *local_70;
  uint *local_6c;
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
  CVector3f *local_2c;
  int local_28;
  float local_24;
  CVector3f *local_20;
  CMatrix3x3f *local_1c;
  int local_18;
  float local_14;
  
  bVar16 = 0;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Preparing set.");
  core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
  this_ptr->actor_count = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)&stack0xfffffdbc);
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
  local_6c = (uint *)((int)&g_CDemonCameraInstance.base.position + 4);
  local_18 = 0;
  local_70 = (float *)((int)&g_CDemonCameraInstance.base.position + 8);
  local_40 = local_44;
  do {
    iVar11 = local_18;
    local_68 = g_MouseButtonFlags;
    core_setdir_cpp_CDemonSet_buildVdirBoxGroups_FUN_00576710(this_ptr);
    local_3c = (SVDBox *)0x0;
    if ((-1 < iVar11) && (iVar11 < this_ptr->vdir_box_count)) {
      local_3c = local_40 + iVar11;
    }
    wincore_winrun_cpp_doNothing1_FUN_005f2f80();
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    pSVar10 = local_3c;
    wincore_windll_cpp_clearZBufferNative_FUN_005b3ed4();
    if (pSVar10 != (SVDBox *)0x0) {
      if ((float *)&stack0xfffffdc8 != &local_c8) {
        in_stack_fffffdcc = local_c4;
      }
      pCVar4 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                         (&local_3c->rotation_matrix,&local_1dc);
      in_stack_fffffdcc = (float)in_stack_fffffdcc + pCVar4->y;
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                ((CMatrix3x3f *)&stack0xfffffd94,(CVector3f *)&stack0xfffffdc8);
      local_1d0.z = -local_4c;
      local_1d0.x = 0.0;
      local_1d0.y = 0.0;
      local_14 = local_1d0.z;
      pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         ((CMatrix3x3f *)&stack0xfffffd94,&local_134,&local_1d0);
      local_1c4 = (CKeys *)(pCVar4->x + (local_3c->position).x);
      local_1c0 = pCVar4->y + (local_3c->position).y;
      local_1bc = (CKeys *)(pCVar4->z + (local_3c->position).z);
      if ((CKeys **)&stack0xfffffdbc != &local_1c4) {
        in_stack_fffffdbc = local_1c4;
        in_stack_fffffdc0 = local_1c0;
        in_stack_fffffdc4 = local_1bc;
      }
    }
    if ((int *)&stack0x00000000 != &g_CDemonCameraInstance.rect_array[7].x_max) {
      g_CDemonCameraInstance.base.position.f.x = (float)in_stack_fffffdbc;
      g_CDemonCameraInstance.base.position.f.y = in_stack_fffffdc0;
      g_CDemonCameraInstance.base.position.f.z = (float)in_stack_fffffdc4;
    }
    fVar37 = 28.0;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              (&g_CDemonCameraInstance.base.rotation_matrix,(CVector3f *)&stack0xfffffdc8);
    g_CDemonCameraInstance.base.focal_length = fVar37;
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(this_ptr,150.0,0);
    iVar11 = local_18;
    local_28 = -1;
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2,1);
    if ((-1 < iVar11) && (iVar11 < this_ptr->vdir_box_count)) {
      do {
        local_28 = iVar11;
        iVar11 = this_ptr->vdir_boxes[local_28].parent_index;
      } while (-1 < iVar11);
    }
    iVar11 = 0;
    if (0 < this_ptr->vdir_box_count) {
      local_34 = &local_44->rotation_matrix;
      do {
        pCVar4 = &local_44[iVar11].position;
        core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(local_34,&local_194);
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr2,pCVar4);
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr2,&local_194,(CVector3f *)0x0);
        iVar5 = iVar11;
        if (iVar11 == local_18) {
          pCVar1 = pCVar4 + 1;
          local_158.x = -pCVar1->x;
          local_158.y = -pCVar4[1].y;
          local_158.z = -pCVar4[1].z;
          core_setedit_cpp_renderColoredBox_FUN_005817d0(&local_158,pCVar1,0.5,0,0xff,0);
          text_color = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                                 (g_CEditorToolsPtr);
          shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
                    (g_CEditorToolsPtr,2.0,text_color);
          local_128.x = -pCVar1->x;
          local_128.y = -pCVar4[1].y;
          local_128.z = -pCVar4[1].z;
          shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
                    (g_CEditorToolsPtr,&local_128,pCVar1,text_color);
        }
        else {
          do {
            iVar28 = iVar5;
            iVar5 = this_ptr->vdir_boxes[iVar28].parent_index;
          } while (-1 < iVar5);
          pCVar1 = pCVar4 + 1;
          if (iVar28 == local_28) {
            local_f8.x = -pCVar1->x;
            local_f8.y = -pCVar4[1].y;
            local_f8.z = -pCVar4[1].z;
            core_setedit_cpp_renderColoredBox_FUN_005817d0(&local_f8,pCVar1,0.3,0,0x80,0);
            local_8c.x = -pCVar1->x;
            local_8c.y = -pCVar4[1].y;
            local_8c.z = -pCVar4[1].z;
            shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
                      (g_CEditorToolsPtr,&local_8c,pCVar1,2);
          }
          else {
            local_140.x = -pCVar1->x;
            local_140.y = -pCVar4[1].y;
            local_140.z = -pCVar4[1].z;
            core_setedit_cpp_renderColoredBox_FUN_005817d0(&local_140,pCVar1,0.2,0,0,0xff);
          }
        }
        pCVar3 = local_34;
        iVar11 = iVar11 + 1;
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
        local_34 = (CMatrix3x3f *)((int)(pCVar3 + 1) + 0x20);
      } while (iVar11 < this_ptr->vdir_box_count);
    }
    local_30 = 0;
    if (0 < this_ptr->camera_count) {
      local_2c = &local_64->orientation;
      local_20 = &local_64->position;
      do {
        pCVar4 = local_20;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr2,local_20);
        iVar11 = 4;
        bVar2 = true;
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr2,local_2c,(CVector3f *)0x0);
        if (((-1 < local_18) && (local_18 < this_ptr->vdir_box_count)) &&
           (iVar5 = core_setdir_cpp_CDemonSet_isPointInVdirGroup_FUN_00576340
                              (this_ptr,local_18,pCVar4), iVar5 != 0)) {
          iVar11 = 0xfb;
          bVar2 = false;
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
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[7].projected_vertex,&local_a4);
        if (bVar2) {
          engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
                    (g_CDemonRendererPtr2,iVar11);
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
          pSVar13 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          iVar5 = pSVar13[1].projected_vertex.transformed_x;
          iVar28 = pSVar13[1].projected_vertex.transformed_y;
          iVar29 = pSVar13[1].projected_vertex.transformed_z;
          iVar30 = pSVar13[1].projected_vertex.inv_z;
          iVar31 = pSVar13[1].projected_vertex.screen_x;
          iVar32 = pSVar13[1].projected_vertex.screen_y;
          iVar33 = pSVar13[1].u;
          iVar34 = pSVar13[1].v;
          iVar35 = pSVar13[1].r;
          iVar36 = pSVar13[1].g;
          iVar8 = pSVar13[1].b;
          iVar6 = pSVar13[1].a;
          pSVar12 = pSVar13 + 1;
          piVar15 = (int *)&stack0xfffffd64;
          iVar18 = iVar6;
          for (; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar15 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar16 * -2 + 1) * 4);
            piVar15 = piVar15 + (uint)bVar16 * -2 + 1;
          }
          iVar6 = (pSVar13->projected_vertex).transformed_x;
          iVar17 = (pSVar13->projected_vertex).transformed_y;
          iVar19 = (pSVar13->projected_vertex).transformed_z;
          iVar20 = (pSVar13->projected_vertex).inv_z;
          iVar21 = (pSVar13->projected_vertex).screen_x;
          iVar22 = (pSVar13->projected_vertex).screen_y;
          iVar23 = pSVar13->u;
          iVar24 = pSVar13->v;
          iVar25 = pSVar13->r;
          iVar26 = pSVar13->g;
          iVar9 = pSVar13->b;
          iVar7 = pSVar13->a;
          piVar15 = (int *)&stack0xfffffd34;
          iVar27 = iVar7;
          for (; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar15 = (pSVar13->projected_vertex).transformed_x;
            pSVar13 = (SRenderVertex *)((int)pSVar13 + ((uint)bVar16 * -2 + 1) * 4);
            piVar15 = piVar15 + (uint)bVar16 * -2 + 1;
          }
          vertex1.projected_vertex.transformed_y = iVar17;
          vertex1.projected_vertex.transformed_x = iVar6;
          vertex1.projected_vertex.transformed_z = iVar19;
          vertex1.projected_vertex.inv_z = iVar20;
          vertex1.projected_vertex.screen_x = iVar21;
          vertex1.projected_vertex.screen_y = iVar22;
          vertex1.u = iVar23;
          vertex1.v = iVar24;
          vertex1.r = iVar25;
          vertex1.g = iVar26;
          vertex1.b = iVar9;
          vertex1.a = iVar27;
          vertex2.projected_vertex.transformed_y = iVar28;
          vertex2.projected_vertex.transformed_x = iVar5;
          vertex2.projected_vertex.transformed_z = iVar29;
          vertex2.projected_vertex.inv_z = iVar30;
          vertex2.projected_vertex.screen_x = iVar31;
          vertex2.projected_vertex.screen_y = iVar32;
          vertex2.u = iVar33;
          vertex2.v = iVar34;
          vertex2.r = iVar35;
          vertex2.g = iVar36;
          vertex2.b = iVar8;
          vertex2.a = iVar18;
          g_ActiveRenderColor = iVar11;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1,vertex2);
          pSVar13 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          iVar11 = pSVar13[2].projected_vertex.transformed_x;
          iVar5 = pSVar13[2].projected_vertex.transformed_y;
          iVar28 = pSVar13[2].projected_vertex.transformed_z;
          iVar29 = pSVar13[2].projected_vertex.inv_z;
          iVar30 = pSVar13[2].projected_vertex.screen_x;
          iVar31 = pSVar13[2].projected_vertex.screen_y;
          iVar32 = pSVar13[2].u;
          iVar33 = pSVar13[2].v;
          iVar34 = pSVar13[2].r;
          iVar35 = pSVar13[2].g;
          iVar36 = pSVar13[2].b;
          iVar8 = pSVar13[2].a;
          pSVar12 = pSVar13 + 2;
          piVar15 = (int *)&stack0xfffffd64;
          iVar6 = iVar8;
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar15 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar16 * -2 + 1) * 4);
            piVar15 = piVar15 + (uint)bVar16 * -2 + 1;
          }
          iVar8 = pSVar13[1].projected_vertex.transformed_x;
          iVar18 = pSVar13[1].projected_vertex.transformed_y;
          iVar17 = pSVar13[1].projected_vertex.transformed_z;
          iVar19 = pSVar13[1].projected_vertex.inv_z;
          iVar20 = pSVar13[1].projected_vertex.screen_x;
          iVar21 = pSVar13[1].projected_vertex.screen_y;
          iVar22 = pSVar13[1].u;
          iVar23 = pSVar13[1].v;
          iVar24 = pSVar13[1].r;
          iVar25 = pSVar13[1].g;
          iVar26 = pSVar13[1].b;
          iVar9 = pSVar13[1].a;
          pSVar13 = pSVar13 + 1;
          piVar15 = (int *)&stack0xfffffd34;
          iVar7 = iVar9;
          for (; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar15 = (pSVar13->projected_vertex).transformed_x;
            pSVar13 = (SRenderVertex *)((int)pSVar13 + ((uint)bVar16 * -2 + 1) * 4);
            piVar15 = piVar15 + (uint)bVar16 * -2 + 1;
          }
          vertex1_00.projected_vertex.transformed_y = iVar18;
          vertex1_00.projected_vertex.transformed_x = iVar8;
          vertex1_00.projected_vertex.transformed_z = iVar17;
          vertex1_00.projected_vertex.inv_z = iVar19;
          vertex1_00.projected_vertex.screen_x = iVar20;
          vertex1_00.projected_vertex.screen_y = iVar21;
          vertex1_00.u = iVar22;
          vertex1_00.v = iVar23;
          vertex1_00.r = iVar24;
          vertex1_00.g = iVar25;
          vertex1_00.b = iVar26;
          vertex1_00.a = iVar7;
          vertex2_00.projected_vertex.transformed_y = iVar5;
          vertex2_00.projected_vertex.transformed_x = iVar11;
          vertex2_00.projected_vertex.transformed_z = iVar28;
          vertex2_00.projected_vertex.inv_z = iVar29;
          vertex2_00.projected_vertex.screen_x = iVar30;
          vertex2_00.projected_vertex.screen_y = iVar31;
          vertex2_00.u = iVar32;
          vertex2_00.v = iVar33;
          vertex2_00.r = iVar34;
          vertex2_00.g = iVar35;
          vertex2_00.b = iVar36;
          vertex2_00.a = iVar6;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1_00,vertex2_00);
          pSVar13 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          iVar11 = pSVar13[3].projected_vertex.transformed_x;
          iVar5 = pSVar13[3].projected_vertex.transformed_y;
          iVar28 = pSVar13[3].projected_vertex.transformed_z;
          iVar29 = pSVar13[3].projected_vertex.inv_z;
          iVar30 = pSVar13[3].projected_vertex.screen_x;
          iVar31 = pSVar13[3].projected_vertex.screen_y;
          iVar32 = pSVar13[3].u;
          iVar33 = pSVar13[3].v;
          iVar34 = pSVar13[3].r;
          iVar35 = pSVar13[3].g;
          iVar36 = pSVar13[3].b;
          iVar8 = pSVar13[3].a;
          pSVar12 = pSVar13 + 3;
          piVar15 = (int *)&stack0xfffffd64;
          iVar6 = iVar8;
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar15 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar16 * -2 + 1) * 4);
            piVar15 = piVar15 + (uint)bVar16 * -2 + 1;
          }
          iVar8 = pSVar13[2].projected_vertex.transformed_x;
          iVar18 = pSVar13[2].projected_vertex.transformed_y;
          iVar17 = pSVar13[2].projected_vertex.transformed_z;
          iVar19 = pSVar13[2].projected_vertex.inv_z;
          iVar20 = pSVar13[2].projected_vertex.screen_x;
          iVar21 = pSVar13[2].projected_vertex.screen_y;
          iVar22 = pSVar13[2].u;
          iVar23 = pSVar13[2].v;
          iVar24 = pSVar13[2].r;
          iVar25 = pSVar13[2].g;
          iVar26 = pSVar13[2].b;
          iVar9 = pSVar13[2].a;
          pSVar13 = pSVar13 + 2;
          piVar15 = (int *)&stack0xfffffd34;
          iVar7 = iVar9;
          for (; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar15 = (pSVar13->projected_vertex).transformed_x;
            pSVar13 = (SRenderVertex *)((int)pSVar13 + ((uint)bVar16 * -2 + 1) * 4);
            piVar15 = piVar15 + (uint)bVar16 * -2 + 1;
          }
          vertex1_01.projected_vertex.transformed_y = iVar18;
          vertex1_01.projected_vertex.transformed_x = iVar8;
          vertex1_01.projected_vertex.transformed_z = iVar17;
          vertex1_01.projected_vertex.inv_z = iVar19;
          vertex1_01.projected_vertex.screen_x = iVar20;
          vertex1_01.projected_vertex.screen_y = iVar21;
          vertex1_01.u = iVar22;
          vertex1_01.v = iVar23;
          vertex1_01.r = iVar24;
          vertex1_01.g = iVar25;
          vertex1_01.b = iVar26;
          vertex1_01.a = iVar7;
          vertex2_01.projected_vertex.transformed_y = iVar5;
          vertex2_01.projected_vertex.transformed_x = iVar11;
          vertex2_01.projected_vertex.transformed_z = iVar28;
          vertex2_01.projected_vertex.inv_z = iVar29;
          vertex2_01.projected_vertex.screen_x = iVar30;
          vertex2_01.projected_vertex.screen_y = iVar31;
          vertex2_01.u = iVar32;
          vertex2_01.v = iVar33;
          vertex2_01.r = iVar34;
          vertex2_01.g = iVar35;
          vertex2_01.b = iVar36;
          vertex2_01.a = iVar6;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1_01,vertex2_01);
          pSVar13 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          iVar11 = (pSVar13->projected_vertex).transformed_x;
          iVar5 = (pSVar13->projected_vertex).transformed_y;
          iVar28 = (pSVar13->projected_vertex).transformed_z;
          iVar29 = (pSVar13->projected_vertex).inv_z;
          iVar30 = (pSVar13->projected_vertex).screen_x;
          iVar31 = (pSVar13->projected_vertex).screen_y;
          iVar32 = pSVar13->u;
          iVar33 = pSVar13->v;
          iVar34 = pSVar13->r;
          iVar35 = pSVar13->g;
          iVar36 = pSVar13->b;
          iVar8 = pSVar13->a;
          pSVar12 = pSVar13;
          piVar15 = (int *)&stack0xfffffd64;
          iVar6 = iVar8;
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar15 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar16 * -2 + 1) * 4);
            piVar15 = piVar15 + (uint)bVar16 * -2 + 1;
          }
          iVar8 = pSVar13[3].projected_vertex.transformed_x;
          iVar18 = pSVar13[3].projected_vertex.transformed_y;
          iVar17 = pSVar13[3].projected_vertex.transformed_z;
          iVar19 = pSVar13[3].projected_vertex.inv_z;
          iVar20 = pSVar13[3].projected_vertex.screen_x;
          iVar21 = pSVar13[3].projected_vertex.screen_y;
          iVar22 = pSVar13[3].u;
          iVar23 = pSVar13[3].v;
          iVar24 = pSVar13[3].r;
          iVar25 = pSVar13[3].g;
          iVar26 = pSVar13[3].b;
          iVar9 = pSVar13[3].a;
          pSVar13 = pSVar13 + 3;
          piVar15 = (int *)&stack0xfffffd34;
          iVar7 = iVar9;
          for (; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar15 = (pSVar13->projected_vertex).transformed_x;
            pSVar13 = (SRenderVertex *)((int)pSVar13 + ((uint)bVar16 * -2 + 1) * 4);
            piVar15 = piVar15 + (uint)bVar16 * -2 + 1;
          }
          vertex1_02.projected_vertex.transformed_y = iVar18;
          vertex1_02.projected_vertex.transformed_x = iVar8;
          vertex1_02.projected_vertex.transformed_z = iVar17;
          vertex1_02.projected_vertex.inv_z = iVar19;
          vertex1_02.projected_vertex.screen_x = iVar20;
          vertex1_02.projected_vertex.screen_y = iVar21;
          vertex1_02.u = iVar22;
          vertex1_02.v = iVar23;
          vertex1_02.r = iVar24;
          vertex1_02.g = iVar25;
          vertex1_02.b = iVar26;
          vertex1_02.a = iVar7;
          vertex2_02.projected_vertex.transformed_y = iVar5;
          vertex2_02.projected_vertex.transformed_x = iVar11;
          vertex2_02.projected_vertex.transformed_z = iVar28;
          vertex2_02.projected_vertex.inv_z = iVar29;
          vertex2_02.projected_vertex.screen_x = iVar30;
          vertex2_02.projected_vertex.screen_y = iVar31;
          vertex2_02.u = iVar32;
          vertex2_02.v = iVar33;
          vertex2_02.r = iVar34;
          vertex2_02.g = iVar35;
          vertex2_02.b = iVar36;
          vertex2_02.a = iVar6;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1_02,vertex2_02);
          pSVar13 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          iVar11 = pSVar13[5].projected_vertex.transformed_x;
          iVar5 = pSVar13[5].projected_vertex.transformed_y;
          iVar28 = pSVar13[5].projected_vertex.transformed_z;
          iVar29 = pSVar13[5].projected_vertex.inv_z;
          iVar30 = pSVar13[5].projected_vertex.screen_x;
          iVar31 = pSVar13[5].projected_vertex.screen_y;
          iVar32 = pSVar13[5].u;
          iVar33 = pSVar13[5].v;
          iVar34 = pSVar13[5].r;
          iVar35 = pSVar13[5].g;
          iVar36 = pSVar13[5].b;
          iVar8 = pSVar13[5].a;
          pSVar12 = pSVar13 + 5;
          piVar15 = (int *)&stack0xfffffd64;
          iVar6 = iVar8;
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar15 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar16 * -2 + 1) * 4);
            piVar15 = piVar15 + (uint)bVar16 * -2 + 1;
          }
          iVar8 = pSVar13[4].projected_vertex.transformed_x;
          iVar18 = pSVar13[4].projected_vertex.transformed_y;
          iVar17 = pSVar13[4].projected_vertex.transformed_z;
          iVar19 = pSVar13[4].projected_vertex.inv_z;
          iVar20 = pSVar13[4].projected_vertex.screen_x;
          iVar21 = pSVar13[4].projected_vertex.screen_y;
          iVar22 = pSVar13[4].u;
          iVar23 = pSVar13[4].v;
          iVar24 = pSVar13[4].r;
          iVar25 = pSVar13[4].g;
          iVar26 = pSVar13[4].b;
          iVar9 = pSVar13[4].a;
          pSVar13 = pSVar13 + 4;
          piVar15 = (int *)&stack0xfffffd34;
          iVar7 = iVar9;
          for (; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar15 = (pSVar13->projected_vertex).transformed_x;
            pSVar13 = (SRenderVertex *)((int)pSVar13 + ((uint)bVar16 * -2 + 1) * 4);
            piVar15 = piVar15 + (uint)bVar16 * -2 + 1;
          }
          vertex1_03.projected_vertex.transformed_y = iVar18;
          vertex1_03.projected_vertex.transformed_x = iVar8;
          vertex1_03.projected_vertex.transformed_z = iVar17;
          vertex1_03.projected_vertex.inv_z = iVar19;
          vertex1_03.projected_vertex.screen_x = iVar20;
          vertex1_03.projected_vertex.screen_y = iVar21;
          vertex1_03.u = iVar22;
          vertex1_03.v = iVar23;
          vertex1_03.r = iVar24;
          vertex1_03.g = iVar25;
          vertex1_03.b = iVar26;
          vertex1_03.a = iVar7;
          vertex2_03.projected_vertex.transformed_y = iVar5;
          vertex2_03.projected_vertex.transformed_x = iVar11;
          vertex2_03.projected_vertex.transformed_z = iVar28;
          vertex2_03.projected_vertex.inv_z = iVar29;
          vertex2_03.projected_vertex.screen_x = iVar30;
          vertex2_03.projected_vertex.screen_y = iVar31;
          vertex2_03.u = iVar32;
          vertex2_03.v = iVar33;
          vertex2_03.r = iVar34;
          vertex2_03.g = iVar35;
          vertex2_03.b = iVar36;
          vertex2_03.a = iVar6;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1_03,vertex2_03);
          pSVar13 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          iVar11 = pSVar13[6].projected_vertex.transformed_x;
          iVar5 = pSVar13[6].projected_vertex.transformed_y;
          iVar28 = pSVar13[6].projected_vertex.transformed_z;
          iVar29 = pSVar13[6].projected_vertex.inv_z;
          iVar30 = pSVar13[6].projected_vertex.screen_x;
          iVar31 = pSVar13[6].projected_vertex.screen_y;
          iVar32 = pSVar13[6].u;
          iVar33 = pSVar13[6].v;
          iVar34 = pSVar13[6].r;
          iVar35 = pSVar13[6].g;
          iVar36 = pSVar13[6].b;
          iVar8 = pSVar13[6].a;
          pSVar12 = pSVar13 + 6;
          piVar15 = (int *)&stack0xfffffd64;
          iVar6 = iVar8;
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar15 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar16 * -2 + 1) * 4);
            piVar15 = piVar15 + (uint)bVar16 * -2 + 1;
          }
          iVar8 = pSVar13[5].projected_vertex.transformed_x;
          iVar18 = pSVar13[5].projected_vertex.transformed_y;
          iVar17 = pSVar13[5].projected_vertex.transformed_z;
          iVar19 = pSVar13[5].projected_vertex.inv_z;
          iVar20 = pSVar13[5].projected_vertex.screen_x;
          iVar21 = pSVar13[5].projected_vertex.screen_y;
          iVar22 = pSVar13[5].u;
          iVar23 = pSVar13[5].v;
          iVar24 = pSVar13[5].r;
          iVar25 = pSVar13[5].g;
          iVar26 = pSVar13[5].b;
          iVar9 = pSVar13[5].a;
          pSVar13 = pSVar13 + 5;
          piVar15 = (int *)&stack0xfffffd34;
          iVar7 = iVar9;
          for (; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar15 = (pSVar13->projected_vertex).transformed_x;
            pSVar13 = (SRenderVertex *)((int)pSVar13 + ((uint)bVar16 * -2 + 1) * 4);
            piVar15 = piVar15 + (uint)bVar16 * -2 + 1;
          }
          vertex1_04.projected_vertex.transformed_y = iVar18;
          vertex1_04.projected_vertex.transformed_x = iVar8;
          vertex1_04.projected_vertex.transformed_z = iVar17;
          vertex1_04.projected_vertex.inv_z = iVar19;
          vertex1_04.projected_vertex.screen_x = iVar20;
          vertex1_04.projected_vertex.screen_y = iVar21;
          vertex1_04.u = iVar22;
          vertex1_04.v = iVar23;
          vertex1_04.r = iVar24;
          vertex1_04.g = iVar25;
          vertex1_04.b = iVar26;
          vertex1_04.a = iVar7;
          vertex2_04.projected_vertex.transformed_y = iVar5;
          vertex2_04.projected_vertex.transformed_x = iVar11;
          vertex2_04.projected_vertex.transformed_z = iVar28;
          vertex2_04.projected_vertex.inv_z = iVar29;
          vertex2_04.projected_vertex.screen_x = iVar30;
          vertex2_04.projected_vertex.screen_y = iVar31;
          vertex2_04.u = iVar32;
          vertex2_04.v = iVar33;
          vertex2_04.r = iVar34;
          vertex2_04.g = iVar35;
          vertex2_04.b = iVar36;
          vertex2_04.a = iVar6;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1_04,vertex2_04);
          pSVar13 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          iVar11 = pSVar13[7].projected_vertex.transformed_x;
          iVar5 = pSVar13[7].projected_vertex.transformed_y;
          iVar28 = pSVar13[7].projected_vertex.transformed_z;
          iVar29 = pSVar13[7].projected_vertex.inv_z;
          iVar30 = pSVar13[7].projected_vertex.screen_x;
          iVar31 = pSVar13[7].projected_vertex.screen_y;
          iVar32 = pSVar13[7].u;
          iVar33 = pSVar13[7].v;
          iVar34 = pSVar13[7].r;
          iVar35 = pSVar13[7].g;
          iVar36 = pSVar13[7].b;
          iVar8 = pSVar13[7].a;
          pSVar12 = pSVar13 + 7;
          piVar15 = (int *)&stack0xfffffd64;
          iVar6 = iVar8;
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar15 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar16 * -2 + 1) * 4);
            piVar15 = piVar15 + (uint)bVar16 * -2 + 1;
          }
          iVar8 = pSVar13[6].projected_vertex.transformed_x;
          iVar18 = pSVar13[6].projected_vertex.transformed_y;
          iVar17 = pSVar13[6].projected_vertex.transformed_z;
          iVar19 = pSVar13[6].projected_vertex.inv_z;
          iVar20 = pSVar13[6].projected_vertex.screen_x;
          iVar21 = pSVar13[6].projected_vertex.screen_y;
          iVar22 = pSVar13[6].u;
          iVar23 = pSVar13[6].v;
          iVar24 = pSVar13[6].r;
          iVar25 = pSVar13[6].g;
          iVar26 = pSVar13[6].b;
          iVar9 = pSVar13[6].a;
          pSVar13 = pSVar13 + 6;
          piVar15 = (int *)&stack0xfffffd34;
          iVar7 = iVar9;
          for (; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar15 = (pSVar13->projected_vertex).transformed_x;
            pSVar13 = (SRenderVertex *)((int)pSVar13 + ((uint)bVar16 * -2 + 1) * 4);
            piVar15 = piVar15 + (uint)bVar16 * -2 + 1;
          }
          vertex1_05.projected_vertex.transformed_y = iVar18;
          vertex1_05.projected_vertex.transformed_x = iVar8;
          vertex1_05.projected_vertex.transformed_z = iVar17;
          vertex1_05.projected_vertex.inv_z = iVar19;
          vertex1_05.projected_vertex.screen_x = iVar20;
          vertex1_05.projected_vertex.screen_y = iVar21;
          vertex1_05.u = iVar22;
          vertex1_05.v = iVar23;
          vertex1_05.r = iVar24;
          vertex1_05.g = iVar25;
          vertex1_05.b = iVar26;
          vertex1_05.a = iVar7;
          vertex2_05.projected_vertex.transformed_y = iVar5;
          vertex2_05.projected_vertex.transformed_x = iVar11;
          vertex2_05.projected_vertex.transformed_z = iVar28;
          vertex2_05.projected_vertex.inv_z = iVar29;
          vertex2_05.projected_vertex.screen_x = iVar30;
          vertex2_05.projected_vertex.screen_y = iVar31;
          vertex2_05.u = iVar32;
          vertex2_05.v = iVar33;
          vertex2_05.r = iVar34;
          vertex2_05.g = iVar35;
          vertex2_05.b = iVar36;
          vertex2_05.a = iVar6;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1_05,vertex2_05);
          pSVar13 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          iVar11 = pSVar13[4].projected_vertex.transformed_x;
          iVar5 = pSVar13[4].projected_vertex.transformed_y;
          iVar28 = pSVar13[4].projected_vertex.transformed_z;
          iVar29 = pSVar13[4].projected_vertex.inv_z;
          iVar30 = pSVar13[4].projected_vertex.screen_x;
          iVar31 = pSVar13[4].projected_vertex.screen_y;
          iVar32 = pSVar13[4].u;
          iVar33 = pSVar13[4].v;
          iVar34 = pSVar13[4].r;
          iVar35 = pSVar13[4].g;
          iVar36 = pSVar13[4].b;
          iVar8 = pSVar13[4].a;
          pSVar12 = pSVar13 + 4;
          piVar15 = (int *)&stack0xfffffd64;
          iVar6 = iVar8;
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar15 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar16 * -2 + 1) * 4);
            piVar15 = piVar15 + (uint)bVar16 * -2 + 1;
          }
          iVar8 = pSVar13[7].projected_vertex.transformed_x;
          iVar18 = pSVar13[7].projected_vertex.transformed_y;
          iVar17 = pSVar13[7].projected_vertex.transformed_z;
          iVar19 = pSVar13[7].projected_vertex.inv_z;
          iVar20 = pSVar13[7].projected_vertex.screen_x;
          iVar21 = pSVar13[7].projected_vertex.screen_y;
          iVar22 = pSVar13[7].u;
          iVar23 = pSVar13[7].v;
          iVar24 = pSVar13[7].r;
          iVar25 = pSVar13[7].g;
          iVar26 = pSVar13[7].b;
          iVar9 = pSVar13[7].a;
          pSVar13 = pSVar13 + 7;
          piVar15 = (int *)&stack0xfffffd34;
          iVar7 = iVar9;
          for (; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar15 = (pSVar13->projected_vertex).transformed_x;
            pSVar13 = (SRenderVertex *)((int)pSVar13 + ((uint)bVar16 * -2 + 1) * 4);
            piVar15 = piVar15 + (uint)bVar16 * -2 + 1;
          }
          vertex1_06.projected_vertex.transformed_y = iVar18;
          vertex1_06.projected_vertex.transformed_x = iVar8;
          vertex1_06.projected_vertex.transformed_z = iVar17;
          vertex1_06.projected_vertex.inv_z = iVar19;
          vertex1_06.projected_vertex.screen_x = iVar20;
          vertex1_06.projected_vertex.screen_y = iVar21;
          vertex1_06.u = iVar22;
          vertex1_06.v = iVar23;
          vertex1_06.r = iVar24;
          vertex1_06.g = iVar25;
          vertex1_06.b = iVar26;
          vertex1_06.a = iVar7;
          vertex2_06.projected_vertex.transformed_y = iVar5;
          vertex2_06.projected_vertex.transformed_x = iVar11;
          vertex2_06.projected_vertex.transformed_z = iVar28;
          vertex2_06.projected_vertex.inv_z = iVar29;
          vertex2_06.projected_vertex.screen_x = iVar30;
          vertex2_06.projected_vertex.screen_y = iVar31;
          vertex2_06.u = iVar32;
          vertex2_06.v = iVar33;
          vertex2_06.r = iVar34;
          vertex2_06.g = iVar35;
          vertex2_06.b = iVar36;
          vertex2_06.a = iVar6;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1_06,vertex2_06);
          pSVar13 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          iVar11 = pSVar13[4].projected_vertex.transformed_x;
          iVar5 = pSVar13[4].projected_vertex.transformed_y;
          iVar28 = pSVar13[4].projected_vertex.transformed_z;
          iVar29 = pSVar13[4].projected_vertex.inv_z;
          iVar30 = pSVar13[4].projected_vertex.screen_x;
          iVar31 = pSVar13[4].projected_vertex.screen_y;
          iVar32 = pSVar13[4].u;
          iVar33 = pSVar13[4].v;
          iVar34 = pSVar13[4].r;
          iVar35 = pSVar13[4].g;
          iVar36 = pSVar13[4].b;
          iVar8 = pSVar13[4].a;
          pSVar12 = pSVar13 + 4;
          piVar15 = (int *)&stack0xfffffd64;
          iVar6 = iVar8;
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar15 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar16 * -2 + 1) * 4);
            piVar15 = piVar15 + (uint)bVar16 * -2 + 1;
          }
          iVar8 = (pSVar13->projected_vertex).transformed_x;
          iVar18 = (pSVar13->projected_vertex).transformed_y;
          iVar17 = (pSVar13->projected_vertex).transformed_z;
          iVar19 = (pSVar13->projected_vertex).inv_z;
          iVar20 = (pSVar13->projected_vertex).screen_x;
          iVar21 = (pSVar13->projected_vertex).screen_y;
          iVar22 = pSVar13->u;
          iVar23 = pSVar13->v;
          iVar24 = pSVar13->r;
          iVar25 = pSVar13->g;
          iVar26 = pSVar13->b;
          iVar9 = pSVar13->a;
          piVar15 = (int *)&stack0xfffffd34;
          iVar7 = iVar9;
          for (; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar15 = (pSVar13->projected_vertex).transformed_x;
            pSVar13 = (SRenderVertex *)((int)pSVar13 + ((uint)bVar16 * -2 + 1) * 4);
            piVar15 = piVar15 + (uint)bVar16 * -2 + 1;
          }
          vertex1_07.projected_vertex.transformed_y = iVar18;
          vertex1_07.projected_vertex.transformed_x = iVar8;
          vertex1_07.projected_vertex.transformed_z = iVar17;
          vertex1_07.projected_vertex.inv_z = iVar19;
          vertex1_07.projected_vertex.screen_x = iVar20;
          vertex1_07.projected_vertex.screen_y = iVar21;
          vertex1_07.u = iVar22;
          vertex1_07.v = iVar23;
          vertex1_07.r = iVar24;
          vertex1_07.g = iVar25;
          vertex1_07.b = iVar26;
          vertex1_07.a = iVar7;
          vertex2_07.projected_vertex.transformed_y = iVar5;
          vertex2_07.projected_vertex.transformed_x = iVar11;
          vertex2_07.projected_vertex.transformed_z = iVar28;
          vertex2_07.projected_vertex.inv_z = iVar29;
          vertex2_07.projected_vertex.screen_x = iVar30;
          vertex2_07.projected_vertex.screen_y = iVar31;
          vertex2_07.u = iVar32;
          vertex2_07.v = iVar33;
          vertex2_07.r = iVar34;
          vertex2_07.g = iVar35;
          vertex2_07.b = iVar36;
          vertex2_07.a = iVar6;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1_07,vertex2_07);
          pSVar13 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          iVar11 = pSVar13[5].projected_vertex.transformed_x;
          iVar5 = pSVar13[5].projected_vertex.transformed_y;
          iVar28 = pSVar13[5].projected_vertex.transformed_z;
          iVar29 = pSVar13[5].projected_vertex.inv_z;
          iVar30 = pSVar13[5].projected_vertex.screen_x;
          iVar31 = pSVar13[5].projected_vertex.screen_y;
          iVar32 = pSVar13[5].u;
          iVar33 = pSVar13[5].v;
          iVar34 = pSVar13[5].r;
          iVar35 = pSVar13[5].g;
          iVar36 = pSVar13[5].b;
          iVar8 = pSVar13[5].a;
          pSVar12 = pSVar13 + 5;
          piVar15 = (int *)&stack0xfffffd64;
          iVar6 = iVar8;
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar15 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar16 * -2 + 1) * 4);
            piVar15 = piVar15 + (uint)bVar16 * -2 + 1;
          }
          iVar8 = pSVar13[1].projected_vertex.transformed_x;
          iVar18 = pSVar13[1].projected_vertex.transformed_y;
          iVar17 = pSVar13[1].projected_vertex.transformed_z;
          iVar19 = pSVar13[1].projected_vertex.inv_z;
          iVar20 = pSVar13[1].projected_vertex.screen_x;
          iVar21 = pSVar13[1].projected_vertex.screen_y;
          iVar22 = pSVar13[1].u;
          iVar23 = pSVar13[1].v;
          iVar24 = pSVar13[1].r;
          iVar25 = pSVar13[1].g;
          iVar26 = pSVar13[1].b;
          iVar9 = pSVar13[1].a;
          pSVar13 = pSVar13 + 1;
          piVar15 = (int *)&stack0xfffffd34;
          iVar7 = iVar9;
          for (; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar15 = (pSVar13->projected_vertex).transformed_x;
            pSVar13 = (SRenderVertex *)((int)pSVar13 + ((uint)bVar16 * -2 + 1) * 4);
            piVar15 = piVar15 + (uint)bVar16 * -2 + 1;
          }
          vertex1_08.projected_vertex.transformed_y = iVar18;
          vertex1_08.projected_vertex.transformed_x = iVar8;
          vertex1_08.projected_vertex.transformed_z = iVar17;
          vertex1_08.projected_vertex.inv_z = iVar19;
          vertex1_08.projected_vertex.screen_x = iVar20;
          vertex1_08.projected_vertex.screen_y = iVar21;
          vertex1_08.u = iVar22;
          vertex1_08.v = iVar23;
          vertex1_08.r = iVar24;
          vertex1_08.g = iVar25;
          vertex1_08.b = iVar26;
          vertex1_08.a = iVar7;
          vertex2_08.projected_vertex.transformed_y = iVar5;
          vertex2_08.projected_vertex.transformed_x = iVar11;
          vertex2_08.projected_vertex.transformed_z = iVar28;
          vertex2_08.projected_vertex.inv_z = iVar29;
          vertex2_08.projected_vertex.screen_x = iVar30;
          vertex2_08.projected_vertex.screen_y = iVar31;
          vertex2_08.u = iVar32;
          vertex2_08.v = iVar33;
          vertex2_08.r = iVar34;
          vertex2_08.g = iVar35;
          vertex2_08.b = iVar36;
          vertex2_08.a = iVar6;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1_08,vertex2_08);
          pSVar13 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          iVar11 = pSVar13[6].projected_vertex.transformed_x;
          iVar5 = pSVar13[6].projected_vertex.transformed_y;
          iVar28 = pSVar13[6].projected_vertex.transformed_z;
          iVar29 = pSVar13[6].projected_vertex.inv_z;
          iVar30 = pSVar13[6].projected_vertex.screen_x;
          iVar31 = pSVar13[6].projected_vertex.screen_y;
          iVar32 = pSVar13[6].u;
          iVar33 = pSVar13[6].v;
          iVar34 = pSVar13[6].r;
          iVar35 = pSVar13[6].g;
          iVar36 = pSVar13[6].b;
          iVar8 = pSVar13[6].a;
          pSVar12 = pSVar13 + 6;
          piVar15 = (int *)&stack0xfffffd64;
          iVar6 = iVar8;
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar15 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar16 * -2 + 1) * 4);
            piVar15 = piVar15 + (uint)bVar16 * -2 + 1;
          }
          iVar8 = pSVar13[2].projected_vertex.transformed_x;
          iVar18 = pSVar13[2].projected_vertex.transformed_y;
          iVar17 = pSVar13[2].projected_vertex.transformed_z;
          iVar19 = pSVar13[2].projected_vertex.inv_z;
          iVar20 = pSVar13[2].projected_vertex.screen_x;
          iVar21 = pSVar13[2].projected_vertex.screen_y;
          iVar22 = pSVar13[2].u;
          iVar23 = pSVar13[2].v;
          iVar24 = pSVar13[2].r;
          iVar25 = pSVar13[2].g;
          iVar26 = pSVar13[2].b;
          iVar9 = pSVar13[2].a;
          pSVar13 = pSVar13 + 2;
          piVar15 = (int *)&stack0xfffffd34;
          iVar7 = iVar9;
          for (; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar15 = (pSVar13->projected_vertex).transformed_x;
            pSVar13 = (SRenderVertex *)((int)pSVar13 + ((uint)bVar16 * -2 + 1) * 4);
            piVar15 = piVar15 + (uint)bVar16 * -2 + 1;
          }
          vertex1_09.projected_vertex.transformed_y = iVar18;
          vertex1_09.projected_vertex.transformed_x = iVar8;
          vertex1_09.projected_vertex.transformed_z = iVar17;
          vertex1_09.projected_vertex.inv_z = iVar19;
          vertex1_09.projected_vertex.screen_x = iVar20;
          vertex1_09.projected_vertex.screen_y = iVar21;
          vertex1_09.u = iVar22;
          vertex1_09.v = iVar23;
          vertex1_09.r = iVar24;
          vertex1_09.g = iVar25;
          vertex1_09.b = iVar26;
          vertex1_09.a = iVar7;
          vertex2_09.projected_vertex.transformed_y = iVar5;
          vertex2_09.projected_vertex.transformed_x = iVar11;
          vertex2_09.projected_vertex.transformed_z = iVar28;
          vertex2_09.projected_vertex.inv_z = iVar29;
          vertex2_09.projected_vertex.screen_x = iVar30;
          vertex2_09.projected_vertex.screen_y = iVar31;
          vertex2_09.u = iVar32;
          vertex2_09.v = iVar33;
          vertex2_09.r = iVar34;
          vertex2_09.g = iVar35;
          vertex2_09.b = iVar36;
          vertex2_09.a = iVar6;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1_09,vertex2_09);
          pSVar13 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          iVar11 = pSVar13[7].projected_vertex.transformed_x;
          iVar5 = pSVar13[7].projected_vertex.transformed_y;
          iVar28 = pSVar13[7].projected_vertex.transformed_z;
          iVar29 = pSVar13[7].projected_vertex.inv_z;
          iVar30 = pSVar13[7].projected_vertex.screen_x;
          iVar31 = pSVar13[7].projected_vertex.screen_y;
          iVar32 = pSVar13[7].u;
          iVar33 = pSVar13[7].v;
          iVar34 = pSVar13[7].r;
          iVar35 = pSVar13[7].g;
          iVar36 = pSVar13[7].b;
          iVar8 = pSVar13[7].a;
          pSVar12 = pSVar13 + 7;
          piVar15 = (int *)&stack0xfffffd64;
          iVar6 = iVar8;
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar15 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar16 * -2 + 1) * 4);
            piVar15 = piVar15 + (uint)bVar16 * -2 + 1;
          }
          iVar8 = pSVar13[3].projected_vertex.transformed_x;
          iVar18 = pSVar13[3].projected_vertex.transformed_y;
          iVar17 = pSVar13[3].projected_vertex.transformed_z;
          iVar19 = pSVar13[3].projected_vertex.inv_z;
          iVar20 = pSVar13[3].projected_vertex.screen_x;
          iVar21 = pSVar13[3].projected_vertex.screen_y;
          iVar22 = pSVar13[3].u;
          iVar23 = pSVar13[3].v;
          iVar24 = pSVar13[3].r;
          iVar25 = pSVar13[3].g;
          iVar26 = pSVar13[3].b;
          iVar9 = pSVar13[3].a;
          pSVar13 = pSVar13 + 3;
          piVar15 = (int *)&stack0xfffffd34;
          iVar7 = iVar9;
          for (; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar15 = (pSVar13->projected_vertex).transformed_x;
            pSVar13 = (SRenderVertex *)((int)pSVar13 + ((uint)bVar16 * -2 + 1) * 4);
            piVar15 = piVar15 + (uint)bVar16 * -2 + 1;
          }
          vertex1_10.projected_vertex.transformed_y = iVar18;
          vertex1_10.projected_vertex.transformed_x = iVar8;
          vertex1_10.projected_vertex.transformed_z = iVar17;
          vertex1_10.projected_vertex.inv_z = iVar19;
          vertex1_10.projected_vertex.screen_x = iVar20;
          vertex1_10.projected_vertex.screen_y = iVar21;
          vertex1_10.u = iVar22;
          vertex1_10.v = iVar23;
          vertex1_10.r = iVar24;
          vertex1_10.g = iVar25;
          vertex1_10.b = iVar26;
          vertex1_10.a = iVar7;
          vertex2_10.projected_vertex.transformed_y = iVar5;
          vertex2_10.projected_vertex.transformed_x = iVar11;
          vertex2_10.projected_vertex.transformed_z = iVar28;
          vertex2_10.projected_vertex.inv_z = iVar29;
          vertex2_10.projected_vertex.screen_x = iVar30;
          vertex2_10.projected_vertex.screen_y = iVar31;
          vertex2_10.u = iVar32;
          vertex2_10.v = iVar33;
          vertex2_10.r = iVar34;
          vertex2_10.g = iVar35;
          vertex2_10.b = iVar36;
          vertex2_10.a = iVar6;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex1_10,vertex2_10);
        }
        pCVar1 = local_20;
        pCVar4 = local_2c;
        iVar11 = local_30;
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
        local_2c = pCVar4 + 0x23;
        local_20 = pCVar1 + 0x23;
        local_30 = iVar11 + 1;
      } while (local_30 < this_ptr->camera_count);
    }
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
    shape_edittool_cpp_CEditorTools_drawMousePointer_FUN_004a1380(g_CEditorToolsPtr,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDT_FUN_004d7d90(g_CGamePtr);
    iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (iVar11 != 0) {
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
      iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
      if (iVar11 == 0) {
        iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
        if (iVar11 != 0) {
          local_5c = local_58 * (float)10;
        }
      }
      else {
        local_5c = local_58 * (float)0.050000000000000003;
      }
      local_50 = local_5c * (float)1.57079632675;
      local_60 = local_4c * (float)0.5 * local_5c;
      iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_SUBTRACT);
      if (iVar11 != 0) {
        local_c8 = local_c8 + local_50;
      }
      iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_ADD);
      if (iVar11 != 0) {
        local_c8 = local_c8 - local_50;
      }
      iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD0);
      if (iVar11 != 0) {
        local_c4 = (CKeys *)((float)local_c4 + local_50);
      }
      in_stack_fffffdbc = g_CKeysPtr;
      iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_DECIMAL);
      if (iVar11 != 0) {
        local_c4 = (CKeys *)((float)local_c4 - local_50);
      }
      in_stack_fffffdc0 = 8.106091e-39;
      in_stack_fffffdc4 = g_CKeysPtr;
      iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_EQUALS);
      if (iVar11 != 0) {
        local_4c = local_4c - local_60;
      }
      in_stack_fffffdcc = g_CKeysPtr;
      iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_MINUS);
      if (iVar11 != 0) {
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
      iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
      if (iVar11 == 0) {
        core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)&stack0xfffffdd8);
        fVar37 = 8.106946e-39;
        core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                  (&local_3c->rotation_matrix,&local_17c);
        pSVar10 = local_3c;
        this_ptr_00 = (CSlew *)&stack0xfffffdd8;
        fVar38 = 8.107024e-39;
        core_slew_cpp_CSlew_processInput_FUN_005a20b0(this_ptr_00);
        if ((SVDBox *)&stack0xfffffdd8 != pSVar10) {
          (pSVar10->position).x = fVar37;
          (pSVar10->position).y = fVar38;
          (pSVar10->position).z = (float)this_ptr_00;
        }
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  (&local_3c->rotation_matrix,(CVector3f *)&stack0xfffffde4);
      }
      else {
        local_48 = g_CGamePtr->delta_time_float * (float)4;
        iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
        if (iVar11 != 0) {
          local_48 = local_48 * (float)0.10000000000000001;
        }
        iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD4);
        if (iVar11 != 0) {
          (local_3c->extents).x = (local_3c->extents).x - local_48;
        }
        iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD6);
        if (iVar11 != 0) {
          (local_3c->extents).x = (local_3c->extents).x + local_48;
        }
        iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_A);
        if (iVar11 != 0) {
          (local_3c->extents).y = (local_3c->extents).y - local_48;
        }
        iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_Q);
        if (iVar11 != 0) {
          (local_3c->extents).y = (local_3c->extents).y + local_48;
        }
        iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD2);
        if (iVar11 != 0) {
          (local_3c->extents).z = (local_3c->extents).z - local_48;
        }
        iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD8);
        if (iVar11 != 0) {
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
    iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_TAB);
    if (iVar11 != 0) {
      iVar11 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
      if (iVar11 == 0) {
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
    iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_I);
    if (iVar11 != 0) {
      iVar11 = this_ptr->vdir_box_count;
      if (iVar11 < 0xfa) {
        pSVar10 = local_40 + iVar11;
        if (pSVar10 != (SVDBox *)&stack0xfffffdbc) {
          (pSVar10->position).x = (float)in_stack_fffffdbc;
          (pSVar10->position).y = in_stack_fffffdc0;
          (pSVar10->position).z = (float)in_stack_fffffdc4;
        }
        local_bc.z = 0.0;
        local_bc.x = 0.0;
        local_bc.y = (float)in_stack_fffffdcc;
        local_18 = iVar11;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  (&pSVar10->rotation_matrix,&local_bc);
        (pSVar10->extents).x = 10.0;
        (pSVar10->extents).y = 10.0;
        (pSVar10->extents).z = 10.0;
        this_ptr->vdir_box_count = this_ptr->vdir_box_count + 1;
      }
      else {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Max number of boxes has been reached, can't add any more boxes.");
      }
    }
    iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_R);
    if (iVar11 != 0) {
      iVar11 = this_ptr->vdir_box_count;
      if (iVar11 < 0xfa) {
        if ((-1 < local_18) && (local_18 < iVar11)) {
          pSVar10 = local_40 + iVar11;
          pSVar14 = local_40 + local_18;
          if (pSVar10 != pSVar14) {
            (pSVar10->position).x = (pSVar14->position).x;
            (pSVar10->position).y = (pSVar14->position).y;
            (pSVar10->position).z = (pSVar14->position).z;
          }
          if (&pSVar10->extents != &pSVar14->extents) {
            (pSVar10->extents).x = (pSVar14->extents).x;
            (pSVar10->extents).y = (pSVar14->extents).y;
            (pSVar10->extents).z = (pSVar14->extents).z;
          }
          (pSVar10->rotation_matrix).m[0].x = (pSVar14->rotation_matrix).m[0].x;
          (pSVar10->rotation_matrix).m[0].y = (pSVar14->rotation_matrix).m[0].y;
          (pSVar10->rotation_matrix).m[0].z = (pSVar14->rotation_matrix).m[0].z;
          (pSVar10->rotation_matrix).m[1].x = (pSVar14->rotation_matrix).m[1].x;
          (pSVar10->rotation_matrix).m[1].y = (pSVar14->rotation_matrix).m[1].y;
          (pSVar10->rotation_matrix).m[1].z = (pSVar14->rotation_matrix).m[1].z;
          (pSVar10->rotation_matrix).m[2].x = (pSVar14->rotation_matrix).m[2].x;
          (pSVar10->rotation_matrix).m[2].y = (pSVar14->rotation_matrix).m[2].y;
          (pSVar10->rotation_matrix).m[2].z = (pSVar14->rotation_matrix).m[2].z;
          pSVar10->dead = pSVar14->dead;
          pSVar10->parent_index = pSVar14->parent_index;
          local_18 = this_ptr->vdir_box_count;
          pSVar10 = local_40 + local_18;
          this_ptr->vdir_box_count = local_18 + 1;
          local_1ac.x = 0.5;
          local_1ac.y = 0.5;
          local_1ac.z = 0.5;
          pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (&pSVar10->rotation_matrix,&local_ec,&local_1ac);
          (pSVar10->position).x = pCVar4->x + (pSVar10->position).x;
          (pSVar10->position).y = pCVar4->y + (pSVar10->position).y;
          (pSVar10->position).z = pCVar4->z + (pSVar10->position).z;
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
    iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_D);
    if (((iVar11 != 0) && (-1 < local_18)) &&
       ((local_18 < this_ptr->vdir_box_count &&
        (iVar5 = shape_edittool_cpp_CEditorTools_showYesNoDialog1_FUN_0049f060
                           (g_CEditorToolsPtr,"Delete the selected box?"), iVar11 = local_18
        , iVar5 != 0)))) {
      iVar5 = this_ptr->vdir_box_count + -1;
      this_ptr->vdir_box_count = iVar5;
      memmove
                (local_40 + local_18,local_40 + local_18 + 1,(iVar5 - local_18) * 0x44);
      if (this_ptr->vdir_box_count <= iVar11) {
        local_18 = 0;
      }
    }
    iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_N);
    if (iVar11 != 0) {
      local_18 = -1;
    }
    iVar11 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F1);
    if (iVar11 != 0) {
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
      local_188 = g_CDemonCameraInstance.base.position.f.x;
      local_184 = *local_6c;
      local_180 = *local_70;
      core_dcamera_cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480
                (&g_CDemonCameraInstance,&local_d4,g_MouseX,g_MouseY);
      iVar11 = 0;
      local_38 = 1e+30;
      if (0 < this_ptr->vdir_box_count) {
        local_1c = &local_40->rotation_matrix;
        pCVar4 = &local_40->extents;
        do {
          core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                    (local_1c,(CVector3f *)(local_180 - local_40[iVar11].position.z),
                     (CVector3f *)&stack0xfffffe0c);
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
            local_18 = iVar11;
          }
          pCVar4 = (CVector3f *)((int)(pCVar4 + 5) + 8);
          iVar11 = iVar11 + 1;
          local_1c = (CMatrix3x3f *)((int)(local_1c + 1) + 0x20);
          local_14 = local_24;
        } while (iVar11 < this_ptr->vdir_box_count);
      }
    }
  } while( true );
}
