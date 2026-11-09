// Name: core_actor.cpp_CDemonActor_load_FUN_0040b1c0
// Address: 0040b1c0
// Address Range: [[0040b1c0, 0040b379]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_load_FUN_0040b1c0(CDemonActor *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_actor_cpp_CDemonActor_load_FUN_0040b1c0(CDemonActor *this_ptr,_FILE *file_handle)

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
  
  str1 = (char *)core_actor_cpp_FUN_00408a50(this_ptr);
  local_dc[0] = '\0';
  local_78[0] = '\0';
  _fscanf(file_handle," { %s \"%[^\"]\"\n",local_dc,local_78);
  iVar4 = _stricmp(str1,local_dc);
  if (iVar4 != 0) {
    _DAT_01d046a0 = "..\\core\\actor.cpp";
    _DAT_01d046a4 = 0x829;
    core_main_c_FUN_004e4500("Start of actor file tag mismatch for class %s",str1);
  }
  pcVar5 = local_78;
  pCVar6 = this_ptr;
  do {
    cVar1 = *pcVar5;
    *(char *)pCVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pCVar6->field_0x1 = cVar1;
    pCVar6 = (CDemonActor *)&pCVar6->field_0x2;
  } while (cVar1 != '\0');
  uVar3 = DAT_007bc03c;
  uVar2 = DAT_007bc038;
  local_14 = DAT_007bc034;
  DAT_007bc034 = file_handle;
  DAT_007bc038 = 1;
  DAT_007bc03c = this_ptr;
  (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0xdc))(this_ptr);
  local_dc[0] = '\0';
  local_78[0] = '\0';
  _fscanf(file_handle," } %s \"%[^\"]\"\n",local_dc,local_78);
  iVar4 = _stricmp(str1,local_dc);
  if ((iVar4 != 0) ||
     (iVar4 = _stricmp((char *)this_ptr,local_78), iVar4 != 0)) {
    _DAT_01d046a0 = "..\\core\\actor.cpp";
    _DAT_01d046a4 = 0x846;
    core_main_c_FUN_004e4500("End of actor file tag mismatch for class %s name \"%s\"",str1,this_ptr);
  }
  if (((byte)file_handle[0xc] & 0x20) != 0) {
    _DAT_01d046a0 = "..\\core\\actor.cpp";
    _DAT_01d046a4 = 0x84b;
    core_main_c_FUN_004e4500("IO Error after reading %s \"%s\"",str1,this_ptr);
  }
  DAT_007bc03c = (CDemonActor *)uVar3;
  DAT_007bc038 = uVar2;
  DAT_007bc034 = (_FILE *)local_14;
  return;
}
