// Name: core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0
// Address: 00427eb0
// Address Range: [[00427eb0, 00428099]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00427eb0(CCharacter *this_ptr,CBodyPart *body_part,int part_index,int render_in_background)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00427eb0(CCharacter *this_ptr,CBodyPart *body_part,int part_index,int render_in_background)

{
  CVector3f *position;
  SDamageDecal *pSVar1;
  SFire *pSVar2;
  int iVar3;
  CCharacter *pCVar4;
  float *pfVar5;
  CMatrix3x4f *pCVar6;
  byte bVar7;
  CMatrix3x4f local_9c;
  float local_6c [12];
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CMatrix3x4f *local_18;
  int local_14;
  
  bVar7 = 0;
  if (((this_ptr->model).model_name[0] != '\0') &&
     ((this_ptr->model).part_data.visibility_flags[part_index] != 0)) {
    core_skeleton_cpp_CDeformableModelInstance_dismemberPart_FUN_0051e8c0
              (&this_ptr->model,body_part,part_index);
    local_14 = 0;
    if (0 < this_ptr->damage_decal_count) {
      local_18 = (this_ptr->model).bone_transform.bone_world_matrices;
      pSVar1 = this_ptr->damage_decals;
      do {
        if (part_index == pSVar1->part_index) {
          core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00
                    (&pSVar1->transform,local_18 + pSVar1->bone_index);
          pfVar5 = local_6c;
          pCVar6 = &local_9c;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            pCVar6->m[0].w = *pfVar5;
            pfVar5 = pfVar5 + (uint)bVar7 * -2 + 1;
            pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
          }
          position = core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&local_9c,&local_3c);
          local_30.x = local_9c.m[0].z;
          local_30.y = local_9c.m[1].z;
          local_30.z = local_9c.m[2].z;
          core_bodypart_cpp_CBodyPart_addAttachedModel_FUN_00417ac0
                    (body_part,&DAT_0076595c,&local_30,position);
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
          core_xform_cpp_transformVector3x4_FUN_0055a8b0
                    (&local_24,&pSVar2->offset,
                     (this_ptr->model).bone_transform.bone_world_matrices + pSVar2->bone_index);
          core_bodypart_cpp_CBodyPart_addFire_FUN_00417b40(body_part,&local_24);
        }
        iVar3 = iVar3 + 1;
        pSVar2 = pSVar2 + 1;
      } while (iVar3 < this_ptr->fire_count);
    }
    iVar3 = 0;
    pCVar4 = this_ptr;
    do {
      if (part_index == pCVar4->carry_hands[0].secondary_bone_index) {
        (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr);
      }
      iVar3 = iVar3 + 1;
      pCVar4 = (CCharacter *)&(pCVar4->base).orient_matrix.m[0].z;
    } while (iVar3 < 2);
    body_part->render_in_background = render_in_background;
    return;
  }
  return;
}
