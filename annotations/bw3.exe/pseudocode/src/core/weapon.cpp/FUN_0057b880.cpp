// Name: core_weapon.cpp_FUN_0057b880
// Address: 0057b880
// Address Range: [[0057b880, 0057b92e]]
// Convention: unknown
// Signature: undefined4 core_weapon_cpp_FUN_0057b880(int param_1)

#include "nocturne.h"

uint core_weapon_cpp_FUN_0057b880(int param_1)

{
  CGame *this_ptr;
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x570) == 0) {
    iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                      (*(uint *)(param_1 + 0x304),g_CHeroClassInfo.name_hash);
    this_ptr = g_CGamePtr;
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x56c) == 10) {
        iVar2 = *(int *)(iVar1 + 0x20b80);
      }
      else {
        iVar2 = *(int *)(iVar1 + 0x20b84);
      }
      if (iVar2 < *(int *)(param_1 + 0x58c)) {
        if (*(int *)(param_1 + 0x56c) == 10) {
          core_game_cpp_FUN_004bd910(g_CGamePtr);
        }
        return 0;
      }
      iVar2 = iVar2 - *(int *)(param_1 + 0x58c);
      if (*(int *)(param_1 + 0x56c) == 10) {
        *(int *)(iVar1 + 0x20b80) = iVar2;
        core_game_cpp_FUN_004bd910(this_ptr);
        return 1;
      }
      *(int *)(iVar1 + 0x20b84) = iVar2;
      return 1;
    }
  }
  return 1;
}
