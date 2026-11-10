// Name: core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00431210
// Address: 00431210
// Address Range: [[00431210, 00431426]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00431210(CCharacter *this_ptr,CBodyPart *body_part,int part_index,int render_in_background)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_00431210(CCharacter *this_ptr,CBodyPart *body_part,int part_index,int render_in_background)

{
  int *piVar1;
  SFire *pSVar2;
  CCharacter *pCVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_1050 [15];
  byte *apuStackY_1014 [975];
  CBodyPart *this_ptr_00;
  char *model_name;
  CVector3f *position_offset;
  CVector3f *euler_angles;
  float local_8c;
  float local_7c;
  uint local_6c;
  float local_68;
  float afStack_64 [2];
  CVector3f local_5c;
  float local_50;
  float local_4c [2];
  CVector3f local_44;
  CVector3f local_38;
  float local_2c;
  byte *apuStack_28 [4];
  int local_18;
  int local_14;
  
  bVar7 = 0;
  if (((this_ptr->model).model_name[0] != '\0') &&
     (*(int *)(&(this_ptr->model).field_0x2140 + part_index * 4) != 0)) {
    core_skeleton_cpp_CDeformableModelInstance_dismemberPart_FUN_0056a7d0
              (&this_ptr->model,body_part,part_index);
    local_18 = 0;
    if (0 < *(int *)&this_ptr->field_0x3004) {
      apuStack_28[2] = &(this_ptr->model).field_0xe80;
      piVar1 = (int *)&this_ptr->field_0x3008;
      do {
        if (part_index == *piVar1) {
          core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
                    (piVar1 + 2,apuStack_28[2] + piVar1[1] * 0x30);
          puVar5 = (uint *)&stack0xffffff38;
          puVar6 = (uint *)&stack0xffffff68;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
            puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
          }
          core_xform_cpp_matrixToEulerAngles_FUN_005b5930(&stack0xffffff68);
          euler_angles = &local_5c;
          local_50 = local_8c;
          local_4c[0] = local_7c;
          local_4c[1] = (float)local_6c;
          position_offset = &local_44;
          local_5c.x = local_68;
          *(float *)((int)&local_5c + (uint)bVar7 * -8 + 4) = afStack_64[(uint)bVar7 * -2];
          *(float *)((int)&local_5c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
               afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          model_name = &DAT_007c623c;
          local_44.x = local_50;
          *(float *)((int)&local_44 + (uint)bVar7 * -8 + 4) = local_4c[(uint)bVar7 * -2];
          this_ptr_00 = body_part;
          *(float *)((int)&local_44 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
               local_4c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          core_bodypart_cpp_CBodyPart_addAttachedModel_FUN_0041aaa0
                    (this_ptr_00,model_name,position_offset,euler_angles);
        }
        piVar1 = piVar1 + 0xe;
        local_18 = local_18 + 1;
      } while (local_18 < *(int *)&this_ptr->field_0x3004);
    }
    local_14 = 0;
    if (0 < this_ptr->fire_count) {
      apuStack_28[3] = &(this_ptr->model).field_0xe80;
      pSVar2 = this_ptr->fires;
      do {
        if ((part_index == *(int *)pSVar2) && (-1 < *(int *)&pSVar2->field_0x4)) {
          core_xform_cpp_FUN_005b5080
                    (&pSVar2->field_0x8,apuStack_28[3] + *(int *)&pSVar2->field_0x4 * 0x30);
          local_38.x = local_2c;
          *(byte **)((int)&local_38 + (uint)bVar7 * -8 + 4) = apuStack_28[(uint)bVar7 * -2];
          *(byte **)((int)&local_38 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
               apuStack_28[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          core_bodypart_cpp_CBodyPart_addFire_FUN_0041ab20(body_part,&local_38);
        }
        pSVar2 = pSVar2 + 1;
        local_14 = local_14 + 1;
      } while (local_14 < this_ptr->fire_count);
    }
    iVar4 = 0;
    pCVar3 = this_ptr;
    do {
      if (part_index == *(int *)&pCVar3->field_0x25ac) {
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
