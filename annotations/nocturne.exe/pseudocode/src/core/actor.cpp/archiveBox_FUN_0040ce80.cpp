// Name: core_actor.cpp_archiveBox_FUN_0040ce80
// Address: 0040ce80
// Address Range: [[0040ce80, 0040cf6b]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveBox_FUN_0040ce80(CBox *box_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveBox_FUN_0040ce80(CBox *box_ptr,char *property_name)

{
  int iVar1;
  
  if (DAT_00763e88 != 1) {
    _fprintf(DAT_00763e84,"%s{ // %s\n",&DAT_005acc90,property_name);
    core_actor_cpp_adjustIndentationLevel_FUN_0040bff0(1);
    core_box_cpp_CBox_saveToFile_FUN_0041c9e0(box_ptr,DAT_00763e84,&DAT_005acc90);
    core_actor_cpp_adjustIndentationLevel_FUN_0040bff0(-1);
    _fprintf(DAT_00763e84,"%s}\n",&DAT_005acc90);
    return;
  }
  do {
    iVar1 = _fgetc(DAT_00763e84);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040c320
                ("sim box state info opening brace",property_name);
    }
  } while (iVar1 != 10);
  core_box_cpp_CBox_loadFromFile_FUN_0041c850(box_ptr,DAT_00763e84);
  do {
    while( true ) {
      iVar1 = _fgetc(DAT_00763e84);
      if (-1 < iVar1) break;
      core_actor_cpp_handleActorPropertyParseError_FUN_0040c320
                ("sim box state info closing brace",property_name);
      if (iVar1 == 10) {
        return;
      }
    }
  } while (iVar1 != 10);
  return;
}
