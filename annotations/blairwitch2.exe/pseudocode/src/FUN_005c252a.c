// Name: FUN_005c252a
// Address: 005c252a
// Address Range: [[005c252a, 005c2567]]
// Convention: unknown
// Signature: char * FUN_005c252a(char *param_1,int param_2)

#include "nocturne.h"

char * FUN_005c252a(char *param_1,int param_2)

{
  char *pcVar1;
  
  if ((param_2 < 0x14) && (pcVar1 = param_1, ((&DAT_0061ed94)[(byte)(*param_1 + 1)] & 0x20) != 0)) {
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
