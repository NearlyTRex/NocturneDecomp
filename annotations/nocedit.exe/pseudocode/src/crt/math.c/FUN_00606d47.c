// Name: crt_math.c_FUN_00606d47
// Address: 00606d47
// Address Range: [[00606d47, 00606d4b]]
// Convention: unknown
// Signature: undefined crt_math.c_FUN_00606d47()

#include "nocturne.h"

float10 crt_math_c_FUN_00606d47(void)

{
  code *pcVar1;
  float10 fVar2;
  float10 in_ST2;
  float10 in_ST3;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  fVar2 = crt_math_c_fdiv_FUN_00606960(in_ST2,in_ST3);
  return fVar2;
}
