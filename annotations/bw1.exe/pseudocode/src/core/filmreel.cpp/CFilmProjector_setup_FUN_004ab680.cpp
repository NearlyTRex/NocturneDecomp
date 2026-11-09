// Name: core_filmreel.cpp_CFilmProjector_setup_FUN_004ab680
// Address: 004ab680
// Address Range: [[004ab680, 004ab6bc]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_CFilmProjector_setup_FUN_004ab680(CFilmProjector *this_ptr)

#include "nocturne.h"

void __cdecl core_filmreel_cpp_CFilmProjector_setup_FUN_004ab680(CFilmProjector *this_ptr)

{
  core_dest_cpp_CActorDestination_setup_FUN_0045d260((CActorDestination *)this_ptr);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
            ((CKeyFramedModelInstance *)&this_ptr->field_0x1f4);
  *(uint *)&this_ptr->field_0xf8 = 1;
  *(uint *)&this_ptr->field_0x3d8 = 0;
  *(uint *)&this_ptr->field_0x3dc = 0;
  return;
}
