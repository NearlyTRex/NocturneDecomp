// Name: core_actor.cpp_registerActorClass_FUN_0040d3f0
// Address: 0040d3f0
// Address Range: [[0040d3f0, 0040d4c3]]
// Convention: __cdecl
// Signature: CDemonActorType * __cdecl core_actor_cpp_registerActorClass_FUN_0040d3f0(CDemonActorType *this_ptr,char *class_name,CDemonActor_FactoryFunc *factor_func,int *max_version,int version,CDemonActorType *parent_class_info)

#include "nocturne.h"

CDemonActorType * __cdecl core_actor_cpp_registerActorClass_FUN_0040d3f0(CDemonActorType *this_ptr,char *class_name,CDemonActor_FactoryFunc *factor_func,int *max_version,int version,CDemonActorType *parent_class_info)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  CDemonActorType *pCVar5;
  
  pCVar5 = this_ptr;
  do {
    cVar1 = *class_name;
    pCVar5->class_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = class_name[1];
    class_name = class_name + 2;
    pCVar5->class_name[1] = cVar1;
    pCVar5 = (CDemonActorType *)(pCVar5->class_name + 2);
  } while (cVar1 != '\0');
  this_ptr->factory_func = factor_func;
  this_ptr->type_info = max_version;
  uVar4 = 0;
  this_ptr->type_id = version;
  this_ptr->parent_type = parent_class_info;
  pCVar5 = this_ptr;
  while( true ) {
    iVar3 = DAT_00763e94;
    bVar2 = pCVar5->class_name[0];
    pCVar5 = (CDemonActorType *)(pCVar5->class_name + 1);
    if (bVar2 == 0) break;
    if (((&DAT_005c168c)[(byte)(bVar2 + 1)] & 0xe0) != 0) {
      iVar3 = tolower((uint)bVar2);
      uVar4 = iVar3 * 0x20001 + uVar4 * 0x80 + (uVar4 >> 0x19);
    }
  }
  this_ptr->name_hash = uVar4;
  if (199 < iVar3) {
    PTR_01cc4800 = "..\\core\\actor.cpp";
    INT_01cc4804 = 0xa19;
    core_main_c_FUN_004c8440("Too many actor types!");
  }
  (&DAT_00763e98)[DAT_00763e94] = this_ptr;
  DAT_00763e94 = DAT_00763e94 + 1;
  return this_ptr;
}
