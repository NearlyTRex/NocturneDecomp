// Name: crt_unknown.c_CondCallDoNothing_FUN_00603ccc
// Address: 00603ccc
// Address Range: [[00603ccc, 00603d5f]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c_CondCallDoNothing_FUN_00603ccc(void)

#include "nocturne.h"

void __cdecl CondCallDoNothing(void)

{
  ushort in_FPUControlWord;
  float10 *in_stack_00000004;
  int in_stack_00000008;
  
  if (in_stack_00000008 != 0) {
    if (in_stack_00000008 < 0) {
      FUN_00603c74();
      *in_stack_00000004 = *in_stack_00000004 / (float10)CONCAT28(0x3fff,0x8000000000000000);
    }
    else {
      FUN_00603c74();
      *in_stack_00000004 = (float10)CONCAT28(0x3fff,0x8000000000000000) * *in_stack_00000004;
    }
    FUN_0060445e(in_FPUControlWord);
    return;
  }
  return;
}
