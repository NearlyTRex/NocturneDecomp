// Name: core_skeledit.cpp_CDeformableModel_FUN_0058b8e0
// Address: 0058b8e0
// Address Range: [[0058b8e0, 0058b9a7]]
// Convention: __cdecl
// Signature: int __cdecl core_skeledit_cpp_CDeformableModel_FUN_0058b8e0(CDeformableModel *this_ptr)

#include "nocturne.h"

int __cdecl core_skeledit_cpp_CDeformableModel_FUN_0058b8e0(CDeformableModel *this_ptr)

{
  int iVar1;
  int iVar2;
  char *path_buffer;
  _FILE *in_stack_00000008;
  char local_214 [260];
  char local_110 [256];
  
  __STK();
  iVar2 = 1;
  do {
    iVar1 = _fgetc(in_stack_00000008);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  iVar2 = 0;
  if (0 < this_ptr->num_textures) {
    path_buffer = this_ptr->texture_sets[0].textures[0].texture_variants[0].texture_name;
    do {
      iVar1 = _fscanf(in_stack_00000008,"%[^\n]\n",local_214);
      if (iVar1 != 1) {
        return 0;
      }
      splitpath(local_214,(char *)0x0,(char *)0x0,local_110,(char *)0x0);
      iVar2 = iVar2 + 1;
      makepath(path_buffer,(char *)0x0,(char *)0x0,local_110,".raw")
      ;
      path_buffer = path_buffer + 0x48;
    } while (iVar2 < this_ptr->num_textures);
  }
  return 1;
}
