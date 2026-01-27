// Name: core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
// Address: 0040e6c0
// Address Range: [[0040e6c0, 0040e765]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0(CActorPropertyList * this_ptr, int property_type, char * property_name, void * data_ptr, void * callback_or_extra)

#include "nocturne.h"

int __cdecl
core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0
          (CActorPropertyList *this_ptr,int property_type,char *property_name,void *data_ptr,
          void *callback_or_extra)

{
  char cVar1;
  int iVar2;
  CActorProperty *pCVar3;
  char *pcVar4;
  
  if (0x28 < this_ptr->property_count) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0xec7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CActorPropertyList::snag - Too many actor properties!");
  }
  iVar2 = this_ptr->property_count;
  this_ptr->property_count = this_ptr->property_count + 1;
  pCVar3 = this_ptr->properties + iVar2;
  pcVar4 = pCVar3->name;
  pCVar3->type = property_type;
  do {
    cVar1 = *property_name;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = property_name[1];
    property_name = property_name + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pCVar3->auto_update_flag = 0;
  pCVar3->enabled_flag = 1;
  pCVar3->unknown[0x18] = '\0';
  pCVar3->data_ptr = data_ptr;
  pCVar3->validator_or_callback = callback_or_extra;
  return (int)pCVar3;
}
