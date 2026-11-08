// Name: FUN_00569f50
// Address: 00569f50
// Address Range: [[00569f50, 00569fa4]]
// Convention: unknown
// Signature: void FUN_00569f50(int param_1,char *param_2)

#include "nocturne.h"

void FUN_00569f50(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_1 + 0x2350);
  do {
    cVar1 = *param_2;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  *(uint *)(param_1 + 0x23a0) = 0;
  FUN_00569ae0(param_1);
  FUN_00569b00(param_1);
  *(uint *)(param_1 + 0x2320) = 0xffffffff;
  return;
}
