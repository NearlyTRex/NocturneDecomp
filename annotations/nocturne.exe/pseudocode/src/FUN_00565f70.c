// Name: FUN_00565f70
// Address: 00565f70
// Address Range: [[00565f70, 00565fa4]]
// Convention: unknown
// Signature: char * FUN_00565f70(char *param_1,char *param_2,int param_3)

#include "nocturne.h"

char * FUN_00565f70(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  
  pcVar1 = param_1;
  for (; (param_3 != 0 && (*param_2 != '\0')); param_2 = param_2 + 1) {
    *pcVar1 = *param_2;
    param_3 = param_3 + -1;
    pcVar1 = pcVar1 + 1;
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *pcVar1 = '\0';
    pcVar1 = pcVar1 + 1;
  }
  return param_1;
}
