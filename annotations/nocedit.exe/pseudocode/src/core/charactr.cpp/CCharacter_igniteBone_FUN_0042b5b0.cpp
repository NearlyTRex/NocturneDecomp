// Name: core_charactr.cpp_CCharacter_igniteBone_FUN_0042b5b0
// Address: 0042b5b0
// Address Range: [[0042b5b0, 0042b662]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_igniteBone_FUN_0042b5b0(CCharacter *this_ptr,CVector3f *position,int fire_type,float spread_rate,int allow_hero,int include_hero)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_igniteBone_FUN_0042b5b0(CCharacter *this_ptr,CVector3f *position,int fire_type,float spread_rate,int allow_hero,int include_hero)

{
  int iVar1;
  int iVar2;
  CSkeleton *skeleton;
  CCharacter *pCVar3;
  
  if ((this_ptr->fire_count < 0x32) &&
     (((include_hero != 0 ||
       (iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(&this_ptr->base,"CHero"), iVar1 == 0)
       ) && ((this_ptr->model).model_name[0] != '\0')))) {
    iVar1 = core_skeleton_cpp_CDeformableModelInstance_findClosestBone_FUN_005a1160
                      (&this_ptr->model,position);
    iVar2 = 0;
    pCVar3 = this_ptr;
    if (0 < this_ptr->fire_count) {
      do {
        if (iVar1 == pCVar3->fire_effects[0].bone_index) {
          return;
        }
        iVar2 = iVar2 + 1;
        pCVar3 = (CCharacter *)((pCVar3->base).actor_name + 0x18);
      } while (iVar2 < this_ptr->fire_count);
    }
    this_ptr->fire_spread_rate = spread_rate;
    this_ptr->fire_allow_hero = allow_hero;
    skeleton = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                         (&this_ptr->model);
    core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_0042a520(this_ptr,skeleton,iVar1);
    (this_ptr->base).is_transparent = 1;
    return;
  }
  return;
}
