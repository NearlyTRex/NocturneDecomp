// Name: core_icepick.cpp_FUN_004f1670
// Address: 004f1670
// Address Range: [[004f1670, 004f17d2]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_FUN_004f1670(CIcePick *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_icepick_cpp_FUN_004f1670(CIcePick *this_ptr,float delta_time)

{
  float fVar1;
  CMotionList *this_ptr_00;
  byte bVar2;
  uint auStackY_1808 [1519];
  char *motion_name;
  int iVar3;
  code *blend_callback;
  uint local_2c;
  uint local_1c;
  uint auStack_18 [5];
  
  bVar2 = 0;
  if (*(int *)&this_ptr->field_0x1ffcc != 0) {
    if (*(int *)&this_ptr->field_0x1ffac == 0) {
      fVar1 = *(float *)&this_ptr->field_0x1ffd4 - delta_time * (float)_DAT_005e53b7;
      *(float *)&this_ptr->field_0x1ffd4 = fVar1;
      if (fVar1 < 0.0) {
        *(uint *)&this_ptr->field_0x1ffd4 = 0;
      }
    }
    else {
      fVar1 = delta_time * (float)_DAT_005e53b7 + *(float *)&this_ptr->field_0x1ffd4;
      *(float *)&this_ptr->field_0x1ffd4 = fVar1;
      if (1.0 < fVar1) {
        *(uint *)&this_ptr->field_0x1ffd4 = 0x3f800000;
      }
    }
    iVar3 = 1;
    motion_name = "shoot";
    this_ptr_00 = core_motion_cpp_FUN_00524a00((CMotionController *)&this_ptr->field_0x158);
    iVar3 = core_motion_cpp_FUN_005240c0(this_ptr_00,motion_name,iVar3);
    core_skeleton_cpp_FUN_00568100
              (&this_ptr->field_0x158,iVar3,0,*(uint *)&this_ptr->field_0x1ffd4,_DAT_01d06cb4,
               core_skeleton_cpp_FUN_00567360);
    *(float *)&this_ptr->field_0x1ffd8 =
         *(float *)&this_ptr->field_0xc204 * _DAT_005e53bf * (float)_DAT_005e53b7 * delta_time +
         *(float *)&this_ptr->field_0x1ffd8;
    if (*(int *)&this_ptr->field_0x1ffd8 < 0x3f490fdc) {
      if (*(float *)&this_ptr->field_0x1ffd8 < _DAT_005e53c3) {
        *(uint *)&this_ptr->field_0x1ffd8 = 0xbf490fdb;
      }
    }
    else {
      *(uint *)&this_ptr->field_0x1ffd8 = 0x3f490fdb;
    }
    core_xform_cpp_FUN_005b7af0(*(uint *)&this_ptr->field_0x1ffd8);
    blend_callback = core_skeleton_cpp_FUN_00567360;
    local_1c = local_2c;
    auStack_18[(uint)bVar2 * -2] = *(uint *)(&stack0xffffffd8 + (uint)bVar2 * -8);
    iVar3 = _DAT_01d06cb4;
    auStack_18[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    (auStack_18 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8) +
          ((uint)bVar2 * -2 + 1) * 4);
    core_skeleton_cpp_FUN_005695e0
              ((CDeformableModelInstance *)&this_ptr->field_0x158,(CQuaternion4f *)&local_1c,
               *(float *)&this_ptr->field_0x1ffd4,iVar3,blend_callback);
  }
  return;
}
