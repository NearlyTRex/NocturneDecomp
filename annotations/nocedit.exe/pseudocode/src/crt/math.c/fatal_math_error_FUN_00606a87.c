// Name: crt_math.c_fatal_math_error_FUN_00606a87
// Address: 00606a87
// Address Range: [[00606a87, 00606a8b]]
// Convention: __watcallRegister
// Signature: void __watcallRegister crt_math_c_fatal_math_error_FUN_00606a87(void)

#include "nocturne.h"

void __watcallRegister fatal_math_error(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  return;
}
