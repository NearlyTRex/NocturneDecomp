// Name: core_litecone.cpp_CLightCone_process_FUN_004e4240
// Address: 004e4240
// Address Range: [[004e4240, 004e429f]]
// Convention: __cdecl
// Signature: void __cdecl core_litecone_cpp_CLightCone_process_FUN_004e4240(CLightCone *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_litecone_cpp_CLightCone_process_FUN_004e4240(CLightCone *this_ptr,float delta_time)

{
  int iVar1;
  
  if (this_ptr->state == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,this_ptr->on_event);
    if (iVar1 != 0) {
      this_ptr->state = 1;
      return;
    }
  }
  else {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,this_ptr->off_event);
    if (iVar1 != 0) {
      this_ptr->state = 0;
      return;
    }
  }
  return;
}
