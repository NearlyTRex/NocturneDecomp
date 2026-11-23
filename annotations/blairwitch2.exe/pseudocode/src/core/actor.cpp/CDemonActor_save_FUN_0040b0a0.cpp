// Name: core_actor.cpp_CDemonActor_save_FUN_0040b0a0
// Address: 0040b0a0
// Address Range: [[0040b0a0, 0040b1b1]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_save_FUN_0040b0a0(CDemonActor *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_save_FUN_0040b0a0(CDemonActor *this_ptr,_FILE *file_handle)

{
  _FILE *p_Var1;
  int iVar2;
  CDemonActor *pCVar3;
  
  core_actor_cpp_syncActorTypeIDs_FUN_0040c920();
  core_actor_cpp_CDemonActor_getActorClassName_FUN_00408a50(this_ptr);
  if (this_ptr->actor_name[0] == '\0') {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 2026;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CDemonActor::save - tried to save actor of class %s with no name");
  }
  _fprintf(file_handle,"%s{ %s \"%s\"\n");
  pCVar3 = g_CurrentActorBeingProcessed;
  iVar2 = g_ActorReadingMode;
  p_Var1 = g_ActorDataFile;
  g_ActorDataFile = file_handle;
  g_CurrentActorBeingProcessed = this_ptr;
  g_ActorReadingMode = 2;
  core_actor_cpp_adjustIndentationLevel_FUN_0040b050(1);
  (*((this_ptr->vtable)._ub)->archive)(this_ptr);
  core_actor_cpp_adjustIndentationLevel_FUN_0040b050(-1);
  _fprintf(file_handle,"%s} %s \"%s\"\n");
  if ((file_handle->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 2060;
    core_main_c_displayErrorAndQuit_FUN_004e4500("IO Error after writing actor of type %s");
  }
  g_ActorDataFile = p_Var1;
  g_CurrentActorBeingProcessed = pCVar3;
  g_ActorReadingMode = iVar2;
  return;
}
