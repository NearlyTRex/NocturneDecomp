// Name: FUN_0056dc10
// Address: 0056dc10
// Address Range: [[0056dc10, 0056dc64]]
// Convention: unknown
// Signature: char * FUN_0056dc10(uint param_1,char *param_2,uint param_3)

#include "nocturne.h"

char * FUN_0056dc10(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char local_37 [35];
  uint local_14;
  
  pcVar2 = local_37;
  do {
    local_14 = param_1 / param_3;
    *pcVar2 = "0123456789abcdefghijklmnopqrstuvwxyz"[param_1 % param_3];
    pcVar2 = pcVar2 + 1;
    param_1 = local_14;
    pcVar3 = param_2;
  } while (local_14 != 0);
  do {
    cVar1 = pcVar2[-1];
    pcVar2 = pcVar2 + -1;
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  return param_2;
}
