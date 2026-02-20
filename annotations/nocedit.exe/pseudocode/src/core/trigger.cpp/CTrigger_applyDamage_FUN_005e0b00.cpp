// Name: core_trigger.cpp_CTrigger_applyDamage_FUN_005e0b00
// Address: 005e0b00
// Address Range: [[005e0b00, 005e0b76]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_applyDamage_FUN_005e0b00(CTrigger *this_ptr,float hit_points)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_applyDamage_FUN_005e0b00(CTrigger *this_ptr,float hit_points)

{
  float fVar1;
  
  if ((this_ptr->hero_triggers_me == 7) && (this_ptr->damage_cooldown <= 0.0)) {
    fVar1 = this_ptr->hit_points - hit_points;
    this_ptr->hit_points = fVar1;
    if (fVar1 < 0.0) {
      this_ptr->hit_points = 0.0;
    }
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s received %g damage, hitpoints %g\n",this_ptr,(double)hit_points,
               (double)this_ptr->hit_points);
    this_ptr->damage_cooldown = 1.0;
  }
  return;
}
