// Name: core_dracbrid.cpp_CDraculaBride_checkHeartShot_FUN_0045a6a0
// Address: 0045a6a0
// Address Range: [[0045a6a0, 0045a6ee]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_checkHeartShot_FUN_0045a6a0(CDraculaBride *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_dracbrid_cpp_CDraculaBride_checkHeartShot_FUN_0045a6a0(CDraculaBride *this_ptr,SDamageInfo *damage_info)

{
  byte *puVar1;
  
  puVar1 = PTR_DAT_005ad350;
  if (((damage_info->damage_type != DAMAGE_TYPE_BURN) &&
      (damage_info->hit_part_index == this_ptr->part_indices[6])) &&
     (damage_info->damage_type == DAMAGE_TYPE_LAUNCH)) {
    damage_info->damage_amount = damage_info->damage_amount * (float)20;
    engine_console_cpp_CConsole_printf_FUN_0043ac60(puVar1,"Shot thru the heart\n");
    return;
  }
  return;
}
