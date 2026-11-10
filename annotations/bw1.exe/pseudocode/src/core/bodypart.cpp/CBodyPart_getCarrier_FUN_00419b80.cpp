// Name: core_bodypart.cpp_CBodyPart_getCarrier_FUN_00419b80
// Address: 00419b80
// Address Range: [[00419b80, 00419b8a]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_bodypart_cpp_CBodyPart_getCarrier_FUN_00419b80(CBodyPart *this_ptr)

#include "nocturne.h"

CDemonActor * __cdecl core_bodypart_cpp_CBodyPart_getCarrier_FUN_00419b80(CBodyPart *this_ptr)

{
  return this_ptr->carried_by_actor;
}
