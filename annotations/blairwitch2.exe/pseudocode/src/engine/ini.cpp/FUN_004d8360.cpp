// Name: engine_ini.cpp_FUN_004d8360
// Address: 004d8360
// Address Range: [[004d8360, 004d852e]]
// Convention: unknown
// Signature: int engine_ini_cpp_FUN_004d8360(undefined4 *param_1,undefined4 param_2,char *param_3,char *param_4,char *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_ini_cpp_FUN_004d8360(uint *param_1,uint param_2,char *param_3,char *param_4,char *param_5)

{
  byte bVar1;
  bool bVar2;
  _FILE *stream;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char local_214 [256];
  char local_114 [256];
  char *local_14;
  
  iVar6 = 0;
  bVar2 = false;
  *param_1 = 1;
  stream = _fopen(param_4,&DAT_005dab8a);
  if (stream == (_FILE *)0x0) {
    _DAT_01d046a0 = "..\\engine\\ini.cpp";
    _DAT_01d046a4 = 0xfd;
    core_main_c_FUN_004e4500("cIni::FindLineNumberOfVariable: Unable to open input");
  }
  _sprintf(local_114,"[%s]\n");
  while (((stream->_flag & 0x10) == 0 &&
         (pcVar5 = _fgets(local_214,0xff,stream), pcVar5 != (char *)0x0))) {
    iVar4 = _strcmp(local_214,local_114);
    if (iVar4 == 0) {
      bVar1 = (byte)stream->_flag;
      bVar2 = false;
      goto LAB_004d83d5;
    }
    iVar6 = iVar6 + 1;
  }
LAB_004d8490:
  _fclose(stream);
  if (bVar2) {
    return iVar6;
  }
  return 0;
LAB_004d83d5:
  if (((bVar1 & 0x10) != 0) ||
     (pcVar3 = _fgets(local_214,0xff,stream), pcVar5 = local_214,
     pcVar3 == (char *)0x0)) goto LAB_004d8490;
  do {
    pcVar3 = pcVar5;
    if (*pcVar5 == '\n') goto LAB_004d8412;
    if (*pcVar5 == '\0') break;
    pcVar3 = pcVar5 + 1;
    if (*pcVar3 == '\n') goto LAB_004d8412;
    pcVar5 = pcVar5 + 2;
  } while (*pcVar3 != '\0');
  pcVar3 = (char *)0x0;
LAB_004d8412:
  pcVar5 = local_214;
  if (pcVar3 != (char *)0x0) {
    *pcVar3 = '\0';
    pcVar5 = local_214;
  }
  do {
    local_14 = pcVar5;
    if (*pcVar5 == '=') goto LAB_004d8435;
    if (*pcVar5 == '\0') break;
    local_14 = pcVar5 + 1;
    if (*local_14 == '=') goto LAB_004d8435;
    pcVar5 = pcVar5 + 2;
  } while (*local_14 != '\0');
  local_14 = (char *)0x0;
LAB_004d8435:
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
    goto LAB_004d8490;
  }
  bVar1 = (byte)stream->_flag;
  iVar6 = iVar6 + 1;
  goto LAB_004d83d5;
}
