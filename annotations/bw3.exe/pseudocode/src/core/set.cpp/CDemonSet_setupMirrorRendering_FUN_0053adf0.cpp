// Name: core_set.cpp_CDemonSet_setupMirrorRendering_FUN_0053adf0
// Address: 0053adf0
// Address Range: [[0053adf0, 0053af1a]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_setupMirrorRendering_FUN_0053adf0(CDemonSet *this_ptr,int mirror_index,int enable_flag)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_setupMirrorRendering_FUN_0053adf0(CDemonSet *this_ptr,int mirror_index,int enable_flag)

{
  byte bVar1;
  float afStackY_102c [1014];
  float in_stack_ffffffbc;
  CVector3f local_38;
  float local_2c;
  float local_28 [4];
  float local_18;
  float local_14;
  
  bVar1 = 0;
  engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_0046d1c0
            (g_CDemonRenderer_PTR_005f2afc,(CVector3f *)&stack0xffffffbc);
  local_28[2] = in_stack_ffffffbc;
  local_28[(uint)bVar1 * -2 + 3] = *(float *)(&stack0xffffffc0 + (uint)bVar1 * -8);
  local_28[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4] =
       *(float *)(&stack0xffffffc4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if ((SRaytraceState *)&stack0x00000000 != g_SRaytraceState_ARRAY_021221f4) {
    g_UVector3_021221d4.f.x = local_28[2];
    g_UVector3_021221d4.f.y = local_28[3];
    g_UVector3_021221d4.f.z = local_18;
  }
  engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_0046d250
            (g_CDemonRenderer_PTR_005f2afc,&local_38);
  local_2c = local_38.x;
  local_28[(uint)bVar1 * -2] = *(float *)((int)&local_38 + (uint)bVar1 * -8 + 4);
  local_28[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       *(float *)((int)&local_38 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
  if ((int *)&stack0x00000000 != &g_SRaytraceState_ARRAY_021221f4[0].collision_flag) {
    g_CVector3f_021221e0.x = local_2c;
    g_CVector3f_021221e0.y = local_28[0];
    g_CVector3f_021221e0.z = local_28[1];
  }
  g_FLOAT_021221ec =
       engine_drender_cpp_CDemonRenderer_calculateProjectionFactor_FUN_0046d2d0
                 (g_CDemonRenderer_PTR_005f2afc);
  local_14 = g_FLOAT_021221ec;
  core_mirror_cpp_CMirrorReflection_setupMirrorReflection_FUN_004f40b0
            (&(this_ptr->mirror_glass_actors[mirror_index]->mirror).reflection,
             &g_UVector3_021221d4.f,&g_CVector3f_021221e0,g_FLOAT_021221ec);
  engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046d870
            (g_CDemonRenderer_PTR_005f2afc,1);
  (*((g_CDemonCamera_PTR_007e2a54->base).vtable)->saveAlphaTransform)
            (g_CDemonCamera_PTR_007e2a54,mirror_index + 1);
  engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_0046d850
            (g_CDemonRenderer_PTR_005f2afc,mirror_index + 1);
  this_ptr->active_mirror = &this_ptr->mirror_glass_actors[mirror_index]->mirror;
  return;
}
