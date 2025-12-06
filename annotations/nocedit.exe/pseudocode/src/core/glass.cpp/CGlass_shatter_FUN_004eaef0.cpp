// Name: core_glass.cpp_CGlass_shatter_FUN_004eaef0
// Address: 004eaef0
// Address Range: [[004eaef0, 004eb247]]
// Convention: __cdecl
// Signature: void core_glass.cpp_CGlass_shatter_FUN_004eaef0(CGlass * this_ptr, CVector3f * location)

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_shatter_FUN_004eaef0(CGlass *this_ptr,CVector3f *location)

{
  char cVar1;
  CVector3f *pCVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char *pcVar4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  CVector4i local_80;
  CVector4i local_70;
  byte auStack_5c [20];
  float fStack_48;
  CVector3f CStack_44;
  float local_34;
  float local_30;
  float local_2c;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
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
      core_set_cpp_CDemonSet_FUN_00570c60(g_CDemonSetPtr);
    }
    crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
              (&stack0xffffff38,4,&g_CVectorTypeInfo);
    local_14 = (this_ptr->glass_size).x * (float)0.5;
    pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&(this_ptr->base).orient_matrix,&CStack_44,(CVector3f *)&local_14);
    local_34 = (this_ptr->base).location.position.x + pCVar2->x;
    local_30 = (this_ptr->base).location.position.y + pCVar2->y;
    local_2c = (this_ptr->base).location.position.z + pCVar2->z;
    pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&(this_ptr->base).orient_matrix,(CVector3f *)&local_70,
                        (CVector3f *)&stack0xfffffff0);
    fStack_48 = (this_ptr->base).location.position.x + pCVar2->x;
    CStack_44.x = (this_ptr->base).location.position.y + pCVar2->y;
    CStack_44.y = (this_ptr->base).location.position.z + pCVar2->z;
    pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&(this_ptr->base).orient_matrix,(CVector3f *)(auStack_5c + 8),
                        (CVector3f *)&stack0xfffffff4);
    local_20 = (this_ptr->base).location.position.x + pCVar2->x;
    local_1c = (this_ptr->base).location.position.y + pCVar2->y;
    local_18 = (this_ptr->base).location.position.z + pCVar2->z;
    if (&local_a0 != &local_20) {
      local_a0 = local_20;
      local_9c = local_1c;
      local_98 = local_18;
    }
    pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                       (&(this_ptr->base).orient_matrix,(CVector3f *)auStack_5c,
                        (CVector3f *)&stack0xfffffff8);
    if (&local_90 != (float *)&stack0xfffffff0) {
      local_90 = (this_ptr->base).location.position.x + pCVar2->x;
      local_8c = (this_ptr->base).location.position.y + pCVar2->y;
      local_88 = (this_ptr->base).location.position.z + pCVar2->z;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,&this_ptr->glass_texture);
    if (g_CurrentTextureDimension == 0x40) {
      local_70.x = 0xf80000;
      local_80.y = 0x80000;
      local_70.y = 0x80000;
      local_80.z = 0xf80000;
      local_70.z = 0x80000;
      local_80.w = 0xf80000;
      local_70.w = 0xf80000;
      local_80.x = 0x80000;
    }
    else {
      local_70.x = 0xfe0000;
      local_80.y = 0x20000;
      local_70.y = 0x20000;
      local_80.z = 0xfe0000;
      local_70.z = 0x20000;
      local_80.w = 0xfe0000;
      local_70.w = 0xfe0000;
      local_80.x = 0x20000;
    }
    core_glass_cpp_CGlass_createShatterParticles_FUN_004ea1c0
              (this_ptr,(SQuadVertices *)&stack0xffffff50,&local_80,&local_70,0);
    (*((this_ptr->base).vtable)->playSound)(&this_ptr->base,"glass-1.wav@2.0");
    if (this_ptr->background_flag != 0) {
      this_ptr->field18_0xb3c = 1;
      return;
    }
  }
  return;
}
