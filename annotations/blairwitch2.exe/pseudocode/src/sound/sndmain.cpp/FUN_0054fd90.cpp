// Name: sound_sndmain.cpp_FUN_0054fd90
// Address: 0054fd90
// Address Range: [[0054fd90, 0054fdb6]]
// Convention: unknown
// Signature: int sound_sndmain_cpp_FUN_0054fd90(int param_1,int param_2)

#include "nocturne.h"

int sound_sndmain_cpp_FUN_0054fd90(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 * *(int *)(param_1 + 0x104) * *(int *)(param_1 + 0x108) + 7;
  iVar2 = iVar1 >> 0x1f;
  return (int)((iVar1 + iVar2 * -8) - (uint)(iVar2 << 2 < 0)) >> 3;
}
