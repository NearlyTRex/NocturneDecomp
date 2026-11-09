// Name: core_boxactor.cpp_CBoxActor_getGroundType_FUN_00420170
// Address: 00420170
// Address Range: [[00420170, 0042017a]]
// Convention: __cdecl
// Signature: EGroundType __cdecl core_boxactor_cpp_CBoxActor_getGroundType_FUN_00420170(CBoxActor *this_ptr)

#include "nocturne.h"

EGroundType __cdecl core_boxactor_cpp_CBoxActor_getGroundType_FUN_00420170(CBoxActor *this_ptr)

{
  return *(EGroundType *)&this_ptr->field_0x5f0;
}
