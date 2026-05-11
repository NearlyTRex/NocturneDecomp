// Name: core_setedit.cpp_CDemonSet_showVdirBoxEditor_FUN_00583170
// Address: 00583170
// MANUAL RECONSTRUCTION
// Address Range: [[00583170, 005848f1] [00603ef8, 0060477f]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_showVdirBoxEditor_FUN_00583170(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_showVdirBoxEditor_FUN_00583170(CDemonSet *this_ptr)

{
  CVector3f *pCVar1;
  bool bVar2;
  CMatrix3x3f *pCVar3;
  CVector3f *pCVar4;
  CVector3f *pCVar5;
  uint text_color;
  int iVar6;
  SVDBox *pSVar11;
  int iVar12;
  SRenderVertex *pSVar14;
  SVDBox *pSVar15;
  CSlew slew;
  CSlew temp_slew;
  CMatrix3x3f local_matrix;
  CBoundingBox3D local_bbox_at_df4;
  CVector3f local_vec_e0c;
  CVector3f local_vec_e18;
  char *format;
  CVector3f local_1dc;
  CVector3f local_1d0;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  CVector3i local_1b8;
  CVector3f local_1ac;
  CVector3i local_1a0;
  CVector3f local_194;
  CVector3f local_camera_pos;
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
  float local_c4;
  CVector3f local_bc;
  CVector3i local_b0;
  CVector3i local_a4;
  CVector3f local_98;
  CVector3f local_8c;
  double local_78;
  _BIT_INTEGER32 local_68;
  C3DSCamera *local_64;
  float local_60;
  float local_5c;
  float local_58;
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
  uint local_c0;
  uint local_54;
  float local_14;

  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Preparing set.");
  core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
  this_ptr->actor_count = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  core_slew_cpp_CSlew_init_FUN_005a2060(&slew);
  local_c8 = 0.0;
  local_c4 = 0.0;
  local_c0 = 0;
  local_4c = 40.0;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
  local_44 = this_ptr->vdir_boxes;
  this_ptr->disable_water_rendering = 1;
  this_ptr->disable_sky_rendering = 1;
  this_ptr->disable_spotlight_shadows = 1;
  local_64 = this_ptr->cameras;
  local_18 = 0;
  local_40 = local_44;
  do {
    iVar12 = local_18;
    local_68 = g_MouseButtonFlags;
    core_setdir_cpp_CDemonSet_buildVdirBoxGroups_FUN_00576710(this_ptr);
    local_3c = (SVDBox *)0x0;
    if ((-1 < iVar12) && (iVar12 < this_ptr->vdir_box_count)) {
      local_3c = local_40 + iVar12;
    }
    wincore_winrun_cpp_doNothing1_FUN_005f2f80();
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    pSVar11 = local_3c;
    wincore_windll_cpp_clearZBufferNative_FUN_005b3ed4();
    if (pSVar11 != (SVDBox *)0x0) {
      slew.orientation.vec.y = local_c4;
      pCVar5 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                         (&local_3c->rotation_matrix,&local_1dc);
      slew.orientation.vec.y = slew.orientation.vec.y + pCVar5->y;
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                (&local_matrix,&slew.orientation.vec);
      local_1d0.z = -local_4c;
      local_1d0.x = 0.0;
      local_1d0.y = 0.0;
      local_14 = local_1d0.z;
      pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         (&local_matrix,&local_134,&local_1d0);
      local_1c4 = pCVar5->x + (local_3c->position).x;
      local_1c0 = pCVar5->y + (local_3c->position).y;
      local_1bc = pCVar5->z + (local_3c->position).z;
      slew.position.x = local_1c4;
      slew.position.y = local_1c0;
      slew.position.z = local_1bc;
    }
    g_CDemonCameraInstance.base.position.f.x = slew.position.x;
    g_CDemonCameraInstance.base.position.f.y = slew.position.y;
    g_CDemonCameraInstance.base.position.f.z = slew.position.z;
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
              (&g_CDemonCameraInstance.base.rotation_matrix,&slew.orientation.vec);
    g_CDemonCameraInstance.base.focal_length = 28.0;
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
    core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(this_ptr,150.0,0);
    iVar12 = local_18;
    local_28 = -1;
    engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0(g_CDemonRendererPtr2,1);
    if ((-1 < iVar12) && (iVar12 < this_ptr->vdir_box_count)) {
      do {
        local_28 = iVar12;
        iVar12 = this_ptr->vdir_boxes[local_28].parent_index;
      } while (-1 < iVar12);
    }
    iVar12 = 0;
    if (0 < this_ptr->vdir_box_count) {
      local_34 = &local_44->rotation_matrix;
      do {
        pCVar5 = &local_44[iVar12].position;
        core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(local_34,&local_194);
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr2,pCVar5);
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr2,&local_194,(CVector3f *)0x0);
        iVar6 = iVar12;
        if (iVar12 == local_18) {
          pCVar1 = pCVar5 + 1;
          local_158.x = -pCVar1->x;
          local_158.y = -pCVar5[1].y;
          local_158.z = -pCVar5[1].z;
          core_setedit_cpp_renderColoredBox_FUN_005817d0(&local_158,pCVar1,0.5,0,0xff,0);
          text_color = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
                                 (g_CEditorToolsPtr);
          shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
                    (g_CEditorToolsPtr,2.0,text_color);
          local_128.x = -pCVar1->x;
          local_128.y = -pCVar5[1].y;
          local_128.z = -pCVar5[1].z;
          shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
                    (g_CEditorToolsPtr,&local_128,pCVar1,text_color);
        }
        else {
          do {
            iVar6 = this_ptr->vdir_boxes[iVar6].parent_index;
          } while (-1 < iVar6);
          pCVar1 = pCVar5 + 1;
          if (iVar6 == local_28) {
            local_f8.x = -pCVar1->x;
            local_f8.y = -pCVar5[1].y;
            local_f8.z = -pCVar5[1].z;
            core_setedit_cpp_renderColoredBox_FUN_005817d0(&local_f8,pCVar1,0.3,0,0x80,0);
            local_8c.x = -pCVar1->x;
            local_8c.y = -pCVar5[1].y;
            local_8c.z = -pCVar5[1].z;
            shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
                      (g_CEditorToolsPtr,&local_8c,pCVar1,2);
          }
          else {
            local_140.x = -pCVar1->x;
            local_140.y = -pCVar5[1].y;
            local_140.z = -pCVar5[1].z;
            core_setedit_cpp_renderColoredBox_FUN_005817d0(&local_140,pCVar1,0.2,0,0,0xff);
          }
        }
        pCVar3 = local_34;
        iVar12 = iVar12 + 1;
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
        local_34 = (CMatrix3x3f *)((int)(pCVar3 + 1) + 0x20);
      } while (iVar12 < this_ptr->vdir_box_count);
    }
    local_30 = 0;
    if (0 < this_ptr->camera_count) {
      local_2c = &local_64->orientation;
      local_20 = &local_64->position;
      do {
        pCVar5 = local_20;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr2,local_20);
        iVar12 = 4;
        bVar2 = true;
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr2,local_2c,(CVector3f *)0x0);
        if (((-1 < local_18) && (local_18 < this_ptr->vdir_box_count)) &&
           (iVar6 = core_setdir_cpp_CDemonSet_isPointInVdirGroup_FUN_00576340
                              (this_ptr,local_18,pCVar5), iVar6 != 0)) {
          iVar12 = 0xfb;
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
                    (g_CDemonRendererPtr2,iVar12);
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,0,1);
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,1,2);
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,2,3);
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,3,0);
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,4,5);
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,5,6);
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,6,7);
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,7,4);
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,0,4);
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,1,5);
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,2,6);
          engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,3,7);
        }
        else {
          g_ActiveRenderColor = iVar12;
          pSVar14 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar14[0], pSVar14[1]);
          pSVar14 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar14[1], pSVar14[2]);
          pSVar14 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar14[2], pSVar14[3]);
          pSVar14 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar14[3], pSVar14[0]);
          pSVar14 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar14[4], pSVar14[5]);
          pSVar14 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar14[5], pSVar14[6]);
          pSVar14 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar14[6], pSVar14[7]);
          pSVar14 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar14[7], pSVar14[4]);
          pSVar14 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar14[0], pSVar14[4]);
          pSVar14 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar14[1], pSVar14[5]);
          pSVar14 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar14[2], pSVar14[6]);
          pSVar14 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(pSVar14[3], pSVar14[7]);
        }
        pCVar5 = local_20;
        pCVar4 = local_2c;
        iVar12 = local_30;
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
        local_2c = pCVar4 + 0x23;
        local_20 = pCVar5 + 0x23;
        local_30 = iVar12 + 1;
      } while (local_30 < this_ptr->camera_count);
    }
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
    shape_edittool_cpp_CEditorTools_drawMousePointer_FUN_004a1380(g_CEditorToolsPtr,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDT_FUN_004d7d90(g_CGamePtr);
    iVar12 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (iVar12 != 0) {
      core_set_cpp_CDemonSet_clearLights_FUN_0056d2d0(this_ptr);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      this_ptr->disable_water_rendering = 0;
      this_ptr->disable_sky_rendering = 0;
      this_ptr->disable_spotlight_shadows = 0;
      return;
    }
    if (local_3c == (SVDBox *)0x0) {
      core_slew_cpp_CSlew_processInput_FUN_005a20b0(&slew);
    }
    else {
      local_5c = g_CGamePtr->delta_time_float;
      local_58 = local_5c;
      iVar12 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
      if (iVar12 == 0) {
        iVar12 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
        if (iVar12 != 0) {
          local_5c = local_58 * (float)10;
        }
      }
      else {
        local_5c = local_58 * (float)0.050000000000000003;
      }
      local_50 = local_5c * (float)1.57079632675;
      local_60 = local_4c * (float)0.5 * local_5c;
      iVar12 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_SUBTRACT);
      if (iVar12 != 0) {
        local_c8 = local_c8 + local_50;
      }
      iVar12 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_ADD);
      if (iVar12 != 0) {
        local_c8 = local_c8 - local_50;
      }
      iVar12 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD0);
      if (iVar12 != 0) {
        local_c4 = local_c4 + local_50;
      }
      iVar12 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_DECIMAL);
      if (iVar12 != 0) {
        local_c4 = local_c4 - local_50;
      }
      iVar12 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_EQUALS);
      if (iVar12 != 0) {
        local_4c = local_4c - local_60;
      }
      iVar12 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_MINUS);
      if (iVar12 != 0) {
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
      iVar12 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
      if (iVar12 == 0) {
        core_slew_cpp_CSlew_init_FUN_005a2060(&temp_slew);
        core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                  (&local_3c->rotation_matrix,&local_17c);
        pSVar11 = local_3c;
        core_slew_cpp_CSlew_processInput_FUN_005a20b0(&temp_slew);
        pSVar11->position.x = temp_slew.position.x;
        pSVar11->position.y = temp_slew.position.y;
        pSVar11->position.z = temp_slew.position.z;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  (&local_3c->rotation_matrix,&temp_slew.orientation.vec);
      }
      else {
        local_48 = g_CGamePtr->delta_time_float * (float)4;
        iVar12 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
        if (iVar12 != 0) {
          local_48 = local_48 * (float)0.10000000000000001;
        }
        iVar12 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD4);
        if (iVar12 != 0) {
          (local_3c->extents).x = (local_3c->extents).x - local_48;
        }
        iVar12 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD6);
        if (iVar12 != 0) {
          (local_3c->extents).x = (local_3c->extents).x + local_48;
        }
        iVar12 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_A);
        if (iVar12 != 0) {
          (local_3c->extents).y = (local_3c->extents).y - local_48;
        }
        iVar12 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_Q);
        if (iVar12 != 0) {
          (local_3c->extents).y = (local_3c->extents).y + local_48;
        }
        iVar12 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD2);
        if (iVar12 != 0) {
          (local_3c->extents).z = (local_3c->extents).z - local_48;
        }
        iVar12 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD8);
        if (iVar12 != 0) {
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
    iVar12 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_TAB);
    if (iVar12 != 0) {
      iVar12 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
      if (iVar12 == 0) {
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
    iVar12 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_I);
    if (iVar12 != 0) {
      iVar12 = this_ptr->vdir_box_count;
      if (iVar12 < 0xfa) {
        pSVar11 = local_40 + iVar12;
        (pSVar11->position).x = slew.position.x;
        (pSVar11->position).y = slew.position.y;
        (pSVar11->position).z = slew.position.z;
        local_bc.z = 0.0;
        local_bc.x = 0.0;
        local_bc.y = slew.orientation.vec.y;
        local_18 = iVar12;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  (&pSVar11->rotation_matrix,&local_bc);
        (pSVar11->extents).x = 10.0;
        (pSVar11->extents).y = 10.0;
        (pSVar11->extents).z = 10.0;
        this_ptr->vdir_box_count = this_ptr->vdir_box_count + 1;
      }
      else {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Max number of boxes has been reached, can't add any more boxes.");
      }
    }
    iVar12 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_R);
    if (iVar12 != 0) {
      iVar12 = this_ptr->vdir_box_count;
      if (iVar12 < 0xfa) {
        if ((-1 < local_18) && (local_18 < iVar12)) {
          pSVar11 = local_40 + iVar12;
          pSVar15 = local_40 + local_18;
          if (pSVar11 != pSVar15) {
            (pSVar11->position).x = (pSVar15->position).x;
            (pSVar11->position).y = (pSVar15->position).y;
            (pSVar11->position).z = (pSVar15->position).z;
          }
          if (&pSVar11->extents != &pSVar15->extents) {
            (pSVar11->extents).x = (pSVar15->extents).x;
            (pSVar11->extents).y = (pSVar15->extents).y;
            (pSVar11->extents).z = (pSVar15->extents).z;
          }
          (pSVar11->rotation_matrix).m[0].x = (pSVar15->rotation_matrix).m[0].x;
          (pSVar11->rotation_matrix).m[0].y = (pSVar15->rotation_matrix).m[0].y;
          (pSVar11->rotation_matrix).m[0].z = (pSVar15->rotation_matrix).m[0].z;
          (pSVar11->rotation_matrix).m[1].x = (pSVar15->rotation_matrix).m[1].x;
          (pSVar11->rotation_matrix).m[1].y = (pSVar15->rotation_matrix).m[1].y;
          (pSVar11->rotation_matrix).m[1].z = (pSVar15->rotation_matrix).m[1].z;
          (pSVar11->rotation_matrix).m[2].x = (pSVar15->rotation_matrix).m[2].x;
          (pSVar11->rotation_matrix).m[2].y = (pSVar15->rotation_matrix).m[2].y;
          (pSVar11->rotation_matrix).m[2].z = (pSVar15->rotation_matrix).m[2].z;
          pSVar11->dead = pSVar15->dead;
          pSVar11->parent_index = pSVar15->parent_index;
          local_18 = this_ptr->vdir_box_count;
          pSVar11 = local_40 + local_18;
          this_ptr->vdir_box_count = local_18 + 1;
          local_1ac.x = 0.5;
          local_1ac.y = 0.5;
          local_1ac.z = 0.5;
          pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             (&pSVar11->rotation_matrix,&local_ec,&local_1ac);
          (pSVar11->position).x = pCVar5->x + (pSVar11->position).x;
          (pSVar11->position).y = pCVar5->y + (pSVar11->position).y;
          (pSVar11->position).z = pCVar5->z + (pSVar11->position).z;
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
    iVar12 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_D);
    if (((iVar12 != 0) && (-1 < local_18)) &&
       ((local_18 < this_ptr->vdir_box_count &&
        (iVar6 = shape_edittool_cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0049f060
                           (g_CEditorToolsPtr,"Delete the selected box?"), iVar12 = local_18
        , iVar6 != 0)))) {
      iVar6 = this_ptr->vdir_box_count + -1;
      this_ptr->vdir_box_count = iVar6;
      memmove
                (local_40 + local_18,local_40 + local_18 + 1,(iVar6 - local_18) * 0x44);
      if (this_ptr->vdir_box_count <= iVar12) {
        local_18 = 0;
      }
    }
    iVar12 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_N);
    if (iVar12 != 0) {
      local_18 = -1;
    }
    iVar12 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F1);
    if (iVar12 != 0) {
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
      local_camera_pos.x = g_CDemonCameraInstance.base.position.f.x;
      local_camera_pos.y = g_CDemonCameraInstance.base.position.f.y;
      local_camera_pos.z = g_CDemonCameraInstance.base.position.f.z;
      core_dcamera_cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480
                (&g_CDemonCameraInstance,&local_d4,g_MouseX,g_MouseY);
      local_vec_e18.x = local_d4.x * FLOAT_00648e2d;
      local_vec_e18.y = local_d4.y * FLOAT_00648e2d;
      local_vec_e18.z = local_d4.z * FLOAT_00648e2d;
      iVar12 = 0;
      local_38 = 1e+30;
      if (0 < this_ptr->vdir_box_count) {
        local_1c = &local_40->rotation_matrix;
        pCVar5 = &local_40->extents;
        do {
          local_vec_e0c.x = local_camera_pos.x - local_40[iVar12].position.x;
          local_vec_e0c.y = local_camera_pos.y - local_40[iVar12].position.y;
          local_vec_e0c.z = local_camera_pos.z - local_40[iVar12].position.z;
          core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                    (local_1c,&local_110,&local_vec_e0c);
          core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                    (local_1c,&local_98,&local_vec_e18);
          local_11c = -pCVar5->x;
          local_118 = -pCVar5->y;
          local_114 = -pCVar5->z;
          local_bbox_at_df4.min.x = local_11c;
          local_bbox_at_df4.min.y = local_118;
          local_bbox_at_df4.min.z = local_114;
          local_bbox_at_df4.max = *pCVar5;
          local_24 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                               (&local_bbox_at_df4,&local_110,&local_98,
                                (CVector3f *)0x0);
          local_78 = (double)local_24;
          if (((0.0 <= local_78) && (local_78 < 1.0)) && (local_24 < local_38)) {
            local_38 = local_24;
            local_18 = iVar12;
          }
          pCVar5 = (CVector3f *)((int)(pCVar5 + 5) + 8);
          iVar12 = iVar12 + 1;
          local_1c = (CMatrix3x3f *)((int)(local_1c + 1) + 0x20);
          local_14 = local_24;
        } while (iVar12 < this_ptr->vdir_box_count);
      }
    }
  } while( true );
}
