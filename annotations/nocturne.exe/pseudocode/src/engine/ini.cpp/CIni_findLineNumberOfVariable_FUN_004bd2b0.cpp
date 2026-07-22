// Name: engine_ini.cpp_CIni_findLineNumberOfVariable_FUN_004bd2b0
// Address: 004bd2b0
// Address Range: [[004bd2b0, 004bd47e]]
// Convention: unknown
// Signature: int engine_ini_cpp_CIni_findLineNumberOfVariable_FUN_004bd2b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_ini_cpp_CIni_findLineNumberOfVariable_FUN_004bd2b0(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char local_214 [256];
  byte local_114 [256];
  char *local_14;
  
  iVar5 = 0;
  bVar2 = false;
  *param_1 = 1;
  iVar3 = _fopen(param_4,"rt");
  if (iVar3 == 0) {
    _DAT_01cc4800 = "..\\engine\\ini.cpp";
    _DAT_01cc4804 = 0xf5;
    FUN_004c8440("cIni::FindLineNumberOfVariable: Unable to open input");
  }
  _sprintf(local_114,"[%s]\n",param_2);
  while (((*(byte *)(iVar3 + 0xc) & 0x10) == 0 &&
         (iVar4 = _fgets(local_214,0xff,iVar3), iVar4 != 0))) {
    iVar4 = _strcmp(local_214,local_114);
    if (iVar4 == 0) {
      bVar1 = *(byte *)(iVar3 + 0xc);
      bVar2 = false;
      goto LAB_004bd325;
    }
    iVar5 = iVar5 + 1;
  }
LAB_004bd3e0:
  _fclose(iVar3);
  if (bVar2) {
    return iVar5;
  }
  return 0;
LAB_004bd325:
  if (((bVar1 & 0x10) != 0) ||
     (iVar4 = _fgets(local_214,0xff,iVar3), pcVar7 = local_214, iVar4 == 0))
  goto LAB_004bd3e0;
  do {
    pcVar6 = pcVar7;
    if (*pcVar7 == '\n') goto LAB_004bd362;
    if (*pcVar7 == '\0') break;
    pcVar6 = pcVar7 + 1;
    if (*pcVar6 == '\n') goto LAB_004bd362;
    pcVar7 = pcVar7 + 2;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)0x0;
LAB_004bd362:
  pcVar7 = local_214;
  if (pcVar6 != (char *)0x0) {
    *pcVar6 = '\0';
    pcVar7 = local_214;
  }
  do {
    local_14 = pcVar7;
    if (*pcVar7 == '=') goto LAB_004bd385;
    if (*pcVar7 == '\0') break;
    local_14 = pcVar7 + 1;
    if (*local_14 == '=') goto LAB_004bd385;
    pcVar7 = pcVar7 + 2;
  } while (*local_14 != '\0');
  local_14 = (char *)0x0;
LAB_004bd385:
  if (local_14 != (char *)0x0) {
    *local_14 = '\0';
  }
  iVar4 = _strcmp(local_214,param_3);
  if (iVar4 == 0) {
    bVar2 = true;
    iVar4 = _strcmp(local_14 + 1,param_5);
    if (iVar4 == 0) {
      *param_1 = 0;
    }
    goto LAB_004bd3e0;
  }
  bVar1 = *(byte *)(iVar3 + 0xc);
  iVar5 = iVar5 + 1;
  goto LAB_004bd325;
}
