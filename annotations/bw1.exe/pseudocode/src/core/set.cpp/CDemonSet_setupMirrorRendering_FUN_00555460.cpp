// Name: core_set.cpp_CDemonSet_setupMirrorRendering_FUN_00555460
// Address: 00555460
// Address Range: [[00555460, 0055558a]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setupMirrorRendering_FUN_00555460(CDemonSet *this_ptr,int mirror_index,int enable_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_setupMirrorRendering_FUN_00555460(CDemonSet *this_ptr,int mirror_index,int enable_flag)

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
  engine_matrix_c_FUN_00483ae0();
  local_20 = local_44;
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffc0 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffc4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (&stack0x00000000 != (byte *)0x20af5cc) {
    _DAT_020af5ac = local_20;
    _DAT_020af5b0 = local_1c;
    _DAT_020af5b4 = local_18;
  }
  engine_matrix_c_FUN_00483b70();
  local_2c = local_38;
  *(uint *)((int)&stack0xffffffd8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffcc + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffdc + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffd0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (&stack0x00000000 != (byte *)0x20af5e4) {
    _DAT_020af5b8 = local_2c;
    _DAT_020af5bc = local_28;
    _DAT_020af5c0 = local_24;
  }
  _DAT_020af5c4 = (float)engine_matrix_c_FUN_00483bf0();
  local_14 = _DAT_020af5c4;
  core_mirror_cpp_CMirrorReflection_setupMirrorReflection_FUN_005188e0
            (&(this_ptr->mirror_glass_actors[mirror_index]->mirror).reflection,
             (CVector3f *)&DAT_020af5ac,(CVector3f *)&DAT_020af5b8,_DAT_020af5c4);
  engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_00484190(DAT_00612560,1);
  (**(code **)(*(int *)(DAT_007c6120 + 0x3c) + 0x10))(DAT_007c6120);
  engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_00484170(DAT_00612560,mirror_index + 1);
  this_ptr->active_mirror = &this_ptr->mirror_glass_actors[mirror_index]->mirror;
  return;
}
