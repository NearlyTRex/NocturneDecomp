// Name: core_game.cpp_FUN_004e1c30
// Address: 004e1c30
// Address Range: [[004e1c30, 004e1ca2]]
// Convention: unknown
// Signature: undefined core_game.cpp_FUN_004e1c30()

#include "nocturne.h"

void core_game_cpp_FUN_004e1c30(void)

{
  FILE *file_ptr;
  int item_index;
  CPickList *in_stack_00000004;
  int in_stack_00000008;
  
  item_index = 0;
  in_stack_00000008 = in_stack_00000008 * 0x34;
  if ((in_stack_00000004->base_strlist).item_count < 1) {
    return;
  }
  do {
    file_ptr = engine_dosio_c_getFile_FUN_00481a50
                         ("world",
                          *(char **)(&PTR_s_hq_act1_msn_0067b750 + in_stack_00000008),"rt")
    ;
    if (file_ptr == (FILE *)0x0) {
      shape_edittool_cpp_CPickList_enableItem_FUN_004a5410(in_stack_00000004,item_index,0);
    }
    else {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\game.cpp",0xec1);
    }
    item_index = item_index + 1;
    in_stack_00000008 = in_stack_00000008 + 4;
  } while (item_index < (in_stack_00000004->base_strlist).item_count);
  return;
}
