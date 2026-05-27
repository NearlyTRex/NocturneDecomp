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
  if (pcVar2 != (char *)0x0) {
    *pcVar2 = '\0';
  }
  pcVar2 = output_buffer + strlen(output_buffer);
  while ((output_buffer < pcVar2 &&
         ((g_CharacterClassificationTable[(byte)(pcVar2[-1] + 1)] & 2) != 0))) {
    pcVar2[-1] = '\0';
    pcVar2 = pcVar2 + -1;
  }
  return;
}
