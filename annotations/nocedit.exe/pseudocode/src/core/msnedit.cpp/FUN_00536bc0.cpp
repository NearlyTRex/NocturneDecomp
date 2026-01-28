// Name: core_msnedit.cpp_FUN_00536bc0
// Address: 00536bc0
// Address Range: [[00536bc0, 00536be8]]
// Convention: unknown
// Signature: undefined4 core_msnedit_cpp_FUN_00536bc0(void)

#include "nocturne.h"

uint core_msnedit_cpp_FUN_00536bc0(void)

{
  int in_stack_00000004;
  
  if ((((g_CharacterClassificationTable[(byte)((char)in_stack_00000004 + 1)] & 0xe0U) == 0) &&
      (in_stack_00000004 != 0x2d)) && (in_stack_00000004 != 0x5f)) {
    return 1;
  }
  return 0;
}
