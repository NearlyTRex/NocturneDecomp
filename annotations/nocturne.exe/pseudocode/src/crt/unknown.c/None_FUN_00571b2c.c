// Name: crt_unknown.c_None_FUN_00571b2c
// Address: 00571b2c
// Address Range: [[00571b2c, 00571b8d]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c_None_FUN_00571b2c(byte *param_1,undefined8 *param_2)

#include "nocturne.h"

void __cdecl None(byte *param_1,ulonglong *param_2)

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
