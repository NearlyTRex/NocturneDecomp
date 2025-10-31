// Name: crt_unknown.c_FUN_00606deb
// Address: 00606deb
// Address Range: [[00606deb, 00606def]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00606deb()

#include "nocturne.h"

float10 crt_unknown_c_FUN_00606deb(void)

{
  code *pcVar1;
  float10 fVar2;
  float10 in_ST2;
  float10 in_ST3;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  fVar2 = crt_math_c_ieee754_divide_FUN_00606960(in_ST2,in_ST3);
  return fVar2;
}


// Assembly code:
// 00606deb: ADD ESP,0x2c
//   Label: crt_unknown.c_FUN_00606deb
// 00606dee: INT 0x6
