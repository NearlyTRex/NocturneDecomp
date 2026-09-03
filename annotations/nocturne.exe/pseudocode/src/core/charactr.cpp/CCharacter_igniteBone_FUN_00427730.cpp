// Name: core_charactr.cpp_CCharacter_igniteBone_FUN_00427730
// Address: 00427730
// Address Range: [[00427730, 004277e2]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_igniteBone_FUN_00427730(CCharacter *this_ptr,CVector3f *position,int fire_type,int flame_type,float flame_scale,int include_hero)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_igniteBone_FUN_00427730(CCharacter *this_ptr,CVector3f *position,int fire_type,int flame_type,float flame_scale,int include_hero)

{
  int iVar1;
  int iVar2;
  CSkeleton *skeleton;
  CCharacter *pCVar3;
  
  if ((this_ptr->fire_count < 0x32) &&
     (((include_hero != 0 ||
       (iVar1 = core_actor_cpp_isOfClass_FUN_0040d7e0(&this_ptr->base,"CHero"), iVar1 == 0)
       ) && ((this_ptr->model).model_name[0] != '\0')))) {
    iVar1 = core_skeleton_cpp_CDeformableModelInstance_findClosestBone_FUN_0051e9e0
                      (&this_ptr->model,position);
    iVar2 = 0;
    pCVar3 = this_ptr;
    if (0 < this_ptr->fire_count) {
      do {
        if (iVar1 == pCVar3->fires[0].bone_index) {
          return;
        }
        iVar2 = iVar2 + 1;
        pCVar3 = (CCharacter *)((pCVar3->base).actor_name + 0x18);
      } while (iVar2 < this_ptr->fire_count);
    }
    this_ptr->pending_flame_type = flame_type;
    this_ptr->flame_scale = flame_scale;
    skeleton = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
                         (&this_ptr->model);
    core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_004266a0(this_ptr,skeleton,iVar1);
    (this_ptr->base).is_transparent = 1;
    return;
  }
  return;
}
