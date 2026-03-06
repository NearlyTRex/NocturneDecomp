// Name: core_actor.cpp_CActorPropertyList_addRuleList_FUN_0040e5a0
// Address: 0040e5a0
// Address Range: [[0040e5a0, 0040e631]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CActorPropertyList_addRuleList_FUN_0040e5a0(CActorPropertyList *this_ptr,char *property_name,CRuleList *data_ptr,int max_count)

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorPropertyList_addRuleList_FUN_0040e5a0(CActorPropertyList *this_ptr,char *property_name,CRuleList *data_ptr,int max_count)

{
  CActorProperty *pCVar1;
  int iVar2;
  char local_d8 [200];
  
  if (max_count < 0) {
    max_count = 5;
  }
  if (data_ptr->list_size <= max_count) {
    max_count = data_ptr->list_size + 1;
  }
  if (5 < max_count) {
    max_count = 5;
  }
  iVar2 = 0;
  if (0 < max_count) {
    do {
      _sprintf(local_d8,"%s %d",property_name,iVar2 + 1);
      pCVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                         (this_ptr,PROP_RULE,local_d8,data_ptr,(CActorPropertyValidatorFunc *)0x0);
      (pCVar1->param1).v_int = iVar2;
      iVar2 = iVar2 + 1;
    } while (iVar2 < max_count);
  }
  return;
}
