// Name: core_basicene.cpp_CBasicEnemy_checkVictim_FUN_0059f6b0
// Address: 0059f6b0
// Address Range: [[0059f6b0, 0059f73f]]
// Convention: __cdecl
// Signature: int __cdecl core_basicene_cpp_CBasicEnemy_checkVictim_FUN_0059f6b0(CBasicEnemy *this_ptr)

#include "nocturne.h"

int __cdecl core_basicene_cpp_CBasicEnemy_checkVictim_FUN_0059f6b0(CBasicEnemy *this_ptr)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(this_ptr + 0x10af8,"Death");
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(this_ptr + 0x10af8,"Animation");
  if (iVar1 == 0) {
    iVar1 = *(int *)(this_ptr + 0x10a78);
    if ((iVar1 == 0) || (iVar1 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x114))(iVar1), iVar1 < 2))
    {
      if (*(int *)(this_ptr + 0x10a78) != 0) {
        return 1;
      }
    }
    else {
      *(uint *)(this_ptr + 0x10a78) = 0;
    }
    uVar2 = unkaddr_0059d350_cpp_FUN_0059db90(this_ptr + 0x10af8);
    unkaddr_0059d350_cpp_FUN_0059d8e0(this_ptr + 0x10af8,uVar2);
    return 0;
  }
  return 1;
}
