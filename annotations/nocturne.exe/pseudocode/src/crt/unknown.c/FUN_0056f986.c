// Name: crt_unknown.c_FUN_0056f986
// Address: 0056f986
// Address Range: [[0056f986, 0056f9c3]]
// Convention: unknown
// Signature: char * crt_unknown_c_FUN_0056f986(char *param_1,int param_2)

#include "nocturne.h"

char * FUN_0056f986(char *param_1,int param_2)

{
  char *pcVar1;
  
  if ((param_2 < 0x14) &&
     (pcVar1 = param_1, (g_CharacterClassificationTable[(byte)(*param_1 + 1)] & 0x20) != 0)) {
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
