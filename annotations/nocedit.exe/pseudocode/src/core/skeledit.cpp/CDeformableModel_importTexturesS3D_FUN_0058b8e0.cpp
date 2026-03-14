// Name: core_skeledit.cpp_CDeformableModel_importTexturesS3D_FUN_0058b8e0
// Address: 0058b8e0
// Address Range: [[0058b8e0, 0058b9a7]]
// Convention: __cdecl
// Signature: int __cdecl core_skeledit_cpp_CDeformableModel_importTexturesS3D_FUN_0058b8e0(CDeformableModel *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_skeledit_cpp_CDeformableModel_importTexturesS3D_FUN_0058b8e0(CDeformableModel *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int iVar3;
  int iVar2;
  int iVar4;
  char *path_buffer;
  char local_214 [260];
  char local_110 [256];
  
  iVar2 = 1;
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  iVar4 = 0;
  if (0 < this_ptr->num_textures) {
    path_buffer = this_ptr->texture_sets[0].textures[0].textures[0].texture_name;
    do {
      iVar3 = _fscanf(file_handle,"%[^\n]\n",local_214);
      if (iVar3 != 1) {
        return 0;
      }
      splitpath(local_214,(char *)0x0,(char *)0x0,local_110,(char *)0x0);
      iVar4 = iVar4 + 1;
      makepath(path_buffer,(char *)0x0,(char *)0x0,local_110,".raw")
      ;
      path_buffer = path_buffer + 0x48;
    } while (iVar4 < this_ptr->num_textures);
  }
  return 1;
}
