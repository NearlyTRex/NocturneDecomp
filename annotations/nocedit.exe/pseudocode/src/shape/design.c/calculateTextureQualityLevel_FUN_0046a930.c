// Name: shape_design.c_calculateTextureQualityLevel_FUN_0046a930
// Address: 0046a930
// Address Range: [[0046a930, 0046a96a]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_calculateTextureQualityLevel_FUN_0046a930(int texture_parameter)

#include "nocturne.h"

int __cdecl shape_design_c_calculateTextureQualityLevel_FUN_0046a930(int texture_parameter)

{
  uint local_14;
  
  local_14 = g_TextureQualityLevel + -5;
  if (9 < texture_parameter) {
    local_14 = g_TextureQualityLevel + -6;
  }
  if (1 < texture_parameter) {
    local_14 = local_14 + -1;
  }
  return local_14;
}
