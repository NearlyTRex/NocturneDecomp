// Name: core_dracbrid.cpp_CDraculaBride_checkHeartShot_FUN_00464f10
// Address: 00464f10
// Address Range: [[00464f10, 00464f5e]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_checkHeartShot_FUN_00464f10(CDraculaBride *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dracbrid_cpp_CDraculaBride_checkHeartShot_FUN_00464f10(CDraculaBride *this_ptr,SDamageInfo *damage_info)

{
  CConsole *this_ptr_00;
  
  this_ptr_00 = g_CConsolePtr;
  if (((damage_info->damage_type != DAMAGE_TYPE_BURN) &&
      (damage_info->hit_part_index == this_ptr->part_indices[6])) &&
     (damage_info->damage_type == DAMAGE_TYPE_ATTACK_STAKE)) {
    damage_info->damage_amount = damage_info->damage_amount * (float)_DAT_005d119c;
    engine_console_cpp_CConsole_printf_FUN_00436710(this_ptr_00,"Shot thru the heart\n");
    return;
  }
  return;
}
