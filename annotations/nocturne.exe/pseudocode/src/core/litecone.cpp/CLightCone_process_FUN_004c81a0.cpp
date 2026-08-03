// Name: core_litecone.cpp_CLightCone_process_FUN_004c81a0
// Address: 004c81a0
// Address Range: [[004c81a0, 004c81ff]]
// Convention: __cdecl
// Signature: void __cdecl core_litecone_cpp_CLightCone_process_FUN_004c81a0(CLightCone *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_litecone_cpp_CLightCone_process_FUN_004c81a0(CLightCone *this_ptr,float delta_time)

{
  int iVar1;
  
  if (this_ptr->state == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,this_ptr->on_event);
    if (iVar1 != 0) {
      this_ptr->state = 1;
      return;
    }
  }
  else {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,this_ptr->off_event);
    if (iVar1 != 0) {
      this_ptr->state = 0;
      return;
    }
  }
  return;
}
