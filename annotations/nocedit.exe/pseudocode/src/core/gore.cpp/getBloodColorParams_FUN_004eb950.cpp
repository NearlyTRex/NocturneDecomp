// Name: core_gore.cpp_getBloodColorParams_FUN_004eb950
// Address: 004eb950
// Address Range: [[004eb950, 004eb99c]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_getBloodColorParams_FUN_004eb950(int blood_type,int *out_light,int *out_color,int *out_fog)

#include "nocturne.h"

void __cdecl core_gore_cpp_getBloodColorParams_FUN_004eb950(int blood_type,int *out_light,int *out_color,int *out_fog)

{
  if (blood_type != 0) {
    if ((uint)blood_type < 2) {
      *out_light = 0;
      *out_color = 0x7f80;
      *out_fog = 0;
      return;
    }
    if (blood_type == 2) {
      *out_light = 0;
      goto LAB_004eb973;
    }
  }
  *out_light = 0x2000;
LAB_004eb973:
  *out_color = 0;
  *out_fog = 0;
  return;
}
