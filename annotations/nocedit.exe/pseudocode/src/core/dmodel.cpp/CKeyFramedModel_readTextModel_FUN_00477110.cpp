// Name: core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00477110
// Address: 00477110
// Address Range: [[00477110, 0047768b]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00477110(CKeyFramedModel * this_ptr, FILE * file)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_readTextModel_FUN_00477110(CKeyFramedModel *this_ptr,FILE *file)

{
  int iVar1;
  int iVar2;
  uchar *puVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  uchar local_28 [4];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar4 = 1;
  local_44 = -1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d\n",&local_44);
  if (local_44 < 5) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 0x128;
    core_main_c_displayErrorAndQuit_FUN_00506f10("KFM file is invalid version %d",local_44);
  }
  if (8 < local_44) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 299;
    core_main_c_displayErrorAndQuit_FUN_00506f10("KFM file is version %d, this .exe can only handle up to version %d",local_44,8);
  }
  iVar4 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file,"%d,%d,%d,%d,%d\n",&local_40,&local_3c,&local_38,&local_34,&local_30);
  core_dmodel_cpp_CKeyFramedModel_allocate_FUN_00477bf0
            (this_ptr,local_40,local_3c,local_38,local_34,local_30);
  iVar4 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d\n",&local_48);
  if (local_44 < 6) {
    this_ptr->transparent_pixel_flag = 0;
  }
  else {
    iVar4 = 1;
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
    crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d\n",&this_ptr->transparent_pixel_flag);
  }
  if (local_44 < 8) {
    this_ptr->disable_backface_culling = 0;
  }
  else {
    iVar4 = 1;
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
    crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d\n",&this_ptr->disable_backface_culling);
  }
  local_2c = 0;
  if (6 < local_44) {
    iVar4 = 1;
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
    crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d\n",&local_2c);
  }
  iVar4 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  iVar1 = 0;
  for (iVar4 = 0; iVar4 < this_ptr->vertex_count * this_ptr->frame_count; iVar4 = iVar4 + 1) {
    iVar2 = (int)this_ptr->vertex_list + iVar1;
    iVar1 = iVar1 + 0xc;
    crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d,%d,%d\n",iVar2,iVar2 + 4,iVar2 + 8);
  }
  iVar4 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  local_1c = 0;
  if (0 < this_ptr->poly_count) {
    local_20 = 0;
    local_24 = 0;
    do {
      local_14 = local_20 + (int)this_ptr->poly_vert_list;
      crt_stdio_c_fscanf_FUN_005fe7c0
                (file,"%d,%d",(int)this_ptr->poly_texture_index_list + local_24,local_14 + 4)
      ;
      iVar4 = 0;
      if (0 < *(int *)(local_14 + 4)) {
        local_18 = local_14 + 0x18;
        iVar1 = local_14 + 0x1c;
        iVar2 = local_14 + 0x20;
        do {
          crt_stdio_c_fscanf_FUN_005fe7c0(file,", %d,%d,%d",iVar4 * 0xc + local_18,iVar1,iVar2);
          iVar2 = iVar2 + 0xc;
          iVar4 = iVar4 + 1;
          iVar1 = iVar1 + 0xc;
        } while (iVar4 < *(int *)(local_14 + 4));
      }
      crt_stdio_c_fscanf_FUN_005fe7c0(file,"\n");
      local_24 = local_24 + 4;
      local_20 = local_20 + 0x48;
      local_1c = local_1c + 1;
    } while (local_1c < this_ptr->poly_count);
  }
  if (local_2c != 0) {
    puVar3 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                       (this_ptr->poly_count,"..\\core\\dmodel.cpp",0x177);
    this_ptr->env_map_opac_list = puVar3;
    if (puVar3 == (uchar *)0x0) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 0x178;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory for envMapOpacList");
    }
    iVar4 = 1;
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
    iVar4 = 0;
    if (0 < this_ptr->poly_count) {
      do {
        crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d\n",local_28);
        this_ptr->env_map_opac_list[iVar4] = local_28[0];
        iVar4 = iVar4 + 1;
      } while (iVar4 < this_ptr->poly_count);
    }
  }
  iVar4 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  iVar4 = 0;
  if (0 < this_ptr->texture_count) {
    pcVar5 = this_ptr->texture_list[0].base.texture_name;
    do {
      crt_stdio_c_fscanf_FUN_005fe7c0(file,"%[^\n]\n",pcVar5);
      iVar4 = iVar4 + 1;
      pcVar5 = pcVar5 + 0x48;
    } while (iVar4 < this_ptr->texture_count);
  }
  iVar4 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  iVar4 = 0;
  if (0 < this_ptr->part_count) {
    piVar6 = &this_ptr->part_list[0].poly_count;
    do {
      crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d,%d\n",this_ptr->part_list + iVar4,piVar6);
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 2;
    } while (iVar4 < this_ptr->part_count);
  }
  if ((file->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 0x197;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Error reading KFM model");
  }
  if (local_48 != 0) {
    core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830(this_ptr);
    return;
  }
  return;
}
