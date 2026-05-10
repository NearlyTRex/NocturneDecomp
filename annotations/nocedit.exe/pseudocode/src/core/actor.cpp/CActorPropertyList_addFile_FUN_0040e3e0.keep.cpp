// Name: core_actor.cpp_CActorPropertyList_addFile_FUN_0040e3e0
// Address: 0040e3e0
// MANUAL RECONSTRUCTION
// Address Range: [[0040e3e0, 0040e458]]
// Convention: __cdecl
// Signature: CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addFile_FUN_0040e3e0(CActorPropertyList *this_ptr,char *property_name,void *data_ptr,char *search_path,char *extension,int allow_none)

#include "nocturne.h"

CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addFile_FUN_0040e3e0(CActorPropertyList *this_ptr,char *property_name,void *data_ptr,char *search_path,char *extension,int allow_none)

{
  CActorProperty *pCVar2;

  pCVar2 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                     (this_ptr,PROP_FILE,property_name,data_ptr,(CActorPropertyValidatorFunc *)0x0);
  strcpy(pCVar2->string1,search_path);
  strcpy(pCVar2->string2,extension);
  pCVar2->auto_update_flag = 1;
  (pCVar2->param1).v_int = allow_none;
  return pCVar2;
}
