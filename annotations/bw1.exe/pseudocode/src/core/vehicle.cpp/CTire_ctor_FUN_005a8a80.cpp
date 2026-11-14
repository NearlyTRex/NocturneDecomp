// Name: core_vehicle.cpp_CTire_ctor_FUN_005a8a80
// Address: 005a8a80
// Address Range: [[005a8a80, 005a8a93]]
// Convention: __cdecl
// Signature: CTire * __cdecl core_vehicle_cpp_CTire_ctor_FUN_005a8a80(CTire *this_ptr)

#include "nocturne.h"

CTire * __cdecl core_vehicle_cpp_CTire_ctor_FUN_005a8a80(CTire *this_ptr)

{
  CKeyFramedModelInstance *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860(&this_ptr->model);
  return (CTire *)(pCVar1[-1].model_name + 0xf0);
}
