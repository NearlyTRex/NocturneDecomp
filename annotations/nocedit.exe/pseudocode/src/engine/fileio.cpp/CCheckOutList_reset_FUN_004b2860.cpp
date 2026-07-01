// Name: engine_fileio.cpp_CCheckOutList_reset_FUN_004b2860
// Address: 004b2860
// Address Range: [[004b2860, 004b288f]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList *this_ptr)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(CCheckOutList *this_ptr)

{
  this_ptr->count = 0;
  if (this_ptr->items == (CCheckOutItem *)0x0) {
    return;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->items,"..\\engine\\fileio.cpp",631);
  this_ptr->items = (CCheckOutItem *)0x0;
  return;
}
