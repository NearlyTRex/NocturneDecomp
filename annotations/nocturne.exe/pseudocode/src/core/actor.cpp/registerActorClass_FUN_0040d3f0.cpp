// Name: core_actor.cpp_registerActorClass_FUN_0040d3f0
// Address: 0040d3f0
// Address Range: [[0040d3f0, 0040d4c3]]
// Convention: __cdecl
// Signature: CDemonActorType * __cdecl core_actor_cpp_registerActorClass_FUN_0040d3f0(CDemonActorType *this_ptr,char *class_name,CDemonActor_FactoryFunc *factor_func,int *max_version,int version,CDemonActorType *parent_class_info)

#include "nocturne.h"

CDemonActorType * __cdecl core_actor_cpp_registerActorClass_FUN_0040d3f0(CDemonActorType *this_ptr,char *class_name,CDemonActor_FactoryFunc *factor_func,int *max_version,int version,CDemonActorType *parent_class_info)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  CDemonActorType *pCVar4;
  
  pCVar4 = this_ptr;
  do {
    cVar1 = *class_name;
    pCVar4->class_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = class_name[1];
    class_name = class_name + 2;
    pCVar4->class_name[1] = cVar1;
    pCVar4 = (CDemonActorType *)(pCVar4->class_name + 2);
  } while (cVar1 != '\0');
  this_ptr->factory_func = factor_func;
  this_ptr->type_info = max_version;
  uVar3 = 0;
  this_ptr->type_id = version;
  this_ptr->parent_type = parent_class_info;
  pCVar4 = this_ptr;
  while( true ) {
    iVar2 = DAT_00763e94;
    cVar1 = pCVar4->class_name[0];
    pCVar4 = (CDemonActorType *)(pCVar4->class_name + 1);
    if (cVar1 == '\0') break;
    if (((&DAT_005c168c)[(byte)(cVar1 + 1)] & 0xe0) != 0) {
      iVar2 = tolower(cVar1);
      uVar3 = iVar2 * 0x20001 + uVar3 * 0x80 + (uVar3 >> 0x19);
    }
  }
  this_ptr->name_hash = uVar3;
  if (199 < iVar2) {
    PTR_01cc4800 = "..\\core\\actor.cpp";
    INT_01cc4804 = 0xa19;
    core_main_c_FUN_004c8440("Too many actor types!");
  }
  (&DAT_00763e98)[DAT_00763e94] = this_ptr;
  DAT_00763e94 = DAT_00763e94 + 1;
  return this_ptr;
}
