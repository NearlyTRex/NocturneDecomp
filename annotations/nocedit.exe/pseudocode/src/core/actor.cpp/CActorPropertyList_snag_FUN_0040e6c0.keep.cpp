// Name: core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
// Address: 0040e6c0
// MANUAL RECONSTRUCTION
// Address Range: [[0040e6c0, 0040e765]]
// Convention: __cdecl
// Signature: CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0(CActorPropertyList *this_ptr,EActorPropertyType property_type,char *property_name,void *data_ptr,CActorPropertyValidatorFunc *callback)

#include "nocturne.h"

CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0(CActorPropertyList *this_ptr,EActorPropertyType property_type,char *property_name,void *data_ptr,CActorPropertyValidatorFunc *callback)

{
  CActorProperty *pCVar3;

  if (0x28 < this_ptr->count) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0xec7;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CActorPropertyList::snag - Too many actor properties!");
  }
  pCVar3 = this_ptr->properties + this_ptr->count;
  this_ptr->count = this_ptr->count + 1;
  pCVar3->type = property_type;
  strcpy(pCVar3->name,property_name);
  pCVar3->auto_update_flag = 0;
  pCVar3->enabled_flag = 1;
  pCVar3->string2[0] = '\0';
  (pCVar3->data).v_ptr = data_ptr;
  (pCVar3->callback).v_validator_func = callback;
  return pCVar3;
}
