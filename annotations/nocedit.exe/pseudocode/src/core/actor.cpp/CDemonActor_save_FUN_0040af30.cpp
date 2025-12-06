// Name: core_actor.cpp_CDemonActor_save_FUN_0040af30
// Address: 0040af30
// Address Range: [[0040af30, 0040b041]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_save_FUN_0040af30(CDemonActor * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_save_FUN_0040af30(CDemonActor *this_ptr,FILE *file_handle)

{
  CDemonActor *pCVar1;
  char *pcVar2;
  char *pcStack0000000c;
  int in_stack_00000014;
  FILE *in_stack_00000018;
  
  core_actor_cpp_syncActorTypeIDs_FUN_0040c7c0();
  pcVar2 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(this_ptr);
  if (this_ptr->actor_name[0] == '\0') {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0x778;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonActor::save - tried to save actor of class %s with no name",pcVar2);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_handle,"%s{ %s \"%s\"\n",g_PropertyNamePrefix,pcVar2,this_ptr);
  pCVar1 = g_CurrentActorBeingProcessed;
  g_ActorDataFile = file_handle;
  g_CurrentActorBeingProcessed = this_ptr;
  g_ActorReadingMode = 2;
  core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(1);
  (*this_ptr->vtable->serialize)(this_ptr);
  core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(-1);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"%s} %s \"%s\"\n");
  if ((file_handle->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0x79a;
    pcStack0000000c = pcVar2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("IO Error after writing actor of type %s");
  }
  g_ActorDataFile = in_stack_00000018;
  g_CurrentActorBeingProcessed = pCVar1;
  g_ActorReadingMode = in_stack_00000014;
  return;
}
