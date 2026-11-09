// Name: core_trigger.cpp_FUN_0059be30
// Address: 0059be30
// Address Range: [[0059be30, 0059bea6]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_FUN_0059be30(CTrigger *this_ptr,float hit_points)

#include "nocturne.h"

void __cdecl core_trigger_cpp_FUN_0059be30(CTrigger *this_ptr,float hit_points)

{
  float fVar1;
  
  if ((*(int *)&this_ptr->field_0x174 == 7) && (*(float *)&this_ptr->field_0x370 <= 0.0)) {
    fVar1 = *(float *)&this_ptr->field_0x2f8 - hit_points;
    *(float *)&this_ptr->field_0x2f8 = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)&this_ptr->field_0x2f8 = 0;
    }
    engine_console_cpp_FUN_00445430
              (g_CConsolePtr,"%s received %g damage, hitpoints %g\n",this_ptr,(double)hit_points,
               (double)*(float *)&this_ptr->field_0x2f8);
    *(uint *)&this_ptr->field_0x370 = 0x3f800000;
  }
  return;
}
