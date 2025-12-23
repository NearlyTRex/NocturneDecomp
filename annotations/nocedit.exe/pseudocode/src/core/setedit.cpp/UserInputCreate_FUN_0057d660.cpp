// Name: core_setedit.cpp_UserInputCreate_FUN_0057d660
// Address: 0057d660
// Address Range: [[0057d660, 0057e425]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_UserInputCreate_FUN_0057d660()

#include "nocturne.h"

uint core_setedit_cpp_UserInputCreate_FUN_0057d660
               (uint param_1,uint param_2,int unaff_EBX,uint param_4,int param_5,
               int param_6)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  int iVar4;
  FILE *pFVar5;
  int iVar6;
  uint uVar7;
  CDemonSet *this_ptr;
  uint uVar8;
  CKeyFramedModel *ptr;
  CVector3f *pCVar9;
  uint *puVar10;
  BADSPACEBASE *in_ESP;
  FILE *unaff_EBP;
  char *pcVar11;
  uint uVar12;
  CDemonSet *pCVar13;
  CDemonSet *pCVar14;
  int y_pos;
  char *pcVar15;
  bool bVar16;
  void *unaff_retaddr;
  CGame *n2;
  ulonglong in_stack_ffffee98;
  CKeys *d4;
  uint in_stack_ffffeeb0;
  uint auStack_d70 [256];
  uint auStack_970 [247];
  byte auStack_594 [20];
  byte auStack_580 [8];
  CPickList CStack_578;
  char acStack_1d0 [4];
  char acStack_1cc [212];
  char acStack_f8 [4];
  char acStack_f4 [16];
  char acStack_e4 [4];
  char acStack_e0 [68];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float local_5c;
  int iStack_58;
  int local_54;
  int iStack_44;
  uint local_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint local_28;
  int iStack_24;
  FILE *pFStack_20;
  int iStack_1c;
  FILE *pFStack_18;
  CKeyFramedModel *pCStack_14;
  
  pcVar15 = CStack_578.cancel_button.button_text + 0xac;
  local_60 = 0.0;
  local_40 = 0;
  local_5c = 0.0;
  local_3c = 0;
  pcVar11 = (char *)(param_5 + 0x14d0f0);
  local_54 = 0;
  do {
    cVar2 = *pcVar11;
    *pcVar15 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar11[1];
    pcVar11 = pcVar11 + 2;
    pcVar15[1] = cVar2;
    pcVar15 = pcVar15 + 2;
  } while (cVar2 != '\0');
  pcVar15 = CStack_578.cancel_button.button_text + 0xac;
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
  local_3c = 0;
  core_slew_cpp_CSlew_init_FUN_005a2060(PTR_DAT_00681ab8);
  pvVar3 = PTR_DAT_00681ab8;
  iVar4 = param_5 + param_6 * 0x1a4;
  if (PTR_DAT_00681ab8 != (uint *)(iVar4 + 0x104)) {
    *(uint *)PTR_DAT_00681ab8 = *(uint *)(iVar4 + 0x104);
    *(uint *)((int)pvVar3 + 4) = *(uint *)(iVar4 + 0x108);
    *(uint *)((int)pvVar3 + 8) = *(uint *)(iVar4 + 0x10c);
  }
  pvVar3 = PTR_DAT_00681ab8;
  iVar4 = param_6 * 0x1a4 + param_5;
  if ((uint *)((int)PTR_DAT_00681ab8 + 0xc) != (uint *)(iVar4 + 0x110)) {
    *(uint *)((int)PTR_DAT_00681ab8 + 0xc) = *(uint *)(iVar4 + 0x110);
    *(uint *)((int)pvVar3 + 0x10) = *(uint *)(iVar4 + 0x114);
    *(uint *)((int)pvVar3 + 0x14) = *(uint *)(iVar4 + 0x118);
  }
  *(uint *)((int)PTR_DAT_00681ab8 + 0x18) = *(uint *)(param_5 + 0x148 + param_6 * 0x1a4)
  ;
  uStack_2c = 0;
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_f8,"%s.raw");
  pFVar5 = engine_dosio_c_getFile_FUN_00481a50("backdrop",acStack_f4,"rb");
  n2 = (CGame *)in_stack_ffffee98;
  pFStack_20 = pFVar5;
  if (pFVar5 != (FILE *)0x0) {
    pFStack_20 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                           (0x4b000,"..\\core\\setedit.cpp",0xc64);
    if (pFStack_20 != (FILE *)0x0) {
      crt_stdio_c_fread_FUN_005fd990(pFStack_20,0x280,0x1e0,pFVar5);
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFStack_18,"..\\core\\setedit.cpp",0xc68);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_e4,"%s.act",param_6 * 0x1a4 + param_5 + 4);
    pFVar5 = engine_dosio_c_getFile_FUN_00481a50("backdrop",acStack_e0,"rb");
    n2 = (CGame *)in_stack_ffffee98;
    if (pFVar5 != (FILE *)0x0) {
      iVar4 = 0;
      do {
        iVar6 = crt_stdio_c_fgetc_FUN_005fe840(unaff_EBP);
        local_3c = iVar6;
        local_40 = crt_stdio_c_fgetc_FUN_005fe840(unaff_EBP);
        local_3c = local_40;
        uVar7 = crt_stdio_c_fgetc_FUN_005fe840(unaff_EBP);
        if (g_BitsPerPixel == 0x20) {
          local_28 = iVar6 << ((byte)g_RedBitPosition & 0x1f);
          uVar12 = uStack_38 << ((byte)g_GreenBitPosition & 0x1f) | local_28;
          uVar8 = uVar7 << ((byte)g_BlueBitPosition & 0x1f);
        }
        else {
          uVar12 = uStack_38 << 8 | iVar6 << 0x10;
          uVar8 = uVar7;
        }
        *(uint *)((int)auStack_d70 + iVar4) = uVar12 | uVar8;
        iVar6 = iVar4 + 4;
        *(uint *)(&stack0xffffee90 + iVar4) = (int)uVar7 / 3 + local_40 + local_3c;
        n2 = (CGame *)in_stack_ffffee98;
        iVar4 = iVar6;
      } while (iVar6 != 0x400);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(unaff_EBP,"..\\core\\setedit.cpp",0xc73);
    }
  }
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,n2);
  this_ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                       (g_WindowWidth * g_WindowHeight,"..\\core\\setedit.cpp",0xc81);
  if (this_ptr == (CDemonSet *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0xc82;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  uStack_34 = 0;
  core_dcamera_cpp_CDemonCamera_init_FUN_0044c190(&g_CDemonCameraInstance,0x1e0);
  do {
    uVar7 = 0x57d9d5;
    (*g_CKeysPtr->vtable->clearKeyPresses)(g_CKeysPtr);
    bVar16 = uStack_38 == 0;
    uStack_38 = (uint)bVar16;
    if ((pFStack_20 == (FILE *)0x0) ||
       (((iStack_58 == 0 || (bVar16 == 0)) &&
        (iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x18), iVar4 == 0)))) {
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
      if (iStack_44 == 0) {
        g_CDemonRaytraceInstance.rendering_mode = 1;
      }
      else {
        g_CDemonRaytraceInstance.rendering_mode = 4;
      }
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(this_ptr,9999.9,0);
      core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
      iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x39);
      pvVar3 = PTR_DAT_00681ab8;
      if (iVar4 != 0) {
        pCVar9 = &this_ptr->cameras[param_6].position;
        if (pCVar9 != PTR_DAT_00681ab8) {
          pCVar9->x = *(float *)PTR_DAT_00681ab8;
          this_ptr->cameras[param_6].position.y = *(float *)((int)pvVar3 + 4);
          this_ptr->cameras[param_6].position.z = *(float *)((int)pvVar3 + 8);
        }
        pvVar3 = PTR_DAT_00681ab8;
        pCVar9 = &this_ptr->cameras[param_6].orientation;
        if (pCVar9 != (CVector3f *)((int)PTR_DAT_00681ab8 + 0xc)) {
          pCVar9->x = *(float *)((int)PTR_DAT_00681ab8 + 0xc);
          this_ptr->cameras[param_6].orientation.y = *(float *)((int)pvVar3 + 0x10);
          this_ptr->cameras[param_6].orientation.z = *(float *)((int)pvVar3 + 0x14);
        }
        pCVar9 = (CVector3f *)((int)PTR_DAT_00681ab8 + 0xc);
        this_ptr->cameras[param_6].projection_scale = *(float *)((int)PTR_DAT_00681ab8 + 0x18);
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  (&this_ptr->cameras[param_6].rotation_matrix,pCVar9);
        uStack_7c = 0x43fa0000;
        uStack_78 = 0x43fa0000;
        uStack_74 = 0x43fa0000;
        fStack_64 = this_ptr->cameras[param_6].position.x + -500f;
        local_60 = this_ptr->cameras[param_6].position.y + -500f;
        pCVar9 = &this_ptr->cameras[param_6].box_min;
        local_5c = -500f + this_ptr->cameras[param_6].position.z;
        if (pCVar9 != (CVector3f *)&fStack_64) {
          pCVar9->x = fStack_64;
          this_ptr->cameras[param_6].box_min.y = local_60;
          this_ptr->cameras[param_6].box_min.z = local_5c;
        }
        fStack_70 = this_ptr->cameras[param_6].position.x + 500.0;
        fStack_6c = this_ptr->cameras[param_6].position.y + 500.0;
        pCVar9 = &this_ptr->cameras[param_6].box_max;
        fStack_68 = this_ptr->cameras[param_6].position.z + 500.0;
        if (pCVar9 != (CVector3f *)&fStack_70) {
          pCVar9->x = fStack_70;
          this_ptr->cameras[param_6].box_max.y = fStack_6c;
          this_ptr->cameras[param_6].box_max.z = fStack_68;
        }
        core_setedit_cpp_FUN_0057d340();
        local_54 = 1;
LAB_0057db4e:
        g_CurrentDebugFilename = "..\\core\\setedit.cpp";
        g_CurrentDebugLine = 0xd78;
        crt_memory_c_free_FUN_005fe659(unaff_EBP);
        core_slew_cpp_CSlew_free_FUN_005a20a0();
        g_CurrentDebugLine = 0xd80;
        g_CurrentDebugFilename = "..\\core\\setedit.cpp";
        if (pCStack_14 != (CKeyFramedModel *)0x0) {
          ptr = core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00476d90(pCStack_14);
          shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
        }
        engine_2d_c_clearInputAndWait_FUN_00403260();
        engine_2d_c_setupViewportAndClipping_FUN_00401800
                  (0,0,g_WindowWidth + -1,g_WindowHeight + -1);
        if (unaff_retaddr != (void *)0x0) {
          shape_memdbg_cpp_debugFree_FUN_0050f460(unaff_retaddr,"..\\core\\setedit.cpp",0xd8c);
          return uStack_38;
        }
        return local_3c;
      }
      if (((((fStack_9c != *(float *)PTR_DAT_00681ab8) ||
            (fStack_98 != *(float *)((int)PTR_DAT_00681ab8 + 4))) ||
           ((fStack_94 != *(float *)((int)PTR_DAT_00681ab8 + 8) ||
            ((fStack_90 != *(float *)((int)PTR_DAT_00681ab8 + 0xc) ||
             (fStack_8c != *(float *)((int)PTR_DAT_00681ab8 + 0x10))))))) ||
          (fStack_88 != *(float *)((int)PTR_DAT_00681ab8 + 0x14))) ||
         (fStack_84 != *(float *)((int)PTR_DAT_00681ab8 + 0x18))) {
        pCStack_14 = (CKeyFramedModel *)0x0;
      }
      if (local_54 != 0) {
        if (pCStack_14 == (CKeyFramedModel *)0x0) {
          core_setedit_cpp_Something2MemoryConstructorMaybe_FUN_0057fd00();
          unaff_EBP = (FILE *)&DAT_00000001;
        }
        core_setedit_cpp_CDemonSet_FUN_0057ff70(this_ptr);
        iVar4 = core_setedit_cpp_CDemonSet_FUN_005800d0(this_ptr);
        if (0 < iVar4) {
          y_pos = 0x21;
          iVar6 = 0;
          do {
            piVar1 = (int *)((int)auStack_970 + iVar6);
            iVar6 = iVar6 + 4;
            engine_2d_c_drawTextXY_FUN_00402130(0,y_pos,(char *)(*piVar1 * 0x1a4 + iStack_24));
            y_pos = y_pos + 0xb;
          } while (iVar6 < iVar4 * 4);
        }
        shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,false);
      }
      engine_2d_c_drawText_FUN_00401fd0("Move camera with slew keys.  Press SPACE when done.  ESC to cancel",0,0);
      crt_stdio_c_sprintf_FUN_005fdbd0(CStack_578.cancel_button.button_text + 0xc4,"%f");
      engine_2d_c_drawText_FUN_00401fd0((char *)&CStack_578.selection_state,0,g_WindowHeight + -0xb)
      ;
      if (unaff_EBP[0xb]._handle == 0) {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_1d0,"FIXED CAMERA: x: %f, y: %f, z: %f, p : %f, h : %f, fov : %f",
                   (double)*(float *)PTR_DAT_00681ab8,(double)*(float *)((int)PTR_DAT_00681ab8 + 4),
                   (double)*(float *)((int)PTR_DAT_00681ab8 + 8),
                   180 *
                   (double)*(float *)((int)PTR_DAT_00681ab8 + 0xc) * 0.31830988619288902);
      }
      else {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_1d0,"PANNING CAMERA: x: %f, y: %f, z: %f",
                   (double)*(float *)PTR_DAT_00681ab8);
      }
      uVar7 = 0xb;
      engine_2d_c_drawText_FUN_00401fd0(acStack_1cc,0,0xb);
    }
    else {
      if ((g_WindowWidth != 0x280) || (g_WindowHeight != 0x1e0)) {
        g_CurrentFilename = "..\\core\\setedit.cpp";
        g_CurrentLineNumber = 0xc92;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Screen must be 640x480!");
      }
      unaff_EBX = 0;
      pCVar13 = this_ptr;
      do {
        iVar4 = 0;
        iVar6 = 0;
        puVar10 = *(uint **)((int)g_ScreenBufferArray + unaff_EBX);
        pCVar14 = pCVar13;
        do {
          pCVar13 = (CDemonSet *)((int)&pCVar14->camera_count + 1);
          if (uStack_2c == 0) {
            *puVar10 = auStack_970[(byte)pCVar14->camera_count - 0xfa];
          }
          else {
            iStack_1c = *(int *)(&stack0xffffeea8 + (uint)(byte)pCVar14->camera_count * 4);
            uVar8 = (iStack_1c - iVar4) / 2 + 0x80;
            if ((int)uVar8 < 0) {
              uVar8 = 0;
            }
            else if (0xff < (int)uVar8) {
              uVar8 = 0xff;
            }
            if (g_BitsPerPixel == 0x20) {
              unaff_EBP = (FILE *)(uVar8 << ((byte)g_RedBitPosition & 0x1f));
              uVar12 = (uint)unaff_EBP | uVar8 << ((byte)g_GreenBitPosition & 0x1f);
              uVar8 = uVar8 << ((byte)g_BlueBitPosition & 0x1f);
            }
            else {
              uVar12 = uVar8 << 0x10 | uVar8 << 8;
            }
            *puVar10 = uVar12 | uVar8;
            iVar4 = iStack_1c;
          }
          puVar10 = puVar10 + 1;
          iVar6 = iVar6 + 1;
          pCVar14 = pCVar13;
        } while (iVar6 < 0x280);
        unaff_EBX = unaff_EBX + 4;
      } while (unaff_EBX != 0x780);
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    uVar12 = 1;
    uVar8 = 0x57db43;
    d4 = g_CKeysPtr;
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if (iVar4 != 0) goto LAB_0057db4e;
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3b);
    if (iVar4 != 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_594);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)(auStack_594 + 4),"W\tToggle full screen mode");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)(auStack_594 + 8),"S\tToggle strobe mode");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)(auStack_594 + 0xc),"O\tHold to show original background");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)(auStack_594 + 0x10),"F\tEnter fov value manually");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)auStack_580,"D\tToggle original background 'difference' mode");
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                ((CPickList *)(auStack_580 + 4),"Camera editor hot keys",-1,0);
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&CStack_578,0,uVar7,uVar8,(uint)d4,uVar12,in_stack_ffffeeb0);
    }
    while (iVar4 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00(), iVar4 != 0) {
      uVar7 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
      if (uVar7 < 0x46) {
        if (0x42 < uVar7) {
          if (uVar7 < 0x44) {
            uStack_2c = (uint)(uStack_2c == 0);
          }
          else if (uVar7 == 0x44) {
            local_28 = (uint)(local_28 == 0);
          }
        }
      }
      else if (uVar7 < 0x47) {
        if (*(int *)(unaff_EBX + 0x144) == 0) {
          shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                    (g_CEditorToolsPtr,"Enter FOV",(float *)((int)PTR_DAT_00681ab8 + 0x18),
                     false,0.0,0.0,true);
        }
        else {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Can't set FOV on panning camera");
        }
      }
      else if (0x52 < uVar7) {
        if (uVar7 < 0x54) {
          uStack_30 = (uint)(uStack_30 == 0);
        }
        else if (uVar7 == 0x57) {
          pCStack_14 = (CKeyFramedModel *)(uint)(pCStack_14 == (CKeyFramedModel *)0x0);
          if (pCStack_14 == (CKeyFramedModel *)0x0) {
            iVar4 = 0x1e0;
          }
          else {
            iVar4 = 0xf0;
          }
          core_dcamera_cpp_CDemonCamera_init_FUN_0044c190(&g_CDemonCameraInstance,iVar4);
          wincore_windll_cpp_clearScreen_FUN_005b3e70();
        }
      }
    }
  } while( true );
}
