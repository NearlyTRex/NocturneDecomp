// Name: core_actor.cpp_CDemonActor_save_FUN_0040adb0
// Address: 0040adb0
// Address Range: [[0040adb0, 0040aec1]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_save_FUN_0040adb0(CDemonActor *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_actor_cpp_CDemonActor_save_FUN_0040adb0(CDemonActor *this_ptr,_FILE *file_handle)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  
  core_actor_cpp_syncActorTypeIDs_FUN_0040c630();
  pcVar4 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830(this_ptr);
  if (this_ptr->actor_name[0] == '\0') {
    _DAT_01d1d400 = "..\\core\\actor.cpp";
    _DAT_01d1d404 = 1999;
    core_main_c_FUN_005030e0("CDemonActor::save - tried to save actor of class %s with no name",pcVar4);
  }
  FUN_005c03c0(file_handle,"%s{ %s \"%s\"\n",&DAT_006106c0,pcVar4,this_ptr);
  uVar3 = DAT_007c303c;
  uVar2 = DAT_007c3038;
  uVar1 = DAT_007c3034;
  DAT_007c3034 = file_handle;
  DAT_007c303c = this_ptr;
  DAT_007c3038 = 2;
  core_actor_cpp_adjustIndentationLevel_FUN_0040ad60(1);
  (*((this_ptr->vtable)._ub)->archive)(this_ptr);
  core_actor_cpp_adjustIndentationLevel_FUN_0040ad60(-1);
  FUN_005c03c0(file_handle,"%s} %s \"%s\"\n",&DAT_006106c0,pcVar4,this_ptr);
  if ((file_handle->_flag & 0x20) != 0) {
    _DAT_01d1d400 = "..\\core\\actor.cpp";
    _DAT_01d1d404 = 0x7f1;
    core_main_c_FUN_005030e0("IO Error after writing actor of type %s",pcVar4);
  }
  DAT_007c3034 = (_FILE *)uVar1;
  DAT_007c303c = (CDemonActor *)uVar3;
  DAT_007c3038 = uVar2;
  return;
}
