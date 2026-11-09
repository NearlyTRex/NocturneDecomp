// Name: core_charactr.cpp_FUN_00430590
// Address: 00430590
// Address Range: [[00430590, 004307a6]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_00430590(CCharacter *this_ptr,CBodyPart *body_part,int part_index,int render_in_background)

#include "nocturne.h"

void __cdecl core_charactr_cpp_FUN_00430590(CCharacter *this_ptr,CBodyPart *body_part,int part_index,int render_in_background)

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
  if ((this_ptr->field_0x24a8 != '\0') && (*(int *)(&this_ptr->field_0x2298 + part_index * 4) != 0))
  {
    core_skeleton_cpp_FUN_0054f360(&this_ptr->field_0x158,body_part,part_index);
    local_18 = 0;
    if (0 < *(int *)&this_ptr->field_0x3284) {
      local_20 = &this_ptr->field_0xfd8;
      piVar1 = (int *)&this_ptr->field_0x3288;
      do {
        if (part_index == *piVar1) {
          core_xform_cpp_multiplyMatrix3x4_FUN_005833e0(piVar1 + 2,local_20 + piVar1[1] * 0x30);
          puVar4 = (uint *)&stack0xffffff38;
          puVar5 = (uint *)&stack0xffffff68;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          core_xform_cpp_FUN_00583b10(&stack0xffffff68);
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
          model_name = &DAT_007e2bac;
          local_44._0_4_ = local_50._0_4_;
          *(uint *)((int)&local_44 + (uint)bVar6 * -8 + 4) =
               *(uint *)((int)&local_50 + (uint)bVar6 * -8 + 4);
          this_ptr_00 = body_part;
          *(uint *)((int)&local_44 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
               *(uint *)((int)&local_50 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          core_bodypart_cpp_CBodyPart_addAttachedModel_FUN_004166d0
                    (this_ptr_00,model_name,position_offset,euler_angles);
        }
        piVar1 = piVar1 + 0xe;
        local_18 = local_18 + 1;
      } while (local_18 < *(int *)&this_ptr->field_0x3284);
    }
    local_14 = 0;
    if (0 < *(int *)&this_ptr->field_0x33a0) {
      local_1c = &this_ptr->field_0xfd8;
      piVar1 = (int *)&this_ptr->field_0x33ac;
      do {
        if ((part_index == *piVar1) && (-1 < piVar1[1])) {
          core_xform_cpp_FUN_00583260(piVar1 + 2,local_1c + piVar1[1] * 0x30);
          local_38._0_4_ = local_2c._0_4_;
          *(uint *)((int)&local_38 + (uint)bVar6 * -8 + 4) =
               *(uint *)((int)&local_2c + (uint)bVar6 * -8 + 4);
          *(uint *)((int)&local_38 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
               *(uint *)((int)&local_2c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          core_bodypart_cpp_FUN_00416750(body_part,&local_38);
        }
        piVar1 = piVar1 + 6;
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)&this_ptr->field_0x33a0);
    }
    iVar3 = 0;
    pCVar2 = this_ptr;
    do {
      if (part_index == *(int *)&pCVar2->field_0x25ac) {
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x128))(this_ptr,iVar3,0);
      }
      iVar3 = iVar3 + 1;
      pCVar2 = (CCharacter *)&pCVar2->field_0x78;
    } while (iVar3 < 2);
    *(int *)&body_part->field_0x158 = render_in_background;
    return;
  }
  return;
}
