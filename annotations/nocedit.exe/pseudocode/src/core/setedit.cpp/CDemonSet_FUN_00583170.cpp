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
  uchar uVar2;
  CVector3f *pCVar3;
  undefined3 extraout_var;
  int iVar4;
  SVDBox *pSVar5;
  BADSPACEBASE *in_ESP;
  float fVar6;
  int iVar7;
  SRenderVertex *pSVar8;
  SRenderVertex *pSVar9;
  SVDBox *pSVar10;
  int *piVar11;
  byte bVar12;
  SRenderVertex *in_stack_fffffd4c;
  SRenderVertex *in_stack_fffffd50;
  SRenderVertex *in_stack_fffffd54;
  SRenderVertex *in_stack_fffffd58;
  SRenderVertex *in_stack_fffffd5c;
  SRenderVertex *in_stack_fffffd60;
  SRenderVertex *in_stack_fffffd64;
  SRenderVertex *in_stack_fffffd68;
  SRenderVertex *in_stack_fffffd6c;
  SRenderVertex *in_stack_fffffd70;
  SRenderVertex *pSVar13;
  SRenderVertex *vertex2;
  CDemonSet *vertex2_00;
  CGame *in_stack_fffffdb0;
  float fVar14;
  CMatrix3x3f *in_stack_fffffdc0;
  CVector3f *in_stack_fffffdc4;
  CDemonSet *corner1;
  CEditorTools *pCVar15;
  float local_21c;
  float local_20c;
  float local_208;
  float local_1f4;
  CVector3f local_1e8;
  float local_1d0;
  float local_1cc;
  int local_1b8;
  float fStack_190;
  float local_17c;
  float fVar16;
  float local_158;
  float local_154;
  float local_128;
  float local_11c;
  float local_118;
  float local_114;
  int local_104;
  int local_100;
  float local_ec;
  char *format;
  float fStack_d0;
  CVector3f local_bc;
  int local_a4;
  int local_a0;
  uint uVar17;
  C3DSCamera *pCVar18;
  float fVar19;
  float fVar20;
  CKeys *pCVar21;
  float local_48;
  SVDBox *local_3c;
  float local_38;
  CMatrix3x3f *local_34;
  int local_30;
  CDemonSet *local_2c;
  float local_28;
  CVector3f *local_20;
  CMatrix3x3f *local_1c;
  float local_18;
  
  bVar12 = 0;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Preparing set.");
  core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
  this_ptr->actor_list_ptr = (void *)0x0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)&stack0xfffffdbc);
  pCVar21 = (CKeys *)0x42200000;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_fffffdb0);
  this_ptr->unk_lighting_param3 = 1;
  this_ptr->unk_lighting_param4 = 1;
  this_ptr->unk_lighting_param1 = 1;
  pCVar18 = this_ptr->cameras;
  local_18 = 0.0;
  do {
    uVar17 = g_MouseButtonFlags;
    core_setdir_cpp_CDemonSet_FUN_00576710(this_ptr);
    local_3c = (SVDBox *)0x0;
    if ((-1 < (int)local_18) && ((int)local_18 < this_ptr->vdir_box_count)) {
      local_3c = this_ptr->vdir_boxes + (int)local_18;
    }
    wincore_winrun_cpp_doNothing_FUN_005f2f80();
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    fVar14 = 8.099656e-39;
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    if (local_3c != (SVDBox *)0x0) {
      core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                (&local_3c->rotation_matrix,(CVector3f *)&stack0xfffffe24);
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                ((CMatrix3x3f *)&stack0xfffffd94,(CVector3f *)&stack0xfffffdc8);
      in_stack_fffffdc4 = (CVector3f *)&stack0xfffffecc;
      in_stack_fffffdc0 = (CMatrix3x3f *)&stack0xfffffd94;
      local_1d0 = 0.0;
      local_1cc = 0.0;
      fVar14 = 8.099886e-39;
      pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         (in_stack_fffffdc0,in_stack_fffffdc4,(CVector3f *)&local_1d0);
      if (&stack0xfffffdbc != &stack0xfffffe3c) {
        fVar14 = pCVar3->x + (local_3c->position).x;
        in_stack_fffffdc0 = (CMatrix3x3f *)(pCVar3->y + (local_3c->position).y);
        in_stack_fffffdc4 = (CVector3f *)(pCVar3->z + (local_3c->position).z);
      }
    }
    if ((int *)&stack0x00000000 != &g_CDemonCameraInstance.rect_array[7].top) {
      g_CDemonCameraInstance.base.position.x = (int)fVar14;
      g_CDemonCameraInstance.base.position.y = (int)in_stack_fffffdc0;
      g_CDemonCameraInstance.base.position.z = (int)in_stack_fffffdc4;
    }
    in_stack_fffffdc4 = (CVector3f *)0x5833d6;
    fVar6 = 28.0;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              ((CMatrix3x3f *)&g_CDemonCameraInstance.base.rotation_matrix,
               (CVector3f *)&stack0xfffffdc8);
    g_CDemonCameraInstance.base.projection_scale = fVar6;
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
    corner1 = this_ptr;
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(this_ptr,150.0,0);
    local_28 = -NAN;
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr,1);
    if ((-1 < (int)local_18) && (fVar6 = local_18, (int)local_18 < this_ptr->vdir_box_count)) {
      do {
        local_28 = fVar6;
        fVar6 = *(float *)(this_ptr->vdir_boxes[(int)local_28].field3_0x3c + 4);
      } while (-1 < (int)fVar6);
    }
    fVar6 = 0.0;
    if (0 < this_ptr->vdir_box_count) {
      local_34 = &this_ptr->vdir_boxes[0].rotation_matrix;
      do {
        pCVar3 = &this_ptr->vdir_boxes[(int)fVar6].position;
        core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                  (local_34,(CVector3f *)&stack0xfffffe6c);
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr,pCVar3);
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr,(CVector3i *)&stack0xfffffe6c,(CVector3i *)0x0);
        fVar14 = fVar6;
        if (fVar6 == local_18) {
          corner2 = pCVar3 + 1;
          local_158 = -corner2->x;
          in_stack_fffffdc0 = (CMatrix3x3f *)0x0;
          fVar14 = 0.5;
          local_154 = -pCVar3[1].y;
          core_setedit_cpp_FUN_005817d0(&local_158);
          uVar2 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                            (g_CEditorToolsPtr);
          shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
                    (g_CEditorToolsPtr,2.0,CONCAT31 /* combine 2-byte values */(extraout_var,uVar2));
          corner1 = (CDemonSet *)&local_128;
          local_128 = -corner2->x;
          in_stack_fffffdc4 = (CVector3f *)0x583576;
          shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
                    (g_CEditorToolsPtr,(CVector3f *)corner1,corner2,CONCAT31 /* combine 2-byte values */(extraout_var,uVar2));
        }
        else {
          do {
            fVar16 = fVar14;
            fVar14 = *(float *)(this_ptr->vdir_boxes[(int)fVar16].field3_0x3c + 4);
          } while (-1 < (int)fVar14);
          if (fVar16 == local_28) {
            core_setedit_cpp_FUN_005817d0(&stack0xffffff08);
            in_stack_fffffdc4 = (CVector3f *)&stack0xffffff74;
            corner1 = (CDemonSet *)&DAT_00000002;
            fVar14 = 8.100852e-39;
            in_stack_fffffdc0 = (CMatrix3x3f *)g_CEditorToolsPtr;
            shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
                      (g_CEditorToolsPtr,in_stack_fffffdc4,pCVar3 + 1,2);
          }
          else {
            in_stack_fffffdc4 = (CVector3f *)0x0;
            in_stack_fffffdc0 = (CMatrix3x3f *)0x0;
            fVar14 = 0.2;
            core_setedit_cpp_FUN_005817d0(&stack0xfffffec0);
          }
        }
        fVar6 = (float)((int)fVar6 + 1);
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
        local_34 = (CMatrix3x3f *)((int)(local_34 + 1) + 0x20);
      } while ((int)fVar6 < this_ptr->vdir_box_count);
    }
    local_30 = 0;
    if (0 < this_ptr->camera_count) {
      local_2c = (CDemonSet *)&pCVar18->orientation;
      local_20 = &pCVar18->position;
      do {
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr,local_20);
        iVar7 = 4;
        bVar1 = true;
        pSVar13 = (SRenderVertex *)0x5836a9;
        vertex2 = (SRenderVertex *)g_CDemonRendererPtr;
        vertex2_00 = local_2c;
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr,(CVector3i *)local_2c,(CVector3i *)0x0);
        if ((-1 < (int)local_18) && ((int)local_18 < this_ptr->vdir_box_count)) {
          vertex2 = (SRenderVertex *)0x5836cb;
          vertex2_00 = this_ptr;
          iVar4 = core_setdir_cpp_CDemonSet_FUN_00576340(this_ptr);
          if (iVar4 != 0) {
            iVar7 = 0xfb;
            bVar1 = false;
          }
        }
        fVar6 = -1.0;
        fVar16 = -1.0;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,
                   (CVector3i *)&stack0xffffff20);
        fVar6 = -fVar6;
        local_104 = (int)ROUND(fVar6 * 256f);
        local_100 = (int)ROUND(fVar16 * 256f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
                   (CVector3i *)&local_104);
        local_1b8 = (int)ROUND(fVar6 * 256f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
                   (CVector3i *)&local_1b8);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,
                   (CVector3i *)&stack0xffffff50);
        fVar6 = -0.3;
        fVar16 = -0.3;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[4].projected_vertex,
                   (CVector3i *)&stack0xfffffe60);
        fVar6 = -fVar6;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[5].projected_vertex,
                   (CVector3i *)&stack0xfffffe90);
        fVar16 = -fVar16;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[6].projected_vertex,
                   (CVector3i *)&stack0xfffffeb4);
        local_a4 = (int)ROUND(-fVar6 * 256f);
        local_a0 = (int)ROUND(fVar16 * 256f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[7].projected_vertex,
                   (CVector3i *)&local_a4);
        if (bVar1) {
          engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
                    (g_CDemonRendererPtr,iVar7);
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,0,1);
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,1,2);
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,2,3);
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,3,0);
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,4,5);
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,5,6);
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,6,7);
          fVar14 = 8.102432e-39;
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,7,4);
          in_stack_fffffdc0 = (CMatrix3x3f *)0x583a5c;
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,0,4);
          in_stack_fffffdc4 = (CVector3f *)0x583a6f;
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,1,5);
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,2,6);
          corner1 = (CDemonSet *)0x583a95;
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,3,7);
        }
        else {
          pSVar9 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar8 = pSVar9 + 1;
          piVar11 = (int *)&stack0xfffffd7c;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar11 = (pSVar8->projected_vertex).transformed_x;
            pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          piVar11 = (int *)&stack0xfffffd4c;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar11 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          g_ActiveRenderColor = iVar7;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd4c,in_stack_fffffd50);
          pSVar9 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar8 = pSVar9 + 2;
          piVar11 = (int *)&stack0xfffffd80;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar8->projected_vertex).transformed_x;
            pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          pSVar9 = pSVar9 + 1;
          piVar11 = (int *)&stack0xfffffd50;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          in_stack_fffffd4c = (SRenderVertex *)0x5841b6;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd50,in_stack_fffffd54);
          pSVar9 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar8 = pSVar9 + 3;
          piVar11 = (int *)&stack0xfffffd84;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar8->projected_vertex).transformed_x;
            pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          pSVar9 = pSVar9 + 2;
          piVar11 = (int *)&stack0xfffffd54;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          in_stack_fffffd50 = (SRenderVertex *)0x5841e6;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd54,in_stack_fffffd58);
          pSVar9 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar8 = pSVar9;
          piVar11 = (int *)&stack0xfffffd88;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar8->projected_vertex).transformed_x;
            pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          pSVar9 = pSVar9 + 3;
          piVar11 = (int *)&stack0xfffffd58;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          in_stack_fffffd54 = (SRenderVertex *)0x584215;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd58,in_stack_fffffd5c);
          pSVar9 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar8 = pSVar9 + 5;
          piVar11 = (int *)&stack0xfffffd8c;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar8->projected_vertex).transformed_x;
            pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          pSVar9 = pSVar9 + 4;
          piVar11 = (int *)&stack0xfffffd5c;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          in_stack_fffffd58 = (SRenderVertex *)0x584248;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd5c,in_stack_fffffd60);
          pSVar9 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar8 = pSVar9 + 6;
          piVar11 = (int *)&stack0xfffffd90;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar8->projected_vertex).transformed_x;
            pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          pSVar9 = pSVar9 + 5;
          piVar11 = (int *)&stack0xfffffd60;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          in_stack_fffffd5c = (SRenderVertex *)0x58427b;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd60,in_stack_fffffd64);
          pSVar9 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar8 = pSVar9 + 7;
          piVar11 = (int *)&stack0xfffffd94;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar8->projected_vertex).transformed_x;
            pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          pSVar9 = pSVar9 + 6;
          piVar11 = (int *)&stack0xfffffd64;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          in_stack_fffffd60 = (SRenderVertex *)0x5842ae;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd64,in_stack_fffffd68);
          pSVar9 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar8 = pSVar9 + 4;
          piVar11 = (int *)&stack0xfffffd98;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar8->projected_vertex).transformed_x;
            pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          pSVar9 = pSVar9 + 7;
          piVar11 = (int *)&stack0xfffffd68;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          in_stack_fffffd64 = (SRenderVertex *)0x5842e1;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd68,in_stack_fffffd6c);
          pSVar9 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar8 = pSVar9 + 4;
          piVar11 = (int *)&stack0xfffffd9c;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar8->projected_vertex).transformed_x;
            pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          piVar11 = (int *)&stack0xfffffd6c;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          in_stack_fffffd68 = (SRenderVertex *)0x584310;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd6c,in_stack_fffffd70);
          pSVar9 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar8 = pSVar9 + 5;
          piVar11 = (int *)&stack0xfffffda0;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar8->projected_vertex).transformed_x;
            pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          pSVar9 = pSVar9 + 1;
          piVar11 = (int *)&stack0xfffffd70;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          in_stack_fffffd6c = (SRenderVertex *)0x584340;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_fffffd70,pSVar13);
          pSVar9 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar8 = pSVar9 + 6;
          piVar11 = (int *)&stack0xfffffda4;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar8->projected_vertex).transformed_x;
            pSVar8 = (SRenderVertex *)((int)pSVar8 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          pSVar9 = pSVar9 + 2;
          piVar11 = (int *)&stack0xfffffd74;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          in_stack_fffffd70 = (SRenderVertex *)0x584370;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar13,vertex2);
          pSVar13 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar9 = pSVar13 + 7;
          piVar11 = (int *)&stack0xfffffda8;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar9->projected_vertex).transformed_x;
            pSVar9 = (SRenderVertex *)((int)pSVar9 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          pSVar13 = pSVar13 + 3;
          piVar11 = (int *)&stack0xfffffd78;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *piVar11 = (pSVar13->projected_vertex).transformed_x;
            pSVar13 = (SRenderVertex *)((int)pSVar13 + ((uint)bVar12 * -2 + 1) * 4);
            piVar11 = piVar11 + (uint)bVar12 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(vertex2,(SRenderVertex *)vertex2_00);
        }
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
        local_2c = (CDemonSet *)&local_2c->cameras[0].field17_0x1a0;
        local_20 = local_20 + 0x23;
        local_30 = local_30 + 1;
      } while (local_30 < this_ptr->camera_count);
    }
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
    fVar16 = 0.0;
    fVar6 = 8.10267e-39;
    pCVar15 = g_CEditorToolsPtr;
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,false);
    local_21c = 8.102682e-39;
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    local_21c = 8.102699e-39;
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    local_21c = 8.102721e-39;
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if (iVar7 != 0) {
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
      fVar19 = g_CGamePtr->delta_time_float;
      local_208 = 8.105839e-39;
      fVar20 = fVar19;
      iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
      if (iVar7 == 0) {
        local_1f4 = 8.106803e-39;
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
        if (iVar7 != 0) {
          fVar19 = fVar20 * (float)10;
        }
      }
      else {
        fVar19 = fVar20 * (float)0.050000000000000003;
      }
      fVar19 = (float)pCVar21 * (float)0.5 * fVar19;
      local_1e8.z = 8.105933e-39;
      (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4a);
      local_1cc = 8.105972e-39;
      (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4e);
      local_1b8 = 0x584443;
      (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x52);
      (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x53);
      fStack_190 = 8.106091e-39;
      iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xd);
      if (iVar7 != 0) {
        pCVar21 = (CKeys *)((float)pCVar21 - fVar19);
      }
      local_17c = 8.106132e-39;
      iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xc);
      if (iVar7 != 0) {
        pCVar21 = (CKeys *)((float)pCVar21 + fVar19);
      }
      if ((float)pCVar21 < (float)0.5) {
        pCVar21 = (CKeys *)0x3f000000;
      }
      iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
      if (iVar7 == 0) {
        core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)&stack0xfffffdd8);
        if ((SVDBox *)&stack0xfffffdd8 != local_3c) {
          fVar6 = (local_3c->position).x;
          pCVar15 = (CEditorTools *)(local_3c->position).y;
          fVar16 = (local_3c->position).z;
        }
        pCVar3 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                           (&local_3c->rotation_matrix,(CVector3f *)&local_17c);
        if ((CVector3f *)&local_21c != pCVar3) {
          local_21c = pCVar3->x;
        }
        core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)&stack0xfffffdd8);
        if ((SVDBox *)&stack0xfffffdd8 != local_3c) {
          (local_3c->position).x = fVar6;
          (local_3c->position).y = (float)pCVar15;
          (local_3c->position).z = fVar16;
        }
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  (&local_3c->rotation_matrix,(CVector3f *)&local_21c);
      }
      else {
        local_48 = g_CGamePtr->delta_time_float * (float)4;
        local_154 = 8.106393e-39;
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
        if (iVar7 != 0) {
          local_48 = local_48 * (float)0.10000000000000001;
        }
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
        if (iVar7 != 0) {
          (local_3c->extents).x = (local_3c->extents).x - local_48;
        }
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
        if (iVar7 != 0) {
          (local_3c->extents).x = (local_3c->extents).x + local_48;
        }
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
        if (iVar7 != 0) {
          (local_3c->extents).y = (local_3c->extents).y - local_48;
        }
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
        if (iVar7 != 0) {
          (local_3c->extents).y = (local_3c->extents).y + local_48;
        }
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
        if (iVar7 != 0) {
          (local_3c->extents).z = (local_3c->extents).z - local_48;
        }
        iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
        if (iVar7 != 0) {
          (local_3c->extents).z = (local_3c->extents).z + local_48;
        }
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
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xf);
    if (iVar7 != 0) {
      local_128 = 8.102816e-39;
      iVar7 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
      if (iVar7 == 0) {
        local_18 = (float)((int)local_18 + 1);
        if (this_ptr->vdir_box_count <= (int)local_18) {
          local_18 = 0.0;
        }
      }
      else {
        local_18 = (float)((int)local_18 + -1);
        if ((int)local_18 < 0) {
          local_18 = (float)(this_ptr->vdir_box_count + -1);
        }
      }
    }
    local_114 = 8.102871e-39;
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x17);
    if (iVar7 != 0) {
      fVar6 = (float)this_ptr->vdir_box_count;
      if ((int)fVar6 < 0xfa) {
        pSVar5 = this_ptr->vdir_boxes + (int)fVar6;
        if (pSVar5 != (SVDBox *)&stack0xfffffdbc) {
          (pSVar5->position).x = fVar14;
          (pSVar5->position).y = (float)in_stack_fffffdc0;
          (pSVar5->position).z = (float)in_stack_fffffdc4;
        }
        local_bc.z = 0.0;
        local_bc.x = 0.0;
        local_100 = 0x583c04;
        local_bc.y = (float)corner1;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  (&pSVar5->rotation_matrix,&local_bc);
        (pSVar5->extents).x = 10.0;
        (pSVar5->extents).y = 10.0;
        (pSVar5->extents).z = 10.0;
        this_ptr->vdir_box_count = this_ptr->vdir_box_count + 1;
        local_18 = fVar6;
      }
      else {
        local_100 = 0x5847a1;
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Max number of boxes has been reached, can't add any more boxes.");
      }
    }
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x13);
    if (iVar7 != 0) {
      iVar7 = this_ptr->vdir_box_count;
      if (iVar7 < 0xfa) {
        if ((-1 < (int)local_18) && ((int)local_18 < iVar7)) {
          pSVar5 = this_ptr->vdir_boxes + iVar7;
          pSVar10 = this_ptr->vdir_boxes + (int)local_18;
          if (pSVar5 != pSVar10) {
            (pSVar5->position).x = (pSVar10->position).x;
            (pSVar5->position).y = (pSVar10->position).y;
            (pSVar5->position).z = (pSVar10->position).z;
          }
          if (&pSVar5->extents != &pSVar10->extents) {
            (pSVar5->extents).x = (pSVar10->extents).x;
            (pSVar5->extents).y = (pSVar10->extents).y;
            (pSVar5->extents).z = (pSVar10->extents).z;
          }
          (pSVar5->rotation_matrix).m[0].x = (pSVar10->rotation_matrix).m[0].x;
          (pSVar5->rotation_matrix).m[0].y = (pSVar10->rotation_matrix).m[0].y;
          (pSVar5->rotation_matrix).m[0].z = (pSVar10->rotation_matrix).m[0].z;
          (pSVar5->rotation_matrix).m[1].x = (pSVar10->rotation_matrix).m[1].x;
          (pSVar5->rotation_matrix).m[1].y = (pSVar10->rotation_matrix).m[1].y;
          (pSVar5->rotation_matrix).m[1].z = (pSVar10->rotation_matrix).m[1].z;
          (pSVar5->rotation_matrix).m[2].x = (pSVar10->rotation_matrix).m[2].x;
          (pSVar5->rotation_matrix).m[2].y = (pSVar10->rotation_matrix).m[2].y;
          (pSVar5->rotation_matrix).m[2].z = (pSVar10->rotation_matrix).m[2].z;
          *(uint *)pSVar5->field3_0x3c = *(uint *)pSVar10->field3_0x3c;
          *(uint *)(pSVar5->field3_0x3c + 4) = *(uint *)(pSVar10->field3_0x3c + 4);
          local_18 = (float)this_ptr->vdir_box_count;
          pSVar5 = this_ptr->vdir_boxes + (int)local_18;
          this_ptr->vdir_box_count = (int)local_18 + 1;
          local_ec = 8.107557e-39;
          pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (&pSVar5->rotation_matrix,(CVector3f *)&local_ec,
                              (CVector3f *)&stack0xfffffe54);
          (pSVar5->position).x = pCVar3->x + (pSVar5->position).x;
          (pSVar5->position).y = pCVar3->y + (pSVar5->position).y;
          (pSVar5->position).z = pCVar3->z + (pSVar5->position).z;
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
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x20);
    if (((iVar7 != 0) && (-1 < (int)local_18)) && ((int)local_18 < this_ptr->vdir_box_count)) {
      fStack_d0 = 8.103296e-39;
      iVar7 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                        (g_CEditorToolsPtr,"Delete the selected box?");
      if (iVar7 != 0) {
        iVar7 = this_ptr->vdir_box_count + -1;
        this_ptr->vdir_box_count = iVar7;
        fStack_d0 = 8.103383e-39;
        crt_string_c_memmove_FUN_005fe5e0
                  (this_ptr->vdir_boxes + (int)local_18,this_ptr->vdir_boxes + (int)local_18 + 1,
                   (iVar7 - (int)local_18) * 0x44);
        if (this_ptr->vdir_box_count <= (int)local_18) {
          local_18 = 0.0;
        }
      }
    }
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x31);
    if (iVar7 != 0) {
      local_18 = -NAN;
    }
    local_bc.z = 8.103475e-39;
    iVar7 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3b);
    if (iVar7 != 0) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      local_a0 = 0x583d62;
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
      uVar17 = 0;
      engine_2d_c_drawText_FUN_00401fd0("To position the selected box, use the normal slew keys.",0,99);
      pCVar18 = (C3DSCamera *)0x583f37;
      engine_2d_c_drawText_FUN_00401fd0("To size the selected box, use arrow keys and Q/A with CTRL.",0,0x6e);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      pCVar21 = g_CKeysPtr;
      engine_keys_cpp_CKeys_getInputKey_FUN_00502460(g_CKeysPtr);
      engine_2d_c_clearInputAndWait_FUN_00403260();
    }
    if (((uVar17 & 1) != 0) && ((g_MouseButtonFlags & 1U) == 0)) {
      fVar14 = (float)g_CDemonCameraInstance.base.position.x;
      pCVar3 = core_dcamera_cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480
                         (&g_CDemonCameraInstance,(CVector3f *)&stack0xffffff2c,g_MouseX,g_MouseY);
      local_1e8.x = pCVar3->x * 1000f;
      local_1e8.y = pCVar3->y * 1000f;
      local_1e8.z = 1000f * pCVar3->z;
      fVar6 = 0.0;
      local_38 = 1e+30;
      if (0 < this_ptr->vdir_box_count) {
        local_1c = &this_ptr->vdir_boxes[0].rotation_matrix;
        pCVar3 = &this_ptr->vdir_boxes[0].extents;
        do {
          local_1f4 = fVar14 - this_ptr->vdir_boxes[(int)fVar6].position.x;
          core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                    (local_1c,(CVector3f *)&stack0xfffffef0,(CVector3f *)&local_1f4);
          core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                    (local_1c,(CVector3f *)&stack0xffffff68,&local_1e8);
          local_11c = -pCVar3->x;
          local_118 = -pCVar3->y;
          local_114 = -pCVar3->z;
          if (&local_20c != &local_11c) {
            local_20c = local_11c;
            local_208 = local_118;
          }
          fVar16 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                             ((CBoundingBox3D *)&local_20c,(CVector3f *)&stack0xfffffef0,
                              (CVector3f *)&stack0xffffff68,(CVector3f *)0x0);
          if (((0.0 <= fVar16) && (fVar16 < 1.0)) && (fVar16 < local_38)) {
            local_38 = fVar16;
            local_18 = fVar6;
          }
          pCVar3 = (CVector3f *)((int)(pCVar3 + 5) + 8);
          fVar6 = (float)((int)fVar6 + 1);
          local_1c = (CMatrix3x3f *)((int)(local_1c + 1) + 0x20);
        } while ((int)fVar6 < this_ptr->vdir_box_count);
      }
    }
  } while( true );
}
