// Name: core_inv.cpp_loadItem_FUN_004da320
// Address: 004da320
// Address Range: [[004da320, 004da350]]
// Convention: __cdecl
// Signature: int __cdecl core_inv_cpp_loadItem_FUN_004da320(SInventoryItemInfo *item_info,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_inv_cpp_loadItem_FUN_004da320(SInventoryItemInfo *item_info,_FILE *file_handle)

{
  int iVar1;
  
  iVar1 = _fscanf(file_handle,"\"%[^\"]\", \"%[^\"]\", \"%[^\"]\"\n");
  return (uint)(iVar1 == 3);
}
