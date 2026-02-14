// Name: core_crate.cpp_CCrate_setup_FUN_00448530
// Address: 00448530
// Address Range: [[00448530, 0044853d]]
// Convention: __cdecl
// Signature: void __cdecl core_crate_cpp_CCrate_setup_FUN_00448530(CCrate *this_ptr)

#include "nocturne.h"

void __cdecl core_crate_cpp_CCrate_setup_FUN_00448530(CCrate *this_ptr)

{
  float fVar1;
  float fVar2;
  CBoundingBox3D CStack_24;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_24);
  fVar1 = (CStack_24.max.x - CStack_24.min.x) * (float)0.5;
  fVar2 = (CStack_24.max.z - CStack_24.min.z) * (float)0.5;
  if (fVar1 < fVar2) {
    fVar2 = fVar1;
  }
  this_ptr->unk2 = (int)fVar2;
  this_ptr->unk3[0] = -0x66;
  this_ptr->unk3[1] = '?';
  this_ptr->unk3[2] = '\x1c';
  this_ptr->unk3[3] = -0x3a;
  this_ptr->unk3[4] = -0x66;
  this_ptr->unk3[5] = '?';
  this_ptr->unk3[6] = '\x1c';
  this_ptr->unk3[7] = -0x3a;
  this_ptr->unk3[8] = -0x66;
  this_ptr->unk3[9] = '?';
  this_ptr->unk3[10] = '\x1c';
  this_ptr->unk3[0xb] = -0x3a;
  this_ptr->unk3[0xc] = -0x66;
  this_ptr->unk3[0xd] = '?';
  this_ptr->unk3[0xe] = '\x1c';
  this_ptr->unk3[0xf] = -0x3a;
  this_ptr->unk3[0x14] = -0x66;
  this_ptr->unk3[0x15] = '?';
  this_ptr->unk3[0x16] = '\x1c';
  this_ptr->unk3[0x17] = -0x3a;
  this_ptr->unk3[0x10] = -0x66;
  this_ptr->unk3[0x11] = '?';
  this_ptr->unk3[0x12] = '\x1c';
  this_ptr->unk3[0x13] = -0x3a;
  this_ptr->unk3[0x18] = -0x66;
  this_ptr->unk3[0x19] = '?';
  this_ptr->unk3[0x1a] = '\x1c';
  this_ptr->unk3[0x1b] = 'F';
  this_ptr->carrier = (CDemonActor *)0x0;
  return;
}
