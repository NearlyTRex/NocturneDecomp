// Name: core_werewolf.cpp_CWerewolf_propertyDisplayCallback_FUN_005f2010
// Address: 005f2010
// Address Range: [[005f2010, 005f2061]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_propertyDisplayCallback_FUN_005f2010 (CWerewolf *this_ptr,CActorProperty *property,char *output_buffer)

#include "nocturne.h"

void __cdecl
core_werewolf_cpp_CWerewolf_propertyDisplayCallback_FUN_005f2010
          (CWerewolf *this_ptr,CActorProperty *property,char *output_buffer)

{
  CWerewolf *pCVar1;
  char *format;
  
  pCVar1 = (CWerewolf *)
           core_actor_cpp_castToClassHash_FUN_0040c790
                     ((CDemonActor *)this_ptr,g_CWerewolfClassInfo.name_hash);
  if (pCVar1->type == WEREWOLF_TYPE_TRAIN) {
    format = "Train";
  }
  else {
    if (pCVar1->type != WEREWOLF_TYPE_TRAIN_ALPHA) {
      sprintf(output_buffer,"Train Alpha");
      return;
    }
    format = "Forest";
  }
  sprintf(output_buffer,format);
  return;
}
