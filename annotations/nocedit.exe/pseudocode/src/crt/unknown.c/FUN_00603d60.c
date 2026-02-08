// Name: crt_unknown.c_FUN_00603d60
// Address: 00603d60
// Address Range: [[00603d60, 00603db0]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c_FUN_00603d60(void)

#include "nocturne.h"

void __cdecl FUN_00603d60(void)

{
  int in_stack_00000008;
  
  if ((0x1000 < in_stack_00000008) || (in_stack_00000008 < -0x1000)) {
    CondCallDoNothing();
  }
  CondCallDoNothing();
  return;
}
