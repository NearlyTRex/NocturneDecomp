// Name: core_partibox.cpp_CParticleBox_setup_FUN_005ac8d0
// Address: 005ac8d0
// Address Range: [[005ac8d0, 005ac959]]
// Convention: __cdecl
// Signature: void __cdecl core_partibox_cpp_CParticleBox_setup_FUN_005ac8d0(CParticleBox *this_ptr)

#include "nocturne.h"

void __cdecl core_partibox_cpp_CParticleBox_setup_FUN_005ac8d0(CParticleBox *this_ptr)

{
  core_boxactor_cpp_CBoxActor_setup_FUN_0041be70((CBoxActor *)this_ptr);
  unkaddr_005a7eb0_cpp_FUN_005a8030(&this_ptr->field_0x154,0x100);
  unkaddr_005a7eb0_cpp_FUN_005a8050(&this_ptr->field_0x154,this_ptr);
  unkaddr_005a7eb0_cpp_FUN_005a8030(&this_ptr->field_0x198,0x100);
  unkaddr_005a7eb0_cpp_FUN_005a8050(&this_ptr->field_0x198,this_ptr);
  unkaddr_005a7eb0_cpp_FUN_005a8030(&this_ptr->field_0x1dc,0x200);
  unkaddr_005a7eb0_cpp_FUN_005a8050(&this_ptr->field_0x1dc,this_ptr);
  unkaddr_005a7eb0_cpp_FUN_005a8030(&this_ptr->field_0x220,0x100);
  unkaddr_005a7eb0_cpp_FUN_005a8050(&this_ptr->field_0x220,this_ptr);
  return;
}
