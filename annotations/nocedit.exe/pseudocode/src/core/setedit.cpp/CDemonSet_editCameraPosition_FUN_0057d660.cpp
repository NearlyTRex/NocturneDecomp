// Name: core_setedit.cpp_CDemonSet_editCameraPosition_FUN_0057d660
// Address: 0057d660
// Address Range: [[0057d660, 0057e425]]
// Convention: __cdecl
// Signature: int __cdecl core_setedit_cpp_CDemonSet_editCameraPosition_FUN_0057d660(CDemonSet *this_ptr,int camera_index)

#include "nocturne.h"

int __cdecl core_setedit_cpp_CDemonSet_editCameraPosition_FUN_0057d660(CDemonSet *this_ptr,int camera_index)

{
  int *piVar1;
  char cVar2;
  CSlew *pCVar3;
  CVector3f *pCVar4;
  _FILE *p_Var5;
  float fVar6;
  uint uVar7;
  CKeyFramedModel *ptr;
  float *euler_angles;
  uint uVar8;
  int unaff_EBX;
  int iVar9;
  uint *puVar10;
  char *unaff_ESI;
  char *pcVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  int y;
  CKeyFramedModel *unaff_EDI;
  char *pcVar15;
  int iVar16;
  bool bVar17;
  void *unaff_retaddr;
  uint auStack_d80 [261];
  uint auStack_96c [254];
  CPickList CStack_574;
  char acStack_f0 [92];
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  float fStack_64;
  float local_60;
  float local_5c;
  float fStack_58;
  float local_54;
  float fStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  uint local_40;
  uint local_3c;
  uint uStack_38;
  C3DSCamera *pCStack_34;
  int *piStack_30;
  uint uStack_2c;
  uint local_28;
  void *pvStack_24;
  _FILE *p_Stack_20;
  void *pvStack_1c;
  byte *pbStack_18;
  
  pcVar15 = CStack_574.cancel_button.button_text + 0xa8;
  local_60 = 0.0;
  local_40 = 0;
  local_5c = 0.0;
  local_3c = 0;
  pcVar11 = this_ptr->geometry_filename;
  local_54 = 0.0;
  do {
    cVar2 = *pcVar11;
    *pcVar15 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar11[1];
    pcVar11 = pcVar11 + 2;
    pcVar15[1] = cVar2;
    pcVar15 = pcVar15 + 2;
  } while (cVar2 != '\0');
  pcVar15 = CStack_574.cancel_button.button_text + 0xa8;
  do {
    pcVar11 = pcVar15;
    if (*pcVar15 == '.') goto LAB_0057d6df;
    if (*pcVar15 == '\0') break;
    pcVar11 = pcVar15 + 1;
    if (*pcVar11 == '.') goto LAB_0057d6df;
    pcVar15 = pcVar15 + 2;
  } while (*pcVar11 != '\0');
  pcVar11 = (char *)0x0;
LAB_0057d6df:
  if (pcVar11 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0xc3b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't find .GEO");
  }
  _sprintf(pcVar11,".KFM");
  local_28 = 0;
  core_slew_cpp_CSlew_init_FUN_005a2060(g_CSlewPtr);
  pCVar3 = g_CSlewPtr;
  pCVar4 = &this_ptr->cameras[camera_index].position;
  if (g_CSlewPtr != (CSlew *)pCVar4) {
    (g_CSlewPtr->position).x = pCVar4->x;
    (pCVar3->position).y = this_ptr->cameras[camera_index].position.y;
    (pCVar3->position).z = this_ptr->cameras[camera_index].position.z;
  }
  pCVar3 = g_CSlewPtr;
  pCVar4 = &this_ptr->cameras[camera_index].orientation;
  if ((CVector3f *)&g_CSlewPtr->pitch != pCVar4) {
    g_CSlewPtr->pitch = pCVar4->x;
    pCVar3->yaw = this_ptr->cameras[camera_index].orientation.y;
    pCVar3->roll = this_ptr->cameras[camera_index].orientation.z;
  }
  g_CSlewPtr->slew_rate = this_ptr->cameras[camera_index].projection_scale;
  pvStack_24 = (void *)0x0;
  _sprintf(acStack_f0,"%s.raw",this_ptr->cameras + camera_index);
  p_Var5 = engine_dosio_c_getFile_FUN_00481a50("backdrop",acStack_f0,"rb");
  p_Stack_20 = p_Var5;
  if (p_Var5 != (_FILE *)0x0) {
    pvStack_24 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                           (0x4b000,"..\\core\\setedit.cpp",0xc64);
    if (pvStack_24 != (void *)0x0) {
      _fread(pvStack_24,0x280,0x1e0,p_Var5);
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Stack_20,"..\\core\\setedit.cpp",0xc68);
    _sprintf(acStack_f0,"%s.act",this_ptr->cameras + camera_index);
    p_Stack_20 = engine_dosio_c_getFile_FUN_00481a50("backdrop",acStack_f0,"rb");
    if (p_Stack_20 != (_FILE *)0x0) {
      iVar16 = 0;
      do {
        p_Var5 = p_Stack_20;
        fVar6 = (float)_fgetc(p_Stack_20);
        fStack_50 = fVar6;
        iStack_4c = _fgetc(p_Var5);
        iStack_48 = iStack_4c;
        uVar7 = _fgetc(p_Var5);
        if (g_BitsPerPixel == 0x20) {
          uStack_38 = (int)fVar6 << (g_RedBitPosition.bytes[0] & 0x1f);
          uVar12 = iStack_48 << (g_GreenBitPosition.bytes[0] & 0x1f) | uStack_38;
          uVar8 = uVar7 << (g_BlueBitPosition.bytes[0] & 0x1f);
        }
        else {
          uVar12 = iStack_48 << 8 | (int)fVar6 << 0x10;
          uVar8 = uVar7;
        }
        *(uint *)((int)auStack_d80 + iVar16) = uVar12 | uVar8;
        iVar9 = iVar16 + 4;
        *(int *)(&stack0xffffee80 + iVar16) = (int)uVar7 / 3 + (int)fStack_50 + iStack_4c;
        iVar16 = iVar9;
      } while (iVar9 != 0x400);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Stack_20,"..\\core\\setedit.cpp",0xc73);
    }
  }
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
  pvStack_1c = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                         (g_WindowWidth * g_WindowHeight,"..\\core\\setedit.cpp",0xc81);
  if (pvStack_1c == (void *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0xc82;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  fStack_58 = 0.0;
  pbStack_18 = (byte *)0x0;
  core_dcamera_cpp_CDemonCamera_init_FUN_0044c190(&g_CDemonCameraInstance,0x1e0);
  piStack_30 = &this_ptr->cameras[camera_index + -1].enabled;
  pCStack_34 = this_ptr->cameras;
  do {
    (*g_CKeysPtr->vtable->clearKeyPresses)(g_CKeysPtr);
    bVar17 = uStack_38 == 0;
    uStack_38 = (uint)bVar17;
    if ((p_Stack_20 == (_FILE *)0x0) ||
       (((fStack_58 == 0.0 || (bVar17 == 0)) &&
        (iVar16 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_O), iVar16 == 0)))) {
      fStack_94 = (g_CSlewPtr->position).x;
      fStack_90 = (g_CSlewPtr->position).y;
      fStack_8c = (g_CSlewPtr->position).z;
      fStack_88 = g_CSlewPtr->pitch;
      fStack_84 = g_CSlewPtr->yaw;
      fStack_80 = g_CSlewPtr->roll;
      fStack_7c = g_CSlewPtr->slew_rate;
      core_slew_cpp_CSlew_processInput_FUN_005a20b0(g_CSlewPtr);
      if (g_CSlewPtr != (CSlew *)&g_CDemonCameraInstance.base.position) {
        g_CDemonCameraInstance.base.position.f.x = (g_CSlewPtr->position).x;
        g_CDemonCameraInstance.base.position.f.z = (g_CSlewPtr->position).z;
        g_CDemonCameraInstance.base.position.f.y = (g_CSlewPtr->position).y;
      }
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                (&g_CDemonCameraInstance.base.rotation_matrix,(CVector3f *)&g_CSlewPtr->pitch);
      g_CDemonCameraInstance.base.focal_length = g_CSlewPtr->slew_rate;
      core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,0);
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                (g_CDemonRendererPtr2,&g_ZeroVector.f);
      if (iStack_4c == 0) {
        g_CDemonRaytraceInstance.rendering_mode = 1;
      }
      else {
        g_CDemonRaytraceInstance.rendering_mode = 4;
      }
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(this_ptr,9999.9,0);
      core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
      iVar16 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_SPACE);
      pCVar3 = g_CSlewPtr;
      if (iVar16 != 0) {
        pCVar4 = &this_ptr->cameras[camera_index].position;
        if ((CSlew *)pCVar4 != g_CSlewPtr) {
          pCVar4->x = (g_CSlewPtr->position).x;
          this_ptr->cameras[camera_index].position.y = (pCVar3->position).y;
          this_ptr->cameras[camera_index].position.z = (pCVar3->position).z;
        }
        pCVar3 = g_CSlewPtr;
        pCVar4 = &this_ptr->cameras[camera_index].orientation;
        if (pCVar4 != (CVector3f *)&g_CSlewPtr->pitch) {
          pCVar4->x = g_CSlewPtr->pitch;
          this_ptr->cameras[camera_index].orientation.y = pCVar3->yaw;
          this_ptr->cameras[camera_index].orientation.z = pCVar3->roll;
        }
        euler_angles = &g_CSlewPtr->pitch;
        this_ptr->cameras[camera_index].projection_scale = g_CSlewPtr->slew_rate;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  (&this_ptr->cameras[camera_index].rotation_matrix,(CVector3f *)euler_angles);
        uStack_70 = 0x43fa0000;
        uStack_6c = 0x43fa0000;
        uStack_68 = 0x43fa0000;
        fStack_58 = this_ptr->cameras[camera_index].position.x + -500.0f;
        local_54 = this_ptr->cameras[camera_index].position.y + -500.0f;
        pCVar4 = &this_ptr->cameras[camera_index].box_min;
        fStack_50 = -500.0f + this_ptr->cameras[camera_index].position.z;
        if (pCVar4 != (CVector3f *)&fStack_58) {
          pCVar4->x = fStack_58;
          this_ptr->cameras[camera_index].box_min.y = local_54;
          this_ptr->cameras[camera_index].box_min.z = fStack_50;
        }
        fStack_64 = this_ptr->cameras[camera_index].position.x + 500.0;
        local_60 = this_ptr->cameras[camera_index].position.y + 500.0;
        pCVar4 = &this_ptr->cameras[camera_index].box_max;
        local_5c = this_ptr->cameras[camera_index].position.z + 500.0;
        if (pCVar4 != (CVector3f *)&fStack_64) {
          pCVar4->x = fStack_64;
          this_ptr->cameras[camera_index].box_max.y = local_60;
          this_ptr->cameras[camera_index].box_max.z = local_5c;
        }
        core_setedit_cpp_CDemonSet_renderCameraBackdrop_FUN_0057d340
                  (this_ptr,this_ptr->cameras + camera_index);
        iStack_4c = 1;
LAB_0057db4e:
        g_CurrentDebugFilename = "..\\core\\setedit.cpp";
        g_CurrentDebugLine = 0xd78;
        shape_memdbg_cpp_free_FUN_005fe659(unaff_retaddr);
        core_slew_cpp_CSlew_free_FUN_005a20a0();
        g_CurrentDebugLine = 0xd80;
        g_CurrentDebugFilename = "..\\core\\setedit.cpp";
        if (unaff_EDI != (CKeyFramedModel *)0x0) {
          ptr = core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00476d90(unaff_EDI,0);
          shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
        }
        engine_2d_c_clearInputAndWait_FUN_00403260();
        engine_2d_c_setupViewportAndClipping_FUN_00401800
                  (0,0,g_WindowWidth + -1,g_WindowHeight + -1);
        if (unaff_ESI != (char *)0x0) {
          shape_memdbg_cpp_debugFree_FUN_0050f460(unaff_ESI,"..\\core\\setedit.cpp",0xd8c);
          return iStack_44;
        }
        return iStack_44;
      }
      if (((((fStack_8c != (g_CSlewPtr->position).x) || (fStack_88 != (g_CSlewPtr->position).y)) ||
           ((fStack_84 != (g_CSlewPtr->position).z ||
            ((fStack_80 != g_CSlewPtr->pitch || (fStack_7c != g_CSlewPtr->yaw)))))) ||
          (fStack_78 != g_CSlewPtr->roll)) || (fStack_74 != g_CSlewPtr->slew_rate)) {
        unaff_EBX = 0;
      }
      if (iStack_44 != 0) {
        if (unaff_EBX == 0) {
          core_setedit_cpp_CDemonSet_buildCameraCoverageMap_FUN_0057fd00
                    (this_ptr,unaff_ESI,camera_index);
          unaff_EBX = 1;
        }
        core_setedit_cpp_CDemonSet_drawCameraCoverageMap_FUN_0057ff70(this_ptr,unaff_ESI);
        iVar16 = core_setedit_cpp_CDemonSet_findVisibleCamerasAtScreenPoint_FUN_005800d0
                           (this_ptr,g_MouseX,g_MouseY,(int *)auStack_96c,camera_index);
        if (0 < iVar16) {
          y = 0x21;
          iVar9 = 0;
          do {
            piVar1 = (int *)((int)auStack_96c + iVar9);
            iVar9 = iVar9 + 4;
            engine_2d_c_drawTextXY_FUN_00402130(0,y,(char *)(p_Stack_20 + *piVar1 * 0xf));
            y = y + 0xb;
          } while (iVar9 < iVar16 * 4);
        }
        shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,0);
      }
      engine_2d_c_drawText_FUN_00401fd0("Move camera with slew keys.  Press SPACE when done.  ESC to cancel",0,0);
      _sprintf(CStack_574.cancel_button.button_text + 0xbc,"%f");
      engine_2d_c_drawText_FUN_00401fd0
                (CStack_574.cancel_button.button_text + 0xbc,0,g_WindowHeight + -0xb);
      if (*(int *)((int)pvStack_1c + 0x144) == 0) {
        _sprintf
                  (CStack_574.cancel_button.button_text + 0xbc,"FIXED CAMERA: x: %f, y: %f, z: %f, p : %f, h : %f, fov : %f",
                   (double)(g_CSlewPtr->position).x,(double)(g_CSlewPtr->position).y,
                   (double)(g_CSlewPtr->position).z,
                   180 * (double)g_CSlewPtr->pitch * 0.31830988619288902);
      }
      else {
        _sprintf
                  (CStack_574.cancel_button.button_text + 0xbc,"PANNING CAMERA: x: %f, y: %f, z: %f",
                   (double)(g_CSlewPtr->position).x);
      }
      engine_2d_c_drawText_FUN_00401fd0(CStack_574.cancel_button.button_text + 0xbc,0,0xb);
    }
    else {
      if ((g_WindowWidth != 0x280) || (g_WindowHeight != 0x1e0)) {
        g_CurrentFilename = "..\\core\\setedit.cpp";
        g_CurrentLineNumber = 0xc92;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Screen must be 640x480!");
      }
      p_Stack_20 = (_FILE *)0x0;
      pbVar13 = pbStack_18;
      do {
        uVar7 = 0;
        iVar16 = 0;
        puVar10 = (uint *)p_Stack_20[0x19b185]._handle;
        pbVar14 = pbVar13;
        do {
          pbVar13 = pbVar14 + 1;
          if (iStack_48 == 0) {
            *puVar10 = auStack_96c[*pbVar14 - 0x102];
          }
          else {
            uStack_38 = *(uint *)(&stack0xffffee8c + (uint)*pbVar14 * 4);
            uVar7 = (int)(uStack_38 - uVar7) / 2 + 0x80;
            if ((int)uVar7 < 0) {
              uVar7 = 0;
            }
            else if (0xff < (int)uVar7) {
              uVar7 = 0xff;
            }
            if (g_BitsPerPixel == 0x20) {
              uStack_2c = uVar7 << (g_RedBitPosition.bytes[0] & 0x1f);
              uVar8 = uStack_2c | uVar7 << (g_GreenBitPosition.bytes[0] & 0x1f);
              uVar7 = uVar7 << (g_BlueBitPosition.bytes[0] & 0x1f);
            }
            else {
              uVar8 = uVar7 << 0x10 | uVar7 << 8;
            }
            *puVar10 = uVar8 | uVar7;
            uVar7 = uStack_38;
          }
          puVar10 = puVar10 + 1;
          iVar16 = iVar16 + 1;
          pbVar14 = pbVar13;
        } while (iVar16 < 0x280);
        p_Stack_20 = (_FILE *)&p_Stack_20->_cnt;
      } while (p_Stack_20 != (_FILE *)0x780);
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDT_FUN_004d7d90(g_CGamePtr);
    iVar16 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (iVar16 != 0) goto LAB_0057db4e;
    iVar16 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F1);
    if (iVar16 != 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_574);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&CStack_574.base,"W\tToggle full screen mode");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_574.base,"S\tToggle strobe mode")
      ;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&CStack_574.base,"O\tHold to show original background");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&CStack_574.base,"F\tEnter fov value manually");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&CStack_574.base,"D\tToggle original background 'difference' mode");
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                (&CStack_574,"Camera editor hot keys",-1,0);
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&CStack_574,0);
    }
    while (iVar16 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00(), iVar16 != 0) {
      uVar7 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
      if (uVar7 < 0x46) {
        if (0x42 < uVar7) {
          if (uVar7 < 0x44) {
            pCStack_34 = (C3DSCamera *)(uint)(pCStack_34 == (C3DSCamera *)0x0);
          }
          else if (uVar7 == 0x44) {
            piStack_30 = (int *)(uint)(piStack_30 == (int *)0x0);
          }
        }
      }
      else if (uVar7 < 0x47) {
        if (*(int *)unaff_EDI->texture_list[0].textures[1].texture_name == 0) {
          shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                    (g_CEditorToolsPtr,"Enter FOV",&g_CSlewPtr->slew_rate,0,0.0,0.0,1);
        }
        else {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Can't set FOV on panning camera");
        }
      }
      else if (0x52 < uVar7) {
        if (uVar7 < 0x54) {
          uStack_38 = (uint)(uStack_38 == 0);
        }
        else if (uVar7 == 0x57) {
          pvStack_1c = (void *)(uint)(pvStack_1c == (void *)0x0);
          if (pvStack_1c == (void *)0x0) {
            iVar16 = 0x1e0;
          }
          else {
            iVar16 = 0xf0;
          }
          core_dcamera_cpp_CDemonCamera_init_FUN_0044c190(&g_CDemonCameraInstance,iVar16);
          wincore_windll_cpp_clearScreen_FUN_005b3e70();
        }
      }
    }
  } while( true );
}
