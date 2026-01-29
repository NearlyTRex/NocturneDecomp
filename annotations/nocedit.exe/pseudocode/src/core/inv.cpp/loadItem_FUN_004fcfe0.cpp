// Name: core_inv.cpp_loadItem_FUN_004fcfe0
// Address: 004fcfe0
// Address Range: [[004fcfe0, 004fd010]]
// Convention: __cdecl
// Signature: int __cdecl core_inv_cpp_loadItem_FUN_004fcfe0(SInventoryItemInfo *item_info,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_inv_cpp_loadItem_FUN_004fcfe0(SInventoryItemInfo *item_info,_FILE *file_handle)

{
  int iVar1;
  
  iVar1 = _fscanf(file_handle,"\"%[^\"]\", \"%[^\"]\", \"%[^\"]\"\n",item_info,item_info->string2,item_info->string3);
  return (uint)(iVar1 == 3);
}
