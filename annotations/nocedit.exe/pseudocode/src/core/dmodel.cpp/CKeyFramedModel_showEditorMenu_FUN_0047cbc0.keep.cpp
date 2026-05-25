// Name: core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0
// Address: 0047cbc0
// MANUAL RECONSTRUCTION
// Address Range: [[0047cbc0, 0047cdf1] [0047ce5a, 0047d1bb] [0047d250, 0047e805]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0(CKeyFramedModel *this_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0(CKeyFramedModel *this_ptr)

{
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  CVector3f *pCVar8;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  CVector3f *pCVar17;
  int iVar9;
  int iVar18;
  char *pcVar10;
  int x;
  char *pcVar19;
  SFoundFileInfo found_file_info;
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
  float local_18c;
  float local_188;
  float local_184;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  CVector3f local_15c;
  CVector3f local_138;
  CVector3f local_12c;
  CVector3f local_114;
  CVector3f local_108;
  CVector3f local_fc;
  CCourse local_f0;
  CVector3f local_d8;
  CVector3f local_b4;
  CVector3f local_9c;
  CVector3f local_90;
  uint local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_5c;
  int local_3c;
  int local_38;
  float local_34;
  float local_30 [4];
  char local_18 [4];
  char local_14 [4];
  CDemonSet *pCVar6;
  float fVar5;
  CVector3i *pCVar4;
  SRenderVertex *pSVar3;

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
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
  bVar8 = false;
  bVar7 = false;
  bVar2 = 0 < this_ptr->poly_count;
  bVar9 = false;
  wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0
            (g_CGamePtr->game_pixx,g_CGamePtr->game_pixy,0x20);
  do {
    engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,0xf8);
    pCVar6 = g_CDemonSetPtr;
    g_CDemonSetPtr->rendering_mode = 1;
    (pCVar6->light_direction).x = -0x4844;
    (pCVar6->light_direction).y = -0x4844;
    (pCVar6->light_direction).z = 0x4844;
    pCVar6->ambient_base_quick = 32000;
    wincore_windll_cpp_clearZBufferNative_FUN_005b3ed4();
    iVar9 = g_WindowWidth / 2 + -0x28;
    if (this_ptr->frame_count < 1) {
      engine_2d_c_drawText_FUN_00401fd0("(No model)",iVar9,g_WindowHeight / 2);
    }
    else if (bVar2) {
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_1e4,&local_d8);
      local_90.z = -local_7c;
      local_90.x = local_78;
      local_90.y = local_74;
      pCVar8 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         (&local_1e4,&local_b4,&local_90);
      if (&local_90 != pCVar8) {
        local_90 = *pCVar8;
      }
      engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
                (g_CDemonRendererPtr2,(CVector3f *)&local_90);
      engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
                (g_CDemonRendererPtr2,&local_d8);
      engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
                (g_CDemonRendererPtr2,local_80);
      local_114.x = 0.0;
      local_114.y = 0.0;
      local_114.z = 0.0;
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                (g_CDemonRendererPtr1,&local_114);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr1,&local_114,(CVector3f *)0x0);
      core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
                (this_ptr,(int)ROUND(ROUND(local_70)),(CKeyFramedModelInstance *)0x0,-1);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr1);
      if ((bVar7) && (iVar18 = 0, 0 < this_ptr->vertex_count)) {
        do {
          pSVar3 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          if (-1 < pSVar3[iVar18].projected_vertex.screen_x) {
            iVar12 = pSVar3[iVar18].projected_vertex.screen_y;
            x = pSVar3[iVar18].projected_vertex.screen_x >> 0x10;
            if (-1 < x) {
              _sprintf(local_2dc,"%d",iVar18);
              engine_2d_c_drawText_FUN_00401fd0(local_2dc,x,iVar12 >> 0x10);
            }
          }
          iVar18 = iVar18 + 1;
        } while (iVar18 < this_ptr->vertex_count);
      }
      if (bVar8) {
        shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(g_CEditorToolsPtr,4.0,3);
      }
      if (!bVar9) {
        _sprintf
                  (local_408,"Frame: %d of %d",(int)ROUND(ROUND(local_70)),this_ptr->frame_count);
        engine_2d_c_drawText_FUN_00401fd0(local_408,0,g_WindowHeight + -0x37);
      }
    }
    else {
      engine_2d_c_drawText_FUN_00401fd0("(Model not crammed)",iVar9,g_WindowHeight / 2);
    }
    if (!bVar9) {
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
      if (bVar8) {
        pcVar19 = "ACTIVE";
      }
      else {
        pcVar19 = "INACTIVE";
      }
      _sprintf(local_408,"I.  Interactive bias is now %s",pcVar19);
      engine_2d_c_drawText_FUN_00401fd0(local_408,0,0xc6);
      engine_2d_c_drawText_FUN_00401fd0("S.  Scale",0,0xd1);
      engine_2d_c_drawText_FUN_00401fd0("X.  Reorient model",0,0xe7);
      engine_2d_c_drawText_FUN_00401fd0("C.  Reorient to put model on course",0,0xf2);
      engine_2d_c_drawText_FUN_00401fd0("F1. Hide menu",0,0x108);
      engine_2d_c_drawText_FUN_00401fd0("D.  Demented(TM) Shape Editor",0,0x11e);
      engine_2d_c_drawText_FUN_00401fd0("Model options:",0,0x134);
      if (this_ptr->collision_triangle_list == (CDemonTriangle *)0x0) {
        pcVar19 = "DISABLED";
      }
      else {
        pcVar19 = "ENABLED";
      }
      _sprintf(local_408,"E.  Exact collision (currently %s)",pcVar19);
      engine_2d_c_drawText_FUN_00401fd0(local_408,0,0x13f);
      if (this_ptr->transparent_pixel_flag == 0) {
        pcVar19 = "DISABLED";
      }
      else {
        pcVar19 = "ENABLED";
      }
      _sprintf(local_408,"T.  Transparent pixel (currently %s)",pcVar19);
      engine_2d_c_drawText_FUN_00401fd0(local_408,0,0x14a);
      _sprintf(local_408,"Vertex count: %d",this_ptr->vertex_count);
      engine_2d_c_drawText_FUN_00401fd0(local_408,0,g_WindowHeight + -0x2c);
      _sprintf(local_408,"Poly count: %d",this_ptr->poly_count);
      engine_2d_c_drawText_FUN_00401fd0(local_408,0,g_WindowHeight + -0x21);
      _sprintf(local_408,"Frame count: %d",this_ptr->frame_count);
      engine_2d_c_drawText_FUN_00401fd0(local_408,0,g_WindowHeight + -0x16);
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDT_FUN_004d7d90(g_CGamePtr);
    local_5c = g_CGamePtr->delta_time_float;
    iVar18 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
    if (iVar18 != 0) {
      local_5c = local_5c * 0.1f;
    }
    iVar18 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
    if (iVar18 != 0) {
      local_5c = local_5c * 3.0f;
    }
    fVar3 = local_5c * (float)3.1415926535000001;
    fVar4 = local_5c * 10.0f;
    iVar18 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD0);
    if (iVar18 != 0) {
      local_d8.y = local_d8.y + fVar3;
    }
    iVar12 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_DECIMAL);
    if (iVar12 != 0) {
      local_d8.y = local_d8.y - fVar3;
    }
    iVar13 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_SUBTRACT);
    if (iVar13 != 0) {
      local_d8.x = local_d8.x + fVar3;
    }
    iVar14 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_ADD);
    if (iVar14 != 0) {
      local_d8.x = local_d8.x - fVar3;
    }
    bVar10 = iVar14 == 0 && (iVar13 == 0 && (iVar12 == 0 && iVar18 == 0));
    if (local_d8.x < (float)-1.57079632675) {
      local_d8.x = -1.5707964;
    }
    if ((float)1.57079632675 < local_d8.x) {
      local_d8.x = 1.5707964;
    }
    iVar18 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_EQUALS);
    if (iVar18 != 0) {
      local_80 = local_80 + 1.0;
    }
    iVar18 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_MINUS);
    if (iVar18 != 0) {
      local_80 = local_80 + -1.0f;
    }
    if ((float)40 < local_80) {
      local_80 = 40.0;
    }
    if (local_80 < 1.0) {
      local_80 = 1.0;
    }
    if (bVar8) {
      local_18c = 0.0;
      local_188 = 0.0;
      local_184 = 0.0;
      iVar18 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD8);
      if (iVar18 != 0) {
        local_184 = 0.0 - fVar4;
      }
      iVar12 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD2);
      if (iVar12 != 0) {
        local_184 = local_184 + fVar4;
      }
      iVar13 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD4);
      if (iVar13 != 0) {
        local_18c = 0.0 - fVar4;
      }
      iVar14 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD6);
      if (iVar14 != 0) {
        local_18c = local_18c + fVar4;
      }
      iVar15 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_A);
      if (iVar15 != 0) {
        local_188 = 0.0 - fVar4;
      }
      iVar16 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_Q);
      if (iVar16 != 0) {
        local_188 = local_188 + fVar4;
      }
      bVar10 = iVar16 == 0 &&
               (iVar15 == 0 &&
               (iVar14 == 0 && (iVar13 == 0 && (iVar12 == 0 && (iVar18 == 0 && bVar10)))));
      fVar3 = local_18c * 256.0f;
      fVar4 = local_188 * 256.0f;
      fVar6 = local_184 * 256.0f;
      if (((int)ROUND(fVar3) != 0 || (int)ROUND(fVar4) != 0) || (int)ROUND(fVar6) != 0) {
        for (iVar12 = 0; iVar12 < this_ptr->vertex_count * this_ptr->frame_count;
            iVar12 = iVar12 + 1) {
          pCVar4 = this_ptr->vertex_list;
          pCVar4[iVar12].x = pCVar4[iVar12].x + (int)ROUND(fVar3);
          pCVar4[iVar12].y = pCVar4[iVar12].y + (int)ROUND(fVar4);
          pCVar4[iVar12].z = pCVar4[iVar12].z + (int)ROUND(fVar6);
        }
        core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(this_ptr);
      }
    }
    else {
      iVar18 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD8);
      if (iVar18 != 0) {
        local_7c = local_7c - fVar4;
      }
      iVar12 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD2);
      if (iVar12 != 0) {
        local_7c = local_7c + fVar4;
      }
      iVar13 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD4);
      if (iVar13 != 0) {
        local_78 = local_78 - fVar4;
      }
      iVar14 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD6);
      if (iVar14 != 0) {
        local_78 = local_78 + fVar4;
      }
      iVar15 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_A);
      if (iVar15 != 0) {
        local_74 = local_74 - fVar4;
      }
      iVar16 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_Q);
      if (iVar16 != 0) {
        local_74 = local_74 + fVar4;
      }
      bVar10 = iVar16 == 0 &&
               (iVar15 == 0 &&
               (iVar14 == 0 && (iVar13 == 0 && (iVar12 == 0 && (iVar18 == 0 && bVar10)))));
      iVar18 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD5);
      if (iVar18 != 0) {
        local_78 = 0.0;
        bVar10 = false;
        local_74 = 0.0;
      }
    }
    iVar18 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F4);
    if (iVar18 != 0) {
      g_KFMShowEditorScreenshotCounter = g_KFMShowEditorScreenshotCounter + 1;
      _sprintf(g_KFMShowEditorScreenshotFile,"noc%d.pcx",g_KFMShowEditorScreenshotCounter);
      engine_pcx_c_saveScreenshotGeneral_FUN_005490c0(g_KFMShowEditorScreenshotFile);
    }
    iVar18 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD5);
    if (iVar18 != 0) {
      local_d8.y = 0.0;
      local_d8.x = 0.0;
      local_7c = 15.0;
      local_d8.z = 0.0;
    }
    iVar18 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F1);
    if (iVar18 != 0) {
      bVar9 = !bVar9;
    }
    iVar18 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_PERIOD);
    if (iVar18 != 0) {
      local_70 = local_70 + 1.0;
    }
    iVar18 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_COMMA);
    if (iVar18 != 0) {
      local_70 = local_70 + -1.0f;
    }
    if (local_70 < (float)this_ptr->frame_count) {
      if (local_70 < 0.0) {
        local_70 = (float)(this_ptr->frame_count + -1);
      }
    }
    else {
      local_70 = 0.0;
    }
    if (bVar10) {
      iVar18 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
      if (iVar18 != 0) {
        local_84 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
        if (local_84 < 0x42) {
          if (local_84 < 0x35) {
            if (local_84 < 0x32) {
              if ((local_84 == 0x31) &&
                 (iVar18 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                                     (g_CEditorToolsPtr,"Load Keyframed model",
                                      "models","*.kfm",local_408,0), iVar18 != 0)) {
                core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0(this_ptr,local_408);
                bVar2 = true;
              }
            }
            else if (local_84 < 0x33) {
              if (this_ptr->frame_count < 1) {
                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                          (g_CEditorToolsPtr,"Nothing to save!");
              }
              else if (((bVar2) ||
                       (iVar18 = shape_edittool_cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0049f060
                                           (g_CEditorToolsPtr,"You haven't crammed this model.  Save anyway?"),
                       iVar18 != 0)) &&
                      (iVar18 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                                          (g_CEditorToolsPtr,"Save Keyframed model",
                                           "models","kfm",this_ptr->model_filename
                                           ,1), iVar18 != 0)) {
                core_dmodel_cpp_CKeyFramedModel_export_FUN_00478e10
                          (this_ptr,this_ptr->model_filename);
                bVar2 = true;
              }
            }
            else if (local_84 < 0x34) {
              strcpy(local_408,"models\\");
              iVar18 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                                 (g_CEditorToolsPtr,"Import Keyframed model","*.s3d"
                                  ,local_408,1);
              if (iVar18 != 0) {
                core_dmodel_cpp_CKeyFramedModel_importFromS3D_FUN_00479330(this_ptr,local_408);
                bVar2 = false;
                splitpath
                          (local_408,(char *)0x0,(char *)0x0,this_ptr->model_filename,(char *)0x0);
                strcat(this_ptr->model_filename,".kfm");
              }
            }
            else {
              iVar18 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                                 (g_CEditorToolsPtr,"Get model and textures from network",
                                  "*.kfm","t:\\",1);
              if (iVar18 != 0) {
                splitpath
                          ("t:\\",local_18,local_998,local_698,local_b98);
                makepath
                          (found_file_info.found_path,(char *)0x0,"models",local_698,local_b98);
                iVar18 = engine_dosio_cpp_findFile_FUN_00481760(&found_file_info);
                if ((iVar18 == 0) || (found_file_info.is_archive == 0)) {
                  iVar18 = core_dmodel_cpp_copyFile_FUN_0047c930("t:\\",found_file_info.found_path,1);
                  if (iVar18 != 0) {
                    makepath
                              (local_408,(char *)0x0,(char *)0x0,local_698,local_b98);
                    iVar18 = 0;
                    core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0(this_ptr,local_408);
                    bVar2 = true;
                    if (0 < this_ptr->texture_count) {
                      pcVar10 = this_ptr->texture_list[0].textures[0].texture_name;
                      do {
                        iVar12 = core_dmodel_cpp_copyTextureFiles_FUN_0047ca50
                                           (pcVar10,local_18,local_998,(char *)0x0,"art");
                        if (iVar12 == 0) {
                          core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(this_ptr);
                          break;
                        }
                        iVar18 = iVar18 + 1;
                        pcVar10 = pcVar10 + 0x48;
                      } while (iVar18 < this_ptr->texture_count);
                    }
                  }
                }
                else {
                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                            (g_CEditorToolsPtr,"%s is in mounted pod %s",
                             found_file_info.found_path,found_file_info.target_path);
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
                  iVar18 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                                     (g_CEditorToolsPtr,"Enter network model filename (*.KFM)",
                                      "t:\\",200,1);
                  if (iVar18 == 0) goto LAB_0047d6c7;
                  splitpath
                            ("t:\\",local_14,local_a98,local_798,local_898);
                  if (local_898[0] != '\0') break;
                  makepath
                            ("t:\\",local_14,local_a98,local_798,"kfm");
                }
                core_dmodel_cpp_CKeyFramedModel_export_FUN_00478e10(this_ptr,"t:\\");
                iVar18 = 0;
                if (0 < this_ptr->texture_count) {
                  pcVar19 = this_ptr->texture_list[0].textures[0].texture_name;
                  do {
                    iVar12 = core_dmodel_cpp_copyTextureFiles_FUN_0047ca50
                                       (pcVar19,(char *)0x0,"art",local_14,local_a98);
                    if (iVar12 == 0) break;
                    iVar18 = iVar18 + 1;
                    pcVar19 = pcVar19 + 0x48;
                  } while (iVar18 < this_ptr->texture_count);
                }
              } while (iVar18 < this_ptr->texture_count);
            }
          }
          else if (local_84 < 0x37) {
            if (this_ptr->frame_count < 1) {
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"Nothing to cram!");
            }
            else {
              local_3c = 1;
              iVar18 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                                 (g_CEditorToolsPtr,"Enter number of crams",&local_3c,1,1,4
                                  ,1);
              if (iVar18 != 0) {
                splitpath
                          (this_ptr->model_filename,(char *)0x0,(char *)0x0,local_408,(char *)0x0);
                shape_design_c_initializeTextureManager_FUN_0046a880(1);
                shape_design_c_setTextureQualityParameter_FUN_0046a8e0(0x40);
                iVar18 = shape_design_c_calculateTextureQualityLevel_FUN_0046a930(local_3c);
                local_408[iVar18] = '\0';
                while (iVar12 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                                          (g_CEditorToolsPtr,"Enter base name for cram",
                                           local_408,iVar18 + 1,1), iVar12 != 0) {
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
              iVar18 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                                 (g_CEditorToolsPtr,"Enter vertex tolerance",&local_34,1,
                                  0.0,2.0,1);
              if (iVar18 != 0) {
                local_30[0] = 4.0;
                iVar18 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                                   (g_CEditorToolsPtr,"Enter angle tolerance (degrees)",local_30,1
                                    ,0.0,90.0,1);
                if (iVar18 != 0) {
                  core_dmodel_cpp_CKeyFramedModel_reducePolygons_FUN_0047aa00
                            (this_ptr,local_34,
                             local_30[0] * (float)3.1415926535000001 * (float)0.0055555555555555497);
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
              iVar18 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                                 (g_CEditorToolsPtr,"Enter S3D filename",local_c9c,0x104,0)
              ;
              if (iVar18 != 0) {
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
            iVar18 = (int)ROUND(ROUND(local_70));
            local_160 = this_ptr->frame_bounds[iVar18].min.x;
            local_164 = this_ptr->frame_bounds[iVar18].min.y;
            local_168 = this_ptr->frame_bounds[iVar18].min.z;
            local_16c = this_ptr->frame_bounds[iVar18].max.x;
            local_170 = this_ptr->frame_bounds[iVar18].max.y;
            local_174 = this_ptr->frame_bounds[iVar18].max.z;
            local_15c.x = (local_160 + local_16c) * 0.5f;
            local_15c.y = (local_164 + local_170) * 0.5f;
            local_15c.z = (local_168 + local_174) * 0.5f;
            _sprintf(local_598,"Current dimensions on frame %d\nX: (%6.2f ... %6.2f), center = %g\nY: (%6.2f ... %6.2f), center = %g\nZ: (%6.2f ... %6.2f), center = %g\n\nEnter x,y,z bias amount\n",
                     (int)ROUND(ROUND(local_70)),
                     (double)local_160,(double)local_16c,(double)local_15c.x,
                     (double)local_164,(double)local_170,(double)local_15c.y,
                     (double)local_168,(double)local_174,(double)local_15c.z);
            iVar18 = shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_004a0300
                               (g_CEditorToolsPtr,local_598,&local_138,0);
            if (iVar18 != 0) {
              core_dmodel_cpp_CKeyFramedModel_applyBias_FUN_0047c370(this_ptr,&local_138);
            }
          }
        }
        else if (local_84 < 0x49) {
          if (local_84 < 0x44) {
            iVar18 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                               (g_CEditorToolsPtr,"Reorient using course","data",
                                "*.pth",local_340,0);
            if (iVar18 != 0) {
              core_course_cpp_CCourse_ctor_FUN_004424c0(&local_f0);
              core_course_cpp_CCourse_load_FUN_00442580(&local_f0,local_340);
              core_course_cpp_CCourse_evaluate_FUN_00442710(&local_f0,0.0,&local_fc,&local_9c);
              core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
                        (&local_214,&local_fc,&local_9c);
              for (iVar12 = 0; iVar12 < this_ptr->vertex_count; iVar12 = iVar12 + 1) {
                fVar3 = (float)0.00390625;
                local_108.x = (float)this_ptr->vertex_list[iVar12].x * fVar3;
                local_108.y = (float)this_ptr->vertex_list[iVar12].y * fVar3;
                local_108.z = (float)this_ptr->vertex_list[iVar12].z * fVar3;
                pCVar17 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                    (&local_15c,&local_108,&local_214);
                if (&local_108 != pCVar17) {
                  local_108 = *pCVar17;
                }
                fVar5 = (float)256;
                this_ptr->vertex_list[iVar12].x = (int)ROUND(ROUND(local_108.x * fVar5));
                this_ptr->vertex_list[iVar12].y = (int)ROUND(ROUND(local_108.y * fVar5));
                this_ptr->vertex_list[iVar12].z = (int)ROUND(ROUND(fVar5 * local_108.z));
              }
              core_course_cpp_CCourse_dtor_FUN_004424e0(&local_f0,0);
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
            if (this_ptr->collision_triangle_list == (CDemonTriangle *)0x0) {
              shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                        (g_CEditorToolsPtr,"Building exact collision list");
              core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830(this_ptr);
            }
            else {
              g_CurrentDebugLine = 0xdca;
              g_CurrentDebugFilename = "..\\core\\dmodel.cpp";
              shape_memdbg_cpp_free_FUN_005fe659((char *)this_ptr->collision_triangle_list - 4);
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
              core_dmodel_cpp_CKeyFramedModel_applyVertexBias_FUN_0047c2d0
                        (this_ptr,(int)ROUND(ROUND(local_70)));
            }
          }
        }
        else if (local_84 < 0x4a) {
          if (this_ptr->frame_count < 1) {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Nothing to bias!");
          }
          else {
            bVar8 = !bVar8;
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
                core_dmodel_cpp_CKeyFramedModel_recenter_FUN_0047c220
                          (this_ptr,(int)ROUND(ROUND(local_70)));
              }
            }
            else if (this_ptr->frame_count < 1) {
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"Nothing to scale!");
            }
            else {
              iVar18 = (int)ROUND(ROUND(local_70));
              local_160 = this_ptr->frame_bounds[iVar18].min.x;
              local_164 = this_ptr->frame_bounds[iVar18].min.y;
              local_168 = this_ptr->frame_bounds[iVar18].min.z;
              local_16c = this_ptr->frame_bounds[iVar18].max.x;
              local_170 = this_ptr->frame_bounds[iVar18].max.y;
              local_174 = this_ptr->frame_bounds[iVar18].max.z;
              local_15c.x = local_16c - local_160;
              local_15c.y = local_170 - local_164;
              local_15c.z = local_174 - local_168;
              _sprintf(local_4d0,"Current dimensions on frame %d\nX: (%6.2f ... %6.2f), size = %g\nY: (%6.2f ... %6.2f), size = %g\nZ: (%6.2f ... %6.2f), size = %g\n\nEnter uniform scale factor, or x,y,z scale factor\n",
                       (int)ROUND(ROUND(local_70)),
                       (double)local_160,(double)local_16c,(double)local_15c.x,
                       (double)local_164,(double)local_170,(double)local_15c.y,
                       (double)local_168,(double)local_174,(double)local_15c.z);
              memcpy(local_278,g_ModelLastScaleInput,100);
              while (iVar18 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                                        (g_CEditorToolsPtr,local_4d0,local_278,100,1), iVar18 != 0)
              {
                iVar18 = sscanf(local_278,"%f,%f,%f",&local_12c.x,&local_12c.y,&local_12c.z);
                if (iVar18 == 3) {
                  core_dmodel_cpp_CKeyFramedModel_scale_FUN_0047c4d0(this_ptr,&local_12c);
                  break;
                }
                if (iVar18 == 1) {
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
            bVar7 = !bVar7;
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
    else {
      wincore_winrun_cpp_processWindowMessages_FUN_005f35e0();
      wincore_winrun_cpp_clearKeypresses_FUN_005f2e70();
      wincore_winrun_cpp_processWindowMessages_FUN_005f35e0();
      wincore_winrun_cpp_clearKeypresses_FUN_005f2e70();
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
  iVar18 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                     (g_CEditorToolsPtr,"Enter crams output size",&local_38,1,0x40,0x100,1)
  ;
  if (iVar18 == 0) goto LAB_0047d6c7;
  if (((local_38 == 0x40) || (local_38 == 0x100)) || (local_38 == 0x80)) {
    bVar2 = true;
    core_dmodel_cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0
              (this_ptr,local_408,local_3c,local_38);
    goto LAB_0047d6c7;
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Cram size must be 64, 128, or 256");
  goto LAB_0047dc33;
}
