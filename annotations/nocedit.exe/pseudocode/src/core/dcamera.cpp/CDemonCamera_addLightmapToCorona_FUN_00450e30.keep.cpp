// Name: core_dcamera.cpp_CDemonCamera_addLightmapToCorona_FUN_00450e30
// Address: 00450e30
// MANUAL RECONSTRUCTION
// Address Range: [[00450e30, 00450fba]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_addLightmapToCorona_FUN_00450e30(CDemonCamera *this_ptr,CDemonLight *light_source)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_addLightmapToCorona_FUN_00450e30(CDemonCamera *this_ptr,CDemonLight *light_source)

{
  int iVar2;
  uint *puVar3;
  int *piVar4;
  uint *puVar8;
  char *pcVar9;
  char (*local_20) [320];
  int local_1c;
  int local_18;

  local_1c = 0;
  if (0 < this_ptr->display_height) {
    local_18 = 0;
    local_20 = g_CoronaBlurOutputBuffer;
    do {
      iVar2 = (light_source->right_extent[local_1c] - light_source->left_extent[local_1c]) + 1;
      if (0 < iVar2) {
        puVar3 = (uint *)((char *)light_source->corona_visibility_buffers +
                         light_source->left_extent[local_1c] * 4 + local_18);
        puVar8 = (uint *)((char *)light_source->corona_depth_buffer +
                         light_source->left_extent[local_1c] * 4 + local_18);
        piVar4 = (int *)((char *)light_source->corona_lightmap_indices +
                        light_source->left_extent[local_1c] * 4 + local_18);
        pcVar9 = *local_20 + light_source->left_extent[local_1c];
        g_CoronaLightingTextureData = (char *)light_source->precomputed_lighting_textures;
        do {
          if ((*puVar3 != 0) && (*puVar3 <= (uint)*(ushort *)*puVar8)) {
            *pcVar9 = *pcVar9 + g_CoronaLightingTextureData[*piVar4];
          }
          puVar3 = puVar3 + 1;
          puVar8 = puVar8 + 1;
          piVar4 = piVar4 + 1;
          pcVar9 = pcVar9 + 1;
          iVar2 = iVar2 - 1;
        } while (iVar2 != 0);
      }
      local_20 = local_20 + 1;
      local_18 = local_18 + 0x500;
      local_1c = local_1c + 1;
    } while (local_1c < this_ptr->display_height);
  }
  return;
}
