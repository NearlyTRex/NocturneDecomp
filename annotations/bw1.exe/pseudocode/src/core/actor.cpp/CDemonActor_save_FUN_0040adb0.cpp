// Name: core_actor.cpp_CDemonActor_save_FUN_0040adb0
// Address: 0040adb0
// Address Range: [[0040adb0, 0040aec1]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_save_FUN_0040adb0(CDemonActor *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_save_FUN_0040adb0(CDemonActor *this_ptr,_FILE *file_handle)

{
  _FILE *p_Var1;
  int iVar2;
  CDemonActor *pCVar3;
  
  core_actor_cpp_syncActorTypeIDs_FUN_0040c630();
  core_actor_cpp_CDemonActor_getActorClassName_FUN_00408830(this_ptr);
  if (this_ptr->actor_name[0] == '\0') {
    g_CHAR_PTR_01d1d400 = "..\\core\\actor.cpp";
    g_INT_01d1d404 = 1999;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CDemonActor::save - tried to save actor of class %s with no name");
  }
  _fprintf(file_handle,"%s{ %s \"%s\"\n");
  pCVar3 = g_CurrentActorBeingProcessed;
  iVar2 = g_ActorReadingMode;
  p_Var1 = g_ActorDataFile;
  g_ActorDataFile = file_handle;
  g_CurrentActorBeingProcessed = this_ptr;
  g_ActorReadingMode = 2;
  core_actor_cpp_adjustIndentationLevel_FUN_0040ad60(1);
  (*((this_ptr->vtable)._ub)->archive)(this_ptr);
  core_actor_cpp_adjustIndentationLevel_FUN_0040ad60(-1);
  _fprintf(file_handle,"%s} %s \"%s\"\n");
  if ((file_handle->_flag & 0x20) != 0) {
    g_CHAR_PTR_01d1d400 = "..\\core\\actor.cpp";
    g_INT_01d1d404 = 0x7f1;
    core_main_c_displayErrorAndQuit_FUN_005030e0("IO Error after writing actor of type %s");
  }
  g_ActorDataFile = p_Var1;
  g_CurrentActorBeingProcessed = pCVar3;
  g_ActorReadingMode = iVar2;
  return;
}
