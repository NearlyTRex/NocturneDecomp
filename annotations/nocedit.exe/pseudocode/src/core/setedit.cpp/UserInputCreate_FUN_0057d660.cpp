// Name: core_setedit.cpp_UserInputCreate_FUN_0057d660
// Address: 0057d660
// Address Range: [[0057d660, 0057e425]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_UserInputCreate_FUN_0057d660()

#include "nocturne.h"

int core_setedit_cpp_UserInputCreate_FUN_0057d660(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  FILE *pFVar4;
  FILE *buffer;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  CKeyFramedModel *ptr;
  CVector3f *pCVar8;
  undefined3 extraout_var;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  BADSPACEBASE *in_ESP;
  float unaff_ESI;
  char *pcVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  int y_pos;
  char *pcVar16;
  float unaff_retaddr;
  CDemonSet *in_stack_00000004;
  float in_stack_00000008;
  FILE *in_stack_0000000c;
  uint in_stack_0000001c;
  int in_stack_00000024;
  int in_stack_00000034;
  int in_stack_00000040;
  float in_stack_0000005c;
  float in_stack_00000060;
  float in_stack_00000064;
  float in_stack_00000068;
  float in_stack_0000006c;
  float in_stack_00000070;
  int in_stack_00000078;
  uint in_stack_0000007c;
  int in_stack_00000080;
  uint in_stack_00000084;
  int in_stack_00000090;
  int in_stack_00000094;
  byte *in_stack_00000098;
  CKeyFramedModel *in_stack_000000b8;
  void *in_stack_000000bc;
  uint in_stack_000000c0;
  void *in_stack_000000cc;
  uint in_stack_000000d4;
  int in_stack_000000e4;
  uint in_stack_00000104;
  CGame *in_stack_ffffeeb4;
  int in_stack_ffffeec4;
  uint in_stack_ffffef88;
  CDemonCamera *in_stack_ffffef8c;
  char *in_stack_ffffef90;
  uint in_stack_ffffef94;
  uint in_stack_ffffef98;
  uint auStack_d54 [286];
  uint auStack_8dc [268];
  byte auStack_4ac [20];
  byte auStack_498 [8];
  CPickList CStack_490;
  char acStack_dc [4];
  char acStack_d8 [16];
  char acStack_c8 [4];
  char acStack_c4 [100];
  uint local_60;
  uint local_5c;
  uint local_54;
  uint local_40;
  uint local_3c;
  uint uStack_34;
  uint uStack_30;
  int iStack_2c;
  uint local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  uint uStack_18;
  
  pcVar16 = CStack_490.ok_button.button_text + 0xa8;
  local_60 = 0;
  local_40 = 0;
  local_5c = 0;
  local_3c = 0;
  pcVar12 = in_stack_00000004->geometry_filename;
  local_54 = 0;
  do {
    cVar2 = *pcVar12;
    *pcVar16 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar12[1];
    pcVar12 = pcVar12 + 2;
    pcVar16[1] = cVar2;
    pcVar16 = pcVar16 + 2;
  } while (cVar2 != '\0');
  pcVar16 = CStack_490.ok_button.button_text + 0xa8;
  do {
    pcVar12 = pcVar16;
    if (*pcVar16 == '.') goto LAB_0057d6df;
    if (*pcVar16 == '\0') break;
    pcVar12 = pcVar16 + 1;
    if (*pcVar12 == '.') goto LAB_0057d6df;
    pcVar16 = pcVar16 + 2;
  } while (*pcVar12 != '\0');
  pcVar12 = (char *)0x0;
LAB_0057d6df:
  if (pcVar12 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0xc3b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't find .GEO");
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(pcVar12,".KFM");
  iStack_20 = 0;
  core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)PTR_DAT_00681ab8);
  pvVar7 = PTR_DAT_00681ab8;
  pCVar8 = &in_stack_00000004->cameras[(int)in_stack_00000008].position;
  if ((CVector3f *)PTR_DAT_00681ab8 != pCVar8) {
    *(float *)PTR_DAT_00681ab8 = pCVar8->x;
    *(float *)((int)pvVar7 + 4) = in_stack_00000004->cameras[(int)in_stack_00000008].position.y;
    *(float *)((int)pvVar7 + 8) = in_stack_00000004->cameras[(int)in_stack_00000008].position.z;
  }
  pvVar7 = PTR_DAT_00681ab8;
  pCVar8 = &in_stack_00000004->cameras[(int)in_stack_00000008].orientation;
  if ((CVector3f *)((int)PTR_DAT_00681ab8 + 0xc) != pCVar8) {
    *(float *)((int)PTR_DAT_00681ab8 + 0xc) = pCVar8->x;
    *(float *)((int)pvVar7 + 0x10) =
         in_stack_00000004->cameras[(int)in_stack_00000008].orientation.y;
    *(float *)((int)pvVar7 + 0x14) =
         in_stack_00000004->cameras[(int)in_stack_00000008].orientation.z;
  }
  *(float *)((int)PTR_DAT_00681ab8 + 0x18) =
       in_stack_00000004->cameras[(int)in_stack_00000008].projection_scale;
  crt_stdio_c_sprintf_FUN_005fdbd0
            (acStack_dc,"%s.raw",in_stack_00000004->cameras + (int)in_stack_00000008);
  pFVar4 = engine_dosio_c_getFile_FUN_00481a50("backdrop",acStack_d8,"rb");
  buffer = pFVar4;
  if (pFVar4 != (FILE *)0x0) {
    buffer = (FILE *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                               (0x4b000,"..\\core\\setedit.cpp",0xc64);
    if (buffer != (FILE *)0x0) {
      crt_stdio_c_fread_FUN_005fd990(buffer,0x280,0x1e0,pFVar4);
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0
              ((FILE *)in_stack_00000004,"..\\core\\setedit.cpp",0xc68);
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_c8,"%s.act",in_stack_00000004->cameras + (int)in_stack_00000008);
    pFVar4 = engine_dosio_c_getFile_FUN_00481a50("backdrop",acStack_c4,"rb");
    if (pFVar4 != (FILE *)0x0) {
      iVar9 = 0;
      do {
        iVar5 = crt_stdio_c_fgetc_FUN_005fe840(pFVar4);
        iStack_2c = iVar5;
        iStack_24 = crt_stdio_c_fgetc_FUN_005fe840(pFVar4);
        iStack_20 = iStack_24;
        uVar6 = crt_stdio_c_fgetc_FUN_005fe840(pFVar4);
        if (g_BitsPerPixel == 0x20) {
          uVar13 = iStack_1c << ((byte)g_GreenBitPosition & 0x1f) |
                   iVar5 << ((byte)g_RedBitPosition & 0x1f);
          uVar10 = uVar6 << ((byte)g_BlueBitPosition & 0x1f);
        }
        else {
          uVar13 = iStack_1c << 8 | iVar5 << 0x10;
          uVar10 = uVar6;
        }
        *(uint *)((int)auStack_d54 + iVar9) = uVar13 | uVar10;
        iVar5 = iVar9 + 4;
        *(int *)(&stack0xffffeeac + iVar9) = (int)uVar6 / 3 + iStack_24 + iStack_20;
        iVar9 = iVar5;
      } while (iVar5 != 0x400);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_0000000c,"..\\core\\setedit.cpp",0xc73);
    }
  }
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_ffffeeb4);
  pvVar7 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     (g_WindowWidth * g_WindowHeight,"..\\core\\setedit.cpp",0xc81);
  if (pvVar7 == (void *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0xc82;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  uStack_18 = 0;
  core_dcamera_cpp_CDemonCamera_init_FUN_0044c190(&g_CDemonCameraInstance,0x1e0);
  do {
    (*g_CKeysPtr->vtable[1].isKeyDown)(g_CKeysPtr,in_stack_ffffeec4);
    in_stack_0000001c = (uint)(in_stack_0000001c == 0);
    if ((in_stack_00000034 == 0) ||
       (((buffer == (FILE *)0x0 || (in_stack_0000001c == 0)) &&
        (iVar9 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x18), iVar9 == 0)))) {
                    /* WARNING: Load size is inaccurate */
      uStack_34 = *PTR_DAT_00681ab8;
      uStack_30 = *(uint *)((int)PTR_DAT_00681ab8 + 4);
      iStack_2c = *(int *)((int)PTR_DAT_00681ab8 + 8);
      local_28 = *(uint *)((int)PTR_DAT_00681ab8 + 0xc);
      iStack_24 = *(int *)((int)PTR_DAT_00681ab8 + 0x10);
      iStack_20 = *(int *)((int)PTR_DAT_00681ab8 + 0x14);
      iStack_1c = *(int *)((int)PTR_DAT_00681ab8 + 0x18);
      core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)PTR_DAT_00681ab8);
      if ((CVector3i *)PTR_DAT_00681ab8 != &g_CDemonCameraInstance.base.position) {
                    /* WARNING: Load size is inaccurate */
        g_CDemonCameraInstance.base.position.x = *PTR_DAT_00681ab8;
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
      if (in_stack_00000024 == 0) {
        g_CDemonRaytraceInstance.rendering_mode = 1;
      }
      else {
        g_CDemonRaytraceInstance.rendering_mode = 4;
      }
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(in_stack_00000004,9999.9,0);
      core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
      iVar9 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x39);
      pvVar7 = PTR_DAT_00681ab8;
      if (iVar9 != 0) {
        pCVar8 = &in_stack_00000004->cameras[(int)in_stack_00000008].position;
        if (pCVar8 != (CVector3f *)PTR_DAT_00681ab8) {
                    /* WARNING: Load size is inaccurate */
          pCVar8->x = *PTR_DAT_00681ab8;
          in_stack_00000004->cameras[(int)in_stack_00000008].position.y =
               *(float *)((int)pvVar7 + 4);
          in_stack_00000004->cameras[(int)in_stack_00000008].position.z =
               *(float *)((int)pvVar7 + 8);
        }
        pvVar7 = PTR_DAT_00681ab8;
        pCVar8 = &in_stack_00000004->cameras[(int)in_stack_00000008].orientation;
        if (pCVar8 != (CVector3f *)((int)PTR_DAT_00681ab8 + 0xc)) {
          pCVar8->x = *(float *)((int)PTR_DAT_00681ab8 + 0xc);
          in_stack_00000004->cameras[(int)in_stack_00000008].orientation.y =
               *(float *)((int)pvVar7 + 0x10);
          in_stack_00000004->cameras[(int)in_stack_00000008].orientation.z =
               *(float *)((int)pvVar7 + 0x14);
        }
        pCVar8 = (CVector3f *)((int)PTR_DAT_00681ab8 + 0xc);
        in_stack_00000004->cameras[(int)in_stack_00000008].projection_scale =
             *(float *)((int)PTR_DAT_00681ab8 + 0x18);
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  (&in_stack_00000004->cameras[(int)in_stack_00000008].rotation_matrix,pCVar8);
        in_stack_00000068 =
             in_stack_00000004->cameras[(int)in_stack_00000008].position.x + -500f;
        in_stack_0000006c =
             in_stack_00000004->cameras[(int)in_stack_00000008].position.y + -500f;
        pCVar8 = &in_stack_00000004->cameras[(int)in_stack_00000008].box_min;
        in_stack_00000070 =
             -500f + in_stack_00000004->cameras[(int)in_stack_00000008].position.z;
        if (pCVar8 != (CVector3f *)&stack0x00000068) {
          pCVar8->x = in_stack_00000068;
          in_stack_00000004->cameras[(int)in_stack_00000008].box_min.y = in_stack_0000006c;
          in_stack_00000004->cameras[(int)in_stack_00000008].box_min.z = in_stack_00000070;
        }
        in_stack_0000005c = in_stack_00000004->cameras[(int)in_stack_00000008].position.x + 500.0;
        in_stack_00000060 = in_stack_00000004->cameras[(int)in_stack_00000008].position.y + 500.0;
        pCVar8 = &in_stack_00000004->cameras[(int)in_stack_00000008].box_max;
        in_stack_00000064 = in_stack_00000004->cameras[(int)in_stack_00000008].position.z + 500.0;
        if (pCVar8 != (CVector3f *)&stack0x0000005c) {
          pCVar8->x = in_stack_0000005c;
          in_stack_00000004->cameras[(int)in_stack_00000008].box_max.y = in_stack_00000060;
          in_stack_00000004->cameras[(int)in_stack_00000008].box_max.z = in_stack_00000064;
        }
        core_setedit_cpp_FUN_0057d340();
        in_stack_00000078 = 1;
LAB_0057db4e:
        g_CurrentDebugFilename = "..\\core\\setedit.cpp";
        g_CurrentDebugLine = 0xd78;
        crt_memory_c_free_FUN_005fe659(in_stack_000000bc);
        core_slew_cpp_CSlew_free_FUN_005a20a0();
        g_CurrentDebugLine = 0xd80;
        g_CurrentDebugFilename = "..\\core\\setedit.cpp";
        if (in_stack_000000b8 != (CKeyFramedModel *)0x0) {
          ptr = core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00476d90(in_stack_000000b8);
          shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
        }
        engine_2d_c_clearInputAndWait_FUN_00403260();
        engine_2d_c_setupViewportAndClipping_FUN_00401800
                  (0,0,g_WindowWidth + -1,g_WindowHeight + -1);
        if (in_stack_000000cc != (void *)0x0) {
          shape_memdbg_cpp_debugFree_FUN_0050f460
                    (in_stack_000000cc,"..\\core\\setedit.cpp",0xd8c);
          return in_stack_00000094;
        }
        return in_stack_00000090;
      }
                    /* WARNING: Load size is inaccurate */
      if (((((unaff_ESI != *PTR_DAT_00681ab8) ||
            ((float)buffer != *(float *)((int)PTR_DAT_00681ab8 + 4))) ||
           ((unaff_retaddr != *(float *)((int)PTR_DAT_00681ab8 + 8) ||
            (((float)in_stack_00000004 != *(float *)((int)PTR_DAT_00681ab8 + 0xc) ||
             (in_stack_00000008 != *(float *)((int)PTR_DAT_00681ab8 + 0x10))))))) ||
          ((float)in_stack_0000000c != *(float *)((int)PTR_DAT_00681ab8 + 0x14))) ||
         ((float)in_stack_00000004->cameras != *(float *)((int)PTR_DAT_00681ab8 + 0x18))) {
        in_stack_00000080 = 0;
      }
      if (in_stack_00000040 != 0) {
        if (in_stack_00000080 == 0) {
          core_setedit_cpp_Something2MemoryConstructorMaybe_FUN_0057fd00();
          in_stack_00000084 = 1;
        }
        core_setedit_cpp_CDemonSet_FUN_0057ff70(in_stack_00000004);
        iVar9 = core_setedit_cpp_CDemonSet_FUN_005800d0(in_stack_00000004);
        if (0 < iVar9) {
          y_pos = 0x21;
          iVar5 = 0;
          do {
            piVar1 = (int *)((int)auStack_8dc + iVar5);
            iVar5 = iVar5 + 4;
            engine_2d_c_drawTextXY_FUN_00402130
                      (0,y_pos,(char *)(*piVar1 * 0x1a4 + (int)in_stack_00000070));
            y_pos = y_pos + 0xb;
          } while (SBORROW /* signed borrow */4(iVar5,iVar9 * 4) != iVar5 + iVar9 * -4 < 0);
        }
        shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,false);
      }
      engine_2d_c_drawText_FUN_00401fd0("Move camera with slew keys.  Press SPACE when done.  ESC to cancel",0,0);
      crt_stdio_c_sprintf_FUN_005fdbd0(CStack_490.cancel_button.button_text + 0x70,"%f");
      engine_2d_c_drawText_FUN_00401fd0
                (CStack_490.cancel_button.button_text + 0x74,0,g_WindowHeight + -0xb);
      if (*(int *)(in_stack_00000084 + 0x144) == 0) {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (CStack_490.cancel_button.button_text + 0x78,"FIXED CAMERA: x: %f, y: %f, z: %f, p : %f, h : %f, fov : %f");
      }
      else {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (CStack_490.cancel_button.button_text + 0x78,"PANNING CAMERA: x: %f, y: %f, z: %f");
      }
      engine_2d_c_drawText_FUN_00401fd0(CStack_490.cancel_button.button_text + 0x7c,0,0xb);
    }
    else {
      if ((g_WindowWidth != 0x280) || (g_WindowHeight != 0x1e0)) {
        g_CurrentFilename = "..\\core\\setedit.cpp";
        g_CurrentLineNumber = 0xc92;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Screen must be 640x480!");
      }
      in_stack_00000090 = 0;
      pbVar14 = in_stack_00000098;
      do {
        iVar9 = 0;
        iVar5 = 0;
        puVar11 = *(uint **)((int)g_ScreenBufferArray + in_stack_00000090);
        pbVar15 = pbVar14;
        do {
          pbVar14 = pbVar15 + 1;
          if (in_stack_00000068 == 0.0) {
            *puVar11 = auStack_8dc[*pbVar15 - 0xfa];
          }
          else {
            in_stack_00000078 = *(int *)(&stack0xffffef3c + (uint)*pbVar15 * 4);
            uVar6 = (in_stack_00000078 - iVar9) / 2 + 0x80;
            if ((int)uVar6 < 0) {
              uVar6 = 0;
            }
            else if (0xff < (int)uVar6) {
              uVar6 = 0xff;
            }
            if (g_BitsPerPixel == 0x20) {
              in_stack_00000084 = uVar6 << ((byte)g_RedBitPosition & 0x1f);
              uVar10 = in_stack_00000084 | uVar6 << ((byte)g_GreenBitPosition & 0x1f);
              uVar6 = uVar6 << ((byte)g_BlueBitPosition & 0x1f);
            }
            else {
              uVar10 = uVar6 << 0x10 | uVar6 << 8;
            }
            *puVar11 = uVar10 | uVar6;
            iVar9 = in_stack_00000078;
          }
          puVar11 = puVar11 + 1;
          iVar5 = iVar5 + 1;
          pbVar15 = pbVar14;
        } while (iVar5 < 0x280);
        in_stack_00000090 = in_stack_00000090 + 4;
      } while (in_stack_00000090 != 0x780);
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    iVar9 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
    if (iVar9 != 0) goto LAB_0057db4e;
    iVar9 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x3b);
    if (iVar9 != 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_4ac);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)(auStack_4ac + 4),"W\tToggle full screen mode");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)(auStack_4ac + 8),"S\tToggle strobe mode");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)(auStack_4ac + 0xc),"O\tHold to show original background");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)(auStack_4ac + 0x10),"F\tEnter fov value manually");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)auStack_498,"D\tToggle original background 'difference' mode");
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                ((CPickList *)(auStack_498 + 4),"Camera editor hot keys",-1,0);
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&CStack_490,0,in_stack_ffffef88,(uint)in_stack_ffffef8c,(uint)in_stack_ffffef90,
                 in_stack_ffffef94,in_stack_ffffef98);
    }
    while( true ) {
      in_stack_ffffef88 = 0x57e224;
      bVar3 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
      if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar3) == 0) break;
      in_stack_ffffef8c = (CDemonCamera *)g_CKeysPtr;
      uVar6 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
      if (uVar6 < 0x46) {
        if (0x42 < uVar6) {
          if (uVar6 < 0x44) {
            in_stack_000000bc = (void *)(uint)(in_stack_000000bc == (void *)0x0);
          }
          else if (uVar6 == 0x44) {
            in_stack_000000c0 = (uint)(in_stack_000000c0 == 0);
          }
        }
      }
      else if (uVar6 < 0x47) {
        if (*(int *)(in_stack_000000e4 + 0x144) == 0) {
          in_stack_ffffef90 = (char *)0x1;
          in_stack_ffffef8c = (CDemonCamera *)0x0;
          shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                    (g_CEditorToolsPtr,"Enter FOV",(float *)((int)PTR_DAT_00681ab8 + 0x18),
                     false,0.0,0.0,true);
        }
        else {
          in_stack_ffffef90 = "Can't set FOV on panning camera";
          in_stack_ffffef8c = (CDemonCamera *)g_CEditorToolsPtr;
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Can't set FOV on panning camera");
        }
      }
      else if (0x52 < uVar6) {
        if (uVar6 < 0x54) {
          in_stack_000000b8 = (CKeyFramedModel *)(uint)(in_stack_000000b8 == (CKeyFramedModel *)0x0)
          ;
        }
        else if (uVar6 == 0x57) {
          in_stack_000000d4 = (uint)(in_stack_000000d4 == 0);
          if (in_stack_000000d4 == 0) {
            in_stack_ffffef90 = (char *)0x1e0;
          }
          else {
            in_stack_ffffef90 = (char *)0xf0;
          }
          in_stack_ffffef8c = &g_CDemonCameraInstance;
          core_dcamera_cpp_CDemonCamera_init_FUN_0044c190
                    (&g_CDemonCameraInstance,(int)in_stack_ffffef90);
          in_stack_ffffef94 = 0x57e33d;
          wincore_windll_cpp_clearScreen_FUN_005b3e70();
          in_stack_00000104 = 0;
        }
      }
    }
  } while( true );
}
