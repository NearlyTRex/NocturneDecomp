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
  char cVar2;
  CTerrain *this_ptr;
  char *pcVar3;
  _FILE *p_Var4;
  int iVar5;
  CDemonSet *pCVar6;
  C3DSLight *this_ptr_00;
  C3DSCamera *pCVar7;
  char *pcVar8;
  byte *puVar9;
  char *pcVar10;
  uint uVar11;
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
  
  uVar11 = 0;
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Loading set");
  core_level_cpp_FUN_004e0000(0x01D70AB8,pcVar3,uVar11);
  core_set_cpp_CDemonSet_clear_FUN_00532b30(param_1);
  p_Var4 = engine_dosio_cpp_FUN_004659c0("models",param_2,&DAT_005d012d);
  if (p_Var4 == (_FILE *)0x0) {
    _DAT_01d71de0 = "..\\core\\set.cpp";
    _DAT_01d71de4 = 0x16a;
    core_main_c_FUN_004e4330("CDemonSet::Unable to open %s",param_2);
  }
  _fscanf(p_Var4,&DAT_005d0164,&param_1->field_0x15acc0);
  _fscanf(p_Var4,&DAT_005d0168,&param_1->set_scale_factor);
  _fscanf(p_Var4,&DAT_005d016c,local_330);
  _fscanf(p_Var4,&DAT_005d0170,local_130);
  _fscanf(p_Var4,&DAT_005d0174,&param_1->min_ambient_value);
  puVar9 = &param_1->field_0x14d154;
  if (*(int *)&param_1->field_0x15acc0 < 0x1e) {
    *(uint *)&param_1->field_0x14d154 = 0xbf800000;
    *(uint *)&param_1->field_0x14d158 = 0xbf800000;
    *(uint *)&param_1->field_0x14d15c = 0xbf800000;
    local_48 = SQRT(*(float *)&param_1->field_0x14d15c * *(float *)&param_1->field_0x14d15c +
                    *(float *)puVar9 * *(float *)puVar9 +
                    *(float *)&param_1->field_0x14d158 * *(float *)&param_1->field_0x14d158);
    if (local_48 <= 0.0) {
      *(uint *)&param_1->field_0x14d15c = 0;
      *(uint *)&param_1->field_0x14d158 = *(uint *)&param_1->field_0x14d15c;
      *(uint *)puVar9 = *(uint *)&param_1->field_0x14d158;
      *(uint *)&param_1->field_0x14d160 = 0;
    }
    else {
      fVar1 = 1.0 / local_48;
      *(float *)puVar9 = *(float *)puVar9 * fVar1;
      *(float *)&param_1->field_0x14d158 = *(float *)&param_1->field_0x14d158 * fVar1;
      *(float *)&param_1->field_0x14d15c = *(float *)&param_1->field_0x14d15c * fVar1;
      *(uint *)&param_1->field_0x14d160 = 0;
    }
  }
  else {
    _fscanf(p_Var4,"%f,%f,%f,%f\n",puVar9,&param_1->field_0x14d158,&param_1->field_0x14d15c,
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
    core_dcamera_cpp_loadCameraFog_FUN_00450c00
              (&param_1->field_0x15ac40,p_Var4,*(int *)&param_1->field_0x15acc0);
  }
  _fgets(local_330,0xff,p_Var4);
  _fscanf(p_Var4,"%f,%f\n",&g_CWaterPtr->water_level_y,&g_CWaterPtr->tile_size);
  if (*(int *)&param_1->field_0x15acc0 < 0x1f) {
    DAT_00606b28 = 0x2000;
    _DAT_02cfd960 = 0;
    _DAT_02cfd964 = 0;
    _DAT_00606b24 = 0x3e800000;
  }
  else {
    _fgets(local_330,0xff,p_Var4);
    _fscanf(p_Var4,"%f,%d,%f,%f\n",&DAT_00606b24,&DAT_00606b28,&DAT_02cfd960,&DAT_02cfd964);
  }
  _fgets(local_330,0xff,p_Var4);
  _fscanf(p_Var4,"%d,%s\n",&param_1->use_enviro_model,param_1->enviro_model_name);
  if (*(int *)&param_1->field_0x15acc0 < 5) {
    iVar5 = _strnicmp(local_130,&DAT_005d01c8,4);
    if (iVar5 == 0) {
      g_CWaterPtr->wave_animation_enabled = 1;
    }
    else {
      g_CWaterPtr->wave_animation_enabled = 0;
    }
  }
  else {
    _fgets(local_330,0xff,p_Var4);
    _fscanf(p_Var4,&DAT_005d01c4,g_CWaterPtr);
  }
  if (*(int *)&param_1->field_0x15acc0 < 6) {
    param_1->has_sky = 1;
  }
  else {
    _fgets(local_330,0xff,p_Var4);
    _fscanf(p_Var4,&DAT_005d01cd,&param_1->has_sky);
  }
  pcVar3 = param_1->sky_texture_name;
  if (*(int *)&param_1->field_0x15acc0 < 0xc) {
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
    param_1->sky_brightness = 0x4000;
  }
  else {
    _fscanf(p_Var4,"%d,%s\n",&param_1->sky_brightness,pcVar3);
  }
  pcVar3 = param_1->world_geometry_name;
  if (*(int *)&param_1->field_0x15acc0 < 0xd) {
    pcVar8 = &DAT_005d01eb;
    param_1->use_world_geometry_flag = 0;
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
    _fgets(local_330,0xff,p_Var4);
    _fscanf(p_Var4,"%d,%s\n",&param_1->use_world_geometry_flag,pcVar3);
  }
  if (*(int *)&param_1->field_0x15acc0 < 0x19) {
    param_1->weather_type = WEATHER_TYPE_NONE;
  }
  else {
    _fgets(local_330,0xff,p_Var4);
    _fscanf(p_Var4,&DAT_005d01f0,&param_1->weather_type);
  }
  if (*(int *)&param_1->field_0x15acc0 < 0x1d) {
    *(uint *)&param_1->field_0x15acbc = 0;
  }
  else {
    _fgets(local_330,0xff,p_Var4);
    _fscanf(p_Var4,&DAT_005d01f4,&param_1->field_0x15acbc);
  }
  engine_dosio_cpp_splitPath_FUN_00465e50(local_130,(char *)0x0,(char *)0x0,local_230,(char *)0x0);
  iVar5 = _stricmp(local_230,"train");
  this_ptr = 0x02CFD8B8;
  if (iVar5 == 0) {
    param_1->player_on_train = 1;
    core_terrain_cpp_CTerrain_init_FUN_00572370(this_ptr);
  }
  else {
    core_terrain_cpp_CTerrain_free_FUN_005723b0(0x02CFD8B8);
    param_1->player_on_train = 0;
  }
  if (10 < *(int *)&param_1->field_0x15acc0) {
    _fgets(local_330,0xff,p_Var4);
  }
  _fscanf(p_Var4,&DAT_005d01fe,&param_1->light_count);
  iVar5 = 0;
  if (0 < param_1->light_count) {
    this_ptr_00 = param_1->lights;
    do {
      core_setutil_cpp_C3DSLight_load_FUN_005421c0(this_ptr_00,p_Var4);
      iVar5 = iVar5 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar5 < param_1->light_count);
  }
  if (10 < *(int *)&param_1->field_0x15acc0) {
    _fgets(local_330,0xff,p_Var4);
  }
  _fscanf(p_Var4,&DAT_005d0202,param_1);
  iVar5 = 0;
  if (0 < param_1->camera_count) {
    pCVar7 = param_1->cameras;
    do {
      core_setutil_cpp_C3DSCamera_load_FUN_00541b70(pCVar7,p_Var4);
      iVar5 = iVar5 + 1;
      pCVar7 = pCVar7 + 1;
    } while (iVar5 < param_1->camera_count);
  }
  if (*(int *)&param_1->field_0x15acc0 < 1) {
    param_1->default_room_size = 0;
    iVar5 = _strnicmp(local_130,"mauso",5);
    if (iVar5 == 0) {
      param_1->default_room_size = 2;
    }
    iVar5 = _strnicmp(local_130,&DAT_005d0236,4);
    if (iVar5 == 0) {
      param_1->default_room_size = 0;
    }
    iVar5 = _strnicmp(local_130,"smill",5);
    if (iVar5 == 0) {
      param_1->default_room_size = 3;
    }
    iVar5 = _strnicmp(local_130,"pier59",6);
    if (iVar5 == 0) {
      param_1->default_room_size = 0;
    }
    iVar5 = _strnicmp(local_130,&DAT_005d0248,4);
    if (iVar5 == 0) {
      param_1->default_room_size = 3;
    }
    param_1->room_count = 0;
  }
  else {
    _fgets(local_330,0xff,p_Var4);
    _fscanf(p_Var4,&DAT_005d0206,&param_1->default_room_size);
    _fscanf(p_Var4,&DAT_005d020a,&param_1->room_count);
    iVar5 = 0;
    if (0 < param_1->room_count) {
      local_44 = param_1->rooms;
      local_14 = &param_1->rooms[0].field_0x40;
      local_34 = (float *)&param_1->rooms[0].field_0x18;
      local_18 = &param_1->rooms[0].field_0xc;
      local_2c = &param_1->rooms[0].field_0x10;
      local_30 = &param_1->rooms[0].field_0x14;
      local_24 = &param_1->rooms[0].field_0x8;
      puVar9 = &param_1->rooms[0].field_0x4;
      do {
        _fscanf(p_Var4,"%f,%f,%f\n",local_44 + iVar5,puVar9,local_24);
        _fscanf(p_Var4,"%f,%f,%f\n",local_18,local_2c,local_30);
        _fscanf(p_Var4,"%f,%f,%f\n",&local_5c,&local_5c.z,&local_5c.y);
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
                  ((CMatrix3x3f *)local_34,&local_5c);
        puVar9 = puVar9 + 0x44;
        _fscanf(p_Var4,&DAT_005d022c,local_14);
        iVar5 = iVar5 + 1;
        local_14 = local_14 + 0x44;
        local_34 = &((CMatrix3x3f *)((int)local_34 + 0x24))->m[2].z;
        local_18 = local_18 + 0x44;
        local_30 = local_30 + 0x44;
        local_2c = local_2c + 0x44;
        local_24 = local_24 + 0x44;
      } while (iVar5 < param_1->room_count);
    }
  }
  if (*(int *)&param_1->field_0x15acc0 < 3) {
    param_1->default_ground_type = 2;
    iVar5 = _strnicmp(local_130,"mauso",5);
    if (iVar5 == 0) {
      param_1->default_ground_type = 8;
    }
    iVar5 = _strnicmp(local_130,&DAT_005d0257,4);
    if (iVar5 == 0) {
      param_1->default_ground_type = 3;
    }
    iVar5 = _strnicmp(local_130,"smill",5);
    if (iVar5 == 0) {
      param_1->default_ground_type = 2;
    }
    iVar5 = _strnicmp(local_130,"pier59",6);
    if (iVar5 == 0) {
      param_1->default_ground_type = 7;
    }
    iVar5 = _strnicmp(local_130,"castle",6);
    if (iVar5 == 0) {
      param_1->default_ground_type = 2;
    }
    iVar5 = _strnicmp(local_130,&DAT_005d0270,4);
    if (iVar5 == 0) {
      param_1->default_ground_type = 8;
    }
  }
  else {
    _fgets(local_330,0xff,p_Var4);
    _fscanf(p_Var4,&DAT_005d024d,&param_1->default_ground_type);
  }
  if (*(int *)&param_1->field_0x15acc0 < 0x18) {
    param_1->default_master_reverb = 0;
  }
  else {
    _fgets(local_330,0xff,p_Var4);
    _fscanf(p_Var4,&DAT_005d0275,&param_1->default_master_reverb);
  }
  if ((3 < *(int *)&param_1->field_0x15acc0) && (*(int *)&param_1->field_0x15acc0 < 10)) {
    core_setdir_cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_005412b0(param_1,p_Var4);
  }
  if (*(int *)&param_1->field_0x15acc0 < 5) {
    param_1->vdir_box_count = 0;
  }
  else {
    _fgets(local_330,0xff,p_Var4);
    _fscanf(p_Var4,&DAT_005d0279,&param_1->vdir_box_count);
    iVar5 = 0;
    if (0 < param_1->vdir_box_count) {
      local_40 = param_1->vdir_boxes;
      local_20 = (float *)&param_1->vdir_boxes[0].field_0x18;
      local_28 = &param_1->vdir_boxes[0].field_0x10;
      local_1c = &param_1->vdir_boxes[0].field_0x14;
      local_3c = &param_1->vdir_boxes[0].field_0x4;
      local_38 = &param_1->vdir_boxes[0].field_0x8;
      puVar9 = &param_1->vdir_boxes[0].field_0xc;
      do {
        _fscanf(p_Var4,"%f,%f,%f\n",local_40 + iVar5,local_3c,local_38);
        _fscanf(p_Var4,"%f,%f,%f\n",puVar9,local_28,local_1c);
        _fscanf(p_Var4,"%f,%f,%f\n",&local_68,&local_68.z,&local_68.y);
        iVar5 = iVar5 + 1;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
                  ((CMatrix3x3f *)local_20,&local_68);
        puVar9 = puVar9 + 0x44;
        local_20 = &((CMatrix3x3f *)((int)local_20 + 0x24))->m[2].z;
        local_28 = local_28 + 0x44;
        local_1c = local_1c + 0x44;
        local_3c = local_3c + 0x44;
        local_38 = local_38 + 0x44;
      } while (iVar5 < param_1->vdir_box_count);
    }
    core_setdir_cpp_CDemonSet_buildVdirBoxGroups_FUN_005418d0(param_1);
  }
  if (*(int *)&param_1->field_0x15acc0 == 0xe) {
    _fgets(local_330,0xff,p_Var4);
    _fgets(local_330,0xff,p_Var4);
  }
  if (0x13 < *(int *)&param_1->field_0x15acc0) {
    _fgets(local_330,0xff,p_Var4);
    iVar5 = 0;
    if (0 < param_1->camera_count) {
      pCVar7 = param_1->cameras;
      do {
        core_setutil_cpp_C3DSCamera_loadPVS_FUN_00541f00(pCVar7,p_Var4);
        iVar5 = iVar5 + 1;
        pCVar7 = pCVar7 + 1;
      } while (iVar5 < param_1->camera_count);
    }
  }
  _fclose(p_Var4);
  uVar11 = 0;
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Loading set geometry");
  core_level_cpp_FUN_004e0000(0x01D70AB8,pcVar3,uVar11);
  pcVar3 = param_1->geometry_filename;
  iVar5 = _stricmp(pcVar3,local_130);
  if (iVar5 == 0) {
    core_setcolid_cpp_CDemonSet_commitVoxelBuffer_FUN_0053ef40(param_1);
  }
  else {
    pcVar8 = local_130;
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
    p_Var4 = engine_dosio_cpp_FUN_004659c0(&DAT_005d02b3,pcVar3,&DAT_005d02b0);
    if (p_Var4 == (_FILE *)0x0) {
      engine_special_cpp_clearScreen_FUN_00560d70();
      engine_2d_c_drawText_FUN_00401fe0("Warning!  No .GEO file.  Press any key",0,0);
      wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      wincore_winrun_cpp_getNextKeypress_FUN_00580790();
    }
    else {
      _fclose(p_Var4);
      core_dtrace_cpp_FUN_00473b20(&g_CDemonRaytraceInstance,pcVar3);
    }
    core_path_cpp_resetAllPathMaps_FUN_0050cf60();
  }
  uVar11 = 0;
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Loading thumbs");
  core_level_cpp_FUN_004e0000(0x01D70AB8,pcVar3,uVar11);
  pcVar3 = local_cc;
  pcVar8 = param_1->geometry_filename;
  do {
    cVar2 = *pcVar8;
    *pcVar3 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar3[1] = cVar2;
    pcVar3 = pcVar3 + 2;
  } while (cVar2 != '\0');
  pcVar3 = local_cc;
  do {
    pcVar8 = pcVar3;
    if (*pcVar3 == '.') goto LAB_0053367e;
    if (*pcVar3 == '\0') break;
    pcVar8 = pcVar3 + 1;
    if (*pcVar8 == '.') goto LAB_0053367e;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar8 != '\0');
  pcVar8 = (char *)0x0;
LAB_0053367e:
  if (pcVar8 == (char *)0x0) {
    pcVar3 = local_cc;
    do {
      pcVar8 = pcVar3;
      if (*pcVar3 == '\0') goto LAB_005336a7;
      if (*pcVar3 == '\0') break;
      pcVar8 = pcVar3 + 1;
      if (*pcVar8 == '\0') goto LAB_005336a7;
      pcVar3 = pcVar3 + 2;
    } while (*pcVar8 != '\0');
    pcVar8 = (char *)0x0;
  }
LAB_005336a7:
  pcVar3 = &DAT_005d02ee;
  do {
    cVar2 = *pcVar3;
    *pcVar8 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar8[1] = cVar2;
    pcVar8 = pcVar8 + 2;
  } while (cVar2 != '\0');
  core_setdir_cpp_FUN_00540be0(param_1,local_cc);
  if (param_1->use_enviro_model != 0) {
    core_dmodel_cpp_CKeyFramedModel_load_FUN_00460550
              (&g_CKeyFramedModelInstance,param_1->enviro_model_name);
  }
  iVar5 = 0;
  pCVar6 = param_1;
  if (0 < param_1->camera_count) {
    do {
      fVar1 = param_1->min_ambient_value;
      *(uint *)&pCVar6->cameras[0].field_0x14c = 0;
      *(uint *)&pCVar6->cameras[0].field_0x1a0 = 1;
      iVar5 = iVar5 + 1;
      *(float *)&pCVar6->cameras[0].field_0x148 = fVar1;
      pCVar6 = (CDemonSet *)&pCVar6->cameras[0].field_0x1a0;
    } while (iVar5 < param_1->camera_count);
  }
  _DAT_0207baa8 = 1;
  return param_1;
}
