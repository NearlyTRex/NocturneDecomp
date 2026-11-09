// Name: core_charactr.cpp_FUN_0042b2a0
// Address: 0042b2a0
// Address Range: [[0042b2a0, 0042b2fa]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042b2a0(int param_1,float param_2)

#include "nocturne.h"

void core_charactr_cpp_FUN_0042b2a0(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)&g_CGamePtr->field_0x244 == 0) {
    fVar1 = *(float *)(param_1 + 0x259c);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x25a0);
  }
  *(float *)(param_1 + 0x2598) = fVar1 * param_2;
  iVar2 = _strnicmp((char *)(param_1 + 0x2514),"ghost",5);
  if (iVar2 != 0) {
    return;
  }
  *(float *)(param_1 + 0x2598) = *(float *)(param_1 + 0x25a4) * param_2;
  return;
}
