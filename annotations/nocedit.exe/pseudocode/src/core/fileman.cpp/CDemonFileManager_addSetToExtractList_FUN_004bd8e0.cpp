// Name: core_fileman.cpp_CDemonFileManager_addSetToExtractList_FUN_004bd8e0
// Address: 004bd8e0
// Address Range: [[004bd8e0, 004bd92b]]
// Convention: __cdecl
// Signature: void core_fileman.cpp_CDemonFileManager_addSetToExtractList_FUN_004bd8e0(CDemonFileManager * file_manager_ptr, char * set_filename)

#include "nocturne.h"

void __cdecl
core_fileman_cpp_CDemonFileManager_addSetToExtractList_FUN_004bd8e0
          (CDemonFileManager *file_manager_ptr,char *set_filename)

{
  char *in_stack_0000000c;
  
  crt_stdio_c_fprintf_FUN_005fe6d0
            ((file_manager_ptr->base_filemanager).file_ptr,"models\\%s\n",set_filename);
  core_set_cpp_CDemonSet_load_FUN_00569410(g_CDemonSetPtr,in_stack_0000000c);
  core_setedit_cpp_CDemonSet_FUN_00584e70(g_CDemonSetPtr);
  return;
}
