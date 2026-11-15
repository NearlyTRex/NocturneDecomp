// Name: core_glass.cpp_CGlass_shatter_FUN_004cc040
// Address: 004cc040
// Address Range: [[004cc040, 004cc472]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_shatter_FUN_004cc040(CGlass *this_ptr,CVector3f *location)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_glass_cpp_CGlass_shatter_FUN_004cc040(CGlass *this_ptr,CVector3f *location)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  byte bVar4;
  float afStackY_10c4 [993];
  float local_12c;
  float local_128;
  uint local_124;
  float local_120;
  float local_11c;
  uint local_118;
  float local_114;
  float local_110;
  uint local_10c;
  float local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  uint local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  uint local_98;
  CVector3f local_94;
  CVector3f local_88;
  float local_7c;
  float local_78 [2];
  CVector3f local_70;
  float local_64;
  float local_60 [4];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  CVector3f local_40;
  float local_34;
  float local_30 [4];
  uint local_20;
  CVector3f local_1c;
  
  bVar4 = 0;
  if (this_ptr->shattered == 0) {
    this_ptr->shattered = 1;
    if (this_ptr->mirror_flag != 0) {
      pcVar2 = ">7YEARS.RAW" + 1;
      pcVar3 = (this_ptr->glass_texture).texture_name;
      this_ptr->opacity = 0xffff;
      do {
        cVar1 = *pcVar2;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      core_set_cpp_CDemonSet_markMirrorCameraDirty_FUN_0053b0c0(g_CDemonSetPtr);
    }
    __arrinit(&stack0xfffffed4,4,&g_CVectorTypeInfo);
    local_70.x = (this_ptr->glass_size).x * (float)_DAT_005c45e0;
    local_70.y = 0.0;
    local_70.z = 0.0;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045b800
              (&(this_ptr->base).orient_matrix,&local_70,&local_94);
    local_c4 = local_94.x;
    *(uint *)((int)&stack0xffffff40 + (uint)bVar4 * -8) =
         *(uint *)((int)&local_94 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&stack0xffffff44 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)((int)&local_94 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    local_ac = (this_ptr->base).location.position.x + local_c4;
    local_a8 = (this_ptr->base).location.position.y + local_c0;
    local_a4 = (this_ptr->base).location.position.z + local_bc;
    local_34 = local_ac;
    local_30[(uint)bVar4 * -2] = *(float *)((int)&stack0xffffff58 + (uint)bVar4 * -8);
    local_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         *(float *)((int)&stack0xffffff5c + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    if (&stack0xfffffed4 != &local_34) {
      local_12c = local_34;
      local_128 = local_30[0];
      local_124 = local_30[1];
    }
    local_70.y = local_70.y + (this_ptr->glass_size).y;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045b800
              (&(this_ptr->base).orient_matrix,&local_70,&local_88);
    local_60[2] = local_88.x;
    local_60[(uint)bVar4 * -2 + 3] = *(float *)((int)&local_88 + (uint)bVar4 * -8 + 4);
    local_60[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         *(float *)((int)&local_88 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    local_64 = (this_ptr->base).location.position.x + local_60[2];
    local_60[0] = (this_ptr->base).location.position.y + local_60[3];
    local_60[1] = (this_ptr->base).location.position.z + local_50;
    local_d0 = local_64;
    (&stack0xffffff34)[(uint)bVar4 * 0xfffffffe] = local_60[(uint)bVar4 * -2];
    *(float *)((int)&stack0xffffff38 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         local_60[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if (&stack0xfffffee0 != &stack0xffffff30) {
      local_120 = local_d0;
      local_11c = local_cc;
      local_118 = local_c8;
    }
    local_70.x = -local_70.x;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045b800
              (&(this_ptr->base).orient_matrix,&local_70,&local_40);
    local_dc = local_40.x;
    (&stack0xffffff28)[(uint)bVar4 * 0xfffffffe] =
         (float)*(uint *)((int)&local_40 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&stack0xffffff2c + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)((int)&local_40 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    local_b8 = (this_ptr->base).location.position.x + local_dc;
    local_b4 = (this_ptr->base).location.position.y + local_d8;
    local_b0 = (this_ptr->base).location.position.z + local_d4;
    local_a0 = local_b8;
    (&stack0xffffff64)[(uint)bVar4 * 0xfffffffe] =
         (float)*(uint *)((int)&stack0xffffff4c + (uint)bVar4 * -8);
    local_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + -8] =
         *(float *)((int)&stack0xffffff50 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    if (&stack0xfffffeec != &stack0xffffff60) {
      local_114 = local_a0;
      local_110 = local_9c;
      local_10c = local_98;
    }
    local_70.y = 0.0;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045b800
              (&(this_ptr->base).orient_matrix,&local_70,&local_1c);
    local_4c = local_1c.x;
    local_60[(uint)bVar4 * -2 + 6] = *(float *)((int)&local_1c + (uint)bVar4 * -8 + 4);
    local_60[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
         *(float *)((int)&local_1c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    local_7c = (this_ptr->base).location.position.x + local_4c;
    local_78[0] = (this_ptr->base).location.position.y + local_48;
    local_78[1] = (this_ptr->base).location.position.z + local_44;
    local_30[2] = local_7c;
    local_30[(uint)bVar4 * -2 + 3] = local_78[(uint)bVar4 * -2];
    local_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         local_78[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if (&stack0xfffffef8 != local_30 + 2) {
      local_108 = local_30[2];
      local_104 = local_30[3];
      local_100 = local_20;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (DAT_005f2afc,(SMRGLTextureBasic *)&this_ptr->glass_texture);
    if (DAT_005fba28 == 0x40) {
      local_fc = 0xf80000;
      local_e8 = 0x80000;
      local_f8 = 0x80000;
      local_e4 = 0xf80000;
      local_f4 = 0x80000;
      local_e0 = 0xf80000;
      local_f0 = 0xf80000;
      local_ec = 0x80000;
    }
    else {
      local_fc = 0xfe0000;
      local_e8 = 0x20000;
      local_f8 = 0x20000;
      local_e4 = 0xfe0000;
      local_f4 = 0x20000;
      local_e0 = 0xfe0000;
      local_f0 = 0xfe0000;
      local_ec = 0x20000;
    }
    core_glass_cpp_FUN_004caeb0(this_ptr,&stack0xfffffed4,&stack0xffffff14,&stack0xffffff04,0);
    (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,"glass-1.wav@2.0");
    if (this_ptr->background_flag != 0) {
      core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_00534820
                (g_CDemonSetPtr,&this_ptr->base);
      this_ptr->pending_background_render = 1;
      return;
    }
  }
  return;
}
