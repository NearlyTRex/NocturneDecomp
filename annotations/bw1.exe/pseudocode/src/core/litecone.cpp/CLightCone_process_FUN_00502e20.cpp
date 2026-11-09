// Name: core_litecone.cpp_CLightCone_process_FUN_00502e20
// Address: 00502e20
// Address Range: [[00502e20, 00502e7f]]
// Convention: __cdecl
// Signature: void __cdecl core_litecone_cpp_CLightCone_process_FUN_00502e20(CLightCone *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_litecone_cpp_CLightCone_process_FUN_00502e20(CLightCone *this_ptr,float delta_time)

{
  int iVar1;
  
  if (*(int *)&this_ptr->field_0x160 == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,&this_ptr->field_0x164);
    if (iVar1 != 0) {
      *(uint *)&this_ptr->field_0x160 = 1;
      return;
    }
  }
  else {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,&this_ptr->field_0x1c8);
    if (iVar1 != 0) {
      *(uint *)&this_ptr->field_0x160 = 0;
      return;
    }
  }
  return;
}
