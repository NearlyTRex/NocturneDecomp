// Name: core_smiley.cpp_FUN_0054a790
// Address: 0054a790
// Address Range: [[0054a790, 0054aa6f]]
// Convention: __cdecl
// Signature: void __cdecl core_smiley_cpp_FUN_0054a790(CSmiley *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_smiley_cpp_FUN_0054a790(CSmiley *this_ptr,SDamageInfo *damage_info)

{
  CVector3f *initial_velocity;
  uint uVar1;
  CBodyPart *body_part;
  int iVar2;
  float local_14;
  
  if (*(int *)(damage_info + 0x30) < 0xc) {
    return;
  }
  if ((*(int *)(damage_info + 0x30) == 0x6b) && (*(float *)&this_ptr->field_0x10b34 <= 0.0)) {
    iVar2 = *(int *)&this_ptr->field_0x10b30 + 1;
    *(float *)&this_ptr->field_0x10b34 = *(float *)&this_ptr->field_0x10b34 + 1.0;
    *(int *)&this_ptr->field_0x10b30 = iVar2;
    if (2 < iVar2) {
      *(uint *)(damage_info + 0x2c) = 0x3f800000;
      if ((0.0 < *(float *)(damage_info + 0x2c)) && (*(int *)damage_info == -1)) {
        iVar2 = rand();
        switch(iVar2 % 6) {
        case 0:
          uVar1 = *(uint *)&this_ptr->field_0x10b00;
          break;
        case 1:
          uVar1 = *(uint *)&this_ptr->field_0x10b04;
          break;
        case 2:
          uVar1 = *(uint *)&this_ptr->field_0x10b08;
          break;
        case 3:
          uVar1 = *(uint *)&this_ptr->field_0x10b0c;
          break;
        case 4:
          uVar1 = *(uint *)&this_ptr->field_0x10b28;
          break;
        case 5:
          uVar1 = *(uint *)&this_ptr->field_0x10b24;
          break;
        default:
          goto switchD_0054a819_default;
        }
        *(uint *)damage_info = uVar1;
      }
switchD_0054a819_default:
      iVar2 = *(int *)damage_info;
      if (((((iVar2 == *(int *)&this_ptr->field_0x10b00) ||
            (iVar2 == *(int *)&this_ptr->field_0x10b04)) ||
           (iVar2 == *(int *)&this_ptr->field_0x10b08)) ||
          ((iVar2 == *(int *)&this_ptr->field_0x10b0c || (iVar2 == *(int *)&this_ptr->field_0x10b24)
           ))) || (iVar2 == *(int *)&this_ptr->field_0x10b28)) {
        local_14 = *(float *)(damage_info + 0x2c);
        if (*(int *)&g_CGamePtr->field_0x1fc != 0) {
          local_14 = 1.0;
        }
        iVar2 = core_actor_cpp_FUN_0040d060(local_14);
        if (iVar2 != 0) {
          body_part = core_bodypart_cpp_FUN_004154f0
                                ((CVector3f *)&this_ptr->field_0x20,
                                 (UOrientationVector *)&this_ptr->field_0x30,
                                 (CVector3f *)(damage_info + 0xc),(CDemonActor *)this_ptr,0,0,
                                 BLOOD_TYPE_RED);
          core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_004277e0
                    ((CCharacter *)this_ptr,body_part,*(int *)damage_info,0);
          if (*(int *)damage_info == *(int *)&this_ptr->field_0x10b00) {
            core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_004277e0
                      ((CCharacter *)this_ptr,body_part,*(int *)&this_ptr->field_0x10b04,0);
          }
          if (*(int *)&this_ptr->field_0x10b08 == *(int *)damage_info) {
            core_charactr_cpp_CCharacter_dismemberPartInternal_FUN_004277e0
                      ((CCharacter *)this_ptr,body_part,*(int *)&this_ptr->field_0x10b0c,0);
          }
          if (*(int *)&this_ptr->field_0x10b24 == *(int *)damage_info) {
            initial_velocity = (CVector3f *)(damage_info + 0xc);
            core_charactr_cpp_FUN_00427770
                      ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0x10b08,initial_velocity,0);
            core_charactr_cpp_FUN_00427770
                      ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0x10b0c,initial_velocity,0);
            core_charactr_cpp_FUN_00427770
                      ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0x10b00,initial_velocity,0);
            core_charactr_cpp_FUN_00427770
                      ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0x10b04,initial_velocity,0);
            core_charactr_cpp_FUN_00427770
                      ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0x10b28,initial_velocity,0);
          }
          core_charactr_cpp_FUN_0042b260((CCharacter *)this_ptr,"limb?.wav");
          core_bodypart_cpp_CBodyPart_finalizeGeometry_FUN_00416700(body_part);
          if (*(int *)(&this_ptr->field_0x23f4 + *(int *)&this_ptr->field_0x10b28 * 4) == 0) {
            *(uint *)(damage_info + 4) = 0x461c3c00;
          }
          *(float *)(damage_info + 8) = *(float *)(damage_info + 8) * (float)_DAT_005e7845;
        }
      }
      iVar2 = *(int *)damage_info;
      if (iVar2 != *(int *)&this_ptr->field_0x10b28) {
        if ((iVar2 != *(int *)&this_ptr->field_0x10b20) &&
           (iVar2 != *(int *)&this_ptr->field_0x10b24)) {
          *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005e784d;
          return;
        }
        *(uint *)(damage_info + 4) = *(uint *)(damage_info + 4);
        return;
      }
      *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005e7855;
      return;
    }
  }
  *(uint *)(damage_info + 4) = 0;
  return;
}
