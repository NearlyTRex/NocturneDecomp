// Name: core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
// Address: 0047ed00
// Address Range: [[0047ed00, 0047edc7]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00(CKeyFramedModel * this_ptr, FILE * dependency_file, int skip_raw_files)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00
          (CKeyFramedModel *this_ptr,FILE *dependency_file,int skip_raw_files)

{
  char cVar1;
  char *pcVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char local_d8 [200];
  
  iVar3 = 0;
  if (0 < this_ptr->texture_count) {
    pcVar2 = this_ptr->texture_list[0].base.texture_name;
    do {
      pcVar6 = local_d8;
      pcVar4 = pcVar2;
      do {
        cVar1 = *pcVar4;
        *pcVar6 = cVar1;
        pcVar5 = local_d8;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
        pcVar5 = local_d8;
      } while (cVar1 != '\0');
      do {
        pcVar4 = pcVar5;
        if (*pcVar5 == '.') goto LAB_0047ed61;
        if (*pcVar5 == '\0') break;
        pcVar4 = pcVar5 + 1;
        if (*pcVar4 == '.') goto LAB_0047ed61;
        pcVar5 = pcVar5 + 2;
      } while (*pcVar4 != '\0');
      pcVar4 = (char *)0x0;
LAB_0047ed61:
      if (pcVar4 != (char *)0x0) {
        *pcVar4 = '\0';
      }
      if (skip_raw_files == 0) {
        crt_stdio_c_fprintf_FUN_005fe6d0(dependency_file,"ART\\%s.RAW\n",local_d8);
      }
      crt_stdio_c_fprintf_FUN_005fe6d0(dependency_file,"ART\\%s.ACT\n",local_d8);
      iVar3 = iVar3 + 1;
      pcVar2 = pcVar2 + 0x48;
    } while (iVar3 < (int)dependency_file[10]._link);
  }
  return;
}
