// Name: core_actor.cpp_archiveBox_FUN_0040bee0
// Address: 0040bee0
// Address Range: [[0040bee0, 0040bfcb]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveBox_FUN_0040bee0(CBox *param_1,char *param_2)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveBox_FUN_0040bee0(CBox *param_1,char *param_2)

{
  int iVar1;
  
  if (DAT_007bc038 != 1) {
    FUN_005b8010(DAT_007bc034,"%s{ // %s\n",&DAT_00609590,param_2);
    core_actor_cpp_adjustIndentationLevel_FUN_0040b050(1);
    core_box_cpp_CBox_saveToFile_FUN_005b44b0(param_1,DAT_007bc034,&DAT_00609590);
    core_actor_cpp_adjustIndentationLevel_FUN_0040b050(-1);
    FUN_005b8010(DAT_007bc034,&DAT_005cac99,&DAT_00609590);
    return;
  }
  do {
    iVar1 = _fgetc(DAT_007bc034);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
                ("sim box state info opening brace",param_2);
    }
  } while (iVar1 != 10);
  core_box_cpp_FUN_005b4300(param_1,DAT_007bc034);
  do {
    while( true ) {
      iVar1 = _fgetc(DAT_007bc034);
      if (-1 < iVar1) break;
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
                ("sim box state info closing brace",param_2);
      if (iVar1 == 10) {
        return;
      }
    }
  } while (iVar1 != 10);
  return;
}
