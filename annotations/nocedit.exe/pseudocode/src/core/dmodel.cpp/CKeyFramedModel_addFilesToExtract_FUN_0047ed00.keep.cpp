// Name: core_dmodel.cpp_CKeyFramedModel_addFilesToExtract_FUN_0047ed00
// Address: 0047ed00
// MANUAL RECONSTRUCTION
// Address Range: [[0047ed00, 0047edc7]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_addFilesToExtract_FUN_0047ed00(CKeyFramedModel *this_ptr,_FILE *dependency_file,int skip_raw_files)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_addFilesToExtract_FUN_0047ed00(CKeyFramedModel *this_ptr,_FILE *dependency_file,int skip_raw_files)

{
  int iVar3;
  char *pcVar4;
  char *pcVar6;
  char *pcVar2;
  char local_d8 [200];

  iVar3 = 0;
  if (0 < this_ptr->texture_count) {
    pcVar4 = this_ptr->texture_list[0].textures[0].texture_name;
    pcVar2 = pcVar4;
    do {
      strcpy(local_d8,pcVar4);
      pcVar6 = strchr(local_d8,'.');
      if (pcVar6 != (char *)0x0) {
        *pcVar6 = '\0';
      }
      if (skip_raw_files == 0) {
        _fprintf(dependency_file,"ART\\%s.RAW\n",local_d8);
      }
      _fprintf(dependency_file,"ART\\%s.ACT\n",local_d8);
      iVar3 = iVar3 + 1;
      pcVar4 = pcVar2 + 0x48;
      pcVar2 = pcVar4;
    } while (iVar3 < this_ptr->texture_count);
  }
  return;
}
