// Name: core_vehicle.cpp_CTire_ctor_FUN_005e8da0
// Address: 005e8da0
// Address Range: [[005e8da0, 005e8db3]]
// Convention: __cdecl
// Signature: CTire * core_vehicle.cpp_CTire_ctor_FUN_005e8da0(CTire * this_ptr)
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0

#include "nocturne.h"

CTire * __cdecl core_vehicle_cpp_CTire_ctor_FUN_005e8da0(CTire *this_ptr)

{
  CKeyFramedModelInstance *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                     ((CKeyFramedModelInstance *)(this_ptr->field0_0x0 + 0x14));
  return (CTire *)(pCVar1[-1].animation_state + 0x8c);
}


// Assembly code:
// 005e8da0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_vehicle.cpp_CTire_ctor_FUN_005e8da0
//   XREF to: Stack[0x4] (READ)
// 005e8da4: ADD EAX,0x14
// 005e8da7: PUSH EAX
// 005e8da8: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 005e8dad: ADD ESP,0x4
// 005e8db0: SUB EAX,0x14
// 005e8db3: RET
