// Name: core_dmodel.cpp_CKeyFramedModel_addFilesToExtract_FUN_0047ed00
// Address: 0047ed00
// Address Range: [[0047ed00, 0047edc7]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_addFilesToExtract_FUN_0047ed00(CKeyFramedModel *this_ptr,_FILE *dependency_file,int skip_raw_files)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_addFilesToExtract_FUN_0047ed00(CKeyFramedModel *this_ptr,_FILE *dependency_file,int skip_raw_files)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char local_d8 [200];
  
  iVar3 = 0;
  if (0 < this_ptr->texture_count) {
    pcVar4 = this_ptr->texture_list[0].textures[0].texture_name;
    pcVar6 = local_d8;
    pcVar2 = pcVar4;
LAB_0047ed2e:
    do {
      cVar1 = *pcVar4;
      *pcVar6 = cVar1;
      pcVar5 = local_d8;
      if (cVar1 != '\0') {
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar6[1] = cVar1;
        pcVar5 = local_d8;
        pcVar6 = pcVar6 + 2;
        if (cVar1 != '\0') goto LAB_0047ed2e;
      }
      do {
        pcVar6 = pcVar5;
        if (*pcVar5 == '.') goto LAB_0047ed61;
        if (*pcVar5 == '\0') break;
        pcVar6 = pcVar5 + 1;
        if (*pcVar6 == '.') goto LAB_0047ed61;
        pcVar5 = pcVar5 + 2;
      } while (*pcVar6 != '\0');
      pcVar6 = (char *)0x0;
LAB_0047ed61:
      if (pcVar6 != (char *)0x0) {
        *pcVar6 = '\0';
      }
      if (skip_raw_files == 0) {
        _fprintf(dependency_file,"ART\\%s.RAW\n",local_d8);
      }
      _fprintf(dependency_file,"ART\\%s.ACT\n",local_d8);
      iVar3 = iVar3 + 1;
      pcVar4 = pcVar2 + 0x48;
      pcVar6 = local_d8;
      pcVar2 = pcVar4;
    } while (iVar3 < this_ptr->texture_count);
  }
  return;
}
