// Name: core_actor.cpp_CDemonActor_save_FUN_0040aff0
// Address: 0040aff0
// Address Range: [[0040aff0, 0040b101]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_save_FUN_0040aff0(CDemonActor *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_actor_cpp_CDemonActor_save_FUN_0040aff0(CDemonActor *this_ptr,_FILE *file_handle)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  
  core_actor_cpp_syncActorTypeIDs_FUN_0040c870();
  pcVar4 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408870(this_ptr);
  if (this_ptr->actor_name[0] == '\0') {
    _DAT_01d71de0 = "..\\core\\actor.cpp";
    _DAT_01d71de4 = 0x7e9;
    core_main_c_FUN_004e4330("CDemonActor::save - tried to save actor of class %s with no name",pcVar4);
  }
  FUN_005a3140(file_handle,"%s{ %s \"%s\"\n",&DAT_005f0990,pcVar4,this_ptr);
  uVar3 = DAT_007df9bc;
  uVar2 = DAT_007df9b8;
  uVar1 = DAT_007df9b4;
  DAT_007df9b4 = file_handle;
  DAT_007df9bc = this_ptr;
  DAT_007df9b8 = 2;
  core_actor_cpp_adjustIndentationLevel_FUN_0040afa0(1);
  (*((this_ptr->vtable)._ub)->archive)(this_ptr);
  core_actor_cpp_adjustIndentationLevel_FUN_0040afa0(-1);
  FUN_005a3140(file_handle,"%s} %s \"%s\"\n",&DAT_005f0990,pcVar4,this_ptr);
  if ((file_handle->_flag & 0x20) != 0) {
    _DAT_01d71de0 = "..\\core\\actor.cpp";
    _DAT_01d71de4 = 0x80b;
    core_main_c_FUN_004e4330("IO Error after writing actor of type %s",pcVar4);
  }
  DAT_007df9b4 = (_FILE *)uVar1;
  DAT_007df9bc = (CDemonActor *)uVar3;
  DAT_007df9b8 = uVar2;
  return;
}
