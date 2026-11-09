// Name: core_icepick.cpp_FUN_004d5470
// Address: 004d5470
// Address Range: [[004d5470, 004d55d2]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_FUN_004d5470(CIcePick *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_icepick_cpp_FUN_004d5470(CIcePick *this_ptr,float delta_time)

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
  if (*(int *)&this_ptr->field_0x25660 != 0) {
    if (*(int *)&this_ptr->field_0x25640 == 0) {
      fVar1 = *(float *)&this_ptr->field_0x25668 - delta_time * (float)_DAT_005da856;
      *(float *)&this_ptr->field_0x25668 = fVar1;
      if (fVar1 < 0.0) {
        *(uint *)&this_ptr->field_0x25668 = 0;
      }
    }
    else {
      fVar1 = delta_time * (float)_DAT_005da856 + *(float *)&this_ptr->field_0x25668;
      *(float *)&this_ptr->field_0x25668 = fVar1;
      if (1.0 < fVar1) {
        *(uint *)&this_ptr->field_0x25668 = 0x3f800000;
      }
    }
    iVar3 = 1;
    motion_name = "shoot";
    this_ptr_00 = core_motion_cpp_FUN_00503860((CMotionController *)&this_ptr->field_0x2b4);
    iVar3 = core_motion_cpp_FUN_00502f10(this_ptr_00,motion_name,iVar3);
    core_skeleton_cpp_FUN_00545a60
              (&this_ptr->field_0x2b4,iVar3,0,*(uint *)&this_ptr->field_0x25668,_DAT_01cee0f4,
               core_skeleton_cpp_FUN_00544cc0);
    *(float *)&this_ptr->field_0x2566c =
         *(float *)&this_ptr->field_0x10a94 * _DAT_005da85e * (float)_DAT_005da856 * delta_time +
         *(float *)&this_ptr->field_0x2566c;
    if (*(int *)&this_ptr->field_0x2566c < 0x3f490fdc) {
      if (*(float *)&this_ptr->field_0x2566c < _DAT_005da862) {
        *(uint *)&this_ptr->field_0x2566c = 0xbf490fdb;
      }
    }
    else {
      *(uint *)&this_ptr->field_0x2566c = 0x3f490fdb;
    }
    core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(*(uint *)&this_ptr->field_0x2566c);
    blend_callback = core_skeleton_cpp_FUN_00544cc0;
    local_1c = local_2c;
    auStack_18[(uint)bVar2 * -2] = *(uint *)(&stack0xffffffd8 + (uint)bVar2 * -8);
    iVar3 = _DAT_01cee0f4;
    auStack_18[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
         *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    (auStack_18 + (uint)bVar2 * -2 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8) +
          ((uint)bVar2 * -2 + 1) * 4);
    core_skeleton_cpp_CDeformableModelInstance_applyRotationToHierarchy_FUN_00546f40
              ((CDeformableModelInstance *)&this_ptr->field_0x2b4,(CQuaternion4f *)&local_1c,
               *(float *)&this_ptr->field_0x25668,iVar3,blend_callback);
  }
  return;
}
