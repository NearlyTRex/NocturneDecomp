// Name: core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005341b0
// Address: 005341b0
// Address Range: [[005341b0, 005342da]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005341b0(CDemonSet *this_ptr,int mirror_index,int enable_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_setupMirrorRendering_FUN_005341b0(CDemonSet *this_ptr,int mirror_index,int enable_flag)

{
  byte bVar1;
  float afStackY_102c [1014];
  CVector3f local_44;
  CVector3f local_38;
  float local_2c;
  float local_28 [4];
  uint local_18;
  float local_14;
  
  bVar1 = 0;
  engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_0046b5e0(DAT_0060b280,&local_44);
  local_28[2] = local_44.x;
  local_28[(uint)bVar1 * -2 + 3] = *(float *)((int)&local_44 + (uint)bVar1 * -8 + 4);
  local_28[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4] =
       *(float *)((int)&local_44 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (&stack0x00000000 != (byte *)0x2093618) {
    _DAT_020935f8 = local_28[2];
    _DAT_020935fc = local_28[3];
    _DAT_02093600 = local_18;
  }
  engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_0046b670(DAT_0060b280,&local_38);
  local_2c = local_38.x;
  local_28[(uint)bVar1 * -2] = *(float *)((int)&local_38 + (uint)bVar1 * -8 + 4);
  local_28[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       *(float *)((int)&local_38 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (&stack0x00000000 != (byte *)0x2093630) {
    _DAT_02093604 = local_2c;
    _DAT_02093608 = local_28[0];
    _DAT_0209360c = local_28[1];
  }
  _DAT_02093610 =
       engine_drender_cpp_CDemonRenderer_calculateProjectionFactor_FUN_0046b6f0(DAT_0060b280);
  local_14 = _DAT_02093610;
  core_mirror_cpp_CMirrorReflection_setupMirrorReflection_FUN_004f9990
            (&(this_ptr->mirror_glass_actors[mirror_index]->mirror).reflection,
             (CVector3f *)&DAT_020935f8,(CVector3f *)&DAT_02093604,_DAT_02093610);
  engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046bc90(DAT_0060b280,1);
  (**(code **)(*(int *)(DAT_007bda74 + 0x3c) + 0x10))(DAT_007bda74);
  engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_0046bc70(DAT_0060b280,mirror_index + 1);
  this_ptr->active_mirror = &this_ptr->mirror_glass_actors[mirror_index]->mirror;
  return;
}
