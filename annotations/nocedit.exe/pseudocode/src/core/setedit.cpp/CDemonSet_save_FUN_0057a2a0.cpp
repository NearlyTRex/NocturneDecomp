// Name: core_setedit.cpp_CDemonSet_save_FUN_0057a2a0
// Address: 0057a2a0
// Address Range: [[0057a2a0, 0057a93c]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_save_FUN_0057a2a0(CDemonSet *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_save_FUN_0057a2a0(CDemonSet *this_ptr,char *filename)

{
  char cVar2;
  _FILE *file;
  C3DSLight *this_ptr_00;
  int iVar3;
  SRoom *pSVar2;
  SVDBox *pSVar3;
  C3DSCamera *pCVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar4;
  char *pcVar7;
  char *pcVar8;
  int iVar8;
  C3DSCamera *this_ptr_01;
  char *pcVar9;
  char local_a0 [100];
  CVector3f local_3c;
  CVector3f local_30;
  SVDBox *local_24;
  SRoom *local_20;
  CMatrix3x3f *local_1c;
  CMatrix3x3f *local_18;
  char cVar1;
  
  this_ptr->set_file_version = 0x1c;
  file = engine_dosio_cpp_getFile_FUN_00481a50("models",filename,"wt");
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 1750;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::Unable to save output");
  }
  pcVar9 = local_a0;
  pcVar8 = local_a0;
  _fprintf(file,"%d\n");
  _fprintf(file,"%f\n",(double)this_ptr->set_scale_factor);
  _fprintf(file,"unused.act\n");
  _fprintf(file,"%s\n");
  _fprintf(file,"%f\n",(double)this_ptr->min_ambient_value);
  core_dcamera_cpp_saveCameraFog_FUN_00453f10(&this_ptr->scene_fog,file);
  _fprintf(file,"waterHeight,waterTileSize\n");
  _fprintf(file,"%f,%f\n",(double)g_CWaterPtr->water_level_y,(double)g_CWaterPtr->tile_size);
  _fprintf(file,"useEnviroModel,enviroModelName\n");
  _fprintf(file,"%d,%s\n",this_ptr->use_enviro_model);
  _fprintf(file,"transparentWaterFlag\n");
  _fprintf(file,"%d\n");
  _fprintf(file,"hasSky\n");
  _fprintf(file,"%d\n");
  if (this_ptr->has_sky == 0) {
    _fprintf(file,"0,none\n");
  }
  else {
    _fprintf(file,"%d,%s\n",this_ptr->sky_brightness);
  }
  _fprintf(file,"useWorldGeometryFlag,worldGeometryName\n");
  if (this_ptr->use_world_geometry_flag == 0) {
    _fprintf(file,"0,none\n");
  }
  else {
    _fprintf(file,"1,%s\n");
  }
  _fprintf(file,"weatherType\n");
  _fprintf(file,"%d\n");
  _fprintf(file,"lightCount\n");
  _fprintf(file,"%d\n");
  iVar8 = 0;
  if (0 < this_ptr->light_count) {
    this_ptr_00 = this_ptr->lights;
    do {
      core_setutil_cpp_C3DSLight_save_FUN_00587090(this_ptr_00,file);
      iVar8 = iVar8 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar8 < this_ptr->light_count);
  }
  _fprintf(file,"cameraCount\n");
  _fprintf(file,"%d\n");
  iVar3 = 0;
  if (0 < this_ptr->camera_count) {
    this_ptr_01 = this_ptr->cameras;
    do {
      core_setutil_cpp_C3DSCamera_save_FUN_00585a40(this_ptr_01,file);
      iVar3 = iVar3 + 1;
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar3 < this_ptr->camera_count);
  }
  _fprintf(file,"Room size info\n");
  _fprintf(file,"%d\n");
  _fprintf(file,"%d\n");
  iVar3 = 0;
  if (0 < this_ptr->room_count) {
    local_18 = &this_ptr->rooms[0].rotation_matrix;
    do {
      pSVar2 = this_ptr->rooms + iVar3;
      _fprintf(file,"%g,%g,%g\n",(double)(pSVar2->position).x,(double)(pSVar2->position).y,
                 (double)(pSVar2->position).z);
      _fprintf(file,"%g,%g,%g\n",(double)(pSVar2->extents).x,(double)(pSVar2->extents).y,
                 (double)(pSVar2->extents).z);
      core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(local_18,&local_30);
      _fprintf(file,"%g,%g,%g\n",(double)local_30.x,(double)local_30.z,(double)local_30.y);
      _fprintf(file,"%d\n");
      iVar3 = iVar3 + 1;
      local_18 = (CMatrix3x3f *)&local_18[1].m[2].z;
    } while (iVar3 < this_ptr->room_count);
  }
  _fprintf(file,"Default ground type\n");
  _fprintf(file,"%d\n");
  _fprintf(file,"Default master reverb\n");
  _fprintf(file,"%d\n");
  _fprintf(file,"Virtual director boxes\n");
  _fprintf(file,"%d\n");
  iVar3 = 0;
  if (0 < this_ptr->vdir_box_count) {
    local_1c = &this_ptr->vdir_boxes[0].rotation_matrix;
    do {
      pSVar3 = this_ptr->vdir_boxes + iVar3;
      _fprintf(file,"%g,%g,%g\n",(double)(pSVar3->position).x,(double)(pSVar3->position).y,
                 (double)(pSVar3->position).z);
      _fprintf(file,"%g,%g,%g\n",(double)(pSVar3->extents).x,(double)(pSVar3->extents).y,
                 (double)(pSVar3->extents).z);
      core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(local_1c,&local_3c);
      _fprintf(file,"%g,%g,%g\n",(double)local_3c.x,(double)local_3c.z,(double)local_3c.y);
      iVar3 = iVar3 + 1;
      local_1c = (CMatrix3x3f *)&local_1c[1].m[2].z;
    } while (iVar3 < this_ptr->vdir_box_count);
  }
  _fprintf(file,"PVS list\n");
  iVar3 = 0;
  if (0 < this_ptr->camera_count) {
    pCVar4 = this_ptr->cameras;
    do {
      core_setutil_cpp_C3DSCamera_savePVS_FUN_00587450(pCVar4,file);
      iVar3 = iVar3 + 1;
      pCVar4 = pCVar4 + 1;
    } while (iVar3 < this_ptr->camera_count);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\setedit.cpp",1869);
  pcVar5 = this_ptr->geometry_filename;
  do {
    cVar1 = *pcVar5;
    *pcVar9 = cVar1;
    pcVar6 = local_a0;
    if (cVar1 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar9[1] = cVar2;
    pcVar9 = pcVar9 + 2;
    pcVar6 = local_a0;
  } while (cVar2 != '\0');
  do {
    pcVar4 = pcVar6;
    if (*pcVar6 == '.') goto LAB_0057a874;
    if (*pcVar6 == '\0') break;
    pcVar4 = pcVar6 + 1;
    if (*pcVar4 == '.') goto LAB_0057a874;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)0x0;
LAB_0057a874:
  if (pcVar4 == (char *)0x0) {
    do {
      pcVar4 = pcVar8;
      if (*pcVar8 == '\0') goto LAB_0057a87e;
      if (*pcVar8 == '\0') break;
      pcVar4 = pcVar8 + 1;
      if (*pcVar4 == '\0') goto LAB_0057a87e;
      pcVar8 = pcVar8 + 2;
    } while (*pcVar4 != '\0');
    pcVar4 = (char *)0x0;
  }
LAB_0057a87e:
  pcVar7 = ".zth";
  do {
    cVar2 = *pcVar7;
    *pcVar4 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar4[1] = cVar2;
    pcVar4 = pcVar4 + 2;
  } while (cVar2 != '\0');
  core_setdir_cpp_CDemonSet_saveThumbsNoFile_FUN_00575f60(this_ptr);
  core_setdir_cpp_CDemonSet_writeThumbs_FUN_00575e40(this_ptr,local_a0);
  return;
}
