// Name: core_script.cpp_FUN_00567010
// Address: 00567010
// Address Range: [[00567010, 00567076]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00567010()

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00567010(uint param_1, uint param_2,
   uint param_3) */

void core_script_cpp_FUN_00567010(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  BADSPACEBASE *in_ESP;
  char *in_stack_00000008;
  char local_200 [500];
  
  cVar1 = *in_stack_00000008;
  while (pcVar3 = in_stack_00000008, cVar1 != '\0') {
    pcVar2 = local_200;
    cVar1 = *pcVar3;
    while ((cVar1 != ';' && (*pcVar3 != '\0'))) {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *pcVar2 = cVar1;
      cVar1 = *pcVar3;
      pcVar2 = pcVar2 + 1;
    }
    *pcVar2 = '\0';
    core_script_cpp_FUN_00567080();
    if (*pcVar3 == ';') {
      pcVar3 = pcVar3 + 1;
    }
    cVar1 = *pcVar3;
  }
  return;
}
