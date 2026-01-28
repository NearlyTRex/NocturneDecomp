// Name: shape_design.c_setTextureQualityParameter_FUN_0046a8e0
// Address: 0046a8e0
// Address Range: [[0046a8e0, 0046a925]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_setTextureQualityParameter_FUN_0046a8e0(int texture_quality_param)

#include "nocturne.h"

void __cdecl shape_design_c_setTextureQualityParameter_FUN_0046a8e0(int texture_quality_param)

{
  SCramConfig local_8c;
  SCramConfig *local_18;
  
  g_TextureQualityLevel = texture_quality_param;
  local_18 = &local_8c;
  shape_design_c_initializeCramConfig_FUN_0046b6e0(&local_8c);
  if (0x50 < (uint)g_TextureQualityLevel) {
    g_TextureQualityLevel = 0x50;
  }
  return;
}
