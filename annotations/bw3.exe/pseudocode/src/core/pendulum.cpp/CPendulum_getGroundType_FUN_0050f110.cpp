// Name: core_pendulum.cpp_CPendulum_getGroundType_FUN_0050f110
// Address: 0050f110
// Address Range: [[0050f110, 0050f11a]]
// Convention: __cdecl
// Signature: EGroundType __cdecl core_pendulum_cpp_CPendulum_getGroundType_FUN_0050f110(CPendulum *this_ptr)

#include "nocturne.h"

EGroundType __cdecl core_pendulum_cpp_CPendulum_getGroundType_FUN_0050f110(CPendulum *this_ptr)

{
  return *(EGroundType *)&this_ptr->field_0x438;
}
