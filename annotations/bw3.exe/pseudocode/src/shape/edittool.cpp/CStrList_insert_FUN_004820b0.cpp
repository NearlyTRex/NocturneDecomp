// Name: shape_edittool.cpp_CStrList_insert_FUN_004820b0
// Address: 004820b0
// Address Range: [[004820b0, 0048219c]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_insert_FUN_004820b0(CStrList *this_ptr,int insert_index,char *string_data)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CStrList_insert_FUN_004820b0(CStrList *this_ptr,int insert_index,char *string_data)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  byte bVar7;
  
  bVar7 = 0;
  if ((insert_index < 0) || (*(int *)this_ptr < insert_index)) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xc2e;
    core_main_c_FUN_004e4330("CStrList::insert - invalid index");
  }
  iVar2 = *(int *)this_ptr;
  iVar5 = iVar2 + 1;
  *(int *)this_ptr = iVar5;
  if (*(int *)&this_ptr->field_0x4 < iVar5) {
    shape_edittool_cpp_CStrList_allocate_FUN_004821a0(this_ptr,iVar2 + 0x15);
  }
  iVar2 = insert_index * 4;
  memmove
            ((void *)(*(int *)&this_ptr->field_0x8 + iVar2 + 4),
             (void *)(*(int *)&this_ptr->field_0x8 + iVar2),
             (*(int *)this_ptr - insert_index) * 4 - 4);
  uVar4 = 0xffffffff;
  pcVar6 = string_data;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
  } while (cVar1 != '\0');
  pvVar3 = FUN_005a3650(~uVar4);
  *(void **)(*(int *)&this_ptr->field_0x8 + iVar2) = pvVar3;
  if (*(int *)(iVar2 + *(int *)&this_ptr->field_0x8) == 0) {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xc3c;
    core_main_c_FUN_004e4330("CStrList::insert - out of memory");
  }
  pcVar6 = *(char **)(*(int *)&this_ptr->field_0x8 + insert_index * 4);
  do {
    cVar1 = *string_data;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = string_data[1];
    string_data = string_data + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  return;
}
