// Name: core_actor.cpp_CDemonActor_load_FUN_0040b1c0
// Address: 0040b1c0
// Address Range: [[0040b1c0, 0040b379]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_load_FUN_0040b1c0(CDemonActor *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_load_FUN_0040b1c0(CDemonActor *this_ptr,_FILE *file_handle)

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
  
  str1 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408a50(this_ptr);
  local_dc[0] = '\0';
  local_78[0] = '\0';
  _fscanf(file_handle," { %s \"%[^\"]\"\n");
  iVar2 = _stricmp(str1,local_dc);
  if (iVar2 != 0) {
    g_CHAR_PTR_01d046a0 = "..\\core\\actor.cpp";
    g_INT_01d046a4 = 0x829;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Start of actor file tag mismatch for class %s");
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
  pCVar5 = g_CDemonActor_PTR_007bc03c;
  iVar2 = g_INT_007bc038;
  local_14 = g_FILE_PTR_007bc034;
  g_FILE_PTR_007bc034 = file_handle;
  g_INT_007bc038 = 1;
  g_CDemonActor_PTR_007bc03c = this_ptr;
  (*((this_ptr->vtable)._ub)->archive)(this_ptr);
  local_dc[0] = '\0';
  local_78[0] = '\0';
  _fscanf(file_handle," } %s \"%[^\"]\"\n");
  iVar3 = _stricmp(str1,local_dc);
  if ((iVar3 != 0) ||
     (iVar3 = _stricmp(this_ptr->actor_name,local_78), iVar3 != 0)) {
    g_CHAR_PTR_01d046a0 = "..\\core\\actor.cpp";
    g_INT_01d046a4 = 0x846;
    core_main_c_displayErrorAndQuit_FUN_004e4500("End of actor file tag mismatch for class %s name \"%s\"");
  }
  if ((file_handle->_flag & 0x20) != 0) {
    g_CHAR_PTR_01d046a0 = "..\\core\\actor.cpp";
    g_INT_01d046a4 = 0x84b;
    core_main_c_displayErrorAndQuit_FUN_004e4500("IO Error after reading %s \"%s\"");
  }
  g_CDemonActor_PTR_007bc03c = pCVar5;
  g_INT_007bc038 = iVar2;
  g_FILE_PTR_007bc034 = local_14;
  return;
}
