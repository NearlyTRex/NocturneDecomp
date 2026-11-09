// Name: core_hero.cpp_FUN_004cfc80
// Address: 004cfc80
// Address Range: [[004cfc80, 004cfd5b]]
// Convention: unknown
// Signature: undefined4 core_hero_cpp_FUN_004cfc80(CHero *param_1)

#include "nocturne.h"

uint core_hero_cpp_FUN_004cfc80(CHero *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(CDemonActor **)(param_1 + *(int *)(param_1 + 0x247e4) * 4 + 0x24978) == (CDemonActor *)0x0)
  {
    return 0;
  }
  iVar1 = core_actor_cpp_FUN_0040c840
                    (*(CDemonActor **)(param_1 + *(int *)(param_1 + 0x247e4) * 4 + 0x24978),
                     "N@CHealthItem" + 2);
  if (iVar1 == 0) {
    iVar1 = core_actor_cpp_FUN_0040c840
                      (*(CDemonActor **)(param_1 + *(int *)(param_1 + 0x247e4) * 4 + 0x24978),
                       "CAmmo");
    if (iVar1 == 0) {
      iVar1 = core_actor_cpp_FUN_0040c840
                        (*(CDemonActor **)(param_1 + *(int *)(param_1 + 0x247e4) * 4 + 0x24978),
                         "CBoxActor");
      if (iVar1 == 0) {
        iVar1 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x154))(param_1);
        if (iVar1 != 0) {
          return 0;
        }
        iVar1 = core_hero_cpp_CHero_findItemUseTarget_FUN_004cfb00(param_1);
        if (iVar1 != 0) {
          return 0;
        }
        uVar2 = core_inv_cpp_FUN_004dc8c0
                          (param_1 + 0x2437c,
                           *(uint *)(param_1 + *(int *)(param_1 + 0x247e4) * 4 + 0x24978));
        return uVar2;
      }
    }
  }
  uVar2 = core_inv_cpp_FUN_004dc8c0
                    (param_1 + 0x2437c,
                     *(uint *)(param_1 + *(int *)(param_1 + 0x247e4) * 4 + 0x24978));
  return uVar2;
}
