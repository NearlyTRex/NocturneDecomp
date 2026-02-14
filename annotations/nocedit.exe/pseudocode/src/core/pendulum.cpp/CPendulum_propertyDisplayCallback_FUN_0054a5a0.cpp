// Name: core_pendulum.cpp_CPendulum_propertyDisplayCallback_FUN_0054a5a0
// Address: 0054a5a0
// Address Range: [[0054a5a0, 0054a5da]]
// Convention: __cdecl
// Signature: void __cdecl core_pendulum_cpp_CPendulum_propertyDisplayCallback_FUN_0054a5a0(CPendulum *this_ptr,CActorProperty *property,char *output_buffer)

#include "nocturne.h"

void __cdecl core_pendulum_cpp_CPendulum_propertyDisplayCallback_FUN_0054a5a0(CPendulum *this_ptr,CActorProperty *property,char *output_buffer)

{
  CPendulum *pCVar1;
  
  pCVar1 = (CPendulum *)
           core_actor_cpp_castToClassHash_FUN_0040c790
                     (&this_ptr->base,g_CPendulumClassInfo.name_hash);
  _sprintf
            (output_buffer,"%f",(double)(*(float *)pCVar1->unk3 * (float)0.5));
  return;
}
