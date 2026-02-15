// Name: core_setedit.cpp_CDemonSet_FUN_0057d660
// Address: 0057d660
// Address Range: [[0057d660, 0057e425]]
// Convention: __cdecl
// Signature: int __cdecl core_setedit_cpp_CDemonSet_FUN_0057d660(CDemonSet *this_ptr)

#include "nocturne.h"

int __cdecl core_setedit_cpp_CDemonSet_FUN_0057d660(CDemonSet *this_ptr)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  _FILE *p_Var4;
  float fVar5;
  uint uVar6;
  CKeyFramedModel *ptr;
  CVector3f *pCVar7;
  uint uVar8;
  void *unaff_EBX;
  int iVar9;
  uint *puVar10;
  CKeyFramedModel *unaff_ESI;
  char *pcVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  int y;
  char *pcVar15;
  int iVar16;
  bool bVar17;
  int unaff_retaddr;
  int in_stack_00000008;
  uint auStack_d7c [261];
  uint auStack_968 [254];
  CPickList CStack_570;
  char acStack_ec [92];
  uint uStack_90;
  uint uStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  float local_60;
  float local_5c;
  float fStack_58;
  float local_54;
  float fStack_50;
  float fStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  uint local_3c;
  uint uStack_34;
  C3DSCamera *pCStack_30;
  int *piStack_2c;
  uint local_28;
  void *pvStack_20;
  _FILE *p_Stack_1c;
  void *pvStack_18;
  byte *pbStack_14;
  
  pcVar15 = CStack_570.cancel_button.button_text + 0xa4;
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
  pcVar15 = CStack_570.cancel_button.button_text + 0xa4;
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
  core_slew_cpp_CSlew_init_FUN_005a2060(PTR_DAT_00681ab8);
  pvVar3 = PTR_DAT_00681ab8;
  pCVar7 = &this_ptr->cameras[in_stack_00000008].position;
  if (PTR_DAT_00681ab8 != pCVar7) {
    *(float *)PTR_DAT_00681ab8 = pCVar7->x;
    *(float *)((int)pvVar3 + 4) = this_ptr->cameras[in_stack_00000008].position.y;
    *(float *)((int)pvVar3 + 8) = this_ptr->cameras[in_stack_00000008].position.z;
  }
  pvVar3 = PTR_DAT_00681ab8;
  pCVar7 = &this_ptr->cameras[in_stack_00000008].orientation;
  if ((CVector3f *)((int)PTR_DAT_00681ab8 + 0xc) != pCVar7) {
    *(float *)((int)PTR_DAT_00681ab8 + 0xc) = pCVar7->x;
    *(float *)((int)pvVar3 + 0x10) = this_ptr->cameras[in_stack_00000008].orientation.y;
    *(float *)((int)pvVar3 + 0x14) = this_ptr->cameras[in_stack_00000008].orientation.z;
  }
  *(float *)((int)PTR_DAT_00681ab8 + 0x18) = this_ptr->cameras[in_stack_00000008].projection_scale;
  pvStack_20 = (void *)0x0;
  _sprintf
            (acStack_ec,"%s.raw",this_ptr->cameras + in_stack_00000008);
  p_Var4 = engine_dosio_c_getFile_FUN_00481a50("backdrop",acStack_ec,"rb");
  p_Stack_1c = p_Var4;
  if (p_Var4 != (_FILE *)0x0) {
    pvStack_20 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                           (0x4b000,"..\\core\\setedit.cpp",0xc64);
    if (pvStack_20 != (void *)0x0) {
      _fread(pvStack_20,0x280,0x1e0,p_Var4);
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Stack_1c,"..\\core\\setedit.cpp",0xc68);
    _sprintf
              (acStack_ec,"%s.act",this_ptr->cameras + in_stack_00000008);
    p_Stack_1c = engine_dosio_c_getFile_FUN_00481a50("backdrop",acStack_ec,"rb");
    if (p_Stack_1c != (_FILE *)0x0) {
      iVar16 = 0;
      do {
        p_Var4 = p_Stack_1c;
        fVar5 = (float)_fgetc(p_Stack_1c);
        fStack_4c = fVar5;
        iStack_48 = _fgetc(p_Var4);
        iStack_44 = iStack_48;
        uVar6 = _fgetc(p_Var4);
        if (g_BitsPerPixel == 0x20) {
          uStack_34 = (int)fVar5 << ((byte)g_RedBitPosition & 0x1f);
          uVar12 = iStack_44 << ((byte)g_GreenBitPosition & 0x1f) | uStack_34;
          uVar8 = uVar6 << ((byte)g_BlueBitPosition & 0x1f);
        }
        else {
          uVar12 = iStack_44 << 8 | (int)fVar5 << 0x10;
          uVar8 = uVar6;
        }
        *(uint *)((int)auStack_d7c + iVar16) = uVar12 | uVar8;
        iVar9 = iVar16 + 4;
        *(int *)(&stack0xffffee84 + iVar16) = (int)uVar6 / 3 + (int)fStack_4c + iStack_48;
        iVar16 = iVar9;
      } while (iVar9 != 0x400);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Stack_1c,"..\\core\\setedit.cpp",0xc73);
    }
  }
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
  pvStack_18 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                         (g_WindowWidth * g_WindowHeight,"..\\core\\setedit.cpp",0xc81);
  if (pvStack_18 == (void *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0xc82;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  local_54 = 0.0;
  pbStack_14 = (byte *)0x0;
  core_dcamera_cpp_CDemonCamera_init_FUN_0044c190(&g_CDemonCameraInstance,0x1e0);
  piStack_2c = &this_ptr->cameras[in_stack_00000008 + -1].enabled;
  pCStack_30 = this_ptr->cameras;
  do {
    (*g_CKeysPtr->vtable->clearKeyPresses)(g_CKeysPtr);
    bVar17 = uStack_34 == 0;
    uStack_34 = (uint)bVar17;
    if ((p_Stack_1c == (_FILE *)0x0) ||
       (((local_54 == 0.0 || (bVar17 == 0)) &&
        (iVar16 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x18), iVar16 == 0)))) {
      uStack_90 = *(uint *)PTR_DAT_00681ab8;
      uStack_8c = *(uint *)((int)PTR_DAT_00681ab8 + 4);
      fStack_88 = *(float *)((int)PTR_DAT_00681ab8 + 8);
      fStack_84 = *(float *)((int)PTR_DAT_00681ab8 + 0xc);
      fStack_80 = *(float *)((int)PTR_DAT_00681ab8 + 0x10);
      fStack_7c = *(float *)((int)PTR_DAT_00681ab8 + 0x14);
      fStack_78 = *(float *)((int)PTR_DAT_00681ab8 + 0x18);
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
                (g_CDemonRendererPtr2,&g_ZeroVector);
      if (iStack_48 == 0) {
        g_CDemonRaytraceInstance.rendering_mode = 1;
      }
      else {
        g_CDemonRaytraceInstance.rendering_mode = 4;
      }
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(this_ptr,9999.9,0);
      core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
      iVar16 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x39);
      pvVar3 = PTR_DAT_00681ab8;
      if (iVar16 != 0) {
        pCVar7 = &this_ptr->cameras[in_stack_00000008].position;
        if (pCVar7 != PTR_DAT_00681ab8) {
          pCVar7->x = *(float *)PTR_DAT_00681ab8;
          this_ptr->cameras[in_stack_00000008].position.y = *(float *)((int)pvVar3 + 4);
          this_ptr->cameras[in_stack_00000008].position.z = *(float *)((int)pvVar3 + 8);
        }
        pvVar3 = PTR_DAT_00681ab8;
        pCVar7 = &this_ptr->cameras[in_stack_00000008].orientation;
        if (pCVar7 != (CVector3f *)((int)PTR_DAT_00681ab8 + 0xc)) {
          pCVar7->x = *(float *)((int)PTR_DAT_00681ab8 + 0xc);
          this_ptr->cameras[in_stack_00000008].orientation.y = *(float *)((int)pvVar3 + 0x10);
          this_ptr->cameras[in_stack_00000008].orientation.z = *(float *)((int)pvVar3 + 0x14);
        }
        pCVar7 = (CVector3f *)((int)PTR_DAT_00681ab8 + 0xc);
        this_ptr->cameras[in_stack_00000008].projection_scale =
             *(float *)((int)PTR_DAT_00681ab8 + 0x18);
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  (&this_ptr->cameras[in_stack_00000008].rotation_matrix,pCVar7);
        uStack_6c = 0x43fa0000;
        uStack_68 = 0x43fa0000;
        uStack_64 = 0x43fa0000;
        local_54 = this_ptr->cameras[in_stack_00000008].position.x + -500.0f;
        fStack_50 = this_ptr->cameras[in_stack_00000008].position.y + -500.0f;
        pCVar7 = &this_ptr->cameras[in_stack_00000008].box_min;
        fStack_4c = -500.0f + this_ptr->cameras[in_stack_00000008].position.z;
        if (pCVar7 != (CVector3f *)&local_54) {
          pCVar7->x = local_54;
          this_ptr->cameras[in_stack_00000008].box_min.y = fStack_50;
          this_ptr->cameras[in_stack_00000008].box_min.z = fStack_4c;
        }
        local_60 = this_ptr->cameras[in_stack_00000008].position.x + 500.0;
        local_5c = this_ptr->cameras[in_stack_00000008].position.y + 500.0;
        pCVar7 = &this_ptr->cameras[in_stack_00000008].box_max;
        fStack_58 = this_ptr->cameras[in_stack_00000008].position.z + 500.0;
        if (pCVar7 != (CVector3f *)&local_60) {
          pCVar7->x = local_60;
          this_ptr->cameras[in_stack_00000008].box_max.y = local_5c;
          this_ptr->cameras[in_stack_00000008].box_max.z = fStack_58;
        }
        core_setedit_cpp_CDemonSet_FUN_0057d340(this_ptr);
        iStack_48 = 1;
LAB_0057db4e:
        g_CurrentDebugFilename = "..\\core\\setedit.cpp";
        g_CurrentDebugLine = 0xd78;
        shape_memdbg_cpp_free_FUN_005fe659(this_ptr);
        core_slew_cpp_CSlew_free_FUN_005a20a0();
        g_CurrentDebugLine = 0xd80;
        g_CurrentDebugFilename = "..\\core\\setedit.cpp";
        if (unaff_ESI != (CKeyFramedModel *)0x0) {
          ptr = core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00476d90(unaff_ESI,0);
          shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
        }
        engine_2d_c_clearInputAndWait_FUN_00403260();
        engine_2d_c_setupViewportAndClipping_FUN_00401800
                  (0,0,g_WindowWidth + -1,g_WindowHeight + -1);
        if (unaff_EBX != (void *)0x0) {
          shape_memdbg_cpp_debugFree_FUN_0050f460(unaff_EBX,"..\\core\\setedit.cpp",0xd8c);
          return local_40;
        }
        return local_40;
      }
      if (((((fStack_88 != *(float *)PTR_DAT_00681ab8) ||
            (fStack_84 != *(float *)((int)PTR_DAT_00681ab8 + 4))) ||
           ((fStack_80 != *(float *)((int)PTR_DAT_00681ab8 + 8) ||
            ((fStack_7c != *(float *)((int)PTR_DAT_00681ab8 + 0xc) ||
             (fStack_78 != *(float *)((int)PTR_DAT_00681ab8 + 0x10))))))) ||
          (fStack_74 != *(float *)((int)PTR_DAT_00681ab8 + 0x14))) ||
         (fStack_70 != *(float *)((int)PTR_DAT_00681ab8 + 0x18))) {
        unaff_retaddr = 0;
      }
      if (local_40 != 0) {
        if (unaff_retaddr == 0) {
          core_setedit_cpp_CDemonSet_FUN_0057fd00(this_ptr);
          unaff_retaddr = 1;
        }
        core_setedit_cpp_CDemonSet_FUN_0057ff70(this_ptr);
        iVar16 = core_setedit_cpp_CDemonSet_FUN_005800d0(this_ptr);
        if (0 < iVar16) {
          y = 0x21;
          iVar9 = 0;
          do {
            piVar1 = (int *)((int)auStack_968 + iVar9);
            iVar9 = iVar9 + 4;
            engine_2d_c_drawTextXY_FUN_00402130(0,y,(char *)(p_Stack_1c + *piVar1 * 0xf));
            y = y + 0xb;
          } while (iVar9 < iVar16 * 4);
        }
        shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,0);
      }
      engine_2d_c_drawText_FUN_00401fd0("Move camera with slew keys.  Press SPACE when done.  ESC to cancel",0,0);
      _sprintf(CStack_570.cancel_button.button_text + 0xbc,"%f");
      engine_2d_c_drawText_FUN_00401fd0
                (CStack_570.cancel_button.button_text + 0xbc,0,g_WindowHeight + -0xb);
      if (*(int *)((int)pvStack_18 + 0x144) == 0) {
        _sprintf
                  (CStack_570.cancel_button.button_text + 0xbc,"FIXED CAMERA: x: %f, y: %f, z: %f, p : %f, h : %f, fov : %f",
                   (double)*(float *)PTR_DAT_00681ab8,(double)*(float *)((int)PTR_DAT_00681ab8 + 4),
                   (double)*(float *)((int)PTR_DAT_00681ab8 + 8),
                   180 *
                   (double)*(float *)((int)PTR_DAT_00681ab8 + 0xc) * 0.31830988619288902);
      }
      else {
        _sprintf
                  (CStack_570.cancel_button.button_text + 0xbc,"PANNING CAMERA: x: %f, y: %f, z: %f",
                   (double)*(float *)PTR_DAT_00681ab8);
      }
      engine_2d_c_drawText_FUN_00401fd0(CStack_570.cancel_button.button_text + 0xbc,0,0xb);
    }
    else {
      if ((g_WindowWidth != 0x280) || (g_WindowHeight != 0x1e0)) {
        g_CurrentFilename = "..\\core\\setedit.cpp";
        g_CurrentLineNumber = 0xc92;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Screen must be 640x480!");
      }
      p_Stack_1c = (_FILE *)0x0;
      pbVar13 = pbStack_14;
      do {
        uVar6 = 0;
        iVar16 = 0;
        puVar10 = (uint *)p_Stack_1c[0x19b185]._handle;
        pbVar14 = pbVar13;
        do {
          pbVar13 = pbVar14 + 1;
          if (iStack_44 == 0) {
            *puVar10 = auStack_968[*pbVar14 - 0x102];
          }
          else {
            uStack_34 = *(uint *)(&stack0xffffee90 + (uint)*pbVar14 * 4);
            uVar6 = (int)(uStack_34 - uVar6) / 2 + 0x80;
            if ((int)uVar6 < 0) {
              uVar6 = 0;
            }
            else if (0xff < (int)uVar6) {
              uVar6 = 0xff;
            }
            if (g_BitsPerPixel == 0x20) {
              local_28 = uVar6 << ((byte)g_RedBitPosition & 0x1f);
              uVar8 = local_28 | uVar6 << ((byte)g_GreenBitPosition & 0x1f);
              uVar6 = uVar6 << ((byte)g_BlueBitPosition & 0x1f);
            }
            else {
              uVar8 = uVar6 << 0x10 | uVar6 << 8;
            }
            *puVar10 = uVar8 | uVar6;
            uVar6 = uStack_34;
          }
          puVar10 = puVar10 + 1;
          iVar16 = iVar16 + 1;
          pbVar14 = pbVar13;
        } while (iVar16 < 0x280);
        p_Stack_1c = (_FILE *)&p_Stack_1c->_cnt;
      } while (p_Stack_1c != (_FILE *)0x780);
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    iVar16 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if (iVar16 != 0) goto LAB_0057db4e;
    iVar16 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x3b);
    if (iVar16 != 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_570);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&CStack_570.base,"W\tToggle full screen mode");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CStack_570.base,"S\tToggle strobe mode")
      ;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&CStack_570.base,"O\tHold to show original background");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&CStack_570.base,"F\tEnter fov value manually");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&CStack_570.base,"D\tToggle original background 'difference' mode");
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                (&CStack_570,"Camera editor hot keys",-1,0);
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&CStack_570,0);
    }
    while (iVar16 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00(), iVar16 != 0) {
      uVar6 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
      if (uVar6 < 0x46) {
        if (0x42 < uVar6) {
          if (uVar6 < 0x44) {
            pCStack_30 = (C3DSCamera *)(uint)(pCStack_30 == (C3DSCamera *)0x0);
          }
          else if (uVar6 == 0x44) {
            piStack_2c = (int *)(uint)(piStack_2c == (int *)0x0);
          }
        }
      }
      else if (uVar6 < 0x47) {
        if (*(int *)(unaff_ESI->texture_list[0].unknown + 8) == 0) {
          shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                    (g_CEditorToolsPtr,"Enter FOV",(float *)((int)PTR_DAT_00681ab8 + 0x18),
                     0,0.0,0.0,1);
        }
        else {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Can't set FOV on panning camera");
        }
      }
      else if (0x52 < uVar6) {
        if (uVar6 < 0x54) {
          uStack_34 = (uint)(uStack_34 == 0);
        }
        else if (uVar6 == 0x57) {
          pvStack_18 = (void *)(uint)(pvStack_18 == (void *)0x0);
          if (pvStack_18 == (void *)0x0) {
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
