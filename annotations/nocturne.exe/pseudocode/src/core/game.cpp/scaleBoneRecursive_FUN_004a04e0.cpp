// Name: core_game.cpp_scaleBoneRecursive_FUN_004a04e0
// Address: 004a04e0
// Address Range: [[004a04e0, 004a0546]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_scaleBoneRecursive_FUN_004a04e0(int param_1,int param_2,float param_3,int param_4)

#include "nocturne.h"

void __cdecl core_game_cpp_scaleBoneRecursive_FUN_004a04e0(int param_1,int param_2,float param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_4 * 4 + param_1;
  *(float *)(iVar1 + 0x514) = *(float *)(iVar1 + 0x514) * param_3;
  iVar2 = 0;
  iVar1 = param_2;
  if (0 < *(int *)(param_2 + 0x28558)) {
    do {
      if (param_4 == *(int *)(iVar1 + 0x2857c)) {
        core_game_cpp_scaleBoneRecursive_FUN_004a04e0(param_1,param_2,param_3,iVar2);
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x24;
    } while (iVar2 < *(int *)(param_2 + 0x28558));
  }
  return;
}
