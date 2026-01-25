// Name: core_scat.cpp_FUN_00557d20
// Address: 00557d20
// Address Range: [[00557d20, 00557dad]]
// Convention: unknown
// Signature: undefined core_scat.cpp_FUN_00557d20()

#include "nocturne.h"

/* Signature: byte actors_hero_scat.cpp_FUN_00557d20(uint param_1, uint param_2)
    */

void core_scat_cpp_FUN_00557d20(void)

{
  int iVar1;
  CCharacter *this_ptr;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  SDamageInfo SStack_50;
  
  do {
    iVar1 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&(in_stack_00000004->model).motion_controller);
    if (iVar1 == 100) {
      this_ptr = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (in_stack_00000004->grabbed_by,g_CEnemyClassInfo.name_hash);
      if (this_ptr != (CCharacter *)0x0) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&SStack_50);
        SStack_50.damage_amount = 5.0;
        SStack_50.attacker = &in_stack_00000004->base_actor;
        SStack_50.wielder = &in_stack_00000004->base_actor;
        (*(((this_ptr->base_actor).vtable._uc)->_uc).processDamage)(this_ptr,&SStack_50);
      }
    }
    else {
      core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
    }
  } while (0.0 < in_stack_00000008);
  return;
}
