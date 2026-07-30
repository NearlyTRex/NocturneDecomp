// Name: core_script.cpp_CScript_processTimer_FUN_00504b70
// Address: 00504b70
// Address Range: [[00504b70, 00504bef]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_processTimer_FUN_00504b70(CScript *this_ptr,float delta_time,float *timer_value)

#include "nocturne.h"

int __cdecl core_script_cpp_CScript_processTimer_FUN_00504b70(CScript *this_ptr,float delta_time,float *timer_value)

{
  if (delta_time < 0.0) {
    PTR_01cc4800 = "..\\core\\script.cpp";
    INT_01cc4804 = 0xdf7;
    core_main_c_FUN_004c8440("CScript::processTimer - invalidTimeToWait");
  }
  if ((float)(this_ptr->script_text).vtable < 0.0) {
    (this_ptr->script_text).vtable = (UStrListVTable)delta_time;
  }
  if ((float)(this_ptr->script_text).vtable <= *timer_value) {
    *timer_value = *timer_value - (float)(this_ptr->script_text).vtable;
    (this_ptr->script_text).vtable._us = (CStrList_vtable *)0x0;
    return 1;
  }
  (this_ptr->script_text).vtable =
       (CStrList_vtable *)((this_ptr->script_text).vtable - *timer_value);
  *timer_value = 0.0;
  return 0;
}
