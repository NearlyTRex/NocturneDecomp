// Name: core_icepick.cpp_CIcePick_FUN_004f9490
// Address: 004f9490
// Address Range: [[004f9490, 004f9508] [004f9564, 004f958c]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_CIcePick_FUN_004f9490(CIcePick *this_ptr)

#include "nocturne.h"

void __cdecl core_icepick_cpp_CIcePick_FUN_004f9490(CIcePick *this_ptr)

{
  CIcePick *this_ptr_00;
  CVector3f *input_local_point;
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000008;
  SDamageInfo local_6c;
  CVector3f local_30;
  CVector3f local_24;
  int local_18;
  float local_14;
  
  input_local_point =
       core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                 (&(this_ptr->base).base.model,&local_24,in_stack_00000008);
  iVar3 = 0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&local_30,input_local_point);
  iVar2 = 0;
  local_18 = 0;
  do {
    while( true ) {
      if (g_CDemonSetPtr->character_count <= iVar3) {
        if (local_18 == 0) {
          return;
        }
        (*((this_ptr->base).base.base.vtable._ub)->playSound)
                  ((CDemonActor *)this_ptr,"icepick-punch?.wav");
        return;
      }
      this_ptr_00 = *(CIcePick **)((int)g_CDemonSetPtr->characters + iVar2);
      if (this_ptr_00 != this_ptr) break;
LAB_004f94e9:
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    }
    core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0(&local_6c);
    local_6c.damage_amount = core_actor_cpp_getRandomFloat_FUN_0040cc10(90.0,130.0);
    local_6c.weapon_damage_modifier = 0.5;
    local_6c.fire_type = -1;
    local_6c.attacker = (CDemonActor *)this_ptr;
    local_6c.wielder = (CDemonActor *)this_ptr;
    local_14 = local_6c.damage_amount;
    iVar1 = (*(((this_ptr_00->base).base.base.vtable._uc)->_uc).checkCylinderCollisionWorld)
                      ((CCharacter *)this_ptr_00,&local_30,1.0,&local_6c);
    if (iVar1 == 0) goto LAB_004f94e9;
    local_18 = 1;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while( true );
}
