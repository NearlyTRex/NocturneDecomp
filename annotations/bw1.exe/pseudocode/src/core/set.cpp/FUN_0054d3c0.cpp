// Name: core_set.cpp_FUN_0054d3c0
// Address: 0054d3c0
// Address Range: [[0054d3c0, 0054e3ba]]
// Convention: unknown
// Signature: CDemonSet * core_set_cpp_FUN_0054d3c0(CDemonSet *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonSet * core_set_cpp_FUN_0054d3c0(CDemonSet *param_1,char *param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  CTerrain *this_ptr;
  char *pcVar4;
  _FILE *p_Var5;
  CDemonSet *pCVar6;
  CVector3f *pCVar7;
  C3DSLight *this_ptr_00;
  C3DSCamera *pCVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  char local_330 [256];
  char local_230 [256];
  char local_130 [100];
  char local_cc [100];
  CVector3f local_68;
  CVector3f local_5c;
  float local_48;
  SRoom *local_44;
  SVDBox *local_40;
  float *local_3c;
  float *local_38;
  CMatrix3x3f *local_34;
  float *local_30;
  float *local_2c;
  float *local_28;
  float *local_24;
  CMatrix3x3f *local_20;
  float *local_1c;
  CVector3f *local_18;
  int *local_14;
  
  iVar11 = 0;
  pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Loading set");
  core_level_cpp_CLevelLoader_update_FUN_004fe9c0(0x01D1BD1C,pcVar4,iVar11);
  core_set_cpp_CDemonSet_clear_FUN_0054d370(param_1);
  p_Var5 = engine_dosio_cpp_FUN_00479180("models",param_2,&DAT_005f0490);
  if (p_Var5 == (_FILE *)0x0) {
    _DAT_01d1d400 = "..\\core\\set.cpp";
    _DAT_01d1d404 = 0x15c;
    core_main_c_FUN_005030e0("CDemonSet::Unable to open %s",param_2);
  }
  _fscanf(p_Var5,&DAT_005f04c7);
  _fscanf(p_Var5,&DAT_005f04cb);
  _fscanf(p_Var5,&DAT_005f04cf);
  _fscanf(p_Var5,&DAT_005f04d3);
  _fscanf(p_Var5,&DAT_005f04d7);
  pCVar7 = &param_1->directional_light_dir;
  if (param_1->set_file_version < 0x1e) {
    (param_1->directional_light_dir).x = -1.0;
    (param_1->directional_light_dir).y = -1.0;
    (param_1->directional_light_dir).z = -1.0;
    fVar1 = (param_1->directional_light_dir).y;
    fVar2 = (param_1->directional_light_dir).z;
    local_48 = SQRT(fVar2 * fVar2 + pCVar7->x * pCVar7->x + fVar1 * fVar1);
    if (local_48 <= 0.0) {
      (param_1->directional_light_dir).z = 0.0;
      (param_1->directional_light_dir).y = (param_1->directional_light_dir).z;
      pCVar7->x = (param_1->directional_light_dir).y;
      param_1->directional_light_intensity = 0.0;
    }
    else {
      fVar1 = 1.0 / local_48;
      pCVar7->x = pCVar7->x * fVar1;
      (param_1->directional_light_dir).y = (param_1->directional_light_dir).y * fVar1;
      (param_1->directional_light_dir).z = (param_1->directional_light_dir).z * fVar1;
      param_1->directional_light_intensity = 0.0;
    }
  }
  else {
    _fscanf(p_Var5,"%f,%f,%f,%f\n");
  }
  if (param_1->set_file_version == 0) {
    _fgets(local_330,0xff,p_Var5);
    _fgets(local_330,0xff,p_Var5);
    _fgets(local_330,0xff,p_Var5);
  }
  if (param_1->set_file_version < 0x11) {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,"%d,%d,%d,%d\n");
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,"%f,%f,%f\n");
    _fscanf(p_Var5,"%f,%f,%f,%f\n");
    (param_1->scene_fog).temperature = 50.0;
  }
  else {
    core_dcamera_cpp_loadCameraFog_FUN_00454ab0
              (&param_1->scene_fog,p_Var5,param_1->set_file_version);
  }
  _fgets(local_330,0xff,p_Var5);
  _fscanf(p_Var5,"%f,%f\n");
  if (param_1->set_file_version < 0x1f) {
    DAT_00625c98 = 0x2000;
    _DAT_02c8afc0 = 0;
    _DAT_02c8afc4 = 0;
    _DAT_00625c94 = 0x3e800000;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,"%f,%d,%f,%f\n");
  }
  _fgets(local_330,0xff,p_Var5);
  _fscanf(p_Var5,"%d,%s\n");
  if (param_1->set_file_version < 5) {
    iVar11 = _strnicmp(local_130,&DAT_005f052b,4);
    if (iVar11 == 0) {
      g_CWaterPtr->wave_animation_enabled = 1;
    }
    else {
      g_CWaterPtr->wave_animation_enabled = 0;
    }
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005f0527);
  }
  if (param_1->set_file_version < 6) {
    param_1->has_sky = 1;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005f0530);
  }
  pcVar4 = param_1->sky_texture_name;
  if (param_1->set_file_version < 0xc) {
    pcVar9 = "NITESKY.RAW";
    do {
      cVar3 = *pcVar9;
      *pcVar4 = cVar3;
      if (cVar3 == '\0') break;
      cVar3 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar4[1] = cVar3;
      pcVar4 = pcVar4 + 2;
    } while (cVar3 != '\0');
    param_1->sky_brightness = 0x4000;
  }
  else {
    _fscanf(p_Var5,"%d,%s\n");
  }
  pcVar4 = param_1->world_geometry_name;
  if (param_1->set_file_version < 0xd) {
    pcVar9 = &DAT_005f054e;
    param_1->use_world_geometry_flag = 0;
    do {
      cVar3 = *pcVar9;
      *pcVar4 = cVar3;
      if (cVar3 == '\0') break;
      cVar3 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar4[1] = cVar3;
      pcVar4 = pcVar4 + 2;
    } while (cVar3 != '\0');
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,"%d,%s\n");
  }
  if (param_1->set_file_version < 0x19) {
    param_1->weather_type = WEATHER_TYPE_NONE;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005f0553);
  }
  if (param_1->set_file_version < 0x1d) {
    param_1->altitude_reference_y = 0.0;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005f0557);
  }
  engine_dosio_cpp_splitPath_FUN_00479580(local_130,(char *)0x0,(char *)0x0,local_230,(char *)0x0);
  iVar11 = _stricmp(local_230,"train");
  this_ptr = 0x02C8AE68;
  if (iVar11 == 0) {
    param_1->player_on_train = 1;
    core_terrain_cpp_CTerrain_init_FUN_0059f380(this_ptr);
  }
  else {
    core_terrain_cpp_CTerrain_free_FUN_0059f3c0(0x02C8AE68);
    param_1->player_on_train = 0;
  }
  if (10 < param_1->set_file_version) {
    _fgets(local_330,0xff,p_Var5);
  }
  _fscanf(p_Var5,&DAT_005f0561);
  iVar11 = 0;
  if (0 < param_1->light_count) {
    this_ptr_00 = param_1->lights;
    do {
      core_setutil_cpp_C3DSLight_load_FUN_0055c800(this_ptr_00,p_Var5);
      iVar11 = iVar11 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar11 < param_1->light_count);
  }
  if (10 < param_1->set_file_version) {
    _fgets(local_330,0xff,p_Var5);
  }
  _fscanf(p_Var5,&DAT_005f0565);
  iVar11 = 0;
  if (0 < param_1->camera_count) {
    pCVar8 = param_1->cameras;
    do {
      core_setutil_cpp_C3DSCamera_load_FUN_0055c1b0(pCVar8,p_Var5);
      iVar11 = iVar11 + 1;
      pCVar8 = pCVar8 + 1;
    } while (iVar11 < param_1->camera_count);
  }
  if (param_1->set_file_version < 1) {
    param_1->default_room_size = 0;
    iVar11 = _strnicmp(local_130,"mauso",5);
    if (iVar11 == 0) {
      param_1->default_room_size = 2;
    }
    iVar11 = _strnicmp(local_130,&DAT_005f0599,4);
    if (iVar11 == 0) {
      param_1->default_room_size = 0;
    }
    iVar11 = _strnicmp(local_130,"smill",5);
    if (iVar11 == 0) {
      param_1->default_room_size = 3;
    }
    iVar11 = _strnicmp(local_130,"pier59",6);
    if (iVar11 == 0) {
      param_1->default_room_size = 0;
    }
    iVar11 = _strnicmp(local_130,&DAT_005f05ab,4);
    if (iVar11 == 0) {
      param_1->default_room_size = 3;
    }
    param_1->room_count = 0;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005f0569);
    _fscanf(p_Var5,&DAT_005f056d);
    iVar11 = 0;
    if (0 < param_1->room_count) {
      local_44 = param_1->rooms;
      local_14 = &param_1->rooms[0].reverb_size;
      local_34 = &param_1->rooms[0].rotation_matrix;
      local_18 = &param_1->rooms[0].extents;
      local_2c = &param_1->rooms[0].extents.y;
      local_30 = &param_1->rooms[0].extents.z;
      local_24 = &param_1->rooms[0].position.z;
      do {
        _fscanf(p_Var5,"%f,%f,%f\n");
        _fscanf(p_Var5,"%f,%f,%f\n");
        _fscanf(p_Var5,"%f,%f,%f\n");
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(local_34,&local_5c);
        _fscanf(p_Var5,&DAT_005f058f);
        iVar11 = iVar11 + 1;
        local_14 = local_14 + 0x11;
        local_34 = (CMatrix3x3f *)((int)(local_34 + 1) + 0x20);
        local_18 = (CVector3f *)((int)(local_18 + 5) + 8);
        local_30 = local_30 + 0x11;
        local_2c = local_2c + 0x11;
        local_24 = local_24 + 0x11;
      } while (iVar11 < param_1->room_count);
    }
  }
  if (param_1->set_file_version < 3) {
    param_1->default_ground_type = 2;
    iVar11 = _strnicmp(local_130,"mauso",5);
    if (iVar11 == 0) {
      param_1->default_ground_type = 8;
    }
    iVar11 = _strnicmp(local_130,&DAT_005f05ba,4);
    if (iVar11 == 0) {
      param_1->default_ground_type = 3;
    }
    iVar11 = _strnicmp(local_130,"smill",5);
    if (iVar11 == 0) {
      param_1->default_ground_type = 2;
    }
    iVar11 = _strnicmp(local_130,"pier59",6);
    if (iVar11 == 0) {
      param_1->default_ground_type = 7;
    }
    iVar11 = _strnicmp(local_130,"castle",6);
    if (iVar11 == 0) {
      param_1->default_ground_type = 2;
    }
    iVar11 = _strnicmp(local_130,&DAT_005f05d3,4);
    if (iVar11 == 0) {
      param_1->default_ground_type = 8;
    }
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005f05b0);
  }
  if (param_1->set_file_version < 0x18) {
    param_1->default_master_reverb = 0;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005f05d8);
  }
  if ((3 < param_1->set_file_version) && (param_1->set_file_version < 10)) {
    core_setdir_cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_0055b8f0(param_1,p_Var5);
  }
  if (param_1->set_file_version < 5) {
    param_1->vdir_box_count = 0;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005f05dc);
    iVar11 = 0;
    if (0 < param_1->vdir_box_count) {
      local_40 = param_1->vdir_boxes;
      local_20 = &param_1->vdir_boxes[0].rotation_matrix;
      local_28 = &param_1->vdir_boxes[0].extents.y;
      local_1c = &param_1->vdir_boxes[0].extents.z;
      local_3c = &param_1->vdir_boxes[0].position.y;
      local_38 = &param_1->vdir_boxes[0].position.z;
      do {
        _fscanf(p_Var5,"%f,%f,%f\n");
        _fscanf(p_Var5,"%f,%f,%f\n");
        _fscanf(p_Var5,"%f,%f,%f\n");
        iVar11 = iVar11 + 1;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(local_20,&local_68);
        local_20 = (CMatrix3x3f *)((int)(local_20 + 1) + 0x20);
        local_28 = local_28 + 0x11;
        local_1c = local_1c + 0x11;
        local_3c = local_3c + 0x11;
        local_38 = local_38 + 0x11;
      } while (iVar11 < param_1->vdir_box_count);
    }
    core_setdir_cpp_CDemonSet_buildVdirBoxGroups_FUN_0055bf10(param_1);
  }
  if (param_1->set_file_version == 0xe) {
    _fgets(local_330,0xff,p_Var5);
    _fgets(local_330,0xff,p_Var5);
  }
  if (0x13 < param_1->set_file_version) {
    _fgets(local_330,0xff,p_Var5);
    iVar11 = 0;
    if (0 < param_1->camera_count) {
      pCVar8 = param_1->cameras;
      do {
        core_setutil_cpp_C3DSCamera_loadPVS_FUN_0055c540(pCVar8,p_Var5);
        iVar11 = iVar11 + 1;
        pCVar8 = pCVar8 + 1;
      } while (iVar11 < param_1->camera_count);
    }
  }
  _fclose(p_Var5);
  iVar11 = 0;
  pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Loading set geometry");
  core_level_cpp_CLevelLoader_update_FUN_004fe9c0(0x01D1BD1C,pcVar4,iVar11);
  pcVar4 = param_1->geometry_filename;
  iVar11 = _stricmp(pcVar4,local_130);
  if (iVar11 == 0) {
    core_setcolid_cpp_CDemonSet_commitVoxelBuffer_FUN_00559580(param_1);
  }
  else {
    pcVar9 = local_130;
    pcVar10 = pcVar4;
    do {
      cVar3 = *pcVar9;
      *pcVar10 = cVar3;
      if (cVar3 == '\0') break;
      cVar3 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar10[1] = cVar3;
      pcVar10 = pcVar10 + 2;
    } while (cVar3 != '\0');
    p_Var5 = engine_dosio_cpp_FUN_00479180(&DAT_005f0616,pcVar4,&DAT_005f0613);
    if (p_Var5 == (_FILE *)0x0) {
      engine_special_cpp_clearScreen_FUN_0057dc40();
      engine_2d_c_drawText_FUN_00401fe0("Warning!  No .GEO file.  Press any key",0,0);
      wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      wincore_winrun_cpp_getNextKeypress_FUN_005b2510();
    }
    else {
      _fclose(p_Var5);
      core_dtrace_cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_0048afa0
                (&g_CDemonRaytraceInstance,pcVar4);
    }
    core_path_cpp_resetAllPathMaps_FUN_00535280();
  }
  iVar11 = 0;
  pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Loading thumbs");
  core_level_cpp_CLevelLoader_update_FUN_004fe9c0(0x01D1BD1C,pcVar4,iVar11);
  pcVar4 = local_cc;
  pcVar9 = param_1->geometry_filename;
  do {
    cVar3 = *pcVar9;
    *pcVar4 = cVar3;
    if (cVar3 == '\0') break;
    cVar3 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar4[1] = cVar3;
    pcVar4 = pcVar4 + 2;
  } while (cVar3 != '\0');
  pcVar4 = local_cc;
  do {
    pcVar9 = pcVar4;
    if (*pcVar4 == '.') goto LAB_0054debe;
    if (*pcVar4 == '\0') break;
    pcVar9 = pcVar4 + 1;
    if (*pcVar9 == '.') goto LAB_0054debe;
    pcVar4 = pcVar4 + 2;
  } while (*pcVar9 != '\0');
  pcVar9 = (char *)0x0;
LAB_0054debe:
  if (pcVar9 == (char *)0x0) {
    pcVar4 = local_cc;
    do {
      pcVar9 = pcVar4;
      if (*pcVar4 == '\0') goto LAB_0054dee7;
      if (*pcVar4 == '\0') break;
      pcVar9 = pcVar4 + 1;
      if (*pcVar9 == '\0') goto LAB_0054dee7;
      pcVar4 = pcVar4 + 2;
    } while (*pcVar9 != '\0');
    pcVar9 = (char *)0x0;
  }
LAB_0054dee7:
  pcVar4 = &DAT_005f0651;
  do {
    cVar3 = *pcVar4;
    *pcVar9 = cVar3;
    if (cVar3 == '\0') break;
    cVar3 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar9[1] = cVar3;
    pcVar9 = pcVar9 + 2;
  } while (cVar3 != '\0');
  core_setdir_cpp_CDemonSet_refreshThumbs_FUN_0055b220(param_1,local_cc);
  if (param_1->use_enviro_model != 0) {
    core_dmodel_cpp_CKeyFramedModel_load_FUN_004668a0
              (&g_CKeyFramedModelInstance,param_1->enviro_model_name);
  }
  iVar11 = 0;
  pCVar6 = param_1;
  if (0 < param_1->camera_count) {
    do {
      fVar1 = param_1->min_ambient_value;
      pCVar6->cameras[0].camera_group = 0;
      pCVar6->cameras[0].enabled = 1;
      iVar11 = iVar11 + 1;
      pCVar6->cameras[0].ambient_value = fVar1;
      pCVar6 = (CDemonSet *)&pCVar6->cameras[0].enabled;
    } while (iVar11 < param_1->camera_count);
  }
  _DAT_02026348 = 1;
  return param_1;
}
