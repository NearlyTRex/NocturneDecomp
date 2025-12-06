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
  char cVar3;
  SRoom *pSVar4;
  SVDBox *pSVar5;
  FILE *file;
  C3DSLight *this_ptr_00;
  C3DSCamera *pCVar6;
  BADSPACEBASE *in_ESP;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  float in_stack_00000038;
  float in_stack_0000003c;
  float in_stack_00000040;
  float in_stack_00000048;
  CMatrix3x3f *in_stack_0000004c;
  SRoom *in_stack_00000050;
  CMatrix3x3f *in_stack_00000058;
  SVDBox *in_stack_00000064;
  CMatrix3x3f *in_stack_0000006c;
  double dVar12;
  double dVar13;
  uint uVar14;
  
  this_ptr->set_file_version = 0x1c;
  file = engine_dosio_c_getFile_FUN_00481a50("models",filename,"wt");
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0x6d6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonSet::Unable to save output");
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",this_ptr->set_file_version);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%f\n",(double)this_ptr->set_scale_factor);
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
             (double)g_CWaterPtr->tile_size);
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
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"lightCount\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  iVar10 = 0;
  if (0 < this_ptr->light_count) {
    this_ptr_00 = this_ptr->lights;
    do {
      core_setutil_cpp_C3DSLight_save_FUN_00587090(this_ptr_00,file);
      iVar10 = iVar10 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar10 < this_ptr->light_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"cameraCount\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  iVar10 = 0;
  if (0 < this_ptr->camera_count) {
    pCVar6 = this_ptr->cameras;
    do {
      core_setutil_cpp_C3DSCamera_save_FUN_00585a40(pCVar6,file);
      iVar10 = iVar10 + 1;
      pCVar6 = pCVar6 + 1;
    } while (iVar10 < this_ptr->camera_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"Room size info\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",this_ptr->room_reverb_type);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",this_ptr->room_count);
  iVar10 = 0;
  if (0 < this_ptr->room_count) {
    in_stack_00000050 = this_ptr->rooms;
    in_stack_00000058 = &this_ptr->rooms[0].rotation_matrix;
    do {
      pSVar4 = in_stack_00000050;
      dVar13 = (double)in_stack_00000050[iVar10].position.z;
      dVar12 = (double)in_stack_00000050[iVar10].position.y;
      crt_stdio_c_fprintf_FUN_005fe6d0(file,"%g,%g,%g\n");
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file,"%g,%g,%g\n",(double)pSVar4[iVar10].extents.x,
                 (double)pSVar4[iVar10].extents.y,(double)pSVar4[iVar10].extents.z,SUB84 /* extract 2-byte value */(dVar12,0),
                 (int)((ulonglong)dVar12 >> 0x20),SUB84 /* extract 2-byte value */(dVar13,0),(int)((ulonglong)dVar13 >> 0x20));
      core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                (in_stack_0000004c,(CVector3f *)&stack0x00000034);
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file,"%g,%g,%g\n",(double)in_stack_00000038,(double)in_stack_00000040,
                 SUB84 /* extract 2-byte value */((double)in_stack_0000003c,0),
                 (int)((ulonglong)(double)in_stack_0000003c >> 0x20));
      crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",pSVar4[iVar10].field4_0x40);
      iVar10 = iVar10 + 1;
      in_stack_00000058 = (CMatrix3x3f *)((int)(in_stack_00000058 + 1) + 0x20);
    } while (iVar10 < this_ptr->room_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"Default ground type\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",this_ptr->default_ground_type);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"Default master reverb\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",this_ptr->default_master_reverb);
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"Virtual director boxes\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n",this_ptr->vdir_box_count);
  iVar10 = 0;
  if (0 < this_ptr->vdir_box_count) {
    in_stack_00000064 = this_ptr->vdir_boxes;
    in_stack_0000006c = &this_ptr->vdir_boxes[0].rotation_matrix;
    do {
      pSVar5 = in_stack_00000064;
      dVar13 = (double)in_stack_00000064[iVar10].position.z;
      uVar14 = (uint)((ulonglong)(double)in_stack_00000064[iVar10].position.y >> 0x20);
      crt_stdio_c_fprintf_FUN_005fe6d0(file,"%g,%g,%g\n");
      dVar12 = (double)pSVar5[iVar10].extents.z;
      dVar1 = (double)pSVar5[iVar10].extents.y;
      dVar2 = (double)pSVar5[iVar10].extents.x;
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file,"%g,%g,%g\n",SUB84 /* extract 2-byte value */(dVar2,0),(int)((ulonglong)dVar2 >> 0x20),SUB84 /* extract 2-byte value */(dVar1,0)
                 ,(int)((ulonglong)dVar1 >> 0x20),SUB84 /* extract 2-byte value */(dVar12,0),(int)((ulonglong)dVar12 >> 0x20),
                 uVar14,SUB84 /* extract 2-byte value */(dVar13,0),(int)((ulonglong)dVar13 >> 0x20));
      core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                ((CMatrix3x3f *)in_stack_00000064,(CVector3f *)&stack0x00000044);
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file,"%g,%g,%g\n",SUB84 /* extract 2-byte value */((double)in_stack_00000048,0),
                 (int)((ulonglong)(double)in_stack_00000048 >> 0x20),
                 SUB84 /* extract 2-byte value */((double)(float)in_stack_00000050,0),
                 (int)((ulonglong)(double)(float)in_stack_00000050 >> 0x20),
                 SUB84 /* extract 2-byte value */((double)(float)in_stack_0000004c,0),
                 (int)((ulonglong)(double)(float)in_stack_0000004c >> 0x20));
      iVar10 = iVar10 + 1;
      in_stack_0000006c = (CMatrix3x3f *)((int)(in_stack_0000006c + 1) + 0x20);
    } while (iVar10 < this_ptr->vdir_box_count);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"PVS list\n");
  iVar10 = 0;
  if (0 < this_ptr->camera_count) {
    pCVar6 = this_ptr->cameras;
    do {
      core_setutil_cpp_C3DSCamera_savePVS_FUN_00587450(pCVar6,file);
      iVar10 = iVar10 + 1;
      pCVar6 = pCVar6 + 1;
    } while (iVar10 < this_ptr->camera_count);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\setedit.cpp",0x74d);
  pcVar11 = &stack0xfffffff0;
  pcVar9 = &stack0xfffffff0;
  pcVar7 = this_ptr->geometry_filename;
  do {
    cVar3 = *pcVar7;
    *pcVar11 = cVar3;
    pcVar8 = &stack0xfffffff0;
    if (cVar3 == '\0') break;
    cVar3 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar11[1] = cVar3;
    pcVar11 = pcVar11 + 2;
    pcVar8 = &stack0xfffffff0;
  } while (cVar3 != '\0');
  do {
    pcVar11 = pcVar8;
    if (*pcVar8 == '.') goto LAB_0057a874;
    if (*pcVar8 == '\0') break;
    pcVar11 = pcVar8 + 1;
    if (*pcVar11 == '.') goto LAB_0057a874;
    pcVar8 = pcVar8 + 2;
  } while (*pcVar11 != '\0');
  pcVar11 = (char *)0x0;
LAB_0057a874:
  if (pcVar11 == (char *)0x0) {
    do {
      pcVar11 = pcVar9;
      if (*pcVar9 == '\0') goto LAB_0057a87e;
      if (*pcVar9 == '\0') break;
      pcVar11 = pcVar9 + 1;
      if (*pcVar11 == '\0') goto LAB_0057a87e;
      pcVar9 = pcVar9 + 2;
    } while (*pcVar11 != '\0');
    pcVar11 = (char *)0x0;
  }
LAB_0057a87e:
  pcVar9 = ".zth";
  do {
    cVar3 = *pcVar9;
    *pcVar11 = cVar3;
    if (cVar3 == '\0') break;
    cVar3 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar11[1] = cVar3;
    pcVar11 = pcVar11 + 2;
  } while (cVar3 != '\0');
  core_setdir_cpp_CDemonSet_saveThumbs_FUN_00575f60(this_ptr);
  core_setdir_cpp_CDemonSet_writeThumbs_FUN_00575e40(this_ptr,&stack0xfffffff4);
  return;
}
