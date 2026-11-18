// Name: core_charactr.cpp_CCharacter_shatter_FUN_0042ff70
// Address: 0042ff70
// Address Range: [[0042ff70, 0042ffda]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_shatter_FUN_0042ff70(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_shatter_FUN_0042ff70(CCharacter *this_ptr)

{
  CEnemy *this_ptr_00;
  
  (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,"glass-1.wav@2.0");
  if ((this_ptr->model).model_name[0] != '\0') {
    core_skeleton_cpp_CDeformableModelInstance_shatter_FUN_0054f7f0
              (&this_ptr->model,&(this_ptr->base).location.position,&(this_ptr->base).orient.vec,0);
  }
  this_ptr_00 = (CEnemy *)
                core_actor_cpp_castToClassHash_FUN_0040c840
                          (&this_ptr->base,g_CEnemyClassInfo.name_hash);
  if (this_ptr_00 == (CEnemy *)0x0) {
    (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
    return;
  }
  core_enemy_cpp_CEnemy_spawnItems_FUN_00489c90(this_ptr_00);
  (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
  return;
}
