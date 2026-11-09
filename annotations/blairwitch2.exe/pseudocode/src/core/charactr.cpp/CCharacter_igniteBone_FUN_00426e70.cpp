// Name: core_charactr.cpp_CCharacter_igniteBone_FUN_00426e70
// Address: 00426e70
// Address Range: [[00426e70, 00426f22]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_igniteBone_FUN_00426e70(CCharacter *this_ptr,CVector3f *position,int fire_type,int flame_type,float flame_scale,int include_hero)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_igniteBone_FUN_00426e70(CCharacter *this_ptr,CVector3f *position,int fire_type,int flame_type,float flame_scale,int include_hero)

{
  int iVar1;
  int iVar2;
  CSkeleton *skeleton;
  CCharacter *pCVar3;
  
  if ((*(int *)&this_ptr->field_0x3564 < 0x32) &&
     (((include_hero != 0 ||
       (iVar1 = core_actor_cpp_FUN_0040c840((CDemonActor *)this_ptr,"KCHero" + 1),
       iVar1 == 0)) && (this_ptr->field_0x2514 != '\0')))) {
    iVar1 = core_skeleton_cpp_FUN_00548250
                      ((CDeformableModelInstance *)&this_ptr->field_0x2b4,position);
    iVar2 = 0;
    pCVar3 = this_ptr;
    if (0 < *(int *)&this_ptr->field_0x3564) {
      do {
        if (iVar1 == *(int *)&pCVar3->field_0x3574) {
          return;
        }
        iVar2 = iVar2 + 1;
        pCVar3 = (CCharacter *)&pCVar3->field_0x18;
      } while (iVar2 < *(int *)&this_ptr->field_0x3564);
    }
    *(int *)&this_ptr->field_0x3568 = flame_type;
    *(float *)&this_ptr->field_0x356c = flame_scale;
    skeleton = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                         ((CDeformableModelInstance *)&this_ptr->field_0x2b4);
    core_charactr_cpp_FUN_00425bb0(this_ptr,skeleton,iVar1);
    *(uint *)&this_ptr->field_0xfc = 1;
    return;
  }
  return;
}
