// Name: core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_0042bd30
// Address: 0042bd30
// MANUAL RECONSTRUCTION
// Address Range: [[0042bd30, 0042bf26] [03fc4726, 03fc4785]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30(CCharacter *this_ptr,CBodyPart *body_part,int part_index,int render_in_background)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_0042bd30(CCharacter *this_ptr,CBodyPart *body_part,int part_index,int render_in_background)

{
  CVector3f *position;
  SDamageDecal *pSVar1;
  SFire *pSVar2;
  int hand_index;
  int iVar3;
  CMatrix3x4f local_9c;
  CMatrix3x4f local_6c;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  int local_14;
  
  if (((this_ptr->model).model_name[0] != '\0') &&
     ((this_ptr->model).part_data.visibility_flags[part_index] != 0)) {
    core_skeleton_cpp_CDeformableModelInstance_dismemberPart_FUN_005a1040
              (&this_ptr->model,body_part,part_index);
    local_14 = 0;
    if (0 < this_ptr->damage_decal_count) {
      pSVar1 = this_ptr->damage_decals;
      do {
        if (part_index == pSVar1->part_index) {
          core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                    (&pSVar1->transform,
                     (this_ptr->model).bone_transform.bone_world_matrices + pSVar1->bone_index,
                     &local_6c);
          local_9c = local_6c;
          position = core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&local_9c,&local_24);
          local_3c.x = local_9c.m[0].z;
          local_3c.y = local_9c.m[1].z;
          local_3c.z = local_9c.m[2].z;
          core_bodypart_cpp_CBodyPart_addAttachedModel_FUN_0041add0
                    (body_part,CKeyFramedModelInstance_00823a98.model_name,&local_3c,
                     position);
        }
        pSVar1 = pSVar1 + 1;
        local_14 = local_14 + 1;
      } while (local_14 < this_ptr->damage_decal_count);
    }
    iVar3 = 0;
    if (0 < this_ptr->fire_count) {
      pSVar2 = this_ptr->fires;
      do {
        if ((part_index == pSVar2->bone_part) && (-1 < pSVar2->bone_index)) {
          core_xform_cpp_transformVector3x4_FUN_005f4dc0
                    (&local_30,&pSVar2->offset,
                     (this_ptr->model).bone_transform.bone_world_matrices + pSVar2->bone_index);
          core_bodypart_cpp_CBodyPart_addFire_FUN_0041ae50(body_part,&local_30);
        }
        iVar3 = iVar3 + 1;
        pSVar2 = pSVar2 + 1;
      } while (iVar3 < this_ptr->fire_count);
    }
    for (hand_index = 0; hand_index < 2; hand_index = hand_index + 1) {
      if (part_index == this_ptr->carry_hands[hand_index].secondary_bone_index) {
        (*(((this_ptr->base).vtable._uc)->_uc).dropCarriedObject)
                  (this_ptr,hand_index,(CVector3f *)0x0);
      }
    }
    body_part->render_in_background = render_in_background;
    return;
  }
  return;
}
