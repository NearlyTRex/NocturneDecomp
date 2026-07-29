// Name: core_script.cpp_trimLine_FUN_004fdf60
// Address: 004fdf60
// Address Range: [[004fdf60, 004fdff2]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_trimLine_FUN_004fdf60(char *input_line,char *output_buffer)

#include "nocturne.h"

void __cdecl core_script_cpp_trimLine_FUN_004fdf60(char *input_line,char *output_buffer)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  *output_buffer = '\0';
  while (pcVar3 = output_buffer, ((&DAT_005c168c)[(byte)(*input_line + 1)] & 2) != 0) {
    input_line = input_line + 1;
  }
  do {
    cVar1 = *input_line;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = input_line[1];
    input_line = input_line + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar2 = strstr(output_buffer,"//");
  pcVar3 = output_buffer;
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
  while ((output_buffer < pcVar2 && (((&DAT_005c168c)[(byte)(pcVar2[-1] + 1)] & 2) != 0))) {
    pcVar2[-1] = '\0';
    pcVar2 = pcVar2 + -1;
  }
  return;
}
