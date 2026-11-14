// Name: crt_unknown.c_FUN_005c476c
// Address: 005c476c
// Address Range: [[005c476c, 005c47cd]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c476c(void)

#include "nocturne.h"

void FUN_005c476c(void)

{
  char *in_EAX;
  ulonglong *in_EDX;
  ulonglong uVar1;
  
  for (; *in_EAX != '\0'; in_EAX = in_EAX + 1) {
  }
  uVar1 = FUN_005c47ce();
  *in_EDX = uVar1;
  *(short *)(in_EDX + 1) = (short)in_EAX;
  return;
}
