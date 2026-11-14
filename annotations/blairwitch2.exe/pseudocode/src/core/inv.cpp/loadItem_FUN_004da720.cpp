// Name: core_inv.cpp_loadItem_FUN_004da720
// Address: 004da720
// Address Range: [[004da720, 004da750]]
// Convention: __cdecl
// Signature: int __cdecl core_inv_cpp_loadItem_FUN_004da720(SInventoryItemInfo *item_info,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_inv_cpp_loadItem_FUN_004da720(SInventoryItemInfo *item_info,_FILE *file_handle)

{
  int iVar1;
  
  iVar1 = _fscanf(file_handle,"\"%[^\"]\", \"%[^\"]\", \"%[^\"]\"\n");
  return (uint)(iVar1 == 3);
}
