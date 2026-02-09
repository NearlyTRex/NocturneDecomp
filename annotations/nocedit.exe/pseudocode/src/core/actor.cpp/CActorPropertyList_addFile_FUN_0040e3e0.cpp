// Name: core_actor.cpp_CActorPropertyList_addFile_FUN_0040e3e0
// Address: 0040e3e0
// Address Range: [[0040e3e0, 0040e458]]
// Convention: __cdecl
// Signature: CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addFile_FUN_0040e3e0 (CActorPropertyList *this_ptr,char *property_name,void *data_ptr,char *search_path, char *extension,int allow_none)

#include "nocturne.h"

CActorProperty * __cdecl
core_actor_cpp_CActorPropertyList_addFile_FUN_0040e3e0
          (CActorPropertyList *this_ptr,char *property_name,void *data_ptr,char *search_path,
          char *extension,int allow_none)

{
  char cVar1;
  CActorProperty *pCVar2;
  char *pcVar3;
  
  pCVar2 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                     (this_ptr,PROP_FILE,property_name,data_ptr,(CActorPropertyValidatorFunc *)0x0);
  pcVar3 = pCVar2->string1;
  do {
    cVar1 = *search_path;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = search_path[1];
    search_path = search_path + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar3 = pCVar2->string2;
  do {
    cVar1 = *extension;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = extension[1];
    extension = extension + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pCVar2->auto_update_flag = 1;
  (pCVar2->param1).v_int = allow_none;
  return pCVar2;
}
