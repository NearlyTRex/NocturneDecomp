// Name: core_actor.cpp_CActorPropertyList_addClothList_FUN_0040e500
// Address: 0040e500
// Address Range: [[0040e500, 0040e591]]
// Convention: __cdecl
// Signature: CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addClothList_FUN_0040e500 (CActorPropertyList *this_ptr,char *property_name,CClothList *data_ptr,int max_count)

#include "nocturne.h"

CActorProperty * __cdecl
core_actor_cpp_CActorPropertyList_addClothList_FUN_0040e500
          (CActorPropertyList *this_ptr,char *property_name,CClothList *data_ptr,int max_count)

{
  CActorProperty *in_EAX;
  int iVar1;
  char local_d8 [200];
  
  if (max_count < 0) {
    max_count = 10;
  }
  if (data_ptr->unk <= max_count) {
    max_count = data_ptr->unk + 1;
  }
  if (10 < max_count) {
    max_count = 10;
  }
  iVar1 = 0;
  if (0 < max_count) {
    do {
      sprintf(local_d8,"%s %d",property_name,iVar1 + 1);
      in_EAX = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                         (this_ptr,PROP_CLOTH,local_d8,data_ptr,(void *)0x0);
      (in_EAX->param1).v_int = iVar1;
      iVar1 = iVar1 + 1;
      in_EAX->auto_update_flag = 1;
    } while (iVar1 < max_count);
  }
  return in_EAX;
}
