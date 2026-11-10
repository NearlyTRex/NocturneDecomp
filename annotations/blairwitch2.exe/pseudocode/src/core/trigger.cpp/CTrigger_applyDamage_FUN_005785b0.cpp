// Name: core_trigger.cpp_CTrigger_applyDamage_FUN_005785b0
// Address: 005785b0
// Address Range: [[005785b0, 00578626]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_applyDamage_FUN_005785b0(CTrigger *this_ptr,float hit_points)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_applyDamage_FUN_005785b0(CTrigger *this_ptr,float hit_points)

{
  float fVar1;
  
  if ((this_ptr->trigger_cause == TRIGGER_CAUSE_DAMAGE) && (this_ptr->damage_cooldown <= 0.0)) {
    fVar1 = this_ptr->hit_points - hit_points;
    this_ptr->hit_points = fVar1;
    if (fVar1 < 0.0) {
      this_ptr->hit_points = 0.0;
    }
    engine_console_cpp_FUN_00436710
              (g_CConsolePtr,"%s received %g damage, hitpoints %g\n",this_ptr,(double)hit_points,
               (double)this_ptr->hit_points);
    this_ptr->damage_cooldown = 1.0;
  }
  return;
}
