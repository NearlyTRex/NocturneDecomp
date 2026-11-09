// Name: core_actor.cpp_registerActorClass_FUN_0040c3a0
// Address: 0040c3a0
// Address Range: [[0040c3a0, 0040c473]]
// Convention: unknown
// Signature: CDemonActorType * core_actor_cpp_registerActorClass_FUN_0040c3a0(CDemonActorType *this_ptr,char *class_name,CDemonActor_FactoryFunc *factory_func,int *max_version,int version,CDemonActorType *parent_class_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CDemonActorType * core_actor_cpp_registerActorClass_FUN_0040c3a0(CDemonActorType *this_ptr,char *class_name,CDemonActor_FactoryFunc *factory_func,int *max_version,int version,CDemonActorType *parent_class_info)

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
  this_ptr->factory_func = factory_func;
  this_ptr->archive_version = max_version;
  uVar4 = 0;
  this_ptr->latest_version = version;
  this_ptr->parent_type = parent_class_info;
  pCVar5 = this_ptr;
  while( true ) {
    iVar3 = DAT_007df9c4;
    bVar2 = pCVar5->class_name[0];
    pCVar5 = (CDemonActorType *)(pCVar5->class_name + 1);
    if (bVar2 == 0) break;
    if (((&DAT_006074b8)[(byte)(bVar2 + 1)] & 0xe0) != 0) {
      iVar3 = tolower((uint)bVar2);
      uVar4 = iVar3 * 0x20001 + uVar4 * 0x80 + (uVar4 >> 0x19);
    }
  }
  this_ptr->name_hash = uVar4;
  if (199 < iVar3) {
    _DAT_01d71de0 = "..\\core\\actor.cpp";
    _DAT_01d71de4 = 0xa7b;
    core_main_c_FUN_004e4330("Too many actor types!");
  }
  (&DAT_007df9c8)[DAT_007df9c4] = this_ptr;
  DAT_007df9c4 = DAT_007df9c4 + 1;
  return this_ptr;
}
