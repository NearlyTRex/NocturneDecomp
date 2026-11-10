// Name: core_charactr.cpp_CCharacter_igniteBone_FUN_004308a0
// Address: 004308a0
// Address Range: [[004308a0, 00430952]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_igniteBone_FUN_004308a0(CCharacter *this_ptr,CVector3f *position,int fire_type,int flame_type,float flame_scale,int include_hero)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_igniteBone_FUN_004308a0(CCharacter *this_ptr,CVector3f *position,int fire_type,int flame_type,float flame_scale,int include_hero)

{
  int iVar1;
  int iVar2;
  CSkeleton *skeleton;
  CCharacter *pCVar3;
  
  if ((this_ptr->fire_count < 0x32) &&
     (((include_hero != 0 ||
       (iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(&this_ptr->base,"CHero"), iVar1 == 0)
       ) && ((this_ptr->model).model_name[0] != '\0')))) {
    iVar1 = core_skeleton_cpp_CDeformableModelInstance_findClosestBone_FUN_0056a8f0
                      (&this_ptr->model,position);
    iVar2 = 0;
    pCVar3 = this_ptr;
    if (0 < this_ptr->fire_count) {
      do {
        if (iVar1 == *(int *)&pCVar3->fires[0].field_0x4) {
          return;
        }
        iVar2 = iVar2 + 1;
        pCVar3 = (CCharacter *)((pCVar3->base).actor_name + 0x18);
      } while (iVar2 < this_ptr->fire_count);
    }
    this_ptr->pending_flame_type = flame_type;
    this_ptr->flame_scale = flame_scale;
    skeleton = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                         (&this_ptr->model);
    core_charactr_cpp_CCharacter_spawnFireOnBone_FUN_0042f4d0(this_ptr,skeleton,iVar1);
    (this_ptr->base).is_transparent = 1;
    return;
  }
  return;
}
