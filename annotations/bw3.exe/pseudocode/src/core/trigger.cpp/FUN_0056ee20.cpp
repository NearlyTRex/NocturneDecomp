// Name: core_trigger.cpp_FUN_0056ee20
// Address: 0056ee20
// Address Range: [[0056ee20, 0056ee96]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_FUN_0056ee20(CTrigger *this_ptr,float hit_points)

#include "nocturne.h"

void __cdecl core_trigger_cpp_FUN_0056ee20(CTrigger *this_ptr,float hit_points)

{
  float fVar1;
  
  if ((*(int *)&this_ptr->field_0x174 == 7) && (*(float *)&this_ptr->field_0x370 <= 0.0)) {
    fVar1 = *(float *)&this_ptr->field_0x2f8 - hit_points;
    *(float *)&this_ptr->field_0x2f8 = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)&this_ptr->field_0x2f8 = 0;
    }
    engine_console_cpp_FUN_00441ff0
              (g_CConsolePtr,"%s received %g damage, hitpoints %g\n",this_ptr,(double)hit_points,
               (double)*(float *)&this_ptr->field_0x2f8);
    *(uint *)&this_ptr->field_0x370 = 0x3f800000;
  }
  return;
}
