// Name: shape_meshlod.cpp_CLodMesh_fixupAfterCram_FUN_0051bac0
// Address: 0051bac0
// Address Range: [[0051bac0, 0051bcbf]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_fixupAfterCram_FUN_0051bac0(CLodMesh * this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_fixupAfterCram_FUN_0051bac0(CLodMesh *this_ptr)

{
  int iVar1;
  uint extraout_EAX;
  uint extraout_EAX_00;
  char *texture_filename;
  uint extraout_EDX;
  uint extraout_EDX_00;
  int iVar2;
  int *piVar3;
  int *piVar4;
  BADSPACEBASE *in_ESP;
  int *piVar5;
  float10 in_ST0;
  double dVar6;
  float fVar7;
  float local_2c [3];
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_1c = 0.0;
  if (0 < this_ptr->tri_count) {
    local_20 = 0;
    do {
      piVar5 = (int *)((int)this_ptr->tri_data->attribute_indices + local_20);
      if ((piVar5[0x10] == 0) && (-1 < *piVar5)) {
        iVar2 = shape_design_c_findTextureByFilename_FUN_0046dfc0
                          (this_ptr->submesh_data[*piVar5].texture_filename);
        if (iVar2 < 0) {
          g_CurrentLineNumber = 0x12c0;
          g_CurrentFilename = "..\\shape\\meshlod.cpp";
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("LodMesh::fixupAfterCram - texture %s not found in cram list.",
                     this_ptr->submesh_data[*piVar5].texture_filename);
        }
        local_14 = (float)piVar5[7];
        piVar3 = piVar5 + 2;
        fVar7 = (float)piVar5[8];
        local_20 = 0x40800000;
        do {
          if ((float)piVar3[7] < local_14) {
            local_14 = (float)piVar3[7];
          }
          if ((float)piVar3[8] < fVar7) {
            fVar7 = (float)piVar3[8];
          }
          piVar3 = piVar3 + 2;
        } while (piVar3 != piVar5 + 6);
        dVar6 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
        local_18 = (float)((float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX) *
                          (float10)256);
        dVar6 = crt_math_c_floor_FUN_005feb90(dVar6);
        in_ST0 = (float10)dVar6;
        local_18 = (float)((float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX_00,extraout_EAX_00) *
                          (float10)256);
        piVar3 = piVar5;
        do {
          fVar7 = (float)piVar3[7] - local_1c;
          local_2c[0] = (float)piVar3[8] - local_18;
          shape_design_c_fixupCramUV_FUN_0046e090(iVar2,(float *)&stack0xffffffd0,local_2c);
          piVar3[7] = (int)fVar7;
          piVar4 = piVar3 + 2;
          piVar3[8] = (int)local_2c[0];
          piVar3 = piVar4;
        } while (piVar4 != piVar5 + 6);
        iVar2 = shape_design_c_getAtlasMapIndex_FUN_0046e030(iVar2);
        *piVar5 = iVar2;
      }
      local_20 = local_20 + 0x8c;
      local_1c = (float)((int)local_1c + 1);
    } while ((int)local_1c < this_ptr->tri_count);
  }
  iVar2 = 0;
  this_ptr->submesh_count = 0;
  while( true ) {
    iVar1 = shape_design_c_getLastTextureProcessIndex_FUN_0046a860();
    if (iVar1 <= iVar2) break;
    texture_filename = shape_design_c_getTextureName_FUN_0046e060(iVar2);
    iVar2 = iVar2 + 1;
    shape_meshlod_cpp_CLodMesh_findOrAddSubmesh_FUN_00518790(this_ptr,texture_filename);
  }
  engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
  return;
}
