// Name: crt_unknown.c_FUN_005cca6c
// Address: 005cca6c
// Address Range: [[005cca6c, 005ccacd]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005cca6c(void)

#include "nocturne.h"

void FUN_005cca6c(void)

{
  char *in_EAX;
  ulonglong *in_EDX;
  ulonglong uVar1;
  
  for (; *in_EAX != '\0'; in_EAX = in_EAX + 1) {
  }
  uVar1 = FUN_005ccace();
  *in_EDX = uVar1;
  *(short *)(in_EDX + 1) = (short)in_EAX;
  return;
}
