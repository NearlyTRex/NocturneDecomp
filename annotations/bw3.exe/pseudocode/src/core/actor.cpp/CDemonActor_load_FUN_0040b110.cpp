// Name: core_actor.cpp_CDemonActor_load_FUN_0040b110
// Address: 0040b110
// Address Range: [[0040b110, 0040b2c9]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_load_FUN_0040b110(CDemonActor *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_actor_cpp_CDemonActor_load_FUN_0040b110(CDemonActor *this_ptr,_FILE *file_handle)

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
  
  str1 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408870(this_ptr);
  local_dc[0] = '\0';
  local_78[0] = '\0';
  _fscanf(file_handle," { %s \"%[^\"]\"\n",local_dc,local_78);
  iVar4 = _stricmp(str1,local_dc);
  if (iVar4 != 0) {
    _DAT_01d71de0 = "..\\core\\actor.cpp";
    _DAT_01d71de4 = 0x828;
    core_main_c_FUN_004e4330("Start of actor file tag mismatch for class %s",str1);
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
  uVar3 = DAT_007df9bc;
  uVar2 = DAT_007df9b8;
  local_14 = DAT_007df9b4;
  DAT_007df9b4 = file_handle;
  DAT_007df9b8 = 1;
  DAT_007df9bc = this_ptr;
  (*((this_ptr->vtable)._ub)->archive)(this_ptr);
  local_dc[0] = '\0';
  local_78[0] = '\0';
  _fscanf(file_handle," } %s \"%[^\"]\"\n",local_dc,local_78);
  iVar4 = _stricmp(str1,local_dc);
  if ((iVar4 != 0) ||
     (iVar4 = _stricmp(this_ptr->actor_name,local_78), iVar4 != 0)) {
    _DAT_01d71de0 = "..\\core\\actor.cpp";
    _DAT_01d71de4 = 0x845;
    core_main_c_FUN_004e4330("End of actor file tag mismatch for class %s name \"%s\"",str1,this_ptr);
  }
  if ((file_handle->_flag & 0x20) != 0) {
    _DAT_01d71de0 = "..\\core\\actor.cpp";
    _DAT_01d71de4 = 0x84a;
    core_main_c_FUN_004e4330("IO Error after reading %s \"%s\"",str1,this_ptr);
  }
  DAT_007df9bc = (CDemonActor *)uVar3;
  DAT_007df9b8 = uVar2;
  DAT_007df9b4 = (_FILE *)local_14;
  return;
}
