// Name: engine_fileio.cpp_CCheckOutList_add_FUN_004b2d00
// Address: 004b2d00
// MANUAL RECONSTRUCTION
// Address Range: [[004b2d00, 004b2d6c]]
// Convention: __cdecl
// Signature: int __cdecl engine_fileio_cpp_CCheckOutList_add_FUN_004b2d00(CCheckOutList *this_ptr,CCheckOutItem *new_entry)

#include "nocturne.h"

int __cdecl engine_fileio_cpp_CCheckOutList_add_FUN_004b2d00(CCheckOutList *this_ptr,CCheckOutItem *new_entry)

{
  CCheckOutItem *pCVar1;

  pCVar1 = (CCheckOutItem *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->items,(this_ptr->count + 1) * sizeof(CCheckOutItem),"..\\engine\\fileio.cpp",
                      743);
  this_ptr->items = pCVar1;
  if (pCVar1 == (CCheckOutItem *)0x0) {
    return 0;
  }
  pCVar1 = this_ptr->items + this_ptr->count;
  memcpy(pCVar1,new_entry,sizeof(CCheckOutItem));
  this_ptr->count = this_ptr->count + 1;
  return 1;
}
