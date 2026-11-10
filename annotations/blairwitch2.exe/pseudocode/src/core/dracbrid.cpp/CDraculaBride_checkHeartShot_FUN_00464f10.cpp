// Name: core_dracbrid.cpp_CDraculaBride_checkHeartShot_FUN_00464f10
// Address: 00464f10
// Address Range: [[00464f10, 00464f5e]]
// Convention: __cdecl
// Signature: void __cdecl core_dracbrid_cpp_CDraculaBride_checkHeartShot_FUN_00464f10(CDraculaBride *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dracbrid_cpp_CDraculaBride_checkHeartShot_FUN_00464f10(CDraculaBride *this_ptr,SDamageInfo *damage_info)

{
  CConsole *pCVar1;
  
  pCVar1 = g_CConsolePtr;
  if (((*(int *)(damage_info + 0x30) != 0x6c) && (*(int *)damage_info == this_ptr->part_indices[6]))
     && (*(int *)(damage_info + 0x30) == 0x68)) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005d119c;
    engine_console_cpp_FUN_00436710(pCVar1,"Shot thru the heart\n");
    return;
  }
  return;
}
