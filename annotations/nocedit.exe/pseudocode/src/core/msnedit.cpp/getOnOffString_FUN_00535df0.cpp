// Name: core_msnedit.cpp_getOnOffString_FUN_00535df0
// Address: 00535df0
// Address Range: [[00535df0, 00535e02]]
// Convention: __cdecl
// Signature: char * __cdecl core_msnedit_cpp_getOnOffString_FUN_00535df0(int value)

#include "nocturne.h"

char * __cdecl core_msnedit_cpp_getOnOffString_FUN_00535df0(int value)

{
  if (value != 0) {
    return "ON";
  }
  return "OFF";
}
