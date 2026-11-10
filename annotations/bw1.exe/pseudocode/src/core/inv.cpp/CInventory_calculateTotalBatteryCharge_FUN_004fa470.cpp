// Name: core_inv.cpp_CInventory_calculateTotalBatteryCharge_FUN_004fa470
// Address: 004fa470
// Address Range: [[004fa470, 004fa4dc]]
// Convention: __cdecl
// Signature: float __cdecl core_inv_cpp_CInventory_calculateTotalBatteryCharge_FUN_004fa470(CInventory *this_ptr,float max_charge)

#include "nocturne.h"

float __cdecl core_inv_cpp_CInventory_calculateTotalBatteryCharge_FUN_004fa470(CInventory *this_ptr,float max_charge)

{
  int iVar1;
  int iVar2;
  CInventory *pCVar3;
  float fStack_20;
  
  fStack_20 = 1.0 / max_charge;
  iVar2 = 0;
  pCVar3 = this_ptr;
  if (0 < *(int *)(this_ptr + 0x10)) {
    do {
      iVar1 = core_actor_cpp_castToClassHash_FUN_0040c600
                        (*(uint *)(pCVar3 + 0x14),g_CBatteryClassInfo.name_hash);
      if (iVar1 != 0) {
        fStack_20 = 1.0 / *(float *)(iVar1 + 0x2d8) + fStack_20;
      }
      iVar2 = iVar2 + 1;
      pCVar3 = pCVar3 + 4;
    } while (iVar2 < *(int *)(this_ptr + 0x10));
  }
  return 1.0 / fStack_20;
}
