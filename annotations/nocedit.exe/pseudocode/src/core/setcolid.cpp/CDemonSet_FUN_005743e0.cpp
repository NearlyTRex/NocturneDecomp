// Name: core_setcolid.cpp_CDemonSet_FUN_005743e0
// Address: 005743e0
// Address Range: [[005743e0, 00574432]]
// Convention: __cdecl
// Signature: void core_setcolid.cpp_CDemonSet_FUN_005743e0(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_CDemonSet_FUN_005743e0(CDemonSet *this_ptr)

{
  void *pvVar1;
  CDemonSet *pCVar2;
  int iVar3;
  
  pvVar1 = this_ptr->actor_list_ptr;
  this_ptr->unk4[0x7d08] = '\0';
  this_ptr->unk4[0x7d09] = '\0';
  this_ptr->unk4[0x7d0a] = '\0';
  this_ptr->unk4[0x7d0b] = '\0';
  iVar3 = 0;
  pCVar2 = this_ptr;
  if (0 < (int)pvVar1) {
    do {
      if (*(int *)(*(int *)pCVar2->actor_list_data + 0x100) == 0) {
        *(int *)(this_ptr->unk4 + *(int *)(this_ptr->unk4 + 0x7d08) * 4 + 0x7d0c) =
             *(int *)pCVar2->actor_list_data;
        *(int *)(this_ptr->unk4 + 0x7d08) = *(int *)(this_ptr->unk4 + 0x7d08) + 1;
      }
      iVar3 = iVar3 + 1;
      pCVar2 = (CDemonSet *)pCVar2->cameras;
    } while (iVar3 < (int)this_ptr->actor_list_ptr);
  }
  return;
}
