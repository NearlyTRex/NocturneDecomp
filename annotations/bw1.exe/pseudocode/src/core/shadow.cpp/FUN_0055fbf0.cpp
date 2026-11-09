// Name: core_shadow.cpp_FUN_0055fbf0
// Address: 0055fbf0
// Address Range: [[0055fbf0, 0055fc5c]]
// Convention: unknown
// Signature: int core_shadow_cpp_FUN_0055fbf0(CCharacter *param_1)

#include "nocturne.h"

int core_shadow_cpp_FUN_0055fbf0(CCharacter *param_1)

{
  int iVar1;
  
  if ((*(int *)&param_1[1].field_0x12c == 0) &&
     (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560), iVar1 != 0)
     ) {
    return 0;
  }
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  if ((iVar1 != 0) &&
     (iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                        (0x01C51D80,"heroCanSee"), iVar1 == 0)) {
    return 0;
  }
  iVar1 = core_charactr_cpp_FUN_0042f240(param_1);
  return iVar1;
}
