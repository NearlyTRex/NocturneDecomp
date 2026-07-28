// Name: core_vehicle.cpp_CTire_ctor_FUN_0054f870
// Address: 0054f870
// Address Range: [[0054f870, 0054f883]]
// Convention: unknown
// Signature: char * core_vehicle_cpp_CTire_ctor_FUN_0054f870(int param_1)

#include "nocturne.h"

char * core_vehicle_cpp_CTire_ctor_FUN_0054f870(int param_1)

{
  CKeyFramedModelInstance *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                     ((CKeyFramedModelInstance *)(param_1 + 0x14));
  return pCVar1[-1].model_name + 0xf0;
}
