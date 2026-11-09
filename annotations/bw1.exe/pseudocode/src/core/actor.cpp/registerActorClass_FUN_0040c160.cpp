// Name: core_actor.cpp_registerActorClass_FUN_0040c160
// Address: 0040c160
// Address Range: [[0040c160, 0040c233]]
// Convention: unknown
// Signature: CDemonActorType * core_actor_cpp_registerActorClass_FUN_0040c160(CDemonActorType *this_ptr,char *class_name,CDemonActor_FactoryFunc *factory_func,int *max_version,int version,CDemonActorType *parent_class_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CDemonActorType * core_actor_cpp_registerActorClass_FUN_0040c160(CDemonActorType *this_ptr,char *class_name,CDemonActor_FactoryFunc *factory_func,int *max_version,int version,CDemonActorType *parent_class_info)

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
    iVar3 = DAT_007c3044;
    bVar2 = pCVar5->class_name[0];
    pCVar5 = (CDemonActorType *)(pCVar5->class_name + 1);
    if (bVar2 == 0) break;
    if (((&DAT_00626114)[(byte)(bVar2 + 1)] & 0xe0) != 0) {
      iVar3 = tolower((uint)bVar2);
      uVar4 = iVar3 * 0x20001 + uVar4 * 0x80 + (uVar4 >> 0x19);
    }
  }
  this_ptr->name_hash = uVar4;
  if (199 < iVar3) {
    _DAT_01d1d400 = "..\\core\\actor.cpp";
    _DAT_01d1d404 = 0xa61;
    core_main_c_FUN_005030e0("Too many actor types!");
  }
  (&DAT_007c3048)[DAT_007c3044] = this_ptr;
  DAT_007c3044 = DAT_007c3044 + 1;
  return this_ptr;
}
