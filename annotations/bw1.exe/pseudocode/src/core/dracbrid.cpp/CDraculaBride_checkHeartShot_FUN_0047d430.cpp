// Name: core_dracbrid.cpp_CDraculaBride_checkHeartShot_FUN_0047d430
// Address: 0047d430
// Address Range: [[0047d430, 0047d47e]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_checkHeartShot_FUN_0047d430(CDraculaBride *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dracbrid_cpp_CDraculaBride_checkHeartShot_FUN_0047d430(CDraculaBride *this_ptr,SDamageInfo *damage_info)

{
  CConsole *pCVar1;
  
  pCVar1 = g_CConsolePtr;
  if (((damage_info->damage_type != DAMAGE_TYPE_BURN) &&
      (damage_info->hit_part_index == this_ptr->part_indices[6])) &&
     (damage_info->damage_type == DAMAGE_TYPE_ATTACK_STAKE)) {
    damage_info->damage_amount = damage_info->damage_amount * (float)_DAT_005daf95;
    engine_console_cpp_FUN_00445430(pCVar1,"Shot thru the heart\n");
    return;
  }
  return;
}
