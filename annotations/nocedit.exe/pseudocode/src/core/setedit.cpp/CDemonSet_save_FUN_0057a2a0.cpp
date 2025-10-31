// Name: core_setedit.cpp_CDemonSet_save_FUN_0057a2a0
// Address: 0057a2a0
// Address Range: [[0057a2a0, 0057a93c]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_CDemonSet_save_FUN_0057a2a0(CDemonSet * this_ptr, char * filename)
// Cross-references:
//   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 (00584940) at 00584e61 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057ed41 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 00580e54 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 (0057c5d0) at 0057cd6f [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_wt_0064741d
//   TerminatedCString s_models_00647420
//   TerminatedCString s_core_setedit_cpp_00647427
//   TerminatedCString s_CDemonSet_Unable_to_save_0064743b
//   TerminatedCString s_d_0064745c
//   TerminatedCString s_f_00647460
//   TerminatedCString s_unused_act_00647464
//   TerminatedCString s_s_00647470
//   TerminatedCString s_f_00647474
//   TerminatedCString s_waterHeight_waterTileSiz_00647478
//   TerminatedCString s_f_f_00647493
//   TerminatedCString s_useEnviroModel_enviroMod_0064749a
//   TerminatedCString s_d_s_006474ba
//   TerminatedCString s_transparentWaterFlag_006474c1
//   TerminatedCString s_d_006474d7
//   TerminatedCString s_hasSky_006474db
//   TerminatedCString s_d_006474e3
//   TerminatedCString s_s_0_none_006474e7
//   TerminatedCString s_d_s_006474ef
//   TerminatedCString s_useWorldGeometryFlag_wor_006474f6
//   TerminatedCString s_s_1_s_0064751e
//   TerminatedCString s_s_0_none_00647524
//   TerminatedCString s_weatherType_0064752c
//   TerminatedCString s_d_00647539
//   TerminatedCString s_lightCount_0064753d
//   TerminatedCString s_d_00647549
//   TerminatedCString s_cameraCount_0064754d
//   TerminatedCString s_d_0064755a
//   TerminatedCString s_Room_size_info_0064755e
//   TerminatedCString s_d_0064756e
//   TerminatedCString s_d_00647572
//   TerminatedCString s_g_g_g_00647576
//   TerminatedCString s_g_g_g_00647580
//   TerminatedCString s_g_g_g_0064758a
//   TerminatedCString s_d_00647594
//   TerminatedCString s_Default_ground_type_00647598
//   TerminatedCString s_d_006475ad
//   TerminatedCString s_Default_master_reverb_006475b1
//   TerminatedCString s_d_006475c8
//   TerminatedCString s_Virtual_director_boxes_006475cc
//   TerminatedCString s_d_006475e4
//   TerminatedCString s_g_g_g_006475e8
//   TerminatedCString s_g_g_g_006475f2
//   TerminatedCString s_g_g_g_006475fc
//   TerminatedCString s_PVS_list_00647606
//   TerminatedCString s_core_setedit_cpp_00647610
//   TerminatedCString s_zth_00647624
//   undefined4 DAT_00647625
//   undefined4 DAT_00647626
//   undefined4 DAT_00647627
//   CWater* g_CWaterPtr = 03f875e0
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CWater g_CWaterInstance
//   undefined4 DAT_03f875e4
//   undefined4 DAT_03f875e8
// Function calls:
//   core_dcamera.cpp_saveCameraFog_FUN_00453f10
//   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575f60
//   core_setdir.cpp_CDemonSet_writeThumbs_FUN_00575e40
//   core_setutil.cpp_C3DSCamera_save_FUN_00585a40
//   core_setutil.cpp_C3DSCamera_savePVS_FUN_00587450
//   core_setutil.cpp_C3DSLight_save_FUN_00587090
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_save_FUN_0057a2a0(CDemonSet *this_ptr,char *filename)

{
  double dVar1;
  double dVar2;
  char cVar3;
  SRoom *pSVar4;
  SVDBox *pSVar5;
  FILE *file;
  C3DSLight *this_ptr_00;
  C3DSCamera *pCVar6;
  BADSPACEBASE *in_ESP;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  float in_stack_00000038;
  float in_stack_0000003c;
  float in_stack_00000040;
  float in_stack_00000048;
  CMatrix3x3f *in_stack_0000004c;
  SRoom *in_stack_00000050;
  CMatrix3x3f *in_stack_00000058;
  SVDBox *in_stack_00000064;
  CMatrix3x3f *in_stack_0000006c;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  
  this_ptr->set_file_version = 0x1c;
  file = engine_dosio_c_getFile_FUN_00481a50("models",filename,"wt");
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0x6d6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::Unable to save output");
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",this_ptr->set_file_version);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%f\n",(double)this_ptr->set_scale_factor);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"unused.act\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%s\n",this_ptr->geometry_filename);
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file,"%f\n",SUB84((double)this_ptr->min_ambient_value,0),
             (int)((ulonglong)(double)this_ptr->min_ambient_value >> 0x20));
  core_dcamera_cpp_saveCameraFog_FUN_00453f10((SFog *)(this_ptr->field19_0x14f0a0 + 0xbb90),file);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"waterHeight,waterTileSize\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file,"%f,%f\n",SUB84((double)g_CWaterPtr->water_level_y,0),
             (int)((ulonglong)(double)g_CWaterPtr->water_level_y >> 0x20),
             (double)g_CWaterPtr->tile_size);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"useEnviroModel,enviroModelName\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file,"%d,%s\n",this_ptr->use_enviro_model,this_ptr->enviro_model_name);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"transparentWaterFlag\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",g_CWaterPtr->wave_animation_enabled);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"hasSky\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",this_ptr->has_sky);
  if (this_ptr->has_sky == 0) {
    crt_stdio_c_fprintf_FUN_005fe6d0(file,"0,none\n");
  }
  else {
    crt_stdio_c_fprintf_FUN_005fe6d0
              (file,"%d,%s\n",this_ptr->sky_type,this_ptr->sky_texture_name);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"useWorldGeometryFlag,worldGeometryName\n");
  if (this_ptr->use_world_geometry_flag == 0) {
    crt_stdio_c_fprintf_FUN_005fe6d0(file,"0,none\n");
  }
  else {
    crt_stdio_c_fprintf_FUN_005fe6d0(file,"1,%s\n",this_ptr->world_geometry_name);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"weatherType\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"lightCount\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  iVar10 = 0;
  if (0 < this_ptr->light_count) {
    this_ptr_00 = this_ptr->lights;
    do {
      core_setutil_cpp_C3DSLight_save_FUN_00587090(this_ptr_00,file);
      iVar10 = iVar10 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar10 < this_ptr->light_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"cameraCount\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  iVar10 = 0;
  if (0 < this_ptr->camera_count) {
    pCVar6 = this_ptr->cameras;
    do {
      core_setutil_cpp_C3DSCamera_save_FUN_00585a40(pCVar6,file);
      iVar10 = iVar10 + 1;
      pCVar6 = pCVar6 + 1;
    } while (iVar10 < this_ptr->camera_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"Room size info\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",this_ptr->room_reverb_type);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",this_ptr->room_count);
  iVar10 = 0;
  if (0 < this_ptr->room_count) {
    in_stack_00000050 = this_ptr->rooms;
    in_stack_00000058 = &this_ptr->rooms[0].rotation_matrix;
    do {
      pSVar4 = in_stack_00000050;
      dVar13 = (double)in_stack_00000050[iVar10].position.z;
      dVar12 = (double)in_stack_00000050[iVar10].position.y;
      crt_stdio_c_fprintf_FUN_005fe6d0(file,"%g,%g,%g\n");
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file,"%g,%g,%g\n",(double)pSVar4[iVar10].extents.x,
                 (double)pSVar4[iVar10].extents.y,(double)pSVar4[iVar10].extents.z,SUB84(dVar12,0),
                 (int)((ulonglong)dVar12 >> 0x20),SUB84(dVar13,0),(int)((ulonglong)dVar13 >> 0x20));
      core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                (in_stack_0000004c,(CVector3f *)&stack0x00000034);
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file,"%g,%g,%g\n",(double)in_stack_00000038,(double)in_stack_00000040,
                 SUB84((double)in_stack_0000003c,0),
                 (int)((ulonglong)(double)in_stack_0000003c >> 0x20));
      crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",pSVar4[iVar10].field4_0x40);
      iVar10 = iVar10 + 1;
      in_stack_00000058 = (CMatrix3x3f *)((int)(in_stack_00000058 + 1) + 0x20);
    } while (iVar10 < this_ptr->room_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"Default ground type\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",this_ptr->default_ground_type);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"Default master reverb\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",this_ptr->default_master_reverb);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"Virtual director boxes\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",this_ptr->vdir_box_count);
  iVar10 = 0;
  if (0 < this_ptr->vdir_box_count) {
    in_stack_00000064 = this_ptr->vdir_boxes;
    in_stack_0000006c = &this_ptr->vdir_boxes[0].rotation_matrix;
    do {
      pSVar5 = in_stack_00000064;
      dVar13 = (double)in_stack_00000064[iVar10].position.z;
      uVar14 = (undefined4)((ulonglong)(double)in_stack_00000064[iVar10].position.y >> 0x20);
      crt_stdio_c_fprintf_FUN_005fe6d0(file,"%g,%g,%g\n");
      dVar12 = (double)pSVar5[iVar10].extents.z;
      dVar1 = (double)pSVar5[iVar10].extents.y;
      dVar2 = (double)pSVar5[iVar10].extents.x;
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file,"%g,%g,%g\n",SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20),SUB84(dVar1,0)
                 ,(int)((ulonglong)dVar1 >> 0x20),SUB84(dVar12,0),(int)((ulonglong)dVar12 >> 0x20),
                 uVar14,SUB84(dVar13,0),(int)((ulonglong)dVar13 >> 0x20));
      core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                ((CMatrix3x3f *)in_stack_00000064,(CVector3f *)&stack0x00000044);
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file,"%g,%g,%g\n",SUB84((double)in_stack_00000048,0),
                 (int)((ulonglong)(double)in_stack_00000048 >> 0x20),
                 SUB84((double)(float)in_stack_00000050,0),
                 (int)((ulonglong)(double)(float)in_stack_00000050 >> 0x20),
                 SUB84((double)(float)in_stack_0000004c,0),
                 (int)((ulonglong)(double)(float)in_stack_0000004c >> 0x20));
      iVar10 = iVar10 + 1;
      in_stack_0000006c = (CMatrix3x3f *)((int)(in_stack_0000006c + 1) + 0x20);
    } while (iVar10 < this_ptr->vdir_box_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"PVS list\n");
  iVar10 = 0;
  if (0 < this_ptr->camera_count) {
    pCVar6 = this_ptr->cameras;
    do {
      core_setutil_cpp_C3DSCamera_savePVS_FUN_00587450(pCVar6,file);
      iVar10 = iVar10 + 1;
      pCVar6 = pCVar6 + 1;
    } while (iVar10 < this_ptr->camera_count);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\setedit.cpp",0x74d);
  pcVar11 = &stack0xfffffff0;
  pcVar9 = &stack0xfffffff0;
  pcVar7 = this_ptr->geometry_filename;
  do {
    cVar3 = *pcVar7;
    *pcVar11 = cVar3;
    pcVar8 = &stack0xfffffff0;
    if (cVar3 == '\0') break;
    cVar3 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar11[1] = cVar3;
    pcVar11 = pcVar11 + 2;
    pcVar8 = &stack0xfffffff0;
  } while (cVar3 != '\0');
  do {
    pcVar11 = pcVar8;
    if (*pcVar8 == '.') goto LAB_0057a874;
    if (*pcVar8 == '\0') break;
    pcVar11 = pcVar8 + 1;
    if (*pcVar11 == '.') goto LAB_0057a874;
    pcVar8 = pcVar8 + 2;
  } while (*pcVar11 != '\0');
  pcVar11 = (char *)0x0;
LAB_0057a874:
  if (pcVar11 == (char *)0x0) {
    do {
      pcVar11 = pcVar9;
      if (*pcVar9 == '\0') goto LAB_0057a87e;
      if (*pcVar9 == '\0') break;
      pcVar11 = pcVar9 + 1;
      if (*pcVar11 == '\0') goto LAB_0057a87e;
      pcVar9 = pcVar9 + 2;
    } while (*pcVar11 != '\0');
    pcVar11 = (char *)0x0;
  }
LAB_0057a87e:
  pcVar9 = ".zth";
  do {
    cVar3 = *pcVar9;
    *pcVar11 = cVar3;
    if (cVar3 == '\0') break;
    cVar3 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar11[1] = cVar3;
    pcVar11 = pcVar11 + 2;
  } while (cVar3 != '\0');
  core_setdir_cpp_CDemonSet_saveThumbs_FUN_00575f60(this_ptr);
  core_setdir_cpp_CDemonSet_writeThumbs_FUN_00575e40(this_ptr,&stack0xfffffff4);
  return;
}


// Assembly code:
// 0057a2a0: PUSH EBX
//   Label: core_setedit.cpp_CDemonSet_save_FUN_0057a2a0
// 0057a2a1: PUSH ESI
// 0057a2a2: PUSH EDI
// 0057a2a3: PUSH EBP
// 0057a2a4: MOV EBP,ESP
// 0057a2a6: SUB ESP,0x8c
// 0057a2ac: AND ESP,0xfffffff8
// 0057a2af: PUSH 0x64741d
//   XREF to: 0064741d (DATA)
// 0057a2b4: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0057a2b7: PUSH EDX
// 0057a2b8: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057a2bb: PUSH 0x647420
//   XREF to: 00647420 (DATA)
// 0057a2c0: MOV dword ptr [EAX + 0x15acac],0x1c
// 0057a2ca: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0057a2cf: ADD ESP,0xc
// 0057a2d2: MOV ESI,EAX
// 0057a2d4: TEST EAX,EAX
// 0057a2d6: JZ 0x0057a8bc
//   XREF to: 0057a8bc (CONDITIONAL_JUMP)
// 0057a2dc: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0057a2dc
//   XREF to: Stack[0x4] (READ)
// 0057a2df: MOV EDI,dword ptr [EAX + 0x15acac]
// 0057a2e5: PUSH EDI
// 0057a2e6: PUSH 0x64745c
//   XREF to: 0064745c (DATA)
// 0057a2eb: PUSH ESI
// 0057a2ec: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a2f1: ADD ESP,0xc
// 0057a2f4: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057a2f7: SUB ESP,0x8
// 0057a2fa: FLD float ptr [EAX + 0x15ae94]
// 0057a300: FSTP double ptr [ESP]
//   XREF to: Stack[-0xa8] (DATA)
// 0057a303: PUSH 0x647460
//   XREF to: 00647460 (DATA)
// 0057a308: PUSH ESI
// 0057a309: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a30e: ADD ESP,0x10
// 0057a311: PUSH 0x647464
//   XREF to: 00647464 (DATA)
// 0057a316: PUSH ESI
// 0057a317: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a31c: ADD ESP,0x8
// 0057a31f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057a322: ADD EAX,0x14d0f0
// 0057a327: PUSH EAX
// 0057a328: PUSH 0x647470
//   XREF to: 00647470 (DATA)
// 0057a32d: PUSH ESI
// 0057a32e: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a333: ADD ESP,0xc
// 0057a336: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057a339: SUB ESP,0x8
// 0057a33c: FLD float ptr [EAX + 0x14d150]
// 0057a342: FSTP double ptr [ESP]
//   XREF to: Stack[-0xa8] (DATA)
// 0057a345: PUSH 0x647474
//   XREF to: 00647474 (DATA)
// 0057a34a: PUSH ESI
// 0057a34b: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a350: ADD ESP,0x10
// 0057a353: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057a356: PUSH ESI
// 0057a357: ADD EAX,0x15ac30
// 0057a35c: PUSH EAX
// 0057a35d: CALL core_dcamera.cpp_saveCameraFog_FUN_00453f10
//   XREF to: 00453f10 (UNCONDITIONAL_CALL)
// 0057a362: ADD ESP,0x8
// 0057a365: PUSH 0x647478
//   XREF to: 00647478 (DATA)
// 0057a36a: PUSH ESI
// 0057a36b: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a370: ADD ESP,0x8
// 0057a373: MOV EAX,[0x006844f0]
//   XREF to: 03f875e0 (PARAM)
//   XREF to: 006844f0 (READ)
// 0057a378: SUB ESP,0x8
// 0057a37b: FLD float ptr [EAX + 0x8]
//   XREF to: 03f875e8 (READ)
// 0057a37e: FSTP double ptr [ESP]
//   XREF to: Stack[-0xa8] (DATA)
// 0057a381: SUB ESP,0x8
// 0057a384: FLD float ptr [EAX + 0x4]
//   XREF to: 03f875e4 (READ)
// 0057a387: FSTP double ptr [ESP]
//   XREF to: Stack[-0xb0] (DATA)
// 0057a38a: PUSH 0x647493
//   XREF to: 00647493 (DATA)
// 0057a38f: PUSH ESI
// 0057a390: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a395: ADD ESP,0x18
// 0057a398: PUSH 0x64749a
//   XREF to: 0064749a (DATA)
// 0057a39d: PUSH ESI
// 0057a39e: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a3a3: ADD ESP,0x8
// 0057a3a6: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057a3a9: ADD EAX,0x15ac98
// 0057a3ae: PUSH EAX
// 0057a3af: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057a3b2: MOV EDX,dword ptr [EAX + 0x15ac94]
// 0057a3b8: PUSH EDX
// 0057a3b9: PUSH 0x6474ba
//   XREF to: 006474ba (DATA)
// 0057a3be: PUSH ESI
// 0057a3bf: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a3c4: ADD ESP,0x10
// 0057a3c7: PUSH 0x6474c1
//   XREF to: 006474c1 (DATA)
// 0057a3cc: PUSH ESI
// 0057a3cd: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a3d2: MOV EAX,[0x006844f0]
//   XREF to: 03f875e0 (PARAM)
//   XREF to: 006844f0 (READ)
// 0057a3d7: ADD ESP,0x8
// 0057a3da: MOV ECX,dword ptr [EAX]
//   XREF to: 03f875e0 (READ)
// 0057a3dc: PUSH ECX
// 0057a3dd: PUSH 0x6474d7
//   XREF to: 006474d7 (DATA)
// 0057a3e2: PUSH ESI
// 0057a3e3: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a3e8: ADD ESP,0xc
// 0057a3eb: PUSH 0x6474db
//   XREF to: 006474db (DATA)
// 0057a3f0: PUSH ESI
// 0057a3f1: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a3f6: ADD ESP,0x8
// 0057a3f9: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057a3fc: MOV EBX,dword ptr [EAX + 0x161628]
// 0057a402: PUSH EBX
// 0057a403: PUSH 0x6474e3
//   XREF to: 006474e3 (DATA)
// 0057a408: PUSH ESI
// 0057a409: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a40e: ADD ESP,0xc
// 0057a411: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057a414: CMP dword ptr [EAX + 0x161628],0x0
// 0057a41b: JNZ 0x0057a8e4
//   XREF to: 0057a8e4 (CONDITIONAL_JUMP)
// 0057a421: PUSH 0x6474e7
//   XREF to: 006474e7 (DATA)
// 0057a426: PUSH ESI
// 0057a427: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a42c: ADD ESP,0x8
// 0057a42f: PUSH 0x6474f6
//   Label: LAB_0057a42f
//   XREF to: 006474f6 (DATA)
// 0057a434: PUSH ESI
// 0057a435: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a43a: ADD ESP,0x8
// 0057a43d: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057a440: CMP dword ptr [EAX + 0x15ae4c],0x0
// 0057a447: JZ 0x0057a907
//   XREF to: 0057a907 (CONDITIONAL_JUMP)
// 0057a44d: ADD EAX,0x15ae50
// 0057a452: PUSH EAX
// 0057a453: PUSH 0x64751e
//   XREF to: 0064751e (DATA)
// 0057a458: PUSH ESI
// 0057a459: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a45e: ADD ESP,0xc
// 0057a461: PUSH 0x64752c
//   Label: LAB_0057a461
//   XREF to: 0064752c (DATA)
// 0057a466: PUSH ESI
// 0057a467: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a46c: ADD ESP,0x8
// 0057a46f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057a472: MOV EBX,dword ptr [EAX + 0x161668]
// 0057a478: PUSH EBX
// 0057a479: PUSH 0x647539
//   XREF to: 00647539 (DATA)
// 0057a47e: PUSH ESI
// 0057a47f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a484: ADD ESP,0xc
// 0057a487: PUSH 0x64753d
//   XREF to: 0064753d (DATA)
// 0057a48c: PUSH ESI
// 0057a48d: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a492: ADD ESP,0x8
// 0057a495: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057a498: MOV EDI,dword ptr [EAX + 0x19a2c]
// 0057a49e: PUSH EDI
// 0057a49f: PUSH 0x647549
//   XREF to: 00647549 (DATA)
// 0057a4a4: PUSH ESI
// 0057a4a5: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a4aa: ADD ESP,0xc
// 0057a4ad: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057a4b0: MOV EDX,dword ptr [EAX + 0x19a2c]
// 0057a4b6: XOR EDI,EDI
// 0057a4b8: TEST EDX,EDX
// 0057a4ba: JLE 0x0057a4e0
//   XREF to: 0057a4e0 (CONDITIONAL_JUMP)
// 0057a4bc: LEA EBX,[EAX + 0x19a30]
// 0057a4c2: PUSH ESI
//   Label: LAB_0057a4c2
// 0057a4c3: PUSH EBX
// 0057a4c4: CALL core_setutil.cpp_C3DSLight_save_FUN_00587090
//   XREF to: 00587090 (UNCONDITIONAL_CALL)
// 0057a4c9: ADD ESP,0x8
// 0057a4cc: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057a4cf: INC EDI
// 0057a4d0: MOV ECX,dword ptr [EAX + 0x19a2c]
// 0057a4d6: ADD EBX,0x1898
// 0057a4dc: CMP EDI,ECX
// 0057a4de: JL 0x0057a4c2
//   XREF to: 0057a4c2 (CONDITIONAL_JUMP)
// 0057a4e0: PUSH 0x64754d
//   Label: LAB_0057a4e0
//   XREF to: 0064754d (DATA)
// 0057a4e5: PUSH ESI
// 0057a4e6: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a4eb: ADD ESP,0x8
// 0057a4ee: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057a4f1: MOV EBX,dword ptr [EAX]
// 0057a4f3: PUSH EBX
// 0057a4f4: PUSH 0x64755a
//   XREF to: 0064755a (DATA)
// 0057a4f9: PUSH ESI
// 0057a4fa: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a4ff: ADD ESP,0xc
// 0057a502: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057a505: MOV EDI,dword ptr [EAX]
// 0057a507: XOR EBX,EBX
// 0057a509: TEST EDI,EDI
// 0057a50b: JLE 0x0057a530
//   XREF to: 0057a530 (CONDITIONAL_JUMP)
// 0057a50d: LEA EDI,[EAX + 0x4]
// 0057a510: PUSH ESI
//   Label: LAB_0057a510
// 0057a511: PUSH EDI
// 0057a512: CALL core_setutil.cpp_C3DSCamera_save_FUN_00585a40
//   XREF to: 00585a40 (UNCONDITIONAL_CALL)
// 0057a517: ADD ESP,0x8
// 0057a51a: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057a51d: INC EBX
// 0057a51e: MOV EDX,dword ptr [EAX]
// 0057a520: ADD EDI,0x1a4
// 0057a526: CMP EBX,EDX
// 0057a528: JL 0x0057a510
//   XREF to: 0057a510 (CONDITIONAL_JUMP)
// 0057a52a: LEA EAX,[EAX]
// 0057a530: PUSH 0x64755e
//   Label: LAB_0057a530
//   XREF to: 0064755e (DATA)
// 0057a535: PUSH ESI
// 0057a536: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a53b: ADD ESP,0x8
// 0057a53e: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057a541: MOV ECX,dword ptr [EAX + 0x15aeb8]
// 0057a547: PUSH ECX
// 0057a548: PUSH 0x64756e
//   XREF to: 0064756e (DATA)
// 0057a54d: PUSH ESI
// 0057a54e: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a553: ADD ESP,0xc
// 0057a556: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057a559: MOV EBX,dword ptr [EAX + 0x15aebc]
// 0057a55f: PUSH EBX
// 0057a560: PUSH 0x647572
//   XREF to: 00647572 (DATA)
// 0057a565: PUSH ESI
// 0057a566: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a56b: ADD ESP,0xc
// 0057a56e: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057a571: MOV EDX,dword ptr [EAX + 0x15aebc]
// 0057a577: XOR EDI,EDI
// 0057a579: TEST EDX,EDX
// 0057a57b: JLE 0x0057a680
//   XREF to: 0057a680 (CONDITIONAL_JUMP)
// 0057a581: ADD EAX,0x15aec0
// 0057a586: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0057a58d: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057a590: ADD EAX,0x15aed8
// 0057a595: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0057a59c: IMUL EBX,EDI,0x44
//   Label: LAB_0057a59c
// 0057a59f: ADD EBX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x20] (READ)
// 0057a5a6: SUB ESP,0x8
// 0057a5a9: FLD float ptr [EBX + 0x8]
// 0057a5ac: FSTP double ptr [ESP]
//   XREF to: Stack[-0xa8] (DATA)
// 0057a5af: SUB ESP,0x8
// 0057a5b2: FLD float ptr [EBX + 0x4]
// 0057a5b5: FSTP double ptr [ESP]
//   XREF to: Stack[-0xb0] (DATA)
// 0057a5b8: SUB ESP,0x8
// 0057a5bb: FLD float ptr [EBX]
// 0057a5bd: FSTP double ptr [ESP]
//   XREF to: Stack[-0xb8] (DATA)
// 0057a5c0: PUSH 0x647576
//   XREF to: 00647576 (DATA)
// 0057a5c5: PUSH ESI
// 0057a5c6: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a5cb: ADD ESP,0x20
// 0057a5ce: SUB ESP,0x8
// 0057a5d1: FLD float ptr [EBX + 0x14]
// 0057a5d4: FSTP double ptr [ESP]
//   XREF to: Stack[-0xa8] (DATA)
// 0057a5d7: SUB ESP,0x8
// 0057a5da: FLD float ptr [EBX + 0x10]
// 0057a5dd: FSTP double ptr [ESP]
//   XREF to: Stack[-0xb0] (DATA)
// 0057a5e0: SUB ESP,0x8
// 0057a5e3: FLD float ptr [EBX + 0xc]
// 0057a5e6: FSTP double ptr [ESP]
//   XREF to: Stack[-0xb8] (DATA)
// 0057a5e9: PUSH 0x647580
//   XREF to: 00647580 (DATA)
// 0057a5ee: PUSH ESI
// 0057a5ef: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a5f4: ADD ESP,0x20
// 0057a5f7: LEA EAX,[ESP + 0x70]
//   XREF to: Stack[-0x30] (DATA)
// 0057a5fb: PUSH EAX
// 0057a5fc: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x18] (READ)
// 0057a603: PUSH EAX
// 0057a604: CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
//   XREF to: 00472160 (UNCONDITIONAL_CALL)
// 0057a609: ADD ESP,0x8
// 0057a60c: FLD float ptr [ESP + 0x74]
//   XREF to: Stack[-0x2c] (READ)
// 0057a610: SUB ESP,0x8
// 0057a613: FSTP double ptr [ESP]
//   XREF to: Stack[-0xa8] (DATA)
// 0057a616: FLD float ptr [ESP + 0x80]
//   XREF to: Stack[-0x28] (READ)
// 0057a61d: SUB ESP,0x8
// 0057a620: FSTP double ptr [ESP]
//   XREF to: Stack[-0xb0] (DATA)
// 0057a623: FLD float ptr [ESP + 0x80]
//   XREF to: Stack[-0x30] (READ)
// 0057a62a: SUB ESP,0x8
// 0057a62d: FSTP double ptr [ESP]
//   XREF to: Stack[-0xb8] (DATA)
// 0057a630: PUSH 0x64758a
//   XREF to: 0064758a (DATA)
// 0057a635: PUSH ESI
// 0057a636: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a63b: ADD ESP,0x20
// 0057a63e: MOV EDX,dword ptr [EBX + 0x40]
// 0057a641: PUSH EDX
// 0057a642: PUSH 0x647594
//   XREF to: 00647594 (DATA)
// 0057a647: PUSH ESI
// 0057a648: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a64d: ADD ESP,0xc
// 0057a650: MOV ECX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x18] (READ)
// 0057a657: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057a65a: INC EDI
// 0057a65b: ADD ECX,0x44
// 0057a65e: MOV EBX,dword ptr [EAX + 0x15aebc]
// 0057a664: MOV dword ptr [ESP + 0x88],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0057a66b: CMP EDI,EBX
// 0057a66d: JL 0x0057a59c
//   XREF to: 0057a59c (CONDITIONAL_JUMP)
// 0057a673: LEA EAX,[EAX]
// 0057a679: LEA EDX,[EDX]
// 0057a67f: NOP
// 0057a680: PUSH 0x647598
//   Label: LAB_0057a680
//   XREF to: 00647598 (DATA)
// 0057a685: PUSH ESI
// 0057a686: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a68b: ADD ESP,0x8
// 0057a68e: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057a691: MOV EDI,dword ptr [EAX + 0x15f67c]
// 0057a697: PUSH EDI
// 0057a698: PUSH 0x6475ad
//   XREF to: 006475ad (DATA)
// 0057a69d: PUSH ESI
// 0057a69e: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a6a3: ADD ESP,0xc
// 0057a6a6: PUSH 0x6475b1
//   XREF to: 006475b1 (DATA)
// 0057a6ab: PUSH ESI
// 0057a6ac: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a6b1: ADD ESP,0x8
// 0057a6b4: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057a6b7: MOV EDX,dword ptr [EAX + 0x15ac7c]
// 0057a6bd: PUSH EDX
// 0057a6be: PUSH 0x6475c8
//   XREF to: 006475c8 (DATA)
// 0057a6c3: PUSH ESI
// 0057a6c4: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a6c9: ADD ESP,0xc
// 0057a6cc: PUSH 0x6475cc
//   XREF to: 006475cc (DATA)
// 0057a6d1: PUSH ESI
// 0057a6d2: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a6d7: ADD ESP,0x8
// 0057a6da: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057a6dd: MOV ECX,dword ptr [EAX + 0x15b410]
// 0057a6e3: PUSH ECX
// 0057a6e4: PUSH 0x6475e4
//   XREF to: 006475e4 (DATA)
// 0057a6e9: PUSH ESI
// 0057a6ea: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a6ef: ADD ESP,0xc
// 0057a6f2: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057a6f5: MOV EBX,dword ptr [EAX + 0x15b410]
// 0057a6fb: XOR EDI,EDI
// 0057a6fd: TEST EBX,EBX
// 0057a6ff: JLE 0x0057a7e0
//   XREF to: 0057a7e0 (CONDITIONAL_JUMP)
// 0057a705: ADD EAX,0x15b414
// 0057a70a: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0057a70e: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057a711: ADD EAX,0x15b42c
// 0057a716: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0057a71d: IMUL EBX,EDI,0x44
//   Label: LAB_0057a71d
// 0057a720: ADD EBX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x24] (READ)
// 0057a724: SUB ESP,0x8
// 0057a727: FLD float ptr [EBX + 0x8]
// 0057a72a: FSTP double ptr [ESP]
//   XREF to: Stack[-0xa8] (DATA)
// 0057a72d: SUB ESP,0x8
// 0057a730: FLD float ptr [EBX + 0x4]
// 0057a733: FSTP double ptr [ESP]
//   XREF to: Stack[-0xb0] (DATA)
// 0057a736: SUB ESP,0x8
// 0057a739: FLD float ptr [EBX]
// 0057a73b: FSTP double ptr [ESP]
//   XREF to: Stack[-0xb8] (DATA)
// 0057a73e: PUSH 0x6475e8
//   XREF to: 006475e8 (DATA)
// 0057a743: PUSH ESI
// 0057a744: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a749: ADD ESP,0x20
// 0057a74c: SUB ESP,0x8
// 0057a74f: FLD float ptr [EBX + 0x14]
// 0057a752: FSTP double ptr [ESP]
//   XREF to: Stack[-0xa8] (DATA)
// 0057a755: SUB ESP,0x8
// 0057a758: FLD float ptr [EBX + 0x10]
// 0057a75b: FSTP double ptr [ESP]
//   XREF to: Stack[-0xb0] (DATA)
// 0057a75e: SUB ESP,0x8
// 0057a761: FLD float ptr [EBX + 0xc]
// 0057a764: FSTP double ptr [ESP]
//   XREF to: Stack[-0xb8] (DATA)
// 0057a767: PUSH 0x6475f2
//   XREF to: 006475f2 (DATA)
// 0057a76c: PUSH ESI
// 0057a76d: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a772: ADD ESP,0x20
// 0057a775: LEA EAX,[ESP + 0x64]
//   XREF to: Stack[-0x3c] (DATA)
// 0057a779: PUSH EAX
// 0057a77a: MOV EDX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x1c] (READ)
// 0057a781: PUSH EDX
// 0057a782: CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
//   XREF to: 00472160 (UNCONDITIONAL_CALL)
// 0057a787: ADD ESP,0x8
// 0057a78a: FLD float ptr [ESP + 0x68]
//   XREF to: Stack[-0x38] (READ)
// 0057a78e: SUB ESP,0x8
// 0057a791: FSTP double ptr [ESP]
//   XREF to: Stack[-0xa8] (DATA)
// 0057a794: FLD float ptr [ESP + 0x74]
//   XREF to: Stack[-0x34] (READ)
// 0057a798: SUB ESP,0x8
// 0057a79b: FSTP double ptr [ESP]
//   XREF to: Stack[-0xb0] (DATA)
// 0057a79e: FLD float ptr [ESP + 0x74]
//   XREF to: Stack[-0x3c] (READ)
// 0057a7a2: SUB ESP,0x8
// 0057a7a5: FSTP double ptr [ESP]
//   XREF to: Stack[-0xb8] (DATA)
// 0057a7a8: PUSH 0x6475fc
//   XREF to: 006475fc (DATA)
// 0057a7ad: PUSH ESI
// 0057a7ae: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a7b3: ADD ESP,0x20
// 0057a7b6: MOV ECX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x1c] (READ)
// 0057a7bd: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057a7c0: INC EDI
// 0057a7c1: ADD ECX,0x44
// 0057a7c4: MOV EBX,dword ptr [EAX + 0x15b410]
// 0057a7ca: MOV dword ptr [ESP + 0x84],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 0057a7d1: CMP EDI,EBX
// 0057a7d3: JL 0x0057a71d
//   XREF to: 0057a71d (CONDITIONAL_JUMP)
// 0057a7d9: LEA EAX,[EAX]
// 0057a7df: NOP
// 0057a7e0: PUSH 0x647606
//   Label: LAB_0057a7e0
//   XREF to: 00647606 (DATA)
// 0057a7e5: PUSH ESI
// 0057a7e6: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a7eb: ADD ESP,0x8
// 0057a7ee: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057a7f1: MOV EDX,dword ptr [EAX]
// 0057a7f3: XOR EDI,EDI
// 0057a7f5: TEST EDX,EDX
// 0057a7f7: JLE 0x0057a820
//   XREF to: 0057a820 (CONDITIONAL_JUMP)
// 0057a7f9: LEA EBX,[EAX + 0x4]
// 0057a7fc: PUSH ESI
//   Label: LAB_0057a7fc
// 0057a7fd: PUSH EBX
// 0057a7fe: CALL core_setutil.cpp_C3DSCamera_savePVS_FUN_00587450
//   XREF to: 00587450 (UNCONDITIONAL_CALL)
// 0057a803: ADD ESP,0x8
// 0057a806: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057a809: INC EDI
// 0057a80a: MOV ECX,dword ptr [EAX]
// 0057a80c: ADD EBX,0x1a4
// 0057a812: CMP EDI,ECX
// 0057a814: JL 0x0057a7fc
//   XREF to: 0057a7fc (CONDITIONAL_JUMP)
// 0057a816: LEA EAX,[EAX]
// 0057a81c: LEA EDX,[EDX]
// 0057a820: PUSH 0x74d
//   Label: LAB_0057a820
// 0057a825: PUSH 0x647610
//   XREF to: 00647610 (DATA)
// 0057a82a: PUSH ESI
// 0057a82b: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0057a830: ADD ESP,0xc
// 0057a833: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057a836: MOV EDI,ESP
// 0057a838: ADD ESI,0x14d0f0
// 0057a83e: MOV DL,0x2e
// 0057a840: PUSH EDI
// 0057a841: MOV AL,byte ptr [ESI]
//   Label: LAB_0057a841
// 0057a843: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0xa0] (DATA)
// 0057a845: CMP AL,0x0
// 0057a847: JZ 0x0057a859
//   XREF to: 0057a859 (CONDITIONAL_JUMP)
// 0057a849: MOV AL,byte ptr [ESI + 0x1]
// 0057a84c: ADD ESI,0x2
// 0057a84f: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x9f] (WRITE)
// 0057a852: ADD EDI,0x2
// 0057a855: CMP AL,0x0
// 0057a857: JNZ 0x0057a841
//   XREF to: 0057a841 (CONDITIONAL_JUMP)
// 0057a859: POP EDI
//   Label: LAB_0057a859
// 0057a85a: MOV ESI,ESP
// 0057a85c: MOV AL,byte ptr [ESI]
//   Label: LAB_0057a85c
//   XREF to: Stack[-0xa0] (DATA)
// 0057a85e: CMP AL,DL
// 0057a860: JZ 0x0057a874
//   XREF to: 0057a874 (CONDITIONAL_JUMP)
// 0057a862: CMP AL,0x0
// 0057a864: JZ 0x0057a872
//   XREF to: 0057a872 (CONDITIONAL_JUMP)
// 0057a866: INC ESI
// 0057a867: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x9f] (DATA)
// 0057a869: CMP AL,DL
// 0057a86b: JZ 0x0057a874
//   XREF to: 0057a874 (CONDITIONAL_JUMP)
// 0057a86d: INC ESI
// 0057a86e: CMP AL,0x0
// 0057a870: JNZ 0x0057a85c
//   XREF to: 0057a85c (CONDITIONAL_JUMP)
// 0057a872: SUB ESI,ESI
//   Label: LAB_0057a872
// 0057a874: MOV EDI,ESI
//   Label: LAB_0057a874
// 0057a876: TEST ESI,ESI
// 0057a878: JZ 0x0057a91a
//   XREF to: 0057a91a (CONDITIONAL_JUMP)
// 0057a87e: MOV ESI,0x647624
//   Label: LAB_0057a87e
//   XREF to: 00647624 (DATA)
// 0057a883: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057a886: PUSH EDI
// 0057a887: MOV AL,byte ptr [ESI]
//   Label: LAB_0057a887
//   XREF to: 00647624 (READ)
//   XREF to: 00647626 (READ)
// 0057a889: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x9d] (DATA)
// 0057a88b: CMP AL,0x0
// 0057a88d: JZ 0x0057a89f
//   XREF to: 0057a89f (CONDITIONAL_JUMP)
// 0057a88f: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00647625 (READ)
//   XREF to: 00647627 (READ)
// 0057a892: ADD ESI,0x2
// 0057a895: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x9d] (WRITE)
// 0057a898: ADD EDI,0x2
// 0057a89b: CMP AL,0x0
// 0057a89d: JNZ 0x0057a887
//   XREF to: 0057a887 (CONDITIONAL_JUMP)
// 0057a89f: POP EDI
//   Label: LAB_0057a89f
// 0057a8a0: PUSH EBX
// 0057a8a1: CALL core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575f60
//   XREF to: 00575f60 (UNCONDITIONAL_CALL)
// 0057a8a6: ADD ESP,0x4
// 0057a8a9: MOV EAX,ESP
// 0057a8ab: PUSH EAX
// 0057a8ac: PUSH EBX
// 0057a8ad: CALL core_setdir.cpp_CDemonSet_writeThumbs_FUN_00575e40
//   XREF to: 00575e40 (UNCONDITIONAL_CALL)
// 0057a8b2: ADD ESP,0x8
// 0057a8b5: MOV ESP,EBP
// 0057a8b7: POP EBP
// 0057a8b8: POP EDI
// 0057a8b9: POP ESI
// 0057a8ba: POP EBX
// 0057a8bb: RET
// 0057a8bc: MOV ECX,0x647427
//   Label: LAB_0057a8bc
//   XREF to: 00647427 (PARAM)
// 0057a8c1: MOV EBX,0x6d6
// 0057a8c6: PUSH 0x64743b
//   XREF to: 0064743b (DATA)
// 0057a8cb: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0057a8d1: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0057a8d7: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0057a8dc: ADD ESP,0x4
// 0057a8df: JMP 0x0057a2dc
//   XREF to: 0057a2dc (UNCONDITIONAL_JUMP)
// 0057a8e4: ADD EAX,0x16162c
//   Label: LAB_0057a8e4
// 0057a8e9: PUSH EAX
// 0057a8ea: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0057a8ed: MOV EDX,dword ptr [EAX + 0x16164c]
// 0057a8f3: PUSH EDX
// 0057a8f4: PUSH 0x6474ef
//   XREF to: 006474ef (DATA)
// 0057a8f9: PUSH ESI
// 0057a8fa: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a8ff: ADD ESP,0x10
// 0057a902: JMP 0x0057a42f
//   XREF to: 0057a42f (UNCONDITIONAL_JUMP)
// 0057a907: PUSH 0x647524
//   Label: LAB_0057a907
//   XREF to: 00647524 (DATA)
// 0057a90c: PUSH ESI
// 0057a90d: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a912: ADD ESP,0x8
// 0057a915: JMP 0x0057a461
//   XREF to: 0057a461 (UNCONDITIONAL_JUMP)
// 0057a91a: MOV ESI,ESP
//   Label: LAB_0057a91a
// 0057a91c: XOR DL,DL
// 0057a91e: MOV AL,byte ptr [ESI]
//   Label: LAB_0057a91e
//   XREF to: Stack[-0xa0] (DATA)
// 0057a920: CMP AL,DL
// 0057a922: JZ 0x0057a936
//   XREF to: 0057a936 (CONDITIONAL_JUMP)
// 0057a924: CMP AL,0x0
// 0057a926: JZ 0x0057a934
//   XREF to: 0057a934 (CONDITIONAL_JUMP)
// 0057a928: INC ESI
// 0057a929: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x9f] (DATA)
// 0057a92b: CMP AL,DL
// 0057a92d: JZ 0x0057a936
//   XREF to: 0057a936 (CONDITIONAL_JUMP)
// 0057a92f: INC ESI
// 0057a930: CMP AL,0x0
// 0057a932: JNZ 0x0057a91e
//   XREF to: 0057a91e (CONDITIONAL_JUMP)
// 0057a934: SUB ESI,ESI
//   Label: LAB_0057a934
// 0057a936: MOV EDI,ESI
//   Label: LAB_0057a936
// 0057a938: JMP 0x0057a87e
//   XREF to: 0057a87e (UNCONDITIONAL_JUMP)
