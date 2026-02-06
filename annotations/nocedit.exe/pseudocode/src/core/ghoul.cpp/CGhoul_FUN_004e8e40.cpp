// Name: core_ghoul.cpp_CGhoul_FUN_004e8e40
// Address: 004e8e40
// Address Range: [[004e8e40, 004e8ed3]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_FUN_004e8e40(CGhoul *this_ptr)

#include "nocturne.h"

void __cdecl core_ghoul_cpp_CGhoul_FUN_004e8e40(CGhoul *this_ptr)

{
  int iVar1;
  
  core_enemy_cpp_CEnemy_FUN_004aa250(&this_ptr->base);
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,4);
  switch(iVar1) {
  case 0:
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
              (&(this_ptr->base).base.model,"guul.dfm");
    break;
  case 1:
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
              (&(this_ptr->base).base.model,"chubgul2.dfm");
    return;
  case 2:
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
              (&(this_ptr->base).base.model,"guullmap.dfm");
    return;
  case 3:
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
              (&(this_ptr->base).base.model,"longguul.dfm");
    return;
  case 4:
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
              (&(this_ptr->base).base.model,"chubguul.dfm");
    return;
  }
  return;
}
