// Name: crt_unknown.c_FUN_0060b0c8
// Address: 0060b0c8
// Address Range: [[0060b0c8, 0060b105]]
// Convention: unknown
// Signature: char * crt_unknown_c_FUN_0060b0c8(void)

#include "nocturne.h"

char * FUN_0060b0c8(void)

{
  char *pcVar1;
  char *in_stack_00000004;
  int in_stack_00000008;
  
  if ((in_stack_00000008 < 0x14) &&
     (pcVar1 = in_stack_00000004,
     (g_CharacterClassificationTable[(byte)(*in_stack_00000004 + 1)] & 0x20) != 0)) {
    for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
      in_stack_00000008 = in_stack_00000008 + -1;
    }
    for (; 0 < in_stack_00000008; in_stack_00000008 = in_stack_00000008 + -1) {
      *pcVar1 = '0';
      pcVar1 = pcVar1 + 1;
    }
    *pcVar1 = '\0';
  }
  return in_stack_00000004;
}
