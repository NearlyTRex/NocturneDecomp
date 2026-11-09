// Name: engine_ini.cpp_FUN_004d8470
// Address: 004d8470
// Address Range: [[004d8470, 004d863e]]
// Convention: unknown
// Signature: int engine_ini_cpp_FUN_004d8470(undefined4 *param_1,undefined4 param_2,char *param_3,undefined4 param_4,char *param_5 )

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_ini_cpp_FUN_004d8470(uint *param_1,uint param_2,char *param_3,uint param_4,char *param_5 )

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char local_214 [256];
  char local_114 [256];
  char *local_14;
  
  iVar5 = 0;
  bVar2 = false;
  *param_1 = 1;
  iVar3 = _fopen(param_4,&DAT_005c56b1);
  if (iVar3 == 0) {
    _DAT_01d71de0 = "..\\engine\\ini.cpp";
    _DAT_01d71de4 = 0xfd;
    core_main_c_FUN_004e4330("cIni::FindLineNumberOfVariable: Unable to open input");
  }
  FUN_005a28c0(local_114,"[%s]\n",param_2);
  while (((*(byte *)(iVar3 + 0xc) & 0x10) == 0 &&
         (iVar4 = _fgets(local_214,0xff,iVar3), iVar4 != 0))) {
    iVar4 = _strcmp(local_214,local_114);
    if (iVar4 == 0) {
      bVar1 = *(byte *)(iVar3 + 0xc);
      bVar2 = false;
      goto LAB_004d84e5;
    }
    iVar5 = iVar5 + 1;
  }
LAB_004d85a0:
  _fclose(iVar3);
  if (bVar2) {
    return iVar5;
  }
  return 0;
LAB_004d84e5:
  if (((bVar1 & 0x10) != 0) ||
     (iVar4 = _fgets(local_214,0xff,iVar3), pcVar7 = local_214, iVar4 == 0))
  goto LAB_004d85a0;
  do {
    pcVar6 = pcVar7;
    if (*pcVar7 == '\n') goto LAB_004d8522;
    if (*pcVar7 == '\0') break;
    pcVar6 = pcVar7 + 1;
    if (*pcVar6 == '\n') goto LAB_004d8522;
    pcVar7 = pcVar7 + 2;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)0x0;
LAB_004d8522:
  pcVar7 = local_214;
  if (pcVar6 != (char *)0x0) {
    *pcVar6 = '\0';
    pcVar7 = local_214;
  }
  do {
    local_14 = pcVar7;
    if (*pcVar7 == '=') goto LAB_004d8545;
    if (*pcVar7 == '\0') break;
    local_14 = pcVar7 + 1;
    if (*local_14 == '=') goto LAB_004d8545;
    pcVar7 = pcVar7 + 2;
  } while (*local_14 != '\0');
  local_14 = (char *)0x0;
LAB_004d8545:
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
    goto LAB_004d85a0;
  }
  bVar1 = *(byte *)(iVar3 + 0xc);
  iVar5 = iVar5 + 1;
  goto LAB_004d84e5;
}
