// Name: core_trash.cpp_CTrash_setup_FUN_005debc0
// Address: 005debc0
// Address Range: [[005debc0, 005debcd]]
// Convention: __cdecl
// Signature: void __cdecl core_trash_cpp_CTrash_setup_FUN_005debc0(CTrash *this_ptr)

#include "nocturne.h"

void __cdecl core_trash_cpp_CTrash_setup_FUN_005debc0(CTrash *this_ptr)

{
  float fVar1;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  this_ptr->unk[0x28] = '\0';
  this_ptr->unk[0x29] = '\0';
  this_ptr->unk[0x2a] = '\0';
  this_ptr->unk[0x2b] = '\0';
  *(uint *)(this_ptr->unk + 0x24) = *(uint *)(this_ptr->unk + 0x28);
  *(uint *)(this_ptr->unk + 0x20) = *(uint *)(this_ptr->unk + 0x24);
  this_ptr->unk[0x10] = '\0';
  this_ptr->unk[0x11] = '\0';
  this_ptr->unk[0x12] = '\0';
  this_ptr->unk[0x13] = '\0';
  *(uint *)(this_ptr->unk + 0xc) = *(uint *)(this_ptr->unk + 0x10);
  *(uint *)(this_ptr->unk + 8) = *(uint *)(this_ptr->unk + 0xc);
  this_ptr->unk[0] = '\0';
  this_ptr->unk[1] = '\0';
  this_ptr->unk[2] = '\0';
  this_ptr->unk[3] = '?';
  this_ptr->unk[4] = '\0';
  this_ptr->unk[5] = '\0';
  this_ptr->unk[6] = '\0';
  this_ptr->unk[7] = '@';
  this_ptr->unk[0x2c] = '\0';
  this_ptr->unk[0x2d] = '\0';
  this_ptr->unk[0x2e] = -0x80;
  this_ptr->unk[0x2f] = '?';
  this_ptr->unk[0x30] = '\0';
  this_ptr->unk[0x31] = '\0';
  this_ptr->unk[0x32] = -0x80;
  this_ptr->unk[0x33] = '?';
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10(6.0,20.0);
  *(float *)(this_ptr->unk + 0x34) = fVar1;
  this_ptr->unk[0x40] = '\0';
  this_ptr->unk[0x41] = '\0';
  this_ptr->unk[0x42] = '\0';
  this_ptr->unk[0x43] = '\0';
  *(uint *)(this_ptr->unk + 0x3c) = *(uint *)(this_ptr->unk + 0x40);
  *(uint *)(this_ptr->unk + 0x38) = *(uint *)(this_ptr->unk + 0x3c);
  this_ptr->unk[0x44] = '\0';
  this_ptr->unk[0x45] = '\0';
  this_ptr->unk[0x46] = '\0';
  this_ptr->unk[0x47] = 'A';
  return;
}
