// Name: core_set.cpp_CDemonSet_setupMirrorRendering_FUN_0053adf0
// Address: 0053adf0
// Address Range: [[0053adf0, 0053af1a]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setupMirrorRendering_FUN_0053adf0(CDemonSet *this_ptr,int mirror_index,int enable_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_setupMirrorRendering_FUN_0053adf0(CDemonSet *this_ptr,int mirror_index,int enable_flag)

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
  engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_0046d1c0(DAT_005f2afc,&local_44);
  local_28[2] = local_44.x;
  local_28[(uint)bVar1 * -2 + 3] = *(float *)((int)&local_44 + (uint)bVar1 * -8 + 4);
  local_28[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4] =
       *(float *)((int)&local_44 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (&stack0x00000000 != (byte *)0x21221f4) {
    _DAT_021221d4 = local_28[2];
    _DAT_021221d8 = local_28[3];
    _DAT_021221dc = local_18;
  }
  engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_0046d250(DAT_005f2afc,&local_38);
  local_2c = local_38.x;
  local_28[(uint)bVar1 * -2] = *(float *)((int)&local_38 + (uint)bVar1 * -8 + 4);
  local_28[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       *(float *)((int)&local_38 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (&stack0x00000000 != (byte *)0x212220c) {
    _DAT_021221e0 = local_2c;
    _DAT_021221e4 = local_28[0];
    _DAT_021221e8 = local_28[1];
  }
  _DAT_021221ec =
       engine_drender_cpp_CDemonRenderer_calculateProjectionFactor_FUN_0046d2d0(DAT_005f2afc);
  local_14 = _DAT_021221ec;
  core_mirror_cpp_CMirrorReflection_setupMirrorReflection_FUN_004f40b0
            (&(this_ptr->mirror_glass_actors[mirror_index]->mirror).reflection,
             (CVector3f *)&DAT_021221d4,(CVector3f *)&DAT_021221e0,_DAT_021221ec);
  engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046d870(DAT_005f2afc,1);
  (**(code **)(*(int *)(DAT_007e2a54 + 0x3c) + 0x10))(DAT_007e2a54);
  engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_0046d850(DAT_005f2afc,mirror_index + 1);
  this_ptr->active_mirror = &this_ptr->mirror_glass_actors[mirror_index]->mirror;
  return;
}
