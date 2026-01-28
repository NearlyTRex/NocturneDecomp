// Name: core_boxactor.cpp_FUN_0042307e
// Address: 0042307e
// Address Range: [[0042307e, 004230ad]]
// Convention: __cdecl
// Signature: char * __cdecl core_boxactor_cpp_FUN_0042307e(int param_1)

#include "nocturne.h"

char * __cdecl core_boxactor_cpp_FUN_0042307e(int param_1)

{
  switch(param_1) {
  case 0:
    return "Custom";
  case 1:
    return "Flashlight";
  case 2:
    return "Lantern";
  case 3:
    return "Globe";
  default:
    return "???";
  }
}
