// Name: core_cloth.cpp_vectorLengthFast_FUN_005b1b10
// Address: 005b1b10
// Address Range: [[005b1b10, 005b1b3c]]
// Convention: __cdecl
// Signature: float __cdecl core_cloth_cpp_vectorLengthFast_FUN_005b1b10(CVector3f *v)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_cloth_cpp_vectorLengthFast_FUN_005b1b10(CVector3f *v)

{
  return (float)(((int)(*(float *)&v->field_0x8 * *(float *)&v->field_0x8 +
                       *(float *)v * *(float *)v + *(float *)&v->field_0x4 * *(float *)&v->field_0x4
                       ) >> 1) + _DAT_01caf5b4);
}
