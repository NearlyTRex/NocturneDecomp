// Name: core_trigger.cpp_CTrigger_FUN_005e0b00
// Address: 005e0b00
// Address Range: [[005e0b00, 005e0b76]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_FUN_005e0b00(CTrigger *this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_FUN_005e0b00(CTrigger *this_ptr)

{
  float fVar1;
  float in_stack_00000008;
  
  if ((this_ptr->hero_triggers_me == 7) && (this_ptr->unk5 <= 0.0)) {
    fVar1 = this_ptr->hit_points - in_stack_00000008;
    this_ptr->hit_points = fVar1;
    if (fVar1 < 0.0) {
      this_ptr->hit_points = 0.0;
    }
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s received %g damage, hitpoints %g\n",this_ptr,(double)in_stack_00000008,
               (double)this_ptr->hit_points);
    this_ptr->unk5 = 1.0;
  }
  return;
}
