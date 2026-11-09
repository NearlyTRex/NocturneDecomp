// Name: core_set.cpp_FUN_005341b0
// Address: 005341b0
// Address Range: [[005341b0, 005342da]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_005341b0(CDemonSet *this_ptr,int mirror_index,int enable_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_FUN_005341b0(CDemonSet *this_ptr,int mirror_index,int enable_flag)

{
  byte bVar1;
  float afStackY_102c [1014];
  uint local_44;
  uint local_38;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  float local_14;
  
  bVar1 = 0;
  engine_matrix_c_FUN_0046b5e0();
  local_20 = local_44;
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffc0 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffc4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (&stack0x00000000 != (byte *)0x2093618) {
    _DAT_020935f8 = local_20;
    _DAT_020935fc = local_1c;
    _DAT_02093600 = local_18;
  }
  engine_matrix_c_FUN_0046b670();
  local_2c = local_38;
  *(uint *)((int)&stack0xffffffd8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffcc + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffdc + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffd0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (&stack0x00000000 != (byte *)0x2093630) {
    _DAT_02093604 = local_2c;
    _DAT_02093608 = local_28;
    _DAT_0209360c = local_24;
  }
  _DAT_02093610 = (float)engine_matrix_c_FUN_0046b6f0();
  local_14 = _DAT_02093610;
  core_mirror_cpp_FUN_004f9990
            ((CMirrorReflection *)(*(int *)(&this_ptr->field_0x15accc + mirror_index * 4) + 0x348),
             (CVector3f *)&DAT_020935f8,(CVector3f *)&DAT_02093604,_DAT_02093610);
  engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046bc90(DAT_0060b280,1);
  (**(code **)(*(int *)(DAT_007bda74 + 0x3c) + 0x10))(DAT_007bda74);
  engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_0046bc70(DAT_0060b280,mirror_index + 1);
  *(int *)&this_ptr->field_0x161664 = *(int *)(&this_ptr->field_0x15accc + mirror_index * 4) + 0x348
  ;
  return;
}
