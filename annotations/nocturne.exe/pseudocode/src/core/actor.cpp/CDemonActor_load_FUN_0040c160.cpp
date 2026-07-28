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
  char *str1;
  int iVar3;
  char *pcVar4;
  _FILE *unaff_EDI;
  CDemonActor *pCVar5;
  int in_stack_00000010;
  uint in_stack_ffffff24;
  CDemonActor *deleted_actor;
  char acStack_d4 [92];
  char local_78 [8];
  char acStack_70 [92];
  _FILE *local_14;
  
  str1 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(this_ptr);
  deleted_actor = (CDemonActor *)(in_stack_ffffff24 & 0xffffff00);
  local_78[0] = '\0';
  _fscanf(file_handle," { %s \"%[^\"]\"\n",&stack0xffffff24,local_78);
  iVar3 = _stricmp(str1,&stack0xffffff24);
  if (iVar3 != 0) {
    PTR_01cc4800 = "..\\core\\actor.cpp";
    INT_01cc4804 = 0x7c6;
    core_main_c_FUN_004c8440("Start of actor file tag mismatch for class %s",str1);
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
  pCVar5 = DAT_00763e8c;
  uVar2 = DAT_00763e88;
  local_14 = DAT_00763e84;
  DAT_00763e84 = file_handle;
  DAT_00763e88 = 1;
  DAT_00763e8c = this_ptr;
  (*((this_ptr->vtable)._ub)->onActorDeleted)(this_ptr,deleted_actor);
  acStack_d4[0] = '\0';
  acStack_70[0] = '\0';
  _fscanf(in_stack_00000010," } %s \"%[^\"]\"\n");
  iVar3 = _stricmp(str1,acStack_d4);
  if ((iVar3 != 0) ||
     (iVar3 = _stricmp(this_ptr->actor_name,acStack_70), iVar3 != 0)) {
    PTR_01cc4800 = "..\\core\\actor.cpp";
    INT_01cc4804 = 0x7e3;
    core_main_c_FUN_004c8440("End of actor file tag mismatch for class %s name \"%s\"");
  }
  if ((*(byte *)(in_stack_00000010 + 0xc) & 0x20) != 0) {
    PTR_01cc4800 = "..\\core\\actor.cpp";
    INT_01cc4804 = 0x7e8;
    core_main_c_FUN_004c8440("IO Error after reading %s \"%s\"");
  }
  DAT_00763e8c = pCVar5;
  DAT_00763e88 = uVar2;
  DAT_00763e84 = unaff_EDI;
  return;
}
