// Name: shape_meshlod.cpp_CLodMesh_parseS3DFileVariant_FUN_0051adf0
// Address: 0051adf0
// Address Range: [[0051adf0, 0051b078]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_parseS3DFileVariant_FUN_0051adf0(CLodMesh *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_parseS3DFileVariant_FUN_0051adf0(CLodMesh *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int iVar3;
  char *path_buffer;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char local_224 [260];
  char local_120 [256];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar4 = 2;
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  iVar5 = 1;
  do {
    iVar3 = _fgetc(file_handle);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar5 = iVar5 + -1, 0 < iVar5));
  _fscanf(file_handle,"%d,%*d\n",&local_20);
  for (iVar5 = local_20 * 5 + 2; 0 < iVar5; iVar5 = iVar5 + -1) {
    do {
      iVar3 = _fgetc(file_handle);
      if (iVar3 < 0) goto LAB_0051ae8f;
    } while (iVar3 != 10);
  }
LAB_0051ae8f:
  iVar5 = 1;
  do {
    iVar3 = _fgetc(file_handle);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar5 = iVar5 + -1, 0 < iVar5));
  _fscanf(file_handle,"%d,%d,%d\n",&local_1c,&local_18,&local_14);
  iVar5 = 1;
  shape_meshlod_cpp_CLodMesh_allocate_FUN_00515ac0(this_ptr,local_18,local_14,local_1c);
  do {
    iVar3 = _fgetc(file_handle);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar5 = iVar5 + -1, 0 < iVar5));
  iVar5 = 0;
  if (0 < this_ptr->lod_texture_count) {
    iVar3 = 0;
    do {
      _fscanf(file_handle,"%[^\n]\n",local_224);
      splitpath(local_224,(char *)0x0,(char *)0x0,local_120,(char *)0x0);
      path_buffer = this_ptr->lod_textures->textures[0].texture_name + iVar3;
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 0x48;
      makepath(path_buffer,(char *)0x0,(char *)0x0,local_120,"raw")
      ;
    } while (iVar5 < this_ptr->lod_texture_count);
  }
  iVar5 = 1;
  do {
    iVar3 = _fgetc(file_handle);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar5 = iVar5 + -1, 0 < iVar5));
  iVar5 = 0;
  if (0 < this_ptr->tri_count) {
    iVar3 = 0;
    do {
      iVar2 = (int)this_ptr->tri_data->attribute_indices + iVar3;
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 0x8c;
      _fscanf(file_handle,"%d, %d,%f,%f, %d,%f,%f, %d,%f,%f\n",iVar2,iVar2 + 0x10,iVar2 + 0x1c,
                 iVar2 + 0x20,iVar2 + 0x14,iVar2 + 0x24,iVar2 + 0x28,iVar2 + 0x18,iVar2 + 0x2c,
                 iVar2 + 0x30);
    } while (iVar5 < this_ptr->tri_count);
  }
  iVar5 = 1;
  do {
    iVar3 = _fgetc(file_handle);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar5 = iVar5 + -1, 0 < iVar5));
  iVar5 = 0;
  if (0 < this_ptr->vertex_count) {
    iVar3 = 0;
    do {
      pcVar3 = this_ptr->vertex_data->lod_workspace + iVar3 + -0x10;
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 0x4c4;
      _fscanf(file_handle,"%f,%f,%f\n",pcVar3,pcVar3 + 4,pcVar3 + 8);
    } while (iVar5 < this_ptr->vertex_count);
  }
  this_ptr->active_attribute_count = 1;
  this_ptr->sort_attribute_count = 2;
  this_ptr->extra_attribute_count = 0;
  shape_meshlod_cpp_CLodMesh_postprocessMesh_FUN_0051b330(this_ptr);
  return;
}
