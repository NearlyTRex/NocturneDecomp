// Name: core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004dbc60
// Address: 004dbc60
// Address Range: [[004dbc60, 004dbd72]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_cycleWeaponOfSameClass_FUN_004dbc60(CInventory *this_ptr,int direction)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_cycleWeaponOfSameClass_FUN_004dbc60(CInventory *this_ptr,int direction)

{
  int iVar1;
  char *str2;
  char *str1;
  int iVar2;
  int iVar3;
  int iVar4;
  CInventory *pCVar5;
  
  core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd270(this_ptr,1);
  if (*(int *)(this_ptr + *(int *)(this_ptr + 0x468) * 4 + 0x610) != 0) {
    iVar3 = 0;
    pCVar5 = this_ptr;
    if (0 < *(int *)(this_ptr + 0x10)) {
      do {
        if (*(int *)(this_ptr + *(int *)(this_ptr + 0x468) * 4 + 0x610) == *(int *)(pCVar5 + 0x14))
        break;
        iVar3 = iVar3 + 1;
        pCVar5 = pCVar5 + 4;
      } while (iVar3 < *(int *)(this_ptr + 0x10));
    }
    iVar4 = 0;
    do {
      iVar3 = iVar3 + direction;
      if (iVar3 < *(int *)(this_ptr + 0x10)) {
        if (iVar3 < 0) {
          iVar3 = *(int *)(this_ptr + 0x10) + -1;
        }
      }
      else {
        iVar3 = 0;
      }
      iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                        (*(uint *)(this_ptr + iVar3 * 4 + 0x14),g_CWeaponClassInfo.name_hash);
      if (iVar1 != 0) {
        str2 = (char *)core_actor_cpp_FUN_00408a50
                                 (*(uint *)(this_ptr + *(int *)(this_ptr + 0x468) * 4 + 0x610)
                                 );
        str1 = (char *)core_actor_cpp_FUN_00408a50(iVar1);
        iVar2 = _strcmp(str1,str2);
        if (iVar2 == 0) {
          iVar3 = *(int *)(this_ptr + *(int *)(this_ptr + 0x468) * 4 + 0x610);
          if (iVar1 == iVar3) {
            return;
          }
          if (iVar3 != 0) {
            (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x14))(iVar3,0x3dcccccd);
          }
          *(int *)(this_ptr + *(int *)(this_ptr + 0x468) * 4 + 0x610) = iVar1;
          core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004dd020(this_ptr,999);
          return;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 100);
  }
  return;
}
