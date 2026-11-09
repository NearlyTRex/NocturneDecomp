// Name: core_charactr.cpp_FUN_004308a0
// Address: 004308a0
// Address Range: [[004308a0, 00430952]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_004308a0(CCharacter *this_ptr,CVector3f *position,int fire_type,int flame_type,float flame_scale,int include_hero)

#include "nocturne.h"

void __cdecl core_charactr_cpp_FUN_004308a0(CCharacter *this_ptr,CVector3f *position,int fire_type,int flame_type,float flame_scale,int include_hero)

{
  int iVar1;
  int iVar2;
  CSkeleton *skeleton;
  CCharacter *pCVar3;
  
  if ((*(int *)&this_ptr->field_0x3120 < 0x32) &&
     (((include_hero != 0 ||
       (iVar1 = core_actor_cpp_FUN_0040c550((CDemonActor *)this_ptr,"CHero"), iVar1 == 0))
      && (this_ptr->field_0x24a8 != '\0')))) {
    iVar1 = core_skeleton_cpp_FUN_0056a8f0
                      ((CDeformableModelInstance *)&this_ptr->field_0x158,position);
    iVar2 = 0;
    pCVar3 = this_ptr;
    if (0 < *(int *)&this_ptr->field_0x3120) {
      do {
        if (iVar1 == *(int *)&pCVar3->field_0x3130) {
          return;
        }
        iVar2 = iVar2 + 1;
        pCVar3 = (CCharacter *)&pCVar3->field_0x18;
      } while (iVar2 < *(int *)&this_ptr->field_0x3120);
    }
    *(int *)&this_ptr->field_0x3124 = flame_type;
    *(float *)&this_ptr->field_0x3128 = flame_scale;
    skeleton = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                         ((CDeformableModelInstance *)&this_ptr->field_0x158);
    core_charactr_cpp_FUN_0042f4d0(this_ptr,skeleton,iVar1);
    *(uint *)&this_ptr->field_0xfc = 1;
    return;
  }
  return;
}
