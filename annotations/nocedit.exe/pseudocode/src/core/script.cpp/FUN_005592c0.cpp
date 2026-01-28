// Name: core_script.cpp_FUN_005592c0
// Address: 005592c0
// Address Range: [[005592c0, 00559352]]
// Convention: unknown
// Signature: void core_script_cpp_FUN_005592c0(void)

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_005592c0(uint param_1, uint param_2) */

void core_script_cpp_FUN_005592c0(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *in_stack_00000004;
  char *in_stack_00000008;
  
  *in_stack_00000008 = '\0';
  while (pcVar3 = in_stack_00000008,
        (g_CharacterClassificationTable[(byte)(*in_stack_00000004 + 1)] & 2U) != 0) {
    in_stack_00000004 = in_stack_00000004 + 1;
  }
  do {
    cVar1 = *in_stack_00000004;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000004[1];
    in_stack_00000004 = in_stack_00000004 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar2 = crt_string_c_strstr_FUN_005fedd0(in_stack_00000008,"//");
  pcVar3 = in_stack_00000008;
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
  while ((in_stack_00000008 < pcVar2 &&
         ((g_CharacterClassificationTable[(byte)(pcVar2[-1] + 1)] & 2U) != 0))) {
    pcVar2[-1] = '\0';
    pcVar2 = pcVar2 + -1;
  }
  return;
}
