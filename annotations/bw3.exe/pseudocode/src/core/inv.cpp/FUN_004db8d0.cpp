// Name: core_inv.cpp_FUN_004db8d0
// Address: 004db8d0
// Address Range: [[004db8d0, 004db980]]
// Convention: unknown
// Signature: void core_inv_cpp_FUN_004db8d0(CInventory *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_inv_cpp_FUN_004db8d0(CInventory *param_1,int param_2)

{
  char cVar1;
  CAmmo *pCVar2;
  CAmmo *item_actor;
  char *pcVar3;
  
  if (*(int *)(param_2 + 0x56c) == -1) {
    return;
  }
  pCVar2 = (CAmmo *)FUN_005a3cb2(800);
  item_actor = (CAmmo *)0x0;
  if (pCVar2 != (CAmmo *)0x0) {
    item_actor = core_ammo_cpp_CAmmo_ctor_FUN_0040de60(pCVar2);
  }
  if (item_actor == (CAmmo *)0x0) {
    _DAT_01d71de0 = "..\\core\\inv.cpp";
    _DAT_01d71de4 = 0x498;
    core_main_c_FUN_004e4330("Out of memory");
  }
  *(uint *)&item_actor->field_0x314 = *(uint *)(param_2 + 0x568);
  *(uint *)&item_actor->field_0x318 = *(uint *)(param_2 + 0x56c);
  (*(code *)**(uint **)&item_actor->field_0x154)(item_actor);
  pcVar3 = "Some_ammo";
  pCVar2 = item_actor;
  do {
    cVar1 = *pcVar3;
    *(char *)pCVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pCVar2->field_0x1 = cVar1;
    pCVar2 = (CAmmo *)&pCVar2->field_0x2;
  } while (cVar1 != '\0');
  core_inv_cpp_FUN_004da880(param_1,(CDemonActor *)item_actor,0);
  return;
}
