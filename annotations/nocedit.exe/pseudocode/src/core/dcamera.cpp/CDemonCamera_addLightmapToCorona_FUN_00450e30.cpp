// Name: core_dcamera.cpp_CDemonCamera_addLightmapToCorona_FUN_00450e30
// Address: 00450e30
// Address Range: [[00450e30, 00450fba]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_addLightmapToCorona_FUN_00450e30(CDemonCamera * this_ptr, CDemonLight * light_source)

#include "nocturne.h"

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl
core_dcamera_cpp_CDemonCamera_addLightmapToCorona_FUN_00450e30
          (CDemonCamera *this_ptr,CDemonLight *light_source)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  char *pcVar9;
  char (*local_20) [320];
  int local_1c;
  int local_18;
  CDemonLight *local_14;
  
  local_1c = 0;
  if (0 < this_ptr->display_height) {
    local_18 = 0;
    local_20 = g_CoronaBlurOutputBuffer;
    local_14 = light_source;
    do {
      iVar2 = (local_14->right_extent[0] - local_14->left_extent[0]) + 1;
      if (0 < iVar2) {
        puVar3 = (uint *)((int)light_source->corona_visibility_buffers +
                         local_14->left_extent[0] * 4 + local_18);
        puVar8 = (uint *)
                 ((int)light_source->corona_depth_buffer + local_14->left_extent[0] * 4 + local_18);
        piVar4 = (int *)((int)light_source->corona_lightmap_indices +
                        local_14->left_extent[0] * 4 + local_18);
        pcVar9 = *local_20 + local_14->left_extent[0];
        DAT_015c2eac = light_source->precomputed_lighting_textures;
        iVar7 = iVar2;
        do {
          iVar5 = iVar7 + -8;
          bVar1 = 7 < iVar7;
          iVar6 = iVar2;
          iVar7 = iVar5;
        } while (iVar5 != 0 && bVar1);
        do {
          iVar5 = iVar6 + -8;
          bVar1 = 7 < iVar6;
          iVar7 = iVar2;
          iVar6 = iVar5;
        } while (iVar5 != 0 && bVar1);
        do {
          iVar6 = iVar7 + -8;
          bVar1 = 7 < iVar7;
          iVar7 = iVar6;
        } while (iVar6 != 0 && bVar1);
        do {
          if ((*puVar3 != 0) && (*puVar3 <= (uint)*(ushort *)*puVar8)) {
            *pcVar9 = *pcVar9 + DAT_015c2eac[*piVar4];
          }
          puVar3 = puVar3 + 1;
          puVar8 = puVar8 + 1;
          piVar4 = piVar4 + 1;
          pcVar9 = pcVar9 + 1;
          iVar7 = iVar2 + -1;
          bVar1 = 0 < iVar2;
          iVar2 = iVar7;
        } while (iVar7 != 0 && bVar1);
      }
      local_14 = (CDemonLight *)&(local_14->base).base.position;
      local_20 = local_20 + 1;
      local_18 = local_18 + 0x500;
      local_1c = local_1c + 1;
    } while (local_1c < this_ptr->display_height);
  }
  return;
}
