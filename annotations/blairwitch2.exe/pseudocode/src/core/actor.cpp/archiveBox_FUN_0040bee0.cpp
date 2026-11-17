// Name: core_actor.cpp_archiveBox_FUN_0040bee0
// Address: 0040bee0
// Address Range: [[0040bee0, 0040bfcb]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveBox_FUN_0040bee0(CBox *box_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveBox_FUN_0040bee0(CBox *box_ptr,char *property_name)

{
  int iVar1;
  
  if (g_INT_007bc038 != 1) {
    _fprintf(g_FILE_PTR_007bc034,"%s{ // %s\n");
    core_actor_cpp_adjustIndentationLevel_FUN_0040b050(1);
    core_box_cpp_CBox_saveToFile_FUN_005b44b0(box_ptr,g_FILE_PTR_007bc034,g_CHAR_ARRAY_00609590);
    core_actor_cpp_adjustIndentationLevel_FUN_0040b050(-1);
    _fprintf(g_FILE_PTR_007bc034,"%s}\n");
    return;
  }
  do {
    iVar1 = _fgetc(g_FILE_PTR_007bc034);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
                ("sim box state info opening brace",property_name);
    }
  } while (iVar1 != 10);
  core_box_cpp_CBox_loadFromFile_FUN_005b4300(box_ptr,g_FILE_PTR_007bc034);
  do {
    while( true ) {
      iVar1 = _fgetc(g_FILE_PTR_007bc034);
      if (-1 < iVar1) break;
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
                ("sim box state info closing brace",property_name);
      if (iVar1 == 10) {
        return;
      }
    }
  } while (iVar1 != 10);
  return;
}
