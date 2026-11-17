// Name: core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0
// Address: 004277e0
// Address Range: [[004277e0, 004279f6]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_004277e0(CCharacter *this_ptr,CBodyPart *body_part,int part_index,int render_in_background)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_004277e0(CCharacter *this_ptr,CBodyPart *body_part,int part_index,int render_in_background)

{
  SDamageDecal *pSVar1;
  SFire *pSVar2;
  CCharacter *pCVar3;
  int iVar4;
  float *pfVar5;
  CMatrix3x4f *pCVar6;
  byte bVar7;
  float afStackY_1050 [990];
  CBodyPart *this_ptr_00;
  char *model_name;
  CVector3f *position_offset;
  CVector3f *euler_angles;
  CVector3f *in_stack_ffffff38;
  CMatrix3x4f local_98;
  float local_68;
  float afStack_64 [2];
  CVector3f local_5c;
  float local_50;
  float local_4c [2];
  CVector3f local_44;
  CVector3f local_38;
  CVector3f local_2c;
  CMatrix3x4f *local_20;
  CMatrix3x4f *local_1c;
  int local_18;
  int local_14;
  
  bVar7 = 0;
  if (((this_ptr->model).model_name[0] != '\0') &&
     ((this_ptr->model).part_data.visibility_flags[part_index] != 0)) {
    core_skeleton_cpp_CDeformableModelInstance_dismemberPart_FUN_00548130
              (&this_ptr->model,body_part,part_index);
    local_18 = 0;
    if (0 < this_ptr->damage_decal_count) {
      local_20 = (this_ptr->model).bone_transform.bone_model_matrices;
      pSVar1 = this_ptr->damage_decals;
      do {
        if (part_index == pSVar1->part_index) {
          core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
                    (&pSVar1->transform,local_20 + pSVar1->bone_index,
                     (CMatrix3x4f *)&stack0xffffff38);
          pfVar5 = (float *)&stack0xffffff38;
          pCVar6 = &local_98;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            pCVar6->m[0].w = *pfVar5;
            pfVar5 = pfVar5 + (uint)bVar7 * -2 + 1;
            pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
          }
          core_xform_cpp_matrixToEulerAngles_FUN_00591de0(&local_98,in_stack_ffffff38);
          euler_angles = &local_5c;
          local_50 = local_98.m[0].z;
          local_4c[0] = local_98.m[1].z;
          local_4c[1] = local_98.m[2].z;
          position_offset = &local_44;
          local_5c.x = local_68;
          *(float *)((int)&local_5c + (uint)bVar7 * -8 + 4) = afStack_64[(uint)bVar7 * -2];
          *(float *)((int)&local_5c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
               afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          model_name = g_StakeModelInstance.model_name;
          local_44.x = local_50;
          *(float *)((int)&local_44 + (uint)bVar7 * -8 + 4) = local_4c[(uint)bVar7 * -2];
          this_ptr_00 = body_part;
          *(float *)((int)&local_44 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
               local_4c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          core_bodypart_cpp_CBodyPart_addAttachedModel_FUN_00417610
                    (this_ptr_00,model_name,position_offset,euler_angles);
        }
        pSVar1 = pSVar1 + 1;
        local_18 = local_18 + 1;
      } while (local_18 < this_ptr->damage_decal_count);
    }
    local_14 = 0;
    if (0 < this_ptr->fire_count) {
      local_1c = (this_ptr->model).bone_transform.bone_model_matrices;
      pSVar2 = this_ptr->fires;
      do {
        if ((part_index == pSVar2->bone_part) && (-1 < pSVar2->bone_index)) {
          core_xform_cpp_transformVector3x4_FUN_00591530
                    (&pSVar2->offset,local_1c + pSVar2->bone_index,&local_2c);
          local_38.x = local_2c.x;
          *(uint *)((int)&local_38 + (uint)bVar7 * -8 + 4) =
               *(uint *)((int)&local_2c + (uint)bVar7 * -8 + 4);
          *(uint *)((int)&local_38 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
               *(uint *)((int)&local_2c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
          core_bodypart_cpp_CBodyPart_addFire_FUN_00417690(body_part,&local_38);
        }
        pSVar2 = pSVar2 + 1;
        local_14 = local_14 + 1;
      } while (local_14 < this_ptr->fire_count);
    }
    iVar4 = 0;
    pCVar3 = this_ptr;
    do {
      if (part_index == pCVar3->carry_hands[0].secondary_bone_index) {
        (*(((this_ptr->base).vtable._uc)->_uc).dropCarriedObject)(this_ptr,iVar4,(CVector3f *)0x0);
      }
      iVar4 = iVar4 + 1;
      pCVar3 = (CCharacter *)(pCVar3->base).create_event;
    } while (iVar4 < 2);
    body_part->render_in_background = render_in_background;
    return;
  }
  return;
}
