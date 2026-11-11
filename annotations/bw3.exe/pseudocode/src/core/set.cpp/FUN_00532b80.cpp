// Name: core_set.cpp_FUN_00532b80
// Address: 00532b80
// Address Range: [[00532b80, 00533b7a]]
// Convention: unknown
// Signature: CDemonSet * core_set_cpp_FUN_00532b80(CDemonSet *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonSet * core_set_cpp_FUN_00532b80(CDemonSet *param_1,char *param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  CTerrain *this_ptr;
  char *pcVar4;
  _FILE *p_Var5;
  int iVar6;
  CDemonSet *pCVar7;
  C3DSLight *this_ptr_00;
  C3DSCamera *pCVar8;
  char *pcVar9;
  float *pfVar10;
  CVector3f *pCVar11;
  char *pcVar12;
  uint uVar13;
  byte local_330 [256];
  char local_230 [256];
  char local_130 [100];
  char local_cc [100];
  CVector3f local_68;
  CVector3f local_5c;
  byte local_4c [4];
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
  
  uVar13 = 0;
  pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Loading set");
  core_level_cpp_FUN_004e0000(0x01D70AB8,pcVar4,uVar13);
  core_set_cpp_CDemonSet_clear_FUN_00532b30(param_1);
  p_Var5 = engine_dosio_cpp_FUN_004659c0("models",param_2,&DAT_005d012d);
  if (p_Var5 == (_FILE *)0x0) {
    _DAT_01d71de0 = "..\\core\\set.cpp";
    _DAT_01d71de4 = 0x16a;
    core_main_c_FUN_004e4330("CDemonSet::Unable to open %s",param_2);
  }
  _fscanf(p_Var5,&DAT_005d0164,&param_1->set_file_version);
  _fscanf(p_Var5,&DAT_005d0168,&param_1->set_scale_factor);
  _fscanf(p_Var5,&DAT_005d016c,local_330);
  _fscanf(p_Var5,&DAT_005d0170,local_130);
  _fscanf(p_Var5,&DAT_005d0174,&param_1->min_ambient_value);
  pCVar11 = &param_1->directional_light_dir;
  if (param_1->set_file_version < 0x1e) {
    (param_1->directional_light_dir).x = -1.0;
    (param_1->directional_light_dir).y = -1.0;
    (param_1->directional_light_dir).z = -1.0;
    fVar1 = (param_1->directional_light_dir).y;
    fVar2 = (param_1->directional_light_dir).z;
    local_48 = SQRT(fVar2 * fVar2 + pCVar11->x * pCVar11->x + fVar1 * fVar1);
    if (local_48 <= 0.0) {
      (param_1->directional_light_dir).z = 0.0;
      (param_1->directional_light_dir).y = (param_1->directional_light_dir).z;
      pCVar11->x = (param_1->directional_light_dir).y;
      param_1->directional_light_intensity = 0.0;
    }
    else {
      fVar1 = 1.0 / local_48;
      pCVar11->x = pCVar11->x * fVar1;
      (param_1->directional_light_dir).y = (param_1->directional_light_dir).y * fVar1;
      (param_1->directional_light_dir).z = (param_1->directional_light_dir).z * fVar1;
      param_1->directional_light_intensity = 0.0;
    }
  }
  else {
    _fscanf(p_Var5,"%f,%f,%f,%f\n",pCVar11,&(param_1->directional_light_dir).y,
               &(param_1->directional_light_dir).z,&param_1->directional_light_intensity);
  }
  if (param_1->set_file_version == 0) {
    _fgets(local_330,0xff,p_Var5);
    _fgets(local_330,0xff,p_Var5);
    _fgets(local_330,0xff,p_Var5);
  }
  if (param_1->set_file_version < 0x11) {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,"%d,%d,%d,%d\n",local_4c,&param_1->scene_fog,
               &(param_1->scene_fog).color_index.g,&(param_1->scene_fog).color_index.b);
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,"%f,%f,%f\n",&(param_1->scene_fog).scroll,&(param_1->scene_fog).scroll.y,
               &(param_1->scene_fog).scroll.z);
    _fscanf(p_Var5,"%f,%f,%f,%f\n",&(param_1->scene_fog).height_threshold,
               &(param_1->scene_fog).density_multiplier,local_4c,local_4c);
    (param_1->scene_fog).temperature = 50.0;
  }
  else {
    core_dcamera_cpp_loadCameraFog_FUN_00450c00
              (&param_1->scene_fog,p_Var5,param_1->set_file_version);
  }
  _fgets(local_330,0xff,p_Var5);
  _fscanf(p_Var5,"%f,%f\n",&g_CWaterPtr->water_level_y,&g_CWaterPtr->tile_size);
  if (param_1->set_file_version < 0x1f) {
    DAT_00606b28 = 0x2000;
    _DAT_02cfd960 = 0;
    _DAT_02cfd964 = 0;
    _DAT_00606b24 = 0x3e800000;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,"%f,%d,%f,%f\n",&DAT_00606b24,&DAT_00606b28,&DAT_02cfd960,&DAT_02cfd964);
  }
  _fgets(local_330,0xff,p_Var5);
  _fscanf(p_Var5,"%d,%s\n",&param_1->use_enviro_model,param_1->enviro_model_name);
  if (param_1->set_file_version < 5) {
    iVar6 = _strnicmp(local_130,&DAT_005d01c8,4);
    if (iVar6 == 0) {
      g_CWaterPtr->wave_animation_enabled = 1;
    }
    else {
      g_CWaterPtr->wave_animation_enabled = 0;
    }
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005d01c4,g_CWaterPtr);
  }
  if (param_1->set_file_version < 6) {
    param_1->has_sky = 1;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005d01cd,&param_1->has_sky);
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
    _fscanf(p_Var5,"%d,%s\n",&param_1->sky_brightness,pcVar4);
  }
  pcVar4 = param_1->world_geometry_name;
  if (param_1->set_file_version < 0xd) {
    pcVar9 = &DAT_005d01eb;
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
    _fscanf(p_Var5,"%d,%s\n",&param_1->use_world_geometry_flag,pcVar4);
  }
  if (param_1->set_file_version < 0x19) {
    param_1->weather_type = WEATHER_TYPE_NONE;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005d01f0,&param_1->weather_type);
  }
  if (param_1->set_file_version < 0x1d) {
    param_1->altitude_reference_y = 0.0;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005d01f4,&param_1->altitude_reference_y);
  }
  engine_dosio_cpp_splitPath_FUN_00465e50(local_130,(char *)0x0,(char *)0x0,local_230,(char *)0x0);
  iVar6 = _stricmp(local_230,"train");
  this_ptr = 0x02CFD8B8;
  if (iVar6 == 0) {
    param_1->player_on_train = 1;
    core_terrain_cpp_CTerrain_init_FUN_00572370(this_ptr);
  }
  else {
    core_terrain_cpp_CTerrain_free_FUN_005723b0(0x02CFD8B8);
    param_1->player_on_train = 0;
  }
  if (10 < param_1->set_file_version) {
    _fgets(local_330,0xff,p_Var5);
  }
  _fscanf(p_Var5,&DAT_005d01fe,&param_1->light_count);
  iVar6 = 0;
  if (0 < param_1->light_count) {
    this_ptr_00 = param_1->lights;
    do {
      core_setutil_cpp_C3DSLight_load_FUN_005421c0(this_ptr_00,p_Var5);
      iVar6 = iVar6 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar6 < param_1->light_count);
  }
  if (10 < param_1->set_file_version) {
    _fgets(local_330,0xff,p_Var5);
  }
  _fscanf(p_Var5,&DAT_005d0202,param_1);
  iVar6 = 0;
  if (0 < param_1->camera_count) {
    pCVar8 = param_1->cameras;
    do {
      core_setutil_cpp_C3DSCamera_load_FUN_00541b70(pCVar8,p_Var5);
      iVar6 = iVar6 + 1;
      pCVar8 = pCVar8 + 1;
    } while (iVar6 < param_1->camera_count);
  }
  if (param_1->set_file_version < 1) {
    param_1->default_room_size = 0;
    iVar6 = _strnicmp(local_130,"mauso",5);
    if (iVar6 == 0) {
      param_1->default_room_size = 2;
    }
    iVar6 = _strnicmp(local_130,&DAT_005d0236,4);
    if (iVar6 == 0) {
      param_1->default_room_size = 0;
    }
    iVar6 = _strnicmp(local_130,"smill",5);
    if (iVar6 == 0) {
      param_1->default_room_size = 3;
    }
    iVar6 = _strnicmp(local_130,"pier59",6);
    if (iVar6 == 0) {
      param_1->default_room_size = 0;
    }
    iVar6 = _strnicmp(local_130,&DAT_005d0248,4);
    if (iVar6 == 0) {
      param_1->default_room_size = 3;
    }
    param_1->room_count = 0;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005d0206,&param_1->default_room_size);
    _fscanf(p_Var5,&DAT_005d020a,&param_1->room_count);
    iVar6 = 0;
    if (0 < param_1->room_count) {
      local_44 = param_1->rooms;
      local_14 = &param_1->rooms[0].reverb_size;
      local_34 = &param_1->rooms[0].rotation_matrix;
      local_18 = &param_1->rooms[0].extents;
      local_2c = &param_1->rooms[0].extents.y;
      local_30 = &param_1->rooms[0].extents.z;
      local_24 = &param_1->rooms[0].position.z;
      pfVar10 = &param_1->rooms[0].position.y;
      do {
        _fscanf(p_Var5,"%f,%f,%f\n",local_44 + iVar6,pfVar10,local_24);
        _fscanf(p_Var5,"%f,%f,%f\n",local_18,local_2c,local_30);
        _fscanf(p_Var5,"%f,%f,%f\n",&local_5c,&local_5c.z,&local_5c.y);
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(local_34,&local_5c);
        pfVar10 = pfVar10 + 0x11;
        _fscanf(p_Var5,&DAT_005d022c,local_14);
        iVar6 = iVar6 + 1;
        local_14 = local_14 + 0x11;
        local_34 = (CMatrix3x3f *)((int)(local_34 + 1) + 0x20);
        local_18 = (CVector3f *)((int)(local_18 + 5) + 8);
        local_30 = local_30 + 0x11;
        local_2c = local_2c + 0x11;
        local_24 = local_24 + 0x11;
      } while (iVar6 < param_1->room_count);
    }
  }
  if (param_1->set_file_version < 3) {
    param_1->default_ground_type = 2;
    iVar6 = _strnicmp(local_130,"mauso",5);
    if (iVar6 == 0) {
      param_1->default_ground_type = 8;
    }
    iVar6 = _strnicmp(local_130,&DAT_005d0257,4);
    if (iVar6 == 0) {
      param_1->default_ground_type = 3;
    }
    iVar6 = _strnicmp(local_130,"smill",5);
    if (iVar6 == 0) {
      param_1->default_ground_type = 2;
    }
    iVar6 = _strnicmp(local_130,"pier59",6);
    if (iVar6 == 0) {
      param_1->default_ground_type = 7;
    }
    iVar6 = _strnicmp(local_130,"castle",6);
    if (iVar6 == 0) {
      param_1->default_ground_type = 2;
    }
    iVar6 = _strnicmp(local_130,&DAT_005d0270,4);
    if (iVar6 == 0) {
      param_1->default_ground_type = 8;
    }
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005d024d,&param_1->default_ground_type);
  }
  if (param_1->set_file_version < 0x18) {
    param_1->default_master_reverb = 0;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005d0275,&param_1->default_master_reverb);
  }
  if ((3 < param_1->set_file_version) && (param_1->set_file_version < 10)) {
    core_setdir_cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_005412b0(param_1,p_Var5);
  }
  if (param_1->set_file_version < 5) {
    param_1->vdir_box_count = 0;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005d0279,&param_1->vdir_box_count);
    iVar6 = 0;
    if (0 < param_1->vdir_box_count) {
      local_40 = param_1->vdir_boxes;
      local_20 = &param_1->vdir_boxes[0].rotation_matrix;
      local_28 = &param_1->vdir_boxes[0].extents.y;
      local_1c = &param_1->vdir_boxes[0].extents.z;
      local_3c = &param_1->vdir_boxes[0].position.y;
      local_38 = &param_1->vdir_boxes[0].position.z;
      pCVar11 = &param_1->vdir_boxes[0].extents;
      do {
        _fscanf(p_Var5,"%f,%f,%f\n",local_40 + iVar6,local_3c,local_38);
        _fscanf(p_Var5,"%f,%f,%f\n",pCVar11,local_28,local_1c);
        _fscanf(p_Var5,"%f,%f,%f\n",&local_68,&local_68.z,&local_68.y);
        iVar6 = iVar6 + 1;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(local_20,&local_68);
        pCVar11 = (CVector3f *)((int)(pCVar11 + 5) + 8);
        local_20 = (CMatrix3x3f *)((int)(local_20 + 1) + 0x20);
        local_28 = local_28 + 0x11;
        local_1c = local_1c + 0x11;
        local_3c = local_3c + 0x11;
        local_38 = local_38 + 0x11;
      } while (iVar6 < param_1->vdir_box_count);
    }
    core_setdir_cpp_CDemonSet_buildVdirBoxGroups_FUN_005418d0(param_1);
  }
  if (param_1->set_file_version == 0xe) {
    _fgets(local_330,0xff,p_Var5);
    _fgets(local_330,0xff,p_Var5);
  }
  if (0x13 < param_1->set_file_version) {
    _fgets(local_330,0xff,p_Var5);
    iVar6 = 0;
    if (0 < param_1->camera_count) {
      pCVar8 = param_1->cameras;
      do {
        core_setutil_cpp_C3DSCamera_loadPVS_FUN_00541f00(pCVar8,p_Var5);
        iVar6 = iVar6 + 1;
        pCVar8 = pCVar8 + 1;
      } while (iVar6 < param_1->camera_count);
    }
  }
  _fclose(p_Var5);
  uVar13 = 0;
  pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Loading set geometry");
  core_level_cpp_FUN_004e0000(0x01D70AB8,pcVar4,uVar13);
  pcVar4 = param_1->geometry_filename;
  iVar6 = _stricmp(pcVar4,local_130);
  if (iVar6 == 0) {
    core_setcolid_cpp_CDemonSet_commitVoxelBuffer_FUN_0053ef40(param_1);
  }
  else {
    pcVar9 = local_130;
    pcVar12 = pcVar4;
    do {
      cVar3 = *pcVar9;
      *pcVar12 = cVar3;
      if (cVar3 == '\0') break;
      cVar3 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar12[1] = cVar3;
      pcVar12 = pcVar12 + 2;
    } while (cVar3 != '\0');
    p_Var5 = engine_dosio_cpp_FUN_004659c0(&DAT_005d02b3,pcVar4,&DAT_005d02b0);
    if (p_Var5 == (_FILE *)0x0) {
      engine_special_cpp_clearScreen_FUN_00560d70();
      engine_2d_c_drawText_FUN_00401fe0("Warning!  No .GEO file.  Press any key",0,0);
      wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      wincore_winrun_cpp_getNextKeypress_FUN_00580790();
    }
    else {
      _fclose(p_Var5);
      core_dtrace_cpp_FUN_00473b20(&g_CDemonRaytraceInstance,pcVar4);
    }
    core_path_cpp_resetAllPathMaps_FUN_0050cf60();
  }
  uVar13 = 0;
  pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Loading thumbs");
  core_level_cpp_FUN_004e0000(0x01D70AB8,pcVar4,uVar13);
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
    if (*pcVar4 == '.') goto LAB_0053367e;
    if (*pcVar4 == '\0') break;
    pcVar9 = pcVar4 + 1;
    if (*pcVar9 == '.') goto LAB_0053367e;
    pcVar4 = pcVar4 + 2;
  } while (*pcVar9 != '\0');
  pcVar9 = (char *)0x0;
LAB_0053367e:
  if (pcVar9 == (char *)0x0) {
    pcVar4 = local_cc;
    do {
      pcVar9 = pcVar4;
      if (*pcVar4 == '\0') goto LAB_005336a7;
      if (*pcVar4 == '\0') break;
      pcVar9 = pcVar4 + 1;
      if (*pcVar9 == '\0') goto LAB_005336a7;
      pcVar4 = pcVar4 + 2;
    } while (*pcVar9 != '\0');
    pcVar9 = (char *)0x0;
  }
LAB_005336a7:
  pcVar4 = &DAT_005d02ee;
  do {
    cVar3 = *pcVar4;
    *pcVar9 = cVar3;
    if (cVar3 == '\0') break;
    cVar3 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar9[1] = cVar3;
    pcVar9 = pcVar9 + 2;
  } while (cVar3 != '\0');
  core_setdir_cpp_FUN_00540be0(param_1,local_cc);
  if (param_1->use_enviro_model != 0) {
    core_dmodel_cpp_CKeyFramedModel_load_FUN_00460550
              (&g_CKeyFramedModelInstance,param_1->enviro_model_name);
  }
  iVar6 = 0;
  pCVar7 = param_1;
  if (0 < param_1->camera_count) {
    do {
      fVar1 = param_1->min_ambient_value;
      pCVar7->cameras[0].camera_group = 0;
      pCVar7->cameras[0].enabled = 1;
      iVar6 = iVar6 + 1;
      pCVar7->cameras[0].ambient_value = fVar1;
      pCVar7 = (CDemonSet *)&pCVar7->cameras[0].enabled;
    } while (iVar6 < param_1->camera_count);
  }
  _DAT_0207baa8 = 1;
  return param_1;
}
