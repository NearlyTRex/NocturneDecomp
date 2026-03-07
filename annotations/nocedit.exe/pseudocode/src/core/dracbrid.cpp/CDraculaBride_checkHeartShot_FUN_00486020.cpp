// Name: core_dracbrid.cpp_CDraculaBride_checkHeartShot_FUN_00486020
// Address: 00486020
// Address Range: [[00486020, 0048606e]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_checkHeartShot_FUN_00486020(CDraculaBride *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_dracbrid_cpp_CDraculaBride_checkHeartShot_FUN_00486020(CDraculaBride *this_ptr,SDamageInfo *damage_info)

{
  CConsole *this_ptr_00;
  
  this_ptr_00 = g_CConsolePtr;
  if (((damage_info->damage_type != DAMAGE_TYPE_BURN) &&
      (damage_info->hit_part_index == this_ptr->part_indices[6])) &&
     (damage_info->damage_type == DAMAGE_TYPE_LAUNCH)) {
    damage_info->damage_amount = damage_info->damage_amount * (float)20;
    engine_console_cpp_CConsole_printf_FUN_00441890(this_ptr_00,"Shot thru the heart\n");
    return;
  }
  return;
}
