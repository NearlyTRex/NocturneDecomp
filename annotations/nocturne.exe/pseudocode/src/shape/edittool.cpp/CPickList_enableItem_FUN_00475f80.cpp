// Name: shape_edittool.cpp_CPickList_enableItem_FUN_00475f80
// Address: 00475f80
// Address Range: [[00475f80, 0047603e]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CPickList_enableItem_FUN_00475f80(CPickList *this_ptr,int item_index,int enable_flag)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CPickList_enableItem_FUN_00475f80(CPickList *this_ptr,int item_index,int enable_flag)

{
  void *pvVar1;
  
  if ((item_index < 0) || ((this_ptr->base).item_count <= item_index)) {
    PTR_01cc4800 = "..\\shape\\edittool.cpp";
    INT_01cc4804 = 0xdfa;
    core_main_c_FUN_004c8440("CPickList::enableItem - invalid index");
  }
  if (*(int *)(this_ptr->search_text_buffer + 0x24) <= item_index) {
    pvVar1 = realloc
                       (*(void **)(this_ptr->search_text_buffer + 0x28),
                        (this_ptr->base).item_count << 2);
    *(void **)(this_ptr->search_text_buffer + 0x28) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      PTR_01cc4800 = "..\\shape\\edittool.cpp";
      INT_01cc4804 = 0xe01;
      core_main_c_FUN_004c8440("Out of memory");
    }
    while (*(int *)(this_ptr->search_text_buffer + 0x24) < (this_ptr->base).item_count) {
      *(uint *)
       (*(int *)(this_ptr->search_text_buffer + 0x28) +
       *(int *)(this_ptr->search_text_buffer + 0x24) * 4) = 1;
      *(int *)(this_ptr->search_text_buffer + 0x24) =
           *(int *)(this_ptr->search_text_buffer + 0x24) + 1;
    }
  }
  *(uint *)(*(int *)(this_ptr->search_text_buffer + 0x28) + item_index * 4) =
       (uint)(enable_flag != 0);
  return;
}
