// Name: core_setedit.cpp_UserInputCreate_FUN_0057d660
// Address: 0057d660
// Address Range: [[0057d660, 0057e425]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_UserInputCreate_FUN_0057d660()
// Cross-references:
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057eb24 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_setedit_cpp_00647ded
//   TerminatedCString s_Can_t_find_GEO_00647e01
//   TerminatedCString s_KFM_00647e11
//   TerminatedCString s_s_raw_00647e16
//   TerminatedCString s_rb_00647e1d
//   TerminatedCString s_backdrop_00647e20
//   TerminatedCString s_core_setedit_cpp_00647e29
//   TerminatedCString s_core_setedit_cpp_00647e3d
//   TerminatedCString s_s_act_00647e51
//   TerminatedCString s_rb_00647e58
//   TerminatedCString s_backdrop_00647e5b
//   TerminatedCString s_core_setedit_cpp_00647e64
//   TerminatedCString s_core_setedit_cpp_00647e78
//   TerminatedCString s_core_setedit_cpp_00647e8c
//   TerminatedCString s_Out_of_memory_00647ea0
//   TerminatedCString s_core_setedit_cpp_00647eaf
//   TerminatedCString s_Screen_must_be_640x480_00647ec3
//   TerminatedCString s_Move_camera_with_slew_ke_00647edb
//   TerminatedCString s_f_00647f1e
//   TerminatedCString s_PANNING_CAMERA_x_f_y_f_z_00647f21
//   TerminatedCString s_FIXED_CAMERA_x_f_y_f_z_f_00647f45
//   TerminatedCString s_W_Toggle_full_screen_mod_00647f81
//   TerminatedCString s_S_Toggle_strobe_mode_00647f9b
//   TerminatedCString s_O_Hold_to_show_original__00647fb0
//   TerminatedCString s_F_Enter_fov_value_manual_00647fd3
//   TerminatedCString s_D_Toggle_original_backgr_00647fee
//   TerminatedCString s_Camera_editor_hot_keys_0064801d
//   TerminatedCString s_Can_t_set_FOV_on_panning_00648034
//   TerminatedCString s_core_setedit_cpp_0064805e
//   TerminatedCString s_core_setedit_cpp_00648072
//   TerminatedCString s_core_setedit_cpp_00648086
//   float FLOAT_0064809d = -500
//   double DOUBLE_006480a5 = 0.318309886192889
//   double DOUBLE_006480ad = 180
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_BitsPerPixel = 0x8
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   char* g_CurrentDebugFilename = 0067d200
//   void* PTR_DAT_00681ab8 = 03f48f84
//   undefined4 DAT_00ffffff
//   CDemonRenderer g_CDemonRendererInstance
//   CEditorTools g_CEditorToolsPtr
//   int g_MouseX
//   int g_MouseY
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   int g_RedBitPosition
//   int g_GreenBitPosition
//   int g_BlueBitPosition
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.delta_time_float
//   void* g_CKeysPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
//   CDemonCamera g_CDemonCameraInstance
//   undefined4 DAT_032758e8
//   undefined4 g_CDemonCameraInstance.base.position.y
//   undefined4 g_CDemonCameraInstance.base.position.z
//   undefined4 g_CDemonCameraInstance.base.projection_scale
//   CDemonRaytrace g_CDemonRaytraceInstance
//   CSkeleton* g_SkeletonPoolEnd
//   undefined4 DAT_03f48f88
//   undefined4 DAT_03f48f8c
//   undefined4 DAT_03f48f90
//   undefined4 DAT_03f48f94
//   undefined4 DAT_03f48f98
//   undefined4 DAT_03f48f9c
//   CVector3f g_ZeroVector
// Function calls:
//   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
//   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
//   core_dcamera.cpp_CDemonCamera_init_FUN_0044c190
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00476d90
//   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
//   core_setedit.cpp_CDemonSet_FUN_0057ff70
//   core_setedit.cpp_CDemonSet_FUN_005800d0
//   core_setedit.cpp_FUN_0057d340
//   core_setedit.cpp_Something2MemoryConstructorMaybe_FUN_0057fd00
//   core_skeleton.cpp_DoNothing_FUN_005a20a0
//   core_skeleton.cpp_FUN_005a2060
//   core_skeleton.cpp_FUN_005a20b0
//   crt_memory.c_free_FUN_005fe659
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fread_FUN_005fd990
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_2d.c_drawTextXY_FUN_00402130
//   engine_2d.c_setupViewportAndClipping_FUN_00401800
//   engine_dosio.c_getFile_FUN_00481a50
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
//   shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   shape_memdbg.cpp_debugFree_FUN_0050f210
//   shape_memdbg.cpp_debugFree_FUN_0050f460
//   shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00

#include "nocturne.h"

int core_setedit_cpp_UserInputCreate_FUN_0057d660
              (undefined4 param_1,undefined4 param_2,void *unaff_EBX,undefined4 param_4,
              CDemonSet *param_5,int param_6)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  FILE *pFVar4;
  float fVar5;
  uint uVar6;
  CKeyFramedModel *ptr;
  CVector3f *pCVar7;
  undefined3 extraout_var;
  C3DSCamera *pCVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  BADSPACEBASE *in_ESP;
  CKeyFramedModel *unaff_ESI;
  char *pcVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  int y_pos;
  char *pcVar16;
  int iVar17;
  bool bVar18;
  int unaff_retaddr;
  double in_stack_ffffee80;
  uint in_stack_ffffeea8;
  uint in_stack_ffffeeac;
  uint in_stack_ffffeeb0;
  uint in_stack_ffffeeb4;
  uint in_stack_ffffeeb8;
  uint auStack_d80 [262];
  uint auStack_968 [254];
  CPickList CStack_570;
  char acStack_f0 [96];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float local_60;
  float local_5c;
  float fStack_58;
  float local_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  int iStack_44;
  int local_40;
  undefined4 local_3c;
  uint uStack_38;
  C3DSCamera *pCStack_34;
  int *piStack_30;
  uint uStack_2c;
  uint local_28;
  void *pvStack_24;
  FILE *pFStack_20;
  void *pvStack_1c;
  uint uStack_18;
  byte *pbStack_14;
  
  pcVar16 = CStack_570.cancel_button.button_text + 0xa4;
  local_60 = 0.0;
  local_40 = 0;
  local_5c = 0.0;
  local_3c = 0;
  pcVar12 = param_5->geometry_filename;
  local_54 = 0.0;
  do {
    cVar2 = *pcVar12;
    *pcVar16 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar12[1];
    pcVar12 = pcVar12 + 2;
    pcVar16[1] = cVar2;
    pcVar16 = pcVar16 + 2;
  } while (cVar2 != '\0');
  pcVar16 = CStack_570.cancel_button.button_text + 0xa4;
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
  local_28 = 0;
  core_skeleton_cpp_FUN_005a2060();
  pvVar3 = PTR_DAT_00681ab8;
  pCVar7 = &param_5->cameras[param_6].position;
  if ((CVector3f *)PTR_DAT_00681ab8 != pCVar7) {
    *(float *)PTR_DAT_00681ab8 = pCVar7->x;
    *(float *)((int)pvVar3 + 4) = param_5->cameras[param_6].position.y;
    *(float *)((int)pvVar3 + 8) = param_5->cameras[param_6].position.z;
  }
  pvVar3 = PTR_DAT_00681ab8;
  pCVar7 = &param_5->cameras[param_6].orientation;
  if ((CVector3f *)((int)PTR_DAT_00681ab8 + 0xc) != pCVar7) {
    *(float *)((int)PTR_DAT_00681ab8 + 0xc) = pCVar7->x;
    *(float *)((int)pvVar3 + 0x10) = param_5->cameras[param_6].orientation.y;
    *(float *)((int)pvVar3 + 0x14) = param_5->cameras[param_6].orientation.z;
  }
  *(float *)((int)PTR_DAT_00681ab8 + 0x18) = param_5->cameras[param_6].projection_scale;
  pvStack_24 = (void *)0x0;
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_f0,"%s.raw");
  pFVar4 = engine_dosio_c_getFile_FUN_00481a50("backdrop",acStack_f0,"rb");
  pFStack_20 = pFVar4;
  if (pFVar4 != (FILE *)0x0) {
    pvStack_24 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                           (0x4b000,"..\\core\\setedit.cpp",0xc64);
    if (pvStack_24 != (void *)0x0) {
      crt_stdio_c_fread_FUN_005fd990(pvStack_24,0x280,0x1e0,pFVar4);
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFStack_20,"..\\core\\setedit.cpp",0xc68);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_f0,"%s.act");
    pFStack_20 = engine_dosio_c_getFile_FUN_00481a50("backdrop",acStack_f0,"rb");
    if (pFStack_20 != (FILE *)0x0) {
      iVar17 = 0;
      do {
        pFVar4 = pFStack_20;
        fVar5 = (float)crt_stdio_c_fgetc_FUN_005fe840(pFStack_20);
        fStack_50 = fVar5;
        fStack_4c = (float)crt_stdio_c_fgetc_FUN_005fe840(pFVar4);
        fStack_48 = fStack_4c;
        uVar6 = crt_stdio_c_fgetc_FUN_005fe840(pFVar4);
        if (g_BitsPerPixel == 0x20) {
          uStack_38 = (int)fVar5 << ((byte)g_RedBitPosition & 0x1f);
          uVar13 = (int)fStack_48 << ((byte)g_GreenBitPosition & 0x1f) | uStack_38;
          uVar9 = uVar6 << ((byte)g_BlueBitPosition & 0x1f);
        }
        else {
          uVar13 = (int)fStack_48 << 8 | (int)fVar5 << 0x10;
          uVar9 = uVar6;
        }
        *(uint *)((int)auStack_d80 + iVar17) = uVar13 | uVar9;
        iVar10 = iVar17 + 4;
        *(int *)(&stack0xffffee80 + iVar17) = (int)uVar6 / 3 + (int)fStack_50 + (int)fStack_4c;
        iVar17 = iVar10;
      } while (iVar10 != 0x400);
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFStack_20,"..\\core\\setedit.cpp",0xc73);
    }
  }
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,SUB84(in_stack_ffffee80,0));
  pvStack_1c = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                         (g_WindowWidth * g_WindowHeight,"..\\core\\setedit.cpp",0xc81);
  if (pvStack_1c == (void *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0xc82;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  fStack_58 = 0.0;
  uStack_18 = 0;
  core_dcamera_cpp_CDemonCamera_init_FUN_0044c190(&g_CDemonCameraInstance,0x1e0);
  piStack_30 = &param_5->cameras[param_6 + -1].field17_0x1a0;
  pCStack_34 = param_5->cameras;
  do {
    (*g_CKeysPtr->vtable[1].isKeyDown)(g_CKeysPtr,SUB84(in_stack_ffffee80,0));
    bVar18 = pCStack_34 == (C3DSCamera *)0x0;
    pCStack_34 = (C3DSCamera *)(uint)bVar18;
    if (pvStack_1c == (void *)0x0) {
LAB_0057dc6e:
                    /* WARNING: Load size is inaccurate */
      uStack_90 = *PTR_DAT_00681ab8;
      uStack_8c = *(undefined4 *)((int)PTR_DAT_00681ab8 + 4);
      fStack_88 = *(float *)((int)PTR_DAT_00681ab8 + 8);
      fStack_84 = *(float *)((int)PTR_DAT_00681ab8 + 0xc);
      fStack_80 = *(float *)((int)PTR_DAT_00681ab8 + 0x10);
      fStack_7c = *(float *)((int)PTR_DAT_00681ab8 + 0x14);
      fStack_78 = *(float *)((int)PTR_DAT_00681ab8 + 0x18);
      core_skeleton_cpp_FUN_005a20b0();
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
      if (fStack_48 == 0.0) {
        g_CDemonRaytraceInstance.rendering_mode = 1;
      }
      else {
        g_CDemonRaytraceInstance.rendering_mode = 4;
      }
      core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190(param_5,9999.9,0);
      core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
      iVar17 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x39);
      pvVar3 = PTR_DAT_00681ab8;
      if (iVar17 != 0) {
        pCVar7 = &param_5->cameras[param_6].position;
        if (pCVar7 != (CVector3f *)PTR_DAT_00681ab8) {
                    /* WARNING: Load size is inaccurate */
          pCVar7->x = *PTR_DAT_00681ab8;
          param_5->cameras[param_6].position.y = *(float *)((int)pvVar3 + 4);
          param_5->cameras[param_6].position.z = *(float *)((int)pvVar3 + 8);
        }
        pvVar3 = PTR_DAT_00681ab8;
        pCVar7 = &param_5->cameras[param_6].orientation;
        if (pCVar7 != (CVector3f *)((int)PTR_DAT_00681ab8 + 0xc)) {
          pCVar7->x = *(float *)((int)PTR_DAT_00681ab8 + 0xc);
          param_5->cameras[param_6].orientation.y = *(float *)((int)pvVar3 + 0x10);
          param_5->cameras[param_6].orientation.z = *(float *)((int)pvVar3 + 0x14);
        }
        pCVar7 = (CVector3f *)((int)PTR_DAT_00681ab8 + 0xc);
        param_5->cameras[param_6].projection_scale = *(float *)((int)PTR_DAT_00681ab8 + 0x18);
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  (&param_5->cameras[param_6].rotation_matrix,pCVar7);
        uStack_6c = 0x43fa0000;
        uStack_68 = 0x43fa0000;
        uStack_64 = 0x43fa0000;
        local_54 = param_5->cameras[param_6].position.x + FLOAT_0064809d;
        fStack_50 = param_5->cameras[param_6].position.y + FLOAT_0064809d;
        pCVar7 = &param_5->cameras[param_6].box_min;
        fStack_4c = FLOAT_0064809d + param_5->cameras[param_6].position.z;
        if (pCVar7 != (CVector3f *)&local_54) {
          pCVar7->x = local_54;
          param_5->cameras[param_6].box_min.y = fStack_50;
          param_5->cameras[param_6].box_min.z = fStack_4c;
        }
        local_60 = param_5->cameras[param_6].position.x + 500.0;
        local_5c = param_5->cameras[param_6].position.y + 500.0;
        pCVar7 = &param_5->cameras[param_6].box_max;
        fStack_58 = param_5->cameras[param_6].position.z + 500.0;
        if (pCVar7 != (CVector3f *)&local_60) {
          pCVar7->x = local_60;
          param_5->cameras[param_6].box_max.y = local_5c;
          param_5->cameras[param_6].box_max.z = fStack_58;
        }
        core_setedit_cpp_FUN_0057d340();
        fStack_48 = 1.4013e-45;
LAB_0057db4e:
        g_CurrentDebugFilename = "..\\core\\setedit.cpp";
        g_CurrentDebugLine = 0xd78;
        crt_memory_c_free_FUN_005fe659(param_5);
        core_skeleton_cpp_DoNothing_FUN_005a20a0();
        g_CurrentDebugLine = 0xd80;
        g_CurrentDebugFilename = "..\\core\\setedit.cpp";
        if (unaff_ESI != (CKeyFramedModel *)0x0) {
          ptr = core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00476d90(unaff_ESI);
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
                    /* WARNING: Load size is inaccurate */
      if (((((fStack_88 != *PTR_DAT_00681ab8) ||
            (fStack_84 != *(float *)((int)PTR_DAT_00681ab8 + 4))) ||
           (fStack_80 != *(float *)((int)PTR_DAT_00681ab8 + 8))) ||
          ((fStack_7c != *(float *)((int)PTR_DAT_00681ab8 + 0xc) ||
           (fStack_78 != *(float *)((int)PTR_DAT_00681ab8 + 0x10))))) ||
         ((fStack_74 != *(float *)((int)PTR_DAT_00681ab8 + 0x14) ||
          (fStack_70 != *(float *)((int)PTR_DAT_00681ab8 + 0x18))))) {
        unaff_retaddr = 0;
      }
      if (local_40 != 0) {
        if (unaff_retaddr == 0) {
          core_setedit_cpp_Something2MemoryConstructorMaybe_FUN_0057fd00();
          unaff_retaddr = 1;
        }
        core_setedit_cpp_CDemonSet_FUN_0057ff70(param_5);
        iVar17 = core_setedit_cpp_CDemonSet_FUN_005800d0(param_5);
        if (0 < iVar17) {
          y_pos = 0x21;
          iVar10 = 0;
          do {
            piVar1 = (int *)((int)auStack_968 + iVar10);
            iVar10 = iVar10 + 4;
            engine_2d_c_drawTextXY_FUN_00402130(0,y_pos,(char *)(*piVar1 * 0x1a4 + (int)pvStack_1c))
            ;
            y_pos = y_pos + 0xb;
          } while (SBORROW4(iVar10,iVar17 * 4) != iVar10 + iVar17 * -4 < 0);
        }
        shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,false);
      }
      engine_2d_c_drawText_FUN_00401fd0("Move camera with slew keys.  Press SPACE when done.  ESC to cancel",0,0);
      crt_stdio_c_sprintf_FUN_005fdbd0(CStack_570.cancel_button.button_text + 0xbc,"%f");
      engine_2d_c_drawText_FUN_00401fd0
                (CStack_570.cancel_button.button_text + 0xbc,0,g_WindowHeight + -0xb);
      if (*(int *)(uStack_18 + 0x144) == 0) {
        in_stack_ffffee80 =
             DOUBLE_006480ad * (double)*(float *)((int)PTR_DAT_00681ab8 + 0xc) * DOUBLE_006480a5;
                    /* WARNING: Load size is inaccurate */
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (CStack_570.cancel_button.button_text + 0xbc,"FIXED CAMERA: x: %f, y: %f, z: %f, p : %f, h : %f, fov : %f",
                   (double)*PTR_DAT_00681ab8,(double)*(float *)((int)PTR_DAT_00681ab8 + 4),
                   (double)*(float *)((int)PTR_DAT_00681ab8 + 8));
      }
      else {
                    /* WARNING: Load size is inaccurate */
        in_stack_ffffee80 = (double)*PTR_DAT_00681ab8;
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (CStack_570.cancel_button.button_text + 0xbc,"PANNING CAMERA: x: %f, y: %f, z: %f");
      }
      engine_2d_c_drawText_FUN_00401fd0(CStack_570.cancel_button.button_text + 0xbc,0,0xb);
    }
    else {
      if ((local_54 == 0.0) || ((C3DSCamera *)(uint)bVar18 == (C3DSCamera *)0x0)) {
        in_stack_ffffee80 = (double)CONCAT44(0x18,g_CKeysPtr);
        iVar17 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x18);
        if (iVar17 == 0) goto LAB_0057dc6e;
      }
      if ((g_WindowWidth != 0x280) || (g_WindowHeight != 0x1e0)) {
        g_CurrentFilename = "..\\core\\setedit.cpp";
        g_CurrentLineNumber = 0xc92;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Screen must be 640x480!");
      }
      pvStack_1c = (void *)0x0;
      pbVar14 = pbStack_14;
      do {
        pCVar8 = (C3DSCamera *)0x0;
        iVar17 = 0;
        puVar11 = *(uint **)((int)pvStack_1c + 0x2cf6a9c);
        pbVar15 = pbVar14;
        do {
          pbVar14 = pbVar15 + 1;
          if (iStack_44 == 0) {
            *puVar11 = auStack_968[*pbVar15 - 0x102];
          }
          else {
            pCStack_34 = *(C3DSCamera **)(&stack0xffffee90 + (uint)*pbVar15 * 4);
            uVar6 = ((int)pCStack_34 - (int)pCVar8) / 2 + 0x80;
            if ((int)uVar6 < 0) {
              uVar6 = 0;
            }
            else if (0xff < (int)uVar6) {
              uVar6 = 0xff;
            }
            if (g_BitsPerPixel == 0x20) {
              local_28 = uVar6 << ((byte)g_RedBitPosition & 0x1f);
              uVar9 = local_28 | uVar6 << ((byte)g_GreenBitPosition & 0x1f);
              uVar6 = uVar6 << ((byte)g_BlueBitPosition & 0x1f);
            }
            else {
              uVar9 = uVar6 << 0x10 | uVar6 << 8;
            }
            *puVar11 = uVar9 | uVar6;
            pCVar8 = pCStack_34;
          }
          puVar11 = puVar11 + 1;
          iVar17 = iVar17 + 1;
          pbVar15 = pbVar14;
        } while (iVar17 < 0x280);
        pvStack_1c = (void *)((int)pvStack_1c + 4);
      } while (pvStack_1c != (void *)0x780);
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    iVar17 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
    if (iVar17 != 0) goto LAB_0057db4e;
    iVar17 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x3b);
    if (iVar17 != 0) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_570);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&CStack_570.base_strlist,"W\tToggle full screen mode");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&CStack_570.base_strlist,"S\tToggle strobe mode");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&CStack_570.base_strlist,"O\tHold to show original background");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&CStack_570.base_strlist,"F\tEnter fov value manually");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&CStack_570.base_strlist,"D\tToggle original background 'difference' mode");
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                (&CStack_570,"Camera editor hot keys",-1,0);
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&CStack_570,0,in_stack_ffffeea8,in_stack_ffffeeac,in_stack_ffffeeb0,
                 in_stack_ffffeeb4,in_stack_ffffeeb8);
    }
    while (bVar18 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00(),
          CONCAT31(extraout_var,bVar18) != 0) {
      uVar6 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
      if (uVar6 < 0x46) {
        if (0x42 < uVar6) {
          if (uVar6 < 0x44) {
            piStack_30 = (int *)(uint)(piStack_30 == (int *)0x0);
          }
          else if (uVar6 == 0x44) {
            uStack_2c = (uint)(uStack_2c == 0);
          }
        }
      }
      else if (uVar6 < 0x47) {
        if (*(int *)(unaff_ESI->texture_list[0].unknown + 8) == 0) {
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
          pCStack_34 = (C3DSCamera *)(uint)(pCStack_34 == (C3DSCamera *)0x0);
        }
        else if (uVar6 == 0x57) {
          uStack_18 = (uint)(uStack_18 == 0);
          if (uStack_18 == 0) {
            iVar17 = 0x1e0;
          }
          else {
            iVar17 = 0xf0;
          }
          core_dcamera_cpp_CDemonCamera_init_FUN_0044c190(&g_CDemonCameraInstance,iVar17);
          wincore_windll_cpp_clearScreen_FUN_005b3e70();
        }
      }
    }
  } while( true );
}


// Assembly code:
// 0057d660: PUSH EBX
//   Label: core_setedit.cpp_UserInputCreate_FUN_0057d660
// 0057d661: PUSH ESI
// 0057d662: PUSH EDI
// 0057d663: PUSH EBP
// 0057d664: MOV EBP,ESP
// 0057d666: SUB ESP,0x116c
// 0057d66c: AND ESP,0xfffffff8
// 0057d66f: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057d672: XOR EDX,EDX
// 0057d674: LEA EDI,[ESP + 0xf90]
//   XREF to: Stack[-0x1f0] (DATA)
// 0057d67b: MOV dword ptr [ESP + 0x1120],EDX
//   XREF to: Stack[-0x60] (WRITE)
// 0057d682: MOV dword ptr [ESP + 0x1140],EDX
//   XREF to: Stack[-0x40] (WRITE)
// 0057d689: MOV dword ptr [ESP + 0x1124],EDX
//   XREF to: Stack[-0x5c] (WRITE)
// 0057d690: MOV dword ptr [ESP + 0x1144],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 0057d697: ADD ESI,0x14d0f0
// 0057d69d: MOV dword ptr [ESP + 0x112c],EDX
//   XREF to: Stack[-0x54] (WRITE)
// 0057d6a4: PUSH EDI
// 0057d6a5: MOV AL,byte ptr [ESI]
//   Label: LAB_0057d6a5
// 0057d6a7: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x1f0] (DATA)
// 0057d6a9: CMP AL,0x0
// 0057d6ab: JZ 0x0057d6bd
//   XREF to: 0057d6bd (CONDITIONAL_JUMP)
// 0057d6ad: MOV AL,byte ptr [ESI + 0x1]
// 0057d6b0: ADD ESI,0x2
// 0057d6b3: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x1ef] (WRITE)
// 0057d6b6: ADD EDI,0x2
// 0057d6b9: CMP AL,0x0
// 0057d6bb: JNZ 0x0057d6a5
//   XREF to: 0057d6a5 (CONDITIONAL_JUMP)
// 0057d6bd: POP EDI
//   Label: LAB_0057d6bd
// 0057d6be: MOV DL,0x2e
// 0057d6c0: LEA ESI,[ESP + 0xf90]
//   XREF to: Stack[-0x1f0] (DATA)
// 0057d6c7: MOV AL,byte ptr [ESI]
//   Label: LAB_0057d6c7
//   XREF to: Stack[-0x1f0] (DATA)
// 0057d6c9: CMP AL,DL
// 0057d6cb: JZ 0x0057d6df
//   XREF to: 0057d6df (CONDITIONAL_JUMP)
// 0057d6cd: CMP AL,0x0
// 0057d6cf: JZ 0x0057d6dd
//   XREF to: 0057d6dd (CONDITIONAL_JUMP)
// 0057d6d1: INC ESI
// 0057d6d2: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x1ef] (DATA)
// 0057d6d4: CMP AL,DL
// 0057d6d6: JZ 0x0057d6df
//   XREF to: 0057d6df (CONDITIONAL_JUMP)
// 0057d6d8: INC ESI
// 0057d6d9: CMP AL,0x0
// 0057d6db: JNZ 0x0057d6c7
//   XREF to: 0057d6c7 (CONDITIONAL_JUMP)
// 0057d6dd: SUB ESI,ESI
//   Label: LAB_0057d6dd
// 0057d6df: MOV EBX,ESI
//   Label: LAB_0057d6df
// 0057d6e1: TEST ESI,ESI
// 0057d6e3: JZ 0x0057dbf4
//   XREF to: 0057dbf4 (CONDITIONAL_JUMP)
// 0057d6e9: PUSH 0x647e11
//   Label: LAB_0057d6e9
//   XREF to: 00647e11 (DATA)
// 0057d6ee: PUSH EBX
// 0057d6ef: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057d6f4: ADD ESP,0x8
// 0057d6f7: MOV EBX,dword ptr [0x00681ab8]
//   XREF to: 03f48f84 (PARAM)
//   XREF to: 00681ab8 (READ)
// 0057d6fd: XOR ECX,ECX
// 0057d6ff: PUSH EBX
//   XREF to: 03f48f84 (DATA)
// 0057d700: MOV dword ptr [ESP + 0x115c],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 0057d707: CALL core_skeleton.cpp_FUN_005a2060
//   XREF to: 005a2060 (UNCONDITIONAL_CALL)
// 0057d70c: ADD ESP,0x4
// 0057d70f: IMUL EDX,dword ptr [EBP + 0x18],0x1a4
//   XREF to: Stack[0x8] (READ)
// 0057d716: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057d719: ADD EAX,0x4
// 0057d71c: ADD EAX,EDX
// 0057d71e: MOV EDX,dword ptr [0x00681ab8]
//   XREF to: 03f48f84 (PARAM)
//   XREF to: 00681ab8 (READ)
// 0057d724: ADD EAX,0x100
// 0057d729: CMP EDX,EAX
// 0057d72b: JZ 0x0057d73d
//   XREF to: 0057d73d (CONDITIONAL_JUMP)
// 0057d72d: MOV ECX,dword ptr [EAX]
// 0057d72f: MOV dword ptr [EDX],ECX
//   XREF to: 03f48f84 (WRITE)
// 0057d731: MOV ECX,dword ptr [EAX + 0x4]
// 0057d734: MOV dword ptr [EDX + 0x4],ECX
//   XREF to: 03f48f88 (WRITE)
// 0057d737: MOV ECX,dword ptr [EAX + 0x8]
// 0057d73a: MOV dword ptr [EDX + 0x8],ECX
//   XREF to: 03f48f8c (WRITE)
// 0057d73d: IMUL EAX,dword ptr [EBP + 0x18],0x1a4
//   Label: LAB_0057d73d
//   XREF to: Stack[0x8] (READ)
// 0057d744: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057d747: ADD EDX,0x4
// 0057d74a: ADD EAX,EDX
// 0057d74c: MOV EDX,dword ptr [0x00681ab8]
//   XREF to: 00681ab8 (READ)
// 0057d752: ADD EAX,0x10c
// 0057d757: ADD EDX,0xc
// 0057d75a: CMP EDX,EAX
// 0057d75c: JZ 0x0057d76e
//   XREF to: 0057d76e (CONDITIONAL_JUMP)
// 0057d75e: MOV ECX,dword ptr [EAX]
// 0057d760: MOV dword ptr [EDX],ECX
//   XREF to: 03f48f90 (WRITE)
// 0057d762: MOV ECX,dword ptr [EAX + 0x4]
// 0057d765: MOV dword ptr [EDX + 0x4],ECX
//   XREF to: 03f48f94 (WRITE)
// 0057d768: MOV ECX,dword ptr [EAX + 0x8]
// 0057d76b: MOV dword ptr [EDX + 0x8],ECX
//   XREF to: 03f48f98 (WRITE)
// 0057d76e: IMUL EAX,dword ptr [EBP + 0x18],0x1a4
//   Label: LAB_0057d76e
//   XREF to: Stack[0x8] (READ)
// 0057d775: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057d778: ADD EDX,0x4
// 0057d77b: FLD float ptr [EDX + EAX*0x1 + 0x144]
// 0057d782: ADD EAX,EDX
// 0057d784: MOV ECX,dword ptr [0x00681ab8]
//   XREF to: 00681ab8 (READ)
// 0057d78a: PUSH EAX
// 0057d78b: FSTP float ptr [ECX + 0x18]
//   XREF to: 03f48f9c (WRITE)
// 0057d78e: PUSH 0x647e16
//   XREF to: 00647e16 (DATA)
// 0057d793: LEA EAX,[ESP + 0x1098]
// 0057d79a: XOR ECX,ECX
// 0057d79c: PUSH EAX
// 0057d79d: MOV dword ptr [ESP + 0x1168],ECX
// 0057d7a4: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057d7a9: ADD ESP,0xc
// 0057d7ac: PUSH 0x647e1d
//   XREF to: 00647e1d (DATA)
// 0057d7b1: LEA EAX,[ESP + 0x1094]
// 0057d7b8: PUSH EAX
// 0057d7b9: PUSH 0x647e20
//   XREF to: 00647e20 (DATA)
// 0057d7be: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0057d7c3: ADD ESP,0xc
// 0057d7c6: MOV EBX,EAX
// 0057d7c8: MOV dword ptr [ESP + 0x1160],EAX
// 0057d7cf: TEST EAX,EAX
// 0057d7d1: JZ 0x0057d946
//   XREF to: 0057d946 (CONDITIONAL_JUMP)
// 0057d7d7: PUSH 0xc64
// 0057d7dc: PUSH 0x647e29
//   XREF to: 00647e29 (DATA)
// 0057d7e1: PUSH 0x4b000
// 0057d7e6: CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250
//   XREF to: 0050f250 (UNCONDITIONAL_CALL)
// 0057d7eb: ADD ESP,0xc
// 0057d7ee: MOV dword ptr [ESP + 0x115c],EAX
// 0057d7f5: TEST EAX,EAX
// 0057d7f7: JZ 0x0057d80d
//   XREF to: 0057d80d (CONDITIONAL_JUMP)
// 0057d7f9: PUSH EBX
// 0057d7fa: PUSH 0x1e0
// 0057d7ff: PUSH 0x280
// 0057d804: PUSH EAX
// 0057d805: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0057d80a: ADD ESP,0x10
// 0057d80d: PUSH 0xc68
//   Label: LAB_0057d80d
// 0057d812: PUSH 0x647e3d
//   XREF to: 00647e3d (DATA)
// 0057d817: MOV EBX,dword ptr [ESP + 0x1168]
// 0057d81e: PUSH EBX
// 0057d81f: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0057d824: ADD ESP,0xc
// 0057d827: IMUL EAX,dword ptr [EBP + 0x18],0x1a4
//   XREF to: Stack[0x8] (READ)
// 0057d82e: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057d831: ADD EDX,0x4
// 0057d834: ADD EAX,EDX
// 0057d836: PUSH EAX
// 0057d837: PUSH 0x647e51
//   XREF to: 00647e51 (DATA)
// 0057d83c: LEA EAX,[ESP + 0x1098]
// 0057d843: PUSH EAX
// 0057d844: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057d849: ADD ESP,0xc
// 0057d84c: PUSH 0x647e58
//   XREF to: 00647e58 (DATA)
// 0057d851: LEA EAX,[ESP + 0x1094]
// 0057d858: PUSH EAX
// 0057d859: PUSH 0x647e5b
//   XREF to: 00647e5b (DATA)
// 0057d85e: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0057d863: ADD ESP,0xc
// 0057d866: MOV dword ptr [ESP + 0x1160],EAX
// 0057d86d: TEST EAX,EAX
// 0057d86f: JZ 0x0057d946
//   XREF to: 0057d946 (CONDITIONAL_JUMP)
// 0057d875: XOR EBX,EBX
// 0057d877: MOV EDI,dword ptr [ESP + 0x1160]
//   Label: LAB_0057d877
// 0057d87e: PUSH EDI
// 0057d87f: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0057d884: ADD ESP,0x4
// 0057d887: PUSH EDI
// 0057d888: MOV ESI,EAX
// 0057d88a: MOV dword ptr [ESP + 0x1134],EAX
// 0057d891: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0057d896: MOV dword ptr [ESP + 0x113c],EAX
// 0057d89d: ADD ESP,0x4
// 0057d8a0: PUSH EDI
// 0057d8a1: MOV dword ptr [ESP + 0x1138],EAX
// 0057d8a8: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0057d8ad: MOV ECX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 0057d8b3: ADD ESP,0x4
// 0057d8b6: MOV EDX,EAX
// 0057d8b8: CMP ECX,0x20
// 0057d8bb: JNZ 0x0057dc1b
//   XREF to: 0057dc1b (CONDITIONAL_JUMP)
// 0057d8c1: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 0057d8c7: SHL ESI,CL
// 0057d8c9: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 0057d8cf: MOV dword ptr [ESP + 0x1148],ESI
// 0057d8d6: MOV ESI,dword ptr [ESP + 0x1138]
// 0057d8dd: MOV EDI,dword ptr [ESP + 0x1148]
// 0057d8e4: SHL ESI,CL
// 0057d8e6: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 0057d8ec: OR ESI,EDI
// 0057d8ee: SHL EAX,CL
// 0057d8f0: MOV ECX,ESI
// 0057d8f2: OR ECX,EAX
//   Label: LAB_0057d8f2
// 0057d8f4: MOV EAX,dword ptr [ESP + 0x1134]
// 0057d8fb: MOV dword ptr [ESP + EBX*0x1 + 0x400],ECX
// 0057d902: MOV ECX,dword ptr [ESP + 0x1130]
// 0057d909: MOV ESI,0x3
// 0057d90e: ADD ECX,EAX
// 0057d910: MOV EAX,EDX
// 0057d912: SAR EDX,0x1f
// 0057d915: IDIV ESI
// 0057d917: ADD EBX,0x4
// 0057d91a: ADD EAX,ECX
// 0057d91c: MOV dword ptr [ESP + EBX*0x1 + -0x4],EAX
// 0057d920: CMP EBX,0x400
// 0057d926: JNZ 0x0057d877
//   XREF to: 0057d877 (CONDITIONAL_JUMP)
// 0057d92c: PUSH 0xc73
// 0057d931: PUSH 0x647e64
//   XREF to: 00647e64 (DATA)
// 0057d936: MOV EDX,dword ptr [ESP + 0x1168]
// 0057d93d: PUSH EDX
// 0057d93e: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0057d943: ADD ESP,0xc
// 0057d946: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_0057d946
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0057d94b: MOV ECX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0057d951: PUSH ECX
//   XREF to: 02d81a9c (DATA)
// 0057d952: CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
// 0057d957: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0057d95c: IMUL EAX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0057d963: ADD ESP,0x4
// 0057d966: PUSH 0xc81
// 0057d96b: PUSH 0x647e78
//   XREF to: 00647e78 (DATA)
// 0057d970: PUSH EAX
// 0057d971: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 0057d976: ADD ESP,0xc
// 0057d979: MOV dword ptr [ESP + 0x1164],EAX
// 0057d980: TEST EAX,EAX
// 0057d982: JZ 0x0057dc2f
//   XREF to: 0057dc2f (CONDITIONAL_JUMP)
// 0057d988: PUSH 0x1e0
//   Label: LAB_0057d988
// 0057d98d: XOR EAX,EAX
// 0057d98f: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0057d994: MOV dword ptr [ESP + 0x1130],EAX
// 0057d99b: MOV dword ptr [ESP + 0x1170],EAX
// 0057d9a2: CALL core_dcamera.cpp_CDemonCamera_init_FUN_0044c190
//   XREF to: 0044c190 (UNCONDITIONAL_CALL)
// 0057d9a7: ADD ESP,0x8
// 0057d9aa: IMUL EAX,dword ptr [EBP + 0x18],0x1a4
//   XREF to: Stack[0x8] (READ)
// 0057d9b1: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057d9b4: ADD EDX,EAX
// 0057d9b6: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057d9b9: ADD EAX,0x4
// 0057d9bc: MOV dword ptr [ESP + 0x1150],EDX
// 0057d9c3: MOV dword ptr [ESP + 0x114c],EAX
// 0057d9ca: MOV EAX,[0x0067cf44]
//   Label: LAB_0057d9ca
//   XREF to: 0067cf44 (READ)
// 0057d9cf: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0057d9d0: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0057d9d2: CALL dword ptr [EDX + 0x8]
// 0057d9d5: ADD ESP,0x4
// 0057d9d8: CMP dword ptr [ESP + 0x1144],0x0
// 0057d9e0: SETZ AL
// 0057d9e3: AND EAX,0xff
// 0057d9e8: MOV ESI,dword ptr [ESP + 0x115c]
// 0057d9ef: MOV dword ptr [ESP + 0x1144],EAX
// 0057d9f6: TEST ESI,ESI
// 0057d9f8: JZ 0x0057dc6e
//   XREF to: 0057dc6e (CONDITIONAL_JUMP)
// 0057d9fe: CMP dword ptr [ESP + 0x1124],0x0
// 0057da06: JZ 0x0057dc57
//   XREF to: 0057dc57 (CONDITIONAL_JUMP)
// 0057da0c: TEST EAX,EAX
// 0057da0e: JZ 0x0057dc57
//   XREF to: 0057dc57 (CONDITIONAL_JUMP)
// 0057da14: CMP dword ptr [0x00679394],0x280
//   Label: LAB_0057da14
//   XREF to: 00679394 (READ)
// 0057da1e: JZ 0x0057df2e
//   XREF to: 0057df2e (CONDITIONAL_JUMP)
// 0057da24: MOV ECX,0x647eaf
//   Label: LAB_0057da24
//   XREF to: 00647eaf (PARAM)
// 0057da29: MOV EBX,0xc92
// 0057da2e: PUSH 0x647ec3
//   XREF to: 00647ec3 (DATA)
// 0057da33: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0057da39: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0057da3f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0057da44: ADD ESP,0x4
// 0057da47: XOR EDI,EDI
//   Label: LAB_0057da47
// 0057da49: MOV ESI,dword ptr [ESP + 0x115c]
// 0057da50: MOV dword ptr [ESP + 0x1154],EDI
// 0057da57: MOV EBX,dword ptr [ESP + 0x1154]
//   Label: LAB_0057da57
// 0057da5e: XOR ECX,ECX
// 0057da60: XOR EDI,EDI
// 0057da62: MOV EBX,dword ptr [EBX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 0057da68: MOV EDX,dword ptr [ESP + 0x112c]
//   Label: LAB_0057da68
// 0057da6f: LEA EAX,[ESI + 0x1]
// 0057da72: TEST EDX,EDX
// 0057da74: JZ 0x0057df5b
//   XREF to: 0057df5b (CONDITIONAL_JUMP)
// 0057da7a: MOVZX ESI,byte ptr [ESI]
// 0057da7d: MOV EDX,dword ptr [ESP + ESI*0x4]
// 0057da80: MOV dword ptr [ESP + 0x113c],EDX
// 0057da87: SUB EDX,ECX
// 0057da89: MOV ESI,EAX
// 0057da8b: MOV EAX,EDX
// 0057da8d: SAR EDX,0x1f
// 0057da90: SUB EAX,EDX
// 0057da92: SAR EAX,0x1
// 0057da94: ADD EAX,0x80
// 0057da99: TEST EAX,EAX
// 0057da9b: JL 0x0057df43
//   XREF to: 0057df43 (CONDITIONAL_JUMP)
// 0057daa1: CMP EAX,0xff
// 0057daa6: JLE 0x0057daad
//   XREF to: 0057daad (CONDITIONAL_JUMP)
// 0057daa8: MOV EAX,0xff
// 0057daad: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_0057daad
//   XREF to: 0067939c (READ)
// 0057dab4: JNZ 0x0057df4a
//   XREF to: 0057df4a (CONDITIONAL_JUMP)
// 0057daba: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 0057dac0: MOV EDX,EAX
// 0057dac2: SHL EDX,CL
// 0057dac4: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 0057daca: MOV dword ptr [ESP + 0x1148],EDX
// 0057dad1: MOV EDX,EAX
// 0057dad3: SHL EDX,CL
// 0057dad5: MOV ECX,EDX
// 0057dad7: MOV EDX,dword ptr [ESP + 0x1148]
// 0057dade: OR EDX,ECX
// 0057dae0: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 0057dae6: SHL EAX,CL
// 0057dae8: MOV ECX,EDX
// 0057daea: OR ECX,EAX
//   Label: LAB_0057daea
// 0057daec: MOV dword ptr [EBX],ECX
//   XREF to: 00ffffff (DATA)
// 0057daee: ADD EBX,0x4
// 0057daf1: MOV ECX,dword ptr [ESP + 0x113c]
// 0057daf8: INC EDI
//   Label: LAB_0057daf8
// 0057daf9: CMP EDI,0x280
// 0057daff: JL 0x0057da68
//   XREF to: 0057da68 (CONDITIONAL_JUMP)
// 0057db05: MOV ECX,dword ptr [ESP + 0x1154]
// 0057db0c: ADD ECX,0x4
// 0057db0f: MOV dword ptr [ESP + 0x1154],ECX
// 0057db16: CMP ECX,0x780
// 0057db1c: JNZ 0x0057da57
//   XREF to: 0057da57 (CONDITIONAL_JUMP)
// 0057db22: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   Label: LAB_0057db22
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0057db27: MOV ESI,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 0057db2d: PUSH ESI
//   XREF to: 02d81a9c (DATA)
// 0057db2e: CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   XREF to: 004d7d90 (UNCONDITIONAL_CALL)
// 0057db33: ADD ESP,0x4
// 0057db36: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0057db3b: PUSH 0x1
// 0057db3d: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0057db3f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0057db40: CALL dword ptr [EDX + 0x4]
// 0057db43: ADD ESP,0x8
// 0057db46: TEST EAX,EAX
// 0057db48: JZ 0x0057e206
//   XREF to: 0057e206 (CONDITIONAL_JUMP)
// 0057db4e: MOV ESI,0x64805e
//   Label: LAB_0057db4e
//   XREF to: 0064805e (DATA)
// 0057db53: MOV EAX,dword ptr [ESP + 0x1164]
// 0057db5a: MOV EDI,0xd78
// 0057db5f: PUSH EAX
// 0057db60: MOV dword ptr [0x0067d20c],ESI
//   XREF to: 0067d20c (WRITE)
// 0057db66: MOV dword ptr [0x02f0d944],EDI
//   XREF to: 02f0d944 (WRITE)
// 0057db6c: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0057db71: ADD ESP,0x4
// 0057db74: MOV EDX,dword ptr [0x00681ab8]
//   XREF to: 03f48f84 (PARAM)
//   XREF to: 00681ab8 (READ)
// 0057db7a: PUSH EDX
//   XREF to: 03f48f84 (DATA)
// 0057db7b: MOV EBX,0xd80
// 0057db80: CALL core_skeleton.cpp_DoNothing_FUN_005a20a0
//   XREF to: 005a20a0 (UNCONDITIONAL_CALL)
// 0057db85: MOV ECX,0x648072
//   XREF to: 00648072 (PARAM)
// 0057db8a: ADD ESP,0x4
// 0057db8d: MOV dword ptr [0x02f0d944],EBX
//   XREF to: 02f0d944 (WRITE)
// 0057db93: MOV ESI,dword ptr [ESP + 0x1158]
// 0057db9a: MOV dword ptr [0x0067d20c],ECX
//   XREF to: 0067d20c (WRITE)
// 0057dba0: TEST ESI,ESI
// 0057dba2: JZ 0x0057dbb8
//   XREF to: 0057dbb8 (CONDITIONAL_JUMP)
// 0057dba4: PUSH 0x0
// 0057dba6: PUSH ESI
// 0057dba7: CALL core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00476d90
//   XREF to: 00476d90 (UNCONDITIONAL_CALL)
// 0057dbac: ADD ESP,0x8
// 0057dbaf: PUSH EAX
// 0057dbb0: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0057dbb5: ADD ESP,0x4
// 0057dbb8: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   Label: LAB_0057dbb8
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0057dbbd: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0057dbc2: DEC EAX
// 0057dbc3: PUSH EAX
// 0057dbc4: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0057dbc9: DEC EAX
// 0057dbca: PUSH EAX
// 0057dbcb: PUSH 0x0
// 0057dbcd: PUSH 0x0
// 0057dbcf: CALL engine_2d.c_setupViewportAndClipping_FUN_00401800
//   XREF to: 00401800 (UNCONDITIONAL_CALL)
// 0057dbd4: ADD ESP,0x10
// 0057dbd7: MOV EAX,dword ptr [ESP + 0x115c]
// 0057dbde: TEST EAX,EAX
// 0057dbe0: JNZ 0x0057e405
//   XREF to: 0057e405 (CONDITIONAL_JUMP)
// 0057dbe6: MOV EAX,dword ptr [ESP + 0x1120]
// 0057dbed: MOV ESP,EBP
// 0057dbef: POP EBP
// 0057dbf0: POP EDI
// 0057dbf1: POP ESI
// 0057dbf2: POP EBX
// 0057dbf3: RET
// 0057dbf4: MOV EAX,0x647ded
//   Label: LAB_0057dbf4
//   XREF to: 00647ded (PARAM)
// 0057dbf9: MOV EDX,0xc3b
// 0057dbfe: PUSH 0x647e01
//   XREF to: 00647e01 (DATA)
// 0057dc03: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0057dc08: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0057dc0e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0057dc13: ADD ESP,0x4
// 0057dc16: JMP 0x0057d6e9
//   XREF to: 0057d6e9 (UNCONDITIONAL_JUMP)
// 0057dc1b: MOV ECX,dword ptr [ESP + 0x1138]
//   Label: LAB_0057dc1b
// 0057dc22: SHL ESI,0x10
// 0057dc25: SHL ECX,0x8
// 0057dc28: OR ECX,ESI
// 0057dc2a: JMP 0x0057d8f2
//   XREF to: 0057d8f2 (UNCONDITIONAL_JUMP)
// 0057dc2f: MOV ESI,0x647e8c
//   Label: LAB_0057dc2f
//   XREF to: 00647e8c (DATA)
// 0057dc34: MOV EDI,0xc82
// 0057dc39: PUSH 0x647ea0
//   XREF to: 00647ea0 (DATA)
// 0057dc3e: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0057dc44: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0057dc4a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0057dc4f: ADD ESP,0x4
// 0057dc52: JMP 0x0057d988
//   XREF to: 0057d988 (UNCONDITIONAL_JUMP)
// 0057dc57: PUSH 0x18
//   Label: LAB_0057dc57
// 0057dc59: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0057dc5e: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0057dc5f: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0057dc61: CALL dword ptr [EDX]
// 0057dc63: ADD ESP,0x8
// 0057dc66: TEST EAX,EAX
// 0057dc68: JNZ 0x0057da14
//   XREF to: 0057da14 (CONDITIONAL_JUMP)
// 0057dc6e: MOV EDX,dword ptr [0x00681ab8]
//   Label: LAB_0057dc6e
//   XREF to: 03f48f84 (PARAM)
//   XREF to: 00681ab8 (READ)
// 0057dc74: MOV EAX,dword ptr [EDX]
//   XREF to: 03f48f84 (READ)
// 0057dc76: MOV dword ptr [ESP + 0x10e0],EAX
// 0057dc7d: LEA EAX,[EDX + 0x4]
//   XREF to: 03f48f88 (DATA)
// 0057dc80: MOV EAX,dword ptr [EAX]
//   XREF to: 03f48f88 (READ)
// 0057dc82: MOV dword ptr [ESP + 0x10e4],EAX
// 0057dc89: LEA EAX,[EDX + 0x8]
//   XREF to: 03f48f8c (DATA)
// 0057dc8c: MOV EAX,dword ptr [EAX]
//   XREF to: 03f48f8c (READ)
// 0057dc8e: LEA ECX,[EDX + 0xc]
//   XREF to: 03f48f90 (PARAM)
//   XREF to: 03f48f90 (DATA)
// 0057dc91: MOV dword ptr [ESP + 0x10e8],EAX
// 0057dc98: MOV EAX,dword ptr [ECX]
//   XREF to: 03f48f90 (READ)
// 0057dc9a: MOV dword ptr [ESP + 0x10ec],EAX
// 0057dca1: LEA EAX,[ECX + 0x4]
//   XREF to: 03f48f94 (DATA)
// 0057dca4: MOV EAX,dword ptr [EAX]
//   XREF to: 03f48f94 (READ)
// 0057dca6: MOV dword ptr [ESP + 0x10f0],EAX
// 0057dcad: LEA EAX,[ECX + 0x8]
//   XREF to: 03f48f98 (DATA)
// 0057dcb0: MOV EAX,dword ptr [EAX]
//   XREF to: 03f48f98 (READ)
// 0057dcb2: MOV dword ptr [ESP + 0x10f4],EAX
// 0057dcb9: MOV EAX,dword ptr [EDX + 0x18]
//   XREF to: 03f48f9c (READ)
// 0057dcbc: PUSH EDX
//   XREF to: 03f48f84 (DATA)
// 0057dcbd: MOV dword ptr [ESP + 0x10fc],EAX
// 0057dcc4: CALL core_skeleton.cpp_FUN_005a20b0
//   XREF to: 005a20b0 (UNCONDITIONAL_CALL)
// 0057dcc9: MOV EAX,[0x00681ab8]
//   XREF to: 00681ab8 (READ)
// 0057dcce: ADD ESP,0x4
// 0057dcd1: CMP EAX,0x32758e8
//   XREF to: 032758e8 (DATA)
// 0057dcd6: JZ 0x0057dcf2
//   XREF to: 0057dcf2 (CONDITIONAL_JUMP)
// 0057dcd8: FLD float ptr [EAX]
//   XREF to: 03f48f84 (READ)
// 0057dcda: FLD float ptr [EAX + 0x8]
//   XREF to: 03f48f8c (READ)
// 0057dcdd: MOV EDX,dword ptr [EAX + 0x4]
//   XREF to: 03f48f88 (READ)
// 0057dce0: MOV dword ptr [0x032758ec],EDX
//   XREF to: 032758ec (WRITE)
// 0057dce6: FSTP float ptr [0x032758f0]
//   XREF to: 032758f0 (WRITE)
// 0057dcec: FSTP float ptr [0x032758e8]
//   XREF to: 032758e8 (WRITE)
// 0057dcf2: MOV EAX,[0x00681ab8]
//   Label: LAB_0057dcf2
//   XREF to: 00681ab8 (READ)
// 0057dcf7: ADD EAX,0xc
//   XREF to: 03f48f90 (PARAM)
// 0057dcfa: PUSH EAX
//   XREF to: 03f48f90 (DATA)
// 0057dcfb: PUSH 0x32758f4
//   XREF to: 032758f4 (DATA)
// 0057dd00: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 0057dd05: ADD ESP,0x8
// 0057dd08: MOV EAX,[0x00681ab8]
//   XREF to: 03f48f84 (PARAM)
//   XREF to: 00681ab8 (READ)
// 0057dd0d: PUSH 0x0
// 0057dd0f: FLD float ptr [EAX + 0x18]
//   XREF to: 03f48f9c (READ)
// 0057dd12: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0057dd17: FSTP float ptr [0x0327591c]
//   XREF to: 0327591c (WRITE)
// 0057dd1d: CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430
//   XREF to: 0044c430 (UNCONDITIONAL_CALL)
// 0057dd22: ADD ESP,0x8
// 0057dd25: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 0057dd2a: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0057dd2f: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0057dd30: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 0057dd35: ADD ESP,0x8
// 0057dd38: CMP dword ptr [ESP + 0x1128],0x0
// 0057dd40: JZ 0x0057df72
//   XREF to: 0057df72 (CONDITIONAL_JUMP)
// 0057dd46: MOV dword ptr [0x03277d14],0x4
//   XREF to: 03277d14 (WRITE)
// 0057dd50: PUSH 0x0
//   Label: LAB_0057dd50
// 0057dd52: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057dd55: PUSH 0x461c3f9a
// 0057dd5a: PUSH ESI
// 0057dd5b: CALL core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
//   XREF to: 0056a190 (UNCONDITIONAL_CALL)
// 0057dd60: ADD ESP,0xc
// 0057dd63: PUSH 0x0
// 0057dd65: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0057dd6a: CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80
//   XREF to: 0044cb80 (UNCONDITIONAL_CALL)
// 0057dd6f: ADD ESP,0x8
// 0057dd72: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0057dd77: PUSH 0x39
// 0057dd79: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0057dd7b: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0057dd7c: CALL dword ptr [EDX + 0x4]
// 0057dd7f: ADD ESP,0x8
// 0057dd82: TEST EAX,EAX
// 0057dd84: JZ 0x0057df81
//   XREF to: 0057df81 (CONDITIONAL_JUMP)
// 0057dd8a: IMUL EDX,dword ptr [EBP + 0x18],0x1a4
//   XREF to: Stack[0x8] (READ)
// 0057dd91: LEA EAX,[ESI + 0x4]
// 0057dd94: ADD EAX,EDX
// 0057dd96: LEA EDX,[EAX + 0x100]
// 0057dd9c: MOV EAX,[0x00681ab8]
//   XREF to: 00681ab8 (READ)
// 0057dda1: CMP EDX,EAX
// 0057dda3: JZ 0x0057ddb5
//   XREF to: 0057ddb5 (CONDITIONAL_JUMP)
// 0057dda5: MOV ECX,dword ptr [EAX]
//   XREF to: 03f48f84 (READ)
// 0057dda7: MOV dword ptr [EDX],ECX
// 0057dda9: MOV ECX,dword ptr [EAX + 0x4]
//   XREF to: 03f48f88 (READ)
// 0057ddac: MOV dword ptr [EDX + 0x4],ECX
// 0057ddaf: MOV ECX,dword ptr [EAX + 0x8]
//   XREF to: 03f48f8c (READ)
// 0057ddb2: MOV dword ptr [EDX + 0x8],ECX
// 0057ddb5: IMUL EDX,dword ptr [EBP + 0x18],0x1a4
//   Label: LAB_0057ddb5
//   XREF to: Stack[0x8] (READ)
// 0057ddbc: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057ddbf: ADD ECX,0x4
// 0057ddc2: MOV EAX,[0x00681ab8]
//   XREF to: 00681ab8 (READ)
// 0057ddc7: ADD EDX,ECX
// 0057ddc9: ADD EAX,0xc
// 0057ddcc: ADD EDX,0x10c
// 0057ddd2: CMP EDX,EAX
// 0057ddd4: JZ 0x0057dde6
//   XREF to: 0057dde6 (CONDITIONAL_JUMP)
// 0057ddd6: MOV ECX,dword ptr [EAX]
//   XREF to: 03f48f90 (READ)
// 0057ddd8: MOV dword ptr [EDX],ECX
// 0057ddda: MOV ECX,dword ptr [EAX + 0x4]
//   XREF to: 03f48f94 (READ)
// 0057dddd: MOV dword ptr [EDX + 0x4],ECX
// 0057dde0: MOV ECX,dword ptr [EAX + 0x8]
//   XREF to: 03f48f98 (READ)
// 0057dde3: MOV dword ptr [EDX + 0x8],ECX
// 0057dde6: IMUL EBX,dword ptr [EBP + 0x18],0x1a4
//   Label: LAB_0057dde6
//   XREF to: Stack[0x8] (READ)
// 0057dded: MOV EAX,[0x00681ab8]
//   XREF to: 00681ab8 (READ)
// 0057ddf2: ADD EAX,0xc
// 0057ddf5: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057ddf8: FLD float ptr [EAX + 0xc]
//   XREF to: 03f48f9c (READ)
// 0057ddfb: PUSH EAX
//   XREF to: 03f48f90 (DATA)
// 0057ddfc: LEA EAX,[EDX + 0x4]
// 0057ddff: FSTP float ptr [EDX + EBX*0x1 + 0x148]
// 0057de06: ADD EBX,EAX
// 0057de08: LEA EAX,[EBX + 0x118]
// 0057de0e: PUSH EAX
// 0057de0f: MOV EDI,0x43fa0000
// 0057de14: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 0057de19: ADD ESP,0x8
// 0057de1c: LEA EAX,[EBX + 0x100]
// 0057de22: MOV dword ptr [ESP + 0x10fc],EDI
// 0057de29: MOV dword ptr [ESP + 0x1100],EDI
// 0057de30: MOV dword ptr [ESP + 0x1104],EDI
// 0057de37: FLD float ptr [0x0064809d]
//   XREF to: 0064809d (READ)
// 0057de3d: FLD float ptr [EAX]
// 0057de3f: FADD ST0,ST1
// 0057de41: FSTP float ptr [ESP + 0x1114]
// 0057de48: FLD float ptr [EAX + 0x4]
// 0057de4b: FADD ST0,ST1
// 0057de4d: LEA EDX,[EBX + 0x17c]
// 0057de53: FSTP float ptr [ESP + 0x1118]
// 0057de5a: FADD float ptr [EAX + 0x8]
// 0057de5d: LEA EAX,[ESP + 0x1114]
// 0057de64: FSTP float ptr [ESP + 0x111c]
// 0057de6b: CMP EDX,EAX
// 0057de6d: JZ 0x0057de8c
//   XREF to: 0057de8c (CONDITIONAL_JUMP)
// 0057de6f: MOV EAX,dword ptr [ESP + 0x1114]
// 0057de76: MOV dword ptr [EDX],EAX
// 0057de78: MOV EAX,dword ptr [ESP + 0x1118]
// 0057de7f: MOV dword ptr [EDX + 0x4],EAX
// 0057de82: MOV EAX,dword ptr [ESP + 0x111c]
// 0057de89: MOV dword ptr [EDX + 0x8],EAX
// 0057de8c: IMUL EDX,dword ptr [EBP + 0x18],0x1a4
//   Label: LAB_0057de8c
//   XREF to: Stack[0x8] (READ)
// 0057de93: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057de96: ADD EAX,0x4
// 0057de99: ADD EDX,EAX
// 0057de9b: LEA EAX,[EDX + 0x100]
// 0057dea1: FLD float ptr [EAX]
// 0057dea3: FADD float ptr [ESP + 0x10fc]
// 0057deaa: FSTP float ptr [ESP + 0x1108]
// 0057deb1: FLD float ptr [EAX + 0x4]
// 0057deb4: FADD float ptr [ESP + 0x1100]
// 0057debb: ADD EDX,0x188
// 0057dec1: FSTP float ptr [ESP + 0x110c]
// 0057dec8: FLD float ptr [EAX + 0x8]
// 0057decb: FADD float ptr [ESP + 0x1104]
// 0057ded2: LEA EAX,[ESP + 0x1108]
// 0057ded9: FSTP float ptr [ESP + 0x1110]
// 0057dee0: CMP EDX,EAX
// 0057dee2: JZ 0x0057df01
//   XREF to: 0057df01 (CONDITIONAL_JUMP)
// 0057dee4: MOV EAX,dword ptr [ESP + 0x1108]
// 0057deeb: MOV dword ptr [EDX],EAX
// 0057deed: MOV EAX,dword ptr [ESP + 0x110c]
// 0057def4: MOV dword ptr [EDX + 0x4],EAX
// 0057def7: MOV EAX,dword ptr [ESP + 0x1110]
// 0057defe: MOV dword ptr [EDX + 0x8],EAX
// 0057df01: IMUL EAX,dword ptr [EBP + 0x18],0x1a4
//   Label: LAB_0057df01
//   XREF to: Stack[0x8] (READ)
// 0057df08: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057df0b: ADD EDX,0x4
// 0057df0e: ADD EAX,EDX
// 0057df10: PUSH EAX
// 0057df11: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057df14: PUSH ESI
// 0057df15: MOV EDI,0x1
// 0057df1a: CALL core_setedit.cpp_FUN_0057d340
//   XREF to: 0057d340 (UNCONDITIONAL_CALL)
// 0057df1f: ADD ESP,0x8
// 0057df22: MOV dword ptr [ESP + 0x1120],EDI
// 0057df29: JMP 0x0057db4e
//   XREF to: 0057db4e (UNCONDITIONAL_JUMP)
// 0057df2e: CMP dword ptr [0x00679398],0x1e0
//   Label: LAB_0057df2e
//   XREF to: 00679398 (READ)
// 0057df38: JNZ 0x0057da24
//   XREF to: 0057da24 (CONDITIONAL_JUMP)
// 0057df3e: JMP 0x0057da47
//   XREF to: 0057da47 (UNCONDITIONAL_JUMP)
// 0057df43: XOR EAX,EAX
//   Label: LAB_0057df43
// 0057df45: JMP 0x0057daad
//   XREF to: 0057daad (UNCONDITIONAL_JUMP)
// 0057df4a: MOV EDX,EAX
//   Label: LAB_0057df4a
// 0057df4c: MOV ECX,EAX
// 0057df4e: SHL EDX,0x8
// 0057df51: SHL ECX,0x10
// 0057df54: OR ECX,EDX
// 0057df56: JMP 0x0057daea
//   XREF to: 0057daea (UNCONDITIONAL_JUMP)
// 0057df5b: MOVZX ESI,byte ptr [ESI]
//   Label: LAB_0057df5b
// 0057df5e: ADD EBX,0x4
// 0057df61: MOV EDX,dword ptr [ESP + ESI*0x4 + 0x400]
// 0057df68: MOV ESI,EAX
// 0057df6a: MOV dword ptr [EBX + -0x4],EDX
// 0057df6d: JMP 0x0057daf8
//   XREF to: 0057daf8 (UNCONDITIONAL_JUMP)
// 0057df72: MOV dword ptr [0x03277d14],0x1
//   Label: LAB_0057df72
//   XREF to: 03277d14 (WRITE)
// 0057df7c: JMP 0x0057dd50
//   XREF to: 0057dd50 (UNCONDITIONAL_JUMP)
// 0057df81: MOV EDX,dword ptr [0x00681ab8]
//   Label: LAB_0057df81
//   XREF to: 03f48f84 (PARAM)
//   XREF to: 00681ab8 (READ)
// 0057df87: FLD float ptr [ESP + 0x10e0]
// 0057df8e: FCOMP float ptr [EDX]
//   XREF to: 03f48f84 (READ)
// 0057df90: FNSTSW AX
// 0057df92: SAHF
// 0057df93: JZ 0x0057e0fa
//   XREF to: 0057e0fa (CONDITIONAL_JUMP)
// 0057df99: XOR EDI,EDI
//   Label: LAB_0057df99
// 0057df9b: MOV dword ptr [ESP + 0x1168],EDI
// 0057dfa2: CMP dword ptr [ESP + 0x1128],0x0
//   Label: LAB_0057dfa2
// 0057dfaa: JZ 0x0057e043
//   XREF to: 0057e043 (CONDITIONAL_JUMP)
// 0057dfb0: CMP dword ptr [ESP + 0x1168],0x0
// 0057dfb8: JZ 0x0057e173
//   XREF to: 0057e173 (CONDITIONAL_JUMP)
// 0057dfbe: MOV EAX,dword ptr [ESP + 0x1164]
//   Label: LAB_0057dfbe
// 0057dfc5: PUSH EAX
// 0057dfc6: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057dfc9: PUSH EDX
// 0057dfca: CALL core_setedit.cpp_CDemonSet_FUN_0057ff70
//   XREF to: 0057ff70 (UNCONDITIONAL_CALL)
// 0057dfcf: ADD ESP,0x8
// 0057dfd2: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0057dfd5: PUSH ECX
// 0057dfd6: LEA EAX,[ESP + 0x804]
// 0057dfdd: PUSH EAX
// 0057dfde: MOV EBX,dword ptr [0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 0057dfe4: PUSH EBX
// 0057dfe5: MOV ESI,dword ptr [0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 0057dfeb: PUSH ESI
// 0057dfec: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057dfef: PUSH EDI
// 0057dff0: CALL core_setedit.cpp_CDemonSet_FUN_005800d0
//   XREF to: 005800d0 (UNCONDITIONAL_CALL)
// 0057dff5: ADD ESP,0x14
// 0057dff8: TEST EAX,EAX
// 0057dffa: JLE 0x0057e032
//   XREF to: 0057e032 (CONDITIONAL_JUMP)
// 0057dffc: MOV ESI,0x21
// 0057e001: LEA EDI,[EAX*0x4 + 0x0]
// 0057e008: XOR EBX,EBX
// 0057e00a: IMUL EAX,dword ptr [ESP + EBX*0x1 + 0x800],0x1a4
//   Label: LAB_0057e00a
// 0057e015: ADD EAX,dword ptr [ESP + 0x114c]
// 0057e01c: PUSH EAX
// 0057e01d: PUSH ESI
// 0057e01e: PUSH 0x0
// 0057e020: ADD EBX,0x4
// 0057e023: CALL engine_2d.c_drawTextXY_FUN_00402130
//   XREF to: 00402130 (UNCONDITIONAL_CALL)
// 0057e028: ADD ESI,0xb
// 0057e02b: ADD ESP,0xc
// 0057e02e: CMP EBX,EDI
// 0057e030: JL 0x0057e00a
//   XREF to: 0057e00a (CONDITIONAL_JUMP)
// 0057e032: PUSH 0x0
//   Label: LAB_0057e032
// 0057e034: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0057e03a: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 0057e03b: CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
//   XREF to: 004a1380 (UNCONDITIONAL_CALL)
// 0057e040: ADD ESP,0x8
// 0057e043: PUSH 0x0
//   Label: LAB_0057e043
// 0057e045: PUSH 0x0
// 0057e047: PUSH 0x647edb
//   XREF to: 00647edb (DATA)
// 0057e04c: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057e051: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 0057e056: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 0057e05c: FLD1
// 0057e05e: FDIVRP
// 0057e060: ADD ESP,0xc
// 0057e063: SUB ESP,0x8
// 0057e066: FSTP double ptr [ESP]
// 0057e069: PUSH 0x647f1e
//   XREF to: 00647f1e (DATA)
// 0057e06e: LEA EAX,[ESP + 0xf9c]
// 0057e075: PUSH EAX
// 0057e076: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057e07b: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0057e080: ADD ESP,0x10
// 0057e083: SUB EAX,0xb
// 0057e086: PUSH EAX
// 0057e087: PUSH 0x0
// 0057e089: LEA EAX,[ESP + 0xf98]
// 0057e090: PUSH EAX
// 0057e091: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057e096: ADD ESP,0xc
// 0057e099: MOV EAX,dword ptr [ESP + 0x1150]
// 0057e0a0: CMP dword ptr [EAX + 0x144],0x0
// 0057e0a7: JZ 0x0057e19c
//   XREF to: 0057e19c (CONDITIONAL_JUMP)
// 0057e0ad: MOV EAX,[0x00681ab8]
//   XREF to: 00681ab8 (READ)
// 0057e0b2: SUB ESP,0x8
// 0057e0b5: FLD float ptr [EAX + 0x8]
//   XREF to: 03f48f8c (READ)
// 0057e0b8: FSTP double ptr [ESP]
// 0057e0bb: SUB ESP,0x8
// 0057e0be: FLD float ptr [EAX + 0x4]
//   XREF to: 03f48f88 (READ)
// 0057e0c1: FSTP double ptr [ESP]
// 0057e0c4: SUB ESP,0x8
// 0057e0c7: FLD float ptr [EAX]
//   XREF to: 03f48f84 (READ)
// 0057e0c9: FSTP double ptr [ESP]
// 0057e0cc: PUSH 0x647f21
//   XREF to: 00647f21 (DATA)
// 0057e0d1: LEA EAX,[ESP + 0xfac]
// 0057e0d8: PUSH EAX
// 0057e0d9: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057e0de: ADD ESP,0x20
// 0057e0e1: PUSH 0xb
//   Label: LAB_0057e0e1
// 0057e0e3: PUSH 0x0
// 0057e0e5: LEA EAX,[ESP + 0xf98]
// 0057e0ec: PUSH EAX
// 0057e0ed: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0057e0f2: ADD ESP,0xc
// 0057e0f5: JMP 0x0057db22
//   XREF to: 0057db22 (UNCONDITIONAL_JUMP)
// 0057e0fa: FLD float ptr [ESP + 0x10e4]
//   Label: LAB_0057e0fa
// 0057e101: FCOMP float ptr [EDX + 0x4]
//   XREF to: 03f48f88 (READ)
// 0057e104: FNSTSW AX
// 0057e106: SAHF
// 0057e107: JNZ 0x0057df99
//   XREF to: 0057df99 (CONDITIONAL_JUMP)
// 0057e10d: FLD float ptr [ESP + 0x10e8]
// 0057e114: FCOMP float ptr [EDX + 0x8]
//   XREF to: 03f48f8c (READ)
// 0057e117: FNSTSW AX
// 0057e119: SAHF
// 0057e11a: JNZ 0x0057df99
//   XREF to: 0057df99 (CONDITIONAL_JUMP)
// 0057e120: LEA ECX,[EDX + 0xc]
//   XREF to: 03f48f90 (DATA)
// 0057e123: FLD float ptr [ESP + 0x10ec]
// 0057e12a: FCOMP float ptr [ECX]
//   XREF to: 03f48f90 (READ)
// 0057e12c: FNSTSW AX
// 0057e12e: SAHF
// 0057e12f: JNZ 0x0057df99
//   XREF to: 0057df99 (CONDITIONAL_JUMP)
// 0057e135: FLD float ptr [ESP + 0x10f0]
// 0057e13c: FCOMP float ptr [ECX + 0x4]
//   XREF to: 03f48f94 (READ)
// 0057e13f: FNSTSW AX
// 0057e141: SAHF
// 0057e142: JNZ 0x0057df99
//   XREF to: 0057df99 (CONDITIONAL_JUMP)
// 0057e148: FLD float ptr [ESP + 0x10f4]
// 0057e14f: FCOMP float ptr [ECX + 0x8]
//   XREF to: 03f48f98 (READ)
// 0057e152: FNSTSW AX
// 0057e154: SAHF
// 0057e155: JNZ 0x0057df99
//   XREF to: 0057df99 (CONDITIONAL_JUMP)
// 0057e15b: FLD float ptr [ESP + 0x10f8]
// 0057e162: FCOMP float ptr [EDX + 0x18]
//   XREF to: 03f48f9c (READ)
// 0057e165: FNSTSW AX
// 0057e167: SAHF
// 0057e168: JNZ 0x0057df99
//   XREF to: 0057df99 (CONDITIONAL_JUMP)
// 0057e16e: JMP 0x0057dfa2
//   XREF to: 0057dfa2 (UNCONDITIONAL_JUMP)
// 0057e173: MOV ECX,dword ptr [EBP + 0x18]
//   Label: LAB_0057e173
//   XREF to: Stack[0x8] (READ)
// 0057e176: PUSH ECX
// 0057e177: MOV EBX,dword ptr [ESP + 0x1168]
// 0057e17e: PUSH EBX
// 0057e17f: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057e182: PUSH ESI
// 0057e183: MOV EDI,0x1
// 0057e188: CALL core_setedit.cpp_Something2MemoryConstructorMaybe_FUN_0057fd00
//   XREF to: 0057fd00 (UNCONDITIONAL_CALL)
// 0057e18d: ADD ESP,0xc
// 0057e190: MOV dword ptr [ESP + 0x1168],EDI
// 0057e197: JMP 0x0057dfbe
//   XREF to: 0057dfbe (UNCONDITIONAL_JUMP)
// 0057e19c: MOV EAX,[0x00681ab8]
//   Label: LAB_0057e19c
//   XREF to: 00681ab8 (READ)
// 0057e1a1: SUB ESP,0x8
// 0057e1a4: FLD float ptr [EAX + 0x18]
//   XREF to: 03f48f9c (READ)
// 0057e1a7: FSTP double ptr [ESP]
// 0057e1aa: FLD double ptr [0x006480a5]
//   XREF to: 006480a5 (READ)
// 0057e1b0: FLD float ptr [EAX + 0x10]
//   XREF to: 03f48f94 (READ)
// 0057e1b3: FMUL ST1
// 0057e1b5: FLD double ptr [0x006480ad]
//   XREF to: 006480ad (READ)
// 0057e1bb: FXCH
// 0057e1bd: FMUL ST1
// 0057e1bf: SUB ESP,0x8
// 0057e1c2: FSTP double ptr [ESP]
// 0057e1c5: FLD float ptr [EAX + 0xc]
//   XREF to: 03f48f90 (READ)
// 0057e1c8: FMULP ST2
// 0057e1ca: FMULP
// 0057e1cc: SUB ESP,0x8
// 0057e1cf: FSTP double ptr [ESP]
// 0057e1d2: SUB ESP,0x8
// 0057e1d5: FLD float ptr [EAX + 0x8]
//   XREF to: 03f48f8c (READ)
// 0057e1d8: FSTP double ptr [ESP]
// 0057e1db: SUB ESP,0x8
// 0057e1de: FLD float ptr [EAX + 0x4]
//   XREF to: 03f48f88 (READ)
// 0057e1e1: FSTP double ptr [ESP]
// 0057e1e4: SUB ESP,0x8
// 0057e1e7: FLD float ptr [EAX]
//   XREF to: 03f48f84 (READ)
// 0057e1e9: FSTP double ptr [ESP]
// 0057e1ec: PUSH 0x647f45
//   XREF to: 00647f45 (DATA)
// 0057e1f1: LEA EAX,[ESP + 0xfc4]
// 0057e1f8: PUSH EAX
// 0057e1f9: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057e1fe: ADD ESP,0x38
// 0057e201: JMP 0x0057e0e1
//   XREF to: 0057e0e1 (UNCONDITIONAL_JUMP)
// 0057e206: PUSH 0x3b
//   Label: LAB_0057e206
// 0057e208: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0057e20d: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0057e20e: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0057e210: CALL dword ptr [EDX + 0x4]
// 0057e213: ADD ESP,0x8
// 0057e216: TEST EAX,EAX
// 0057e218: JNZ 0x0057e268
//   XREF to: 0057e268 (CONDITIONAL_JUMP)
// 0057e21a: MOV ESI,0x32758e4
//   Label: LAB_0057e21a
//   XREF to: 032758e4 (DATA)
// 0057e21f: CALL wincore_winrun.cpp_wasKeyPressed_FUN_005f2f00
//   Label: LAB_0057e21f
//   XREF to: 005f2f00 (UNCONDITIONAL_CALL)
// 0057e224: TEST EAX,EAX
// 0057e226: JZ 0x0057d9ca
//   XREF to: 0057d9ca (CONDITIONAL_JUMP)
// 0057e22c: MOV EDI,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0057e232: PUSH EDI
//   XREF to: 02dcd7d4 (DATA)
// 0057e233: CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
//   XREF to: 00502470 (UNCONDITIONAL_CALL)
// 0057e238: ADD ESP,0x4
// 0057e23b: CMP EAX,0x46
// 0057e23e: JNC 0x0057e3dc
//   XREF to: 0057e3dc (CONDITIONAL_JUMP)
// 0057e244: CMP EAX,0x43
// 0057e247: JC 0x0057e21f
//   XREF to: 0057e21f (CONDITIONAL_JUMP)
// 0057e249: JA 0x0057e3fb
//   XREF to: 0057e3fb (CONDITIONAL_JUMP)
// 0057e24f: CMP dword ptr [ESP + 0x1128],0x0
// 0057e257: SETZ AL
// 0057e25a: AND EAX,0xff
// 0057e25f: MOV dword ptr [ESP + 0x1128],EAX
// 0057e266: JMP 0x0057e21f
//   XREF to: 0057e21f (UNCONDITIONAL_JUMP)
// 0057e268: LEA EAX,[ESP + 0xbe8]
//   Label: LAB_0057e268
// 0057e26f: PUSH EAX
// 0057e270: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0057e275: ADD ESP,0x4
// 0057e278: PUSH 0x647f81
//   XREF to: 00647f81 (DATA)
// 0057e27d: LEA EAX,[ESP + 0xbec]
// 0057e284: PUSH EAX
// 0057e285: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0057e28a: ADD ESP,0x8
// 0057e28d: PUSH 0x647f9b
//   XREF to: 00647f9b (DATA)
// 0057e292: LEA EAX,[ESP + 0xbec]
// 0057e299: PUSH EAX
// 0057e29a: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0057e29f: ADD ESP,0x8
// 0057e2a2: PUSH 0x647fb0
//   XREF to: 00647fb0 (DATA)
// 0057e2a7: LEA EAX,[ESP + 0xbec]
// 0057e2ae: PUSH EAX
// 0057e2af: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0057e2b4: ADD ESP,0x8
// 0057e2b7: PUSH 0x647fd3
//   XREF to: 00647fd3 (DATA)
// 0057e2bc: LEA EAX,[ESP + 0xbec]
// 0057e2c3: PUSH EAX
// 0057e2c4: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0057e2c9: ADD ESP,0x8
// 0057e2cc: PUSH 0x647fee
//   XREF to: 00647fee (DATA)
// 0057e2d1: LEA EAX,[ESP + 0xbec]
// 0057e2d8: PUSH EAX
// 0057e2d9: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0057e2de: ADD ESP,0x8
// 0057e2e1: PUSH 0x0
// 0057e2e3: PUSH -0x1
// 0057e2e5: PUSH 0x64801d
//   XREF to: 0064801d (DATA)
// 0057e2ea: LEA EAX,[ESP + 0xbf4]
// 0057e2f1: PUSH EAX
// 0057e2f2: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0057e2f7: ADD ESP,0x10
// 0057e2fa: PUSH 0x0
// 0057e2fc: LEA EAX,[ESP + 0xbec]
// 0057e303: PUSH EAX
// 0057e304: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0057e309: ADD ESP,0x8
// 0057e30c: JMP 0x0057e21a
//   XREF to: 0057e21a (UNCONDITIONAL_JUMP)
// 0057e311: CMP dword ptr [ESP + 0x1140],0x0
//   Label: LAB_0057e311
// 0057e319: SETZ AL
// 0057e31c: AND EAX,0xff
// 0057e321: MOV dword ptr [ESP + 0x1140],EAX
// 0057e328: JZ 0x0057e34b
//   XREF to: 0057e34b (CONDITIONAL_JUMP)
// 0057e32a: PUSH 0xf0
// 0057e32f: PUSH ESI
//   Label: LAB_0057e32f
//   XREF to: 032758e4 (DATA)
// 0057e330: CALL core_dcamera.cpp_CDemonCamera_init_FUN_0044c190
//   XREF to: 0044c190 (UNCONDITIONAL_CALL)
// 0057e335: ADD ESP,0x8
// 0057e338: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0057e33d: XOR ECX,ECX
// 0057e33f: MOV dword ptr [ESP + 0x1168],ECX
// 0057e346: JMP 0x0057e21f
//   XREF to: 0057e21f (UNCONDITIONAL_JUMP)
// 0057e34b: PUSH 0x1e0
//   Label: LAB_0057e34b
// 0057e350: JMP 0x0057e32f
//   XREF to: 0057e32f (UNCONDITIONAL_JUMP)
// 0057e352: CMP dword ptr [ESP + 0x1124],0x0
//   Label: LAB_0057e352
// 0057e35a: SETZ AL
// 0057e35d: AND EAX,0xff
// 0057e362: MOV dword ptr [ESP + 0x1124],EAX
// 0057e369: JMP 0x0057e21f
//   XREF to: 0057e21f (UNCONDITIONAL_JUMP)
// 0057e36e: MOV EAX,dword ptr [ESP + 0x1150]
//   Label: LAB_0057e36e
// 0057e375: MOV EDI,dword ptr [EAX + 0x144]
// 0057e37b: TEST EDI,EDI
// 0057e37d: JZ 0x0057e398
//   XREF to: 0057e398 (CONDITIONAL_JUMP)
// 0057e37f: PUSH 0x648034
//   XREF to: 00648034 (DATA)
// 0057e384: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0057e38a: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0057e38b: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0057e390: ADD ESP,0x8
// 0057e393: JMP 0x0057e21f
//   XREF to: 0057e21f (UNCONDITIONAL_JUMP)
// 0057e398: PUSH 0x1
//   Label: LAB_0057e398
// 0057e39a: PUSH 0x0
// 0057e39c: PUSH 0x0
// 0057e39e: MOV EAX,[0x00681ab8]
//   XREF to: 00681ab8 (READ)
// 0057e3a3: PUSH EDI
// 0057e3a4: ADD EAX,0x18
// 0057e3a7: PUSH EAX
//   XREF to: 03f48f9c (DATA)
// 0057e3a8: PUSH 0x648054
//   XREF to: 00648054 (DATA)
// 0057e3ad: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0057e3b2: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0057e3b3: CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   XREF to: 004a00f0 (UNCONDITIONAL_CALL)
// 0057e3b8: ADD ESP,0x1c
// 0057e3bb: JMP 0x0057e21f
//   XREF to: 0057e21f (UNCONDITIONAL_JUMP)
// 0057e3c0: CMP dword ptr [ESP + 0x112c],0x0
//   Label: LAB_0057e3c0
// 0057e3c8: SETZ AL
// 0057e3cb: AND EAX,0xff
// 0057e3d0: MOV dword ptr [ESP + 0x112c],EAX
// 0057e3d7: JMP 0x0057e21f
//   XREF to: 0057e21f (UNCONDITIONAL_JUMP)
// 0057e3dc: JBE 0x0057e36e
//   Label: LAB_0057e3dc
//   XREF to: 0057e36e (CONDITIONAL_JUMP)
// 0057e3de: CMP EAX,0x53
// 0057e3e1: JC 0x0057e21f
//   XREF to: 0057e21f (CONDITIONAL_JUMP)
// 0057e3e7: JBE 0x0057e352
//   XREF to: 0057e352 (CONDITIONAL_JUMP)
// 0057e3ed: CMP EAX,0x57
// 0057e3f0: JZ 0x0057e311
//   XREF to: 0057e311 (CONDITIONAL_JUMP)
// 0057e3f6: JMP 0x0057e21f
//   XREF to: 0057e21f (UNCONDITIONAL_JUMP)
// 0057e3fb: CMP EAX,0x44
//   Label: LAB_0057e3fb
// 0057e3fe: JZ 0x0057e3c0
//   XREF to: 0057e3c0 (CONDITIONAL_JUMP)
// 0057e400: JMP 0x0057e21f
//   XREF to: 0057e21f (UNCONDITIONAL_JUMP)
// 0057e405: PUSH 0xd8c
//   Label: LAB_0057e405
// 0057e40a: PUSH 0x648086
//   XREF to: 00648086 (DATA)
// 0057e40f: PUSH EAX
// 0057e410: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 0057e415: ADD ESP,0xc
// 0057e418: MOV EAX,dword ptr [ESP + 0x1120]
// 0057e41f: MOV ESP,EBP
// 0057e421: POP EBP
// 0057e422: POP EDI
// 0057e423: POP ESI
// 0057e424: POP EBX
// 0057e425: RET
