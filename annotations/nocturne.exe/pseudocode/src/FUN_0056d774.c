// Name: FUN_0056d774
// Address: 0056d774
// Address Range: [[0056d774, 0056d879]]
// Convention: unknown
// Signature: char * FUN_0056d774(char *param_1,undefined4 *param_2)

#include "nocturne.h"

char * FUN_0056d774(char *param_1,uint *param_2)

{
  char *pcVar1;
  int iVar2;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  
  iVar2 = -1;
  if (*param_1 == 'J') {
    iVar2 = 1;
    param_1 = param_1 + 1;
  }
  if (*param_1 == 'M') {
    param_1 = param_1 + 1;
    iVar2 = 0;
  }
  param_2[8] = iVar2;
  pcVar1 = (char *)FUN_0056d628(param_1,&local_c);
  if (iVar2 == 0) {
    param_2[4] = local_c + -1;
    if (*pcVar1 == '.') {
      pcVar1 = (char *)FUN_0056d628(pcVar1 + 1,&local_c);
      param_2[3] = local_c;
      if (*pcVar1 == '.') {
        pcVar1 = (char *)FUN_0056d628(pcVar1 + 1,&local_c);
        param_2[6] = local_c;
      }
    }
    param_2[7] = 0;
  }
  else {
    param_2[7] = local_c;
  }
  local_10 = 2;
  local_18 = 0;
  local_14 = 0;
  if (*pcVar1 == '/') {
    pcVar1 = (char *)FUN_0056d628(pcVar1 + 1,&local_10);
    if (*pcVar1 == ':') {
      pcVar1 = (char *)FUN_0056d628(pcVar1 + 1,&local_14);
      if (*pcVar1 == ':') {
        pcVar1 = (char *)FUN_0056d628(pcVar1 + 1,&local_18);
      }
    }
  }
  *param_2 = local_18;
  param_2[1] = local_14;
  param_2[2] = local_10;
  return pcVar1;
}
