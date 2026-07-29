// Name: core_vehicle.cpp_CTire_ctor_FUN_0054f870
// Address: 0054f870
// Address Range: [[0054f870, 0054f883]]
// Convention: __cdecl
// Signature: CTire * __cdecl core_vehicle_cpp_CTire_ctor_FUN_0054f870(CTire *this_ptr)

#include "nocturne.h"

CTire * __cdecl core_vehicle_cpp_CTire_ctor_FUN_0054f870(CTire *this_ptr)

{
  CKeyFramedModelInstance *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(&this_ptr->model);
  return (CTire *)(pCVar1[-1].model_name + 0xf0);
}
