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
  if (((*(int *)(damage_info + 0x30) != 0x6c) && (*(int *)damage_info == this_ptr->part_indices[6]))
     && (*(int *)(damage_info + 0x30) == 0x68)) {
    *(float *)(damage_info + 4) = *(float *)(damage_info + 4) * (float)_DAT_005daf95;
    engine_console_cpp_FUN_00445430(pCVar1,"Shot thru the heart\n");
    return;
  }
  return;
}
