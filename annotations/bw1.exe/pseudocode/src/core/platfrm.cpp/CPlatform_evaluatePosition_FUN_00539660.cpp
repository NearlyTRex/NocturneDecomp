// Name: core_platfrm.cpp_CPlatform_evaluatePosition_FUN_00539660
// Address: 00539660
// Address Range: [[00539660, 005397fa]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_evaluatePosition_FUN_00539660(CPlatform *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_platfrm_cpp_CPlatform_evaluatePosition_FUN_00539660(CPlatform *this_ptr)

{
  byte *out_euler;
  byte *puVar1;
  byte bVar2;
  uint auStackY_1874 [1523];
  uint local_98;
  uint local_88;
  CVector3f local_78;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  CVector3f local_3c;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  bVar2 = 0;
  if (*(float *)&this_ptr->field_0x2dc < 0.0) {
    *(uint *)&this_ptr->field_0x2dc = 0;
  }
  if (1.0 < *(float *)&this_ptr->field_0x2dc) {
    *(uint *)&this_ptr->field_0x2dc = 0x3f800000;
  }
  out_euler = &this_ptr->field_0x30;
  if (this_ptr->field_0x2f0 == '\0') {
    puVar1 = &this_ptr->field_0x2dc;
    local_6c = *(float *)&this_ptr->field_0x328 * *(float *)puVar1;
    local_68 = *(float *)&this_ptr->field_0x32c * *(float *)puVar1;
    local_64 = *(float *)&this_ptr->field_0x330 * *(float *)puVar1;
    local_18 = 1.0 - *(float *)&this_ptr->field_0x2dc;
    local_48 = *(float *)&this_ptr->field_0x31c * local_18;
    local_44 = *(float *)&this_ptr->field_0x320 * local_18;
    local_40 = *(float *)&this_ptr->field_0x324 * local_18;
    local_60 = local_48 + local_6c;
    local_5c = local_44 + local_68;
    local_58 = local_40 + local_64;
    *(float *)&this_ptr->field_0x20 = local_60;
    *(float *)&this_ptr->field_0x24 = local_5c;
    *(float *)&this_ptr->field_0x28 = local_58;
    local_54 = local_60;
    local_50 = local_5c;
    local_4c = local_58;
    local_30 = local_6c;
    local_2c = local_68;
    local_28 = local_64;
    local_24 = local_48;
    local_20 = local_44;
    local_1c = local_40;
    core_xform_cpp_FUN_005b7940
              (&this_ptr->field_0x334,&this_ptr->field_0x344,*(uint *)&this_ptr->field_0x2dc);
    local_98 = local_88;
    *(uint *)((int)&stack0xffffff6c + (uint)bVar2 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff7c + (uint)bVar2 * -8);
    *(uint *)(&stack0xffffff70 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xffffff80 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    *(uint *)
     ((int)(&stack0xffffff70 + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffff80 + (uint)bVar2 * -8 + (uint)bVar2 * -8) +
          ((uint)bVar2 * -2 + 1) * 4);
    core_xform_cpp_FUN_005b7c00(&stack0xffffff68);
    local_78._0_4_ = local_3c._0_4_;
    *(uint *)((int)&local_78 + (uint)bVar2 * -8 + 4) =
         *(uint *)((int)&local_3c + (uint)bVar2 * -8 + 4);
    *(uint *)((int)&local_78 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
         *(uint *)((int)&local_3c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
    if ((CVector3f *)out_euler != &local_78) {
      *(uint *)out_euler = local_78._0_4_;
      *(uint *)&this_ptr->field_0x34 = local_78._4_4_;
      *(uint *)&this_ptr->field_0x38 = local_78._8_4_;
      return;
    }
  }
  else {
    local_14 = *(int *)&this_ptr->field_0x310;
    core_course_cpp_FUN_00447f00
              ((CCourse *)&this_ptr->field_0x310,(float)local_14 * *(float *)&this_ptr->field_0x2dc,
               (CVector3f *)&this_ptr->field_0x20,(CVector3f *)out_euler);
  }
  return;
}
