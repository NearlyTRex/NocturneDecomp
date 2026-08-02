// Name: crt_unknown.c_FUN_00571b2c
// Address: 00571b2c
// Address Range: [[00571b2c, 00571b8d]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_00571b2c(void)

#include "nocturne.h"

void FUN_00571b2c(void)

{
  char *in_EAX;
  ulonglong *in_EDX;
  ulonglong uVar1;
  
  for (; *in_EAX != '\0'; in_EAX = in_EAX + 1) {
  }
  uVar1 = FUN_00571b8e();
  *in_EDX = uVar1;
  *(short *)(in_EDX + 1) = (short)in_EAX;
  return;
}
