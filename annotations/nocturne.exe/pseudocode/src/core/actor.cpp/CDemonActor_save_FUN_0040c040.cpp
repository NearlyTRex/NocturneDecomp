// Name: core_actor.cpp_CDemonActor_save_FUN_0040c040
// Address: 0040c040
// Address Range: [[0040c040, 0040c151]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_save_FUN_0040c040(CDemonActor *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_save_FUN_0040c040(CDemonActor *this_ptr,_FILE *file_handle)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  
  core_actor_cpp_syncActorTypeIDs_FUN_0040d8c0();
  pcVar4 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(this_ptr);
  if (this_ptr->actor_name[0] == '\0') {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 1927;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonActor::save - tried to save actor of class %s with no name",pcVar4);
  }
  _fprintf(file_handle,"%s{ %s \"%s\"\n",&DAT_005acc90,pcVar4,this_ptr);
  uVar3 = DAT_00763e8c;
  uVar2 = DAT_00763e88;
  uVar1 = DAT_00763e84;
  DAT_00763e84 = file_handle;
  DAT_00763e8c = this_ptr;
  DAT_00763e88 = 2;
  core_actor_cpp_adjustIndentationLevel_FUN_0040bff0(1);
  (*((this_ptr->vtable)._ub)->archive)(this_ptr);
  core_actor_cpp_adjustIndentationLevel_FUN_0040bff0(-1);
  _fprintf(file_handle,"%s} %s \"%s\"\n",&DAT_005acc90,pcVar4,this_ptr);
  if ((file_handle->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 1961;
    core_main_c_displayErrorAndQuit_FUN_004c8440("IO Error after writing actor of type %s",pcVar4);
  }
  DAT_00763e84 = (_FILE *)uVar1;
  DAT_00763e8c = (CDemonActor *)uVar3;
  DAT_00763e88 = uVar2;
  return;
}
