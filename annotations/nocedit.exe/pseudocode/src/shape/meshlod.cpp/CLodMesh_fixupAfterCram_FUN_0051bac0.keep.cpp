// Name: shape_meshlod.cpp_CLodMesh_fixupAfterCram_FUN_0051bac0
// Address: 0051bac0
// MANUAL RECONSTRUCTION
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
  CLodFace *face;
  int i;
  double dVar6;
  double dVar7;
  float local_2c;
  float local_28;
  float local_24;
  int local_1c;
  float local_18;
  float local_14;
  
  local_1c = 0;
  if (0 < this_ptr->tri_count) {
    do {
      face = this_ptr->tri_data + local_1c;
      if ((face->processed_flag == 0) && (-1 < face->attribute_indices[0])) {
        iVar3 = shape_design_c_findTextureByFilename_FUN_0046dfc0
                          (this_ptr->lod_textures[face->attribute_indices[0]].textures[0].texture_name);
        if (iVar3 < 0) {
          g_CurrentLineNumber = 0x12c0;
          g_CurrentFilename = "..\\shape\\meshlod.cpp";
          core_main_c_displayErrorAndQuit_FUN_00506f10("LodMesh::fixupAfterCram - texture %s not found in cram list.",this_ptr->lod_textures[face->attribute_indices[0]].textures[0].texture_name);
        }
        local_18 = face->uv_coords[0][0];
        local_14 = face->uv_coords[0][1];
        local_24 = 4.0;
        for (i = 1; i < 3; i = i + 1) {
          if (face->uv_coords[i][0] < local_18) {
            local_18 = face->uv_coords[i][0];
          }
          if (face->uv_coords[i][1] < local_14) {
            local_14 = face->uv_coords[i][1];
          }
        }
        dVar6 = floor((double)((local_18 + 4.0) * (float)0.00390625));
        local_18 = (float)((float10)dVar6 * (float10)256);
        dVar7 = floor
                          ((double)((local_14 + local_24) * (float)0.00390625));
        local_14 = (float)((float10)dVar7 * (float10)256);
        for (i = 0; i < 3; i = i + 1) {
          local_2c = face->uv_coords[i][0] - local_18;
          local_28 = face->uv_coords[i][1] - local_14;
          shape_design_c_fixupCramUV_FUN_0046e090(iVar3,&local_2c,&local_28);
          face->uv_coords[i][0] = local_2c;
          face->uv_coords[i][1] = local_28;
        }
        iVar3 = shape_design_c_getAtlasMapIndex_FUN_0046e030(iVar3);
        face->attribute_indices[0] = iVar3;
      }
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
