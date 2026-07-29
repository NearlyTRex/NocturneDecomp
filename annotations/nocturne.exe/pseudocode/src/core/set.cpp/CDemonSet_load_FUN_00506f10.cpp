// Name: core_set.cpp_CDemonSet_load_FUN_00506f10
// Address: 00506f10
// Address Range: [[00506f10, 00507c77]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_load_FUN_00506f10(CDemonSet *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_load_FUN_00506f10(CDemonSet *this_ptr,char *filename)

{
  float fVar1;
  char cVar2;
  CTerrain *this_ptr_00;
  char *pcVar3;
  _FILE *p_Var4;
  CDemonSet *pCVar5;
  C3DSLight *this_ptr_01;
  C3DSCamera *pCVar6;
  char *pcVar7;
  CVector3f *this_ptr_02;
  char *pcVar8;
  CDemonActor **ppCVar9;
  int iVar10;
  char local_228 [256];
  char local_128 [100];
  char local_c4 [100];
  CVector3f local_60;
  CVector3f local_54;
  CDemonActor **local_44;
  CDemonActor **local_40;
  float *local_3c;
  CDemonActor **local_38;
  CMatrix3x3f *local_34;
  float *local_30;
  CDemonActor **local_2c;
  CDemonActor **local_28;
  float *local_24;
  CDemonActor **local_20;
  CVector3f *local_1c;
  CDemonActor **local_18;
  float *local_14;
  
  iVar10 = 0;
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Loading set");
  core_level_cpp_CLevelLoader_update_FUN_004c59e0((CLevelLoader *)INT_005baca0,pcVar3,iVar10);
  core_set_cpp_CDemonSet_clear_FUN_00506ec0(this_ptr);
  p_Var4 = engine_dosio_cpp_getFile_FUN_00456a60("models",filename,"rt");
  if (p_Var4 == (_FILE *)0x0) {
    PTR_01cc4800 = "..\\core\\set.cpp";
    INT_01cc4804 = 0x11b;
    core_main_c_FUN_004c8440("CDemonSet::Unable to open %s",filename);
  }
  _fscanf(p_Var4,"%d\n");
  _fscanf(p_Var4,"%f\n");
  _fscanf(p_Var4,"%s\n");
  _fscanf(p_Var4,"%s\n");
  _fscanf(p_Var4,"%f\n");
  if (this_ptr->renderable_actors[0x6f5] == (CDemonActor *)0x0) {
    _fgets(local_228,0xff,p_Var4);
    _fgets(local_228,0xff,p_Var4);
    _fgets(local_228,0xff,p_Var4);
  }
  if ((int)this_ptr->renderable_actors[0x6f5] < 0x11) {
    _fgets(local_228,0xff,p_Var4);
    _fscanf(p_Var4,"%d,%d,%d,%d\n");
    _fgets(local_228,0xff,p_Var4);
    _fscanf(p_Var4,"%f,%f,%f\n");
    _fscanf(p_Var4,"%f,%f,%f,%f\n");
    this_ptr->renderable_actors[0x6de] = (CDemonActor *)0x42480000;
  }
  else {
    core_dcamera_cpp_loadCameraFog_FUN_00447d10
              ((SFog *)(this_ptr->renderable_actors + 0x6d6),p_Var4,
               (int)this_ptr->renderable_actors[0x6f5]);
  }
  _fgets(local_228,0xff,p_Var4);
  _fscanf(p_Var4,"%f,%f\n");
  _fgets(local_228,0xff,p_Var4);
  _fscanf(p_Var4,"%d,%s\n");
  if ((int)this_ptr->renderable_actors[0x6f5] < 5) {
    iVar10 = _strnicmp(local_128,"ndun",4);
    if (iVar10 == 0) {
      *0x02DD1210 = 1;
    }
    else {
      *0x02DD1210 = 0;
    }
  }
  else {
    _fgets(local_228,0xff,p_Var4);
    _fscanf(p_Var4,"%d\n");
  }
  if ((int)this_ptr->renderable_actors[0x6f5] < 6) {
    this_ptr->sorted_render_actors[0x6d6] = (CDemonActor *)0x1;
  }
  else {
    _fgets(local_228,0xff,p_Var4);
    _fscanf(p_Var4,"%d\n");
  }
  ppCVar9 = this_ptr->sorted_render_actors + 0x6d7;
  if ((int)this_ptr->renderable_actors[0x6f5] < 0xc) {
    pcVar3 = "NITESKY.RAW";
    do {
      cVar2 = *pcVar3;
      *(char *)ppCVar9 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      *(char *)((int)ppCVar9 + 1) = cVar2;
      ppCVar9 = (CDemonActor **)((int)ppCVar9 + 2);
    } while (cVar2 != '\0');
    this_ptr->sorted_render_actors[0x6df] = (CDemonActor *)0x4000;
  }
  else {
    _fscanf(p_Var4,"%d,%s\n");
  }
  ppCVar9 = this_ptr->renderable_actors + 0x75e;
  if ((int)this_ptr->renderable_actors[0x6f5] < 0xd) {
    pcVar3 = "none";
    this_ptr->renderable_actors[0x75d] = (CDemonActor *)0x0;
    do {
      cVar2 = *pcVar3;
      *(char *)ppCVar9 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      *(char *)((int)ppCVar9 + 1) = cVar2;
      ppCVar9 = (CDemonActor **)((int)ppCVar9 + 2);
    } while (cVar2 != '\0');
  }
  else {
    _fgets(local_228,0xff,p_Var4);
    _fscanf(p_Var4,"%d,%s\n");
  }
  if ((int)this_ptr->renderable_actors[0x6f5] < 0x19) {
    this_ptr->sorted_render_actors[0x6e6] = (CDemonActor *)0x0;
  }
  else {
    _fgets(local_228,0xff,p_Var4);
    _fscanf(p_Var4,"%d\n");
  }
  iVar10 = _strnicmp(local_128,"train",5);
  this_ptr_00 = 0x02DD10C8;
  if (iVar10 == 0) {
    this_ptr->renderable_actors[0x6f4] = (CDemonActor *)0x1;
    core_terrain_cpp_CTerrain_init_FUN_005492b0(this_ptr_00);
  }
  else {
    core_terrain_cpp_CTerrain_free_FUN_005492f0(0x02DD10C8);
    this_ptr->renderable_actors[0x6f4] = (CDemonActor *)0x0;
  }
  if (10 < (int)this_ptr->renderable_actors[0x6f5]) {
    _fgets(local_228,0xff,p_Var4);
  }
  iVar10 = 0;
  _fscanf(p_Var4,"%d\n");
  if (0 < (int)this_ptr->cameras[0xf7].position.y) {
    this_ptr_01 = (C3DSLight *)&this_ptr->cameras[0xf7].position.z;
    do {
      iVar10 = iVar10 + 1;
      core_setutil_cpp_C3DSLight_load_FUN_00514a70(this_ptr_01,p_Var4);
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar10 < (int)this_ptr->cameras[0xf7].position.y);
  }
  if (10 < (int)this_ptr->renderable_actors[0x6f5]) {
    _fgets(local_228,0xff,p_Var4);
  }
  iVar10 = 0;
  _fscanf(p_Var4,"%d\n");
  if (0 < this_ptr->camera_count) {
    pCVar6 = this_ptr->cameras;
    do {
      iVar10 = iVar10 + 1;
      core_setutil_cpp_C3DSCamera_load_FUN_005144e0(pCVar6,p_Var4);
      pCVar6 = (C3DSCamera *)&pCVar6->enabled;
    } while (iVar10 < this_ptr->camera_count);
  }
  if ((int)this_ptr->renderable_actors[0x6f5] < 1) {
    this_ptr->renderable_actors[0x778] = (CDemonActor *)0x0;
    iVar10 = _strnicmp(local_128,"mauso",5);
    if (iVar10 == 0) {
      this_ptr->renderable_actors[0x778] = (CDemonActor *)0x2;
    }
    iVar10 = _strnicmp(local_128,"h109",4);
    if (iVar10 == 0) {
      this_ptr->renderable_actors[0x778] = (CDemonActor *)0x0;
    }
    iVar10 = _strnicmp(local_128,"smill",5);
    if (iVar10 == 0) {
      this_ptr->renderable_actors[0x778] = (CDemonActor *)0x3;
    }
    iVar10 = _strnicmp(local_128,"pier59",6);
    if (iVar10 == 0) {
      this_ptr->renderable_actors[0x778] = (CDemonActor *)0x0;
    }
    iVar10 = _strnicmp(local_128,"ndun",4);
    if (iVar10 == 0) {
      this_ptr->renderable_actors[0x778] = (CDemonActor *)0x3;
    }
    this_ptr->renderable_actors[0x779] = (CDemonActor *)0x0;
  }
  else {
    _fgets(local_228,0xff,p_Var4);
    _fscanf(p_Var4,"%d\n");
    iVar10 = 0;
    _fscanf(p_Var4,"%d\n");
    if (0 < (int)this_ptr->renderable_actors[0x779]) {
      local_38 = this_ptr->renderable_actors + 0x77a;
      local_40 = this_ptr->renderable_actors + 0x78a;
      ppCVar9 = this_ptr->renderable_actors + 0x780;
      local_18 = this_ptr->renderable_actors + 0x77d;
      local_2c = this_ptr->renderable_actors + 0x77e;
      local_28 = this_ptr->renderable_actors + 0x77f;
      local_20 = this_ptr->renderable_actors + 0x77b;
      local_44 = this_ptr->renderable_actors + 0x77c;
      do {
        _fscanf(p_Var4,"%f,%f,%f\n");
        _fscanf(p_Var4,"%f,%f,%f\n");
        _fscanf(p_Var4,"%f,%f,%f\n");
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
                  ((CMatrix3x3f *)ppCVar9,&local_54);
        iVar10 = iVar10 + 1;
        _fscanf(p_Var4,"%d\n");
        ppCVar9 = ppCVar9 + 0x11;
        local_40 = local_40 + 0x11;
        local_18 = local_18 + 0x11;
        local_2c = local_2c + 0x11;
        local_28 = local_28 + 0x11;
        local_20 = local_20 + 0x11;
        local_44 = local_44 + 0x11;
      } while (iVar10 < (int)this_ptr->renderable_actors[0x779]);
    }
  }
  if ((int)this_ptr->renderable_actors[0x6f5] < 3) {
    this_ptr->vdir_boxes[0xeb].extents.z = 2.8026e-45;
    iVar10 = _strnicmp(local_128,"mauso",5);
    if (iVar10 == 0) {
      this_ptr->vdir_boxes[0xeb].extents.z = 1.12104e-44;
    }
    iVar10 = _strnicmp(local_128,"h109",4);
    if (iVar10 == 0) {
      this_ptr->vdir_boxes[0xeb].extents.z = 4.2039e-45;
    }
    iVar10 = _strnicmp(local_128,"smill",5);
    if (iVar10 == 0) {
      this_ptr->vdir_boxes[0xeb].extents.z = 2.8026e-45;
    }
    iVar10 = _strnicmp(local_128,"pier59",6);
    if (iVar10 == 0) {
      this_ptr->vdir_boxes[0xeb].extents.z = 9.80909e-45;
    }
    iVar10 = _strnicmp(local_128,"castle",6);
    if (iVar10 == 0) {
      this_ptr->vdir_boxes[0xeb].extents.z = 2.8026e-45;
    }
    iVar10 = _strnicmp(local_128,"ndun",4);
    if (iVar10 == 0) {
      this_ptr->vdir_boxes[0xeb].extents.z = 1.12104e-44;
    }
  }
  else {
    _fgets(local_228,0xff,p_Var4);
    _fscanf(p_Var4,"%d\n");
  }
  if ((int)this_ptr->renderable_actors[0x6f5] < 0x18) {
    this_ptr->renderable_actors[0x6e9] = (CDemonActor *)0x0;
  }
  else {
    _fgets(local_228,0xff,p_Var4);
    _fscanf(p_Var4,"%d\n");
  }
  if ((3 < (int)this_ptr->renderable_actors[0x6f5]) &&
     ((int)this_ptr->renderable_actors[0x6f5] < 10)) {
    core_setdir_cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00513ce0(this_ptr,p_Var4);
  }
  if ((int)this_ptr->renderable_actors[0x6f5] < 5) {
    this_ptr->rooms[5].extents.z = 0.0;
  }
  else {
    _fgets(local_228,0xff,p_Var4);
    iVar10 = 0;
    _fscanf(p_Var4,"%d\n");
    if (0 < (int)this_ptr->rooms[5].extents.z) {
      local_34 = &this_ptr->rooms[5].rotation_matrix;
      this_ptr_02 = this_ptr->rooms[5].rotation_matrix.m + 2;
      local_1c = this_ptr->rooms[5].rotation_matrix.m + 1;
      local_3c = &this_ptr->rooms[5].rotation_matrix.m[1].y;
      local_30 = &this_ptr->rooms[5].rotation_matrix.m[1].z;
      local_24 = &this_ptr->rooms[5].rotation_matrix.m[0].y;
      local_14 = &this_ptr->rooms[5].rotation_matrix.m[0].z;
      do {
        _fscanf(p_Var4,"%f,%f,%f\n");
        _fscanf(p_Var4,"%f,%f,%f\n");
        _fscanf(p_Var4,"%f,%f,%f\n");
        iVar10 = iVar10 + 1;
        core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
                  ((CMatrix3x3f *)this_ptr_02,&local_60);
        this_ptr_02 = (CVector3f *)&this_ptr_02[5].z;
        local_1c = (CVector3f *)((int)(local_1c + 5) + 8);
        local_3c = local_3c + 0x11;
        local_30 = local_30 + 0x11;
        local_24 = local_24 + 0x11;
        local_14 = local_14 + 0x11;
      } while (iVar10 < (int)this_ptr->rooms[5].extents.z);
    }
    core_setdir_cpp_CDemonSet_buildVdirBoxGroups_FUN_005141f0(this_ptr);
  }
  if (this_ptr->renderable_actors[0x6f5] == (CDemonActor *)0xe) {
    _fgets(local_228,0xff,p_Var4);
    _fgets(local_228,0xff,p_Var4);
  }
  if (0x13 < (int)this_ptr->renderable_actors[0x6f5]) {
    iVar10 = 0;
    _fgets(local_228,0xff,p_Var4);
    if (0 < this_ptr->camera_count) {
      pCVar6 = this_ptr->cameras;
      do {
        iVar10 = iVar10 + 1;
        core_setutil_cpp_C3DSCamera_loadPVS_FUN_00514800(pCVar6,p_Var4);
        pCVar6 = (C3DSCamera *)&pCVar6->enabled;
      } while (iVar10 < this_ptr->camera_count);
    }
  }
  _fclose(p_Var4);
  iVar10 = 0;
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Loading set geometry");
  core_level_cpp_CLevelLoader_update_FUN_004c59e0((CLevelLoader *)INT_005baca0,pcVar3,iVar10);
  pcVar3 = this_ptr->lights[199].filter_names[0x11] + 0x14;
  iVar10 = _stricmp(pcVar3,local_128);
  if (iVar10 == 0) {
    core_setcolid_cpp_CDemonSet_commitVoxelBuffer_FUN_00511b30(this_ptr);
  }
  else {
    pcVar7 = local_128;
    pcVar8 = pcVar3;
    do {
      cVar2 = *pcVar7;
      *pcVar8 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar8[1] = cVar2;
      pcVar8 = pcVar8 + 2;
    } while (cVar2 != '\0');
    p_Var4 = engine_dosio_cpp_getFile_FUN_00456a60("data",pcVar3,"rb");
    if (p_Var4 == (_FILE *)0x0) {
      engine_special_cpp_clearScreen_FUN_0052ee70();
      engine_2d_c_drawText_FUN_00402600("Warning!  No .GEO file.  Press any key",0,0);
      wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
      engine_2d_c_clearInputAndWait_FUN_00403f50();
      wincore_winrun_cpp_getNextKeypress_FUN_00558b00();
    }
    else {
      _fclose(p_Var4);
      core_dtrace_cpp_FUN_00467890(&DAT_01fba938,pcVar3);
    }
    core_path_cpp_resetAllPathMaps_FUN_004f1e90();
  }
  iVar10 = 0;
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Loading thumbs");
  pcVar7 = local_c4;
  core_level_cpp_CLevelLoader_update_FUN_004c59e0((CLevelLoader *)INT_005baca0,pcVar3,iVar10);
  pcVar3 = this_ptr->lights[199].filter_names[0x11] + 0x14;
  do {
    cVar2 = *pcVar3;
    *pcVar7 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
  } while (cVar2 != '\0');
  pcVar3 = local_c4;
  do {
    pcVar7 = pcVar3;
    if (*pcVar3 == '.') goto LAB_00507898;
    if (*pcVar3 == '\0') break;
    pcVar7 = pcVar3 + 1;
    if (*pcVar7 == '.') goto LAB_00507898;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_00507898:
  if (pcVar7 == (char *)0x0) {
    pcVar3 = local_c4;
    do {
      pcVar7 = pcVar3;
      if (*pcVar3 == '\0') goto LAB_005078c1;
      if (*pcVar3 == '\0') break;
      pcVar7 = pcVar3 + 1;
      if (*pcVar7 == '\0') goto LAB_005078c1;
      pcVar3 = pcVar3 + 2;
    } while (*pcVar7 != '\0');
    pcVar7 = (char *)0x0;
  }
LAB_005078c1:
  pcVar3 = ".zth";
  do {
    cVar2 = *pcVar3;
    *pcVar7 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
  } while (cVar2 != '\0');
  core_setdir_cpp_CDemonSet_refreshThumbs_FUN_00513610(this_ptr,local_c4);
  if (this_ptr->renderable_actors[0x6ef] != (CDemonActor *)0x0) {
    core_dmodel_cpp_CKeyFramedModel_load_FUN_00452650
              ((CKeyFramedModel *)0x1fbacc8,(char *)(this_ptr->renderable_actors + 0x6f0));
  }
  iVar10 = 0;
  pCVar5 = this_ptr;
  if (0 < this_ptr->camera_count) {
    do {
      fVar1 = *(float *)(this_ptr->lights[199].filter_names[0x13] + 0x24);
      pCVar5->cameras[0].ambient_value = 0.0;
      pCVar5->cameras[0].vdir_zone = 1;
      iVar10 = iVar10 + 1;
      pCVar5->cameras[0].projection_scale = fVar1;
      pCVar5 = (CDemonSet *)&pCVar5->cameras[0].vdir_zone;
    } while (iVar10 < this_ptr->camera_count);
  }
  return;
}
