// Name: crt_unknown.c_FUN_005c0e30
// Address: 005c0e30
// Address Range: [[005c0e30, 005c0e4d]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c0e30(undefined4 param_1,char *param_2)

#include "nocturne.h"

void FUN_005c0e30(uint param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = (char)((uint)param_1 >> 8);
  if (cVar1 != '\0') {
    param_2[1] = (char)param_1;
    *param_2 = cVar1;
    return;
  }
  *param_2 = (char)param_1;
  return;
}
