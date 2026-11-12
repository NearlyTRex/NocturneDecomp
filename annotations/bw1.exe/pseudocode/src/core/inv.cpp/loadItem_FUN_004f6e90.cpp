// Name: core_inv.cpp_loadItem_FUN_004f6e90
// Address: 004f6e90
// Address Range: [[004f6e90, 004f6ec0]]
// Convention: __cdecl
// Signature: int __cdecl core_inv_cpp_loadItem_FUN_004f6e90(SInventoryItemInfo *item_info,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_inv_cpp_loadItem_FUN_004f6e90(SInventoryItemInfo *item_info,_FILE *file_handle)

{
  int iVar1;
  
  iVar1 = _fscanf(file_handle,"\"%[^\"]\", \"%[^\"]\", \"%[^\"]\"\n");
  return (uint)(iVar1 == 3);
}
