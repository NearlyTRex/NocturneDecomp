// Name: core_lantern.cpp_CLantern_process_FUN_0059ccf0
// Address: 0059ccf0
// Address Range: [[0059ccf0, 0059cec1]]
// Convention: __cdecl
// Signature: void __cdecl core_lantern_cpp_CLantern_process_FUN_0059ccf0(CLantern *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_lantern_cpp_CLantern_process_FUN_0059ccf0(CLantern *this_ptr,float delta_time)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float in_stack_00000010;
  
  core_weapon_cpp_CWeapon_process_FUN_00589c80((CWeapon *)this_ptr,delta_time);
  if (0.0 < *(float *)&this_ptr->field_0x700) {
    fVar2 = *(float *)&this_ptr->field_0x6d4 - in_stack_00000010;
    *(uint *)&this_ptr->field_0x6f8 = 0;
    *(float *)&this_ptr->field_0x6d4 = fVar2;
    if (fVar2 <= 0.0) {
      fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.7,1.0);
      *(float *)&this_ptr->field_0x6f8 = fVar2;
      fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.1,0.2);
      fVar1 = (float)_DAT_005ef7b1;
      fVar2 = (float)_DAT_005ef7b9;
      *(float *)&this_ptr->field_0x6f0 = *(float *)&this_ptr->field_0x6f8 * fVar1 + fVar2;
      *(float *)&this_ptr->field_0x6f4 = *(float *)&this_ptr->field_0x6f8 * fVar1 + fVar2;
      *(float *)&this_ptr->field_0x6d4 = fVar3 * *(float *)&this_ptr->field_0x6f8;
      *(float *)&this_ptr->field_0x6f0 =
           *(float *)&this_ptr->field_0x700 * *(float *)&this_ptr->field_0x6f0;
      *(float *)&this_ptr->field_0x6f4 =
           *(float *)&this_ptr->field_0x700 * *(float *)&this_ptr->field_0x6f4;
      *(uint *)(*(int *)&this_ptr->field_0x704 + 0x1cb4) = 1;
      *(uint *)(*(int *)&this_ptr->field_0x704 + 0x1cbc) = 1;
      *(uint *)(*(int *)&this_ptr->field_0x704 + 0x140) =
           *(uint *)&this_ptr->field_0x6f0;
      *(uint *)(*(int *)&this_ptr->field_0x704 + 0x38) = *(uint *)&this_ptr->field_0x6f4
      ;
      *(uint *)(*(int *)&this_ptr->field_0x704 + 0x1cd0) = 1;
      core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570
                (*(CDemonLight **)&this_ptr->field_0x704,
                 *(float *)&this_ptr->field_0x700 * *(float *)&this_ptr->field_0x6f8);
      *(float *)(*(int *)&this_ptr->field_0x704 + 0x2fac) =
           (*(float *)&this_ptr->field_0x6f8 * (float)_DAT_005ef7c1 + (float)_DAT_005ef7c9) *
           *(float *)&this_ptr->field_0x700;
    }
    core_lantern_cpp_FUN_0059ced0(this_ptr);
    core_set_cpp_CDemonSet_addDynamicLight_FUN_00530630
              (g_CDemonSetPtr,*(CDemonLight **)&this_ptr->field_0x704);
    *(uint *)&this_ptr->field_0xfc = 1;
    return;
  }
  *(uint *)&this_ptr->field_0xfc = 0;
  *(uint *)&this_ptr->field_0x700 = 0;
  return;
}
