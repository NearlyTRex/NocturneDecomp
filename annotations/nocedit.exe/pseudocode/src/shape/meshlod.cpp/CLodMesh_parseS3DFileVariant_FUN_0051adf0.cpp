// Name: shape_meshlod.cpp_CLodMesh_parseS3DFileVariant_FUN_0051adf0
// Address: 0051adf0
// Address Range: [[0051adf0, 0051b078]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_parseS3DFileVariant_FUN_0051adf0(CLodMesh * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_parseS3DFileVariant_FUN_0051adf0(CLodMesh *this_ptr,FILE *file_handle)

{
  int iVar1;
  char *path_buffer;
  int iVar2;
  int unaff_EBX;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  int unaff_EDI;
  char acStack_114 [4];
  char acStack_110 [244];
  byte local_1c [4];
  int local_18;
  
  iVar3 = 2;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  iVar3 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%d,%*d\n",local_1c);
  for (iVar3 = local_18 * 5 + 2; 0 < iVar3; iVar3 = iVar3 + -1) {
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
      if (iVar1 < 0) goto LAB_0051ae8f;
    } while (iVar1 != 10);
  }
LAB_0051ae8f:
  iVar3 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%d,%d,%d\n",&stack0xfffffff0,&stack0xfffffff4,&stack0xfffffff8);
  iVar3 = 1;
  shape_meshlod_cpp_CLodMesh_allocate_FUN_00515ac0(this_ptr,unaff_ESI,unaff_EBX,unaff_EDI);
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  iVar3 = 0;
  if (0 < this_ptr->submesh_count) {
    iVar1 = 0;
    do {
      crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%[^\n]\n");
      crt_string_c_splitpath_FUN_005ff178
                (&stack0xfffffde8,(char *)0x0,(char *)0x0,acStack_114,(char *)0x0);
      path_buffer = this_ptr->submesh_data->texture_filename + iVar1;
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0x48;
      crt_file_c_makepath_FUN_005febfc
                (path_buffer,(char *)0x0,(char *)0x0,acStack_110,"raw");
    } while (iVar3 < this_ptr->submesh_count);
  }
  iVar3 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  iVar3 = 0;
  if (0 < this_ptr->tri_count) {
    iVar1 = 0;
    do {
      iVar2 = (int)this_ptr->tri_data->attribute_indices + iVar1;
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0x8c;
      crt_stdio_c_fscanf_FUN_005fe7c0
                (file_handle,"%d, %d,%f,%f, %d,%f,%f, %d,%f,%f\n","%d, %d,%f,%f, %d,%f,%f, %d,%f,%f\n",iVar2,
                 iVar2 + 0x10,iVar2 + 0x1c,iVar2 + 0x20,iVar2 + 0x14,iVar2 + 0x24,iVar2 + 0x28,
                 iVar2 + 0x18);
    } while (iVar3 < this_ptr->tri_count);
  }
  iVar3 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_handle);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar3 = iVar3 + -1, 0 < iVar3));
  iVar3 = 0;
  if (0 < this_ptr->vertex_count) {
    iVar1 = 0;
    do {
      iVar2 = iVar1 + -0x10;
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0x4c4;
      crt_stdio_c_fscanf_FUN_005fe7c0
                (file_handle,"%f,%f,%f\n","%f,%f,%f\n",
                 this_ptr->vertex_data->lod_workspace + iVar2);
    } while (iVar3 < this_ptr->vertex_count);
  }
  this_ptr->active_attribute_count = 1;
  this_ptr->sort_attribute_count = 2;
  this_ptr->reserved_attribute_count = 0;
  shape_meshlod_cpp_CLodMesh_postprocessMesh_FUN_0051b330(this_ptr);
  return;
}
