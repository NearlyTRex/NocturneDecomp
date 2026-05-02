// Name: core_script.cpp_trimLine_FUN_005592c0
// Address: 005592c0
// MANUAL RECONSTRUCTION
// Address Range: [[005592c0, 00559352]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_trimLine_FUN_005592c0(char *input_line,char *output_buffer)

#include "nocturne.h"

void __cdecl core_script_cpp_trimLine_FUN_005592c0(char *input_line,char *output_buffer)

{
  char *pcVar2;
  char *pcVar3;
  
  *output_buffer = '\0';
  while (pcVar3 = output_buffer, (g_CharacterClassificationTable[(byte)(*input_line + 1)] & 2) != 0)
  {
    input_line = input_line + 1;
  }
  strcpy(pcVar3,input_line);
  pcVar2 = strstr(output_buffer,"//");
  pcVar3 = output_buffer;
  if (pcVar2 != (char *)0x0) {
    *pcVar2 = '\0';
  }
  do {
    pcVar2 = pcVar3;
    if (*pcVar3 == '\0') goto joined_r0x00559334;
    if (*pcVar3 == '\0') break;
    pcVar2 = pcVar3 + 1;
    if (*pcVar2 == '\0') goto joined_r0x00559334;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar2 != '\0');
  pcVar2 = (char *)0x0;
joined_r0x00559334:
  while ((output_buffer < pcVar2 &&
         ((g_CharacterClassificationTable[(byte)(pcVar2[-1] + 1)] & 2) != 0))) {
    pcVar2[-1] = '\0';
    pcVar2 = pcVar2 + -1;
  }
  return;
}
