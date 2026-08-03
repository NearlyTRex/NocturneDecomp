// Name: core_trigger.cpp_CTrigger_applyDamage_FUN_005485e0
// Address: 005485e0
// Address Range: [[005485e0, 00548656]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_applyDamage_FUN_005485e0(CTrigger *this_ptr,float hit_points)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_applyDamage_FUN_005485e0(CTrigger *this_ptr,float hit_points)

{
  float fVar1;
  
  if ((this_ptr->hero_triggers_me == 7) && (this_ptr->damage_cooldown <= 0.0)) {
    fVar1 = this_ptr->hit_points - hit_points;
    this_ptr->hit_points = fVar1;
    if (fVar1 < 0.0) {
      this_ptr->hit_points = 0.0;
    }
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (g_CConsole_PTR_005ad350,"%s received %g damage, hitpoints %g\n",this_ptr,
               (double)hit_points,(double)this_ptr->hit_points);
    this_ptr->damage_cooldown = 1.0;
  }
  return;
}
