// Name: crt_unknown.c_CondCallDoNothing_FUN_00603ccc
// Address: 00603ccc
// Address Range: [[00603ccc, 00603d5f]]
// Convention: unknown
// Signature: undefined crt_unknown.c_CondCallDoNothing_FUN_00603ccc()

#include "nocturne.h"

/* Signature: byte unk_CondCallDoNothingAgain1(uint param_1, uint param_2) */

void crt_unknown_c_CondCallDoNothing_FUN_00603ccc(void)

{
  ushort in_FPUControlWord;
  float10 *in_stack_00000004;
  int in_stack_00000008;
  
  if (in_stack_00000008 != 0) {
    if (in_stack_00000008 < 0) {
      crt_unknown_c_FUN_00603c74();
      *in_stack_00000004 = *in_stack_00000004 / (float10)CONCAT28(0x3fff,0x8000000000000000);
    }
    else {
      crt_unknown_c_FUN_00603c74();
      *in_stack_00000004 = (float10)CONCAT28(0x3fff,0x8000000000000000) * *in_stack_00000004;
    }
    crt_unknown_c_FUN_0060445e(in_FPUControlWord);
    return;
  }
  return;
}
