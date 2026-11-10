// Name: core_partibox.cpp_CParticleBox_renderTransparent_FUN_005ad300
// Address: 005ad300
// Address Range: [[005ad300, 005ad350]]
// Convention: __cdecl
// Signature: int __cdecl core_partibox_cpp_CParticleBox_renderTransparent_FUN_005ad300(CParticleBox *this_ptr)

#include "nocturne.h"

int __cdecl core_partibox_cpp_CParticleBox_renderTransparent_FUN_005ad300(CParticleBox *this_ptr)

{
  unkafter_superopt_cpp_FUN_005a8290(&this_ptr->field_0x154);
  unkafter_superopt_cpp_FUN_005a8290(&this_ptr->field_0x198);
  unkafter_superopt_cpp_FUN_005a8290(&this_ptr->field_0x1dc);
  unkafter_superopt_cpp_FUN_005a8290(&this_ptr->field_0x220);
  core_boxactor_cpp_CBoxActor_renderTransparent_FUN_0041c690((CBoxActor *)this_ptr);
  return 1;
}
