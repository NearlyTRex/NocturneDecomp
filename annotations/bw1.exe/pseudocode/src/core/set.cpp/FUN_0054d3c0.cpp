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
  char cVar2;
  CTerrain *this_ptr;
  char *pcVar3;
  _FILE *p_Var4;
  CDemonSet *pCVar5;
  C3DSLight *this_ptr_00;
  C3DSCamera *pCVar6;
  char *pcVar7;
  byte *puVar8;
  char *pcVar9;
  int iVar10;
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
  byte *local_3c;
  byte *local_38;
  float *local_34;
  byte *local_30;
  byte *local_2c;
  byte *local_28;
  byte *local_24;
  float *local_20;
  byte *local_1c;
  byte *local_18;
  byte *local_14;
  
  iVar10 = 0;
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Loading set");
  core_level_cpp_CLevelLoader_update_FUN_004fe9c0(0x01D1BD1C,pcVar3,iVar10);
  core_set_cpp_CDemonSet_clear_FUN_0054d370(param_1);
  p_Var4 = engine_dosio_cpp_FUN_00479180("models",param_2,&DAT_005f0490);
  if (p_Var4 == (_FILE *)0x0) {
    _DAT_01d1d400 = "..\\core\\set.cpp";
    _DAT_01d1d404 = 0x15c;
    core_main_c_FUN_005030e0("CDemonSet::Unable to open %s",param_2);
  }
  _fscanf(p_Var4,&DAT_005f04c7,&param_1->field_0x15acc0);
  _fscanf(p_Var4,&DAT_005f04cb,&param_1->set_scale_factor);
  _fscanf(p_Var4,&DAT_005f04cf,local_330);
  _fscanf(p_Var4,&DAT_005f04d3,local_130);
  _fscanf(p_Var4,&DAT_005f04d7,&param_1->min_ambient_value);
  puVar8 = &param_1->field_0x14d154;
  if (*(int *)&param_1->field_0x15acc0 < 0x1e) {
    *(uint *)&param_1->field_0x14d154 = 0xbf800000;
    *(uint *)&param_1->field_0x14d158 = 0xbf800000;
    *(uint *)&param_1->field_0x14d15c = 0xbf800000;
    local_48 = SQRT(*(float *)&param_1->field_0x14d15c * *(float *)&param_1->field_0x14d15c +
                    *(float *)puVar8 * *(float *)puVar8 +
                    *(float *)&param_1->field_0x14d158 * *(float *)&param_1->field_0x14d158);
    if (local_48 <= 0.0) {
      *(uint *)&param_1->field_0x14d15c = 0;
      *(uint *)&param_1->field_0x14d158 = *(uint *)&param_1->field_0x14d15c;
      *(uint *)puVar8 = *(uint *)&param_1->field_0x14d158;
      *(uint *)&param_1->field_0x14d160 = 0;
    }
    else {
      fVar1 = 1.0 / local_48;
      *(float *)puVar8 = *(float *)puVar8 * fVar1;
      *(float *)&param_1->field_0x14d158 = *(float *)&param_1->field_0x14d158 * fVar1;
      *(float *)&param_1->field_0x14d15c = *(float *)&param_1->field_0x14d15c * fVar1;
      *(uint *)&param_1->field_0x14d160 = 0;
    }
  }
  else {
    _fscanf(p_Var4,"%f,%f,%f,%f\n",puVar8,&param_1->field_0x14d158,&param_1->field_0x14d15c,
               &param_1->field_0x14d160);
  }
  if (*(int *)&param_1->field_0x15acc0 == 0) {
    _fgets(local_330,0xff,p_Var4);
    _fgets(local_330,0xff,p_Var4);
    _fgets(local_330,0xff,p_Var4);
  }
  if (*(int *)&param_1->field_0x15acc0 < 0x11) {
    _fgets(local_330,0xff,p_Var4);
    _fscanf(p_Var4,"%d,%d,%d,%d\n",local_4c,&param_1->field_0x15ac40,&param_1->field_0x15ac44,
               &param_1->field_0x15ac48);
    _fgets(local_330,0xff,p_Var4);
    _fscanf(p_Var4,"%f,%f,%f\n",&param_1->field_0x15ac4c,&param_1->field_0x15ac50,
               &param_1->field_0x15ac54);
    _fscanf(p_Var4,"%f,%f,%f,%f\n",&param_1->field_0x15ac58,&param_1->field_0x15ac5c,local_4c,
               local_4c);
    *(uint *)&param_1->field_0x15ac60 = 0x42480000;
  }
  else {
    core_dcamera_cpp_loadCameraFog_FUN_00454ab0
              (&param_1->field_0x15ac40,p_Var4,*(int *)&param_1->field_0x15acc0);
  }
  _fgets(local_330,0xff,p_Var4);
  _fscanf(p_Var4,"%f,%f\n",&g_CWaterPtr->water_level_y,&g_CWaterPtr->tile_size);
  if (*(int *)&param_1->field_0x15acc0 < 0x1f) {
    DAT_00625c98 = 0x2000;
    _DAT_02c8afc0 = 0;
    _DAT_02c8afc4 = 0;
    _DAT_00625c94 = 0x3e800000;
  }
  else {
    _fgets(local_330,0xff,p_Var4);
    _fscanf(p_Var4,"%f,%d,%f,%f\n",&DAT_00625c94,&DAT_00625c98,&DAT_02c8afc0,&DAT_02c8afc4);
  }
  _fgets(local_330,0xff,p_Var4);
  _fscanf(p_Var4,"%d,%s\n",&param_1->use_enviro_model,param_1->enviro_model_name);
  if (*(int *)&param_1->field_0x15acc0 < 5) {
    iVar10 = _strnicmp(local_130,&DAT_005f052b,4);
    if (iVar10 == 0) {
      g_CWaterPtr->wave_animation_enabled = 1;
    }
    else {
      g_CWaterPtr->wave_animation_enabled = 0;
    }
  }
  else {
    _fgets(local_330,0xff,p_Var4);
    _fscanf(p_Var4,&DAT_005f0527,g_CWaterPtr);
  }
  if (*(int *)&param_1->field_0x15acc0 < 6) {
    param_1->has_sky = 1;
  }
  else {
    _fgets(local_330,0xff,p_Var4);
    _fscanf(p_Var4,&DAT_005f0530,&param_1->has_sky);
  }
  pcVar3 = param_1->sky_texture_name;
  if (*(int *)&param_1->field_0x15acc0 < 0xc) {
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
    param_1->sky_brightness = 0x4000;
  }
  else {
    _fscanf(p_Var4,"%d,%s\n",&param_1->sky_brightness,pcVar3);
  }
  pcVar3 = param_1->world_geometry_name;
  if (*(int *)&param_1->field_0x15acc0 < 0xd) {
    pcVar7 = &DAT_005f054e;
    param_1->use_world_geometry_flag = 0;
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
    _fgets(local_330,0xff,p_Var4);
    _fscanf(p_Var4,"%d,%s\n",&param_1->use_world_geometry_flag,pcVar3);
  }
  if (*(int *)&param_1->field_0x15acc0 < 0x19) {
    param_1->weather_type = WEATHER_TYPE_NONE;
  }
  else {
    _fgets(local_330,0xff,p_Var4);
    _fscanf(p_Var4,&DAT_005f0553,&param_1->weather_type);
  }
  if (*(int *)&param_1->field_0x15acc0 < 0x1d) {
    *(uint *)&param_1->field_0x15acbc = 0;
  }
  else {
    _fgets(local_330,0xff,p_Var4);
    _fscanf(p_Var4,&DAT_005f0557,&param_1->field_0x15acbc);
  }
  engine_dosio_cpp_splitPath_FUN_00479580(local_130,(char *)0x0,(char *)0x0,local_230,(char *)0x0);
  iVar10 = _stricmp(local_230,"train");
  this_ptr = 0x02C8AE68;
  if (iVar10 == 0) {
    param_1->player_on_train = 1;
    core_terrain_cpp_CTerrain_init_FUN_0059f380(this_ptr);
  }
  else {
    core_terrain_cpp_CTerrain_free_FUN_0059f3c0(0x02C8AE68);
    param_1->player_on_train = 0;
  }
  if (10 < *(int *)&param_1->field_0x15acc0) {
    _fgets(local_330,0xff,p_Var4);
  }
  _fscanf(p_Var4,&DAT_005f0561,&param_1->light_count);
  iVar10 = 0;
  if (0 < param_1->light_count) {
    this_ptr_00 = param_1->lights;
    do {
      core_setutil_cpp_C3DSLight_load_FUN_0055c800(this_ptr_00,p_Var4);
      iVar10 = iVar10 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar10 < param_1->light_count);
  }
  if (10 < *(int *)&param_1->field_0x15acc0) {
    _fgets(local_330,0xff,p_Var4);
  }
  _fscanf(p_Var4,&DAT_005f0565,param_1);
  iVar10 = 0;
  if (0 < param_1->camera_count) {
    pCVar6 = param_1->cameras;
    do {
      core_setutil_cpp_C3DSCamera_load_FUN_0055c1b0(pCVar6,p_Var4);
      iVar10 = iVar10 + 1;
      pCVar6 = pCVar6 + 1;
    } while (iVar10 < param_1->camera_count);
  }
  if (*(int *)&param_1->field_0x15acc0 < 1) {
    param_1->default_room_size = 0;
    iVar10 = _strnicmp(local_130,"mauso",5);
    if (iVar10 == 0) {
      param_1->default_room_size = 2;
    }
    iVar10 = _strnicmp(local_130,&DAT_005f0599,4);
    if (iVar10 == 0) {
      param_1->default_room_size = 0;
    }
    iVar10 = _strnicmp(local_130,"smill",5);
    if (iVar10 == 0) {
      param_1->default_room_size = 3;
    }
    iVar10 = _strnicmp(local_130,"pier59",6);
    if (iVar10 == 0) {
      param_1->default_room_size = 0;
    }
    iVar10 = _strnicmp(local_130,&DAT_005f05ab,4);
    if (iVar10 == 0) {
      param_1->default_room_size = 3;
    }
    param_1->room_count = 0;
  }
  else {
    _fgets(local_330,0xff,p_Var4);
    _fscanf(p_Var4,&DAT_005f0569,&param_1->default_room_size);
    _fscanf(p_Var4,&DAT_005f056d,&param_1->room_count);
    iVar10 = 0;
    if (0 < param_1->room_count) {
      local_44 = param_1->rooms;
      local_14 = &param_1->rooms[0].field_0x40;
      local_34 = (float *)&param_1->rooms[0].field_0x18;
      local_18 = &param_1->rooms[0].field_0xc;
      local_2c = &param_1->rooms[0].field_0x10;
      local_30 = &param_1->rooms[0].field_0x14;
      local_24 = &param_1->rooms[0].field_0x8;
      puVar8 = &param_1->rooms[0].field_0x4;
      do {
        _fscanf(p_Var4,"%f,%f,%f\n",local_44 + iVar10,puVar8,local_24);
        _fscanf(p_Var4,"%f,%f,%f\n",local_18,local_2c,local_30);
        _fscanf(p_Var4,"%f,%f,%f\n",&local_5c,&local_5c.z,&local_5c.y);
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
                  ((CMatrix3x3f *)local_34,&local_5c);
        puVar8 = puVar8 + 0x44;
        _fscanf(p_Var4,&DAT_005f058f,local_14);
        iVar10 = iVar10 + 1;
        local_14 = local_14 + 0x44;
        local_34 = &((CMatrix3x3f *)((int)local_34 + 0x24))->m[2].z;
        local_18 = local_18 + 0x44;
        local_30 = local_30 + 0x44;
        local_2c = local_2c + 0x44;
        local_24 = local_24 + 0x44;
      } while (iVar10 < param_1->room_count);
    }
  }
  if (*(int *)&param_1->field_0x15acc0 < 3) {
    param_1->default_ground_type = 2;
    iVar10 = _strnicmp(local_130,"mauso",5);
    if (iVar10 == 0) {
      param_1->default_ground_type = 8;
    }
    iVar10 = _strnicmp(local_130,&DAT_005f05ba,4);
    if (iVar10 == 0) {
      param_1->default_ground_type = 3;
    }
    iVar10 = _strnicmp(local_130,"smill",5);
    if (iVar10 == 0) {
      param_1->default_ground_type = 2;
    }
    iVar10 = _strnicmp(local_130,"pier59",6);
    if (iVar10 == 0) {
      param_1->default_ground_type = 7;
    }
    iVar10 = _strnicmp(local_130,"castle",6);
    if (iVar10 == 0) {
      param_1->default_ground_type = 2;
    }
    iVar10 = _strnicmp(local_130,&DAT_005f05d3,4);
    if (iVar10 == 0) {
      param_1->default_ground_type = 8;
    }
  }
  else {
    _fgets(local_330,0xff,p_Var4);
    _fscanf(p_Var4,&DAT_005f05b0,&param_1->default_ground_type);
  }
  if (*(int *)&param_1->field_0x15acc0 < 0x18) {
    param_1->default_master_reverb = 0;
  }
  else {
    _fgets(local_330,0xff,p_Var4);
    _fscanf(p_Var4,&DAT_005f05d8,&param_1->default_master_reverb);
  }
  if ((3 < *(int *)&param_1->field_0x15acc0) && (*(int *)&param_1->field_0x15acc0 < 10)) {
    core_setdir_cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_0055b8f0(param_1,p_Var4);
  }
  if (*(int *)&param_1->field_0x15acc0 < 5) {
    param_1->vdir_box_count = 0;
  }
  else {
    _fgets(local_330,0xff,p_Var4);
    _fscanf(p_Var4,&DAT_005f05dc,&param_1->vdir_box_count);
    iVar10 = 0;
    if (0 < param_1->vdir_box_count) {
      local_40 = param_1->vdir_boxes;
      local_20 = (float *)&param_1->vdir_boxes[0].field_0x18;
      local_28 = &param_1->vdir_boxes[0].field_0x10;
      local_1c = &param_1->vdir_boxes[0].field_0x14;
      local_3c = &param_1->vdir_boxes[0].field_0x4;
      local_38 = &param_1->vdir_boxes[0].field_0x8;
      puVar8 = &param_1->vdir_boxes[0].field_0xc;
      do {
        _fscanf(p_Var4,"%f,%f,%f\n",local_40 + iVar10,local_3c,local_38)
        ;
        _fscanf(p_Var4,"%f,%f,%f\n",puVar8,local_28,local_1c);
        _fscanf(p_Var4,"%f,%f,%f\n",&local_68,&local_68.z,&local_68.y);
        iVar10 = iVar10 + 1;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
                  ((CMatrix3x3f *)local_20,&local_68);
        puVar8 = puVar8 + 0x44;
        local_20 = &((CMatrix3x3f *)((int)local_20 + 0x24))->m[2].z;
        local_28 = local_28 + 0x44;
        local_1c = local_1c + 0x44;
        local_3c = local_3c + 0x44;
        local_38 = local_38 + 0x44;
      } while (iVar10 < param_1->vdir_box_count);
    }
    core_setdir_cpp_CDemonSet_buildVdirBoxGroups_FUN_0055bf10(param_1);
  }
  if (*(int *)&param_1->field_0x15acc0 == 0xe) {
    _fgets(local_330,0xff,p_Var4);
    _fgets(local_330,0xff,p_Var4);
  }
  if (0x13 < *(int *)&param_1->field_0x15acc0) {
    _fgets(local_330,0xff,p_Var4);
    iVar10 = 0;
    if (0 < param_1->camera_count) {
      pCVar6 = param_1->cameras;
      do {
        core_setutil_cpp_C3DSCamera_loadPVS_FUN_0055c540(pCVar6,p_Var4);
        iVar10 = iVar10 + 1;
        pCVar6 = pCVar6 + 1;
      } while (iVar10 < param_1->camera_count);
    }
  }
  _fclose(p_Var4);
  iVar10 = 0;
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Loading set geometry");
  core_level_cpp_CLevelLoader_update_FUN_004fe9c0(0x01D1BD1C,pcVar3,iVar10);
  pcVar3 = param_1->geometry_filename;
  iVar10 = _stricmp(pcVar3,local_130);
  if (iVar10 == 0) {
    core_setcolid_cpp_CDemonSet_commitVoxelBuffer_FUN_00559580(param_1);
  }
  else {
    pcVar7 = local_130;
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
    p_Var4 = engine_dosio_cpp_FUN_00479180(&DAT_005f0616,pcVar3,&DAT_005f0613);
    if (p_Var4 == (_FILE *)0x0) {
      engine_special_cpp_clearScreen_FUN_0057dc40();
      engine_2d_c_drawText_FUN_00401fe0("Warning!  No .GEO file.  Press any key",0,0);
      wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      wincore_winrun_cpp_getNextKeypress_FUN_005b2510();
    }
    else {
      _fclose(p_Var4);
      core_dtrace_cpp_FUN_0048afa0(&g_CDemonRaytraceInstance,pcVar3);
    }
    core_path_cpp_resetAllPathMaps_FUN_00535280();
  }
  iVar10 = 0;
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Loading thumbs");
  core_level_cpp_CLevelLoader_update_FUN_004fe9c0(0x01D1BD1C,pcVar3,iVar10);
  pcVar3 = local_cc;
  pcVar7 = param_1->geometry_filename;
  do {
    cVar2 = *pcVar7;
    *pcVar3 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar3[1] = cVar2;
    pcVar3 = pcVar3 + 2;
  } while (cVar2 != '\0');
  pcVar3 = local_cc;
  do {
    pcVar7 = pcVar3;
    if (*pcVar3 == '.') goto LAB_0054debe;
    if (*pcVar3 == '\0') break;
    pcVar7 = pcVar3 + 1;
    if (*pcVar7 == '.') goto LAB_0054debe;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_0054debe:
  if (pcVar7 == (char *)0x0) {
    pcVar3 = local_cc;
    do {
      pcVar7 = pcVar3;
      if (*pcVar3 == '\0') goto LAB_0054dee7;
      if (*pcVar3 == '\0') break;
      pcVar7 = pcVar3 + 1;
      if (*pcVar7 == '\0') goto LAB_0054dee7;
      pcVar3 = pcVar3 + 2;
    } while (*pcVar7 != '\0');
    pcVar7 = (char *)0x0;
  }
LAB_0054dee7:
  pcVar3 = &DAT_005f0651;
  do {
    cVar2 = *pcVar3;
    *pcVar7 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
  } while (cVar2 != '\0');
  core_setdir_cpp_FUN_0055b220(param_1,local_cc);
  if (param_1->use_enviro_model != 0) {
    core_dmodel_cpp_CKeyFramedModel_load_FUN_004668a0
              (&g_CKeyFramedModelInstance,param_1->enviro_model_name);
  }
  iVar10 = 0;
  pCVar5 = param_1;
  if (0 < param_1->camera_count) {
    do {
      fVar1 = param_1->min_ambient_value;
      *(uint *)&pCVar5->cameras[0].field_0x14c = 0;
      *(uint *)&pCVar5->cameras[0].field_0x1a0 = 1;
      iVar10 = iVar10 + 1;
      *(float *)&pCVar5->cameras[0].field_0x148 = fVar1;
      pCVar5 = (CDemonSet *)&pCVar5->cameras[0].field_0x1a0;
    } while (iVar10 < param_1->camera_count);
  }
  _DAT_02026348 = 1;
  return param_1;
}
