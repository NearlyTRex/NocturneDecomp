// Name: core_trigger.cpp_CTrigger_applyDamage_FUN_005785b0
// Address: 005785b0
// Address Range: [[005785b0, 00578626]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_applyDamage_FUN_005785b0(CTrigger *this_ptr,float hit_points)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_applyDamage_FUN_005785b0(CTrigger *this_ptr,float hit_points)

{
  float fVar1;
  
  if ((*(int *)&this_ptr->field_0x2d0 == 7) && (*(float *)&this_ptr->field_0x4cc <= 0.0)) {
    fVar1 = *(float *)&this_ptr->field_0x454 - hit_points;
    *(float *)&this_ptr->field_0x454 = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)&this_ptr->field_0x454 = 0;
    }
    engine_console_cpp_FUN_00436710
              (g_CConsolePtr,"%s received %g damage, hitpoints %g\n",this_ptr,(double)hit_points,
               (double)*(float *)&this_ptr->field_0x454);
    *(uint *)&this_ptr->field_0x4cc = 0x3f800000;
  }
  return;
}
