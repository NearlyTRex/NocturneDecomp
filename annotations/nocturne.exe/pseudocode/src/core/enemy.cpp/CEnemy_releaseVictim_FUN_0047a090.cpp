// Name: core_enemy.cpp_CEnemy_releaseVictim_FUN_0047a090
// Address: 0047a090
// Address Range: [[0047a090, 0047a11d]]
// Convention: unknown
// Signature: void core_enemy_cpp_CEnemy_releaseVictim_FUN_0047a090(CCharacter *param_1)

#include "nocturne.h"

void core_enemy_cpp_CEnemy_releaseVictim_FUN_0047a090(CCharacter *param_1)

{
  int iVar1;
  CCharacter *pCVar2;
  CVector3f CStack_10;
  
  iVar1 = *(int *)(param_1[1].base.actor_name + 0x18);
  if (iVar1 != 0) {
    pCVar2 = (CCharacter *)(**(code **)(*(int *)(iVar1 + 0x14c) + 0xec))(iVar1);
    if (pCVar2 == param_1) {
      iVar1 = *(int *)(param_1[1].base.actor_name + 0x18);
      (**(code **)(*(int *)(iVar1 + 0x14c) + 0xe8))(iVar1);
      if (((byte *)(param_1->base).validation_magic == &DAT_0078a123) &&
         ((param_1->model).model_ptr != (CDeformableModel *)0x0)) {
        CStack_10.z = -0.001;
        CStack_10.x = 0.0;
        CStack_10.y = 0.0;
        core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,&CStack_10);
      }
      param_1 = param_1 + 1;
      (param_1->base).actor_name[0x18] = '\0';
      (param_1->base).actor_name[0x19] = '\0';
      (param_1->base).actor_name[0x1a] = '\0';
      (param_1->base).actor_name[0x1b] = '\0';
      return;
    }
  }
  return;
}
