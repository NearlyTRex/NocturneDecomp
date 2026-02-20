// Name: core_vehicle.cpp_CTire_ctor_FUN_005e8da0
// Address: 005e8da0
// Address Range: [[005e8da0, 005e8db3]]
// Convention: __cdecl
// Signature: CTire * __cdecl core_vehicle_cpp_CTire_ctor_FUN_005e8da0(CTire *this_ptr)

#include "nocturne.h"

CTire * __cdecl core_vehicle_cpp_CTire_ctor_FUN_005e8da0(CTire *this_ptr)

{
  CTire_ptr_20 pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&this_ptr->model);
  return ADJ(pCVar1);
}
