// Name: crt_unknown.c_integer_power_FUN_00565c12
// Address: 00565c12
// Address Range: [[00565c12, 00565c34]]
// Convention: unknown
// Signature: void crt_unknown_c_integer_power_FUN_00565c12(void)

#include "nocturne.h"

void integer_power(void)

{
  ushort in_AX;
  bool bVar1;
  bool bVar2;
  
  do {
    bVar1 = (in_AX & 1) != 0;
    in_AX = in_AX >> 1;
    bVar2 = in_AX == 0;
  } while (!bVar1 && !bVar2);
  if (bVar1) {
    while (!bVar2) {
      in_AX = in_AX >> 1;
      bVar2 = in_AX == 0;
    }
  }
  return;
}
