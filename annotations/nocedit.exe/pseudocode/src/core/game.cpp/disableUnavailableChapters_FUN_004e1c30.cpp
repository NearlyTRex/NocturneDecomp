// Name: core_game.cpp_disableUnavailableChapters_FUN_004e1c30
// Address: 004e1c30
// Address Range: [[004e1c30, 004e1ca2]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_disableUnavailableChapters_FUN_004e1c30(CPickList *pick_list,int chapter_index)

#include "nocturne.h"

void __cdecl core_game_cpp_disableUnavailableChapters_FUN_004e1c30(CPickList *pick_list,int chapter_index)

{
  _FILE *file_ptr;
  int item_index;
  int iVar1;
  
  item_index = 0;
  iVar1 = chapter_index * 0x34;
  if ((pick_list->base).item_count < 1) {
    return;
  }
  do {
    file_ptr = engine_dosio_cpp_getFile_FUN_00481a50
                         ("world",*(char **)((int)g_ChapterMissionFiles[0] + iVar1),
                          "rt");
    if (file_ptr == (_FILE *)0x0) {
      shape_edittool_cpp_CPickList_enableItem_FUN_004a5410(pick_list,item_index,0);
    }
    else {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\game.cpp",3777);
    }
    item_index = item_index + 1;
    iVar1 = iVar1 + 4;
  } while (item_index < (pick_list->base).item_count);
  return;
}
