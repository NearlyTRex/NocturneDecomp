// Name: shape_meshlod.cpp_CLodMesh_fixupAfterCram_FUN_0051bac0
// Address: 0051bac0
// Address Range: [[0051bac0, 0051bcbf]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_fixupAfterCram_FUN_0051bac0(CLodMesh *this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_fixupAfterCram_FUN_0051bac0(CLodMesh *this_ptr)

{
  int iVar1;
  int iVar3;
  char *texture_filename;
  int iVar2;
  int *piVar6;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  double dVar6;
  double dVar7;
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  
  local_1c = 0;
  if (0 < this_ptr->tri_count) {
    local_20 = 0;
    do {
      piVar5 = (int *)((int)this_ptr->tri_data->attribute_indices + local_20);
      if ((piVar5[0x10] == 0) && (-1 < *piVar5)) {
        iVar3 = shape_design_c_findTextureByFilename_FUN_0046dfc0
                          (this_ptr->lod_textures[*piVar5].textures[0].texture_name);
        if (iVar3 < 0) {
          g_CurrentLineNumber = 4800;
          g_CurrentFilename = "..\\shape\\meshlod.cpp";
          core_main_c_displayErrorAndQuit_FUN_00506f10("LodMesh::fixupAfterCram - texture %s not found in cram list.");
        }
        local_18 = (float)piVar5[7];
        piVar6 = piVar5 + 2;
        local_14 = (float)piVar5[8];
        local_24 = 4.0;
        do {
          if ((float)piVar6[7] < local_18) {
            local_18 = (float)piVar6[7];
          }
          if ((float)piVar6[8] < local_14) {
            local_14 = (float)piVar6[8];
          }
          piVar6 = piVar6 + 2;
        } while (piVar6 != piVar5 + 6);
        dVar6 = floor((double)((local_18 + 4.0) * (float)0.00390625));
        local_18 = (float)((float10)dVar6 * (float10)256);
        dVar7 = floor
                          ((double)((local_14 + local_24) * (float)0.00390625));
        local_14 = (float)((float10)dVar7 * (float10)256);
        piVar3 = piVar5;
        do {
          local_2c = (float)piVar3[7] - local_18;
          local_28 = (float)piVar3[8] - local_14;
          shape_design_c_fixupCramUV_FUN_0046e090(iVar3,&local_2c,&local_28);
          piVar3[7] = (int)local_2c;
          piVar4 = piVar3 + 2;
          piVar3[8] = (int)local_28;
          piVar3 = piVar4;
        } while (piVar4 != piVar5 + 6);
        iVar3 = shape_design_c_getAtlasMapIndex_FUN_0046e030(iVar3);
        *piVar5 = iVar3;
      }
      local_20 = local_20 + 0x8c;
      local_1c = local_1c + 1;
    } while (local_1c < this_ptr->tri_count);
  }
  iVar2 = 0;
  this_ptr->lod_texture_count = 0;
  while( true ) {
    iVar1 = shape_design_c_getLastTextureProcessIndex_FUN_0046a860();
    if (iVar1 <= iVar2) break;
    texture_filename = shape_design_c_getTextureName_FUN_0046e060(iVar2);
    iVar2 = iVar2 + 1;
    shape_meshlod_cpp_CLodMesh_findOrAddLodTexture_FUN_00518790(this_ptr,texture_filename);
  }
  engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
  return;
}
