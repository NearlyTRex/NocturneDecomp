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
  uchar uVar4;
  CVector3f *pCVar5;
  undefined3 extraout_var;
  int iVar6;
  int iVar7;
  SVDBox *pSVar8;
  BADSPACEBASE *in_ESP;
  int iVar9;
  SRenderVertex *pSVar10;
  SRenderVertex *pSVar11;
  SVDBox *pSVar12;
  int *piVar13;
  byte bVar14;
  SRenderVertex *in_stack_fffffd02;
  SRenderVertex *in_stack_fffffd06;
  SRenderVertex *in_stack_fffffd0a;
  SRenderVertex *in_stack_fffffd0e;
  SRenderVertex *in_stack_fffffd12;
  char *format;
  SRenderVertex *in_stack_fffffd16;
  SRenderVertex *in_stack_fffffd1a;
  SRenderVertex *in_stack_fffffd1e;
  SRenderVertex *in_stack_fffffd22;
  SRenderVertex *in_stack_fffffd26;
  SRenderVertex *pSVar15;
  SRenderVertex *vertex2;
  CDemonSet *pCVar16;
  CGame *in_stack_fffffd66;
  ushort uVar17;
  ushort uVar18;
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
  CDemonSet *local_2c;
  int local_28;
  float local_24;
  CVector3f *local_20;
  CMatrix3x3f *local_1c;
  int local_18;
  float local_14;
  
  bVar14 = 0;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Preparing set.");
  core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
  this_ptr->actor_list_ptr = (void *)0x0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)local_244);
  local_c8 = 0.0;
  local_c4 = 0.0;
  local_c0 = 0.0;
  local_4c = 40.0;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_fffffd66);
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
    iVar9 = local_18;
    local_68 = g_MouseButtonFlags;
    core_setdir_cpp_CDemonSet_FUN_00576710(this_ptr);
    local_3c = (SVDBox *)0x0;
    if ((-1 < iVar9) && (iVar9 < this_ptr->vdir_box_count)) {
      local_3c = local_40 + iVar9;
    }
    wincore_winrun_cpp_doNothing_FUN_005f2f80();
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    pSVar8 = local_3c;
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    if (pSVar8 != (SVDBox *)0x0) {
      if ((float *)(local_244 + 0xc) != &local_c8) {
        local_244._12_4_ = local_c8;
        local_234 = local_c4;
        local_230 = local_c0;
      }
      pCVar5 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                         (&local_3c->rotation_matrix,&local_1dc);
      local_234 = local_234 + pCVar5->y;
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                ((CMatrix3x3f *)&stack0xfffffd94,(CVector3f *)(local_244 + 0xc));
      local_1d0.z = -local_4c;
      local_1d0.x = 0.0;
      local_1d0.y = 0.0;
      local_14 = local_1d0.z;
      pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         ((CMatrix3x3f *)&stack0xfffffd94,&local_134,&local_1d0);
      local_1c4 = pCVar5->x + (local_3c->position).x;
      local_1c0 = pCVar5->y + (local_3c->position).y;
      local_1bc = pCVar5->z + (local_3c->position).z;
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
    iVar9 = local_18;
    local_28 = -1;
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
    if ((-1 < iVar9) && (iVar9 < this_ptr->vdir_box_count)) {
      do {
        local_28 = iVar9;
        iVar9 = *(int *)(this_ptr->vdir_boxes[local_28].field3_0x3c + 4);
      } while (-1 < iVar9);
    }
    iVar9 = 0;
    if (0 < this_ptr->vdir_box_count) {
      local_34 = &local_44->rotation_matrix;
      do {
        pCVar5 = &local_44[iVar9].position;
        core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(local_34,&local_194);
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr,pCVar5);
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr,(CVector3i *)&local_194,(CVector3i *)0x0);
        iVar6 = iVar9;
        if (iVar9 == local_18) {
          pCVar1 = pCVar5 + 1;
          local_158 = -pCVar1->x;
          local_154 = -pCVar5[1].y;
          local_150 = -pCVar5[1].z;
          core_setedit_cpp_FUN_005817d0(&local_158);
          uVar4 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                            (g_CEditorToolsPtr);
          uVar17 = (ushort)CONCAT31 /* combine 2-byte values */(extraout_var,uVar4);
          uVar18 = (ushort)((uint3)extraout_var >> 8);
          shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
                    (g_CEditorToolsPtr,2.0,CONCAT22 /* combine 2-byte values */(uVar18,uVar17));
          local_128.x = -pCVar1->x;
          local_128.y = -pCVar5[1].y;
          local_128.z = -pCVar5[1].z;
          shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
                    (g_CEditorToolsPtr,&local_128,pCVar1,CONCAT22 /* combine 2-byte values */(uVar18,uVar17));
        }
        else {
          do {
            iVar7 = iVar6;
            iVar6 = *(int *)(this_ptr->vdir_boxes[iVar7].field3_0x3c + 4);
          } while (-1 < iVar6);
          pCVar1 = pCVar5 + 1;
          if (iVar7 == local_28) {
            local_f8 = -pCVar1->x;
            local_f4 = -pCVar5[1].y;
            local_f0 = -pCVar5[1].z;
            core_setedit_cpp_FUN_005817d0(&local_f8);
            local_8c.x = -pCVar1->x;
            local_8c.y = -pCVar5[1].y;
            local_8c.z = -pCVar5[1].z;
            shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
                      (g_CEditorToolsPtr,&local_8c,pCVar1,2);
          }
          else {
            local_140 = -pCVar1->x;
            local_13c = -pCVar5[1].y;
            local_138 = -pCVar5[1].z;
            core_setedit_cpp_FUN_005817d0(&local_140);
          }
        }
        pCVar3 = local_34;
        iVar9 = iVar9 + 1;
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
        local_34 = (CMatrix3x3f *)((int)(pCVar3 + 1) + 0x20);
      } while (iVar9 < this_ptr->vdir_box_count);
    }
    local_30 = 0;
    if (0 < this_ptr->camera_count) {
      local_2c = (CDemonSet *)&local_64->orientation;
      local_20 = &local_64->position;
      do {
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr,local_20);
        iVar9 = 4;
        bVar2 = true;
        pSVar15 = (SRenderVertex *)0x5836a9;
        vertex2 = (SRenderVertex *)g_CDemonRendererPtr;
        pCVar16 = local_2c;
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr,(CVector3i *)local_2c,(CVector3i *)0x0);
        if ((-1 < local_18) && (local_18 < this_ptr->vdir_box_count)) {
          vertex2 = (SRenderVertex *)0x5836cb;
          pCVar16 = this_ptr;
          iVar6 = core_setdir_cpp_CDemonSet_FUN_00576340(this_ptr);
          if (iVar6 != 0) {
            iVar9 = 0xfb;
            bVar2 = false;
          }
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
                    (g_CDemonRendererPtr,iVar9);
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
          pSVar11 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar10 = pSVar11 + 1;
          piVar13 = (int *)&stack0xfffffd32;
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar13 = (pSVar10->projected_vertex).transformed_x;
            pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar14 * -2 + 1) * 4);
            piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
          }
          piVar13 = (int *)&stack0xfffffd02;
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar13 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar14 * -2 + 1) * 4);
            piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
          }
          g_ActiveRenderColor = iVar9;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd02,in_stack_fffffd06);
          pSVar11 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar10 = pSVar11 + 2;
          piVar13 = (int *)&stack0xfffffd36;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar13 = (pSVar10->projected_vertex).transformed_x;
            pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar14 * -2 + 1) * 4);
            piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
          }
          pSVar11 = pSVar11 + 1;
          piVar13 = (int *)&stack0xfffffd06;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar13 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar14 * -2 + 1) * 4);
            piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
          }
          in_stack_fffffd02 = (SRenderVertex *)0x5841b6;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd06,in_stack_fffffd0a);
          pSVar11 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar10 = pSVar11 + 3;
          piVar13 = (int *)&stack0xfffffd3a;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar13 = (pSVar10->projected_vertex).transformed_x;
            pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar14 * -2 + 1) * 4);
            piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
          }
          pSVar11 = pSVar11 + 2;
          piVar13 = (int *)&stack0xfffffd0a;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar13 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar14 * -2 + 1) * 4);
            piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
          }
          in_stack_fffffd06 = (SRenderVertex *)0x5841e6;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd0a,in_stack_fffffd0e);
          pSVar11 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar10 = pSVar11;
          piVar13 = (int *)&stack0xfffffd3e;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar13 = (pSVar10->projected_vertex).transformed_x;
            pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar14 * -2 + 1) * 4);
            piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
          }
          pSVar11 = pSVar11 + 3;
          piVar13 = (int *)&stack0xfffffd0e;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar13 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar14 * -2 + 1) * 4);
            piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
          }
          in_stack_fffffd0a = (SRenderVertex *)0x584215;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd0e,in_stack_fffffd12);
          pSVar11 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar10 = pSVar11 + 5;
          piVar13 = (int *)&stack0xfffffd42;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar13 = (pSVar10->projected_vertex).transformed_x;
            pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar14 * -2 + 1) * 4);
            piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
          }
          pSVar11 = pSVar11 + 4;
          piVar13 = (int *)&stack0xfffffd12;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar13 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar14 * -2 + 1) * 4);
            piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
          }
          in_stack_fffffd0e = (SRenderVertex *)0x584248;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd12,in_stack_fffffd16);
          pSVar11 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar10 = pSVar11 + 6;
          piVar13 = (int *)&stack0xfffffd46;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar13 = (pSVar10->projected_vertex).transformed_x;
            pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar14 * -2 + 1) * 4);
            piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
          }
          pSVar11 = pSVar11 + 5;
          piVar13 = (int *)&stack0xfffffd16;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar13 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar14 * -2 + 1) * 4);
            piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
          }
          in_stack_fffffd12 = (SRenderVertex *)0x58427b;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd16,in_stack_fffffd1a);
          pSVar11 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar10 = pSVar11 + 7;
          piVar13 = (int *)&stack0xfffffd4a;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar13 = (pSVar10->projected_vertex).transformed_x;
            pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar14 * -2 + 1) * 4);
            piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
          }
          pSVar11 = pSVar11 + 6;
          piVar13 = (int *)&stack0xfffffd1a;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar13 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar14 * -2 + 1) * 4);
            piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
          }
          in_stack_fffffd16 = (SRenderVertex *)0x5842ae;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd1a,in_stack_fffffd1e);
          pSVar11 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar10 = pSVar11 + 4;
          piVar13 = (int *)&stack0xfffffd4e;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar13 = (pSVar10->projected_vertex).transformed_x;
            pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar14 * -2 + 1) * 4);
            piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
          }
          pSVar11 = pSVar11 + 7;
          piVar13 = (int *)&stack0xfffffd1e;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar13 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar14 * -2 + 1) * 4);
            piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
          }
          in_stack_fffffd1a = (SRenderVertex *)0x5842e1;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd1e,in_stack_fffffd22);
          pSVar11 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar10 = pSVar11 + 4;
          piVar13 = (int *)&stack0xfffffd52;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar13 = (pSVar10->projected_vertex).transformed_x;
            pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar14 * -2 + 1) * 4);
            piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
          }
          piVar13 = (int *)&stack0xfffffd22;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar13 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar14 * -2 + 1) * 4);
            piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
          }
          in_stack_fffffd1e = (SRenderVertex *)0x584310;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd22,in_stack_fffffd26);
          pSVar11 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar10 = pSVar11 + 5;
          piVar13 = (int *)&stack0xfffffd56;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar13 = (pSVar10->projected_vertex).transformed_x;
            pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar14 * -2 + 1) * 4);
            piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
          }
          pSVar11 = pSVar11 + 1;
          piVar13 = (int *)&stack0xfffffd26;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar13 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar14 * -2 + 1) * 4);
            piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
          }
          in_stack_fffffd22 = (SRenderVertex *)0x584340;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd26,pSVar15);
          pSVar11 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar10 = pSVar11 + 6;
          piVar13 = (int *)&stack0xfffffd5a;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar13 = (pSVar10->projected_vertex).transformed_x;
            pSVar10 = (SRenderVertex *)((int)pSVar10 + ((uint)bVar14 * -2 + 1) * 4);
            piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
          }
          pSVar11 = pSVar11 + 2;
          piVar13 = (int *)&stack0xfffffd2a;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar13 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar14 * -2 + 1) * 4);
            piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
          }
          in_stack_fffffd26 = (SRenderVertex *)0x584370;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar15,vertex2);
          pSVar15 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar11 = pSVar15 + 7;
          piVar13 = (int *)&stack0xfffffd5e;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar13 = (pSVar11->projected_vertex).transformed_x;
            pSVar11 = (SRenderVertex *)((int)pSVar11 + ((uint)bVar14 * -2 + 1) * 4);
            piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
          }
          pSVar15 = pSVar15 + 3;
          piVar13 = (int *)&stack0xfffffd2e;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *piVar13 = (pSVar15->projected_vertex).transformed_x;
            pSVar15 = (SRenderVertex *)((int)pSVar15 + ((uint)bVar14 * -2 + 1) * 4);
            piVar13 = piVar13 + (uint)bVar14 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex2,(SRenderVertex *)pCVar16);
        }
        pCVar5 = local_20;
        pCVar16 = local_2c;
        iVar9 = local_30;
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
        local_2c = (CDemonSet *)&pCVar16->cameras[0].field17_0x1a0;
        local_20 = pCVar5 + 0x23;
        local_30 = iVar9 + 1;
      } while (local_30 < this_ptr->camera_count);
    }
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,false);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    iVar9 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if (iVar9 != 0) {
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
      iVar9 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
      if (iVar9 == 0) {
        iVar9 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
        if (iVar9 != 0) {
          local_5c = local_58 * (float)10;
        }
      }
      else {
        local_5c = local_58 * (float)0.050000000000000003;
      }
      local_50 = local_5c * (float)1.57079632675;
      local_60 = local_4c * (float)0.5 * local_5c;
      iVar9 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4a);
      if (iVar9 != 0) {
        local_c8 = local_c8 + local_50;
      }
      iVar9 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4e);
      if (iVar9 != 0) {
        local_c8 = local_c8 - local_50;
      }
      iVar9 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x52);
      if (iVar9 != 0) {
        local_c4 = local_c4 + local_50;
      }
      iVar9 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x53);
      if (iVar9 != 0) {
        local_c4 = local_c4 - local_50;
      }
      iVar9 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xd);
      if (iVar9 != 0) {
        local_4c = local_4c - local_60;
      }
      iVar9 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xc);
      if (iVar9 != 0) {
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
      iVar9 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
      pSVar8 = local_3c;
      if (iVar9 == 0) {
        core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)local_228);
        if ((SVDBox *)local_228 != pSVar8) {
          local_228._0_4_ = (pSVar8->position).x;
          local_228._4_4_ = (pSVar8->position).y;
          local_228._8_4_ = (pSVar8->position).z;
        }
        in_stack_fffffd1a = (SRenderVertex *)&local_3c->rotation_matrix;
        pCVar5 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                           ((CMatrix3x3f *)in_stack_fffffd1a,&local_17c);
        pSVar8 = local_3c;
        if ((CVector3f *)(local_228 + 0xc) != pCVar5) {
          local_228._12_4_ = pCVar5->x;
          local_218 = pCVar5->y;
          local_214 = pCVar5->z;
        }
        core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)local_228);
        if ((SVDBox *)local_228 != pSVar8) {
          (pSVar8->position).x = (float)local_228._0_4_;
          (pSVar8->position).y = (float)local_228._4_4_;
          (pSVar8->position).z = (float)local_228._8_4_;
        }
        in_stack_fffffd1e = (SRenderVertex *)0x584750;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  (&local_3c->rotation_matrix,(CVector3f *)(local_228 + 0xc));
      }
      else {
        local_48 = g_CGamePtr->delta_time_float * (float)4;
        iVar9 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
        if (iVar9 != 0) {
          local_48 = local_48 * (float)0.10000000000000001;
        }
        iVar9 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
        if (iVar9 != 0) {
          (local_3c->extents).x = (local_3c->extents).x - local_48;
        }
        iVar9 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
        if (iVar9 != 0) {
          (local_3c->extents).x = (local_3c->extents).x + local_48;
        }
        iVar9 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
        if (iVar9 != 0) {
          (local_3c->extents).y = (local_3c->extents).y - local_48;
        }
        iVar9 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
        if (iVar9 != 0) {
          (local_3c->extents).y = (local_3c->extents).y + local_48;
        }
        iVar9 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
        if (iVar9 != 0) {
          (local_3c->extents).z = (local_3c->extents).z - local_48;
        }
        iVar9 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
        if (iVar9 != 0) {
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
    in_stack_fffffd22 = (SRenderVertex *)0x583b48;
    in_stack_fffffd26 = (SRenderVertex *)g_CKeysPtr;
    iVar9 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xf);
    if (iVar9 != 0) {
      iVar9 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
      if (iVar9 == 0) {
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
    iVar9 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x17);
    if (iVar9 != 0) {
      iVar9 = this_ptr->vdir_box_count;
      if (iVar9 < 0xfa) {
        pSVar8 = local_40 + iVar9;
        if (pSVar8 != (SVDBox *)local_244) {
          (pSVar8->position).x = (float)local_244._0_4_;
          (pSVar8->position).y = (float)local_244._4_4_;
          (pSVar8->position).z = (float)local_244._8_4_;
        }
        local_bc.y = local_234;
        local_bc.z = 0.0;
        local_bc.x = 0.0;
        local_18 = iVar9;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  (&pSVar8->rotation_matrix,&local_bc);
        (pSVar8->extents).x = 10.0;
        (pSVar8->extents).y = 10.0;
        (pSVar8->extents).z = 10.0;
        this_ptr->vdir_box_count = this_ptr->vdir_box_count + 1;
      }
      else {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Max number of boxes has been reached, can't add any more boxes.");
      }
    }
    iVar9 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x13);
    if (iVar9 != 0) {
      iVar9 = this_ptr->vdir_box_count;
      if (iVar9 < 0xfa) {
        if ((-1 < local_18) && (local_18 < iVar9)) {
          pSVar8 = local_40 + iVar9;
          pSVar12 = local_40 + local_18;
          if (pSVar8 != pSVar12) {
            (pSVar8->position).x = (pSVar12->position).x;
            (pSVar8->position).y = (pSVar12->position).y;
            (pSVar8->position).z = (pSVar12->position).z;
          }
          if (&pSVar8->extents != &pSVar12->extents) {
            (pSVar8->extents).x = (pSVar12->extents).x;
            (pSVar8->extents).y = (pSVar12->extents).y;
            (pSVar8->extents).z = (pSVar12->extents).z;
          }
          (pSVar8->rotation_matrix).m[0].x = (pSVar12->rotation_matrix).m[0].x;
          (pSVar8->rotation_matrix).m[0].y = (pSVar12->rotation_matrix).m[0].y;
          (pSVar8->rotation_matrix).m[0].z = (pSVar12->rotation_matrix).m[0].z;
          (pSVar8->rotation_matrix).m[1].x = (pSVar12->rotation_matrix).m[1].x;
          (pSVar8->rotation_matrix).m[1].y = (pSVar12->rotation_matrix).m[1].y;
          (pSVar8->rotation_matrix).m[1].z = (pSVar12->rotation_matrix).m[1].z;
          (pSVar8->rotation_matrix).m[2].x = (pSVar12->rotation_matrix).m[2].x;
          (pSVar8->rotation_matrix).m[2].y = (pSVar12->rotation_matrix).m[2].y;
          (pSVar8->rotation_matrix).m[2].z = (pSVar12->rotation_matrix).m[2].z;
          *(uint *)pSVar8->field3_0x3c = *(uint *)pSVar12->field3_0x3c;
          *(uint *)(pSVar8->field3_0x3c + 4) = *(uint *)(pSVar12->field3_0x3c + 4);
          local_18 = this_ptr->vdir_box_count;
          pSVar8 = local_40 + local_18;
          this_ptr->vdir_box_count = local_18 + 1;
          local_1ac.x = 0.5;
          local_1ac.y = 0.5;
          local_1ac.z = 0.5;
          in_stack_fffffd06 = (SRenderVertex *)0x584892;
          pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (&pSVar8->rotation_matrix,&local_ec,&local_1ac);
          (pSVar8->position).x = pCVar5->x + (pSVar8->position).x;
          (pSVar8->position).y = pCVar5->y + (pSVar8->position).y;
          (pSVar8->position).z = pCVar5->z + (pSVar8->position).z;
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
    iVar9 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x20);
    if ((((iVar9 != 0) && (-1 < local_18)) && (local_18 < this_ptr->vdir_box_count)) &&
       (iVar6 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                          (g_CEditorToolsPtr,"Delete the selected box?"), iVar9 = local_18,
       iVar6 != 0)) {
      iVar6 = this_ptr->vdir_box_count + -1;
      this_ptr->vdir_box_count = iVar6;
      in_stack_fffffd06 = (SRenderVertex *)0x583cef;
      crt_string_c_memmove_FUN_005fe5e0
                (local_40 + local_18,local_40 + local_18 + 1,(iVar6 - local_18) * 0x44);
      if (this_ptr->vdir_box_count <= iVar9) {
        local_18 = 0;
      }
    }
    in_stack_fffffd16 = (SRenderVertex *)0x31;
    iVar9 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x31);
    if (iVar9 != 0) {
      local_18 = -1;
    }
    in_stack_fffffd12 = (SRenderVertex *)0x3b;
    in_stack_fffffd0a = (SRenderVertex *)0x583d31;
    in_stack_fffffd0e = (SRenderVertex *)g_CKeysPtr;
    iVar9 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3b);
    if (iVar9 != 0) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      in_stack_fffffd0a = (SRenderVertex *)0x583d62;
      engine_2d_c_drawText_FUN_00401fd0("F1",0,0);
      in_stack_fffffd0e = (SRenderVertex *)0x583d85;
      engine_2d_c_drawText_FUN_00401fd0("Show this help screen",g_WindowWidth / 10,0);
      in_stack_fffffd12 = (SRenderVertex *)0x583da9;
      engine_2d_c_drawText_FUN_00401fd0("TAB",0,0xb);
      in_stack_fffffd16 = (SRenderVertex *)0x583dc7;
      engine_2d_c_drawText_FUN_00401fd0("Next box",g_WindowWidth / 10,0xb);
      in_stack_fffffd1a = (SRenderVertex *)0x583deb;
      engine_2d_c_drawText_FUN_00401fd0("SHIFT+TAB",0,0x16);
      in_stack_fffffd1e = (SRenderVertex *)0x583e0e;
      engine_2d_c_drawText_FUN_00401fd0("Previous box",g_WindowWidth / 10,0x16);
      in_stack_fffffd22 = (SRenderVertex *)0x583e32;
      engine_2d_c_drawText_FUN_00401fd0("I",0,0x21);
      in_stack_fffffd26 = (SRenderVertex *)0x583e50;
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
      pCVar5 = core_dcamera_cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480
                         (&g_CDemonCameraInstance,&local_d4,g_MouseX,g_MouseY);
      local_1e8.x = pCVar5->x * 1000f;
      local_1e8.y = pCVar5->y * 1000f;
      local_1e8.z = 1000f * pCVar5->z;
      iVar9 = 0;
      local_38 = 1e+30;
      if (0 < this_ptr->vdir_box_count) {
        local_1c = &local_40->rotation_matrix;
        pCVar5 = &local_40->extents;
        do {
          pSVar8 = local_40 + iVar9;
          local_1f4.x = local_188 - (pSVar8->position).x;
          local_1f4.y = local_184 - (pSVar8->position).y;
          local_1f4.z = local_180 - (pSVar8->position).z;
          core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                    (local_1c,&local_11c.max,&local_1f4);
          core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                    (local_1c,&local_98,&local_1e8);
          local_11c.min.x = -pCVar5->x;
          local_11c.min.y = -pCVar5->y;
          local_11c.min.z = -pCVar5->z;
          if (&local_20c != &local_11c) {
            local_20c.min.x = local_11c.min.x;
            local_20c.min.y = local_11c.min.y;
            local_20c.min.z = local_11c.min.z;
          }
          if (&local_20c.max != &pSVar8->extents) {
            local_20c.max.x = (pSVar8->extents).x;
            local_20c.max.y = (pSVar8->extents).y;
            local_20c.max.z = (pSVar8->extents).z;
          }
          local_24 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                               (&local_20c,&local_11c.max,&local_98,(CVector3f *)0x0);
          local_78 = (double)local_24;
          if (((0.0 <= local_78) && (local_78 < 1.0)) && (local_24 < local_38)) {
            local_38 = local_24;
            local_18 = iVar9;
          }
          pCVar5 = (CVector3f *)((int)(pCVar5 + 5) + 8);
          iVar9 = iVar9 + 1;
          local_1c = (CMatrix3x3f *)((int)(local_1c + 1) + 0x20);
          local_14 = local_24;
        } while (iVar9 < this_ptr->vdir_box_count);
      }
    }
  } while( true );
}
