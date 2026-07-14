// Name: FUN_1000b380
// Address: 1000b380
// Address Range: [[1000b380, 1000b474]]
// Convention: unknown
// Signature: undefined4 FUN_1000b380(char *param_1,char *param_2)

#include "nocturne.h"

uint FUN_1000b380(char *param_1,char *param_2)

{
  char cVar1;
  size_t _Count;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  
  pcVar2 = param_1;
  for (iVar3 = 0x21; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  *pcVar2 = '\0';
  if (*param_2 == '\0') {
    return 0;
  }
  if ((*param_2 != '.') || (param_2[1] == '\0')) {
    iVar3 = 0;
    do {
      _Count = FUN_1000e290(param_2,&DAT_10012760);
      if (_Count == 0) {
        return 0xffffffff;
      }
      cVar1 = param_2[_Count];
      if (((iVar3 != 0) || (0x3f < (int)_Count)) || (pcVar2 = param_1, cVar1 == '.')) {
        if (((iVar3 == 1) && ((int)_Count < 0x40)) && (cVar1 != '_')) {
          pcVar2 = param_1 + 0x40;
        }
        else {
          if ((iVar3 != 2) || ((cVar1 != '\0' && (cVar1 != ',')))) {
            return 0xffffffff;
          }
          pcVar2 = param_1 + 0x80;
        }
      }
      _strncpy(pcVar2,param_2,_Count);
      if ((cVar1 == ',') || (cVar1 == '\0')) {
        return 0;
      }
      param_2 = param_2 + _Count + 1;
      iVar3 = iVar3 + 1;
    } while( true );
  }
  uVar4 = 0xffffffff;
  pcVar2 = param_2 + 1;
  do {
    pcVar6 = pcVar2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar2 = pcVar6 + -uVar4;
  pcVar6 = param_1 + 0x80;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(uint *)pcVar6 = *(uint *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar6 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar6 = pcVar6 + 1;
  }
  return 0;
}
