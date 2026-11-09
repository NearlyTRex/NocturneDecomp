// Name: core_smiley.cpp_FUN_0056ce10
// Address: 0056ce10
// Address Range: [[0056ce10, 0056d0ef]]
// Convention: __cdecl
// Signature: void __cdecl core_smiley_cpp_FUN_0056ce10(CSmiley *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_smiley_cpp_FUN_0056ce10(CSmiley *this_ptr,SDamageInfo *damage_info)

{
  CVector3f *initial_velocity;
  uint uVar1;
  CBodyPart *body_part;
  int iVar2;
  float local_14;
  
  if (*(int *)(damage_info + 0x30) < 0xc) {
    return;
  }
  if ((*(int *)(damage_info + 0x30) == 0x6b) && (*(float *)&this_ptr->field_0xc2a4 <= 0.0)) {
    iVar2 = *(int *)&this_ptr->field_0xc2a0 + 1;
    *(float *)&this_ptr->field_0xc2a4 = *(float *)&this_ptr->field_0xc2a4 + 1.0;
    *(int *)&this_ptr->field_0xc2a0 = iVar2;
    if (2 < iVar2) {
      *(uint *)(damage_info + 0x2c) = 0x3f800000;
      if ((0.0 < *(float *)(damage_info + 0x2c)) && (*(int *)damage_info == -1)) {
        iVar2 = rand();
        switch(iVar2 % 6) {
        case 0:
          uVar1 = *(uint *)&this_ptr->field_0xc270;
          break;
        case 1:
          uVar1 = *(uint *)&this_ptr->field_0xc274;
          break;
        case 2:
          uVar1 = *(uint *)&this_ptr->field_0xc278;
          break;
        case 3:
          uVar1 = *(uint *)&this_ptr->field_0xc27c;
          break;
        case 4:
          uVar1 = *(uint *)&this_ptr->field_0xc298;
          break;
        case 5:
          uVar1 = *(uint *)&this_ptr->field_0xc294;
          break;
        default:
          goto switchD_0056ce99_default;
        }
        *(uint *)damage_info = uVar1;
      }
switchD_0056ce99_default:
      iVar2 = *(int *)damage_info;
      if (((((iVar2 == *(int *)&this_ptr->field_0xc270) ||
            (iVar2 == *(int *)&this_ptr->field_0xc274)) ||
           (iVar2 == *(int *)&this_ptr->field_0xc278)) ||
          ((iVar2 == *(int *)&this_ptr->field_0xc27c || (iVar2 == *(int *)&this_ptr->field_0xc294)))
          ) || (iVar2 == *(int *)&this_ptr->field_0xc298)) {
        local_14 = *(float *)(damage_info + 0x2c);
        if (*(int *)&g_CGamePtr->field_0x1fc != 0) {
          local_14 = 1.0;
        }
        iVar2 = core_actor_cpp_FUN_0040cd00(local_14);
        if (iVar2 != 0) {
          body_part = core_bodypart_cpp_FUN_00418940
                                ((CVector3f *)&this_ptr->field_0x20,
                                 (UOrientationVector *)&this_ptr->field_0x30,
                                 (CVector3f *)(damage_info + 0xc),(CDemonActor *)this_ptr,0,0,
                                 BLOOD_TYPE_RED);
          core_charactr_cpp_FUN_00431210((CCharacter *)this_ptr,body_part,*(int *)damage_info,0);
          if (*(int *)damage_info == *(int *)&this_ptr->field_0xc270) {
            core_charactr_cpp_FUN_00431210
                      ((CCharacter *)this_ptr,body_part,*(int *)&this_ptr->field_0xc274,0);
          }
          if (*(int *)&this_ptr->field_0xc278 == *(int *)damage_info) {
            core_charactr_cpp_FUN_00431210
                      ((CCharacter *)this_ptr,body_part,*(int *)&this_ptr->field_0xc27c,0);
          }
          if (*(int *)&this_ptr->field_0xc294 == *(int *)damage_info) {
            initial_velocity = (CVector3f *)(damage_info + 0xc);
            core_charactr_cpp_FUN_004311a0
                      ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xc278,initial_velocity,0);
            core_charactr_cpp_FUN_004311a0
                      ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xc27c,initial_velocity,0);
            core_charactr_cpp_FUN_004311a0
                      ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xc270,initial_velocity,0);
            core_charactr_cpp_FUN_004311a0
                      ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xc274,initial_velocity,0);
            core_charactr_cpp_FUN_004311a0
                      ((CCharacter *)this_ptr,*(int *)&this_ptr->field_0xc298,initial_velocity,0);
          }
          core_charactr_cpp_FUN_004352e0((CCharacter *)this_ptr,"limb?.wav");
          core_bodypart_cpp_FUN_00419b90(body_part);
          if (*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xc298 * 4) == 0) {
            *(uint *)(damage_info + 4) = 0x461c3c00;
          }
          *(float *)(damage_info + 8) = *(float *)(damage_info + 8) * (float)_DAT_005f2a3f;
        }
      }
      iVar2 = *(int *)damage_info;
      if (iVar2 != *(int *)&this_ptr->field_0xc298) {
        if ((iVar2 != *(int *)&this_ptr->field_0xc290) && (iVar2 != *(int *)&this_ptr->field_0xc294)
           ) {
          *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005f2a47;
          return;
        }
        *(uint *)(damage_info + 4) = *(uint *)(damage_info + 4);
        return;
      }
      *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005f2a4f;
      return;
    }
  }
  *(uint *)(damage_info + 4) = 0;
  return;
}
