// Name: FUN_00495f38
// Address: 00495f38
// Address Range: [[00495f38, 00495f45]]
// Convention: unknown
// Signature: void FUN_00495f38(void)

#include "nocturne.h"

void FUN_00495f38(void)

{
  uint *in_ECX;
  uint in_EDX;
  
  *(char *)((int)in_ECX + 6) = (char)in_EDX;
  *(short *)(in_ECX + 1) = (short)in_EDX;
  *in_ECX = in_EDX;
  return;
}
