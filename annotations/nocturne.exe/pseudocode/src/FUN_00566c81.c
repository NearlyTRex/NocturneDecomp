// Name: FUN_00566c81
// Address: 00566c81
// Address Range: [[00566c81, 00566c95]]
// Convention: unknown
// Signature: void FUN_00566c81(void)

#include "nocturne.h"

void FUN_00566c81(void)

{
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  
  if ((DAT_005c1d98 & 1) == 0) {
    fpatan(in_ST0,in_ST1);
  }
  else {
    FUN_0056dc98();
  }
  return;
}
