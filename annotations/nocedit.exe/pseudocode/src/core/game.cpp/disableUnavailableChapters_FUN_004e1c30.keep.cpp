// Name: core_game.cpp_disableUnavailableChapters_FUN_004e1c30
// Address: 004e1c30
// MANUAL RECONSTRUCTION
// Address Range: [[004e1c30, 004e1ca2]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_disableUnavailableChapters_FUN_004e1c30(CPickList *pick_list,int chapter_index)

#include "nocturne.h"

void __cdecl core_game_cpp_disableUnavailableChapters_FUN_004e1c30(CPickList *pick_list,int chapter_index)

{
  _FILE *file_ptr;
  int item_index;

  for (item_index = 0; item_index < (pick_list->base).item_count; item_index = item_index + 1) {
    file_ptr = engine_dosio_c_getFile_FUN_00481a50
                         ("world",g_ChapterMissionFiles[chapter_index][item_index],
                          "rt");
    if (file_ptr == (_FILE *)0x0) {
      shape_edittool_cpp_CPickList_enableItem_FUN_004a5410(pick_list,item_index,0);
    }
    else {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\game.cpp",0xec1);
    }
  }
  return;
}
