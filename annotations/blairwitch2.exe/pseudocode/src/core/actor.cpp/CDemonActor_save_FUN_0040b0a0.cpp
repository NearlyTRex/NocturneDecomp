// Name: core_actor.cpp_CDemonActor_save_FUN_0040b0a0
// Address: 0040b0a0
// Address Range: [[0040b0a0, 0040b1b1]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_save_FUN_0040b0a0(CDemonActor *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_actor_cpp_CDemonActor_save_FUN_0040b0a0(CDemonActor *this_ptr,_FILE *file_handle)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  core_actor_cpp_syncActorTypeIDs_FUN_0040c920();
  core_actor_cpp_CDemonActor_getActorClassName_FUN_00408a50(this_ptr);
  if (this_ptr->actor_name[0] == '\0') {
    _DAT_01d046a0 = "..\\core\\actor.cpp";
    _DAT_01d046a4 = 0x7ea;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CDemonActor::save - tried to save actor of class %s with no name");
  }
  _fprintf(file_handle,"%s{ %s \"%s\"\n");
  uVar3 = DAT_007bc03c;
  uVar2 = DAT_007bc038;
  uVar1 = DAT_007bc034;
  DAT_007bc034 = file_handle;
  DAT_007bc03c = this_ptr;
  DAT_007bc038 = 2;
  core_actor_cpp_adjustIndentationLevel_FUN_0040b050(1);
  (*((this_ptr->vtable)._ub)->archive)(this_ptr);
  core_actor_cpp_adjustIndentationLevel_FUN_0040b050(-1);
  _fprintf(file_handle,"%s} %s \"%s\"\n");
  if ((file_handle->_flag & 0x20) != 0) {
    _DAT_01d046a0 = "..\\core\\actor.cpp";
    _DAT_01d046a4 = 0x80c;
    core_main_c_displayErrorAndQuit_FUN_004e4500("IO Error after writing actor of type %s");
  }
  DAT_007bc034 = (_FILE *)uVar1;
  DAT_007bc03c = (CDemonActor *)uVar3;
  DAT_007bc038 = uVar2;
  return;
}
