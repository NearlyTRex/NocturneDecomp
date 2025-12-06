// Name: core_ground.cpp_getGroundTypeCode_FUN_004eece0
// Address: 004eece0
// Address Range: [[004eece0, 004eed44]]
// Convention: __cdecl
// Signature: char * core_ground.cpp_getGroundTypeCode_FUN_004eece0(int type)

#include "nocturne.h"

char * __cdecl core_ground_cpp_getGroundTypeCode_FUN_004eece0(int type)

{
  switch(type) {
  case 1:
    return "no";
  case 2:
    return "ct";
  case 3:
    return "dt";
  case 4:
    return "dt";
  case 5:
    return "mt";
  case 6:
    return "wt";
  case 7:
    return "wd";
  case 8:
    return "mb";
  case 9:
    return "md";
  case 10:
    return "cp";
  case 0xb:
    return "bd";
  case 0xc:
    return "gl";
  case 0xd:
    return "gr";
  default:
    return "df";
  }
}
