// Name: core_set.cpp_CDemonSet_load_FUN_00569410
// Address: 00569410
// Address Range: [[00569410, 0056a187]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_load_FUN_00569410(CDemonSet * this_ptr, char * filename)
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_addSetToExtractList_FUN_004bd8e0 (004bd8e0) at 004bd909 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_FUN_00523fb0 (00523fb0) at 00523fd8 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 (00584940) at 00584b55 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Loading_set_006458f1
//   TerminatedCString s_rt_006458fd
//   TerminatedCString s_models_00645900
//   TerminatedCString s_core_set_cpp_00645907
//   TerminatedCString s_CDemonSet_Unable_to_open_00645917
//   TerminatedCString s_d_00645934
//   TerminatedCString s_f_00645938
//   TerminatedCString s_s_0064593c
//   TerminatedCString s_s_00645940
//   TerminatedCString s_f_00645944
//   TerminatedCString s_d_d_d_d_00645948
//   TerminatedCString s_f_f_f_00645955
//   TerminatedCString s_f_f_f_f_0064595f
//   TerminatedCString s_f_f_0064596c
//   TerminatedCString s_d_s_00645973
//   TerminatedCString s_d_0064597a
//   TerminatedCString s_ndun_0064597e
//   TerminatedCString s_d_00645983
//   TerminatedCString s_d_s_00645987
//   TerminatedCString s_NITESKY_RAW_0064598e
//   undefined4 s_ITESKY.RAW_0064598f
//   undefined4 s_TESKY.RAW_00645990
//   undefined4 s_ESKY.RAW_00645991
//   TerminatedCString s_d_s_0064599a
//   TerminatedCString s_none_006459a1
//   undefined4 DAT_006459a2
//   undefined4 DAT_006459a3
//   undefined4 DAT_006459a4
//   TerminatedCString s_d_006459a6
//   TerminatedCString s_train_006459aa
//   TerminatedCString s_d_006459b0
//   TerminatedCString s_d_006459b4
//   TerminatedCString s_d_006459b8
//   TerminatedCString s_d_006459bc
//   TerminatedCString s_f_f_f_006459c0
//   TerminatedCString s_f_f_f_006459ca
//   TerminatedCString s_f_f_f_006459d4
//   TerminatedCString s_d_006459de
//   TerminatedCString s_mauso_006459e2
//   TerminatedCString s_h109_006459e8
//   TerminatedCString s_smill_006459ed
//   TerminatedCString s_pier59_006459f3
//   TerminatedCString s_ndun_006459fa
//   TerminatedCString s_d_006459ff
//   TerminatedCString s_mauso_00645a03
//   TerminatedCString s_h109_00645a09
//   TerminatedCString s_smill_00645a0e
//   TerminatedCString s_pier59_00645a14
//   TerminatedCString s_castle_00645a1b
//   TerminatedCString s_ndun_00645a22
//   TerminatedCString s_d_00645a27
//   TerminatedCString s_d_00645a2b
//   TerminatedCString s_f_f_f_00645a2f
//   TerminatedCString s_f_f_f_00645a39
//   TerminatedCString s_f_f_f_00645a43
//   TerminatedCString s_core_set_cpp_00645a4d
//   TerminatedCString s_Loading_set_geometry_00645a5d
//   TerminatedCString s_rb_00645a72
//   TerminatedCString s_data_00645a75
//   TerminatedCString s_core_set_cpp_00645a7a
//   TerminatedCString s_Warning_No_GEO_file_Pres_00645a8a
//   TerminatedCString s_Loading_thumbs_00645ab1
//   TerminatedCString s_zth_00645ac0
//   undefined4 DAT_00645ac1
//   undefined4 DAT_00645ac2
//   undefined4 DAT_00645ac3
//   CLevelLoader* g_CLevelLoaderPtr = 02dcd850
//   CTerrain* g_CTerrainPtr = 03f8749c
//   CWater* g_CWaterPtr = 03f875e0
//   CLevelLoader g_CLevelLoaderInstance
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonRaytrace g_CDemonRaytraceInstance
//   CKeyFramedModel g_CKeyFramedModelInstance
//   CTerrain g_CTerrainInstance
//   CWater g_CWaterInstance
//   undefined4 DAT_03f875e4
//   undefined4 DAT_03f875e8
// Function calls:
//   core_dcamera.cpp_loadCameraFog_FUN_00453e50
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0
//   core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0
//   core_level.cpp_CLevelLoader_update_FUN_00504160
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_path.cpp_GlobalPathmapListCorruption_FUN_00548590
//   core_set.cpp_CDemonSet_clear_FUN_005693c0
//   core_setcolid.cpp_CDemonSet_FUN_00574560
//   core_setdir.cpp_CDemonSet_FUN_00576710
//   core_setdir.cpp_CDemonSet_refreshThumbs_FUN_00575b40
//   core_setdir.cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00576200
//   core_setutil.cpp_C3DSCamera_load_FUN_00585420
//   core_setutil.cpp_C3DSCamera_loadPVS_FUN_005857b0
//   core_setutil.cpp_C3DSLight_load_FUN_00586310
//   core_terrain.cpp_CTerrain_ctor_FUN_005e1ef0
//   core_terrain.cpp_CTerrain_dtor_FUN_005e1f30
//   crt_stdio.c_fgets_FUN_005fefd0
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   crt_string.c_stricmp_FUN_005fe7f0
//   crt_string.c_strnicmp_FUN_005ff070
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_load_FUN_00569410(CDemonSet *this_ptr,char *filename)

{
  float fVar1;
  char cVar2;
  CTerrain *this_ptr_00;
  char *pcVar3;
  FILE *pFVar4;
  int iVar5;
  CDemonSet *pCVar6;
  BADSPACEBASE *in_ESP;
  C3DSLight *this_ptr_01;
  C3DSCamera *pCVar7;
  char *pcVar8;
  CMatrix3x3f *pCVar9;
  char *pcVar10;
  float *in_stack_0000002c;
  int *in_stack_00000030;
  SRoom *in_stack_00000038;
  float *in_stack_00000044;
  float *in_stack_00000048;
  SVDBox *in_stack_00000050;
  float *in_stack_00000054;
  CVector3f *in_stack_00000058;
  float *in_stack_00000060;
  CVector3f *in_stack_00000068;
  float *in_stack_00000070;
  int in_stack_fffffdd8;
  CVector3f *in_stack_fffffe64;
  int in_stack_fffffe74;
  char acStack_e0 [4];
  char acStack_dc [16];
  char acStack_cc [4];
  char acStack_c8 [4];
  char local_c4 [4];
  char local_c0 [4];
  char acStack_bc [4];
  char acStack_b8 [4];
  char acStack_b4 [4];
  char acStack_b0 [4];
  char acStack_ac [4];
  char acStack_a8 [4];
  char acStack_a4 [16];
  char acStack_94 [4];
  char acStack_90 [108];
  char local_24 [20];
  
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Loading set");
  core_level_cpp_CLevelLoader_update_FUN_00504160(g_CLevelLoaderPtr,pcVar3,in_stack_fffffdd8);
  core_set_cpp_CDemonSet_clear_FUN_005693c0(this_ptr);
  pFVar4 = engine_dosio_c_getFile_FUN_00481a50("models",filename,"rt");
  if (pFVar4 == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\set.cpp";
    g_CurrentLineNumber = 0x122;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::Unable to open %s",filename);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%d\n",&this_ptr->set_file_version);
  crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%f\n",&this_ptr->set_scale_factor);
  crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%s\n",&stack0xfffffdf4);
  crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%s\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%f\n");
  if (this_ptr->set_file_version == 0) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe00,0xff,pFVar4);
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe04,0xff,pFVar4);
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe08,0xff,pFVar4);
  }
  if (this_ptr->set_file_version < 0x11) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe0c,0xff,pFVar4);
    crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%d,%d,%d,%d\n",local_24 + 4);
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe04,0xff,pFVar4);
    crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%f,%f,%f\n");
    crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%f,%f,%f,%f\n");
    this_ptr->field19_0x14f0a0[0xbbb0] = '\0';
    this_ptr->field19_0x14f0a0[0xbbb1] = '\0';
    this_ptr->field19_0x14f0a0[0xbbb2] = 'H';
    this_ptr->field19_0x14f0a0[0xbbb3] = 'B';
  }
  else {
    core_dcamera_cpp_loadCameraFog_FUN_00453e50
              ((SFog *)(this_ptr->field19_0x14f0a0 + 0xbb90),pFVar4,this_ptr->set_file_version);
  }
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe10,0xff,pFVar4);
  crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%f,%f\n");
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe18,0xff,pFVar4);
  crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%d,%s\n");
  if (this_ptr->set_file_version < 5) {
    iVar5 = crt_string_c_strnicmp_FUN_005ff070(acStack_e0,"ndun",4);
    if (iVar5 == 0) {
      g_CWaterPtr->wave_animation_enabled = 1;
    }
    else {
      g_CWaterPtr->wave_animation_enabled = 0;
    }
  }
  else {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe20,0xff,pFVar4);
    crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%d\n");
  }
  if (this_ptr->set_file_version < 6) {
    this_ptr->has_sky = 1;
  }
  else {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe24,0xff,pFVar4);
    crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%d\n");
  }
  pcVar3 = this_ptr->sky_texture_name;
  if (this_ptr->set_file_version < 0xc) {
    pcVar8 = "NITESKY.RAW";
    do {
      cVar2 = *pcVar8;
      *pcVar3 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar3[1] = cVar2;
      pcVar3 = pcVar3 + 2;
    } while (cVar2 != '\0');
    this_ptr->sky_type = 0x4000;
  }
  else {
    crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%d,%s\n");
  }
  pcVar3 = this_ptr->world_geometry_name;
  if (this_ptr->set_file_version < 0xd) {
    pcVar8 = "none";
    this_ptr->use_world_geometry_flag = 0;
    do {
      cVar2 = *pcVar8;
      *pcVar3 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar3[1] = cVar2;
      pcVar3 = pcVar3 + 2;
    } while (cVar2 != '\0');
  }
  else {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe24,0xff,pFVar4);
    crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%d,%s\n");
  }
  if (this_ptr->set_file_version < 0x19) {
    this_ptr->weather_type = 0;
  }
  else {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe24,0xff,pFVar4);
    crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%d\n");
  }
  iVar5 = crt_string_c_strnicmp_FUN_005ff070(acStack_dc,"train",5);
  this_ptr_00 = g_CTerrainPtr;
  if (iVar5 == 0) {
    this_ptr->player_on_train = 1;
    core_terrain_cpp_CTerrain_ctor_FUN_005e1ef0(this_ptr_00);
  }
  else {
    core_terrain_cpp_CTerrain_dtor_FUN_005e1f30(g_CTerrainPtr);
    this_ptr->player_on_train = 0;
  }
  if (10 < this_ptr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe2c,0xff,pFVar4);
  }
  iVar5 = 0;
  crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%d\n");
  if (0 < this_ptr->light_count) {
    this_ptr_01 = this_ptr->lights;
    do {
      iVar5 = iVar5 + 1;
      core_setutil_cpp_C3DSLight_load_FUN_00586310(this_ptr_01,pFVar4);
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar5 < this_ptr->light_count);
  }
  if (10 < this_ptr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe30,0xff,pFVar4);
  }
  iVar5 = 0;
  crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%d\n");
  if (0 < this_ptr->camera_count) {
    pCVar7 = this_ptr->cameras;
    do {
      iVar5 = iVar5 + 1;
      core_setutil_cpp_C3DSCamera_load_FUN_00585420(pCVar7,pFVar4);
      pCVar7 = pCVar7 + 1;
    } while (iVar5 < this_ptr->camera_count);
  }
  if (this_ptr->set_file_version < 1) {
    this_ptr->room_reverb_type = 0;
    iVar5 = crt_string_c_strnicmp_FUN_005ff070(acStack_cc,"mauso",5);
    if (iVar5 == 0) {
      this_ptr->room_reverb_type = 2;
    }
    iVar5 = crt_string_c_strnicmp_FUN_005ff070(acStack_c8,"h109",4);
    if (iVar5 == 0) {
      this_ptr->room_reverb_type = 0;
    }
    iVar5 = crt_string_c_strnicmp_FUN_005ff070(local_c4,"smill",5);
    if (iVar5 == 0) {
      this_ptr->room_reverb_type = 3;
    }
    iVar5 = crt_string_c_strnicmp_FUN_005ff070(local_c0,"pier59",6);
    if (iVar5 == 0) {
      this_ptr->room_reverb_type = 0;
    }
    iVar5 = crt_string_c_strnicmp_FUN_005ff070(acStack_bc,"ndun",4);
    if (iVar5 == 0) {
      this_ptr->room_reverb_type = 3;
    }
    this_ptr->room_count = 0;
  }
  else {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe34,0xff,pFVar4);
    crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%d\n");
    iVar5 = 0;
    crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%d\n");
    if (0 < this_ptr->room_count) {
      in_stack_00000038 = this_ptr->rooms;
      in_stack_00000030 = &this_ptr->rooms[0].field4_0x40;
      pCVar9 = &this_ptr->rooms[0].rotation_matrix;
      in_stack_00000058 = &this_ptr->rooms[0].extents;
      in_stack_00000044 = &this_ptr->rooms[0].extents.y;
      in_stack_00000048 = &this_ptr->rooms[0].extents.z;
      in_stack_00000050 = (SVDBox *)&this_ptr->rooms[0].position.y;
      in_stack_0000002c = &this_ptr->rooms[0].position.z;
      do {
        crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%f,%f,%f\n");
        crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%f,%f,%f\n");
        crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%f,%f,%f\n");
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                  (pCVar9,(CVector3f *)&stack0x00000028);
        iVar5 = iVar5 + 1;
        crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%d\n");
        pCVar9 = (CMatrix3x3f *)((int)(pCVar9 + 1) + 0x20);
        in_stack_00000030 = in_stack_00000030 + 0x11;
        in_stack_00000058 = (CVector3f *)((int)(in_stack_00000058 + 5) + 8);
        in_stack_00000044 = in_stack_00000044 + 0x11;
        in_stack_00000048 = in_stack_00000048 + 0x11;
        in_stack_00000050 = in_stack_00000050 + 1;
        in_stack_0000002c = in_stack_0000002c + 0x11;
      } while (iVar5 < this_ptr->room_count);
    }
  }
  if (this_ptr->set_file_version < 3) {
    this_ptr->default_ground_type = 2;
    iVar5 = crt_string_c_strnicmp_FUN_005ff070(acStack_b8,"mauso",5);
    if (iVar5 == 0) {
      this_ptr->default_ground_type = 8;
    }
    iVar5 = crt_string_c_strnicmp_FUN_005ff070(acStack_b4,"h109",4);
    if (iVar5 == 0) {
      this_ptr->default_ground_type = 3;
    }
    iVar5 = crt_string_c_strnicmp_FUN_005ff070(acStack_b0,"smill",5);
    if (iVar5 == 0) {
      this_ptr->default_ground_type = 2;
    }
    iVar5 = crt_string_c_strnicmp_FUN_005ff070(acStack_ac,"pier59",6);
    if (iVar5 == 0) {
      this_ptr->default_ground_type = 7;
    }
    iVar5 = crt_string_c_strnicmp_FUN_005ff070(acStack_a8,"castle",6);
    if (iVar5 == 0) {
      this_ptr->default_ground_type = 2;
    }
    iVar5 = crt_string_c_strnicmp_FUN_005ff070(acStack_a4,"ndun",4);
    if (iVar5 == 0) {
      this_ptr->default_ground_type = 8;
    }
  }
  else {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe48,0xff,pFVar4);
    crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%d\n");
  }
  if (this_ptr->set_file_version < 0x18) {
    this_ptr->default_master_reverb = 0;
  }
  else {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe60,0xff,pFVar4);
    crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%d\n");
  }
  if ((3 < this_ptr->set_file_version) && (this_ptr->set_file_version < 10)) {
    core_setdir_cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00576200(this_ptr,pFVar4);
  }
  if (this_ptr->set_file_version < 5) {
    this_ptr->vdir_box_count = 0;
  }
  else {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe60,0xff,pFVar4);
    iVar5 = 0;
    crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%d\n");
    if (0 < this_ptr->vdir_box_count) {
      in_stack_00000050 = this_ptr->vdir_boxes;
      pCVar9 = &this_ptr->vdir_boxes[0].rotation_matrix;
      in_stack_00000068 = &this_ptr->vdir_boxes[0].extents;
      in_stack_00000048 = &this_ptr->vdir_boxes[0].extents.y;
      in_stack_00000054 = &this_ptr->vdir_boxes[0].extents.z;
      in_stack_00000060 = &this_ptr->vdir_boxes[0].position.y;
      in_stack_00000070 = &this_ptr->vdir_boxes[0].position.z;
      do {
        crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%f,%f,%f\n");
        crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%f,%f,%f\n");
        crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%f,%f,%f\n");
        in_stack_fffffe64 = (CVector3f *)&stack0x00000030;
        iVar5 = iVar5 + 1;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(pCVar9,in_stack_fffffe64);
        pCVar9 = (CMatrix3x3f *)((int)(pCVar9 + 1) + 0x20);
        in_stack_00000068 = (CVector3f *)((int)(in_stack_00000068 + 5) + 8);
        in_stack_00000048 = in_stack_00000048 + 0x11;
        in_stack_00000054 = in_stack_00000054 + 0x11;
        in_stack_00000060 = in_stack_00000060 + 0x11;
        in_stack_00000070 = in_stack_00000070 + 0x11;
      } while (iVar5 < this_ptr->vdir_box_count);
    }
    core_setdir_cpp_CDemonSet_FUN_00576710(this_ptr);
  }
  if (this_ptr->set_file_version == 0xe) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe60,0xff,pFVar4);
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe5c,0xff,pFVar4);
  }
  if (0x13 < this_ptr->set_file_version) {
    iVar5 = 0;
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffe60,0xff,pFVar4);
    if (0 < this_ptr->camera_count) {
      pCVar7 = this_ptr->cameras;
      do {
        iVar5 = iVar5 + 1;
        core_setutil_cpp_C3DSCamera_loadPVS_FUN_005857b0(pCVar7,pFVar4);
        pCVar7 = pCVar7 + 1;
      } while (iVar5 < this_ptr->camera_count);
    }
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar4,"..\\core\\set.cpp",0x1e8);
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Loading set geometry");
  core_level_cpp_CLevelLoader_update_FUN_00504160(g_CLevelLoaderPtr,pcVar3,(int)in_stack_fffffe64);
  pcVar3 = this_ptr->geometry_filename;
  iVar5 = crt_string_c_stricmp_FUN_005fe7f0(pcVar3,acStack_94);
  if (iVar5 == 0) {
    core_setcolid_cpp_CDemonSet_FUN_00574560(this_ptr);
  }
  else {
    pcVar8 = acStack_90;
    pcVar10 = pcVar3;
    do {
      cVar2 = *pcVar8;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    pFVar4 = engine_dosio_c_getFile_FUN_00481a50("data",pcVar3,"rb");
    if (pFVar4 == (FILE *)0x0) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("Warning!  No .GEO file.  Press any key",0,0);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      engine_2d_c_clearInputAndWait_FUN_00403260();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    }
    else {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar4,"..\\core\\set.cpp",0x1f1);
      core_dtrace_cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0
                (&g_CDemonRaytraceInstance,pcVar3);
    }
    core_path_cpp_GlobalPathmapListCorruption_FUN_00548590();
  }
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Loading thumbs");
  pcVar8 = local_24;
  core_level_cpp_CLevelLoader_update_FUN_00504160(g_CLevelLoaderPtr,pcVar3,in_stack_fffffe74);
  pcVar3 = this_ptr->geometry_filename;
  do {
    cVar2 = *pcVar3;
    *pcVar8 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar8[1] = cVar2;
    pcVar8 = pcVar8 + 2;
  } while (cVar2 != '\0');
  pcVar3 = local_24 + 4;
  do {
    pcVar8 = pcVar3;
    if (*pcVar3 == '.') goto LAB_00569dac;
    if (*pcVar3 == '\0') break;
    pcVar8 = pcVar3 + 1;
    if (*pcVar8 == '.') goto LAB_00569dac;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar8 != '\0');
  pcVar8 = (char *)0x0;
LAB_00569dac:
  if (pcVar8 == (char *)0x0) {
    pcVar3 = local_24 + 4;
    do {
      pcVar8 = pcVar3;
      if (*pcVar3 == '\0') goto LAB_00569dd5;
      if (*pcVar3 == '\0') break;
      pcVar8 = pcVar3 + 1;
      if (*pcVar8 == '\0') goto LAB_00569dd5;
      pcVar3 = pcVar3 + 2;
    } while (*pcVar8 != '\0');
    pcVar8 = (char *)0x0;
  }
LAB_00569dd5:
  pcVar3 = ".zth";
  do {
    cVar2 = *pcVar3;
    *pcVar8 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar8[1] = cVar2;
    pcVar8 = pcVar8 + 2;
  } while (cVar2 != '\0');
  core_setdir_cpp_CDemonSet_refreshThumbs_FUN_00575b40(this_ptr,local_24 + 4);
  if (this_ptr->use_enviro_model != 0) {
    core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0
              (&g_CKeyFramedModelInstance,this_ptr->enviro_model_name);
  }
  iVar5 = 0;
  pCVar6 = this_ptr;
  if (0 < this_ptr->camera_count) {
    do {
      fVar1 = this_ptr->min_ambient_value;
      pCVar6->cameras[0].field8_0x14c = 0;
      pCVar6->cameras[0].field17_0x1a0 = 1;
      iVar5 = iVar5 + 1;
      pCVar6->cameras[0].ambient_value = fVar1;
      pCVar6 = (CDemonSet *)&pCVar6->cameras[0].field17_0x1a0;
    } while (iVar5 < this_ptr->camera_count);
  }
  return;
}


// Assembly code:
// 00569410: PUSH EBX
//   Label: core_set.cpp_CDemonSet_load_FUN_00569410
// 00569411: PUSH ESI
// 00569412: PUSH EDI
// 00569413: PUSH EBP
// 00569414: SUB ESP,0x218
// 0056941a: MOV EBP,dword ptr [ESP + 0x22c]
//   XREF to: Stack[0x4] (READ)
// 00569421: MOV ESI,dword ptr [ESP + 0x230]
//   XREF to: Stack[0x8] (READ)
// 00569428: PUSH 0x0
// 0056942a: PUSH 0x6458f1
//   XREF to: 006458f1 (DATA)
// 0056942f: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00569434: ADD ESP,0x4
// 00569437: PUSH EAX
// 00569438: MOV EDX,dword ptr [0x0067cf80]
//   XREF to: 02dcd850 (PARAM)
//   XREF to: 0067cf80 (READ)
// 0056943e: PUSH EDX
//   XREF to: 02dcd850 (DATA)
// 0056943f: CALL core_level.cpp_CLevelLoader_update_FUN_00504160
//   XREF to: 00504160 (UNCONDITIONAL_CALL)
// 00569444: ADD ESP,0xc
// 00569447: PUSH EBP
// 00569448: CALL core_set.cpp_CDemonSet_clear_FUN_005693c0
//   XREF to: 005693c0 (UNCONDITIONAL_CALL)
// 0056944d: ADD ESP,0x4
// 00569450: PUSH 0x6458fd
//   XREF to: 006458fd (DATA)
// 00569455: PUSH ESI
// 00569456: PUSH 0x645900
//   XREF to: 00645900 (DATA)
// 0056945b: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00569460: ADD ESP,0xc
// 00569463: MOV EBX,EAX
// 00569465: TEST EAX,EAX
// 00569467: JZ 0x00569e6b
//   XREF to: 00569e6b (CONDITIONAL_JUMP)
// 0056946d: LEA EAX,[EBP + 0x15acac]
//   Label: LAB_0056946d
// 00569473: PUSH EAX
// 00569474: PUSH 0x645934
//   XREF to: 00645934 (DATA)
// 00569479: PUSH EBX
// 0056947a: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0056947f: ADD ESP,0xc
// 00569482: LEA EAX,[EBP + 0x15ae94]
// 00569488: PUSH EAX
// 00569489: PUSH 0x645938
//   XREF to: 00645938 (DATA)
// 0056948e: PUSH EBX
// 0056948f: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00569494: ADD ESP,0xc
// 00569497: MOV EAX,ESP
// 00569499: PUSH EAX
// 0056949a: PUSH 0x64593c
//   XREF to: 0064593c (DATA)
// 0056949f: PUSH EBX
// 005694a0: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 005694a5: ADD ESP,0xc
// 005694a8: LEA EAX,[ESP + 0x100]
//   XREF to: Stack[-0x128] (DATA)
// 005694af: PUSH EAX
// 005694b0: PUSH 0x645940
//   XREF to: 00645940 (DATA)
// 005694b5: PUSH EBX
// 005694b6: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 005694bb: ADD ESP,0xc
// 005694be: LEA EAX,[EBP + 0x14d150]
// 005694c4: PUSH EAX
// 005694c5: PUSH 0x645944
//   XREF to: 00645944 (DATA)
// 005694ca: PUSH EBX
// 005694cb: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 005694d0: MOV EAX,dword ptr [EBP + 0x15acac]
// 005694d6: ADD ESP,0xc
// 005694d9: TEST EAX,EAX
// 005694db: JNZ 0x00569516
//   XREF to: 00569516 (CONDITIONAL_JUMP)
// 005694dd: PUSH EBX
// 005694de: PUSH 0xff
// 005694e3: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x228] (DATA)
// 005694e7: PUSH EAX
// 005694e8: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 005694ed: ADD ESP,0xc
// 005694f0: PUSH EBX
// 005694f1: PUSH 0xff
// 005694f6: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x228] (DATA)
// 005694fa: PUSH EAX
// 005694fb: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00569500: ADD ESP,0xc
// 00569503: PUSH EBX
// 00569504: PUSH 0xff
// 00569509: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x228] (DATA)
// 0056950d: PUSH EAX
// 0056950e: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00569513: ADD ESP,0xc
// 00569516: MOV EDX,dword ptr [EBP + 0x15acac]
//   Label: LAB_00569516
// 0056951c: LEA ESI,[EBP + 0x15ac30]
// 00569522: CMP EDX,0x11
// 00569525: JGE 0x00569e94
//   XREF to: 00569e94 (CONDITIONAL_JUMP)
// 0056952b: PUSH EBX
// 0056952c: PUSH 0xff
// 00569531: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x228] (DATA)
// 00569535: PUSH EAX
// 00569536: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 0056953b: ADD ESP,0xc
// 0056953e: LEA EAX,[EBP + 0x15ac38]
// 00569544: PUSH EAX
// 00569545: LEA EAX,[EBP + 0x15ac34]
// 0056954b: PUSH EAX
// 0056954c: PUSH ESI
// 0056954d: LEA EAX,[ESP + 0x1ec]
//   XREF to: Stack[-0x48] (DATA)
// 00569554: PUSH EAX
// 00569555: PUSH 0x645948
//   XREF to: 00645948 (DATA)
// 0056955a: PUSH EBX
// 0056955b: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00569560: ADD ESP,0x18
// 00569563: PUSH EBX
// 00569564: PUSH 0xff
// 00569569: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x228] (DATA)
// 0056956d: PUSH EAX
// 0056956e: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00569573: ADD ESP,0xc
// 00569576: LEA EAX,[EBP + 0x15ac44]
// 0056957c: PUSH EAX
// 0056957d: LEA EAX,[EBP + 0x15ac40]
// 00569583: PUSH EAX
// 00569584: LEA EAX,[EBP + 0x15ac3c]
// 0056958a: PUSH EAX
// 0056958b: PUSH 0x645955
//   XREF to: 00645955 (DATA)
// 00569590: PUSH EBX
// 00569591: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00569596: ADD ESP,0x14
// 00569599: LEA EAX,[ESP + 0x1e0]
//   XREF to: Stack[-0x48] (DATA)
// 005695a0: PUSH EAX
// 005695a1: PUSH EAX
// 005695a2: LEA EAX,[EBP + 0x15ac4c]
// 005695a8: PUSH EAX
// 005695a9: LEA EAX,[EBP + 0x15ac48]
// 005695af: PUSH EAX
// 005695b0: PUSH 0x64595f
//   XREF to: 0064595f (DATA)
// 005695b5: PUSH EBX
// 005695b6: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 005695bb: ADD ESP,0x18
// 005695be: MOV dword ptr [EBP + 0x15ac50],0x42480000
// 005695c8: PUSH EBX
//   Label: LAB_005695c8
// 005695c9: PUSH 0xff
// 005695ce: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x228] (DATA)
// 005695d2: PUSH EAX
// 005695d3: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 005695d8: MOV EAX,[0x006844f0]
//   XREF to: 006844f0 (READ)
// 005695dd: ADD ESP,0xc
// 005695e0: LEA ESI,[EAX + 0x8]
//   XREF to: 03f875e8 (DATA)
// 005695e3: PUSH ESI
//   XREF to: 03f875e8 (DATA)
// 005695e4: ADD EAX,0x4
//   XREF to: 03f875e4 (PARAM)
// 005695e7: PUSH EAX
//   XREF to: 03f875e4 (DATA)
// 005695e8: PUSH 0x64596c
//   XREF to: 0064596c (DATA)
// 005695ed: PUSH EBX
// 005695ee: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 005695f3: ADD ESP,0x10
// 005695f6: PUSH EBX
// 005695f7: PUSH 0xff
// 005695fc: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x228] (DATA)
// 00569600: PUSH EAX
// 00569601: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00569606: ADD ESP,0xc
// 00569609: LEA EAX,[EBP + 0x15ac98]
// 0056960f: PUSH EAX
// 00569610: LEA EAX,[EBP + 0x15ac94]
// 00569616: PUSH EAX
// 00569617: PUSH 0x645973
//   XREF to: 00645973 (DATA)
// 0056961c: PUSH EBX
// 0056961d: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00569622: MOV ESI,dword ptr [EBP + 0x15acac]
// 00569628: ADD ESP,0x10
// 0056962b: CMP ESI,0x5
// 0056962e: JL 0x00569ea4
//   XREF to: 00569ea4 (CONDITIONAL_JUMP)
// 00569634: PUSH EBX
// 00569635: PUSH 0xff
// 0056963a: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x228] (DATA)
// 0056963e: PUSH EAX
// 0056963f: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00569644: ADD ESP,0xc
// 00569647: MOV EDI,dword ptr [0x006844f0]
//   XREF to: 006844f0 (READ)
// 0056964d: PUSH EDI
//   XREF to: 03f875e0 (DATA)
// 0056964e: PUSH 0x64597a
//   XREF to: 0064597a (DATA)
// 00569653: PUSH EBX
// 00569654: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00569659: ADD ESP,0xc
// 0056965c: CMP dword ptr [EBP + 0x15acac],0x6
//   Label: LAB_0056965c
// 00569663: JL 0x00569edf
//   XREF to: 00569edf (CONDITIONAL_JUMP)
// 00569669: PUSH EBX
// 0056966a: PUSH 0xff
// 0056966f: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x228] (DATA)
// 00569673: PUSH EAX
// 00569674: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00569679: ADD ESP,0xc
// 0056967c: LEA EAX,[EBP + 0x161628]
// 00569682: PUSH EAX
// 00569683: PUSH 0x645983
//   XREF to: 00645983 (DATA)
// 00569688: PUSH EBX
// 00569689: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0056968e: ADD ESP,0xc
// 00569691: MOV EDX,dword ptr [EBP + 0x15acac]
//   Label: LAB_00569691
// 00569697: LEA EDI,[EBP + 0x16162c]
// 0056969d: CMP EDX,0xc
// 005696a0: JL 0x00569eee
//   XREF to: 00569eee (CONDITIONAL_JUMP)
// 005696a6: PUSH EDI
// 005696a7: LEA EAX,[EBP + 0x16164c]
// 005696ad: PUSH EAX
// 005696ae: PUSH 0x645987
//   XREF to: 00645987 (DATA)
// 005696b3: PUSH EBX
// 005696b4: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 005696b9: ADD ESP,0x10
// 005696bc: MOV ECX,dword ptr [EBP + 0x15acac]
//   Label: LAB_005696bc
// 005696c2: LEA EDI,[EBP + 0x15ae50]
// 005696c8: CMP ECX,0xd
// 005696cb: JL 0x00569f1c
//   XREF to: 00569f1c (CONDITIONAL_JUMP)
// 005696d1: PUSH EBX
// 005696d2: PUSH 0xff
// 005696d7: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x228] (DATA)
// 005696db: PUSH EAX
// 005696dc: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 005696e1: ADD ESP,0xc
// 005696e4: PUSH EDI
// 005696e5: LEA EAX,[EBP + 0x15ae4c]
// 005696eb: PUSH EAX
// 005696ec: PUSH 0x64599a
//   XREF to: 0064599a (DATA)
// 005696f1: PUSH EBX
// 005696f2: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 005696f7: ADD ESP,0x10
// 005696fa: CMP dword ptr [EBP + 0x15acac],0x19
//   Label: LAB_005696fa
// 00569701: JL 0x00569f4a
//   XREF to: 00569f4a (CONDITIONAL_JUMP)
// 00569707: PUSH EBX
// 00569708: PUSH 0xff
// 0056970d: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x228] (DATA)
// 00569711: PUSH EAX
// 00569712: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00569717: ADD ESP,0xc
// 0056971a: LEA EAX,[EBP + 0x161668]
// 00569720: PUSH EAX
// 00569721: PUSH 0x6459a6
//   XREF to: 006459a6 (DATA)
// 00569726: PUSH EBX
// 00569727: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0056972c: ADD ESP,0xc
// 0056972f: PUSH 0x5
//   Label: LAB_0056972f
// 00569731: PUSH 0x6459aa
//   XREF to: 006459aa (DATA)
// 00569736: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x128] (DATA)
// 0056973d: PUSH EAX
// 0056973e: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 00569743: ADD ESP,0xc
// 00569746: TEST EAX,EAX
// 00569748: JNZ 0x00569f59
//   XREF to: 00569f59 (CONDITIONAL_JUMP)
// 0056974e: MOV EAX,[0x006843f8]
//   XREF to: 03f8749c (PARAM)
//   XREF to: 006843f8 (READ)
// 00569753: PUSH EAX
//   XREF to: 03f8749c (DATA)
// 00569754: MOV dword ptr [EBP + 0x15aca8],0x1
// 0056975e: CALL core_terrain.cpp_CTerrain_ctor_FUN_005e1ef0
//   XREF to: 005e1ef0 (UNCONDITIONAL_CALL)
// 00569763: ADD ESP,0x4
// 00569766: PUSH EBP
//   Label: LAB_00569766
// 00569767: MOV EDX,dword ptr [EBP + 0x15acac]
// 0056976d: ADD ESP,0x4
// 00569770: CMP EDX,0xb
// 00569773: JL 0x00569788
//   XREF to: 00569788 (CONDITIONAL_JUMP)
// 00569775: PUSH EBX
// 00569776: PUSH 0xff
// 0056977b: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x228] (DATA)
// 0056977f: PUSH EAX
// 00569780: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00569785: ADD ESP,0xc
// 00569788: LEA EAX,[EBP + 0x19a2c]
//   Label: LAB_00569788
// 0056978e: PUSH EAX
// 0056978f: PUSH 0x6459b0
//   XREF to: 006459b0 (DATA)
// 00569794: PUSH EBX
// 00569795: XOR EDI,EDI
// 00569797: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0056979c: MOV ECX,dword ptr [EBP + 0x19a2c]
// 005697a2: ADD ESP,0xc
// 005697a5: TEST ECX,ECX
// 005697a7: JLE 0x005697d0
//   XREF to: 005697d0 (CONDITIONAL_JUMP)
// 005697a9: LEA ESI,[EBP + 0x19a30]
// 005697af: PUSH EBX
//   Label: LAB_005697af
// 005697b0: PUSH ESI
// 005697b1: INC EDI
// 005697b2: CALL core_setutil.cpp_C3DSLight_load_FUN_00586310
//   XREF to: 00586310 (UNCONDITIONAL_CALL)
// 005697b7: ADD ESP,0x8
// 005697ba: MOV EAX,dword ptr [EBP + 0x19a2c]
// 005697c0: ADD ESI,0x1898
// 005697c6: CMP EDI,EAX
// 005697c8: JL 0x005697af
//   XREF to: 005697af (CONDITIONAL_JUMP)
// 005697ca: LEA EAX,[EAX]
// 005697d0: CMP dword ptr [EBP + 0x15acac],0xb
//   Label: LAB_005697d0
// 005697d7: JL 0x005697ec
//   XREF to: 005697ec (CONDITIONAL_JUMP)
// 005697d9: PUSH EBX
// 005697da: PUSH 0xff
// 005697df: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x228] (DATA)
// 005697e3: PUSH EAX
// 005697e4: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 005697e9: ADD ESP,0xc
// 005697ec: PUSH EBP
//   Label: LAB_005697ec
// 005697ed: PUSH 0x6459b4
//   XREF to: 006459b4 (DATA)
// 005697f2: PUSH EBX
// 005697f3: XOR EDI,EDI
// 005697f5: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 005697fa: MOV ECX,dword ptr [EBP]
// 005697fd: ADD ESP,0xc
// 00569800: TEST ECX,ECX
// 00569802: JLE 0x00569820
//   XREF to: 00569820 (CONDITIONAL_JUMP)
// 00569804: LEA ESI,[EBP + 0x4]
// 00569807: PUSH EBX
//   Label: LAB_00569807
// 00569808: PUSH ESI
// 00569809: INC EDI
// 0056980a: CALL core_setutil.cpp_C3DSCamera_load_FUN_00585420
//   XREF to: 00585420 (UNCONDITIONAL_CALL)
// 0056980f: ADD ESP,0x8
// 00569812: MOV EAX,dword ptr [EBP]
// 00569815: ADD ESI,0x1a4
// 0056981b: CMP EDI,EAX
// 0056981d: JL 0x00569807
//   XREF to: 00569807 (CONDITIONAL_JUMP)
// 0056981f: NOP
// 00569820: CMP dword ptr [EBP + 0x15acac],0x0
//   Label: LAB_00569820
// 00569827: JLE 0x00569f77
//   XREF to: 00569f77 (CONDITIONAL_JUMP)
// 0056982d: PUSH EBX
// 0056982e: PUSH 0xff
// 00569833: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x228] (DATA)
// 00569837: PUSH EAX
// 00569838: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 0056983d: ADD ESP,0xc
// 00569840: LEA EAX,[EBP + 0x15aeb8]
// 00569846: PUSH EAX
// 00569847: PUSH 0x6459b8
//   XREF to: 006459b8 (DATA)
// 0056984c: PUSH EBX
// 0056984d: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00569852: ADD ESP,0xc
// 00569855: LEA EAX,[EBP + 0x15aebc]
// 0056985b: PUSH EAX
// 0056985c: PUSH 0x6459bc
//   XREF to: 006459bc (DATA)
// 00569861: PUSH EBX
// 00569862: XOR ESI,ESI
// 00569864: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00569869: MOV ECX,dword ptr [EBP + 0x15aebc]
// 0056986f: ADD ESP,0xc
// 00569872: TEST ECX,ECX
// 00569874: JLE 0x00569a00
//   XREF to: 00569a00 (CONDITIONAL_JUMP)
// 0056987a: LEA EAX,[EBP + 0x15aec0]
// 00569880: MOV dword ptr [ESP + 0x1f0],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00569887: LEA EAX,[EBP + 0x15af00]
// 0056988d: LEA EDI,[EBP + 0x15aed8]
// 00569893: MOV dword ptr [ESP + 0x1e8],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0056989a: LEA EAX,[EBP + 0x15aecc]
// 005698a0: MOV dword ptr [ESP + 0x210],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005698a7: LEA EAX,[EBP + 0x15aed0]
// 005698ad: MOV dword ptr [ESP + 0x1fc],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005698b4: LEA EAX,[EBP + 0x15aed4]
// 005698ba: MOV dword ptr [ESP + 0x200],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005698c1: LEA EAX,[EBP + 0x15aec4]
// 005698c7: MOV dword ptr [ESP + 0x208],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005698ce: LEA EAX,[EBP + 0x15aec8]
// 005698d4: MOV dword ptr [ESP + 0x1e4],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 005698db: IMUL EAX,ESI,0x44
//   Label: LAB_005698db
// 005698de: MOV ECX,dword ptr [ESP + 0x1e4]
//   XREF to: Stack[-0x44] (READ)
// 005698e5: MOV EDX,dword ptr [ESP + 0x1f0]
//   XREF to: Stack[-0x38] (READ)
// 005698ec: PUSH ECX
// 005698ed: ADD EAX,EDX
// 005698ef: MOV EDX,dword ptr [ESP + 0x20c]
//   XREF to: Stack[-0x20] (READ)
// 005698f6: PUSH EDX
// 005698f7: PUSH EAX
// 005698f8: PUSH 0x6459c0
//   XREF to: 006459c0 (DATA)
// 005698fd: PUSH EBX
// 005698fe: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00569903: ADD ESP,0x14
// 00569906: MOV ECX,dword ptr [ESP + 0x200]
//   XREF to: Stack[-0x28] (READ)
// 0056990d: PUSH ECX
// 0056990e: MOV EAX,dword ptr [ESP + 0x200]
//   XREF to: Stack[-0x2c] (READ)
// 00569915: PUSH EAX
// 00569916: MOV EDX,dword ptr [ESP + 0x218]
//   XREF to: Stack[-0x18] (READ)
// 0056991d: PUSH EDX
// 0056991e: PUSH 0x6459ca
//   XREF to: 006459ca (DATA)
// 00569923: PUSH EBX
// 00569924: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00569929: ADD ESP,0x14
// 0056992c: LEA EAX,[ESP + 0x1d8]
//   XREF to: Stack[-0x50] (DATA)
// 00569933: PUSH EAX
// 00569934: LEA EAX,[ESP + 0x1e0]
//   XREF to: Stack[-0x4c] (DATA)
// 0056993b: PUSH EAX
// 0056993c: LEA EAX,[ESP + 0x1dc]
//   XREF to: Stack[-0x54] (DATA)
// 00569943: PUSH EAX
// 00569944: PUSH 0x6459d4
//   XREF to: 006459d4 (DATA)
// 00569949: PUSH EBX
// 0056994a: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0056994f: ADD ESP,0x14
// 00569952: LEA EAX,[ESP + 0x1d4]
//   XREF to: Stack[-0x54] (DATA)
// 00569959: PUSH EAX
// 0056995a: PUSH EDI
// 0056995b: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 00569960: ADD ESP,0x8
// 00569963: MOV ECX,dword ptr [ESP + 0x1e8]
//   XREF to: Stack[-0x40] (READ)
// 0056996a: PUSH ECX
// 0056996b: PUSH 0x6459de
//   XREF to: 006459de (DATA)
// 00569970: PUSH EBX
// 00569971: INC ESI
// 00569972: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00569977: ADD ESP,0xc
// 0056997a: ADD EDI,0x44
// 0056997d: MOV EAX,dword ptr [ESP + 0x1e8]
//   XREF to: Stack[-0x40] (READ)
// 00569984: MOV EDX,dword ptr [ESP + 0x210]
//   XREF to: Stack[-0x18] (READ)
// 0056998b: MOV ECX,dword ptr [ESP + 0x1fc]
//   XREF to: Stack[-0x2c] (READ)
// 00569992: ADD EAX,0x44
// 00569995: ADD EDX,0x44
// 00569998: ADD ECX,0x44
// 0056999b: MOV dword ptr [ESP + 0x1e8],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 005699a2: MOV dword ptr [ESP + 0x210],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 005699a9: MOV dword ptr [ESP + 0x1fc],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 005699b0: MOV EAX,dword ptr [ESP + 0x200]
//   XREF to: Stack[-0x28] (READ)
// 005699b7: MOV EDX,dword ptr [ESP + 0x208]
//   XREF to: Stack[-0x20] (READ)
// 005699be: MOV ECX,dword ptr [ESP + 0x1e4]
//   XREF to: Stack[-0x44] (READ)
// 005699c5: ADD EAX,0x44
// 005699c8: ADD EDX,0x44
// 005699cb: ADD ECX,0x44
// 005699ce: MOV dword ptr [ESP + 0x200],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005699d5: MOV dword ptr [ESP + 0x208],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 005699dc: MOV EAX,dword ptr [EBP + 0x15aebc]
// 005699e2: MOV dword ptr [ESP + 0x1e4],ECX
//   XREF to: Stack[-0x44] (WRITE)
// 005699e9: CMP ESI,EAX
// 005699eb: JL 0x005698db
//   XREF to: 005698db (CONDITIONAL_JUMP)
// 005699f1: LEA EAX,[EAX]
// 005699f7: LEA EDX,[EDX]
// 005699fd: LEA EAX,[EAX]
// 00569a00: CMP dword ptr [EBP + 0x15acac],0x3
//   Label: LAB_00569a00
// 00569a07: JL 0x0056a041
//   XREF to: 0056a041 (CONDITIONAL_JUMP)
// 00569a0d: PUSH EBX
// 00569a0e: PUSH 0xff
// 00569a13: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x228] (DATA)
// 00569a17: PUSH EAX
// 00569a18: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00569a1d: ADD ESP,0xc
// 00569a20: LEA EAX,[EBP + 0x15f67c]
// 00569a26: PUSH EAX
// 00569a27: PUSH 0x6459ff
//   XREF to: 006459ff (DATA)
// 00569a2c: PUSH EBX
// 00569a2d: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00569a32: ADD ESP,0xc
// 00569a35: CMP dword ptr [EBP + 0x15acac],0x18
//   Label: LAB_00569a35
// 00569a3c: JL 0x0056a132
//   XREF to: 0056a132 (CONDITIONAL_JUMP)
// 00569a42: PUSH EBX
// 00569a43: PUSH 0xff
// 00569a48: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x228] (DATA)
// 00569a4c: PUSH EAX
// 00569a4d: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00569a52: ADD ESP,0xc
// 00569a55: LEA EAX,[EBP + 0x15ac7c]
// 00569a5b: PUSH EAX
// 00569a5c: PUSH 0x645a27
//   XREF to: 00645a27 (DATA)
// 00569a61: PUSH EBX
// 00569a62: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00569a67: ADD ESP,0xc
// 00569a6a: MOV ESI,dword ptr [EBP + 0x15acac]
//   Label: LAB_00569a6a
// 00569a70: CMP ESI,0x4
// 00569a73: JL 0x00569a84
//   XREF to: 00569a84 (CONDITIONAL_JUMP)
// 00569a75: CMP ESI,0x9
// 00569a78: JG 0x00569a84
//   XREF to: 00569a84 (CONDITIONAL_JUMP)
// 00569a7a: PUSH EBX
// 00569a7b: PUSH EBP
// 00569a7c: CALL core_setdir.cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00576200
//   XREF to: 00576200 (UNCONDITIONAL_CALL)
// 00569a81: ADD ESP,0x8
// 00569a84: CMP dword ptr [EBP + 0x15acac],0x5
//   Label: LAB_00569a84
// 00569a8b: JL 0x0056a141
//   XREF to: 0056a141 (CONDITIONAL_JUMP)
// 00569a91: PUSH EBX
// 00569a92: PUSH 0xff
// 00569a97: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x228] (DATA)
// 00569a9b: PUSH EAX
// 00569a9c: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00569aa1: ADD ESP,0xc
// 00569aa4: LEA EAX,[EBP + 0x15b410]
// 00569aaa: PUSH EAX
// 00569aab: PUSH 0x645a2b
//   XREF to: 00645a2b (DATA)
// 00569ab0: PUSH EBX
// 00569ab1: XOR ESI,ESI
// 00569ab3: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00569ab8: MOV EDX,dword ptr [EBP + 0x15b410]
// 00569abe: ADD ESP,0xc
// 00569ac1: TEST EDX,EDX
// 00569ac3: JLE 0x00569c10
//   XREF to: 00569c10 (CONDITIONAL_JUMP)
// 00569ac9: LEA EAX,[EBP + 0x15b414]
// 00569acf: LEA EDI,[EBP + 0x15b42c]
// 00569ad5: MOV dword ptr [ESP + 0x1f4],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00569adc: LEA EAX,[EBP + 0x15b420]
// 00569ae2: MOV dword ptr [ESP + 0x20c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00569ae9: LEA EAX,[EBP + 0x15b424]
// 00569aef: MOV dword ptr [ESP + 0x1ec],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00569af6: LEA EAX,[EBP + 0x15b428]
// 00569afc: MOV dword ptr [ESP + 0x1f8],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00569b03: LEA EAX,[EBP + 0x15b418]
// 00569b09: MOV dword ptr [ESP + 0x204],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00569b10: LEA EAX,[EBP + 0x15b41c]
// 00569b16: MOV dword ptr [ESP + 0x214],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00569b1d: IMUL EAX,ESI,0x44
//   Label: LAB_00569b1d
// 00569b20: MOV EDX,dword ptr [ESP + 0x214]
//   XREF to: Stack[-0x14] (READ)
// 00569b27: MOV ECX,dword ptr [ESP + 0x1f4]
//   XREF to: Stack[-0x34] (READ)
// 00569b2e: PUSH EDX
// 00569b2f: ADD EAX,ECX
// 00569b31: MOV ECX,dword ptr [ESP + 0x208]
//   XREF to: Stack[-0x24] (READ)
// 00569b38: PUSH ECX
// 00569b39: PUSH EAX
// 00569b3a: PUSH 0x645a2f
//   XREF to: 00645a2f (DATA)
// 00569b3f: PUSH EBX
// 00569b40: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00569b45: ADD ESP,0x14
// 00569b48: MOV EAX,dword ptr [ESP + 0x1f8]
//   XREF to: Stack[-0x30] (READ)
// 00569b4f: PUSH EAX
// 00569b50: MOV EDX,dword ptr [ESP + 0x1f0]
//   XREF to: Stack[-0x3c] (READ)
// 00569b57: PUSH EDX
// 00569b58: MOV ECX,dword ptr [ESP + 0x214]
//   XREF to: Stack[-0x1c] (READ)
// 00569b5f: PUSH ECX
// 00569b60: PUSH 0x645a39
//   XREF to: 00645a39 (DATA)
// 00569b65: PUSH EBX
// 00569b66: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00569b6b: ADD ESP,0x14
// 00569b6e: LEA EAX,[ESP + 0x1cc]
//   XREF to: Stack[-0x5c] (DATA)
// 00569b75: PUSH EAX
// 00569b76: LEA EAX,[ESP + 0x1d4]
//   XREF to: Stack[-0x58] (DATA)
// 00569b7d: PUSH EAX
// 00569b7e: LEA EAX,[ESP + 0x1d0]
//   XREF to: Stack[-0x60] (DATA)
// 00569b85: PUSH EAX
// 00569b86: PUSH 0x645a43
//   XREF to: 00645a43 (DATA)
// 00569b8b: PUSH EBX
// 00569b8c: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00569b91: ADD ESP,0x14
// 00569b94: LEA EAX,[ESP + 0x1c8]
//   XREF to: Stack[-0x60] (DATA)
// 00569b9b: PUSH EAX
// 00569b9c: PUSH EDI
// 00569b9d: INC ESI
// 00569b9e: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 00569ba3: ADD ESP,0x8
// 00569ba6: ADD EDI,0x44
// 00569ba9: MOV EAX,dword ptr [ESP + 0x20c]
//   XREF to: Stack[-0x1c] (READ)
// 00569bb0: MOV EDX,dword ptr [ESP + 0x1ec]
//   XREF to: Stack[-0x3c] (READ)
// 00569bb7: MOV ECX,dword ptr [ESP + 0x1f8]
//   XREF to: Stack[-0x30] (READ)
// 00569bbe: ADD EAX,0x44
// 00569bc1: ADD EDX,0x44
// 00569bc4: ADD ECX,0x44
// 00569bc7: MOV dword ptr [ESP + 0x20c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00569bce: MOV dword ptr [ESP + 0x1ec],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 00569bd5: MOV dword ptr [ESP + 0x1f8],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 00569bdc: MOV EAX,dword ptr [ESP + 0x204]
//   XREF to: Stack[-0x24] (READ)
// 00569be3: MOV EDX,dword ptr [ESP + 0x214]
//   XREF to: Stack[-0x14] (READ)
// 00569bea: MOV ECX,dword ptr [EBP + 0x15b410]
// 00569bf0: ADD EAX,0x44
// 00569bf3: ADD EDX,0x44
// 00569bf6: MOV dword ptr [ESP + 0x204],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00569bfd: MOV dword ptr [ESP + 0x214],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00569c04: CMP ESI,ECX
// 00569c06: JL 0x00569b1d
//   XREF to: 00569b1d (CONDITIONAL_JUMP)
// 00569c0c: LEA EAX,[EAX]
// 00569c10: PUSH EBP
//   Label: LAB_00569c10
// 00569c11: CALL core_setdir.cpp_CDemonSet_FUN_00576710
//   XREF to: 00576710 (UNCONDITIONAL_CALL)
// 00569c16: ADD ESP,0x4
// 00569c19: CMP dword ptr [EBP + 0x15acac],0xe
//   Label: LAB_00569c19
// 00569c20: JNZ 0x00569c48
//   XREF to: 00569c48 (CONDITIONAL_JUMP)
// 00569c22: PUSH EBX
// 00569c23: PUSH 0xff
// 00569c28: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x228] (DATA)
// 00569c2c: PUSH EAX
// 00569c2d: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00569c32: ADD ESP,0xc
// 00569c35: PUSH EBX
// 00569c36: PUSH 0xff
// 00569c3b: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x228] (DATA)
// 00569c3f: PUSH EAX
// 00569c40: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00569c45: ADD ESP,0xc
// 00569c48: CMP dword ptr [EBP + 0x15acac],0x14
//   Label: LAB_00569c48
// 00569c4f: JL 0x00569c90
//   XREF to: 00569c90 (CONDITIONAL_JUMP)
// 00569c51: PUSH EBX
// 00569c52: PUSH 0xff
// 00569c57: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x228] (DATA)
// 00569c5b: PUSH EAX
// 00569c5c: XOR EDI,EDI
// 00569c5e: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00569c63: MOV EAX,dword ptr [EBP]
// 00569c66: ADD ESP,0xc
// 00569c69: TEST EAX,EAX
// 00569c6b: JLE 0x00569c90
//   XREF to: 00569c90 (CONDITIONAL_JUMP)
// 00569c6d: LEA ESI,[EBP + 0x4]
// 00569c70: PUSH EBX
//   Label: LAB_00569c70
// 00569c71: PUSH ESI
// 00569c72: INC EDI
// 00569c73: CALL core_setutil.cpp_C3DSCamera_loadPVS_FUN_005857b0
//   XREF to: 005857b0 (UNCONDITIONAL_CALL)
// 00569c78: ADD ESP,0x8
// 00569c7b: MOV EDX,dword ptr [EBP]
// 00569c7e: ADD ESI,0x1a4
// 00569c84: CMP EDI,EDX
// 00569c86: JL 0x00569c70
//   XREF to: 00569c70 (CONDITIONAL_JUMP)
// 00569c88: LEA EAX,[EAX]
// 00569c8e: MOV EDX,EDX
// 00569c90: PUSH 0x1e8
//   Label: LAB_00569c90
// 00569c95: PUSH 0x645a4d
//   XREF to: 00645a4d (DATA)
// 00569c9a: PUSH EBX
// 00569c9b: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00569ca0: ADD ESP,0xc
// 00569ca3: PUSH 0x0
// 00569ca5: PUSH 0x645a5d
//   XREF to: 00645a5d (DATA)
// 00569caa: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00569caf: ADD ESP,0x4
// 00569cb2: PUSH EAX
// 00569cb3: MOV ECX,dword ptr [0x0067cf80]
//   XREF to: 02dcd850 (PARAM)
//   XREF to: 0067cf80 (READ)
// 00569cb9: PUSH ECX
//   XREF to: 02dcd850 (DATA)
// 00569cba: CALL core_level.cpp_CLevelLoader_update_FUN_00504160
//   XREF to: 00504160 (UNCONDITIONAL_CALL)
// 00569cbf: ADD ESP,0xc
// 00569cc2: LEA EAX,[ESP + 0x100]
//   XREF to: Stack[-0x128] (DATA)
// 00569cc9: PUSH EAX
// 00569cca: LEA EBX,[EBP + 0x14d0f0]
// 00569cd0: PUSH EBX
// 00569cd1: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 00569cd6: ADD ESP,0x8
// 00569cd9: TEST EAX,EAX
// 00569cdb: JZ 0x0056a17a
//   XREF to: 0056a17a (CONDITIONAL_JUMP)
// 00569ce1: LEA ESI,[ESP + 0x100]
//   XREF to: Stack[-0x128] (DATA)
// 00569ce8: MOV EDI,EBX
// 00569cea: PUSH EDI
// 00569ceb: MOV AL,byte ptr [ESI]
//   Label: LAB_00569ceb
//   XREF to: Stack[-0x128] (DATA)
// 00569ced: MOV byte ptr [EDI],AL
// 00569cef: CMP AL,0x0
// 00569cf1: JZ 0x00569d03
//   XREF to: 00569d03 (CONDITIONAL_JUMP)
// 00569cf3: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x127] (READ)
// 00569cf6: ADD ESI,0x2
// 00569cf9: MOV byte ptr [EDI + 0x1],AL
// 00569cfc: ADD EDI,0x2
// 00569cff: CMP AL,0x0
// 00569d01: JNZ 0x00569ceb
//   XREF to: 00569ceb (CONDITIONAL_JUMP)
// 00569d03: POP EDI
//   Label: LAB_00569d03
// 00569d04: PUSH 0x645a72
//   XREF to: 00645a72 (DATA)
// 00569d09: PUSH EBX
// 00569d0a: PUSH 0x645a75
//   XREF to: 00645a75 (DATA)
// 00569d0f: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00569d14: ADD ESP,0xc
// 00569d17: TEST EAX,EAX
// 00569d19: JZ 0x0056a150
//   XREF to: 0056a150 (CONDITIONAL_JUMP)
// 00569d1f: PUSH 0x1f1
// 00569d24: PUSH 0x645a7a
//   XREF to: 00645a7a (DATA)
// 00569d29: PUSH EAX
// 00569d2a: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00569d2f: ADD ESP,0xc
// 00569d32: PUSH EBX
// 00569d33: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 00569d38: CALL core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0
//   XREF to: 00494de0 (UNCONDITIONAL_CALL)
// 00569d3d: ADD ESP,0x8
// 00569d40: CALL core_path.cpp_GlobalPathmapListCorruption_FUN_00548590
//   Label: LAB_00569d40
//   XREF to: 00548590 (UNCONDITIONAL_CALL)
// 00569d45: PUSH 0x0
//   Label: LAB_00569d45
// 00569d47: PUSH 0x645ab1
//   XREF to: 00645ab1 (DATA)
// 00569d4c: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00569d51: ADD ESP,0x4
// 00569d54: PUSH EAX
// 00569d55: MOV EBX,dword ptr [0x0067cf80]
//   XREF to: 02dcd850 (PARAM)
//   XREF to: 0067cf80 (READ)
// 00569d5b: PUSH EBX
//   XREF to: 02dcd850 (DATA)
// 00569d5c: LEA EDI,[ESP + 0x170]
//   XREF to: Stack[-0xc4] (DATA)
// 00569d63: CALL core_level.cpp_CLevelLoader_update_FUN_00504160
//   XREF to: 00504160 (UNCONDITIONAL_CALL)
// 00569d68: ADD ESP,0xc
// 00569d6b: LEA ESI,[EBP + 0x14d0f0]
// 00569d71: MOV DL,0x2e
// 00569d73: PUSH EDI
// 00569d74: MOV AL,byte ptr [ESI]
//   Label: LAB_00569d74
// 00569d76: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0xc4] (DATA)
// 00569d78: CMP AL,0x0
// 00569d7a: JZ 0x00569d8c
//   XREF to: 00569d8c (CONDITIONAL_JUMP)
// 00569d7c: MOV AL,byte ptr [ESI + 0x1]
// 00569d7f: ADD ESI,0x2
// 00569d82: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0xc3] (WRITE)
// 00569d85: ADD EDI,0x2
// 00569d88: CMP AL,0x0
// 00569d8a: JNZ 0x00569d74
//   XREF to: 00569d74 (CONDITIONAL_JUMP)
// 00569d8c: POP EDI
//   Label: LAB_00569d8c
// 00569d8d: LEA ESI,[ESP + 0x164]
//   XREF to: Stack[-0xc4] (DATA)
// 00569d94: MOV AL,byte ptr [ESI]
//   Label: LAB_00569d94
//   XREF to: Stack[-0xc4] (DATA)
// 00569d96: CMP AL,DL
// 00569d98: JZ 0x00569dac
//   XREF to: 00569dac (CONDITIONAL_JUMP)
// 00569d9a: CMP AL,0x0
// 00569d9c: JZ 0x00569daa
//   XREF to: 00569daa (CONDITIONAL_JUMP)
// 00569d9e: INC ESI
// 00569d9f: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0xc3] (DATA)
// 00569da1: CMP AL,DL
// 00569da3: JZ 0x00569dac
//   XREF to: 00569dac (CONDITIONAL_JUMP)
// 00569da5: INC ESI
// 00569da6: CMP AL,0x0
// 00569da8: JNZ 0x00569d94
//   XREF to: 00569d94 (CONDITIONAL_JUMP)
// 00569daa: SUB ESI,ESI
//   Label: LAB_00569daa
// 00569dac: MOV EDI,ESI
//   Label: LAB_00569dac
// 00569dae: TEST ESI,ESI
// 00569db0: JNZ 0x00569dd5
//   XREF to: 00569dd5 (CONDITIONAL_JUMP)
// 00569db2: LEA ESI,[ESP + 0x164]
//   XREF to: Stack[-0xc4] (DATA)
// 00569db9: XOR DL,DL
// 00569dbb: MOV AL,byte ptr [ESI]
//   Label: LAB_00569dbb
//   XREF to: Stack[-0xc4] (DATA)
// 00569dbd: CMP AL,DL
// 00569dbf: JZ 0x00569dd3
//   XREF to: 00569dd3 (CONDITIONAL_JUMP)
// 00569dc1: CMP AL,0x0
// 00569dc3: JZ 0x00569dd1
//   XREF to: 00569dd1 (CONDITIONAL_JUMP)
// 00569dc5: INC ESI
// 00569dc6: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0xc3] (DATA)
// 00569dc8: CMP AL,DL
// 00569dca: JZ 0x00569dd3
//   XREF to: 00569dd3 (CONDITIONAL_JUMP)
// 00569dcc: INC ESI
// 00569dcd: CMP AL,0x0
// 00569dcf: JNZ 0x00569dbb
//   XREF to: 00569dbb (CONDITIONAL_JUMP)
// 00569dd1: SUB ESI,ESI
//   Label: LAB_00569dd1
// 00569dd3: MOV EDI,ESI
//   Label: LAB_00569dd3
// 00569dd5: MOV ESI,0x645ac0
//   Label: LAB_00569dd5
//   XREF to: 00645ac0 (DATA)
// 00569dda: PUSH EDI
// 00569ddb: MOV AL,byte ptr [ESI]
//   Label: LAB_00569ddb
//   XREF to: 00645ac0 (READ)
//   XREF to: 00645ac2 (READ)
// 00569ddd: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0xc3] (DATA)
// 00569ddf: CMP AL,0x0
// 00569de1: JZ 0x00569df3
//   XREF to: 00569df3 (CONDITIONAL_JUMP)
// 00569de3: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00645ac1 (READ)
//   XREF to: 00645ac3 (READ)
// 00569de6: ADD ESI,0x2
// 00569de9: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0xc0] (WRITE)
// 00569dec: ADD EDI,0x2
// 00569def: CMP AL,0x0
// 00569df1: JNZ 0x00569ddb
//   XREF to: 00569ddb (CONDITIONAL_JUMP)
// 00569df3: POP EDI
//   Label: LAB_00569df3
// 00569df4: LEA EAX,[ESP + 0x164]
//   XREF to: Stack[-0xc4] (DATA)
// 00569dfb: PUSH EAX
// 00569dfc: PUSH EBP
// 00569dfd: CALL core_setdir.cpp_CDemonSet_refreshThumbs_FUN_00575b40
//   XREF to: 00575b40 (UNCONDITIONAL_CALL)
// 00569e02: MOV ESI,dword ptr [EBP + 0x15ac94]
// 00569e08: ADD ESP,0x8
// 00569e0b: TEST ESI,ESI
// 00569e0d: JZ 0x00569e23
//   XREF to: 00569e23 (CONDITIONAL_JUMP)
// 00569e0f: LEA EAX,[EBP + 0x15ac98]
// 00569e15: PUSH EAX
// 00569e16: PUSH 0x32780a4
//   XREF to: 032780a4 (DATA)
// 00569e1b: CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0
//   XREF to: 00476db0 (UNCONDITIONAL_CALL)
// 00569e20: ADD ESP,0x8
// 00569e23: MOV EDI,dword ptr [EBP]
//   Label: LAB_00569e23
// 00569e26: XOR ESI,ESI
// 00569e28: TEST EDI,EDI
// 00569e2a: JLE 0x00569e60
//   XREF to: 00569e60 (CONDITIONAL_JUMP)
// 00569e2c: MOV EBX,EBP
// 00569e2e: FLD float ptr [EBP + 0x14d150]
//   Label: LAB_00569e2e
// 00569e34: MOV dword ptr [EBX + 0x150],0x0
// 00569e3e: MOV dword ptr [EBX + 0x1a4],0x1
// 00569e48: INC ESI
// 00569e49: FSTP float ptr [EBX + 0x14c]
// 00569e4f: MOV EAX,dword ptr [EBP]
// 00569e52: ADD EBX,0x1a4
// 00569e58: CMP ESI,EAX
// 00569e5a: JL 0x00569e2e
//   XREF to: 00569e2e (CONDITIONAL_JUMP)
// 00569e5c: LEA EAX,[EAX]
// 00569e60: ADD ESP,0x218
//   Label: LAB_00569e60
// 00569e66: POP EBP
// 00569e67: POP EDI
// 00569e68: POP ESI
// 00569e69: POP EBX
// 00569e6a: RET
// 00569e6b: PUSH ESI
//   Label: LAB_00569e6b
// 00569e6c: MOV ECX,0x645907
//   XREF to: 00645907 (PARAM)
// 00569e71: MOV EDI,0x122
// 00569e76: PUSH 0x645917
//   XREF to: 00645917 (DATA)
// 00569e7b: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00569e81: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 00569e87: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00569e8c: ADD ESP,0x8
// 00569e8f: JMP 0x0056946d
//   XREF to: 0056946d (UNCONDITIONAL_JUMP)
// 00569e94: PUSH EDX
//   Label: LAB_00569e94
// 00569e95: PUSH EBX
// 00569e96: PUSH ESI
// 00569e97: CALL core_dcamera.cpp_loadCameraFog_FUN_00453e50
//   XREF to: 00453e50 (UNCONDITIONAL_CALL)
// 00569e9c: ADD ESP,0xc
// 00569e9f: JMP 0x005695c8
//   XREF to: 005695c8 (UNCONDITIONAL_JUMP)
// 00569ea4: PUSH 0x4
//   Label: LAB_00569ea4
// 00569ea6: PUSH 0x64597e
//   XREF to: 0064597e (DATA)
// 00569eab: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x128] (DATA)
// 00569eb2: PUSH EAX
// 00569eb3: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 00569eb8: ADD ESP,0xc
// 00569ebb: TEST EAX,EAX
// 00569ebd: JNZ 0x00569ecf
//   XREF to: 00569ecf (CONDITIONAL_JUMP)
// 00569ebf: MOV EAX,[0x006844f0]
//   XREF to: 006844f0 (READ)
// 00569ec4: MOV dword ptr [EAX],0x1
//   XREF to: 03f875e0 (WRITE)
// 00569eca: JMP 0x0056965c
//   XREF to: 0056965c (UNCONDITIONAL_JUMP)
// 00569ecf: MOV EAX,[0x006844f0]
//   Label: LAB_00569ecf
//   XREF to: 006844f0 (READ)
// 00569ed4: MOV dword ptr [EAX],0x0
//   XREF to: 03f875e0 (WRITE)
// 00569eda: JMP 0x0056965c
//   XREF to: 0056965c (UNCONDITIONAL_JUMP)
// 00569edf: MOV dword ptr [EBP + 0x161628],0x1
//   Label: LAB_00569edf
// 00569ee9: JMP 0x00569691
//   XREF to: 00569691 (UNCONDITIONAL_JUMP)
// 00569eee: MOV ESI,0x64598e
//   Label: LAB_00569eee
//   XREF to: 0064598e (DATA)
// 00569ef3: PUSH EDI
// 00569ef4: MOV AL,byte ptr [ESI]
//   Label: LAB_00569ef4
//   XREF to: 0064598e (READ)
//   XREF to: 00645990 (READ)
// 00569ef6: MOV byte ptr [EDI],AL
// 00569ef8: CMP AL,0x0
// 00569efa: JZ 0x00569f0c
//   XREF to: 00569f0c (CONDITIONAL_JUMP)
// 00569efc: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0064598f (READ)
//   XREF to: 00645991 (READ)
// 00569eff: ADD ESI,0x2
// 00569f02: MOV byte ptr [EDI + 0x1],AL
// 00569f05: ADD EDI,0x2
// 00569f08: CMP AL,0x0
// 00569f0a: JNZ 0x00569ef4
//   XREF to: 00569ef4 (CONDITIONAL_JUMP)
// 00569f0c: POP EDI
//   Label: LAB_00569f0c
// 00569f0d: MOV dword ptr [EBP + 0x16164c],0x4000
// 00569f17: JMP 0x005696bc
//   XREF to: 005696bc (UNCONDITIONAL_JUMP)
// 00569f1c: MOV ESI,0x6459a1
//   Label: LAB_00569f1c
//   XREF to: 006459a1 (DATA)
// 00569f21: MOV dword ptr [EBP + 0x15ae4c],0x0
// 00569f2b: PUSH EDI
// 00569f2c: MOV AL,byte ptr [ESI]
//   Label: LAB_00569f2c
//   XREF to: 006459a1 (READ)
//   XREF to: 006459a3 (READ)
// 00569f2e: MOV byte ptr [EDI],AL
// 00569f30: CMP AL,0x0
// 00569f32: JZ 0x00569f44
//   XREF to: 00569f44 (CONDITIONAL_JUMP)
// 00569f34: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006459a2 (READ)
//   XREF to: 006459a4 (READ)
// 00569f37: ADD ESI,0x2
// 00569f3a: MOV byte ptr [EDI + 0x1],AL
// 00569f3d: ADD EDI,0x2
// 00569f40: CMP AL,0x0
// 00569f42: JNZ 0x00569f2c
//   XREF to: 00569f2c (CONDITIONAL_JUMP)
// 00569f44: POP EDI
//   Label: LAB_00569f44
// 00569f45: JMP 0x005696fa
//   XREF to: 005696fa (UNCONDITIONAL_JUMP)
// 00569f4a: MOV dword ptr [EBP + 0x161668],0x0
//   Label: LAB_00569f4a
// 00569f54: JMP 0x0056972f
//   XREF to: 0056972f (UNCONDITIONAL_JUMP)
// 00569f59: MOV EDI,dword ptr [0x006843f8]
//   Label: LAB_00569f59
//   XREF to: 006843f8 (READ)
// 00569f5f: PUSH EDI
//   XREF to: 03f8749c (DATA)
// 00569f60: CALL core_terrain.cpp_CTerrain_dtor_FUN_005e1f30
//   XREF to: 005e1f30 (UNCONDITIONAL_CALL)
// 00569f65: ADD ESP,0x4
// 00569f68: MOV dword ptr [EBP + 0x15aca8],0x0
// 00569f72: JMP 0x00569766
//   XREF to: 00569766 (UNCONDITIONAL_JUMP)
// 00569f77: PUSH 0x5
//   Label: LAB_00569f77
// 00569f79: PUSH 0x6459e2
//   XREF to: 006459e2 (DATA)
// 00569f7e: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x128] (DATA)
// 00569f85: PUSH EAX
// 00569f86: MOV dword ptr [EBP + 0x15aeb8],0x0
// 00569f90: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 00569f95: ADD ESP,0xc
// 00569f98: TEST EAX,EAX
// 00569f9a: JNZ 0x00569fa6
//   XREF to: 00569fa6 (CONDITIONAL_JUMP)
// 00569f9c: MOV dword ptr [EBP + 0x15aeb8],0x2
// 00569fa6: PUSH 0x4
//   Label: LAB_00569fa6
// 00569fa8: PUSH 0x6459e8
//   XREF to: 006459e8 (DATA)
// 00569fad: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x128] (DATA)
// 00569fb4: PUSH EAX
// 00569fb5: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 00569fba: ADD ESP,0xc
// 00569fbd: TEST EAX,EAX
// 00569fbf: JNZ 0x00569fc7
//   XREF to: 00569fc7 (CONDITIONAL_JUMP)
// 00569fc1: MOV dword ptr [EBP + 0x15aeb8],EAX
// 00569fc7: PUSH 0x5
//   Label: LAB_00569fc7
// 00569fc9: PUSH 0x6459ed
//   XREF to: 006459ed (DATA)
// 00569fce: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x128] (DATA)
// 00569fd5: PUSH EAX
// 00569fd6: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 00569fdb: ADD ESP,0xc
// 00569fde: TEST EAX,EAX
// 00569fe0: JNZ 0x00569fec
//   XREF to: 00569fec (CONDITIONAL_JUMP)
// 00569fe2: MOV dword ptr [EBP + 0x15aeb8],0x3
// 00569fec: PUSH 0x6
//   Label: LAB_00569fec
// 00569fee: PUSH 0x6459f3
//   XREF to: 006459f3 (DATA)
// 00569ff3: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x128] (DATA)
// 00569ffa: PUSH EAX
// 00569ffb: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 0056a000: ADD ESP,0xc
// 0056a003: TEST EAX,EAX
// 0056a005: JNZ 0x0056a00d
//   XREF to: 0056a00d (CONDITIONAL_JUMP)
// 0056a007: MOV dword ptr [EBP + 0x15aeb8],EAX
// 0056a00d: PUSH 0x4
//   Label: LAB_0056a00d
// 0056a00f: PUSH 0x6459fa
//   XREF to: 006459fa (DATA)
// 0056a014: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x128] (DATA)
// 0056a01b: PUSH EAX
// 0056a01c: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 0056a021: ADD ESP,0xc
// 0056a024: TEST EAX,EAX
// 0056a026: JNZ 0x0056a032
//   XREF to: 0056a032 (CONDITIONAL_JUMP)
// 0056a028: MOV dword ptr [EBP + 0x15aeb8],0x3
// 0056a032: MOV dword ptr [EBP + 0x15aebc],0x0
//   Label: LAB_0056a032
// 0056a03c: JMP 0x00569a00
//   XREF to: 00569a00 (UNCONDITIONAL_JUMP)
// 0056a041: PUSH 0x5
//   Label: LAB_0056a041
// 0056a043: PUSH 0x645a03
//   XREF to: 00645a03 (DATA)
// 0056a048: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x128] (DATA)
// 0056a04f: PUSH EAX
// 0056a050: MOV dword ptr [EBP + 0x15f67c],0x2
// 0056a05a: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 0056a05f: ADD ESP,0xc
// 0056a062: TEST EAX,EAX
// 0056a064: JNZ 0x0056a070
//   XREF to: 0056a070 (CONDITIONAL_JUMP)
// 0056a066: MOV dword ptr [EBP + 0x15f67c],0x8
// 0056a070: PUSH 0x4
//   Label: LAB_0056a070
// 0056a072: PUSH 0x645a09
//   XREF to: 00645a09 (DATA)
// 0056a077: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x128] (DATA)
// 0056a07e: PUSH EAX
// 0056a07f: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 0056a084: ADD ESP,0xc
// 0056a087: TEST EAX,EAX
// 0056a089: JNZ 0x0056a095
//   XREF to: 0056a095 (CONDITIONAL_JUMP)
// 0056a08b: MOV dword ptr [EBP + 0x15f67c],0x3
// 0056a095: PUSH 0x5
//   Label: LAB_0056a095
// 0056a097: PUSH 0x645a0e
//   XREF to: 00645a0e (DATA)
// 0056a09c: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x128] (DATA)
// 0056a0a3: PUSH EAX
// 0056a0a4: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 0056a0a9: ADD ESP,0xc
// 0056a0ac: TEST EAX,EAX
// 0056a0ae: JNZ 0x0056a0ba
//   XREF to: 0056a0ba (CONDITIONAL_JUMP)
// 0056a0b0: MOV dword ptr [EBP + 0x15f67c],0x2
// 0056a0ba: PUSH 0x6
//   Label: LAB_0056a0ba
// 0056a0bc: PUSH 0x645a14
//   XREF to: 00645a14 (DATA)
// 0056a0c1: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x128] (DATA)
// 0056a0c8: PUSH EAX
// 0056a0c9: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 0056a0ce: ADD ESP,0xc
// 0056a0d1: TEST EAX,EAX
// 0056a0d3: JNZ 0x0056a0df
//   XREF to: 0056a0df (CONDITIONAL_JUMP)
// 0056a0d5: MOV dword ptr [EBP + 0x15f67c],0x7
// 0056a0df: PUSH 0x6
//   Label: LAB_0056a0df
// 0056a0e1: PUSH 0x645a1b
//   XREF to: 00645a1b (DATA)
// 0056a0e6: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x128] (DATA)
// 0056a0ed: PUSH EAX
// 0056a0ee: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 0056a0f3: ADD ESP,0xc
// 0056a0f6: TEST EAX,EAX
// 0056a0f8: JNZ 0x0056a104
//   XREF to: 0056a104 (CONDITIONAL_JUMP)
// 0056a0fa: MOV dword ptr [EBP + 0x15f67c],0x2
// 0056a104: PUSH 0x4
//   Label: LAB_0056a104
// 0056a106: PUSH 0x645a22
//   XREF to: 00645a22 (DATA)
// 0056a10b: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x128] (DATA)
// 0056a112: PUSH EAX
// 0056a113: CALL crt_string.c_strnicmp_FUN_005ff070
//   XREF to: 005ff070 (UNCONDITIONAL_CALL)
// 0056a118: ADD ESP,0xc
// 0056a11b: TEST EAX,EAX
// 0056a11d: JNZ 0x00569a35
//   XREF to: 00569a35 (CONDITIONAL_JUMP)
// 0056a123: MOV dword ptr [EBP + 0x15f67c],0x8
// 0056a12d: JMP 0x00569a35
//   XREF to: 00569a35 (UNCONDITIONAL_JUMP)
// 0056a132: MOV dword ptr [EBP + 0x15ac7c],0x0
//   Label: LAB_0056a132
// 0056a13c: JMP 0x00569a6a
//   XREF to: 00569a6a (UNCONDITIONAL_JUMP)
// 0056a141: MOV dword ptr [EBP + 0x15b410],0x0
//   Label: LAB_0056a141
// 0056a14b: JMP 0x00569c19
//   XREF to: 00569c19 (UNCONDITIONAL_JUMP)
// 0056a150: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_0056a150
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0056a155: PUSH 0x0
// 0056a157: PUSH 0x0
// 0056a159: PUSH 0x645a8a
//   XREF to: 00645a8a (DATA)
// 0056a15e: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0056a163: ADD ESP,0xc
// 0056a166: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0056a16b: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0056a170: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 0056a175: JMP 0x00569d40
//   XREF to: 00569d40 (UNCONDITIONAL_JUMP)
// 0056a17a: PUSH EBP
//   Label: LAB_0056a17a
// 0056a17b: CALL core_setcolid.cpp_CDemonSet_FUN_00574560
//   XREF to: 00574560 (UNCONDITIONAL_CALL)
// 0056a180: ADD ESP,0x4
// 0056a183: JMP 0x00569d45
//   XREF to: 00569d45 (UNCONDITIONAL_JUMP)
