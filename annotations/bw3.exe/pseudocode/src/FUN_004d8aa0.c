// Name: FUN_004d8aa0
// Address: 004d8aa0
// Address Range: [[004d8aa0, 004d8ad0]]
// Convention: unknown
// Signature: void FUN_004d8aa0(char *param_1,char *param_2)

#include "nocturne.h"

void FUN_004d8aa0(char *param_1,char *param_2)

{
  char cVar1;
  
  if (param_2 == (char *)0x0) {
    *param_1 = '\0';
    return;
  }
  do {
    cVar1 = *param_2;
    *param_1 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    param_1[1] = cVar1;
    param_1 = param_1 + 2;
  } while (cVar1 != '\0');
  return;
}
