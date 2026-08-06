// Name: core_glass.cpp_CGlass_shatter_FUN_004ada20
// Address: 004ada20
// Address Range: [[004ada20, 004add77]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_shatter_FUN_004ada20(CGlass *this_ptr,CVector3f *location)

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_shatter_FUN_004ada20(CGlass *this_ptr,CVector3f *location)

{
  char cVar1;
  CVector3f *pCVar2;
  char *pcVar3;
  char *pcVar4;
  float local_cc;
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
  int local_9c [8];
  CVector3f local_7c;
  CVector3f local_70;
  CVector3f local_64;
  float local_58;
  float local_54;
  float local_50;
  CVector3f local_4c;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  CVector3f local_1c;
  
  if (this_ptr->shattered == 0) {
    this_ptr->shattered = 1;
    if (this_ptr->mirror_flag != 0) {
      pcVar3 = "7YEARS.RAW";
      pcVar4 = (this_ptr->glass_texture).texture_name;
      this_ptr->opacity = 0xffff;
      do {
        cVar1 = *pcVar3;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      core_set_cpp_CDemonSet_markMirrorCameraDirty_FUN_0050e300(g_CDemonSet_PTR_005be368);
    }
    __arrinit(&local_cc,4,&g_CVectorTypeInfo_005993b0);
    local_1c.x = (this_ptr->glass_size).x * (float)0.5;
    local_1c.y = 0.0;
    local_1c.z = 0.0;
    pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                       (&(this_ptr->base).orient_matrix,&local_4c,&local_1c);
    local_40 = (this_ptr->base).location.position.x + pCVar2->x;
    local_3c = (this_ptr->base).location.position.y + pCVar2->y;
    local_38 = (this_ptr->base).location.position.z + pCVar2->z;
    if (&local_cc != &local_40) {
      local_cc = local_40;
      local_c8 = local_3c;
      local_c4 = local_38;
    }
    local_1c.y = local_1c.y + (this_ptr->glass_size).y;
    pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                       (&(this_ptr->base).orient_matrix,&local_7c,&local_1c);
    local_58 = (this_ptr->base).location.position.x + pCVar2->x;
    local_54 = (this_ptr->base).location.position.y + pCVar2->y;
    local_50 = (this_ptr->base).location.position.z + pCVar2->z;
    if (&local_c0 != &local_58) {
      local_c0 = local_58;
      local_bc = local_54;
      local_b8 = local_50;
    }
    local_1c.x = -local_1c.x;
    pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                       (&(this_ptr->base).orient_matrix,&local_64,&local_1c);
    local_34 = (this_ptr->base).location.position.x + pCVar2->x;
    local_30 = (this_ptr->base).location.position.y + pCVar2->y;
    local_2c = (this_ptr->base).location.position.z + pCVar2->z;
    if (&local_b4 != &local_34) {
      local_b4 = local_34;
      local_b0 = local_30;
      local_ac = local_2c;
    }
    local_1c.y = 0.0;
    pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                       (&(this_ptr->base).orient_matrix,&local_70,&local_1c);
    local_28 = (this_ptr->base).location.position.x + pCVar2->x;
    local_24 = (this_ptr->base).location.position.y + pCVar2->y;
    local_20 = (this_ptr->base).location.position.z + pCVar2->z;
    if (&local_a8 != &local_28) {
      local_a8 = local_28;
      local_a4 = local_24;
      local_a0 = local_20;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (g_CDemonRenderer_PTR_005ae704,&this_ptr->glass_texture);
    if (DAT_005b762c == 0x40) {
      local_9c[4] = 0xf80000;
      local_9c[1] = 0x80000;
      local_9c[5] = 0x80000;
      local_9c[2] = 0xf80000;
      local_9c[6] = 0x80000;
      local_9c[3] = 0xf80000;
      local_9c[7] = 0xf80000;
      local_9c[0] = 0x80000;
    }
    else {
      local_9c[4] = 0xfe0000;
      local_9c[1] = 0x20000;
      local_9c[5] = 0x20000;
      local_9c[2] = 0xfe0000;
      local_9c[6] = 0x20000;
      local_9c[3] = 0xfe0000;
      local_9c[7] = 0xfe0000;
      local_9c[0] = 0x20000;
    }
    core_glass_cpp_CGlass_FUN_004accf0(this_ptr,&local_cc,local_9c,local_9c + 4,0);
    (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,"glass-1.wav@2.0");
    if (this_ptr->background_flag != 0) {
      this_ptr->pending_background_render = 1;
      return;
    }
  }
  return;
}
