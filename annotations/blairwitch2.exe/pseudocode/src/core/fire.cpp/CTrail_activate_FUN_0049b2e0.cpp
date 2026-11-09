// Name: core_fire.cpp_CTrail_activate_FUN_0049b2e0
// Address: 0049b2e0
// Address Range: [[0049b2e0, 0049b324]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CTrail_activate_FUN_0049b2e0(CTrail *this_ptr,CVector3f *position,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CTrail_activate_FUN_0049b2e0(CTrail *this_ptr,CVector3f *position,float size,float alpha,float lifetime,SMRGLTextureBasic *texture_ptr)

{
  if (this_ptr != (CTrail *)position) {
    *(uint *)this_ptr = *(uint *)position;
    *(uint *)&this_ptr->field_0x4 = *(uint *)&position->field_0x4;
    *(uint *)&this_ptr->field_0x8 = *(uint *)&position->field_0x8;
  }
  *(float *)&this_ptr->field_0xc = size;
  *(float *)&this_ptr->field_0x14 = alpha;
  *(float *)&this_ptr->field_0x10 = lifetime;
  *(float *)&this_ptr->field_0x18 = lifetime;
  *(float *)&this_ptr->field_0x1c = alpha;
  *(SMRGLTextureBasic **)&this_ptr->field_0x20 = texture_ptr;
  return;
}
