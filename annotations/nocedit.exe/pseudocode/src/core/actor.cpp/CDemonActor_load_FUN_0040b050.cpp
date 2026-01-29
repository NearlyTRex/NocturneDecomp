// Name: core_actor.cpp_CDemonActor_load_FUN_0040b050
// Address: 0040b050
// Address Range: [[0040b050, 0040b209]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_load_FUN_0040b050(CDemonActor *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_load_FUN_0040b050(CDemonActor *this_ptr,_FILE *file_handle)

{
  char cVar1;
  char *str1;
  int iVar2;
  int iVar3;
  _FILE *unaff_EBP;
  char *pcVar4;
  CDemonActor *pCVar5;
  _FILE *in_stack_0000000c;
  char acStack_d8 [96];
  char local_78 [100];
  _FILE *local_14;
  
  str1 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(this_ptr);
  local_78[0] = '\0';
  _fscanf(file_handle," { %s \"%[^\"]\"\n",&stack0xffffff24,local_78);
  iVar2 = stricmp(str1,&stack0xffffff24);
  if (iVar2 != 0) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0x7b7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Start of actor file tag mismatch for class %s",str1);
  }
  pcVar4 = local_78;
  pCVar5 = this_ptr;
  do {
    cVar1 = *pcVar4;
    pCVar5->actor_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pCVar5->actor_name[1] = cVar1;
    pCVar5 = (CDemonActor *)(pCVar5->actor_name + 2);
  } while (cVar1 != '\0');
  pCVar5 = g_CurrentActorBeingProcessed;
  iVar2 = g_ActorReadingMode;
  local_14 = g_ActorDataFile;
  g_ActorDataFile = file_handle;
  g_ActorReadingMode = 1;
  g_CurrentActorBeingProcessed = this_ptr;
                    /* this must be where it does the reading of the actual actor text and filling
                       obj details */
  (*((this_ptr->vtable)._ub)->serialize)(this_ptr);
  acStack_d8[0] = '\0';
  local_78[4] = 0;
  _fscanf(in_stack_0000000c," } %s \"%[^\"]\"\n",acStack_d8);
  iVar3 = stricmp(str1,acStack_d8);
  if ((iVar3 != 0) ||
     (iVar3 = stricmp(this_ptr->actor_name,local_78 + 4), iVar3 != 0)) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0x7d4;
    core_main_c_displayErrorAndQuit_FUN_00506f10("End of actor file tag mismatch for class %s name \"%s\"",str1);
  }
  if ((in_stack_0000000c->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0x7d9;
    core_main_c_displayErrorAndQuit_FUN_00506f10("IO Error after reading %s \"%s\"",str1);
  }
  g_CurrentActorBeingProcessed = pCVar5;
  g_ActorReadingMode = iVar2;
  g_ActorDataFile = unaff_EBP;
  return;
}
