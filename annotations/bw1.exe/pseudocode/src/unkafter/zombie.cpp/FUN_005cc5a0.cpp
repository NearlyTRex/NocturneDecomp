// Name: unkafter_zombie.cpp_FUN_005cc5a0
// Address: 005cc5a0
// Address Range: [[005cc5a0, 005cc606]]
// Convention: unknown
// Signature: char * unkafter_zombie_cpp_FUN_005cc5a0(char *param_1,char *param_2,ulong param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * unkafter_zombie_cpp_FUN_005cc5a0(char *param_1,char *param_2,ulong param_3)

{
  char *dest;
  
  dest = param_1;
  for (; (param_3 != 0 && (*param_2 != '\0')); param_2 = param_2 + 1) {
    param_3 = param_3 - 1;
    *dest = *param_2;
    dest = dest + 1;
  }
  if ((((*param_2 != '\0') && (param_1 < dest)) && (_DAT_02c9f6e0 != 0)) &&
     ((*(byte *)((byte)param_2[-1] + 0x2c9f6f1) & 1) != 0)) {
    dest[-1] = '\0';
  }
  if (param_3 != 0) {
    memset(dest,0,param_3);
  }
  return param_1;
}
