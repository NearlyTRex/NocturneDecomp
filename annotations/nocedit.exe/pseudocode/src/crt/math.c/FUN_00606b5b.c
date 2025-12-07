// Name: crt_math.c_FUN_00606b5b
// Address: 00606b5b
// Address Range: [[00606b5b, 00606b5f]]
// Convention: unknown
// Signature: undefined crt_math.c_FUN_00606b5b()

#include "nocturne.h"

float10 crt_math_c_FUN_00606b5b(void)

{
  code *pcVar1;
  float10 fVar2;
  float10 in_ST1;
  float10 in_ST3;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  fVar2 = crt_math_c_fdiv_FUN_00606960(in_ST1,in_ST3);
  return fVar2;
}
