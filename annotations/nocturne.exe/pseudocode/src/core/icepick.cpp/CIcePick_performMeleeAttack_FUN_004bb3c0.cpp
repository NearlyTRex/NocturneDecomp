// Name: core_icepick.cpp_CIcePick_performMeleeAttack_FUN_004bb3c0
// Address: 004bb3c0
// Address Range: [[004bb3c0, 004bb4bc]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_CIcePick_performMeleeAttack_FUN_004bb3c0(CCharacter *param_1,int param_2)

#include "nocturne.h"

void __cdecl core_icepick_cpp_CIcePick_performMeleeAttack_FUN_004bb3c0(CCharacter *param_1,int param_2)

{
  CCharacter *this_ptr;
  CVector3f *input_local_point;
  int iVar1;
  int iVar2;
  int iVar3;
  SDamageInfo local_6c;
  CVector3f local_30;
  CVector3f local_24;
  int local_18;
  float local_14;
  
  input_local_point =
       core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                 (&param_1->model,&local_24,param_2);
  iVar3 = 0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            (&param_1->base,&local_30,input_local_point);
  iVar2 = 0;
  local_18 = 0;
  do {
    while( true ) {
      if (*(int *)(0x01E57284 + 0x14ecb0) <= iVar3) {
        if (local_18 == 0) {
          return;
        }
        (*((param_1->base).vtable._ub)->playSound)(&param_1->base,"icepick-punch?.wav");
        return;
      }
      this_ptr = *(CCharacter **)(0x01E57284 + 0x14ecb4 + iVar2);
      if (this_ptr != param_1) break;
LAB_004bb419:
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    }
    core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_6c);
    local_6c.damage_amount =
         (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x42b40000,0x43020000);
    local_6c.dismember_prob = 0.5;
    local_6c.hit_part_index = -1;
    local_6c.attacker = &param_1->base;
    local_6c.wielder = &param_1->base;
    local_14 = local_6c.damage_amount;
    iVar1 = (*(((this_ptr->base).vtable._uc)->_uc).isGrabbable)(this_ptr,(CDemonActor *)&local_30);
    if (iVar1 == 0) goto LAB_004bb419;
    local_18 = 1;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while( true );
}
