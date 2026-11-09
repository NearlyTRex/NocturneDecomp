// Name: unkafter_prye.cpp_FUN_00526e00
// Address: 00526e00
// Address Range: [[00526e00, 00526e2b]]
// Convention: unknown
// Signature: void unkafter_prye_cpp_FUN_00526e00(int param_1,int param_2)

#include "nocturne.h"

void unkafter_prye_cpp_FUN_00526e00(int param_1,int param_2)

{
  *(int *)(param_1 + 0x20bcc) = param_2;
  if ((param_2 == 0) && (*(int *)&g_CGamePtr->field_0x26c != 0)) {
    *(uint *)&g_CGamePtr->field_0x26c = 0;
    return;
  }
  return;
}
