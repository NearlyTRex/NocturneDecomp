// Name: core_setedit.cpp_CDemonSet_FUN_00583170
// Address: 00583170
// Address Range: [[00583170, 00583633] [00583651, 00583aac] [00583ad6, 005848f1]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_CDemonSet_FUN_00583170(CDemonSet * this_ptr)

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
  SRenderVertex *in_stack_fffffcb6;
  SRenderVertex *in_stack_fffffcba;
  int aiStack_31a [5];
  uint uStack_306;
  float *pfStack_302;
  char *format;
  CGame *n2;
  CMatrix3x3f local_26c;
  byte local_244 [16];
  float local_234;
  float local_230;
  float local_22c;
  byte local_228 [16];
  float local_218;
  float local_214;
  CBoundingBox3D local_20c;
  CVector3f local_1f4;
  CVector3f local_1e8;
  CVector3f local_1dc;
  CVector3f local_1d0;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  CVector3i local_1b8;
  CVector3f local_1ac;
  CVector3i local_1a0;
  CVector3f local_194;
  float local_188;
  float local_184;
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
  CBoundingBox3D local_11c;
  CVector3i local_104;
  float local_f8;
  float local_f4;
  float local_f0;
  CVector3f local_ec;
  CVector3i local_e0;
  CVector3f local_d4;
  float local_c8;
  float local_c4;
  float local_c0;
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
  
  bVar15 = 0;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Preparing set.");
  core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
  this_ptr->actor_list_ptr = (void *)0x0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  n2 = (CGame *)0x5831ca;
  core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)local_244);
  local_c8 = 0.0;
  local_c4 = 0.0;
  local_c0 = 0.0;
  local_4c = 40.0;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,n2);
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
      if ((float *)(local_244 + 0xc) != &local_c8) {
        local_244._12_4_ = local_c8;
        local_234 = local_c4;
        local_230 = local_c0;
      }
      pCVar6 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                         (&local_3c->rotation_matrix,&local_1dc);
      local_234 = local_234 + pCVar6->y;
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                (&local_26c,(CVector3f *)(local_244 + 0xc));
      local_1d0.z = -local_4c;
      local_1d0.x = 0.0;
      local_1d0.y = 0.0;
      local_14 = local_1d0.z;
      pCVar6 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         (&local_26c,&local_134,&local_1d0);
      local_1c4 = pCVar6->x + (local_3c->position).x;
      local_1c0 = pCVar6->y + (local_3c->position).y;
      local_1bc = pCVar6->z + (local_3c->position).z;
      if ((float *)local_244 != &local_1c4) {
        local_244._0_4_ = local_1c4;
        local_244._4_4_ = local_1c0;
        local_244._8_4_ = local_1bc;
      }
    }
    local_22c = 28.0;
    if ((int *)&stack0x00000000 != &g_CDemonCameraInstance.rect_array[7].top) {
      g_CDemonCameraInstance.base.position.x = local_244._0_4_;
      g_CDemonCameraInstance.base.position.y = local_244._4_4_;
      g_CDemonCameraInstance.base.position.z = local_244._8_4_;
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              ((CMatrix3x3f *)&g_CDemonCameraInstance.base.rotation_matrix,
               (CVector3f *)(local_244 + 0xc));
    g_CDemonCameraInstance.base.projection_scale = local_22c;
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
          pfStack_302 = &local_158;
          local_158 = -pCVar1->x;
          local_154 = -pCVar6[1].y;
          local_150 = -pCVar6[1].z;
          uStack_306 = 0x583519;
          core_setedit_cpp_FUN_005817d0(pfStack_302);
          uVar5 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                            (g_CEditorToolsPtr);
          shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
                    (g_CEditorToolsPtr,2.0,CONCAT31 /* combine 2-byte values */(extraout_var,uVar5));
          local_128.x = -pCVar1->x;
          local_128.y = -pCVar6[1].y;
          local_128.z = -pCVar6[1].z;
          shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
                    (g_CEditorToolsPtr,&local_128,pCVar1,CONCAT31 /* combine 2-byte values */(extraout_var,uVar5));
        }
        else {
          do {
            iVar8 = iVar7;
            iVar7 = *(int *)(this_ptr->vdir_boxes[iVar8].field3_0x3c + 4);
          } while (-1 < iVar7);
          pCVar1 = pCVar6 + 1;
          if (iVar8 == local_28) {
            pfStack_302 = &local_f8;
            local_f8 = -pCVar1->x;
            local_f4 = -pCVar6[1].y;
            local_f0 = -pCVar6[1].z;
            uStack_306 = 0x5835b5;
            core_setedit_cpp_FUN_005817d0(pfStack_302);
            local_8c.x = -pCVar1->x;
            local_8c.y = -pCVar6[1].y;
            local_8c.z = -pCVar6[1].z;
            shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
                      (g_CEditorToolsPtr,&local_8c,pCVar1,2);
          }
          else {
            pfStack_302 = &local_140;
            local_140 = -pCVar1->x;
            local_13c = -pCVar6[1].y;
            local_138 = -pCVar6[1].z;
            uStack_306 = 0x583621;
            core_setedit_cpp_FUN_005817d0(pfStack_302);
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
        local_e0.x = (int)ROUND(256f * -1.0);
        local_e0.y = (int)ROUND(256f * -1.0);
        local_e0.z = (int)ROUND(256f * 2.0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_e0);
        local_164 = -local_164;
        local_104.x = (int)ROUND(local_164 * 256f);
        local_104.y = (int)ROUND(local_160 * 256f);
        local_104.z = (int)ROUND(local_15c * 256f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_104);
        local_160 = -local_160;
        local_1b8.x = (int)ROUND(local_164 * 256f);
        local_1b8.y = (int)ROUND(local_160 * 256f);
        local_1b8.z = (int)ROUND(local_15c * 256f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_1b8);
        local_164 = -local_164;
        local_b0.x = (int)ROUND(local_164 * 256f);
        local_b0.y = (int)ROUND(local_160 * 256f);
        local_b0.z = (int)ROUND(local_15c * 256f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_b0);
        local_164 = -0.3;
        local_160 = -0.3;
        local_15c = 0.0;
        local_1a0.x = (int)ROUND(256f * -0.3);
        local_1a0.y = (int)ROUND(256f * -0.3);
        local_1a0.z = (int)ROUND(256f * 0.0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[4].projected_vertex,&local_1a0);
        local_164 = -local_164;
        local_170.x = (int)ROUND(local_164 * 256f);
        local_170.y = (int)ROUND(local_160 * 256f);
        local_170.z = (int)ROUND(local_15c * 256f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[5].projected_vertex,&local_170);
        local_160 = -local_160;
        local_14c.x = (int)ROUND(local_164 * 256f);
        local_14c.y = (int)ROUND(local_160 * 256f);
        local_14c.z = (int)ROUND(local_15c * 256f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[6].projected_vertex,&local_14c);
        local_164 = -local_164;
        local_a4.x = (int)ROUND(local_164 * 256f);
        local_a4.y = (int)ROUND(local_160 * 256f);
        local_a4.z = (int)ROUND(local_15c * 256f);
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
          piVar14 = aiStack_31a;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar14 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          piVar14 = (int *)&stack0xfffffcb6;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar14 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          g_ActiveRenderColor = iVar10;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffcb6,in_stack_fffffcba);
          pSVar12 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar11 = pSVar12 + 2;
          piVar14 = aiStack_31a;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          pSVar12 = pSVar12 + 1;
          piVar14 = (int *)&stack0xfffffcb6;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffcb6,in_stack_fffffcba);
          pSVar12 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar11 = pSVar12 + 3;
          piVar14 = aiStack_31a;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          pSVar12 = pSVar12 + 2;
          piVar14 = (int *)&stack0xfffffcb6;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffcb6,in_stack_fffffcba);
          pSVar12 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar11 = pSVar12;
          piVar14 = aiStack_31a;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          pSVar12 = pSVar12 + 3;
          piVar14 = (int *)&stack0xfffffcb6;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffcb6,in_stack_fffffcba);
          pSVar12 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar11 = pSVar12 + 5;
          piVar14 = aiStack_31a;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          pSVar12 = pSVar12 + 4;
          piVar14 = (int *)&stack0xfffffcb6;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffcb6,in_stack_fffffcba);
          pSVar12 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar11 = pSVar12 + 6;
          piVar14 = aiStack_31a;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          pSVar12 = pSVar12 + 5;
          piVar14 = (int *)&stack0xfffffcb6;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffcb6,in_stack_fffffcba);
          pSVar12 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar11 = pSVar12 + 7;
          piVar14 = aiStack_31a;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          pSVar12 = pSVar12 + 6;
          piVar14 = (int *)&stack0xfffffcb6;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffcb6,in_stack_fffffcba);
          pSVar12 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar11 = pSVar12 + 4;
          piVar14 = aiStack_31a;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          pSVar12 = pSVar12 + 7;
          piVar14 = (int *)&stack0xfffffcb6;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffcb6,in_stack_fffffcba);
          pSVar12 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar11 = pSVar12 + 4;
          piVar14 = aiStack_31a;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          piVar14 = (int *)&stack0xfffffcb6;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffcb6,in_stack_fffffcba);
          pSVar12 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar11 = pSVar12 + 5;
          piVar14 = aiStack_31a;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          pSVar12 = pSVar12 + 1;
          piVar14 = (int *)&stack0xfffffcb6;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffcb6,in_stack_fffffcba);
          pSVar12 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar11 = pSVar12 + 6;
          piVar14 = aiStack_31a;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          pSVar12 = pSVar12 + 2;
          piVar14 = (int *)&stack0xfffffcb6;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffcb6,in_stack_fffffcba);
          pSVar12 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar11 = pSVar12 + 7;
          piVar14 = aiStack_31a;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          pSVar12 = pSVar12 + 3;
          piVar14 = (int *)&stack0xfffffcb6;
          for (iVar10 = 0xc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *piVar14 = (pSVar12->projected_vertex).transformed_x;
            pSVar12 = (SRenderVertex *)((int)pSVar12 + ((uint)bVar15 * -2 + 1) * 4);
            piVar14 = piVar14 + (uint)bVar15 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffcb6,in_stack_fffffcba);
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
    iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if (iVar10 != 0) {
      core_set_cpp_CDemonSet_FUN_0056d2d0(this_ptr);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      this_ptr->unk_lighting_param3 = 0;
      this_ptr->unk_lighting_param4 = 0;
      this_ptr->unk_lighting_param1 = 0;
      return;
    }
    if (local_3c == (SVDBox *)0x0) {
      core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)local_244);
    }
    else {
      local_5c = g_CGamePtr->delta_time_float;
      local_58 = local_5c;
      iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
      if (iVar10 == 0) {
        iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
        if (iVar10 != 0) {
          local_5c = local_58 * (float)10;
        }
      }
      else {
        local_5c = local_58 * (float)0.050000000000000003;
      }
      local_50 = local_5c * (float)1.57079632675;
      local_60 = local_4c * (float)0.5 * local_5c;
      iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4a);
      if (iVar10 != 0) {
        local_c8 = local_c8 + local_50;
      }
      iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4e);
      if (iVar10 != 0) {
        local_c8 = local_c8 - local_50;
      }
      iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x52);
      if (iVar10 != 0) {
        local_c4 = local_c4 + local_50;
      }
      iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x53);
      if (iVar10 != 0) {
        local_c4 = local_c4 - local_50;
      }
      iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xd);
      if (iVar10 != 0) {
        local_4c = local_4c - local_60;
      }
      iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xc);
      if (iVar10 != 0) {
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
      iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
      pSVar9 = local_3c;
      if (iVar10 == 0) {
        core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)local_228);
        if ((SVDBox *)local_228 != pSVar9) {
          local_228._0_4_ = (pSVar9->position).x;
          local_228._4_4_ = (pSVar9->position).y;
          local_228._8_4_ = (pSVar9->position).z;
        }
        pCVar6 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                           (&local_3c->rotation_matrix,&local_17c);
        pSVar9 = local_3c;
        if ((CVector3f *)(local_228 + 0xc) != pCVar6) {
          local_228._12_4_ = pCVar6->x;
          local_218 = pCVar6->y;
          local_214 = pCVar6->z;
        }
        core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)local_228);
        if ((SVDBox *)local_228 != pSVar9) {
          (pSVar9->position).x = (float)local_228._0_4_;
          (pSVar9->position).y = (float)local_228._4_4_;
          (pSVar9->position).z = (float)local_228._8_4_;
        }
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  (&local_3c->rotation_matrix,(CVector3f *)(local_228 + 0xc));
      }
      else {
        local_48 = g_CGamePtr->delta_time_float * (float)4;
        iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
        if (iVar10 != 0) {
          local_48 = local_48 * (float)0.10000000000000001;
        }
        iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
        if (iVar10 != 0) {
          (local_3c->extents).x = (local_3c->extents).x - local_48;
        }
        iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
        if (iVar10 != 0) {
          (local_3c->extents).x = (local_3c->extents).x + local_48;
        }
        iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
        if (iVar10 != 0) {
          (local_3c->extents).y = (local_3c->extents).y - local_48;
        }
        iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
        if (iVar10 != 0) {
          (local_3c->extents).y = (local_3c->extents).y + local_48;
        }
        iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
        if (iVar10 != 0) {
          (local_3c->extents).z = (local_3c->extents).z - local_48;
        }
        iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
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
    iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xf);
    if (iVar10 != 0) {
      iVar10 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
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
    iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x17);
    if (iVar10 != 0) {
      iVar10 = this_ptr->vdir_box_count;
      if (iVar10 < 0xfa) {
        pSVar9 = local_40 + iVar10;
        if (pSVar9 != (SVDBox *)local_244) {
          (pSVar9->position).x = (float)local_244._0_4_;
          (pSVar9->position).y = (float)local_244._4_4_;
          (pSVar9->position).z = (float)local_244._8_4_;
        }
        local_bc.y = local_234;
        local_bc.z = 0.0;
        local_bc.x = 0.0;
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
    iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x13);
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
          *(uint *)pSVar9->field3_0x3c = *(uint *)pSVar13->field3_0x3c;
          *(uint *)(pSVar9->field3_0x3c + 4) = *(uint *)(pSVar13->field3_0x3c + 4);
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
    iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x20);
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
    iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x31);
    if (iVar10 != 0) {
      local_18 = -1;
    }
    iVar10 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3b);
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
      local_188 = (float)g_CDemonCameraInstance.base.position.x;
      local_184 = (float)*local_6c;
      local_180 = (float)*local_70;
      pfStack_302 = (float *)0x583fab;
      pCVar6 = core_dcamera_cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480
                         (&g_CDemonCameraInstance,&local_d4,g_MouseX,g_MouseY);
      local_1e8.x = pCVar6->x * 1000f;
      local_1e8.y = pCVar6->y * 1000f;
      local_1e8.z = 1000f * pCVar6->z;
      iVar10 = 0;
      local_38 = 1e+30;
      if (0 < this_ptr->vdir_box_count) {
        local_1c = &local_40->rotation_matrix;
        pCVar6 = &local_40->extents;
        do {
          pSVar9 = local_40 + iVar10;
          local_1f4.x = local_188 - (pSVar9->position).x;
          local_1f4.y = local_184 - (pSVar9->position).y;
          local_1f4.z = local_180 - (pSVar9->position).z;
          core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                    (local_1c,&local_11c.max,&local_1f4);
          core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                    (local_1c,&local_98,&local_1e8);
          local_11c.min.x = -pCVar6->x;
          local_11c.min.y = -pCVar6->y;
          local_11c.min.z = -pCVar6->z;
          if (&local_20c != &local_11c) {
            local_20c.min.x = local_11c.min.x;
            local_20c.min.y = local_11c.min.y;
            local_20c.min.z = local_11c.min.z;
          }
          if (&local_20c.max != &pSVar9->extents) {
            local_20c.max.x = (pSVar9->extents).x;
            local_20c.max.y = (pSVar9->extents).y;
            local_20c.max.z = (pSVar9->extents).z;
          }
          local_24 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                               (&local_20c,&local_11c.max,&local_98,(CVector3f *)0x0);
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
