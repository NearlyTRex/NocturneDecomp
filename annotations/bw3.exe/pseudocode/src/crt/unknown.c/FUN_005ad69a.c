// Name: crt_unknown.c_FUN_005ad69a
// Address: 005ad69a
// Address Range: [[005ad69a, 005ad6d7]]
// Convention: unknown
// Signature: char * crt_unknown_c_FUN_005ad69a(char *param_1,int param_2)

#include "nocturne.h"

char * FUN_005ad69a(char *param_1,int param_2)

{
  char *pcVar1;
  
  if ((param_2 < 0x14) && (pcVar1 = param_1, ((&DAT_006074b8)[(byte)(*param_1 + 1)] & 0x20) != 0)) {
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
