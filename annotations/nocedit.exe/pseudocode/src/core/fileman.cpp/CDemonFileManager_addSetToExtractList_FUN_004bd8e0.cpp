// Name: core_fileman.cpp_CDemonFileManager_addSetToExtractList_FUN_004bd8e0
// Address: 004bd8e0
// Address Range: [[004bd8e0, 004bd92b]]
// Convention: __cdecl
// Signature: void __cdecl core_fileman_cpp_CDemonFileManager_addSetToExtractList_FUN_004bd8e0 (CDemonFileManager *file_manager_ptr,char *set_filename)

#include "nocturne.h"

void __cdecl
core_fileman_cpp_CDemonFileManager_addSetToExtractList_FUN_004bd8e0
          (CDemonFileManager *file_manager_ptr,char *set_filename)

{
  _fprintf((file_manager_ptr->base).file_ptr,"models\\%s\n",set_filename);
  core_set_cpp_CDemonSet_load_FUN_00569410(g_CDemonSetPtr,set_filename);
  core_setedit_cpp_CDemonSet_FUN_00584e70(g_CDemonSetPtr);
  return;
}
