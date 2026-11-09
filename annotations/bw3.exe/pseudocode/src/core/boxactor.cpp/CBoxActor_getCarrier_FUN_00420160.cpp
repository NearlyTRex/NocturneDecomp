// Name: core_boxactor.cpp_CBoxActor_getCarrier_FUN_00420160
// Address: 00420160
// Address Range: [[00420160, 0042016a]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_boxactor_cpp_CBoxActor_getCarrier_FUN_00420160(CBoxActor *this_ptr)

#include "nocturne.h"

CDemonActor * __cdecl core_boxactor_cpp_CBoxActor_getCarrier_FUN_00420160(CBoxActor *this_ptr)

{
  return *(CDemonActor **)&this_ptr->field_0x318;
}
