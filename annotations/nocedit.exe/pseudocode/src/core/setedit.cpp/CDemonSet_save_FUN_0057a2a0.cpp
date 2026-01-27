// Name: core_setedit.cpp_CDemonSet_save_FUN_0057a2a0
// Address: 0057a2a0
// Address Range: [[0057a2a0, 0057a93c]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_CDemonSet_save_FUN_0057a2a0(CDemonSet * this_ptr, char * filename)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_save_FUN_0057a2a0(CDemonSet *this_ptr,char *filename)

{
  char cVar1;
  FILE *file;
  C3DSLight *this_ptr_00;
  SRoom *pSVar2;
  SVDBox *pSVar3;
  C3DSCamera *pCVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  char local_a0 [100];
  CVector3f local_3c;
  CVector3f local_30;
  SVDBox *local_24;
  SRoom *local_20;
  CMatrix3x3f *local_1c;
  CMatrix3x3f *local_18;
  
  this_ptr->set_file_version = 0x1c;
  file = engine_dosio_c_getFile_FUN_00481a50("models",filename,"wt");
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0x6d6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::Unable to save output");
  }
  pcVar9 = local_a0;
  pcVar7 = local_a0;
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%f\n",(double)this_ptr->set_scale_factor);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"unused.act\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%s\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%f\n",(double)this_ptr->min_ambient_value);
  core_dcamera_cpp_saveCameraFog_FUN_00453f10((SFog *)(this_ptr->unk4 + 0xbb90),file);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"waterHeight,waterTileSize\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file,"%f,%f\n",(double)g_CWaterPtr->water_level_y,(double)g_CWaterPtr->tile_size);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"useEnviroModel,enviroModelName\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d,%s\n",this_ptr->use_enviro_model);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"transparentWaterFlag\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"hasSky\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  if (this_ptr->has_sky == 0) {
    crt_stdio_c_fprintf_FUN_005fe6d0(file,"0,none\n");
  }
  else {
    crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d,%s\n",this_ptr->sky_type);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"useWorldGeometryFlag,worldGeometryName\n");
  if (this_ptr->use_world_geometry_flag == 0) {
    crt_stdio_c_fprintf_FUN_005fe6d0(file,"0,none\n");
  }
  else {
    crt_stdio_c_fprintf_FUN_005fe6d0(file,"1,%s\n");
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"weatherType\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"lightCount\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  iVar8 = 0;
  if (0 < this_ptr->light_count) {
    this_ptr_00 = this_ptr->lights;
    do {
      core_setutil_cpp_C3DSLight_save_FUN_00587090(this_ptr_00,file);
      iVar8 = iVar8 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar8 < this_ptr->light_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"cameraCount\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  iVar8 = 0;
  if (0 < this_ptr->camera_count) {
    pCVar4 = this_ptr->cameras;
    do {
      core_setutil_cpp_C3DSCamera_save_FUN_00585a40(pCVar4,file);
      iVar8 = iVar8 + 1;
      pCVar4 = pCVar4 + 1;
    } while (iVar8 < this_ptr->camera_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"Room size info\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  iVar8 = 0;
  if (0 < this_ptr->room_count) {
    local_20 = this_ptr->rooms;
    local_18 = &this_ptr->rooms[0].rotation_matrix;
    do {
      pSVar2 = local_20 + iVar8;
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file,"%g,%g,%g\n",(double)(pSVar2->position).x,(double)(pSVar2->position).y,
                 (double)(pSVar2->position).z);
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file,"%g,%g,%g\n",(double)(pSVar2->extents).x,(double)(pSVar2->extents).y,
                 (double)(pSVar2->extents).z);
      core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(local_18,&local_30);
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file,"%g,%g,%g\n",(double)local_30.x,(double)local_30.z,(double)local_30.y);
      crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
      iVar8 = iVar8 + 1;
      local_18 = (CMatrix3x3f *)((int)(local_18 + 1) + 0x20);
    } while (iVar8 < this_ptr->room_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"Default ground type\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"Default master reverb\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"Virtual director boxes\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  iVar8 = 0;
  if (0 < this_ptr->vdir_box_count) {
    local_24 = this_ptr->vdir_boxes;
    local_1c = &this_ptr->vdir_boxes[0].rotation_matrix;
    do {
      pSVar3 = local_24 + iVar8;
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file,"%g,%g,%g\n",(double)(pSVar3->position).x,(double)(pSVar3->position).y,
                 (double)(pSVar3->position).z);
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file,"%g,%g,%g\n",(double)(pSVar3->extents).x,(double)(pSVar3->extents).y,
                 (double)(pSVar3->extents).z);
      core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(local_1c,&local_3c);
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file,"%g,%g,%g\n",(double)local_3c.x,(double)local_3c.z,(double)local_3c.y);
      iVar8 = iVar8 + 1;
      local_1c = (CMatrix3x3f *)((int)(local_1c + 1) + 0x20);
    } while (iVar8 < this_ptr->vdir_box_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"PVS list\n");
  iVar8 = 0;
  if (0 < this_ptr->camera_count) {
    pCVar4 = this_ptr->cameras;
    do {
      core_setutil_cpp_C3DSCamera_savePVS_FUN_00587450(pCVar4,file);
      iVar8 = iVar8 + 1;
      pCVar4 = pCVar4 + 1;
    } while (iVar8 < this_ptr->camera_count);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\setedit.cpp",0x74d);
  pcVar5 = this_ptr->geometry_filename;
  do {
    cVar1 = *pcVar5;
    *pcVar9 = cVar1;
    pcVar6 = local_a0;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
    pcVar6 = local_a0;
  } while (cVar1 != '\0');
  do {
    pcVar9 = pcVar6;
    if (*pcVar6 == '.') goto LAB_0057a874;
    if (*pcVar6 == '\0') break;
    pcVar9 = pcVar6 + 1;
    if (*pcVar9 == '.') goto LAB_0057a874;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar9 != '\0');
  pcVar9 = (char *)0x0;
LAB_0057a874:
  if (pcVar9 == (char *)0x0) {
    do {
      pcVar9 = pcVar7;
      if (*pcVar7 == '\0') goto LAB_0057a87e;
      if (*pcVar7 == '\0') break;
      pcVar9 = pcVar7 + 1;
      if (*pcVar9 == '\0') goto LAB_0057a87e;
      pcVar7 = pcVar7 + 2;
    } while (*pcVar9 != '\0');
    pcVar9 = (char *)0x0;
  }
LAB_0057a87e:
  pcVar7 = ".zth";
  do {
    cVar1 = *pcVar7;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  core_setdir_cpp_CDemonSet_saveThumbs_FUN_00575f60(this_ptr);
  core_setdir_cpp_CDemonSet_writeThumbs_FUN_00575e40(this_ptr,local_a0);
  return;
}
