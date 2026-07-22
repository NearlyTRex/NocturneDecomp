// Name: core_ground.cpp_getGroundTypeCode_FUN_004b11b0
// Address: 004b11b0
// Address Range: [[004b11b0, 004b1214]]
// Convention: __cdecl
// Signature: char * __cdecl core_ground_cpp_getGroundTypeCode_FUN_004b11b0(undefined4 param_1)

#include "nocturne.h"

char * __cdecl core_ground_cpp_getGroundTypeCode_FUN_004b11b0(uint param_1)

{
  switch(param_1) {
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
