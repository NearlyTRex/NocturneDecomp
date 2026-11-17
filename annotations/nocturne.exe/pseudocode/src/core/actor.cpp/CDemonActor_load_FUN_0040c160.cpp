// Name: core_actor.cpp_CDemonActor_load_FUN_0040c160
// Address: 0040c160
// Address Range: [[0040c160, 0040c319]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_load_FUN_0040c160(CDemonActor *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_load_FUN_0040c160(CDemonActor *this_ptr,_FILE *file_handle)

{
  char cVar1;
  char *str1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  CDemonActor *pCVar5;
  char local_dc [100];
  char local_78 [100];
  _FILE *local_14;
  
  str1 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(this_ptr);
  local_dc[0] = '\0';
  local_78[0] = '\0';
  _fscanf(file_handle," { %s \"%[^\"]\"\n",local_dc,local_78);
  iVar2 = _stricmp(str1,local_dc);
  if (iVar2 != 0) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 1990;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Start of actor file tag mismatch for class %s",str1);
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
  pCVar5 = g_CDemonActor_PTR_00763e8c;
  iVar2 = g_INT_00763e88;
  local_14 = g_FILE_PTR_00763e84;
  g_FILE_PTR_00763e84 = file_handle;
  g_INT_00763e88 = 1;
  g_CDemonActor_PTR_00763e8c = this_ptr;
  (*((this_ptr->vtable)._ub)->archive)(this_ptr);
  local_dc[0] = '\0';
  local_78[0] = '\0';
  _fscanf(file_handle," } %s \"%[^\"]\"\n",local_dc,local_78);
  iVar3 = _stricmp(str1,local_dc);
  if ((iVar3 != 0) ||
     (iVar3 = _stricmp(this_ptr->actor_name,local_78), iVar3 != 0)) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 2019;
    core_main_c_displayErrorAndQuit_FUN_004c8440("End of actor file tag mismatch for class %s name \"%s\"",str1,this_ptr);
  }
  if ((file_handle->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 2024;
    core_main_c_displayErrorAndQuit_FUN_004c8440("IO Error after reading %s \"%s\"",str1,this_ptr);
  }
  g_CDemonActor_PTR_00763e8c = pCVar5;
  g_INT_00763e88 = iVar2;
  g_FILE_PTR_00763e84 = local_14;
  return;
}
