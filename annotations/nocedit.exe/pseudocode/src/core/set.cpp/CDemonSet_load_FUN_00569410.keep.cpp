// Name: core_set.cpp_CDemonSet_load_FUN_00569410
// Address: 00569410
// MANUAL RECONSTRUCTION
// Address Range: [[00569410, 0056a187]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_load_FUN_00569410(CDemonSet *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_load_FUN_00569410(CDemonSet *this_ptr,char *filename)

{
  char *pcVar3;
  _FILE *p_Var4;
  int iVar2;
  char *pcVar4;
  _FILE *file_ptr;
  C3DSLight *this_ptr_01;
  C3DSCamera *this_ptr_02;
  C3DSCamera *pCVar6;
  char *pcVar5;
  char local_228 [256];
  char local_128 [100];
  char local_c4 [100];
  CVector3f local_60;
  CVector3f local_54;
  int local_48;
  float local_48f;
  float fVar1;
  CTerrain *this_ptr_00;
  int iVar10;
  
  iVar10 = 0;
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Loading set");
  core_level_cpp_CLevelLoader_update_FUN_00504160(g_CLevelLoaderPtr,pcVar3,iVar10);
  core_set_cpp_CDemonSet_clear_FUN_005693c0(this_ptr);
  p_Var4 = engine_dosio_cpp_getFile_FUN_00481a50("models",filename,"rt");
  if (p_Var4 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\set.cpp";
    g_CurrentLineNumber = 0x122;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::Unable to open %s",filename);
  }
  _fscanf(p_Var4,"%d\n",&this_ptr->set_file_version);
  _fscanf(p_Var4,"%f\n",&this_ptr->set_scale_factor);
  _fscanf(p_Var4,"%s\n",local_228);
  _fscanf(p_Var4,"%s\n",local_128);
  _fscanf(p_Var4,"%f\n",&this_ptr->min_ambient_value);
  if (this_ptr->set_file_version == 0) {
    _fgets(local_228,0xff,p_Var4);
    _fgets(local_228,0xff,p_Var4);
    _fgets(local_228,0xff,p_Var4);
  }
  if (this_ptr->set_file_version < 0x11) {
    _fgets(local_228,0xff,p_Var4);
    _fscanf(p_Var4,"%d,%d,%d,%d\n",&local_48,&(this_ptr->scene_fog).color_index.r,
               &(this_ptr->scene_fog).color_index.g,&(this_ptr->scene_fog).color_index.b);
    _fgets(local_228,0xff,p_Var4);
    _fscanf(p_Var4,"%f,%f,%f\n",&(this_ptr->scene_fog).scroll.x,&(this_ptr->scene_fog).scroll.y
               ,&(this_ptr->scene_fog).scroll.z);
    _fscanf(p_Var4,"%f,%f,%f,%f\n",&(this_ptr->scene_fog).height_threshold,
               &(this_ptr->scene_fog).density_multiplier,&local_48f,&local_48f);
    (this_ptr->scene_fog).temperature = 50.0;
  }
  else {
    core_dcamera_cpp_loadCameraFog_FUN_00453e50
              (&this_ptr->scene_fog,p_Var4,this_ptr->set_file_version);
  }
  _fgets(local_228,0xff,p_Var4);
  _fscanf(p_Var4,"%f,%f\n",&g_CWaterPtr->water_level_y,&g_CWaterPtr->tile_size);
  _fgets(local_228,0xff,p_Var4);
  _fscanf(p_Var4,"%d,%s\n",&this_ptr->use_enviro_model,this_ptr->enviro_model_name);
  if (this_ptr->set_file_version < 5) {
    iVar2 = _strnicmp(local_128,"ndun",4);
    if (iVar2 == 0) {
      g_CWaterPtr->wave_animation_enabled = 1;
    }
    else {
      g_CWaterPtr->wave_animation_enabled = 0;
    }
  }
  else {
    _fgets(local_228,0xff,p_Var4);
    _fscanf(p_Var4,"%d\n",&g_CWaterPtr->wave_animation_enabled);
  }
  if (this_ptr->set_file_version < 6) {
    this_ptr->has_sky = 1;
  }
  else {
    _fgets(local_228,0xff,p_Var4);
    _fscanf(p_Var4,"%d\n",&this_ptr->has_sky);
  }
  pcVar4 = this_ptr->sky_texture_name;
  if (this_ptr->set_file_version < 0xc) {
    strcpy(pcVar4, "NITESKY.RAW");
    this_ptr->sky_brightness = 0x4000;
  }
  else {
    _fscanf(p_Var4,"%d,%s\n",&this_ptr->sky_brightness,pcVar4);
  }
  pcVar4 = this_ptr->world_geometry_name;
  if (this_ptr->set_file_version < 0xd) {
    this_ptr->use_world_geometry_flag = 0;
    strcpy(pcVar4, "none");
  }
  else {
    _fgets(local_228,0xff,p_Var4);
    _fscanf(p_Var4,"%d,%s\n",&this_ptr->use_world_geometry_flag,pcVar4)
    ;
  }
  if (this_ptr->set_file_version < 0x19) {
    this_ptr->weather_type = WEATHER_TYPE_NONE;
  }
  else {
    _fgets(local_228,0xff,p_Var4);
    _fscanf(p_Var4,"%d\n",&this_ptr->weather_type);
  }
  iVar2 = _strnicmp(local_128,"train",5);
  this_ptr_00 = g_CTerrainPtr;
  if (iVar2 == 0) {
    this_ptr->player_on_train = 1;
    core_terrain_cpp_CTerrain_init_FUN_005e1ef0(this_ptr_00);
  }
  else {
    core_terrain_cpp_CTerrain_free_FUN_005e1f30(g_CTerrainPtr);
    this_ptr->player_on_train = 0;
  }
  if (10 < this_ptr->set_file_version) {
    _fgets(local_228,0xff,p_Var4);
  }
  iVar2 = 0;
  _fscanf(p_Var4,"%d\n",&this_ptr->light_count);
  if (0 < this_ptr->light_count) {
    this_ptr_01 = this_ptr->lights;
    do {
      iVar2 = iVar2 + 1;
      core_setutil_cpp_C3DSLight_load_FUN_00586310(this_ptr_01,p_Var4);
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar2 < this_ptr->light_count);
  }
  if (10 < this_ptr->set_file_version) {
    _fgets(local_228,0xff,p_Var4);
  }
  iVar2 = 0;
  _fscanf(p_Var4,"%d\n",&this_ptr->camera_count);
  if (0 < this_ptr->camera_count) {
    this_ptr_02 = this_ptr->cameras;
    do {
      iVar2 = iVar2 + 1;
      core_setutil_cpp_C3DSCamera_load_FUN_00585420(this_ptr_02,p_Var4);
      this_ptr_02 = this_ptr_02 + 1;
    } while (iVar2 < this_ptr->camera_count);
  }
  if (this_ptr->set_file_version < 1) {
    this_ptr->default_room_size = 0;
    iVar2 = _strnicmp(local_128,"mauso",5);
    if (iVar2 == 0) {
      this_ptr->default_room_size = 2;
    }
    iVar2 = _strnicmp(local_128,"h109",4);
    if (iVar2 == 0) {
      this_ptr->default_room_size = 0;
    }
    iVar2 = _strnicmp(local_128,"smill",5);
    if (iVar2 == 0) {
      this_ptr->default_room_size = 3;
    }
    iVar2 = _strnicmp(local_128,"pier59",6);
    if (iVar2 == 0) {
      this_ptr->default_room_size = 0;
    }
    iVar2 = _strnicmp(local_128,"ndun",4);
    if (iVar2 == 0) {
      this_ptr->default_room_size = 3;
    }
    this_ptr->room_count = 0;
  }
  else {
    _fgets(local_228,0xff,p_Var4);
    _fscanf(p_Var4,"%d\n",&this_ptr->default_room_size);
    iVar2 = 0;
    _fscanf(p_Var4,"%d\n",&this_ptr->room_count);
    for (iVar2 = 0; iVar2 < this_ptr->room_count; iVar2 = iVar2 + 1) {
      _fscanf(p_Var4,"%f,%f,%f\n",&this_ptr->rooms[iVar2].position.x,
              &this_ptr->rooms[iVar2].position.y,&this_ptr->rooms[iVar2].position.z);
      _fscanf(p_Var4,"%f,%f,%f\n",&this_ptr->rooms[iVar2].extents.x,
              &this_ptr->rooms[iVar2].extents.y,&this_ptr->rooms[iVar2].extents.z);
      _fscanf(p_Var4,"%f,%f,%f\n",&local_54.x,&local_54.z,&local_54.y);
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                (&this_ptr->rooms[iVar2].rotation_matrix,&local_54);
      _fscanf(p_Var4,"%d\n",&this_ptr->rooms[iVar2].reverb_size);
    }
  }
  if (this_ptr->set_file_version < 3) {
    this_ptr->default_ground_type = 2;
    iVar2 = _strnicmp(local_128,"mauso",5);
    if (iVar2 == 0) {
      this_ptr->default_ground_type = 8;
    }
    iVar2 = _strnicmp(local_128,"h109",4);
    if (iVar2 == 0) {
      this_ptr->default_ground_type = 3;
    }
    iVar2 = _strnicmp(local_128,"smill",5);
    if (iVar2 == 0) {
      this_ptr->default_ground_type = 2;
    }
    iVar2 = _strnicmp(local_128,"pier59",6);
    if (iVar2 == 0) {
      this_ptr->default_ground_type = 7;
    }
    iVar2 = _strnicmp(local_128,"castle",6);
    if (iVar2 == 0) {
      this_ptr->default_ground_type = 2;
    }
    iVar2 = _strnicmp(local_128,"ndun",4);
    if (iVar2 == 0) {
      this_ptr->default_ground_type = 8;
    }
  }
  else {
    _fgets(local_228,0xff,p_Var4);
    _fscanf(p_Var4,"%d\n",&this_ptr->default_ground_type);
  }
  if (this_ptr->set_file_version < 0x18) {
    this_ptr->default_master_reverb = 0;
  }
  else {
    _fgets(local_228,0xff,p_Var4);
    _fscanf(p_Var4,"%d\n",&this_ptr->default_master_reverb);
  }
  if ((3 < this_ptr->set_file_version) && (this_ptr->set_file_version < 10)) {
    core_setdir_cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00576200(this_ptr,p_Var4);
  }
  if (this_ptr->set_file_version < 5) {
    this_ptr->vdir_box_count = 0;
  }
  else {
    _fgets(local_228,0xff,p_Var4);
    iVar2 = 0;
    _fscanf(p_Var4,"%d\n",&this_ptr->vdir_box_count);
    for (iVar2 = 0; iVar2 < this_ptr->vdir_box_count; iVar2 = iVar2 + 1) {
      _fscanf(p_Var4,"%f,%f,%f\n",&this_ptr->vdir_boxes[iVar2].position.x,
              &this_ptr->vdir_boxes[iVar2].position.y,&this_ptr->vdir_boxes[iVar2].position.z);
      _fscanf(p_Var4,"%f,%f,%f\n",&this_ptr->vdir_boxes[iVar2].extents.x,
              &this_ptr->vdir_boxes[iVar2].extents.y,&this_ptr->vdir_boxes[iVar2].extents.z);
      _fscanf(p_Var4,"%f,%f,%f\n",&local_60.x,&local_60.z,&local_60.y);
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
                (&this_ptr->vdir_boxes[iVar2].rotation_matrix,&local_60);
    }
    core_setdir_cpp_CDemonSet_buildVdirBoxGroups_FUN_00576710(this_ptr);
  }
  if (this_ptr->set_file_version == 0xe) {
    _fgets(local_228,0xff,p_Var4);
    _fgets(local_228,0xff,p_Var4);
  }
  if (0x13 < this_ptr->set_file_version) {
    iVar2 = 0;
    _fgets(local_228,0xff,p_Var4);
    if (0 < this_ptr->camera_count) {
      pCVar6 = this_ptr->cameras;
      do {
        iVar2 = iVar2 + 1;
        core_setutil_cpp_C3DSCamera_loadPVS_FUN_005857b0(pCVar6,p_Var4);
        pCVar6 = pCVar6 + 1;
      } while (iVar2 < this_ptr->camera_count);
    }
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var4,"..\\core\\set.cpp",0x1e8);
  iVar2 = 0;
  pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Loading set geometry");
  core_level_cpp_CLevelLoader_update_FUN_00504160(g_CLevelLoaderPtr,pcVar4,iVar2);
  pcVar4 = this_ptr->geometry_filename;
  iVar2 = _stricmp(pcVar4,local_128);
  if (iVar2 == 0) {
    core_setcolid_cpp_CDemonSet_commitVoxelBuffer_FUN_00574560(this_ptr);
  }
  else {
    strcpy(pcVar4, local_128);
    file_ptr = engine_dosio_cpp_getFile_FUN_00481a50("data",pcVar4,"rb");
    if (file_ptr == (_FILE *)0x0) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("Warning!  No .GEO file.  Press any key",0,0);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      engine_2d_c_clearInputAndWait_FUN_00403260();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    }
    else {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\set.cpp",0x1f1);
      core_dtrace_cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0
                (&g_CDemonRaytraceInstance,pcVar4);
    }
    core_path_cpp_resetAllPathMaps_FUN_00548590();
  }
  iVar2 = 0;
  pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Loading thumbs");
  pcVar5 = local_c4;
  core_level_cpp_CLevelLoader_update_FUN_00504160(g_CLevelLoaderPtr,pcVar4,iVar2);
  strcpy(local_c4, this_ptr->geometry_filename);
  pcVar5 = strchr(local_c4, '.');
  if (pcVar5 == (char *)0x0) {
    pcVar5 = local_c4 + strlen(local_c4);
  }
  strcpy(pcVar5, ".zth");
  core_setdir_cpp_CDemonSet_refreshThumbs_FUN_00575b40(this_ptr,local_c4);
  if (this_ptr->use_enviro_model != 0) {
    core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0
              (&g_CKeyFramedModelInstance,this_ptr->enviro_model_name);
  }
  for (iVar2 = 0; iVar2 < this_ptr->camera_count; iVar2 = iVar2 + 1) {
    fVar1 = this_ptr->min_ambient_value;
    this_ptr->cameras[iVar2].camera_group = 0;
    this_ptr->cameras[iVar2].enabled = 1;
    this_ptr->cameras[iVar2].ambient_value = fVar1;
  }
  return;
}
