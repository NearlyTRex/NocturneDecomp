// Name: engine_fileio.cpp_CCheckOutList_add_FUN_004b2d00
// Address: 004b2d00
// Address Range: [[004b2d00, 004b2d6c]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_CCheckOutList_add_FUN_004b2d00(CCheckOutList * this_ptr, CCheckOutItem * new_entry)

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_CCheckOutList_add_FUN_004b2d00(CCheckOutList *this_ptr,CCheckOutItem *new_entry)

{
  CCheckOutItem *pCVar1;
  int iVar2;
  byte bVar3;
  uint *in_stack_0000000c;
  
  bVar3 = 0;
  pCVar1 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->items,(this_ptr->count + 1) * 0x168,"..\\engine\\fileio.cpp",
                      0x2e7);
  this_ptr->items = pCVar1;
  if (pCVar1 == (CCheckOutItem *)0x0) {
    return 0;
  }
  pCVar1 = this_ptr->items + this_ptr->count;
  for (iVar2 = 0x5a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pCVar1->name = *in_stack_0000000c;
    in_stack_0000000c = in_stack_0000000c + (uint)bVar3 * -2 + 1;
    pCVar1 = (CCheckOutItem *)((int)pCVar1 + (uint)bVar3 * -8 + 4);
  }
  this_ptr->count = this_ptr->count + 1;
  return 1;
}
