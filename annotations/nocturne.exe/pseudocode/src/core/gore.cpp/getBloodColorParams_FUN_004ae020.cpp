// Name: core_gore.cpp_getBloodColorParams_FUN_004ae020
// Address: 004ae020
// Address Range: [[004ae020, 004ae06c]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_getBloodColorParams_FUN_004ae020(EBloodType blood_type,int *out_light,int *out_color,int *out_fog)

#include "nocturne.h"

void __cdecl core_gore_cpp_getBloodColorParams_FUN_004ae020(EBloodType blood_type,int *out_light,int *out_color,int *out_fog)

{
  if (blood_type != BLOOD_TYPE_RED) {
    if (blood_type < BLOOD_TYPE_NONE) {
      *out_light = 0;
      *out_color = 0x7f80;
      *out_fog = 0;
      return;
    }
    if (blood_type == BLOOD_TYPE_NONE) {
      *out_light = 0;
      goto LAB_004ae043;
    }
  }
  *out_light = 0x2000;
LAB_004ae043:
  *out_color = 0;
  *out_fog = 0;
  return;
}
