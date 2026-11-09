// Name: core_inv.cpp_FUN_004f8fe0
// Address: 004f8fe0
// Address Range: [[004f8fe0, 004f90ce]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_FUN_004f8fe0(CInventory *this_ptr,int direction)

#include "nocturne.h"

void __cdecl core_inv_cpp_FUN_004f8fe0(CInventory *this_ptr,int direction)

{
  CDemonActor *pCVar1;
  CDemonActor *this_ptr_00;
  char *str2;
  char *str1;
  int iVar2;
  int iVar3;
  int iVar4;
  CInventory *pCVar5;
  
  core_inv_cpp_FUN_004fa6c0(this_ptr,1);
  if (*(int *)(this_ptr + 0x338) != 0) {
    iVar3 = 0;
    pCVar5 = this_ptr;
    if (0 < *(int *)(this_ptr + 0x10)) {
      do {
        if (*(int *)(this_ptr + 0x338) == *(int *)(pCVar5 + 0x14)) break;
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
      this_ptr_00 = (CDemonActor *)
                    core_actor_cpp_castToClassHash_FUN_0040c600
                              (*(uint *)(this_ptr + iVar3 * 4 + 0x14),
                               g_CWeaponClassInfo.name_hash);
      if (this_ptr_00 != (CDemonActor *)0x0) {
        str2 = core_actor_cpp_FUN_00408830(*(CDemonActor **)(this_ptr + 0x338));
        str1 = core_actor_cpp_FUN_00408830(this_ptr_00);
        iVar2 = _strcmp(str1,str2);
        if (iVar2 == 0) {
          pCVar1 = *(CDemonActor **)(this_ptr + 0x338);
          if (this_ptr_00 == pCVar1) {
            return;
          }
          if (pCVar1 != (CDemonActor *)0x0) {
            (**(code **)(*(int *)&pCVar1->field_0x154 + 0xc))(pCVar1,0x3dcccccd);
          }
          *(CDemonActor **)(this_ptr + 0x338) = this_ptr_00;
          core_inv_cpp_FUN_004fa4e0(this_ptr,999);
          return;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 100);
  }
  return;
}
