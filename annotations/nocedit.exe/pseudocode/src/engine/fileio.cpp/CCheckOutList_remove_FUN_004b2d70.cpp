// Name: engine_fileio.cpp_CCheckOutList_remove_FUN_004b2d70
// Address: 004b2d70
// Address Range: [[004b2d70, 004b2e58]]
// Convention: __cdecl
// Signature: int __cdecl engine_fileio_cpp_CCheckOutList_remove_FUN_004b2d70(CCheckOutList *this_ptr,int entry_index)

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_CCheckOutList_remove_FUN_004b2d70(CCheckOutList *this_ptr,int entry_index)

{
  int iVar1;
  CCheckOutItem *pCVar2;
  
  if ((entry_index < 0) || (this_ptr->count <= entry_index)) {
    g_CurrentFilename = "..\\engine\\fileio.cpp";
    g_CurrentLineNumber = 0x2f4;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCheckOutList::remove - invalid index!");
  }
  if (1 < this_ptr->count) {
    iVar1 = this_ptr->count + -1;
    this_ptr->count = iVar1;
    crt_string_c_memmove_FUN_005fe5e0
              (this_ptr->items + entry_index,this_ptr->items + entry_index + 1,
               (iVar1 - entry_index) * 0x168);
    pCVar2 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                       (this_ptr->items,this_ptr->count * 0x168,"..\\engine\\fileio.cpp",0x2f8);
    this_ptr->items = pCVar2;
    return (uint)(pCVar2 != (CCheckOutItem *)0x0);
  }
  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(this_ptr);
  return 1;
}
