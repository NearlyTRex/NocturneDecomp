// Name: core_enemy.cpp_CEnemy_FUN_004aa030
// Address: 004aa030
// Address Range: [[004aa030, 004aa0bd]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_FUN_004aa030(CEnemy *this_ptr)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_FUN_004aa030(CEnemy *this_ptr)

{
  CEnemy *pCVar1;
  
  if (*(int *)(this_ptr->unk2 + 4) != 0) {
    pCVar1 = (CEnemy *)(**(code **)(*(int *)(*(int *)(this_ptr->unk2 + 4) + 0x154) + 0x108))();
    if (pCVar1 == this_ptr) {
      (**(code **)(*(int *)(*(int *)(this_ptr->unk2 + 4) + 0x154) + 0x104))();
      if (((int *)(this_ptr->base).base.validation_magic == &g_ActorMagicNumber) &&
         ((this_ptr->base).model.model_ptr != (CDeformableModel *)0x0)) {
        core_charactr_cpp_CCharacter_FUN_00428f40(&this_ptr->base);
      }
      this_ptr->unk2[4] = '\0';
      this_ptr->unk2[5] = '\0';
      this_ptr->unk2[6] = '\0';
      this_ptr->unk2[7] = '\0';
      return;
    }
  }
  return;
}
