// Name: core_bodypart.cpp_CBodyPart_getCarrier_FUN_0041a040
// Address: 0041a040
// Address Range: [[0041a040, 0041a04a]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_bodypart_cpp_CBodyPart_getCarrier_FUN_0041a040(CBodyPart *this_ptr)

#include "nocturne.h"

CDemonActor * __cdecl core_bodypart_cpp_CBodyPart_getCarrier_FUN_0041a040(CBodyPart *this_ptr)

{
  return *(CDemonActor **)(this_ptr->unk + 0xdd0);
}
