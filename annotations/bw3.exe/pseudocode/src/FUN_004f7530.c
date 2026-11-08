// Name: FUN_004f7530
// Address: 004f7530
// Address Range: [[004f7530, 004f7587]]
// Convention: unknown
// Signature: void FUN_004f7530(undefined4 param_1,char *param_2)

#include "nocturne.h"

void FUN_004f7530(uint param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char local_2c [32];
  
  *param_2 = '\0';
  pcVar2 = (char *)FUN_00408870(param_2);
  if (*pcVar2 == 'C') {
    pcVar2 = pcVar2 + 1;
  }
  FUN_004f7490(param_1,local_2c,pcVar2);
  pcVar2 = local_2c;
  do {
    cVar1 = *pcVar2;
    *param_2 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    param_2[1] = cVar1;
    param_2 = param_2 + 2;
  } while (cVar1 != '\0');
  return;
}
