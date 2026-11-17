// Name: core_actor.cpp_CDemonActor_save_FUN_0040aff0
// Address: 0040aff0
// Address Range: [[0040aff0, 0040b101]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_save_FUN_0040aff0(CDemonActor *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_save_FUN_0040aff0(CDemonActor *this_ptr,_FILE *file_handle)

{
  _FILE *p_Var1;
  int iVar2;
  CDemonActor *pCVar3;
  
  core_actor_cpp_syncActorTypeIDs_FUN_0040c870();
  core_actor_cpp_CDemonActor_getActorClassName_FUN_00408870(this_ptr);
  if (this_ptr->actor_name[0] == '\0') {
    g_CHAR_PTR_01d71de0 = "..\\core\\actor.cpp";
    g_INT_01d71de4 = 0x7e9;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CDemonActor::save - tried to save actor of class %s with no name");
  }
  _fprintf(file_handle,"%s{ %s \"%s\"\n");
  pCVar3 = g_CDemonActor_PTR_007df9bc;
  iVar2 = g_INT_007df9b8;
  p_Var1 = g_FILE_PTR_007df9b4;
  g_FILE_PTR_007df9b4 = file_handle;
  g_CDemonActor_PTR_007df9bc = this_ptr;
  g_INT_007df9b8 = 2;
  core_actor_cpp_adjustIndentationLevel_FUN_0040afa0(1);
  (*((this_ptr->vtable)._ub)->archive)(this_ptr);
  core_actor_cpp_adjustIndentationLevel_FUN_0040afa0(-1);
  _fprintf(file_handle,"%s} %s \"%s\"\n");
  if ((file_handle->_flag & 0x20) != 0) {
    g_CHAR_PTR_01d71de0 = "..\\core\\actor.cpp";
    g_INT_01d71de4 = 0x80b;
    core_main_c_displayErrorAndQuit_FUN_004e4330("IO Error after writing actor of type %s");
  }
  g_FILE_PTR_007df9b4 = p_Var1;
  g_CDemonActor_PTR_007df9bc = pCVar3;
  g_INT_007df9b8 = iVar2;
  return;
}
