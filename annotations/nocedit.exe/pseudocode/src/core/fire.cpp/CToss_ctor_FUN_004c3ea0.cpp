// Name: core_fire.cpp_CToss_ctor_FUN_004c3ea0
// Address: 004c3ea0
// Address Range: [[004c3ea0, 004c3ecd]]
// Convention: __cdecl
// Signature: CToss * core_fire.cpp_CToss_ctor_FUN_004c3ea0(CToss * this_ptr)
// Function calls:
//   core_box.cpp_CBox_ctor_FUN_0041dc50
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0

#include "nocturne.h"

CToss * __cdecl core_fire_cpp_CToss_ctor_FUN_004c3ea0(CToss *this_ptr)

{
  CKeyFramedModelInstance *pCVar1;
  CBox *pCVar2;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                     ((CKeyFramedModelInstance *)(this_ptr->field0_0x0 + 4));
  pCVar2 = core_box_cpp_CBox_ctor_FUN_0041dc50((CBox *)(pCVar1 + 1));
  pCVar2[1].position.y = 0.0;
  return (CToss *)&pCVar2[-1].scrape_points[0].raytrace_intersection;
}


// Assembly code:
// 004c3ea0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_fire.cpp_CToss_ctor_FUN_004c3ea0
//   XREF to: Stack[0x4] (READ)
// 004c3ea4: ADD EAX,0x4
// 004c3ea7: PUSH EAX
// 004c3ea8: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 004c3ead: ADD ESP,0x4
// 004c3eb0: ADD EAX,0x17c
// 004c3eb5: PUSH EAX
// 004c3eb6: CALL core_box.cpp_CBox_ctor_FUN_0041dc50
//   XREF to: 0041dc50 (UNCONDITIONAL_CALL)
// 004c3ebb: ADD ESP,0x4
// 004c3ebe: MOV dword ptr [EAX + 0x25c],0x0
// 004c3ec8: SUB EAX,0x180
// 004c3ecd: RET
