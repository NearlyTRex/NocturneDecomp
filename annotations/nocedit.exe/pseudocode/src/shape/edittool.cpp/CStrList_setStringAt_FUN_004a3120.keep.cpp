// Name: shape_edittool.cpp_CStrList_setStringAt_FUN_004a3120
// Address: 004a3120
// MANUAL RECONSTRUCTION
// Address Range: [[004a3120, 004a31ed]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_setStringAt_FUN_004a3120(CStrList *this_ptr,int index,char *new_string)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_setStringAt_FUN_004a3120(CStrList *this_ptr,int index,char *new_string)

{
  char *pcVar2;

  if ((index < 0) || (this_ptr->item_count <= index)) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 3091;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CStrList::set - invalid index");
  }
  if (new_string == (char *)0x0) {
    new_string = &s_EmptyChar_006238a5;
  }
  pcVar2 = (char *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->data_array[index],strlen(new_string) + 1,"..\\shape\\edittool.cpp",3099);
  this_ptr->data_array[index] = pcVar2;
  if (this_ptr->data_array[index] == (char *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 3100;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CStrList::set - out of memory!");
  }
  strcpy(this_ptr->data_array[index],new_string);
  return;
}
