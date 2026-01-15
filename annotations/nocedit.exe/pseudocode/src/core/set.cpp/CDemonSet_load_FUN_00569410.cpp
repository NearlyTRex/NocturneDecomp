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
  CDemonSet *pCVar5;
  C3DSLight *this_ptr_01;
  C3DSCamera *pCVar6;
  char *pcVar7;
  CMatrix3x3f *pCVar8;
  char *pcVar9;
  int iVar10;
  char local_228 [256];
  char local_128 [100];
  char local_c4 [100];
  CVector3f local_60;
  CVector3f local_54;
  byte local_48 [4];
  float *local_44;
  int *local_40;
  float *local_3c;
  SRoom *local_38;
  SVDBox *local_34;
  float *local_30;
  float *local_2c;
  float *local_28;
  float *local_24;
  float *local_20;
  CVector3f *local_1c;
  CVector3f *local_18;
  float *local_14;
  
  iVar10 = 0;
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Loading set");
  core_level_cpp_CLevelLoader_update_FUN_00504160(g_CLevelLoaderPtr,pcVar3,iVar10);
  core_set_cpp_CDemonSet_clear_FUN_005693c0(this_ptr);
  pFVar4 = engine_dosio_c_getFile_FUN_00481a50("models",filename,"rt");
  if (pFVar4 == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\set.cpp";
    g_CurrentLineNumber = 0x122;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::Unable to open %s",filename);
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%d\n",&this_ptr->set_file_version);
  crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%f\n",&this_ptr->set_scale_factor);
  crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%s\n",local_228);
  crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%s\n",local_128);
  crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%f\n",&this_ptr->min_ambient_value);
  if (this_ptr->set_file_version == 0) {
    crt_stdio_c_fgets_FUN_005fefd0(local_228,0xff,pFVar4);
    crt_stdio_c_fgets_FUN_005fefd0(local_228,0xff,pFVar4);
    crt_stdio_c_fgets_FUN_005fefd0(local_228,0xff,pFVar4);
  }
  if (this_ptr->set_file_version < 0x11) {
    crt_stdio_c_fgets_FUN_005fefd0(local_228,0xff,pFVar4);
    crt_stdio_c_fscanf_FUN_005fe7c0
              (pFVar4,"%d,%d,%d,%d\n",local_48,(SFog *)(this_ptr->field19_0x14f0a0 + 0xbb90),
               this_ptr->field19_0x14f0a0 + 0xbb94,this_ptr->field19_0x14f0a0 + 0xbb98);
    crt_stdio_c_fgets_FUN_005fefd0(local_228,0xff,pFVar4);
    crt_stdio_c_fscanf_FUN_005fe7c0
              (pFVar4,"%f,%f,%f\n",this_ptr->field19_0x14f0a0 + 0xbb9c,
               this_ptr->field19_0x14f0a0 + 0xbba0,this_ptr->field19_0x14f0a0 + 0xbba4);
    crt_stdio_c_fscanf_FUN_005fe7c0
              (pFVar4,"%f,%f,%f,%f\n",this_ptr->field19_0x14f0a0 + 0xbba8,
               this_ptr->field19_0x14f0a0 + 0xbbac,local_48,local_48);
    this_ptr->field19_0x14f0a0[0xbbb0] = '\0';
    this_ptr->field19_0x14f0a0[0xbbb1] = '\0';
    this_ptr->field19_0x14f0a0[0xbbb2] = 'H';
    this_ptr->field19_0x14f0a0[0xbbb3] = 'B';
  }
  else {
    core_dcamera_cpp_loadCameraFog_FUN_00453e50
              ((SFog *)(this_ptr->field19_0x14f0a0 + 0xbb90),pFVar4,this_ptr->set_file_version);
  }
  crt_stdio_c_fgets_FUN_005fefd0(local_228,0xff,pFVar4);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (pFVar4,"%f,%f\n",&g_CWaterPtr->water_level_y,&g_CWaterPtr->tile_size);
  crt_stdio_c_fgets_FUN_005fefd0(local_228,0xff,pFVar4);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (pFVar4,"%d,%s\n",&this_ptr->use_enviro_model,this_ptr->enviro_model_name);
  if (this_ptr->set_file_version < 5) {
    iVar10 = crt_string_c_strnicmp_FUN_005ff070(local_128,"ndun",4);
    if (iVar10 == 0) {
      g_CWaterPtr->wave_animation_enabled = 1;
    }
    else {
      g_CWaterPtr->wave_animation_enabled = 0;
    }
  }
  else {
    crt_stdio_c_fgets_FUN_005fefd0(local_228,0xff,pFVar4);
    crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%d\n",g_CWaterPtr);
  }
  if (this_ptr->set_file_version < 6) {
    this_ptr->has_sky = 1;
  }
  else {
    crt_stdio_c_fgets_FUN_005fefd0(local_228,0xff,pFVar4);
    crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%d\n",&this_ptr->has_sky);
  }
  pcVar3 = this_ptr->sky_texture_name;
  if (this_ptr->set_file_version < 0xc) {
    pcVar7 = "NITESKY.RAW";
    do {
      cVar2 = *pcVar7;
      *pcVar3 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar3[1] = cVar2;
      pcVar3 = pcVar3 + 2;
    } while (cVar2 != '\0');
    this_ptr->sky_type = 0x4000;
  }
  else {
    crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%d,%s\n",&this_ptr->sky_type,pcVar3);
  }
  pcVar3 = this_ptr->world_geometry_name;
  if (this_ptr->set_file_version < 0xd) {
    pcVar7 = "none";
    this_ptr->use_world_geometry_flag = 0;
    do {
      cVar2 = *pcVar7;
      *pcVar3 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar3[1] = cVar2;
      pcVar3 = pcVar3 + 2;
    } while (cVar2 != '\0');
  }
  else {
    crt_stdio_c_fgets_FUN_005fefd0(local_228,0xff,pFVar4);
    crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%d,%s\n",&this_ptr->use_world_geometry_flag,pcVar3)
    ;
  }
  if (this_ptr->set_file_version < 0x19) {
    this_ptr->weather_type = 0;
  }
  else {
    crt_stdio_c_fgets_FUN_005fefd0(local_228,0xff,pFVar4);
    crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%d\n",&this_ptr->weather_type);
  }
  iVar10 = crt_string_c_strnicmp_FUN_005ff070(local_128,"train",5);
  this_ptr_00 = g_CTerrainPtr;
  if (iVar10 == 0) {
    this_ptr->player_on_train = 1;
    core_terrain_cpp_CTerrain_ctor_FUN_005e1ef0(this_ptr_00);
  }
  else {
    core_terrain_cpp_CTerrain_dtor_FUN_005e1f30(g_CTerrainPtr);
    this_ptr->player_on_train = 0;
  }
  if (10 < this_ptr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(local_228,0xff,pFVar4);
  }
  iVar10 = 0;
  crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%d\n",&this_ptr->light_count);
  if (0 < this_ptr->light_count) {
    this_ptr_01 = this_ptr->lights;
    do {
      iVar10 = iVar10 + 1;
      core_setutil_cpp_C3DSLight_load_FUN_00586310(this_ptr_01,pFVar4);
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar10 < this_ptr->light_count);
  }
  if (10 < this_ptr->set_file_version) {
    crt_stdio_c_fgets_FUN_005fefd0(local_228,0xff,pFVar4);
  }
  iVar10 = 0;
  crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%d\n",this_ptr);
  if (0 < this_ptr->camera_count) {
    pCVar6 = this_ptr->cameras;
    do {
      iVar10 = iVar10 + 1;
      core_setutil_cpp_C3DSCamera_load_FUN_00585420(pCVar6,pFVar4);
      pCVar6 = pCVar6 + 1;
    } while (iVar10 < this_ptr->camera_count);
  }
  if (this_ptr->set_file_version < 1) {
    this_ptr->room_reverb_type = 0;
    iVar10 = crt_string_c_strnicmp_FUN_005ff070(local_128,"mauso",5);
    if (iVar10 == 0) {
      this_ptr->room_reverb_type = 2;
    }
    iVar10 = crt_string_c_strnicmp_FUN_005ff070(local_128,"h109",4);
    if (iVar10 == 0) {
      this_ptr->room_reverb_type = 0;
    }
    iVar10 = crt_string_c_strnicmp_FUN_005ff070(local_128,"smill",5);
    if (iVar10 == 0) {
      this_ptr->room_reverb_type = 3;
    }
    iVar10 = crt_string_c_strnicmp_FUN_005ff070(local_128,"pier59",6);
    if (iVar10 == 0) {
      this_ptr->room_reverb_type = 0;
    }
    iVar10 = crt_string_c_strnicmp_FUN_005ff070(local_128,"ndun",4);
    if (iVar10 == 0) {
      this_ptr->room_reverb_type = 3;
    }
    this_ptr->room_count = 0;
  }
  else {
    crt_stdio_c_fgets_FUN_005fefd0(local_228,0xff,pFVar4);
    crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%d\n",&this_ptr->room_reverb_type);
    iVar10 = 0;
    crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%d\n",&this_ptr->room_count);
    if (0 < this_ptr->room_count) {
      local_38 = this_ptr->rooms;
      local_40 = &this_ptr->rooms[0].field4_0x40;
      pCVar8 = &this_ptr->rooms[0].rotation_matrix;
      local_18 = &this_ptr->rooms[0].extents;
      local_2c = &this_ptr->rooms[0].extents.y;
      local_28 = &this_ptr->rooms[0].extents.z;
      local_20 = &this_ptr->rooms[0].position.y;
      local_44 = &this_ptr->rooms[0].position.z;
      do {
        crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%f,%f,%f\n",local_38 + iVar10,local_20,local_44)
        ;
        crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%f,%f,%f\n",local_18,local_2c,local_28);
        crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%f,%f,%f\n",&local_54,&local_54.z,&local_54.y);
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(pCVar8,&local_54);
        iVar10 = iVar10 + 1;
        crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%d\n",local_40);
        pCVar8 = (CMatrix3x3f *)((int)(pCVar8 + 1) + 0x20);
        local_40 = local_40 + 0x11;
        local_18 = (CVector3f *)((int)(local_18 + 5) + 8);
        local_2c = local_2c + 0x11;
        local_28 = local_28 + 0x11;
        local_20 = local_20 + 0x11;
        local_44 = local_44 + 0x11;
      } while (iVar10 < this_ptr->room_count);
    }
  }
  if (this_ptr->set_file_version < 3) {
    this_ptr->default_ground_type = 2;
    iVar10 = crt_string_c_strnicmp_FUN_005ff070(local_128,"mauso",5);
    if (iVar10 == 0) {
      this_ptr->default_ground_type = 8;
    }
    iVar10 = crt_string_c_strnicmp_FUN_005ff070(local_128,"h109",4);
    if (iVar10 == 0) {
      this_ptr->default_ground_type = 3;
    }
    iVar10 = crt_string_c_strnicmp_FUN_005ff070(local_128,"smill",5);
    if (iVar10 == 0) {
      this_ptr->default_ground_type = 2;
    }
    iVar10 = crt_string_c_strnicmp_FUN_005ff070(local_128,"pier59",6);
    if (iVar10 == 0) {
      this_ptr->default_ground_type = 7;
    }
    iVar10 = crt_string_c_strnicmp_FUN_005ff070(local_128,"castle",6);
    if (iVar10 == 0) {
      this_ptr->default_ground_type = 2;
    }
    iVar10 = crt_string_c_strnicmp_FUN_005ff070(local_128,"ndun",4);
    if (iVar10 == 0) {
      this_ptr->default_ground_type = 8;
    }
  }
  else {
    crt_stdio_c_fgets_FUN_005fefd0(local_228,0xff,pFVar4);
    crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%d\n",&this_ptr->default_ground_type);
  }
  if (this_ptr->set_file_version < 0x18) {
    this_ptr->default_master_reverb = 0;
  }
  else {
    crt_stdio_c_fgets_FUN_005fefd0(local_228,0xff,pFVar4);
    crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%d\n",&this_ptr->default_master_reverb);
  }
  if ((3 < this_ptr->set_file_version) && (this_ptr->set_file_version < 10)) {
    core_setdir_cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00576200(this_ptr,pFVar4);
  }
  if (this_ptr->set_file_version < 5) {
    this_ptr->vdir_box_count = 0;
  }
  else {
    crt_stdio_c_fgets_FUN_005fefd0(local_228,0xff,pFVar4);
    iVar10 = 0;
    crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%d\n",&this_ptr->vdir_box_count);
    if (0 < this_ptr->vdir_box_count) {
      local_34 = this_ptr->vdir_boxes;
      pCVar8 = &this_ptr->vdir_boxes[0].rotation_matrix;
      local_1c = &this_ptr->vdir_boxes[0].extents;
      local_3c = &this_ptr->vdir_boxes[0].extents.y;
      local_30 = &this_ptr->vdir_boxes[0].extents.z;
      local_24 = &this_ptr->vdir_boxes[0].position.y;
      local_14 = &this_ptr->vdir_boxes[0].position.z;
      do {
        crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%f,%f,%f\n",local_34 + iVar10,local_24,local_14)
        ;
        crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%f,%f,%f\n",local_1c,local_3c,local_30);
        crt_stdio_c_fscanf_FUN_005fe7c0(pFVar4,"%f,%f,%f\n",&local_60,&local_60.z,&local_60.y);
        iVar10 = iVar10 + 1;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(pCVar8,&local_60);
        pCVar8 = (CMatrix3x3f *)((int)(pCVar8 + 1) + 0x20);
        local_1c = (CVector3f *)((int)(local_1c + 5) + 8);
        local_3c = local_3c + 0x11;
        local_30 = local_30 + 0x11;
        local_24 = local_24 + 0x11;
        local_14 = local_14 + 0x11;
      } while (iVar10 < this_ptr->vdir_box_count);
    }
    core_setdir_cpp_CDemonSet_FUN_00576710(this_ptr);
  }
  if (this_ptr->set_file_version == 0xe) {
    crt_stdio_c_fgets_FUN_005fefd0(local_228,0xff,pFVar4);
    crt_stdio_c_fgets_FUN_005fefd0(local_228,0xff,pFVar4);
  }
  if (0x13 < this_ptr->set_file_version) {
    iVar10 = 0;
    crt_stdio_c_fgets_FUN_005fefd0(local_228,0xff,pFVar4);
    if (0 < this_ptr->camera_count) {
      pCVar6 = this_ptr->cameras;
      do {
        iVar10 = iVar10 + 1;
        core_setutil_cpp_C3DSCamera_loadPVS_FUN_005857b0(pCVar6,pFVar4);
        pCVar6 = pCVar6 + 1;
      } while (iVar10 < this_ptr->camera_count);
    }
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar4,"..\\core\\set.cpp",0x1e8);
  iVar10 = 0;
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Loading set geometry");
  core_level_cpp_CLevelLoader_update_FUN_00504160(g_CLevelLoaderPtr,pcVar3,iVar10);
  pcVar3 = this_ptr->geometry_filename;
  iVar10 = crt_string_c_stricmp_FUN_005fe7f0(pcVar3,local_128);
  if (iVar10 == 0) {
    core_setcolid_cpp_CDemonSet_FUN_00574560(this_ptr);
  }
  else {
    pcVar7 = local_128;
    pcVar9 = pcVar3;
    do {
      cVar2 = *pcVar7;
      *pcVar9 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar9[1] = cVar2;
      pcVar9 = pcVar9 + 2;
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
  iVar10 = 0;
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Loading thumbs");
  pcVar7 = local_c4;
  core_level_cpp_CLevelLoader_update_FUN_00504160(g_CLevelLoaderPtr,pcVar3,iVar10);
  pcVar3 = this_ptr->geometry_filename;
  do {
    cVar2 = *pcVar3;
    *pcVar7 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
  } while (cVar2 != '\0');
  pcVar3 = local_c4;
  do {
    pcVar7 = pcVar3;
    if (*pcVar3 == '.') goto LAB_00569dac;
    if (*pcVar3 == '\0') break;
    pcVar7 = pcVar3 + 1;
    if (*pcVar7 == '.') goto LAB_00569dac;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_00569dac:
  if (pcVar7 == (char *)0x0) {
    pcVar3 = local_c4;
    do {
      pcVar7 = pcVar3;
      if (*pcVar3 == '\0') goto LAB_00569dd5;
      if (*pcVar3 == '\0') break;
      pcVar7 = pcVar3 + 1;
      if (*pcVar7 == '\0') goto LAB_00569dd5;
      pcVar3 = pcVar3 + 2;
    } while (*pcVar7 != '\0');
    pcVar7 = (char *)0x0;
  }
LAB_00569dd5:
  pcVar3 = ".zth";
  do {
    cVar2 = *pcVar3;
    *pcVar7 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
  } while (cVar2 != '\0');
  core_setdir_cpp_CDemonSet_refreshThumbs_FUN_00575b40(this_ptr,local_c4);
  if (this_ptr->use_enviro_model != 0) {
    core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0
              (&g_CKeyFramedModelInstance,this_ptr->enviro_model_name);
  }
  iVar10 = 0;
  pCVar5 = this_ptr;
  if (0 < this_ptr->camera_count) {
    do {
      fVar1 = this_ptr->min_ambient_value;
      pCVar5->cameras[0].field8_0x14c = 0;
      pCVar5->cameras[0].field17_0x1a0 = 1;
      iVar10 = iVar10 + 1;
      pCVar5->cameras[0].ambient_value = fVar1;
      pCVar5 = (CDemonSet *)&pCVar5->cameras[0].field17_0x1a0;
    } while (iVar10 < this_ptr->camera_count);
  }
  return;
}
