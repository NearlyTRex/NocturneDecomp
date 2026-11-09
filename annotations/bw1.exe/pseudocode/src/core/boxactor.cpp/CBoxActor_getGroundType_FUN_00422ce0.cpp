// Name: core_boxactor.cpp_CBoxActor_getGroundType_FUN_00422ce0
// Address: 00422ce0
// Address Range: [[00422ce0, 00422cea]]
// Convention: __cdecl
// Signature: EGroundType __cdecl core_boxactor_cpp_CBoxActor_getGroundType_FUN_00422ce0(CBoxActor *this_ptr)

#include "nocturne.h"

EGroundType __cdecl core_boxactor_cpp_CBoxActor_getGroundType_FUN_00422ce0(CBoxActor *this_ptr)

{
  return *(EGroundType *)&this_ptr->field_0x5f0;
}
