// Name: core_filmreel.cpp_CFilmProjector_setup_FUN_00496520
// Address: 00496520
// Address Range: [[00496520, 0049655c]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_CFilmProjector_setup_FUN_00496520(CFilmProjector *this_ptr)

#include "nocturne.h"

void __cdecl core_filmreel_cpp_CFilmProjector_setup_FUN_00496520(CFilmProjector *this_ptr)

{
  core_dest_cpp_CActorDestination_setup_FUN_004591b0((CActorDestination *)this_ptr);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580
            ((CKeyFramedModelInstance *)&this_ptr->field_0x1f4);
  *(uint *)&this_ptr->field_0xf8 = 1;
  *(uint *)&this_ptr->field_0x3d8 = 0;
  *(uint *)&this_ptr->field_0x3dc = 0;
  return;
}
