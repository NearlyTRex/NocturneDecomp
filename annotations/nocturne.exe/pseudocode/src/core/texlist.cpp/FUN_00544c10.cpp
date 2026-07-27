// Name: core_texlist.cpp_FUN_00544c10
// Address: 00544c10
// Address Range: [[00544c10, 00544d62]]
// Convention: unknown
// Signature: void core_texlist_cpp_FUN_00544c10(int *param_1,char *param_2)

#include "nocturne.h"

void core_texlist_cpp_FUN_00544c10(int *param_1,char *param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  char local_114 [256];
  int local_14;
  
  pcVar6 = local_114;
  do {
    cVar2 = *param_2;
    *pcVar6 = cVar2;
    pcVar4 = local_114;
    if (cVar2 == '\0') break;
    cVar2 = param_2[1];
    param_2 = param_2 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
    pcVar4 = local_114;
  } while (cVar2 != '\0');
  do {
    pcVar6 = pcVar4;
    if (*pcVar4 == '.') goto LAB_00544c60;
    if (*pcVar4 == '\0') break;
    pcVar6 = pcVar4 + 1;
    if (*pcVar6 == '.') goto LAB_00544c60;
    pcVar4 = pcVar4 + 2;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)0x0;
LAB_00544c60:
  if (pcVar6 == (char *)0x0) {
    PTR_01cc4800 = "..\\core\\texlist.cpp";
    INT_01cc4804 = 0xad;
    core_main_c_FUN_004c8440("CTextureList::save - No extension found");
  }
  pcVar4 = ".tex";
  do {
    cVar2 = *pcVar4;
    *pcVar6 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  local_14 = engine_dosio_cpp_getFile_FUN_00456a60("data",local_114,"wt");
  if (local_14 == 0) {
    PTR_01cc4800 = "..\\core\\texlist.cpp";
    INT_01cc4804 = 0xb6;
    core_main_c_FUN_004c8440("CTextureList::save - Bad filename!");
  }
  iVar7 = 0;
  _fprintf(local_14,"%d\n",*param_1);
  if (0 < *param_1) {
    piVar3 = param_1;
    piVar5 = param_1 + 3;
    do {
      piVar1 = piVar3 + 0x1771;
      piVar3 = piVar3 + 1;
      iVar7 = iVar7 + 1;
      _fprintf(local_14,"%s,%d\n",piVar5,*piVar1);
      piVar5 = piVar5 + 6;
    } while (iVar7 < *param_1);
  }
  _fclose(local_14);
  return;
}
