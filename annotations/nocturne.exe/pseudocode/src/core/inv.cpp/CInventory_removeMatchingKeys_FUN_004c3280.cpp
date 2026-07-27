// Name: core_inv.cpp_CInventory_removeMatchingKeys_FUN_004c3280
// Address: 004c3280
// Address Range: [[004c3280, 004c32db]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_removeMatchingKeys_FUN_004c3280(int param_1,uint param_2)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_removeMatchingKeys_FUN_004c3280(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = param_1;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      while ((iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                                (*(uint *)(iVar2 + 0xc),
                                 g_CKeyActorActorType_01cc30a8.name_hash), iVar1 == 0 ||
             ((*(uint *)(iVar1 + 0x2cc) & param_2) == 0))) {
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 4;
        if (*(int *)(param_1 + 8) <= iVar3) {
          return;
        }
      }
      core_inv_cpp_CInventory_removeItem_FUN_004c07b0(param_1,*(uint *)(iVar2 + 0xc),1);
    } while (iVar3 < *(int *)(param_1 + 8));
  }
  return;
}
