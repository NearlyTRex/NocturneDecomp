// Name: core_actor.cpp_CDemonActor_load_FUN_0040c160
// Address: 0040c160
// Address Range: [[0040c160, 0040c319]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_load_FUN_0040c160(CDemonActor *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_load_FUN_0040c160(CDemonActor *this_ptr,_FILE *file_handle)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *str1;
  int iVar4;
  char *pcVar5;
  CDemonActor *pCVar6;
  char local_dc [100];
  char local_78 [100];
  uint local_14;
  
  str1 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(this_ptr);
  local_dc[0] = '\0';
  local_78[0] = '\0';
  _fscanf(file_handle," { %s \"%[^\"]\"\n",local_dc,local_78);
  iVar4 = _stricmp(str1,local_dc);
  if (iVar4 != 0) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 1990;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Start of actor file tag mismatch for class %s",str1);
  }
  pcVar5 = local_78;
  pCVar6 = this_ptr;
  do {
    cVar1 = *pcVar5;
    pCVar6->actor_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pCVar6->actor_name[1] = cVar1;
    pCVar6 = (CDemonActor *)(pCVar6->actor_name + 2);
  } while (cVar1 != '\0');
  uVar3 = DAT_00763e8c;
  uVar2 = DAT_00763e88;
  local_14 = DAT_00763e84;
  DAT_00763e84 = file_handle;
  DAT_00763e88 = 1;
  DAT_00763e8c = this_ptr;
  (*((this_ptr->vtable)._ub)->archive)(this_ptr);
  local_dc[0] = '\0';
  local_78[0] = '\0';
  _fscanf(file_handle," } %s \"%[^\"]\"\n",local_dc,local_78);
  iVar4 = _stricmp(str1,local_dc);
  if ((iVar4 != 0) ||
     (iVar4 = _stricmp(this_ptr->actor_name,local_78), iVar4 != 0)) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 2019;
    core_main_c_displayErrorAndQuit_FUN_004c8440("End of actor file tag mismatch for class %s name \"%s\"",str1,this_ptr);
  }
  if ((file_handle->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 2024;
    core_main_c_displayErrorAndQuit_FUN_004c8440("IO Error after reading %s \"%s\"",str1,this_ptr);
  }
  DAT_00763e8c = (CDemonActor *)uVar3;
  DAT_00763e88 = uVar2;
  DAT_00763e84 = (_FILE *)local_14;
  return;
}
