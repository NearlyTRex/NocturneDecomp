// Name: core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350
// Address: 0040e350
// Address Range: [[0040e350, 0040e3ac]]
// Convention: __cdecl
// Signature: CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350 (CActorPropertyList *this_ptr,char *property_name,void *data_ptr,int default_index, char *choices,CDemonActor_CActorPropertyValidatorFunc *callback)

#include "nocturne.h"

CActorProperty * __cdecl
core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
          (CActorPropertyList *this_ptr,char *property_name,void *data_ptr,int default_index,
          char *choices,CDemonActor_CActorPropertyValidatorFunc *callback)

{
  char cVar1;
  CActorProperty *pCVar2;
  char *pcVar3;
  
  pCVar2 = core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
                     (this_ptr,PROP_CHOICE,property_name,data_ptr,callback);
  if (choices == (char *)0x0) {
    choices = &s_EmptyChar_00614464;
  }
  pcVar3 = pCVar2->string2;
  do {
    cVar1 = *choices;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = choices[1];
    choices = choices + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  (pCVar2->param1).v_int = default_index;
  return pCVar2;
}
