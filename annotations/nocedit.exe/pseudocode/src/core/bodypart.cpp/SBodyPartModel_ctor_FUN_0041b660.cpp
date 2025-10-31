// Name: core_bodypart.cpp_SBodyPartModel_ctor_FUN_0041b660
// Address: 0041b660
// Address Range: [[0041b660, 0041b673]]
// Convention: __cdecl
// Signature: SBodyPartModel * core_bodypart.cpp_SBodyPartModel_ctor_FUN_0041b660(SBodyPartModel * this_ptr)
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0

#include "nocturne.h"

SBodyPartModel * __cdecl
core_bodypart_cpp_SBodyPartModel_ctor_FUN_0041b660(SBodyPartModel *this_ptr)

{
  CKeyFramedModelInstance *pCVar1;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                     ((CKeyFramedModelInstance *)(this_ptr->field0_0x0 + 0x18));
  return (SBodyPartModel *)(pCVar1[-1].animation_state + 0x88);
}


// Assembly code:
// 0041b660: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_bodypart.cpp_SBodyPartModel_ctor_FUN_0041b660
//   XREF to: Stack[0x4] (READ)
// 0041b664: ADD EAX,0x18
// 0041b667: PUSH EAX
// 0041b668: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 0041b66d: ADD ESP,0x4
// 0041b670: SUB EAX,0x18
// 0041b673: RET
