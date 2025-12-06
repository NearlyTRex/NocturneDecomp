// Name: core_dmodel.cpp_clampTextureCoordinate_FUN_00476cb0
// Address: 00476cb0
// Address Range: [[00476cb0, 00476ce7]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_clampTextureCoordinate_FUN_00476cb0(float * value)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_clampTextureCoordinate_FUN_00476cb0(float *value)

{
  if (*value < 0.0) {
    *value = 0.0;
    if (*value <= (float)255.999) {
      return;
    }
  }
  else if (*value <= (float)255.999) {
    return;
  }
  *value = 255.999;
  return;
}
