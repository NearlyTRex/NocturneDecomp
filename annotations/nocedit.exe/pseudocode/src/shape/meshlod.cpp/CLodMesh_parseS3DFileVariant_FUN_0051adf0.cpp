// Name: shape_meshlod.cpp_CLodMesh_parseS3DFileVariant_FUN_0051adf0
// Address: 0051adf0
// Address Range: [[0051adf0, 0051b078]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_parseS3DFileVariant_FUN_0051adf0(CLodMesh *this_ptr,FILE *file_handle)

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_parseS3DFileVariant_FUN_0051adf0(CLodMesh *this_ptr,FILE *file_handle)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char local_224 [260];
  char local_120 [256];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar4 = 2;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  iVar4 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d,%*d\n",&local_20);
  for (iVar4 = local_20 * 5 + 2; 0 < iVar4; iVar4 = iVar4 + -1) {
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
      if (iVar1 < 0) goto LAB_0051ae8f;
    } while (iVar1 != 10);
  }
LAB_0051ae8f:
  iVar4 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d,%d,%d\n",&local_1c,&local_18,&local_14);
  iVar4 = 1;
  shape_meshlod_cpp_CLodMesh_allocate_FUN_00515ac0(this_ptr,local_18,local_14,local_1c);
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  iVar4 = 0;
  if (0 < this_ptr->submesh_count) {
    iVar1 = 0;
    do {
      crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%[^\n]\n",local_224);
      crt_string_c_splitpath_FUN_005ff178(local_224,(char *)0x0,(char *)0x0,local_120,(char *)0x0);
      pcVar2 = this_ptr->submesh_data->texture_filename + iVar1;
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + 0x48;
      crt_file_c_makepath_FUN_005febfc(pcVar2,(char *)0x0,(char *)0x0,local_120,"raw");
    } while (iVar4 < this_ptr->submesh_count);
  }
  iVar4 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  iVar4 = 0;
  if (0 < this_ptr->tri_count) {
    iVar1 = 0;
    do {
      iVar3 = (int)this_ptr->tri_data->attribute_indices + iVar1;
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + 0x8c;
      crt_stdio_c_fscanf_FUN_005fe7c0
                (file_handle,"%d, %d,%f,%f, %d,%f,%f, %d,%f,%f\n",iVar3,iVar3 + 0x10,iVar3 + 0x1c,
                 iVar3 + 0x20,iVar3 + 0x14,iVar3 + 0x24,iVar3 + 0x28,iVar3 + 0x18,iVar3 + 0x2c,
                 iVar3 + 0x30);
    } while (iVar4 < this_ptr->tri_count);
  }
  iVar4 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  iVar4 = 0;
  if (0 < this_ptr->vertex_count) {
    iVar1 = 0;
    do {
      pcVar2 = this_ptr->vertex_data->lod_workspace + iVar1 + -0x10;
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + 0x4c4;
      crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f,%f\n",pcVar2,pcVar2 + 4,pcVar2 + 8);
    } while (iVar4 < this_ptr->vertex_count);
  }
  this_ptr->active_attribute_count = 1;
  this_ptr->sort_attribute_count = 2;
  this_ptr->reserved_attribute_count = 0;
  shape_meshlod_cpp_CLodMesh_postprocessMesh_FUN_0051b330(this_ptr);
  return;
}
