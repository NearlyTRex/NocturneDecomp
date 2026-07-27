// Name: crt_unknown.c_FUN_00566c6c
// Address: 00566c6c
// Address Range: [[00566c6c, 00566c80]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00566c6c(void)

#include "nocturne.h"

void FUN_00566c6c(void)

{
  unkbyte10 in_ST0;
  
  if ((DAT_005c1d98 & 1) == 0) {
    fpatan(in_ST0,(float10)1);
  }
  else {
    FUN_0056dc98();
  }
  return;
}
