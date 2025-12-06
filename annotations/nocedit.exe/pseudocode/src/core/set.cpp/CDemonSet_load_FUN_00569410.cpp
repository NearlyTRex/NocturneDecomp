// Name: core_set.cpp_CDemonSet_load_FUN_00569410
// Address: 00569410
// Address Range: [[00569410, 0056a187]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_load_FUN_00569410(CDemonSet * this_ptr, char * filename)

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
