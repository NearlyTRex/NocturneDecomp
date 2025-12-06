// Name: core_script.cpp_FUN_00559360
// Address: 00559360
// Address Range: [[00559360, 005593c4]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00559360()

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00559360(uint param_1) */

void core_script_cpp_FUN_00559360(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  SIZE_T n;
  char *in_stack_00000004;
  
  uVar3 = 0xffffffff;
  pcVar2 = in_stack_00000004;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  n = ~uVar3 - 1;
  if (0 < (int)n) {
    pcVar2 = in_stack_00000004 + n;
    do {
      if ((g_CharacterClassificationTable[(byte)(pcVar2[-1] + 1)] & 2U) == 0) break;
      n = n - 1;
      pcVar2 = pcVar2 + -1;
    } while (0 < (int)n);
  }
  in_stack_00000004[n] = '\0';
  while ((g_CharacterClassificationTable[(byte)(*in_stack_00000004 + 1)] & 2U) != 0) {
    crt_string_c_memmove_FUN_005fe5e0(in_stack_00000004,in_stack_00000004 + 1,n);
    n = n - 1;
  }
  return;
}
