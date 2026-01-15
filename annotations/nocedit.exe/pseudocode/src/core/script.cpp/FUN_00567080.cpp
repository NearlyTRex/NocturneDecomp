// Name: core_script.cpp_FUN_00567080
// Address: 00567080
// Address Range: [[00567080, 0056719a]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00567080()

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00567080(uint param_1, uint param_2,
   uint param_3) */

void core_script_cpp_FUN_00567080(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  char *in_stack_00000008;
  uint *in_stack_0000000c;
  char local_24c [300];
  char local_120 [256];
  uint local_20;
  
  bVar6 = 0;
  iVar3 = 0;
  do {
    iVar2 = core_script_cpp_SCmdParse_parse_FUN_00561fd0();
    if (iVar2 == 3) {
      core_script_cpp_FUN_00564090();
      return;
    }
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x1e0);
  while ((g_CharacterClassificationTable[(byte)(*in_stack_00000008 + 1)] & 2U) != 0) {
    in_stack_00000008 = in_stack_00000008 + 1;
  }
  pcVar4 = local_24c;
  while (iVar3 = core_event_cpp_FUN_004b0f90(), iVar3 != 0) {
    cVar1 = *in_stack_00000008;
    in_stack_00000008 = in_stack_00000008 + 1;
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
  }
  *pcVar4 = '\0';
  while ((g_CharacterClassificationTable[(byte)(*in_stack_00000008 + 1)] & 2U) != 0) {
    in_stack_00000008 = in_stack_00000008 + 1;
  }
  if ((*in_stack_00000008 != '\0') || (local_24c[0] == '\0')) {
    return;
  }
  pcVar4 = local_120;
  for (iVar3 = 0x45; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(uint *)pcVar4 = *in_stack_0000000c;
    in_stack_0000000c = in_stack_0000000c + (uint)bVar6 * -2 + 1;
    pcVar4 = pcVar4 + ((uint)bVar6 * -2 + 1) * 4;
  }
  pcVar4 = local_24c;
  pcVar5 = local_120;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  local_20 = 1;
  core_script_cpp_CScript_ReallocSomething_FUN_00567510();
  return;
}
