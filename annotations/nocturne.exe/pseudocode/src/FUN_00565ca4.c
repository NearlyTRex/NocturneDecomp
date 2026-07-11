// Name: FUN_00565ca4
// Address: 00565ca4
// Address Range: [[00565ca4, 00565ce0]]
// Convention: unknown
// Signature: undefined2 FUN_00565ca4(void)

#include "nocturne.h"

ushort FUN_00565ca4(void)

{
  char cVar1;
  ushort in_AX;
  float10 in_ST0;
  
  if (((float10)1 - in_ST0 * in_ST0 != (float10)0) && (cVar1 = FUN_0056c5a8(), cVar1 == '\0')) {
    FUN_00566c81();
  }
  return in_AX;
}
