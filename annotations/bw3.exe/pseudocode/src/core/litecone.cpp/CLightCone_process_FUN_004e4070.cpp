// Name: core_litecone.cpp_CLightCone_process_FUN_004e4070
// Address: 004e4070
// Address Range: [[004e4070, 004e40cf]]
// Convention: __cdecl
// Signature: void __cdecl core_litecone_cpp_CLightCone_process_FUN_004e4070(CLightCone *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_litecone_cpp_CLightCone_process_FUN_004e4070(CLightCone *this_ptr,float delta_time)

{
  int iVar1;
  
  if (*(int *)&this_ptr->field_0x160 == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                      (0x01C6E360,&this_ptr->field_0x164);
    if (iVar1 != 0) {
      *(uint *)&this_ptr->field_0x160 = 1;
      return;
    }
  }
  else {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                      (0x01C6E360,&this_ptr->field_0x1c8);
    if (iVar1 != 0) {
      *(uint *)&this_ptr->field_0x160 = 0;
      return;
    }
  }
  return;
}
