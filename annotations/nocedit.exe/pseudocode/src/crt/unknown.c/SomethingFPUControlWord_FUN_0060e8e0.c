// Name: crt_unknown.c_SomethingFPUControlWord_FUN_0060e8e0
// Address: 0060e8e0
// Address Range: [[0060e8e0, 0060e92d]]
// Convention: unknown
// Signature: undefined crt_unknown.c_SomethingFPUControlWord_FUN_0060e8e0()

#include "nocturne.h"

/* Signature: byte unk_SomethingFPUControlWord(uint param_1, uint param_2) */

uint crt_unknown_c_SomethingFPUControlWord_FUN_0060e8e0(void)

{
  ushort in_FPUControlWord;
  uint in_stack_00000004;
  uint in_stack_00000008;
  uint local_c;
  
  local_c = 0;
  if ((DAT_00684acc != '\0') && (local_c = (uint)in_FPUControlWord, in_stack_00000008 != 0)) {
    local_c = ~in_stack_00000008 & local_c | in_stack_00000004 & in_stack_00000008 & 0xffff;
  }
  return local_c;
}
