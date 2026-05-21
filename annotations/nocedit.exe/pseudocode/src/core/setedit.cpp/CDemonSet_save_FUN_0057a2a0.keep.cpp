// Name: core_setedit.cpp_CDemonSet_save_FUN_0057a2a0
// Address: 0057a2a0
// MANUAL RECONSTRUCTION
// Address Range: [[0057a2a0, 0057a93c]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_save_FUN_0057a2a0(CDemonSet *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_save_FUN_0057a2a0(CDemonSet *this_ptr,char *filename)

{
  _FILE *file;
  C3DSLight *this_ptr_00;
  int iVar3;
  SRoom *pSVar2;
  SVDBox *pSVar3;
  C3DSCamera *pCVar4;
  char *pcVar4;
  int iVar8;
  C3DSCamera *this_ptr_01;
  char local_a0 [100];
  CVector3f local_3c;
  CVector3f local_30;
  
  this_ptr->set_file_version = 0x1c;
  file = engine_dosio_cpp_getFile_FUN_00481a50("models",filename,"wt");
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0x6d6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::Unable to save output");
  }
  _fprintf(file,"%d\n",this_ptr->set_file_version);
  _fprintf(file,"%f\n",(double)this_ptr->set_scale_factor);
  _fprintf(file,"unused.act\n");
  _fprintf(file,"%s\n",this_ptr->geometry_filename);
  _fprintf(file,"%f\n",(double)this_ptr->min_ambient_value);
  core_dcamera_cpp_saveCameraFog_FUN_00453f10(&this_ptr->scene_fog,file);
  _fprintf(file,"waterHeight,waterTileSize\n");
  _fprintf(file,"%f,%f\n",(double)g_CWaterPtr->water_level_y,(double)g_CWaterPtr->tile_size);
  _fprintf(file,"useEnviroModel,enviroModelName\n");
  _fprintf(file,"%d,%s\n",this_ptr->use_enviro_model,this_ptr->enviro_model_name);
  _fprintf(file,"transparentWaterFlag\n");
  _fprintf(file,"%d\n",g_CWaterPtr->wave_animation_enabled);
  _fprintf(file,"hasSky\n");
  _fprintf(file,"%d\n",this_ptr->has_sky);
  if (this_ptr->has_sky == 0) {
    _fprintf(file,"0,none\n");
  }
  else {
    _fprintf(file,"%d,%s\n",this_ptr->sky_brightness,this_ptr->sky_texture_name);
  }
  _fprintf(file,"useWorldGeometryFlag,worldGeometryName\n");
  if (this_ptr->use_world_geometry_flag == 0) {
    _fprintf(file,"0,none\n");
  }
  else {
    _fprintf(file,"1,%s\n",this_ptr->world_geometry_name);
  }
  _fprintf(file,"weatherType\n");
  _fprintf(file,"%d\n",this_ptr->weather_type);
  _fprintf(file,"lightCount\n");
  _fprintf(file,"%d\n",this_ptr->light_count);
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
  _fprintf(file,"%d\n",this_ptr->camera_count);
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
  _fprintf(file,"%d\n",this_ptr->default_room_size);
  _fprintf(file,"%d\n",this_ptr->room_count);
  iVar3 = 0;
  if (0 < this_ptr->room_count) {
    do {
      pSVar2 = this_ptr->rooms + iVar3;
      _fprintf(file,"%g,%g,%g\n",(double)(pSVar2->position).x,(double)(pSVar2->position).y,
                 (double)(pSVar2->position).z);
      _fprintf(file,"%g,%g,%g\n",(double)(pSVar2->extents).x,(double)(pSVar2->extents).y,
                 (double)(pSVar2->extents).z);
      core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(&pSVar2->rotation_matrix,&local_30);
      _fprintf(file,"%g,%g,%g\n",(double)local_30.x,(double)local_30.z,(double)local_30.y);
      _fprintf(file,"%d\n",pSVar2->reverb_size);
      iVar3 = iVar3 + 1;
    } while (iVar3 < this_ptr->room_count);
  }
  _fprintf(file,"Default ground type\n");
  _fprintf(file,"%d\n",this_ptr->default_ground_type);
  _fprintf(file,"Default master reverb\n");
  _fprintf(file,"%d\n",this_ptr->default_master_reverb);
  _fprintf(file,"Virtual director boxes\n");
  _fprintf(file,"%d\n",this_ptr->vdir_box_count);
  iVar3 = 0;
  if (0 < this_ptr->vdir_box_count) {
    do {
      pSVar3 = this_ptr->vdir_boxes + iVar3;
      _fprintf(file,"%g,%g,%g\n",(double)(pSVar3->position).x,(double)(pSVar3->position).y,
                 (double)(pSVar3->position).z);
      _fprintf(file,"%g,%g,%g\n",(double)(pSVar3->extents).x,(double)(pSVar3->extents).y,
                 (double)(pSVar3->extents).z);
      core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(&pSVar3->rotation_matrix,&local_3c);
      _fprintf(file,"%g,%g,%g\n",(double)local_3c.x,(double)local_3c.z,(double)local_3c.y);
      iVar3 = iVar3 + 1;
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
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\setedit.cpp",0x74d);
  strcpy(local_a0,this_ptr->geometry_filename);
  pcVar4 = strchr(local_a0,'.');
  if (pcVar4 == (char *)0x0) {
    pcVar4 = local_a0 + strlen(local_a0);
  }
  strcpy(pcVar4,".zth");
  core_setdir_cpp_CDemonSet_saveThumbsNoFile_FUN_00575f60(this_ptr);
  core_setdir_cpp_CDemonSet_writeThumbs_FUN_00575e40(this_ptr,local_a0);
  return;
}
