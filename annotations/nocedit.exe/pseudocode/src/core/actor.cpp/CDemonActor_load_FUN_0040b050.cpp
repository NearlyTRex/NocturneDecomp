// Name: core_actor.cpp_CDemonActor_load_FUN_0040b050
// Address: 0040b050
// Address Range: [[0040b050, 0040b209]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_load_FUN_0040b050(CDemonActor * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_load_FUN_0040b050(CDemonActor *this_ptr,FILE *file_handle)

{
  char cVar1;
  char *str1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  CDemonActor *pCVar5;
  FILE *in_stack_0000000c;
  FILE *in_stack_00000014;
  FILE *in_stack_00000018;
  FILE *in_stack_00000024;
  int in_stack_00000030;
  char *pcStack_d4;
  byte auStack_74 [12];
  char acStack_68 [12];
  byte uStack_5c;
  char acStack_54 [68];
  
  str1 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(this_ptr);
  auStack_74[0] = 0;
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_0000000c," { %s \"%[^\"]\"\n",&stack0xffffff28,auStack_74);
  iVar2 = crt_string_c_stricmp_FUN_005fe7f0(str1,(char *)&pcStack_d4);
  if (iVar2 != 0) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0x7b7;
    pcStack_d4 = str1;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Start of actor file tag mismatch for class %s");
  }
  pcVar4 = acStack_68;
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
  g_ActorDataFile = in_stack_00000018;
  g_ActorReadingMode = 1;
  g_CurrentActorBeingProcessed = this_ptr;
                    /* this must be where it does the reading of the actual actor text and filling
                       obj details */
  pcStack_d4 = (char *)0x40b10b;
  (*this_ptr->vtable->serialize)(this_ptr);
  uStack_5c = 0;
  pcStack_d4 = (char *)0x40b134;
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000024," } %s \"%[^\"]\"\n");
  iVar3 = crt_string_c_stricmp_FUN_005fe7f0(str1,&stack0xffffff44);
  if ((iVar3 != 0) ||
     (iVar3 = crt_string_c_stricmp_FUN_005fe7f0(this_ptr->actor_name,acStack_54), iVar3 != 0)) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0x7d4;
    core_main_c_displayErrorAndQuit_FUN_00506f10("End of actor file tag mismatch for class %s name \"%s\"");
  }
  if ((*(byte *)(in_stack_00000030 + 0xc) & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0x7d9;
    core_main_c_displayErrorAndQuit_FUN_00506f10("IO Error after reading %s \"%s\"");
  }
  g_CurrentActorBeingProcessed = pCVar5;
  g_ActorReadingMode = iVar2;
  g_ActorDataFile = in_stack_00000014;
  return;
}
