// Name: core_script.cpp_trimLine_FUN_004fdf60
// Address: 004fdf60
// Address Range: [[004fdf60, 004fdff2]]
// Convention: unknown
// Signature: void core_script_cpp_trimLine_FUN_004fdf60(char *param_1,char *param_2)

#include "nocturne.h"

void core_script_cpp_trimLine_FUN_004fdf60(char *param_1,char *param_2)

{
  char cVar1;
  byte *puVar2;
  char *pcVar3;
  char *pcVar4;
  
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
  puVar2 = (byte *)strstr(param_2,&DAT_0058e01d);
  pcVar3 = param_2;
  if (puVar2 != (byte *)0x0) {
    *puVar2 = 0;
  }
  do {
    pcVar4 = pcVar3;
    if (*pcVar3 == '\0') goto joined_r0x004fdfd4;
    if (*pcVar3 == '\0') break;
    pcVar4 = pcVar3 + 1;
    if (*pcVar4 == '\0') goto joined_r0x004fdfd4;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar4 != '\0');
  pcVar4 = (char *)0x0;
joined_r0x004fdfd4:
  while ((param_2 < pcVar4 && (((&DAT_005c168c)[(byte)(pcVar4[-1] + 1)] & 2) != 0))) {
    pcVar4[-1] = '\0';
    pcVar4 = pcVar4 + -1;
  }
  return;
}
