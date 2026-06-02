// Name: core_glass.cpp_CGlass_shatter_FUN_004eaef0
// Address: 004eaef0
// MANUAL RECONSTRUCTION
// Address Range: [[004eaef0, 004eb247]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_shatter_FUN_004eaef0(CGlass *this_ptr,CVector3f *location)

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_shatter_FUN_004eaef0(CGlass *this_ptr,CVector3f *location)

{
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  SQuadVertices local_cc;
  CVector4i local_9c;
  CVector4i local_8c;
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
      this_ptr->opacity = 0xffff;
      strcpy((this_ptr->glass_texture).texture_name, "7YEARS.RAW");
      core_set_cpp_CDemonSet_markMirrorCameraDirty_FUN_00570c60(g_CDemonSetPtr);
    }
    __arrinit(&local_cc,4,&g_CVectorTypeInfo);
    local_1c.x = (this_ptr->glass_size).x * (float)0.5;
    local_1c.y = 0.0;
    local_1c.z = 0.0;
    pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&(this_ptr->base).orient_matrix,&local_4c,&local_1c);
    local_40 = (this_ptr->base).location.position.x + pCVar2->x;
    local_3c = (this_ptr->base).location.position.y + pCVar2->y;
    local_38 = (this_ptr->base).location.position.z + pCVar2->z;
    if (&local_cc != (SQuadVertices *)&local_40) {
      local_cc.vertices[0].x = local_40;
      local_cc.vertices[0].y = local_3c;
      local_cc.vertices[0].z = local_38;
    }
    local_1c.y = local_1c.y + (this_ptr->glass_size).y;
    pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&(this_ptr->base).orient_matrix,&local_7c,&local_1c);
    local_58 = (this_ptr->base).location.position.x + pCVar3->x;
    local_54 = (this_ptr->base).location.position.y + pCVar3->y;
    local_50 = (this_ptr->base).location.position.z + pCVar3->z;
    if (local_cc.vertices + 1 != (CVector3f *)&local_58) {
      local_cc.vertices[1].x = local_58;
      local_cc.vertices[1].y = local_54;
      local_cc.vertices[1].z = local_50;
    }
    local_1c.x = -local_1c.x;
    pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&(this_ptr->base).orient_matrix,&local_64,&local_1c);
    local_34 = (this_ptr->base).location.position.x + pCVar3->x;
    local_30 = (this_ptr->base).location.position.y + pCVar3->y;
    local_2c = (this_ptr->base).location.position.z + pCVar3->z;
    if (local_cc.vertices + 2 != (CVector3f *)&local_34) {
      local_cc.vertices[2].x = local_34;
      local_cc.vertices[2].y = local_30;
      local_cc.vertices[2].z = local_2c;
    }
    local_1c.y = 0.0;
    pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&(this_ptr->base).orient_matrix,&local_70,&local_1c);
    local_28 = (this_ptr->base).location.position.x + pCVar3->x;
    local_24 = (this_ptr->base).location.position.y + pCVar3->y;
    local_20 = (this_ptr->base).location.position.z + pCVar3->z;
    if (local_cc.vertices + 3 != (CVector3f *)&local_28) {
      local_cc.vertices[3].x = local_28;
      local_cc.vertices[3].y = local_24;
      local_cc.vertices[3].z = local_20;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr2,&this_ptr->glass_texture);
    if (g_CurrentTextureDimension == 0x40) {
      local_8c.x = 0xf80000;
      local_9c.y = 0x80000;
      local_8c.y = 0x80000;
      local_9c.z = 0xf80000;
      local_8c.z = 0x80000;
      local_9c.w = 0xf80000;
      local_8c.w = 0xf80000;
      local_9c.x = 0x80000;
    }
    else {
      local_8c.x = 0xfe0000;
      local_9c.y = 0x20000;
      local_8c.y = 0x20000;
      local_9c.z = 0xfe0000;
      local_8c.z = 0x20000;
      local_9c.w = 0xfe0000;
      local_8c.w = 0xfe0000;
      local_9c.x = 0x20000;
    }
    core_glass_cpp_CGlass_createShatterParticles_FUN_004ea1c0
              (this_ptr,&local_cc,&local_9c,&local_8c,0);
    (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,"glass-1.wav@2.0");
    if (this_ptr->background_flag != 0) {
      this_ptr->pending_background_render = 1;
      return;
    }
  }
  return;
}
