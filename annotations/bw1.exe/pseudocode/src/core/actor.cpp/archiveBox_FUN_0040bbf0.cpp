// Name: core_actor.cpp_archiveBox_FUN_0040bbf0
// Address: 0040bbf0
// Address Range: [[0040bbf0, 0040bcdb]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveBox_FUN_0040bbf0(CBox *box_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveBox_FUN_0040bbf0(CBox *box_ptr,char *property_name)

{
  int iVar1;
  
  if (g_INT_007c3038 != 1) {
    _fprintf(g_FILE_PTR_007c3034,"%s{ // %s\n");
    core_actor_cpp_adjustIndentationLevel_FUN_0040ad60(1);
    core_box_cpp_CBox_saveToFile_FUN_004202f0(box_ptr,g_FILE_PTR_007c3034,g_CHAR_ARRAY_006106c0);
    core_actor_cpp_adjustIndentationLevel_FUN_0040ad60(-1);
    _fprintf(g_FILE_PTR_007c3034,"%s}\n");
    return;
  }
  do {
    iVar1 = _fgetc(g_FILE_PTR_007c3034);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b090
                ("sim box state info opening brace",property_name);
    }
  } while (iVar1 != 10);
  core_box_cpp_CBox_loadFromFile_FUN_00420140(box_ptr,g_FILE_PTR_007c3034);
  do {
    while( true ) {
      iVar1 = _fgetc(g_FILE_PTR_007c3034);
      if (-1 < iVar1) break;
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b090
                ("sim box state info closing brace",property_name);
      if (iVar1 == 10) {
        return;
      }
    }
  } while (iVar1 != 10);
  return;
}
