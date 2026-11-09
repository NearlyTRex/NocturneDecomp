// Name: unkafter_zombie.cpp_FUN_005ca82a
// Address: 005ca82a
// Address Range: [[005ca82a, 005ca867]]
// Convention: unknown
// Signature: char * unkafter_zombie_cpp_FUN_005ca82a(char *param_1,int param_2)

#include "nocturne.h"

char * unkafter_zombie_cpp_FUN_005ca82a(char *param_1,int param_2)

{
  char *pcVar1;
  
  if ((param_2 < 0x14) && (pcVar1 = param_1, ((&DAT_00626114)[(byte)(*param_1 + 1)] & 0x20) != 0)) {
    for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
      param_2 = param_2 + -1;
    }
    for (; 0 < param_2; param_2 = param_2 + -1) {
      *pcVar1 = '0';
      pcVar1 = pcVar1 + 1;
    }
    *pcVar1 = '\0';
  }
  return param_1;
}
