// Name: core_script.cpp_trimLine_FUN_004fdf60
// Address: 004fdf60
// Address Range: [[004fdf60, 004fdff2]]
// Convention: unknown
// Signature: void core_script_cpp_trimLine_FUN_004fdf60(char *param_1,char *param_2)

#include "nocturne.h"

void core_script_cpp_trimLine_FUN_004fdf60(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  *param_2 = '\0';
  while (pcVar3 = param_2, ((&DAT_005c168c)[(byte)(*param_1 + 1)] & 2) != 0) {
    param_1 = param_1 + 1;
  }
  do {
    cVar1 = *param_1;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_1[1];
    param_1 = param_1 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar2 = strstr(param_2,"//");
  pcVar3 = param_2;
  if (pcVar2 != (char *)0x0) {
    *pcVar2 = '\0';
  }
  do {
    pcVar2 = pcVar3;
    if (*pcVar3 == '\0') goto joined_r0x004fdfd4;
    if (*pcVar3 == '\0') break;
    pcVar2 = pcVar3 + 1;
    if (*pcVar2 == '\0') goto joined_r0x004fdfd4;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar2 != '\0');
  pcVar2 = (char *)0x0;
joined_r0x004fdfd4:
  while ((param_2 < pcVar2 && (((&DAT_005c168c)[(byte)(pcVar2[-1] + 1)] & 2) != 0))) {
    pcVar2[-1] = '\0';
    pcVar2 = pcVar2 + -1;
  }
  return;
}
