// Name: core_litecone.cpp_CLightCone_process_FUN_00506bc0
// Address: 00506bc0
// Address Range: [[00506bc0, 00506c1f]]
// Convention: __cdecl
// Signature: void __cdecl core_litecone_cpp_CLightCone_process_FUN_00506bc0(CLightCone *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl
core_litecone_cpp_CLightCone_process_FUN_00506bc0(CLightCone *this_ptr,float delta_time)

{
  int iVar1;
  
  if (this_ptr->state == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->on_event);
    if (iVar1 != 0) {
      this_ptr->state = 1;
      return;
    }
  }
  else {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->off_event);
    if (iVar1 != 0) {
      this_ptr->state = 0;
      return;
    }
  }
  return;
}
