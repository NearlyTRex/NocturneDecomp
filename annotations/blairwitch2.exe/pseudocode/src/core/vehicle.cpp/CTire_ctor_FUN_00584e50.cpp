// Name: core_vehicle.cpp_CTire_ctor_FUN_00584e50
// Address: 00584e50
// Address Range: [[00584e50, 00584e63]]
// Convention: __cdecl
// Signature: CTire * __cdecl core_vehicle_cpp_CTire_ctor_FUN_00584e50(CTire *this_ptr)

#include "nocturne.h"

CTire * __cdecl core_vehicle_cpp_CTire_ctor_FUN_00584e50(CTire *this_ptr)

{
  CKeyFramedModelInstance *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                     ((CKeyFramedModelInstance *)&this_ptr->field_0x14);
  return (CTire *)(pCVar1[-1].model_name + 0xf0);
}
