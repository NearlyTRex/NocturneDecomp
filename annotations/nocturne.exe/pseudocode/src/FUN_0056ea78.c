// Name: FUN_0056ea78
// Address: 0056ea78
// Address Range: [[0056ea78, 0056ead3]]
// Convention: unknown
// Signature: void FUN_0056ea78(char *param_1,char *param_2,uint param_3)

#include "nocturne.h"

void FUN_0056ea78(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = (char *)0x0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    pcVar3 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar1 = *pcVar3;
  }
  pcVar3 = param_1 + 9;
  while( true ) {
    cVar1 = *param_2;
    *param_1 = cVar1;
    if (cVar1 == '\0') break;
    if ((cVar1 == '0') && (param_2[1] == 'x')) {
      pcVar2 = pcVar3;
    }
    pcVar3 = pcVar3 + 1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  if (pcVar2 != (char *)0x0) {
    for (; param_3 != 0; param_3 = param_3 >> 4) {
      *pcVar2 = "0123456789abcdef"[param_3 & 0xf];
      pcVar2 = pcVar2 + -1;
    }
  }
  return;
}
