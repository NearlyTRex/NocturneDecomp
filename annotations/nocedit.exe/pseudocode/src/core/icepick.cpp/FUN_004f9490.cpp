// Name: core_icepick.cpp_FUN_004f9490
// Address: 004f9490
// Address Range: [[004f9490, 004f9508] [004f9564, 004f958c]]
// Convention: unknown
// Signature: void core_icepick_cpp_FUN_004f9490(void)

#include "nocturne.h"

/* Signature: byte actors_hero_icepick.cpp_FUN_004f9490(uint param_1, uint
   param_2) */

void core_icepick_cpp_FUN_004f9490(void)

{
  CCharacter *this_ptr;
  CVector3f *input_local_point;
  int iVar1;
  int iVar2;
  int iVar3;
  CCharacter *in_stack_00000004;
  int in_stack_00000008;
  SDamageInfo local_6c;
  CVector3f local_30;
  CVector3f local_24;
  int local_18;
  float local_14;
  
  input_local_point =
       core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                 (&in_stack_00000004->model,&local_24,in_stack_00000008);
  iVar3 = 0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (&in_stack_00000004->base,&local_30,input_local_point);
  iVar2 = 0;
  local_18 = 0;
  do {
    while( true ) {
      if (g_CDemonSetPtr->damage_listener_count <= iVar3) {
        if (local_18 == 0) {
          return;
        }
        (*((in_stack_00000004->base).vtable._ub)->playSound)
                  (&in_stack_00000004->base,"icepick-punch?.wav");
        return;
      }
      this_ptr = *(CCharacter **)(g_CDemonSetPtr->unk4 + iVar2 + -4);
      if (this_ptr != in_stack_00000004) break;
LAB_004f94e9:
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    }
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_6c);
    local_6c.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(90.0,130.0);
    local_6c.weapon_damage_modifier = 0.5;
    local_6c.unknown = -1;
    local_6c.attacker = &in_stack_00000004->base;
    local_6c.wielder = &in_stack_00000004->base;
    local_14 = local_6c.damage_amount;
    iVar1 = (*(((this_ptr->base).vtable._uc)->_uc).checkCylinderCollisionWorld)
                      (this_ptr,&local_30,1.0,&local_6c);
    if (iVar1 == 0) goto LAB_004f94e9;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while( true );
}
