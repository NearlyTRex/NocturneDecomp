// Name: core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0
// Address: 004277e0
// Address Range: [[004277e0, 004279f6]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_004277e0(CCharacter *this_ptr,CBodyPart *body_part,int part_index,int render_in_background)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_004277e0(CCharacter *this_ptr,CBodyPart *body_part,int part_index,int render_in_background)

{
  int *piVar1;
  CCharacter *pCVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStackY_1050 [990];
  CBodyPart *this_ptr_00;
  char *model_name;
  CVector3f *position_offset;
  CVector3f *euler_angles;
  CVector3f local_8c [3];
  CVector3f local_68;
  CVector3f local_5c;
  CVector3f local_50;
  CVector3f local_44;
  CVector3f local_38;
  CVector3f local_2c;
  byte *local_20;
  byte *local_1c;
  int local_18;
  int local_14;
  
  bVar6 = 0;
  if ((this_ptr->field_0x2514 != '\0') && (*(int *)(&this_ptr->field_0x23f4 + part_index * 4) != 0))
  {
    core_skeleton_cpp_CDeformableModelInstance_dismemberPart_FUN_00548130
              ((CDeformableModelInstance *)&this_ptr->field_0x2b4,body_part,part_index);
    local_18 = 0;
    if (0 < *(int *)&this_ptr->field_0x3448) {
      local_20 = &this_ptr->field_0x1134;
      piVar1 = (int *)&this_ptr->field_0x344c;
      do {
        if (part_index == *piVar1) {
          core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(piVar1 + 2,local_20 + piVar1[1] * 0x30);
          puVar4 = (uint *)&stack0xffffff38;
          puVar5 = (uint *)&stack0xffffff68;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          core_xform_cpp_FUN_00591de0(&stack0xffffff68);
          euler_angles = &local_5c;
          local_50._0_4_ = local_8c[0]._0_4_;
          local_50._4_4_ = local_8c[1]._4_4_;
          local_50._8_4_ = local_8c[2]._8_4_;
          position_offset = &local_44;
          local_5c._0_4_ = local_68._0_4_;
          *(uint *)((int)&local_5c + (uint)bVar6 * -8 + 4) =
               *(uint *)((int)&local_68 + (uint)bVar6 * -8 + 4);
          *(uint *)((int)&local_5c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
               *(uint *)((int)&local_68 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          model_name = &DAT_007bdb54;
          local_44._0_4_ = local_50._0_4_;
          *(uint *)((int)&local_44 + (uint)bVar6 * -8 + 4) =
               *(uint *)((int)&local_50 + (uint)bVar6 * -8 + 4);
          this_ptr_00 = body_part;
          *(uint *)((int)&local_44 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
               *(uint *)((int)&local_50 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          core_bodypart_cpp_FUN_00417610(this_ptr_00,model_name,position_offset,euler_angles);
        }
        piVar1 = piVar1 + 0xe;
        local_18 = local_18 + 1;
      } while (local_18 < *(int *)&this_ptr->field_0x3448);
    }
    local_14 = 0;
    if (0 < *(int *)&this_ptr->field_0x3564) {
      local_1c = &this_ptr->field_0x1134;
      piVar1 = (int *)&this_ptr->field_0x3570;
      do {
        if ((part_index == *piVar1) && (-1 < piVar1[1])) {
          core_xform_cpp_FUN_00591530(piVar1 + 2,local_1c + piVar1[1] * 0x30);
          local_38._0_4_ = local_2c._0_4_;
          *(uint *)((int)&local_38 + (uint)bVar6 * -8 + 4) =
               *(uint *)((int)&local_2c + (uint)bVar6 * -8 + 4);
          *(uint *)((int)&local_38 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
               *(uint *)((int)&local_2c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          core_bodypart_cpp_FUN_00417690(body_part,&local_38);
        }
        piVar1 = piVar1 + 6;
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)&this_ptr->field_0x3564);
    }
    iVar3 = 0;
    pCVar2 = this_ptr;
    do {
      if (part_index == *(int *)&pCVar2->field_0x261c) {
        (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x130))(this_ptr,iVar3,0);
      }
      iVar3 = iVar3 + 1;
      pCVar2 = (CCharacter *)&pCVar2->field_0x78;
    } while (iVar3 < 2);
    *(int *)&body_part->field_0x2b4 = render_in_background;
    return;
  }
  return;
}
