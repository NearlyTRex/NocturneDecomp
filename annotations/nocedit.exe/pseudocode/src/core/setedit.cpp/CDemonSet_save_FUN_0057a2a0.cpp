// Name: core_setedit.cpp_CDemonSet_save_FUN_0057a2a0
// Address: 0057a2a0
// Address Range: [[0057a2a0, 0057a93c]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_CDemonSet_save_FUN_0057a2a0(CDemonSet * this_ptr, char * filename)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_save_FUN_0057a2a0(CDemonSet *this_ptr,char *filename)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  FILE *file;
  C3DSLight *this_ptr_00;
  SRoom *pSVar5;
  SVDBox *pSVar6;
  C3DSCamera *pCVar7;
  BADSPACEBASE *in_ESP;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  char acStack_94 [92];
  CVector3f local_38;
  CVector3f local_2c;
  SVDBox *local_20;
  SRoom *local_1c;
  CMatrix3x3f *local_18;
  CMatrix3x3f *pCStack_14;
  
  this_ptr->set_file_version = 0x1c;
  file = engine_dosio_c_getFile_FUN_00481a50("models",filename,"wt");
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0x6d6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::Unable to save output");
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",this_ptr->set_file_version);
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file,"%f\n",SUB84 /* extract 2-byte value */((double)this_ptr->set_scale_factor,0),
             (int)((ulonglong)(double)this_ptr->set_scale_factor >> 0x20));
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"unused.act\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%s\n",this_ptr->geometry_filename);
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file,"%f\n",SUB84 /* extract 2-byte value */((double)this_ptr->min_ambient_value,0),
             (int)((ulonglong)(double)this_ptr->min_ambient_value >> 0x20));
  core_dcamera_cpp_saveCameraFog_FUN_00453f10((SFog *)(this_ptr->field19_0x14f0a0 + 0xbb90),file);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"waterHeight,waterTileSize\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file,"%f,%f\n",SUB84 /* extract 2-byte value */((double)g_CWaterPtr->water_level_y,0),
             (int)((ulonglong)(double)g_CWaterPtr->water_level_y >> 0x20),
             SUB84 /* extract 2-byte value */((double)g_CWaterPtr->tile_size,0),
             (int)((ulonglong)(double)g_CWaterPtr->tile_size >> 0x20));
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
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",this_ptr->weather_type);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"lightCount\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",this_ptr->light_count);
  iVar11 = 0;
  if (0 < this_ptr->light_count) {
    this_ptr_00 = this_ptr->lights;
    do {
      core_setutil_cpp_C3DSLight_save_FUN_00587090(this_ptr_00,file);
      iVar11 = iVar11 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar11 < this_ptr->light_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"cameraCount\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",this_ptr->camera_count);
  iVar11 = 0;
  if (0 < this_ptr->camera_count) {
    pCVar7 = this_ptr->cameras;
    do {
      core_setutil_cpp_C3DSCamera_save_FUN_00585a40(pCVar7,file);
      iVar11 = iVar11 + 1;
      pCVar7 = pCVar7 + 1;
    } while (iVar11 < this_ptr->camera_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"Room size info\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",this_ptr->room_reverb_type);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",this_ptr->room_count);
  iVar11 = 0;
  if (0 < this_ptr->room_count) {
    local_1c = this_ptr->rooms;
    pCStack_14 = &this_ptr->rooms[0].rotation_matrix;
    do {
      pSVar5 = local_1c + iVar11;
      dVar1 = (double)(pSVar5->position).z;
      dVar2 = (double)(pSVar5->position).y;
      dVar3 = (double)(pSVar5->position).x;
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file,"%g,%g,%g\n",SUB84 /* extract 2-byte value */(dVar3,0),(int)((ulonglong)dVar3 >> 0x20),SUB84 /* extract 2-byte value */(dVar2,0)
                 ,(int)((ulonglong)dVar2 >> 0x20),SUB84 /* extract 2-byte value */(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
      dVar1 = (double)(pSVar5->extents).z;
      dVar2 = (double)(pSVar5->extents).y;
      dVar3 = (double)(pSVar5->extents).x;
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file,"%g,%g,%g\n",SUB84 /* extract 2-byte value */(dVar3,0),(int)((ulonglong)dVar3 >> 0x20),SUB84 /* extract 2-byte value */(dVar2,0)
                 ,(int)((ulonglong)dVar2 >> 0x20),SUB84 /* extract 2-byte value */(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
      core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(pCStack_14,&local_2c);
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file,"%g,%g,%g\n",SUB84 /* extract 2-byte value */((double)local_2c.y,0),
                 (int)((ulonglong)(double)local_2c.y >> 0x20),SUB84 /* extract 2-byte value */((double)(float)local_20,0),
                 (int)((ulonglong)(double)(float)local_20 >> 0x20),SUB84 /* extract 2-byte value */((double)local_2c.z,0),
                 (int)((ulonglong)(double)local_2c.z >> 0x20));
      crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",pSVar5->field4_0x40);
      iVar11 = iVar11 + 1;
      pCStack_14 = (CMatrix3x3f *)((int)(pCStack_14 + 1) + 0x20);
    } while (iVar11 < this_ptr->room_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"Default ground type\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",this_ptr->default_ground_type);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"Default master reverb\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",this_ptr->default_master_reverb);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"Virtual director boxes\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",this_ptr->vdir_box_count);
  iVar11 = 0;
  if (0 < this_ptr->vdir_box_count) {
    local_20 = this_ptr->vdir_boxes;
    local_18 = &this_ptr->vdir_boxes[0].rotation_matrix;
    do {
      pSVar6 = local_20 + iVar11;
      dVar1 = (double)(pSVar6->position).z;
      dVar2 = (double)(pSVar6->position).y;
      dVar3 = (double)(pSVar6->position).x;
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file,"%g,%g,%g\n",SUB84 /* extract 2-byte value */(dVar3,0),(int)((ulonglong)dVar3 >> 0x20),SUB84 /* extract 2-byte value */(dVar2,0)
                 ,(int)((ulonglong)dVar2 >> 0x20),SUB84 /* extract 2-byte value */(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
      dVar1 = (double)(pSVar6->extents).z;
      dVar2 = (double)(pSVar6->extents).y;
      dVar3 = (double)(pSVar6->extents).x;
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file,"%g,%g,%g\n",SUB84 /* extract 2-byte value */(dVar3,0),(int)((ulonglong)dVar3 >> 0x20),SUB84 /* extract 2-byte value */(dVar2,0)
                 ,(int)((ulonglong)dVar2 >> 0x20),SUB84 /* extract 2-byte value */(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
      core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(local_18,&local_38);
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file,"%g,%g,%g\n",SUB84 /* extract 2-byte value */((double)local_38.y,0),
                 (int)((ulonglong)(double)local_38.y >> 0x20),SUB84 /* extract 2-byte value */((double)local_2c.x,0),
                 (int)((ulonglong)(double)local_2c.x >> 0x20),SUB84 /* extract 2-byte value */((double)local_38.z,0),
                 (int)((ulonglong)(double)local_38.z >> 0x20));
      iVar11 = iVar11 + 1;
      local_18 = (CMatrix3x3f *)((int)(local_18 + 1) + 0x20);
    } while (iVar11 < this_ptr->vdir_box_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"PVS list\n");
  iVar11 = 0;
  if (0 < this_ptr->camera_count) {
    pCVar7 = this_ptr->cameras;
    do {
      core_setutil_cpp_C3DSCamera_savePVS_FUN_00587450(pCVar7,file);
      iVar11 = iVar11 + 1;
      pCVar7 = pCVar7 + 1;
    } while (iVar11 < this_ptr->camera_count);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\setedit.cpp",0x74d);
  pcVar12 = &stack0xffffff68;
  pcVar10 = &stack0xffffff68;
  pcVar8 = this_ptr->geometry_filename;
  do {
    cVar4 = *pcVar8;
    *pcVar12 = cVar4;
    pcVar9 = &stack0xffffff68;
    if (cVar4 == '\0') break;
    cVar4 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar12[1] = cVar4;
    pcVar12 = pcVar12 + 2;
    pcVar9 = &stack0xffffff68;
  } while (cVar4 != '\0');
  do {
    pcVar12 = pcVar9;
    if (*pcVar9 == '.') goto LAB_0057a874;
    if (*pcVar9 == '\0') break;
    pcVar12 = pcVar9 + 1;
    if (*pcVar12 == '.') goto LAB_0057a874;
    pcVar9 = pcVar9 + 2;
  } while (*pcVar12 != '\0');
  pcVar12 = (char *)0x0;
LAB_0057a874:
  if (pcVar12 == (char *)0x0) {
    do {
      pcVar12 = pcVar10;
      if (*pcVar10 == '\0') goto LAB_0057a87e;
      if (*pcVar10 == '\0') break;
      pcVar12 = pcVar10 + 1;
      if (*pcVar12 == '\0') goto LAB_0057a87e;
      pcVar10 = pcVar10 + 2;
    } while (*pcVar12 != '\0');
    pcVar12 = (char *)0x0;
  }
LAB_0057a87e:
  pcVar10 = ".zth";
  do {
    cVar4 = *pcVar10;
    *pcVar12 = cVar4;
    if (cVar4 == '\0') break;
    cVar4 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    pcVar12[1] = cVar4;
    pcVar12 = pcVar12 + 2;
  } while (cVar4 != '\0');
  core_setdir_cpp_CDemonSet_saveThumbs_FUN_00575f60(this_ptr);
  core_setdir_cpp_CDemonSet_writeThumbs_FUN_00575e40(this_ptr,acStack_94);
  return;
}
