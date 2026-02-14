// Name: core_procedur.cpp_CProceduralTexture_calculateWaveOffset_FUN_00554620
// Address: 00554620
// Address Range: [[00554620, 00554660]]
// Convention: __cdecl
// Signature: float __cdecl core_procedur_cpp_CProceduralTexture_calculateWaveOffset_FUN_00554620(CProceduralTexture *this_ptr,float wave_radius,float frame_index)

#include "nocturne.h"

float __cdecl core_procedur_cpp_CProceduralTexture_calculateWaveOffset_FUN_00554620(CProceduralTexture *this_ptr,float wave_radius,float frame_index)

{
  float fVar1;
  
  fVar1 = frame_index * (float)128 * (float)0.0625 + wave_radius;
  if (fVar1 <= (float)128) {
    return fVar1;
  }
  return fVar1 + -128.0f;
}
