// Name: core_trap.cpp_CTrap_getCarrier_FUN_0056cdd0
// Address: 0056cdd0
// Address Range: [[0056cdd0, 0056cdda]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_trap_cpp_CTrap_getCarrier_FUN_0056cdd0(CTrap *this_ptr)

#include "nocturne.h"

CDemonActor * __cdecl core_trap_cpp_CTrap_getCarrier_FUN_0056cdd0(CTrap *this_ptr)

{
  return *(CDemonActor **)&this_ptr->field_0x2d4;
}
