// Name: core_glass.cpp_CGlass_process_FUN_004ac3f0
// Address: 004ac3f0
// Address Range: [[004ac3f0, 004ac432]]
// Convention: unknown
// Signature: void core_glass_cpp_CGlass_process_FUN_004ac3f0(CGlass *param_1)

#include "nocturne.h"

void core_glass_cpp_CGlass_process_FUN_004ac3f0(CGlass *param_1)

{
  int iVar1;
  
  if (param_1->shattered == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,param_1->break_event);
    if (iVar1 != 0) {
      core_glass_cpp_CGlass_shatter_FUN_004ada20(param_1,&(param_1->base).location.position);
      return;
    }
  }
  else {
    (param_1->base).process_disabled = 1;
  }
  return;
}
