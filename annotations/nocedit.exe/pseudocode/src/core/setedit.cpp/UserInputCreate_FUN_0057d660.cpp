// Name: core_setedit.cpp_UserInputCreate_FUN_0057d660
// Address: 0057d660
// Address Range: [[0057d660, 0057e425]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_UserInputCreate_FUN_0057d660()

#include "nocturne.h"

uint core_setedit_cpp_UserInputCreate_FUN_0057d660(void)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  FILE *pFVar4;
  int iVar5;
  uint uVar6;
  CKeyFramedModel *ptr;
  CVector3f *pCVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  char *pcVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  int y_pos;
  char *pcVar15;
  bool bVar16;
  CDemonSet *in_stack_00000004;
  int in_stack_00000008;
  CGame *in_stack_ffffee84;
  uint in_stack_ffffee88;
  uint in_stack_ffffee8c;
  uint in_stack_ffffee90;
  uint in_stack_ffffee94;
  uint auStack_d7c [256];
  int aiStack_97c [250];
  CPickList CStack_594;
  char acStack_1ec [256];
  char acStack_ec [80];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  uint local_5c;
  uint uStack_58;
  uint local_54;
  uint uStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  C3DSCamera *pCStack_30;
  int *piStack_2c;
  int local_28;
  CKeyFramedModel *pCStack_24;
  byte *pbStack_20;
  FILE *pFStack_1c;
  void *pvStack_18;
  int iStack_14;
  
  pcVar15 = acStack_1ec;
  local_5c = 0;
  local_3c = 0;
  uStack_58 = 0;
  uStack_38 = 0;
  pcVar11 = in_stack_00000004->geometry_filename;
  uStack_50 = 0;
  do {
    cVar2 = *pcVar11;
    *pcVar15 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar11[1];
    pcVar11 = pcVar11 + 2;
    pcVar15[1] = cVar2;
    pcVar15 = pcVar15 + 2;
  } while (cVar2 != '\0');
  pcVar15 = acStack_1ec;
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
  crt_stdio_c_sprintf_FUN_005fdbd0(pcVar11,".KFM");
  pCStack_24 = (CKeyFramedModel *)0x0;
  core_slew_cpp_CSlew_init_FUN_005a2060(PTR_DAT_00681ab8);
  pvVar3 = PTR_DAT_00681ab8;
  pCVar7 = &in_stack_00000004->cameras[in_stack_00000008].position;
  if (PTR_DAT_00681ab8 != pCVar7) {
    *(float *)PTR_DAT_00681ab8 = pCVar7->x;
    *(float *)((int)pvVar3 + 4) = in_stack_00000004->cameras[in_stack_00000008].position.y;
    *(float *)((int)pvVar3 + 8) = in_stack_00000004->cameras[in_stack_00000008].position.z;
  }
  pvVar3 = PTR_DAT_00681ab8;
  pCVar7 = &in_stack_00000004->cameras[in_stack_00000008].orientation;
  if ((CVector3f *)((int)PTR_DAT_00681ab8 + 0xc) != pCVar7) {
    *(float *)((int)PTR_DAT_00681ab8 + 0xc) = pCVar7->x;
    *(float *)((int)pvVar3 + 0x10) = in_stack_00000004->cameras[in_stack_00000008].orientation.y;
    *(float *)((int)pvVar3 + 0x14) = in_stack_00000004->cameras[in_stack_00000008].orientation.z;
  }
  *(float *)((int)PTR_DAT_00681ab8 + 0x18) =
       in_stack_00000004->cameras[in_stack_00000008].projection_scale;
  pbStack_20 = (byte *)0x0;
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_ec,"%s.raw");
  pFVar4 = engine_dosio_c_getFile_FUN_00481a50("backdrop",acStack_ec,"rb");
  pFStack_1c = pFVar4;
  if (pFVar4 != (FILE *)0x0) {
    pbStack_20 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                           (0x4b000,"..\\core\\setedit.cpp",0xc64);
    if (pbStack_20 != (byte *)0x0) {
      crt_stdio_c_fread_FUN_005fd990(pbStack_20,0x280,0x1e0,pFVar4);
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFStack_1c,"..\\core\\setedit.cpp",0xc68);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_ec,"%s.act");
    pFStack_1c = engine_dosio_c_getFile_FUN_00481a50("backdrop",acStack_ec,"rb");
    if (pFStack_1c != (FILE *)0x0) {
      iVar8 = 0;
      do {
        pFVar4 = pFStack_1c;
        iVar5 = crt_stdio_c_fgetc_FUN_005fe840(pFStack_1c);
        iStack_4c = iVar5;
        iStack_48 = crt_stdio_c_fgetc_FUN_005fe840(pFVar4);
        iStack_44 = iStack_48;
        uVar6 = crt_stdio_c_fgetc_FUN_005fe840(pFVar4);
        if (g_BitsPerPixel == 0x20) {
          uStack_34 = iVar5 << ((byte)g_RedBitPosition & 0x1f);
          uVar12 = iStack_44 << ((byte)g_GreenBitPosition & 0x1f) | uStack_34;
          uVar9 = uVar6 << ((byte)g_BlueBitPosition & 0x1f);
        }
        else {
          uVar12 = iStack_44 << 8 | iVar5 << 0x10;
          uVar9 = uVar6;
        }
        *(uint *)((int)auStack_d7c + iVar8) = uVar12 | uVar9;
        iVar5 = iVar8 + 4;
        *(int *)(&stack0xffffee84 + iVar8) = (int)uVar6 / 3 + iStack_4c + iStack_48;
        iVar8 = iVar5;
      } while (iVar5 != 0x400);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFStack_1c,"..\\core\\setedit.cpp",0xc73);
    }
  }
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_ffffee84);
  pvStack_18 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                         (g_WindowWidth * g_WindowHeight,"..\\core\\setedit.cpp",0xc81);
  if (pvStack_18 == (void *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0xc82;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  local_54 = 0;
  iStack_14 = 0;
  core_dcamera_cpp_CDemonCamera_init_FUN_0044c190(&g_CDemonCameraInstance,0x1e0);
  piStack_2c = &in_stack_00000004->cameras[in_stack_00000008 + -1].field17_0x1a0;
  pCStack_30 = in_stack_00000004->cameras;
  do {
    (*g_CKeysPtr->vtable->clearKeyPresses)(g_CKeysPtr);
    bVar16 = uStack_38 == 0;
    uStack_38 = (uint)bVar16;
    if ((pbStack_20 == (byte *)0x0) ||
       (((uStack_58 == 0 || (bVar16 == 0)) &&
        (iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x18), iVar8 == 0)))) {
      fStack_9c = *(float *)PTR_DAT_00681ab8;
      fStack_98 = *(float *)((int)PTR_DAT_00681ab8 + 4);
      fStack_94 = *(float *)((int)PTR_DAT_00681ab8 + 8);
      fStack_90 = *(float *)((int)PTR_DAT_00681ab8 + 0xc);
      fStack_8c = *(float *)((int)PTR_DAT_00681ab8 + 0x10);
      fStack_88 = *(float *)((int)PTR_DAT_00681ab8 + 0x14);
      fStack_84 = *(float *)((int)PTR_DAT_00681ab8 + 0x18);
      core_slew_cpp_CSlew_processInput_FUN_005a20b0(PTR_DAT_00681ab8);
      if (PTR_DAT_00681ab8 != &g_CDemonCameraInstance.base.position) {
        g_CDemonCameraInstance.base.position.x = *(int *)PTR_DAT_00681ab8;
        g_CDemonCameraInstance.base.position.z = *(int *)((int)PTR_DAT_00681ab8 + 8);
        g_CDemonCameraInstance.base.position.y = *(int *)((int)PTR_DAT_00681ab8 + 4);
      }
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                ((CMatrix3x3f *)&g_CDemonCameraInstance.base.rotation_matrix,
                 (CVector3f *)((int)PTR_DAT_00681ab8 + 0xc));
      g_CDemonCameraInstance.base.projection_scale = *(float *)((int)PTR_DAT_00681ab8 + 0x18);
      core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,0);
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                (g_CDemonRendererPtr,&g_ZeroVector);
      if (local_54 == 0) {
        g_CDemonRaytraceInstance.rendering_mode = 1;
      }
      else {
        g_CDemonRaytraceInstance.rendering_mode = 4;
      }
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(in_stack_00000004,9999.9,0);
      core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
      iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x39);
      pvVar3 = PTR_DAT_00681ab8;
      if (iVar8 != 0) {
        pCVar7 = &in_stack_00000004->cameras[in_stack_00000008].position;
        if (pCVar7 != PTR_DAT_00681ab8) {
          pCVar7->x = *(float *)PTR_DAT_00681ab8;
          in_stack_00000004->cameras[in_stack_00000008].position.y = *(float *)((int)pvVar3 + 4);
          in_stack_00000004->cameras[in_stack_00000008].position.z = *(float *)((int)pvVar3 + 8);
        }
        pvVar3 = PTR_DAT_00681ab8;
        pCVar7 = &in_stack_00000004->cameras[in_stack_00000008].orientation;
        if (pCVar7 != (CVector3f *)((int)PTR_DAT_00681ab8 + 0xc)) {
          pCVar7->x = *(float *)((int)PTR_DAT_00681ab8 + 0xc);
          in_stack_00000004->cameras[in_stack_00000008].orientation.y =
               *(float *)((int)pvVar3 + 0x10);
          in_stack_00000004->cameras[in_stack_00000008].orientation.z =
               *(float *)((int)pvVar3 + 0x14);
        }
        pCVar7 = (CVector3f *)((int)PTR_DAT_00681ab8 + 0xc);
        in_stack_00000004->cameras[in_stack_00000008].projection_scale =
             *(float *)((int)PTR_DAT_00681ab8 + 0x18);
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  (&in_stack_00000004->cameras[in_stack_00000008].rotation_matrix,pCVar7);
        uStack_80 = 0x43fa0000;
        uStack_7c = 0x43fa0000;
        uStack_78 = 0x43fa0000;
        fStack_68 = in_stack_00000004->cameras[in_stack_00000008].position.x + -500f;
        fStack_64 = in_stack_00000004->cameras[in_stack_00000008].position.y + -500f;
        pCVar7 = &in_stack_00000004->cameras[in_stack_00000008].box_min;
        local_60 = -500f + in_stack_00000004->cameras[in_stack_00000008].position.z;
        if (pCVar7 != (CVector3f *)&fStack_68) {
          pCVar7->x = fStack_68;
          in_stack_00000004->cameras[in_stack_00000008].box_min.y = fStack_64;
          in_stack_00000004->cameras[in_stack_00000008].box_min.z = local_60;
        }
        fStack_74 = in_stack_00000004->cameras[in_stack_00000008].position.x + 500.0;
        fStack_70 = in_stack_00000004->cameras[in_stack_00000008].position.y + 500.0;
        pCVar7 = &in_stack_00000004->cameras[in_stack_00000008].box_max;
        fStack_6c = in_stack_00000004->cameras[in_stack_00000008].position.z + 500.0;
        if (pCVar7 != (CVector3f *)&fStack_74) {
          pCVar7->x = fStack_74;
          in_stack_00000004->cameras[in_stack_00000008].box_max.y = fStack_70;
          in_stack_00000004->cameras[in_stack_00000008].box_max.z = fStack_6c;
        }
        core_setedit_cpp_FUN_0057d340();
        local_5c = 1;
LAB_0057db4e:
        g_CurrentDebugFilename = "..\\core\\setedit.cpp";
        g_CurrentDebugLine = 0xd78;
        crt_memory_c_free_FUN_005fe659(pvStack_18);
        core_slew_cpp_CSlew_free_FUN_005a20a0();
        g_CurrentDebugLine = 0xd80;
        g_CurrentDebugFilename = "..\\core\\setedit.cpp";
        if (pCStack_24 != (CKeyFramedModel *)0x0) {
          ptr = core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00476d90(pCStack_24);
          shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
        }
        engine_2d_c_clearInputAndWait_FUN_00403260();
        engine_2d_c_setupViewportAndClipping_FUN_00401800
                  (0,0,g_WindowWidth + -1,g_WindowHeight + -1);
        if (pbStack_20 != (byte *)0x0) {
          shape_memdbg_cpp_debugFree_FUN_0050f460(pbStack_20,"..\\core\\setedit.cpp",0xd8c);
          return local_5c;
        }
        return local_5c;
      }
      if (((((fStack_9c != *(float *)PTR_DAT_00681ab8) ||
            (fStack_98 != *(float *)((int)PTR_DAT_00681ab8 + 4))) ||
           ((fStack_94 != *(float *)((int)PTR_DAT_00681ab8 + 8) ||
            ((fStack_90 != *(float *)((int)PTR_DAT_00681ab8 + 0xc) ||
             (fStack_8c != *(float *)((int)PTR_DAT_00681ab8 + 0x10))))))) ||
          (fStack_88 != *(float *)((int)PTR_DAT_00681ab8 + 0x14))) ||
         (fStack_84 != *(float *)((int)PTR_DAT_00681ab8 + 0x18))) {
        iStack_14 = 0;
      }
      if (local_54 != 0) {
        if (iStack_14 == 0) {
          core_setedit_cpp_Something2MemoryConstructorMaybe_FUN_0057fd00();
          iStack_14 = 1;
        }
        core_setedit_cpp_CDemonSet_FUN_0057ff70(in_stack_00000004);
        iVar8 = core_setedit_cpp_CDemonSet_FUN_005800d0(in_stack_00000004);
        if (0 < iVar8) {
          y_pos = 0x21;
          iVar5 = 0;
          do {
            piVar1 = (int *)((int)aiStack_97c + iVar5);
            iVar5 = iVar5 + 4;
            engine_2d_c_drawTextXY_FUN_00402130(0,y_pos,pCStack_30[*piVar1].name);
            y_pos = y_pos + 0xb;
          } while (iVar5 < iVar8 * 4);
        }
        shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,false);
      }
      engine_2d_c_drawText_FUN_00401fd0("Move camera with slew keys.  Press SPACE when done.  ESC to cancel",0,0);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_1ec,"%f",(double)(1.0 / g_CGamePtr->delta_time_float));
      engine_2d_c_drawText_FUN_00401fd0(acStack_1ec,0,g_WindowHeight + -0xb);
      if (piStack_2c[0x51] == 0) {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_1ec,"FIXED CAMERA: x: %f, y: %f, z: %f, p : %f, h : %f, fov : %f",
                   (double)*(float *)PTR_DAT_00681ab8,(double)*(float *)((int)PTR_DAT_00681ab8 + 4),
                   (double)*(float *)((int)PTR_DAT_00681ab8 + 8),
                   180 *
                   (double)*(float *)((int)PTR_DAT_00681ab8 + 0xc) * 0.31830988619288902,
                   (double)*(float *)((int)PTR_DAT_00681ab8 + 0x10) * 0.31830988619288902 *
                   180,(double)*(float *)((int)PTR_DAT_00681ab8 + 0x18));
      }
      else {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_1ec,"PANNING CAMERA: x: %f, y: %f, z: %f",
                   (double)*(float *)PTR_DAT_00681ab8,(double)*(float *)((int)PTR_DAT_00681ab8 + 4),
                   (double)*(float *)((int)PTR_DAT_00681ab8 + 8));
      }
      engine_2d_c_drawText_FUN_00401fd0(acStack_1ec,0,0xb);
    }
    else {
      if ((g_WindowWidth != 0x280) || (g_WindowHeight != 0x1e0)) {
        g_CurrentFilename = "..\\core\\setedit.cpp";
        g_CurrentLineNumber = 0xc92;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Screen must be 640x480!");
      }
      local_28 = 0;
      pbVar13 = pbStack_20;
      do {
        iVar8 = 0;
        iVar5 = 0;
        puVar10 = *(uint **)((int)g_ScreenBufferArray + local_28);
        pbVar14 = pbVar13;
        do {
          pbVar13 = pbVar14 + 1;
          if (uStack_50 == 0) {
            *puVar10 = auStack_d7c[*pbVar14];
          }
          else {
            local_40 = *(int *)(&stack0xffffee84 + (uint)*pbVar14 * 4);
            uVar6 = (local_40 - iVar8) / 2 + 0x80;
            if ((int)uVar6 < 0) {
              uVar6 = 0;
            }
            else if (0xff < (int)uVar6) {
              uVar6 = 0xff;
            }
            if (g_BitsPerPixel == 0x20) {
              uStack_34 = uVar6 << ((byte)g_RedBitPosition & 0x1f);
              uVar9 = uStack_34 | uVar6 << ((byte)g_GreenBitPosition & 0x1f);
              uVar6 = uVar6 << ((byte)g_BlueBitPosition & 0x1f);
            }
            else {
              uVar9 = uVar6 << 0x10 | uVar6 << 8;
            }
            *puVar10 = uVar9 | uVar6;
            iVar8 = local_40;
          }
          puVar10 = puVar10 + 1;
          iVar5 = iVar5 + 1;
          pbVar14 = pbVar13;
        } while (iVar5 < 0x280);
        local_28 = local_28 + 4;
      } while (local_28 != 0x780);
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if (iVar8 != 0) goto LAB_0057db4e;
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3b);
    if (iVar8 != 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_594);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&CStack_594.base_strlist,"W\tToggle full screen mode");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&CStack_594.base_strlist,"S\tToggle strobe mode");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&CStack_594.base_strlist,"O\tHold to show original background");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&CStack_594.base_strlist,"F\tEnter fov value manually");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&CStack_594.base_strlist,"D\tToggle original background 'difference' mode");
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                (&CStack_594,"Camera editor hot keys",-1,0);
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&CStack_594,0,(uint)in_stack_ffffee84,in_stack_ffffee88,in_stack_ffffee8c,
                 in_stack_ffffee90,in_stack_ffffee94);
    }
    while (iVar8 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00(), iVar8 != 0) {
      uVar6 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
      if (uVar6 < 0x46) {
        if (0x42 < uVar6) {
          if (uVar6 < 0x44) {
            local_54 = (uint)(local_54 == 0);
          }
          else if (uVar6 == 0x44) {
            uStack_50 = (uint)(uStack_50 == 0);
          }
        }
      }
      else if (uVar6 < 0x47) {
        if (piStack_2c[0x51] == 0) {
          shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                    (g_CEditorToolsPtr,"Enter FOV",(float *)((int)PTR_DAT_00681ab8 + 0x18),
                     false,0.0,0.0,true);
        }
        else {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Can't set FOV on panning camera");
        }
      }
      else if (0x52 < uVar6) {
        if (uVar6 < 0x54) {
          uStack_58 = (uint)(uStack_58 == 0);
        }
        else if (uVar6 == 0x57) {
          local_3c = (uint)(local_3c == 0);
          if (local_3c == 0) {
            iVar8 = 0x1e0;
          }
          else {
            iVar8 = 0xf0;
          }
          core_dcamera_cpp_CDemonCamera_init_FUN_0044c190(&g_CDemonCameraInstance,iVar8);
          wincore_windll_cpp_clearScreen_FUN_005b3e70();
          iStack_14 = 0;
        }
      }
    }
  } while( true );
}
