// Name: core_melee.cpp_CMelee_fillAttackDamageInfo_FUN_004cef80
// Address: 004cef80
// Address Range: [[004cef80, 004cefd3]]
// Convention: unknown
// Signature: void core_melee_cpp_CMelee_fillAttackDamageInfo_FUN_004cef80(CCharacter *param_1,int param_2,SDamageInfo *param_3,CDemonActor *param_4)

#include "nocturne.h"

void core_melee_cpp_CMelee_fillAttackDamageInfo_FUN_004cef80(CCharacter *param_1,int param_2,SDamageInfo *param_3,CDemonActor *param_4)

{
  float fVar1;
  int unaff_ESI;
  CDemonActor *in_stack_fffffff4;
  
  core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040bca0
            (&param_1->base,param_2,param_3,param_4);
  fVar1 = (float)(*(((param_1->base).vtable._uc)->_uc).getGrabbed)
                           (param_1,in_stack_fffffff4,unaff_ESI);
  param_3->damage_amount = fVar1;
  param_3->dismember_prob = (param_1->model).transformed_vertices[0x51].z;
  param_3->ammo_type = (EAmmoType)(param_1->model).transformed_vertices[0x53].z;
  return;
}
