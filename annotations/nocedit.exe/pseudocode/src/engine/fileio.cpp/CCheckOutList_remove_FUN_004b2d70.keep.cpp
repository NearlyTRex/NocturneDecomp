// Name: engine_fileio.cpp_CCheckOutList_remove_FUN_004b2d70
// Address: 004b2d70
// MANUAL RECONSTRUCTION
// Address Range: [[004b2d70, 004b2e58]]
// Convention: __cdecl
// Signature: int __cdecl engine_fileio_cpp_CCheckOutList_remove_FUN_004b2d70(CCheckOutList *this_ptr,int entry_index)

#include "nocturne.h"

int __cdecl engine_fileio_cpp_CCheckOutList_remove_FUN_004b2d70(CCheckOutList *this_ptr,int entry_index)

{
  int iVar1;
  CCheckOutItem *pCVar2;
  
  if ((entry_index < 0) || (this_ptr->count <= entry_index)) {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 756;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCheckOutList::remove - invalid index!");
  }
  if (1 < this_ptr->count) {
    iVar1 = this_ptr->count + -1;
    this_ptr->count = iVar1;
    memmove
              (this_ptr->items + entry_index,this_ptr->items + entry_index + 1,
               (iVar1 - entry_index) * 0x168);
    pCVar2 = (CCheckOutItem *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                       (this_ptr->items,this_ptr->count * sizeof(CCheckOutItem),"..\\engine\\fileio.cpp",760);
    this_ptr->items = pCVar2;
    return (uint)(pCVar2 != (CCheckOutItem *)0x0);
  }
  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(this_ptr);
  return 1;
}
