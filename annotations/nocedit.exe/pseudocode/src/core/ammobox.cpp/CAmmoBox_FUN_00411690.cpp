// Name: core_ammobox.cpp_CAmmoBox_FUN_00411690
// Address: 00411690
// Address Range: [[00411690, 004116f2]]
// Convention: __cdecl
// Signature: void __cdecl core_ammobox_cpp_CAmmoBox_FUN_00411690(CAmmoBox *this_ptr)

#include "nocturne.h"

void __cdecl core_ammobox_cpp_CAmmoBox_FUN_00411690(CAmmoBox *this_ptr)

{
  char cVar1;
  float in_stack_00000008;
  
  this_ptr->unk1 = in_stack_00000008;
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"Open pct : %f\n",(double)in_stack_00000008);
  if ((*(int *)(this_ptr->open_sound + 0x20) == 0) &&
     (cVar1 = this_ptr->open_sound[0], this_ptr->open_sound[0x20] = '\x01',
     this_ptr->open_sound[0x21] = '\0', this_ptr->open_sound[0x22] = '\0',
     this_ptr->open_sound[0x23] = '\0', cVar1 != '\0')) {
    (*((this_ptr->base).vtable._ub)->playSound)(&this_ptr->base,this_ptr->open_sound);
    return;
  }
  return;
}
