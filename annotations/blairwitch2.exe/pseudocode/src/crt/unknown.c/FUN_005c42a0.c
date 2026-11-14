// Name: crt_unknown.c_FUN_005c42a0
// Address: 005c42a0
// Address Range: [[005c42a0, 005c4306]]
// Convention: unknown
// Signature: char * crt_unknown_c_FUN_005c42a0(char *param_1,char *param_2,ulong param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_005c42a0(char *param_1,char *param_2,ulong param_3)

{
  char *dest;
  
  dest = param_1;
  for (; (param_3 != 0 && (*param_2 != '\0')); param_2 = param_2 + 1) {
    param_3 = param_3 - 1;
    *dest = *param_2;
    dest = dest + 1;
  }
  if ((((*param_2 != '\0') && (param_1 < dest)) && (_DAT_026807f0 != 0)) &&
     ((*(byte *)((byte)param_2[-1] + 0x2680801) & 1) != 0)) {
    dest[-1] = '\0';
  }
  if (param_3 != 0) {
    memset(dest,0,param_3);
  }
  return param_1;
}
