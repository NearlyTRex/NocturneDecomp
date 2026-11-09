// Name: core_texlist.cpp_FUN_00596390
// Address: 00596390
// Address Range: [[00596390, 005964e2]]
// Convention: unknown
// Signature: void core_texlist_cpp_FUN_00596390(int *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_texlist_cpp_FUN_00596390(int *param_1,char *param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  char acStack_114 [256];
  _FILE *p_Stack_14;
  
  pcVar6 = acStack_114;
  do {
    cVar2 = *param_2;
    *pcVar6 = cVar2;
    pcVar4 = acStack_114;
    if (cVar2 == '\0') break;
    cVar2 = param_2[1];
    param_2 = param_2 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
    pcVar4 = acStack_114;
  } while (cVar2 != '\0');
  do {
    pcVar6 = pcVar4;
    if (*pcVar4 == '.') goto LAB_005963e0;
    if (*pcVar4 == '\0') break;
    pcVar6 = pcVar4 + 1;
    if (*pcVar6 == '.') goto LAB_005963e0;
    pcVar4 = pcVar4 + 2;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)0x0;
LAB_005963e0:
  if (pcVar6 == (char *)0x0) {
    _DAT_01d1d400 = "..\\core\\texlist.cpp";
    _DAT_01d1d404 = 0xad;
    core_main_c_FUN_005030e0("CTextureList::save - No extension found");
  }
  pcVar4 = (char *)0x5f787f;
  do {
    cVar2 = *pcVar4;
    *pcVar6 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar6[1] = cVar2;
    pcVar6 = pcVar6 + 2;
  } while (cVar2 != '\0');
  p_Stack_14 = engine_dosio_cpp_FUN_00479180((char *)0x5f7887,acStack_114,(char *)0x5f7884);
  if (p_Stack_14 == (_FILE *)0x0) {
    _DAT_01d1d400 = "..\\core\\texlist.cpp";
    _DAT_01d1d404 = 0xb6;
    core_main_c_FUN_005030e0("CTextureList::save - Bad filename!");
  }
  iVar7 = 0;
  FUN_005c03c0(p_Stack_14,0x5f78c3,*param_1);
  if (0 < *param_1) {
    piVar3 = param_1;
    piVar5 = param_1 + 3;
    do {
      piVar1 = piVar3 + 0x1771;
      piVar3 = piVar3 + 1;
      iVar7 = iVar7 + 1;
      FUN_005c03c0(p_Stack_14,0x5f78c7,piVar5,*piVar1);
      piVar5 = piVar5 + 6;
    } while (iVar7 < *param_1);
  }
  _fclose(p_Stack_14);
  return;
}
