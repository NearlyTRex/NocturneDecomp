// Name: crt_unknown.c_FUN_005af71c
// Address: 005af71c
// Address Range: [[005af71c, 005af77d]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005af71c(void)

#include "nocturne.h"

void FUN_005af71c(void)

{
  char *in_EAX;
  ulonglong *in_EDX;
  ulonglong uVar1;
  
  for (; *in_EAX != '\0'; in_EAX = in_EAX + 1) {
  }
  uVar1 = FUN_005af77e();
  *in_EDX = uVar1;
  *(short *)(in_EDX + 1) = (short)in_EAX;
  return;
}
