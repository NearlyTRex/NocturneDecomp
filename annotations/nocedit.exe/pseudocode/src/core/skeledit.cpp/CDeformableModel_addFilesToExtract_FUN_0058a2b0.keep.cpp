// Name: core_skeledit.cpp_CDeformableModel_addFilesToExtract_FUN_0058a2b0
// Address: 0058a2b0
// MANUAL RECONSTRUCTION
// Address Range: [[0058a2b0, 0058a3c8]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModel_addFilesToExtract_FUN_0058a2b0(CDeformableModel *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CDeformableModel_addFilesToExtract_FUN_0058a2b0(CDeformableModel *this_ptr,_FILE *file_handle)

{
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar6;
  char local_2c [20];
  int local_18;
  STextureSet *local_14;

  _fprintf(file_handle,"DATA\\%s\n",this_ptr->model_name);
  local_18 = 0;
  if (0 < this_ptr->num_texture_sets) {
    local_14 = this_ptr->texture_sets;
    do {
      iVar3 = 0;
      if (0 < this_ptr->num_textures) {
        pcVar4 = local_14->textures[0].textures[0].texture_name;
        pcVar2 = pcVar4;
        do {
          strcpy(local_2c,pcVar4);
          pcVar6 = strchr(local_2c,'.');
          if (pcVar6 != (char *)0x0) {
            *pcVar6 = '\0';
          }
          _fprintf(file_handle,"ART\\%s.RAW\n",local_2c);
          _fprintf(file_handle,"ART\\%s.ACT\n",local_2c);
          iVar3 = iVar3 + 1;
          pcVar4 = pcVar2 + 0x48;
          pcVar2 = pcVar4;
        } while (iVar3 < this_ptr->num_textures);
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + 1;
    } while (local_18 < this_ptr->num_texture_sets);
  }
  return;
}
