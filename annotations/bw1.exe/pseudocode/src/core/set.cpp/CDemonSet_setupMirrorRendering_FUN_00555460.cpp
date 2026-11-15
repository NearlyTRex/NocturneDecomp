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
  CVector3f local_44;
  CVector3f local_38;
  float local_2c;
  float local_28 [4];
  uint local_18;
  float local_14;
  
  bVar1 = 0;
  engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00483ae0(DAT_00612560,&local_44);
  local_28[2] = local_44.x;
  local_28[(uint)bVar1 * -2 + 3] = *(float *)((int)&local_44 + (uint)bVar1 * -8 + 4);
  local_28[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4] =
       *(float *)((int)&local_44 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (&stack0x00000000 != (byte *)0x20af5cc) {
    _DAT_020af5ac = local_28[2];
    _DAT_020af5b0 = local_28[3];
    _DAT_020af5b4 = local_18;
  }
  engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_00483b70(DAT_00612560,&local_38);
  local_2c = local_38.x;
  local_28[(uint)bVar1 * -2] = *(float *)((int)&local_38 + (uint)bVar1 * -8 + 4);
  local_28[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       *(float *)((int)&local_38 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if (&stack0x00000000 != (byte *)0x20af5e4) {
    _DAT_020af5b8 = local_2c;
    _DAT_020af5bc = local_28[0];
    _DAT_020af5c0 = local_28[1];
  }
  _DAT_020af5c4 =
       engine_drender_cpp_CDemonRenderer_calculateProjectionFactor_FUN_00483bf0(DAT_00612560);
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
