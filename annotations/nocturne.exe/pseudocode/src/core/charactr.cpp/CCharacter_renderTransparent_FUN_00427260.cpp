// Name: core_charactr.cpp_CCharacter_renderTransparent_FUN_00427260
// Address: 00427260
// Address Range: [[00427260, 0042728f]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_charactr_cpp_CCharacter_renderTransparent_FUN_00427260(int param_1)

#include "nocturne.h"

uint __cdecl core_charactr_cpp_CCharacter_renderTransparent_FUN_00427260(int param_1)

{
  if ((0 < *(int *)(param_1 + 0x2f08)) && (*(int *)(param_1 + 0x2618) != 0)) {
    core_charactr_cpp_CCharacter_renderFlames_FUN_00427290(param_1);
    return *(uint *)(param_1 + 0x2618);
  }
  return *(uint *)(param_1 + 0x2618);
}
