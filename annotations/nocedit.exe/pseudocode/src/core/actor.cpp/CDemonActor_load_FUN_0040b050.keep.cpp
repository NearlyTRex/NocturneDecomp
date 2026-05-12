// Name: core_actor.cpp_CDemonActor_load_FUN_0040b050
// Address: 0040b050
// MANUAL RECONSTRUCTION
// Address Range: [[0040b050, 0040b209]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_load_FUN_0040b050(CDemonActor *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_load_FUN_0040b050(CDemonActor *this_ptr,_FILE *file_handle)

{
  _FILE *p_Var3;
  int iVar4;
  CDemonActor *pCVar6;
  char *str1;
  int iVar2;
  int iVar3;
  int iVar7;
  char local_dc [100];
  char local_78 [100];


  str1 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(this_ptr);
  local_dc[0] = '\0';
  local_78[0] = '\0';
  _fscanf(file_handle," { %s \"%[^\"]\"\n",local_dc,local_78);
  iVar2 = _stricmp(str1,local_dc);
  if (iVar2 != 0) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0x7b7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Start of actor file tag mismatch for class %s",str1);
  }
  strcpy(this_ptr->actor_name,local_78);
  pCVar6 = g_CurrentActorBeingProcessed;
  iVar4 = g_ActorReadingMode;
  p_Var3 = g_ActorDataFile;
  g_ActorDataFile = file_handle;
  g_ActorReadingMode = 1;
  g_CurrentActorBeingProcessed = this_ptr;
                    /* this must be where it does the reading of the actual actor text and filling
                       obj details */
  (*((this_ptr->vtable)._ub)->archive)(this_ptr);
  local_dc[0] = '\0';
  local_78[0] = '\0';
  _fscanf(file_handle," } %s \"%[^\"]\"\n",local_dc,local_78);
  iVar3 = _stricmp(str1,local_dc);
  if ((iVar3 != 0) ||
     (iVar7 = _stricmp(this_ptr->actor_name,local_78), iVar7 != 0)) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0x7d4;
    core_main_c_displayErrorAndQuit_FUN_00506f10("End of actor file tag mismatch for class %s name \"%s\"",str1,this_ptr->actor_name);
  }
  if ((file_handle->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0x7d9;
    core_main_c_displayErrorAndQuit_FUN_00506f10("IO Error after reading %s \"%s\"",str1,this_ptr->actor_name);
  }
  g_CurrentActorBeingProcessed = pCVar6;
  g_ActorReadingMode = iVar4;
  g_ActorDataFile = p_Var3;
  return;
}
