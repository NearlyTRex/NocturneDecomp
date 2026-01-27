// Name: core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0
// Address: 0047cbc0
// Address Range: [[0047cbc0, 0047cdf1] [0047ce5a, 0047d1bb] [0047d250, 0047e805]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0(CKeyFramedModel * this_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0(CKeyFramedModel *this_ptr)

{
  char cVar1;
  SRenderVertex *pSVar2;
  CVector3i **ppCVar3;
  float fVar4;
  CDemonSet *pCVar5;
  uint uVar6;
  CVector3f *pCVar7;
  int iVar8;
  CKeyFramedModel *pCVar9;
  int iVar10;
  char *pcVar11;
  uint *puVar12;
  int x_pos;
  char *pcVar13;
  CKeyFramedModel *pCVar14;
  byte bVar15;
  double dVar16;
  uint uVar17;
  CGame *in_stack_fffff150;
  int local_ca8;
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
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  CVector3f local_15c;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  CVector3f local_138;
  CVector3f local_12c;
  float local_120;
  float local_11c;
  float local_118;
  CVector3f local_114;
  CVector3f local_108;
  CVector3f local_fc;
  CCourse local_f0;
  float local_e4;
  float local_e0;
  float local_dc;
  CVector3f local_d8;
  int local_cc;
  int local_c8;
  int local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  CVector3f local_b4;
  float local_a8;
  float local_a4;
  float local_a0;
  CVector3f local_9c;
  CVector3f local_90;
  uint local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  float local_5c;
  float local_58;
  float local_54;
  int local_50;
  int local_4c;
  float local_48;
  SMRGLTextureExtended *local_44;
  SMRGLTextureExtended *local_40;
  int local_3c;
  int local_38;
  float local_34;
  float local_30 [4];
  int local_20;
  CKeyFramedModelInstance *local_1c;
  char local_18 [4];
  char local_14 [4];
  
  bVar15 = 0;
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
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_fffff150);
  local_6c = 0;
  local_68 = 0;
  local_64 = (uint)(0 < this_ptr->poly_count);
  local_60 = 0;
  wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0
            (g_CGamePtr->game_pixx,g_CGamePtr->game_pixy,0x20);
  local_44 = this_ptr->texture_list;
  local_40 = local_44;
  do {
    engine_2d_c_fillRectColor_FUN_00403170(0,0,g_WindowWidth + -1,g_WindowHeight + -1,0xf8);
    pCVar5 = g_CDemonSetPtr;
    g_CDemonSetPtr->rendering_mode = 1;
    (pCVar5->light_direction).x = -0x4844;
    (pCVar5->light_direction).y = -0x4844;
    (pCVar5->light_direction).z = 0x4844;
    pCVar5->ambient_base_quick = 32000;
    wincore_windll_cpp_clearZBuffer_FUN_005b3ed4();
    iVar8 = g_WindowWidth / 2 + -0x28;
    if (this_ptr->frame_count < 1) {
      engine_2d_c_drawText_FUN_00401fd0("(No model)",iVar8,g_WindowHeight / 2);
    }
    else if (local_64 == 0) {
      engine_2d_c_drawText_FUN_00401fd0("(Model not crammed)",iVar8,g_WindowHeight / 2);
    }
    else {
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_1e4,&local_d8);
      local_90.z = -local_7c;
      local_90.x = local_78;
      local_90.y = local_74;
      local_1c = (CKeyFramedModelInstance *)local_90.z;
      pCVar7 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         (&local_1e4,&local_b4,&local_90);
      if (&local_90 != pCVar7) {
        local_90.x = pCVar7->x;
        local_90.y = pCVar7->y;
        local_90.z = pCVar7->z;
      }
      engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
                (g_CDemonRendererPtr2,(CVector3i *)&local_90);
      engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0(g_CDemonRendererPtr2);
      engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
                (g_CDemonRendererPtr2,local_80);
      local_114.x = 0.0;
      local_114.y = 0.0;
      local_114.z = 0.0;
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                (g_CDemonRendererPtr1,&local_114);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr1,(CVector3i *)&local_114,(CVector3i *)0x0);
      uVar17 = 0xffffffff;
      iVar8 = 0x47cdcc;
      dVar16 = crt_math_c_round_FUN_005fe6b0((double)local_70);
      local_1c = (CKeyFramedModelInstance *)(int)ROUND(dVar16);
      core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850(this_ptr,local_1c,0,iVar8);
      uVar6 = local_68;
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
      if ((uVar6 != 0) && (iVar8 = 0, 0 < this_ptr->vertex_count)) {
        iVar10 = 0;
        do {
          pSVar2 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          if ((*(byte *)((int)&(pSVar2->projected_vertex).screen_x + iVar10 + 3) & 0x80) == 0) {
            local_4c = *(int *)((int)&(pSVar2->projected_vertex).screen_y + iVar10) >> 0x10;
            x_pos = *(int *)((int)&(pSVar2->projected_vertex).screen_x + iVar10) >> 0x10;
            if (-1 < x_pos) {
              crt_stdio_c_sprintf_FUN_005fdbd0(local_2dc,"%d",iVar8,uVar17);
              engine_2d_c_drawText_FUN_00401fd0(local_2dc,x_pos,local_4c);
            }
          }
          iVar8 = iVar8 + 1;
          iVar10 = iVar10 + 0x30;
        } while (iVar8 < this_ptr->vertex_count);
      }
      if (local_6c != 0) {
        shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(g_CEditorToolsPtr,4.0,3);
      }
      if (local_60 == 0) {
        iVar8 = this_ptr->frame_count;
        uVar17 = 0x47d215;
        dVar16 = crt_math_c_round_FUN_005fe6b0((double)local_70);
        local_1c = (CKeyFramedModelInstance *)(int)ROUND(dVar16);
        crt_stdio_c_sprintf_FUN_005fdbd0(local_408,"Frame: %d of %d",local_1c,iVar8,uVar17);
        engine_2d_c_drawText_FUN_00401fd0(local_408,0,g_WindowHeight + -0x37);
      }
    }
    if (local_60 == 0) {
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
      uVar6 = local_6c;
      engine_2d_c_drawText_FUN_00401fd0("B.  Bias model using manual value",0,0xbb);
      if (uVar6 == 0) {
        pcVar13 = "INACTIVE";
      }
      else {
        pcVar13 = "ACTIVE";
      }
      crt_stdio_c_sprintf_FUN_005fdbd0(local_408,"I.  Interactive bias is now %s",pcVar13);
      engine_2d_c_drawText_FUN_00401fd0(local_408,0,0xc6);
      engine_2d_c_drawText_FUN_00401fd0("S.  Scale",0,0xd1);
      engine_2d_c_drawText_FUN_00401fd0("X.  Reorient model",0,0xe7);
      engine_2d_c_drawText_FUN_00401fd0("C.  Reorient to put model on course",0,0xf2);
      engine_2d_c_drawText_FUN_00401fd0("F1. Hide menu",0,0x108);
      engine_2d_c_drawText_FUN_00401fd0("D.  Demented(TM) Shape Editor",0,0x11e);
      engine_2d_c_drawText_FUN_00401fd0("Model options:",0,0x134);
      if (this_ptr->collision_triangle_list == (CDemonTriangle *)0x0) {
        pcVar13 = "DISABLED";
      }
      else {
        pcVar13 = "ENABLED";
      }
      crt_stdio_c_sprintf_FUN_005fdbd0(local_408,"E.  Exact collision (currently %s)",pcVar13);
      engine_2d_c_drawText_FUN_00401fd0(local_408,0,0x13f);
      if (this_ptr->transparent_pixel_flag == 0) {
        pcVar13 = "DISABLED";
      }
      else {
        pcVar13 = "ENABLED";
      }
      crt_stdio_c_sprintf_FUN_005fdbd0(local_408,"T.  Transparent pixel (currently %s)",pcVar13);
      engine_2d_c_drawText_FUN_00401fd0(local_408,0,0x14a);
      crt_stdio_c_sprintf_FUN_005fdbd0(local_408,"Vertex count: %d",this_ptr->vertex_count);
      engine_2d_c_drawText_FUN_00401fd0(local_408,0,g_WindowHeight + -0x2c);
      crt_stdio_c_sprintf_FUN_005fdbd0(local_408,"Poly count: %d",this_ptr->poly_count);
      engine_2d_c_drawText_FUN_00401fd0(local_408,0,g_WindowHeight + -0x21);
      crt_stdio_c_sprintf_FUN_005fdbd0(local_408,"Frame count: %d",this_ptr->frame_count);
      engine_2d_c_drawText_FUN_00401fd0(local_408,0,g_WindowHeight + -0x16);
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    local_5c = g_CGamePtr->delta_time_float;
    local_48 = local_5c;
    iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
    if (iVar8 != 0) {
      local_5c = local_48 * 0.1f;
    }
    iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
    if (iVar8 != 0) {
      local_5c = local_5c * 3.0f;
    }
    local_58 = local_5c * (float)3.1415926535000001;
    local_54 = local_5c * 10.0f;
    local_50 = 1;
    iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x52);
    if (iVar8 != 0) {
      local_d8.y = local_d8.y + local_58;
      local_50 = 0;
    }
    iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x53);
    if (iVar8 != 0) {
      local_d8.y = local_d8.y - local_58;
      local_50 = 0;
    }
    iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4a);
    if (iVar8 != 0) {
      local_d8.x = local_d8.x + local_58;
      local_50 = 0;
    }
    iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4e);
    if (iVar8 != 0) {
      local_d8.x = local_d8.x - local_58;
      local_50 = 0;
    }
    if (local_d8.x < (float)-1.57079632675) {
      local_d8.x = -1.5707964;
    }
    if ((float)1.57079632675 < local_d8.x) {
      local_d8.x = 1.5707964;
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xd);
    if (iVar8 != 0) {
      local_80 = local_80 + 1.0;
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xc);
    if (iVar8 != 0) {
      local_80 = local_80 + -1.0f;
    }
    if ((float)40 < local_80) {
      local_80 = 40.0;
    }
    if (local_80 < 1.0) {
      local_80 = 1.0;
    }
    if (local_6c == 0) {
      iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
      if (iVar8 != 0) {
        local_7c = local_7c - local_54;
        local_50 = 0;
      }
      iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
      if (iVar8 != 0) {
        local_7c = local_7c + local_54;
        local_50 = 0;
      }
      iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
      if (iVar8 != 0) {
        local_78 = local_78 - local_54;
        local_50 = 0;
      }
      iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
      if (iVar8 != 0) {
        local_78 = local_78 + local_54;
        local_50 = 0;
      }
      iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
      if (iVar8 != 0) {
        local_74 = local_74 - local_54;
        local_50 = 0;
      }
      iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
      if (iVar8 != 0) {
        local_74 = local_74 + local_54;
        local_50 = 0;
      }
      iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4c);
      if (iVar8 != 0) {
        local_78 = 0.0;
        local_50 = 0;
        local_74 = 0.0;
      }
    }
    else {
      local_18c = 0.0;
      local_188 = 0.0;
      local_184 = 0.0;
      iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
      if (iVar8 != 0) {
        local_184 = local_184 - local_54;
        local_50 = 0;
      }
      iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
      if (iVar8 != 0) {
        local_184 = local_184 + local_54;
        local_50 = 0;
      }
      iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
      if (iVar8 != 0) {
        local_18c = local_18c - local_54;
        local_50 = 0;
      }
      iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
      if (iVar8 != 0) {
        local_18c = local_18c + local_54;
        local_50 = 0;
      }
      iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
      if (iVar8 != 0) {
        local_188 = local_188 - local_54;
        local_50 = 0;
      }
      iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
      if (iVar8 != 0) {
        local_188 = local_188 + local_54;
        local_50 = 0;
      }
      local_cc = (int)ROUND(local_18c * 256.0f);
      local_c8 = (int)ROUND(local_188 * 256.0f);
      local_c4 = (int)ROUND(local_184 * 256.0f);
      if ((local_cc != 0 || local_c8 != 0) || local_c4 != 0) {
        iVar8 = 0;
        for (iVar10 = 0; iVar10 < this_ptr->vertex_count * this_ptr->frame_count;
            iVar10 = iVar10 + 1) {
          ppCVar3 = this_ptr->vertex_list;
          *(int *)(iVar8 + (int)ppCVar3) = *(int *)(iVar8 + (int)ppCVar3) + local_cc;
          *(int *)(iVar8 + 4 + (int)ppCVar3) = *(int *)(iVar8 + 4 + (int)ppCVar3) + local_c8;
          *(int *)(iVar8 + 8 + (int)ppCVar3) = *(int *)(iVar8 + 8 + (int)ppCVar3) + local_c4;
          iVar8 = iVar8 + 0xc;
        }
        core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(this_ptr);
      }
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3e);
    if (iVar8 != 0) {
      g_KeyFrameModelPoolEnd = (CKeyFramedModel *)(g_KeyFrameModelPoolEnd->model_filename + 1);
      crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_02c14c88,"noc%d.pcx");
      engine_pcx_c_saveScreenshotGeneral_FUN_005490c0(&DAT_02c14c88);
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4c);
    if (iVar8 != 0) {
      local_d8.y = 0.0;
      local_d8.x = 0.0;
      local_7c = 15.0;
      local_d8.z = 0.0;
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3b);
    if (iVar8 != 0) {
      local_60 = (uint)(local_60 == 0);
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x34);
    if (iVar8 != 0) {
      local_70 = local_70 + 1.0;
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x33);
    if (iVar8 != 0) {
      local_70 = local_70 + -1.0f;
    }
    local_1c = (CKeyFramedModelInstance *)this_ptr->frame_count;
    if (local_70 < (float)(int)local_1c) {
      if (local_70 < 0.0) {
        local_1c = (CKeyFramedModelInstance *)((int)&local_1c[-1].model_ptr + 3);
        local_70 = (float)(int)local_1c;
      }
    }
    else {
      local_70 = 0.0;
    }
    if (local_50 == 0) {
      wincore_winrun_cpp_processWindowMessages_FUN_005f35e0();
      wincore_winrun_cpp_clearKeypresses_FUN_005f2e70();
      wincore_winrun_cpp_processWindowMessages_FUN_005f35e0();
      wincore_winrun_cpp_clearKeypresses_FUN_005f2e70();
    }
    else {
      iVar8 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
      if (iVar8 != 0) {
        local_84 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
        if (local_84 < 0x42) {
          if (local_84 < 0x35) {
            if (local_84 < 0x32) {
              if ((local_84 == 0x31) &&
                 (iVar8 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                                    (g_CEditorToolsPtr,"Load Keyframed model",
                                     "models","*.kfm",(int)local_408), iVar8 != 0))
              {
                core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0(this_ptr,local_408);
                local_64 = 1;
              }
            }
            else if (local_84 < 0x33) {
              if (this_ptr->frame_count < 1) {
                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                          (g_CEditorToolsPtr,"Nothing to save!");
              }
              else if (((local_64 != 0) ||
                       (iVar8 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                                          (g_CEditorToolsPtr,"You haven't crammed this model.  Save anyway?"),
                       iVar8 != 0)) &&
                      (iVar8 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                                         (g_CEditorToolsPtr,"Save Keyframed model",
                                          "models",0x620967,(int)this_ptr), iVar8 != 0)) {
                core_dmodel_cpp_CKeyFramedModel_export_FUN_00478e10
                          (this_ptr,this_ptr->model_filename);
                local_64 = 1;
              }
            }
            else if (local_84 < 0x34) {
              pcVar11 = "models\\";
              pcVar13 = local_408;
              do {
                cVar1 = *pcVar11;
                *pcVar13 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar11[1];
                pcVar11 = pcVar11 + 2;
                pcVar13[1] = cVar1;
                pcVar13 = pcVar13 + 2;
              } while (cVar1 != '\0');
              iVar8 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                                (g_CEditorToolsPtr,"Import Keyframed model",0x6209a0,
                                 local_408);
              if (iVar8 != 0) {
                core_dmodel_cpp_CKeyFramedModel_importFromS3D_FUN_00479330(this_ptr,local_408);
                local_64 = 0;
                crt_string_c_splitpath_FUN_005ff178
                          (local_408,(char *)0x0,(char *)0x0,this_ptr->model_filename,(char *)0x0);
                pcVar13 = ".kfm";
                iVar8 = -1;
                pCVar9 = this_ptr;
                do {
                  pCVar14 = pCVar9;
                  if (iVar8 == 0) break;
                  iVar8 = iVar8 + -1;
                  pCVar14 = (CKeyFramedModel *)((int)pCVar9 + (uint)bVar15 * -2 + 1);
                  pcVar11 = pCVar9->model_filename;
                  pCVar9 = pCVar14;
                } while (*pcVar11 != '\0');
                pcVar11 = (char *)((int)&pCVar14[-1].padding + 3);
                do {
                  cVar1 = *pcVar13;
                  *pcVar11 = cVar1;
                  if (cVar1 == '\0') break;
                  cVar1 = pcVar13[1];
                  pcVar13 = pcVar13 + 2;
                  pcVar11[1] = cVar1;
                  pcVar11 = pcVar11 + 2;
                } while (cVar1 != '\0');
              }
            }
            else {
              iVar8 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                                (g_CEditorToolsPtr,"Get model and textures from network",0x6209c2,
                                 "t:\\");
              if (iVar8 != 0) {
                crt_string_c_splitpath_FUN_005ff178
                          ("t:\\",local_18,local_998,local_698,local_b98);
                crt_file_c_makepath_FUN_005febfc
                          (&stack0xfffff150,(char *)0x0,"models",local_698,local_b98);
                iVar8 = engine_dosio_c_findFile_FUN_00481760((SFoundFileInfo *)&stack0xfffff150);
                if ((iVar8 == 0) || (local_ca8 == 0)) {
                  iVar8 = core_dmodel_cpp_copyFile_FUN_0047c930("t:\\",&stack0xfffff150,1);
                  if (iVar8 != 0) {
                    crt_file_c_makepath_FUN_005febfc
                              (local_408,(char *)0x0,(char *)0x0,local_698,local_b98);
                    iVar8 = 0;
                    core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0(this_ptr,local_408);
                    local_64 = 1;
                    if (0 < this_ptr->texture_count) {
                      pCVar9 = (CKeyFramedModel *)(local_44->base).texture_name;
                      do {
                        iVar10 = core_dmodel_cpp_CKeyFramedModel_copyTextureFiles_FUN_0047ca50
                                           (pCVar9,local_18,local_998,(char *)0x0,"art");
                        if (iVar10 == 0) {
                          core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(this_ptr);
                          break;
                        }
                        iVar8 = iVar8 + 1;
                        pCVar9 = (CKeyFramedModel *)(pCVar9->model_filename + 0x48);
                      } while (iVar8 < this_ptr->texture_count);
                    }
                  }
                }
                else {
                  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                            (g_CEditorToolsPtr,"%s is in mounted pod %s");
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
                  iVar8 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                                    (g_CEditorToolsPtr,"Enter network model filename (*.KFM)",
                                     "t:\\",200,1);
                  if (iVar8 == 0) goto LAB_0047d6c7;
                  crt_string_c_splitpath_FUN_005ff178
                            ("t:\\",local_14,local_a98,local_798,local_898);
                  if (local_898[0] != '\0') break;
                  crt_file_c_makepath_FUN_005febfc
                            ("t:\\",local_14,local_a98,local_798,"kfm");
                }
                core_dmodel_cpp_CKeyFramedModel_export_FUN_00478e10(this_ptr,"t:\\");
                iVar8 = 0;
                if (0 < this_ptr->texture_count) {
                  pCVar9 = (CKeyFramedModel *)(local_40->base).texture_name;
                  do {
                    iVar10 = core_dmodel_cpp_CKeyFramedModel_copyTextureFiles_FUN_0047ca50
                                       (pCVar9,(char *)0x0,"art",local_14,local_a98);
                    if (iVar10 == 0) break;
                    iVar8 = iVar8 + 1;
                    pCVar9 = (CKeyFramedModel *)(pCVar9->model_filename + 0x48);
                  } while (iVar8 < this_ptr->texture_count);
                }
              } while (iVar8 < this_ptr->texture_count);
            }
          }
          else if (local_84 < 0x37) {
            if (this_ptr->frame_count < 1) {
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"Nothing to cram!");
            }
            else {
              local_3c = 1;
              iVar8 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                                (g_CEditorToolsPtr,"Enter number of crams",&local_3c,1,1,4,
                                 1);
              if (iVar8 != 0) {
                crt_string_c_splitpath_FUN_005ff178
                          (this_ptr->model_filename,(char *)0x0,(char *)0x0,local_408,(char *)0x0);
                shape_design_c_initializeTextureManager_FUN_0046a880(1);
                shape_design_c_setTextureQualityParameter_FUN_0046a8e0(0x40);
                iVar8 = shape_design_c_calculateTextureQualityLevel_FUN_0046a930(local_3c);
                local_408[iVar8] = '\0';
                while (iVar10 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                                          (g_CEditorToolsPtr,"Enter base name for cram",
                                           local_408,iVar8 + 1,1), iVar10 != 0) {
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
              iVar8 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                                (g_CEditorToolsPtr,"Enter vertex tolerance",&local_34,1,0.0
                                 ,2.0,1);
              if (iVar8 != 0) {
                local_30[0] = 4.0;
                iVar8 = shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                                  (g_CEditorToolsPtr,"Enter angle tolerance (degrees)",local_30,1,
                                   0.0,90.0,1);
                if (iVar8 != 0) {
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
              iVar8 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                                (g_CEditorToolsPtr,"Enter S3D filename",local_c9c,0x104,0);
              if (iVar8 != 0) {
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
            dVar16 = crt_math_c_round_FUN_005fe6b0((double)local_70);
            local_1c = (CKeyFramedModelInstance *)(int)ROUND(dVar16);
            pCVar7 = this_ptr->frame_bounds + (int)local_1c * 2;
            local_1a4 = pCVar7->x;
            local_1a0 = pCVar7->y;
            local_19c = pCVar7->z;
            local_198 = pCVar7[1].x;
            local_194 = pCVar7[1].y;
            local_190 = pCVar7[1].z;
            local_30[1] = 0.5;
            local_180 = local_1a4 + local_198;
            local_17c = local_1a0 + local_194;
            local_178 = local_19c + local_190;
            local_c0 = local_180 * 0.5;
            local_bc = local_17c * 0.5;
            local_b8 = local_178 * 0.5;
            local_30[2] = 0.5;
            local_150 = local_1a4 + local_198;
            local_14c = local_1a0 + local_194;
            local_148 = local_19c + local_190;
            local_e4 = local_150 * 0.5;
            local_e0 = local_14c * 0.5;
            local_dc = local_148 * 0.5;
            local_30[3] = 0.5;
            local_a8 = local_1a4 + local_198;
            local_a4 = local_1a0 + local_194;
            local_a0 = local_19c + local_190;
            local_144 = local_a8 * 0.5;
            local_140 = local_a4 * 0.5;
            fVar4 = local_a0 * 0.5;
            dVar16 = crt_math_c_round_FUN_005fe6b0((double)local_70);
            local_1c = (CKeyFramedModelInstance *)(int)ROUND(dVar16);
            local_13c = fVar4;
            crt_stdio_c_sprintf_FUN_005fdbd0(local_598,"Current dimensions on frame %d\nX: (%6.2f ... %6.2f), center = %g\nY: (%6.2f ... %6.2f), center = %g\nZ: (%6.2f ... %6.2f), center = %g\n\nEnter x,y,z bias amount\n");
            iVar8 = shape_edittool_cpp_CEditorTools_promptForValidVector_FUN_004a0300
                              (g_CEditorToolsPtr,local_598,&local_138,0);
            if (iVar8 != 0) {
              core_dmodel_cpp_CKeyFramedModel_applyBias_FUN_0047c370(this_ptr,&local_138);
            }
          }
        }
        else if (local_84 < 0x49) {
          if (local_84 < 0x44) {
            iVar8 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                              (g_CEditorToolsPtr,"Reorient using course","data",
                               "*.pth",(int)local_340);
            if (iVar8 != 0) {
              core_course_cpp_CCourse_ctor_FUN_004424c0(&local_f0);
              core_course_cpp_CCourse_load_FUN_00442580(&local_f0,local_340);
              core_course_cpp_CCourse_FUN_00442710(&local_f0);
              core_xform_cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
                        (&local_214,&local_fc,&local_9c);
              iVar8 = 0;
              for (iVar10 = 0; iVar10 < this_ptr->vertex_count; iVar10 = iVar10 + 1) {
                local_108.z = (float)0.00390625;
                local_108.x = (float)*(int *)(iVar8 + (int)this_ptr->vertex_list) * local_108.z;
                local_108.y = (float)*(int *)(iVar8 + 4 + (int)this_ptr->vertex_list) * local_108.z;
                local_108.z = (float)*(int *)(iVar8 + 8 + (int)this_ptr->vertex_list) * local_108.z;
                pCVar7 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                                   (&local_15c,&local_108,&local_214);
                if (&local_108 != pCVar7) {
                  local_108.x = pCVar7->x;
                  local_108.y = pCVar7->y;
                  local_108.z = pCVar7->z;
                }
                fVar4 = (float)256;
                ppCVar3 = this_ptr->vertex_list;
                dVar16 = crt_math_c_round_FUN_005fe6b0((double)(local_108.x * fVar4));
                local_1c = (CKeyFramedModelInstance *)(int)ROUND(dVar16);
                *(CKeyFramedModelInstance **)(iVar8 + (int)ppCVar3) = local_1c;
                ppCVar3 = this_ptr->vertex_list;
                dVar16 = crt_math_c_round_FUN_005fe6b0((double)(local_108.y * fVar4));
                local_1c = (CKeyFramedModelInstance *)(int)ROUND(dVar16);
                *(CKeyFramedModelInstance **)((int)ppCVar3 + iVar8 + 4) = local_1c;
                ppCVar3 = this_ptr->vertex_list;
                dVar16 = crt_math_c_round_FUN_005fe6b0((double)(fVar4 * local_108.z));
                local_1c = (CKeyFramedModelInstance *)(int)ROUND(dVar16);
                *(CKeyFramedModelInstance **)(iVar8 + 8 + (int)ppCVar3) = local_1c;
                iVar8 = iVar8 + 0xc;
              }
              core_course_cpp_CCourse_dtor_FUN_004424e0(&local_f0);
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
              crt_memory_c_free_FUN_005fe659(&this_ptr->collision_triangle_list[-1].area);
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
              dVar16 = crt_math_c_round_FUN_005fe6b0((double)local_70);
              local_1c = (CKeyFramedModelInstance *)(int)ROUND(dVar16);
              core_dmodel_cpp_CKeyFramedModel_applyVertexBias_FUN_0047c2d0(this_ptr,(int)local_1c);
            }
          }
        }
        else if (local_84 < 0x4a) {
          if (this_ptr->frame_count < 1) {
            shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                      (g_CEditorToolsPtr,"Nothing to bias!");
          }
          else {
            local_6c = (uint)(local_6c == 0);
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
                dVar16 = crt_math_c_round_FUN_005fe6b0((double)local_70);
                local_1c = (CKeyFramedModelInstance *)(int)ROUND(dVar16);
                core_dmodel_cpp_CKeyFramedModel_recenter_FUN_0047c220(this_ptr,(int)local_1c);
              }
            }
            else if (this_ptr->frame_count < 1) {
              shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                        (g_CEditorToolsPtr,"Nothing to scale!");
            }
            else {
              dVar16 = crt_math_c_round_FUN_005fe6b0((double)local_70);
              local_20 = (int)ROUND(dVar16);
              pCVar7 = this_ptr->frame_bounds + local_20 * 2;
              local_1bc = pCVar7->x;
              local_1b8 = pCVar7->y;
              local_1b4 = pCVar7->z;
              local_1b0 = pCVar7[1].x;
              local_1ac = pCVar7[1].y;
              local_174 = local_1b0 - local_1bc;
              local_1a8 = pCVar7[1].z;
              local_170 = local_1ac - local_1b8;
              local_16c = local_1a8 - local_1b4;
              local_168 = local_174;
              local_164 = local_170;
              local_160 = local_16c;
              local_120 = local_174;
              local_11c = local_170;
              local_118 = local_16c;
              crt_stdio_c_sprintf_FUN_005fdbd0(local_4d0,"Current dimensions on frame %d\nX: (%6.2f ... %6.2f), size = %g\nY: (%6.2f ... %6.2f), size = %g\nZ: (%6.2f ... %6.2f), size = %g\n\nEnter uniform scale factor, or x,y,z scale factor\n");
              puVar12 = &DAT_00670210;
              pcVar13 = local_278;
              for (iVar8 = 0x19; iVar8 != 0; iVar8 = iVar8 + -1) {
                *(uint *)pcVar13 = *puVar12;
                puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
                pcVar13 = pcVar13 + ((uint)bVar15 * -2 + 1) * 4;
              }
              while (iVar8 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                                       (g_CEditorToolsPtr,local_4d0,local_278,100,1), iVar8 != 0) {
                iVar8 = crt_stdio_c_sscanf_FUN_0060013c(local_278,"%f,%f,%f");
                if (iVar8 == 3) {
                  core_dmodel_cpp_CKeyFramedModel_scale_FUN_0047c4d0(this_ptr,&local_12c);
                  break;
                }
                if (iVar8 == 1) {
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
            local_68 = (uint)(local_68 == 0);
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
  iVar8 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                    (g_CEditorToolsPtr,"Enter crams output size",&local_38,1,0x40,0x100,1);
  if (iVar8 == 0) goto LAB_0047d6c7;
  if (((local_38 == 0x40) || (local_38 == 0x100)) || (local_38 == 0x80)) {
    local_64 = 1;
    core_dmodel_cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0
              (this_ptr,local_408,local_3c,local_38);
    goto LAB_0047d6c7;
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Cram size must be 64, 128, or 256");
  goto LAB_0047dc33;
}
