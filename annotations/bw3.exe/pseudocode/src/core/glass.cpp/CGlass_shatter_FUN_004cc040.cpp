// Name: core_glass.cpp_CGlass_shatter_FUN_004cc040
// Address: 004cc040
// Address Range: [[004cc040, 004cc472]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_shatter_FUN_004cc040(CGlass *this_ptr,CVector3f *location)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_glass_cpp_CGlass_shatter_FUN_004cc040(CGlass *this_ptr,CVector3f *location)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  byte bVar4;
  float afStackY_10c4 [993];
  SQuadVertices local_12c;
  CVector4i local_fc;
  CVector4i local_ec;
  float local_dc;
  float local_d8 [4];
  float local_c8;
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
  float local_98;
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
  float local_20;
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
    __arrinit(&local_12c,4,&g_CVectorTypeInfo);
    local_70.x = (this_ptr->glass_size).x * (float)_DAT_005c45e0;
    local_70.y = 0.0;
    local_70.z = 0.0;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045b800
              (&(this_ptr->base).orient_matrix,&local_70,&local_94);
    local_c4 = local_94.x;
    local_d8[(uint)bVar4 * -2 + 6] = *(float *)((int)&local_94 + (uint)bVar4 * -8 + 4);
    local_d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
         *(float *)((int)&local_94 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    local_ac = (this_ptr->base).location.position.x + local_c4;
    local_a8 = (this_ptr->base).location.position.y + local_c0;
    local_a4 = (this_ptr->base).location.position.z + local_bc;
    local_34 = local_ac;
    local_30[(uint)bVar4 * -2] = local_d8[(uint)bVar4 * -2 + 0xc];
    local_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         local_d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
    if (&local_12c != (SQuadVertices *)&local_34) {
      local_12c.vertices[0].x = local_34;
      local_12c.vertices[0].y = local_30[0];
      local_12c.vertices[0].z = local_30[1];
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
    local_d8[2] = local_64;
    local_d8[(uint)bVar4 * -2 + 3] = local_60[(uint)bVar4 * -2];
    local_d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
         local_60[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if (local_12c.vertices + 1 != (CVector3f *)(local_d8 + 2)) {
      local_12c.vertices[1].x = local_d8[2];
      local_12c.vertices[1].y = local_d8[3];
      local_12c.vertices[1].z = local_c8;
    }
    local_70.x = -local_70.x;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045b800
              (&(this_ptr->base).orient_matrix,&local_70,&local_40);
    local_dc = local_40.x;
    local_d8[(uint)bVar4 * -2] = *(float *)((int)&local_40 + (uint)bVar4 * -8 + 4);
    local_d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         *(float *)((int)&local_40 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    local_b8 = (this_ptr->base).location.position.x + local_dc;
    local_b4 = (this_ptr->base).location.position.y + local_d8[0];
    local_b0 = (this_ptr->base).location.position.z + local_d8[1];
    local_a0 = local_b8;
    local_d8[(uint)bVar4 * -2 + 0xf] = local_d8[(uint)bVar4 * -2 + 9];
    local_d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
         local_d8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
    if (local_12c.vertices + 2 != (CVector3f *)(local_d8 + 0xe)) {
      local_12c.vertices[2].x = local_a0;
      local_12c.vertices[2].y = local_9c;
      local_12c.vertices[2].z = local_98;
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
    if (local_12c.vertices + 3 != (CVector3f *)(local_30 + 2)) {
      local_12c.vertices[3].x = local_30[2];
      local_12c.vertices[3].y = local_30[3];
      local_12c.vertices[3].z = local_20;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (DAT_005f2afc,(SMRGLTextureBasic *)&this_ptr->glass_texture);
    if (DAT_005fba28 == 0x40) {
      local_fc.x = 0xf80000;
      local_ec.y = 0x80000;
      local_fc.y = 0x80000;
      local_ec.z = 0xf80000;
      local_fc.z = 0x80000;
      local_ec.w = 0xf80000;
      local_fc.w = 0xf80000;
      local_ec.x = 0x80000;
    }
    else {
      local_fc.x = 0xfe0000;
      local_ec.y = 0x20000;
      local_fc.y = 0x20000;
      local_ec.z = 0xfe0000;
      local_fc.z = 0x20000;
      local_ec.w = 0xfe0000;
      local_fc.w = 0xfe0000;
      local_ec.x = 0x20000;
    }
    core_glass_cpp_CGlass_createShatterParticles_FUN_004caeb0
              (this_ptr,&local_12c,&local_ec,&local_fc,0);
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
