// Name: core_charactr.cpp_FUN_00435320
// Address: 00435320
// Address Range: [[00435320, 0043537a]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00435320(int param_1,float param_2)

#include "nocturne.h"

void core_charactr_cpp_FUN_00435320(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  
  if (g_CGamePtr->letterbox_mode == 0) {
    fVar1 = *(float *)(param_1 + 0x252c);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x2530);
  }
  *(float *)(param_1 + 0x2528) = fVar1 * param_2;
  iVar2 = _strnicmp((char *)(param_1 + 0x24a8),"ghost",5);
  if (iVar2 != 0) {
    return;
  }
  *(float *)(param_1 + 0x2528) = *(float *)(param_1 + 0x2534) * param_2;
  return;
}
