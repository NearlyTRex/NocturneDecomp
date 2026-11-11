// Name: core_set.cpp_CDemonSet_load_FUN_0052c0e0
// Address: 0052c0e0
// Address Range: [[0052c0e0, 0052d0da]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_load_FUN_0052c0e0(CDemonSet *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_load_FUN_0052c0e0(CDemonSet *this_ptr,char *filename)

{
  float fVar1;
  float fVar2;
  char cVar3;
  CTerrain *this_ptr_00;
  char *pcVar4;
  _FILE *p_Var5;
  CDemonSet *pCVar6;
  C3DSLight *this_ptr_01;
  C3DSCamera *pCVar7;
  char *pcVar8;
  float *pfVar9;
  CVector3f *pCVar10;
  char *pcVar11;
  int iVar12;
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
  
  iVar12 = 0;
  pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Loading set");
  core_level_cpp_CLevelLoader_update_FUN_004e1600(0x01D03000,pcVar4,iVar12);
  core_set_cpp_CDemonSet_clear_FUN_0052c090(this_ptr);
  p_Var5 = engine_dosio_cpp_FUN_00460c70("models",filename,&DAT_005e546c);
  if (p_Var5 == (_FILE *)0x0) {
    _DAT_01d046a0 = "..\\core\\set.cpp";
    _DAT_01d046a4 = 0x15c;
    core_main_c_FUN_004e4500("CDemonSet::Unable to open %s",filename);
  }
  _fscanf(p_Var5,&DAT_005e54a3,&this_ptr->set_file_version);
  _fscanf(p_Var5,&DAT_005e54a7,&this_ptr->set_scale_factor);
  _fscanf(p_Var5,&DAT_005e54ab,local_330);
  _fscanf(p_Var5,&DAT_005e54af,local_130);
  _fscanf(p_Var5,&DAT_005e54b3,&this_ptr->min_ambient_value);
  pCVar10 = &this_ptr->directional_light_dir;
  if (this_ptr->set_file_version < 0x1e) {
    (this_ptr->directional_light_dir).x = -1.0;
    (this_ptr->directional_light_dir).y = -1.0;
    (this_ptr->directional_light_dir).z = -1.0;
    fVar1 = (this_ptr->directional_light_dir).y;
    fVar2 = (this_ptr->directional_light_dir).z;
    local_48 = SQRT(fVar2 * fVar2 + pCVar10->x * pCVar10->x + fVar1 * fVar1);
    if (local_48 <= 0.0) {
      (this_ptr->directional_light_dir).z = 0.0;
      (this_ptr->directional_light_dir).y = (this_ptr->directional_light_dir).z;
      pCVar10->x = (this_ptr->directional_light_dir).y;
      this_ptr->directional_light_intensity = 0.0;
    }
    else {
      fVar1 = 1.0 / local_48;
      pCVar10->x = pCVar10->x * fVar1;
      (this_ptr->directional_light_dir).y = (this_ptr->directional_light_dir).y * fVar1;
      (this_ptr->directional_light_dir).z = (this_ptr->directional_light_dir).z * fVar1;
      this_ptr->directional_light_intensity = 0.0;
    }
  }
  else {
    _fscanf(p_Var5,"%f,%f,%f,%f\n",pCVar10,&(this_ptr->directional_light_dir).y,
               &(this_ptr->directional_light_dir).z,&this_ptr->directional_light_intensity);
  }
  if (this_ptr->set_file_version == 0) {
    _fgets(local_330,0xff,p_Var5);
    _fgets(local_330,0xff,p_Var5);
    _fgets(local_330,0xff,p_Var5);
  }
  if (this_ptr->set_file_version < 0x11) {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,"%d,%d,%d,%d\n",local_4c,&this_ptr->scene_fog,
               &(this_ptr->scene_fog).color_index.g,&(this_ptr->scene_fog).color_index.b);
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,"%f,%f,%f\n",&(this_ptr->scene_fog).scroll,&(this_ptr->scene_fog).scroll.y
               ,&(this_ptr->scene_fog).scroll.z);
    _fscanf(p_Var5,"%f,%f,%f,%f\n",&(this_ptr->scene_fog).height_threshold,
               &(this_ptr->scene_fog).density_multiplier,local_4c,local_4c);
    (this_ptr->scene_fog).temperature = 50.0;
  }
  else {
    core_dcamera_cpp_loadCameraFog_FUN_00443400
              (&this_ptr->scene_fog,p_Var5,this_ptr->set_file_version);
  }
  _fgets(local_330,0xff,p_Var5);
  _fscanf(p_Var5,"%f,%f\n",&g_CWaterPtr->water_level_y,&g_CWaterPtr->tile_size);
  if (this_ptr->set_file_version < 0x1f) {
    DAT_0061e528 = 0x2000;
    _DAT_026537a0 = 0;
    _DAT_026537a4 = 0;
    _DAT_0061e524 = 0x3e800000;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,"%f,%d,%f,%f\n",&DAT_0061e524,&DAT_0061e528,&DAT_026537a0,&DAT_026537a4);
  }
  _fgets(local_330,0xff,p_Var5);
  _fscanf(p_Var5,"%d,%s\n",&this_ptr->use_enviro_model,this_ptr->enviro_model_name);
  if (this_ptr->set_file_version < 5) {
    iVar12 = _strnicmp(local_130,&DAT_005e5507,4);
    if (iVar12 == 0) {
      g_CWaterPtr->wave_animation_enabled = 1;
    }
    else {
      g_CWaterPtr->wave_animation_enabled = 0;
    }
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005e5503,g_CWaterPtr);
  }
  if (this_ptr->set_file_version < 6) {
    this_ptr->has_sky = 1;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005e550c,&this_ptr->has_sky);
  }
  pcVar4 = this_ptr->sky_texture_name;
  if (this_ptr->set_file_version < 0xc) {
    pcVar8 = "NITESKY.RAW";
    do {
      cVar3 = *pcVar8;
      *pcVar4 = cVar3;
      if (cVar3 == '\0') break;
      cVar3 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar4[1] = cVar3;
      pcVar4 = pcVar4 + 2;
    } while (cVar3 != '\0');
    this_ptr->sky_brightness = 0x4000;
  }
  else {
    _fscanf(p_Var5,"%d,%s\n",&this_ptr->sky_brightness,pcVar4);
  }
  pcVar4 = this_ptr->world_geometry_name;
  if (this_ptr->set_file_version < 0xd) {
    pcVar8 = &DAT_005e552a;
    this_ptr->use_world_geometry_flag = 0;
    do {
      cVar3 = *pcVar8;
      *pcVar4 = cVar3;
      if (cVar3 == '\0') break;
      cVar3 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar4[1] = cVar3;
      pcVar4 = pcVar4 + 2;
    } while (cVar3 != '\0');
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,"%d,%s\n",&this_ptr->use_world_geometry_flag,pcVar4)
    ;
  }
  if (this_ptr->set_file_version < 0x19) {
    this_ptr->weather_type = WEATHER_TYPE_NONE;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005e552f,&this_ptr->weather_type);
  }
  if (this_ptr->set_file_version < 0x1d) {
    this_ptr->altitude_reference_y = 0.0;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005e5533,&this_ptr->altitude_reference_y);
  }
  engine_dosio_cpp_splitPath_FUN_00461070(local_130,(char *)0x0,(char *)0x0,local_230,(char *)0x0);
  iVar12 = _stricmp(local_230,"train");
  this_ptr_00 = 0x0265364C;
  if (iVar12 == 0) {
    this_ptr->player_on_train = 1;
    core_terrain_cpp_CTerrain_init_FUN_0057b800(this_ptr_00);
  }
  else {
    core_terrain_cpp_CTerrain_free_FUN_0057b840(0x0265364C);
    this_ptr->player_on_train = 0;
  }
  if (10 < this_ptr->set_file_version) {
    _fgets(local_330,0xff,p_Var5);
  }
  _fscanf(p_Var5,&DAT_005e553d,&this_ptr->light_count);
  iVar12 = 0;
  if (0 < this_ptr->light_count) {
    this_ptr_01 = this_ptr->lights;
    do {
      core_setutil_cpp_C3DSLight_load_FUN_0053af30(this_ptr_01,p_Var5);
      iVar12 = iVar12 + 1;
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar12 < this_ptr->light_count);
  }
  if (10 < this_ptr->set_file_version) {
    _fgets(local_330,0xff,p_Var5);
  }
  _fscanf(p_Var5,&DAT_005e5541,this_ptr);
  iVar12 = 0;
  if (0 < this_ptr->camera_count) {
    pCVar7 = this_ptr->cameras;
    do {
      core_setutil_cpp_C3DSCamera_load_FUN_0053a8e0(pCVar7,p_Var5);
      iVar12 = iVar12 + 1;
      pCVar7 = pCVar7 + 1;
    } while (iVar12 < this_ptr->camera_count);
  }
  if (this_ptr->set_file_version < 1) {
    this_ptr->default_room_size = 0;
    iVar12 = _strnicmp(local_130,"mauso",5);
    if (iVar12 == 0) {
      this_ptr->default_room_size = 2;
    }
    iVar12 = _strnicmp(local_130,&DAT_005e5575,4);
    if (iVar12 == 0) {
      this_ptr->default_room_size = 0;
    }
    iVar12 = _strnicmp(local_130,"smill",5);
    if (iVar12 == 0) {
      this_ptr->default_room_size = 3;
    }
    iVar12 = _strnicmp(local_130,"pier59",6);
    if (iVar12 == 0) {
      this_ptr->default_room_size = 0;
    }
    iVar12 = _strnicmp(local_130,&DAT_005e5587,4);
    if (iVar12 == 0) {
      this_ptr->default_room_size = 3;
    }
    this_ptr->room_count = 0;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005e5545,&this_ptr->default_room_size);
    _fscanf(p_Var5,&DAT_005e5549,&this_ptr->room_count);
    iVar12 = 0;
    if (0 < this_ptr->room_count) {
      local_44 = this_ptr->rooms;
      local_14 = &this_ptr->rooms[0].reverb_size;
      local_34 = &this_ptr->rooms[0].rotation_matrix;
      local_18 = &this_ptr->rooms[0].extents;
      local_2c = &this_ptr->rooms[0].extents.y;
      local_30 = &this_ptr->rooms[0].extents.z;
      local_24 = &this_ptr->rooms[0].position.z;
      pfVar9 = &this_ptr->rooms[0].position.y;
      do {
        _fscanf(p_Var5,"%f,%f,%f\n",local_44 + iVar12,pfVar9,local_24);
        _fscanf(p_Var5,"%f,%f,%f\n",local_18,local_2c,local_30);
        _fscanf(p_Var5,"%f,%f,%f\n",&local_5c,&local_5c.z,&local_5c.y);
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(local_34,&local_5c);
        pfVar9 = pfVar9 + 0x11;
        _fscanf(p_Var5,&DAT_005e556b,local_14);
        iVar12 = iVar12 + 1;
        local_14 = local_14 + 0x11;
        local_34 = (CMatrix3x3f *)((int)(local_34 + 1) + 0x20);
        local_18 = (CVector3f *)((int)(local_18 + 5) + 8);
        local_30 = local_30 + 0x11;
        local_2c = local_2c + 0x11;
        local_24 = local_24 + 0x11;
      } while (iVar12 < this_ptr->room_count);
    }
  }
  if (this_ptr->set_file_version < 3) {
    this_ptr->default_ground_type = 2;
    iVar12 = _strnicmp(local_130,"mauso",5);
    if (iVar12 == 0) {
      this_ptr->default_ground_type = 8;
    }
    iVar12 = _strnicmp(local_130,&DAT_005e5596,4);
    if (iVar12 == 0) {
      this_ptr->default_ground_type = 3;
    }
    iVar12 = _strnicmp(local_130,"smill",5);
    if (iVar12 == 0) {
      this_ptr->default_ground_type = 2;
    }
    iVar12 = _strnicmp(local_130,"pier59",6);
    if (iVar12 == 0) {
      this_ptr->default_ground_type = 7;
    }
    iVar12 = _strnicmp(local_130,"castle",6);
    if (iVar12 == 0) {
      this_ptr->default_ground_type = 2;
    }
    iVar12 = _strnicmp(local_130,&DAT_005e55af,4);
    if (iVar12 == 0) {
      this_ptr->default_ground_type = 8;
    }
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005e558c,&this_ptr->default_ground_type);
  }
  if (this_ptr->set_file_version < 0x18) {
    this_ptr->default_master_reverb = 0;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005e55b4,&this_ptr->default_master_reverb);
  }
  if ((3 < this_ptr->set_file_version) && (this_ptr->set_file_version < 10)) {
    core_setdir_cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00539ff0(this_ptr,p_Var5);
  }
  if (this_ptr->set_file_version < 5) {
    this_ptr->vdir_box_count = 0;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005e55b8,&this_ptr->vdir_box_count);
    iVar12 = 0;
    if (0 < this_ptr->vdir_box_count) {
      local_40 = this_ptr->vdir_boxes;
      local_20 = &this_ptr->vdir_boxes[0].rotation_matrix;
      local_28 = &this_ptr->vdir_boxes[0].extents.y;
      local_1c = &this_ptr->vdir_boxes[0].extents.z;
      local_3c = &this_ptr->vdir_boxes[0].position.y;
      local_38 = &this_ptr->vdir_boxes[0].position.z;
      pCVar10 = &this_ptr->vdir_boxes[0].extents;
      do {
        _fscanf(p_Var5,"%f,%f,%f\n",local_40 + iVar12,local_3c,local_38)
        ;
        _fscanf(p_Var5,"%f,%f,%f\n",pCVar10,local_28,local_1c);
        _fscanf(p_Var5,"%f,%f,%f\n",&local_68,&local_68.z,&local_68.y);
        iVar12 = iVar12 + 1;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(local_20,&local_68);
        pCVar10 = (CVector3f *)((int)(pCVar10 + 5) + 8);
        local_20 = (CMatrix3x3f *)((int)(local_20 + 1) + 0x20);
        local_28 = local_28 + 0x11;
        local_1c = local_1c + 0x11;
        local_3c = local_3c + 0x11;
        local_38 = local_38 + 0x11;
      } while (iVar12 < this_ptr->vdir_box_count);
    }
    core_setdir_cpp_CDemonSet_buildVdirBoxGroups_FUN_0053a610(this_ptr);
  }
  if (this_ptr->set_file_version == 0xe) {
    _fgets(local_330,0xff,p_Var5);
    _fgets(local_330,0xff,p_Var5);
  }
  if (0x13 < this_ptr->set_file_version) {
    _fgets(local_330,0xff,p_Var5);
    iVar12 = 0;
    if (0 < this_ptr->camera_count) {
      pCVar7 = this_ptr->cameras;
      do {
        core_setutil_cpp_C3DSCamera_loadPVS_FUN_0053ac70(pCVar7,p_Var5);
        iVar12 = iVar12 + 1;
        pCVar7 = pCVar7 + 1;
      } while (iVar12 < this_ptr->camera_count);
    }
  }
  _fclose(p_Var5);
  iVar12 = 0;
  pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Loading set geometry");
  core_level_cpp_CLevelLoader_update_FUN_004e1600(0x01D03000,pcVar4,iVar12);
  pcVar4 = this_ptr->geometry_filename;
  iVar12 = _stricmp(pcVar4,local_130);
  if (iVar12 == 0) {
    core_setcolid_cpp_CDemonSet_commitVoxelBuffer_FUN_00538160(this_ptr);
  }
  else {
    pcVar8 = local_130;
    pcVar11 = pcVar4;
    do {
      cVar3 = *pcVar8;
      *pcVar11 = cVar3;
      if (cVar3 == '\0') break;
      cVar3 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar11[1] = cVar3;
      pcVar11 = pcVar11 + 2;
    } while (cVar3 != '\0');
    p_Var5 = engine_dosio_cpp_FUN_00460c70(&DAT_005e55f2,pcVar4,&DAT_005e55ef);
    if (p_Var5 == (_FILE *)0x0) {
      engine_special_cpp_clearScreen_FUN_0055b1f0();
      engine_2d_c_drawText_FUN_00401fe0("Warning!  No .GEO file.  Press any key",0,0);
      wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      wincore_winrun_cpp_getNextKeypress_FUN_0058ead0();
    }
    else {
      _fclose(p_Var5);
      core_dtrace_cpp_FUN_00472ab0(&g_CDemonRaytraceInstance,pcVar4);
    }
    core_path_cpp_resetAllPathMaps_FUN_00513f30();
  }
  iVar12 = 0;
  pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Loading thumbs");
  core_level_cpp_CLevelLoader_update_FUN_004e1600(0x01D03000,pcVar4,iVar12);
  pcVar4 = local_cc;
  pcVar8 = this_ptr->geometry_filename;
  do {
    cVar3 = *pcVar8;
    *pcVar4 = cVar3;
    if (cVar3 == '\0') break;
    cVar3 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar4[1] = cVar3;
    pcVar4 = pcVar4 + 2;
  } while (cVar3 != '\0');
  pcVar4 = local_cc;
  do {
    pcVar8 = pcVar4;
    if (*pcVar4 == '.') goto LAB_0052cbde;
    if (*pcVar4 == '\0') break;
    pcVar8 = pcVar4 + 1;
    if (*pcVar8 == '.') goto LAB_0052cbde;
    pcVar4 = pcVar4 + 2;
  } while (*pcVar8 != '\0');
  pcVar8 = (char *)0x0;
LAB_0052cbde:
  if (pcVar8 == (char *)0x0) {
    pcVar4 = local_cc;
    do {
      pcVar8 = pcVar4;
      if (*pcVar4 == '\0') goto LAB_0052cc07;
      if (*pcVar4 == '\0') break;
      pcVar8 = pcVar4 + 1;
      if (*pcVar8 == '\0') goto LAB_0052cc07;
      pcVar4 = pcVar4 + 2;
    } while (*pcVar8 != '\0');
    pcVar8 = (char *)0x0;
  }
LAB_0052cc07:
  pcVar4 = &DAT_005e562d;
  do {
    cVar3 = *pcVar4;
    *pcVar8 = cVar3;
    if (cVar3 == '\0') break;
    cVar3 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar8[1] = cVar3;
    pcVar8 = pcVar8 + 2;
  } while (cVar3 != '\0');
  core_setdir_cpp_FUN_00539860(this_ptr,local_cc);
  if (this_ptr->use_enviro_model != 0) {
    core_dmodel_cpp_CKeyFramedModel_load_FUN_0044dcd0
              (&g_CKeyFramedModelInstance,this_ptr->enviro_model_name);
  }
  iVar12 = 0;
  pCVar6 = this_ptr;
  if (0 < this_ptr->camera_count) {
    do {
      fVar1 = this_ptr->min_ambient_value;
      pCVar6->cameras[0].camera_group = 0;
      pCVar6->cameras[0].enabled = 1;
      iVar12 = iVar12 + 1;
      pCVar6->cameras[0].ambient_value = fVar1;
      pCVar6 = (CDemonSet *)&pCVar6->cameras[0].enabled;
    } while (iVar12 < this_ptr->camera_count);
  }
  _DAT_0200a394 = 1;
  return;
}
