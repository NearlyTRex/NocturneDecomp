// Name: core_actor.cpp_CActorPropertyList_addClothList_FUN_0040e500
// Address: 0040e500
// Address Range: [[0040e500, 0040e591]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CActorPropertyList_addClothList_FUN_0040e500(CActorPropertyList *this_ptr,char *property_name,CClothList *data_ptr,int max_count)

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorPropertyList_addClothList_FUN_0040e500(CActorPropertyList *this_ptr,char *property_name,CClothList *data_ptr,int max_count)

{
  CActorProperty *pCVar1;
  int iVar2;
  char local_d8 [200];
  
  if (max_count < 0) {
    max_count = 10;
  }
  if (data_ptr->count <= max_count) {
    max_count = data_ptr->count + 1;
  }
  if (10 < max_count) {
    max_count = 10;
  }
  iVar2 = 0;
  if (0 < max_count) {
    do {
      _sprintf(local_d8,"%s %d",property_name,iVar2 + 1);
      pCVar1 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                         (this_ptr,PROP_CLOTH,local_d8,data_ptr,(CActorPropertyValidatorFunc *)0x0);
      (pCVar1->param1).v_int = iVar2;
      iVar2 = iVar2 + 1;
      pCVar1->auto_update_flag = 1;
    } while (iVar2 < max_count);
  }
  return;
}
