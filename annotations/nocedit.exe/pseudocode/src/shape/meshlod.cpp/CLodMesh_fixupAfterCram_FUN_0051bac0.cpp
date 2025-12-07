// Name: shape_meshlod.cpp_CLodMesh_fixupAfterCram_FUN_0051bac0
// Address: 0051bac0
// Address Range: [[0051bac0, 0051bcbf]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_fixupAfterCram_FUN_0051bac0(CLodMesh * this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_fixupAfterCram_FUN_0051bac0(CLodMesh *this_ptr)

{
  float fVar1;
  int iVar2;
  float fVar3;
  char *texture_filename;
  uint extraout_EDX;
  uint uVar4;
  uint extraout_EDX_00;
  int iVar5;
  int *piVar6;
  int *piVar7;
  BADSPACEBASE *in_ESP;
  int *piVar8;
  float10 in_ST0;
  double dVar9;
  float local_2c [3];
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  float fVar10;
  
  local_1c = 0.0;
  if (0 < this_ptr->tri_count) {
    local_20 = 0;
    do {
      piVar8 = (int *)((int)this_ptr->tri_data->attribute_indices + local_20);
      if ((piVar8[0x10] == 0) && (-1 < *piVar8)) {
        iVar5 = shape_design_c_findTextureByFilename_FUN_0046dfc0
                          (this_ptr->submesh_data[*piVar8].texture_filename);
        uVar4 = extraout_EDX;
        if (iVar5 < 0) {
          g_CurrentLineNumber = 0x12c0;
          g_CurrentFilename = "..\\shape\\meshlod.cpp";
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("LodMesh::fixupAfterCram - texture %s not found in cram list.",
                     this_ptr->submesh_data[*piVar8].texture_filename);
          uVar4 = extraout_EDX_00;
        }
        local_14 = (float)piVar8[7];
        piVar6 = piVar8 + 2;
        fVar3 = (float)piVar8[8];
        local_20 = 0x40800000;
        fVar10 = fVar3;
        do {
          fVar3 = (float)((uint)CONCAT21 /* combine 2-byte values */((short)((uint)fVar3 >> 0x10),(float)piVar6[7] < local_14)
                         << 8);
          if ((float)piVar6[7] < local_14) {
            fVar3 = (float)piVar6[7];
            local_14 = fVar3;
          }
          fVar1 = (float)piVar6[8];
          fVar3 = (float)CONCAT22 /* combine 2-byte values */((short)((uint)fVar3 >> 0x10),
                                  (ushort)(fVar1 < fVar10) << 8 |
                                  (ushort)(NAN(fVar1) || NAN(fVar10)) << 10 |
                                  (ushort)(fVar1 == fVar10) << 0xe);
          if (fVar1 < fVar10) {
            fVar3 = (float)piVar6[8];
            fVar10 = fVar3;
          }
          piVar6 = piVar6 + 2;
        } while (piVar6 != piVar8 + 6);
        dVar9 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
        local_18 = (float)((float10)(double)CONCAT44 /* combine 2-byte values */(uVar4,fVar3) * (float10)256);
        dVar9 = crt_math_c_floor_FUN_005feb90(dVar9);
        in_ST0 = (float10)dVar9;
        local_18 = (float)((float10)(double)CONCAT44 /* combine 2-byte values */(uVar4,fVar3) * (float10)256);
        piVar6 = piVar8;
        do {
          fVar3 = (float)piVar6[7] - local_1c;
          local_2c[0] = (float)piVar6[8] - local_18;
          shape_design_c_fixupCramUV_FUN_0046e090(iVar5,(float *)&stack0xffffffd0,local_2c);
          piVar6[7] = (int)fVar3;
          piVar7 = piVar6 + 2;
          piVar6[8] = (int)local_2c[0];
          piVar6 = piVar7;
        } while (piVar7 != piVar8 + 6);
        iVar5 = shape_design_c_getAtlasMapIndex_FUN_0046e030(iVar5);
        *piVar8 = iVar5;
      }
      local_20 = local_20 + 0x8c;
      local_1c = (float)((int)local_1c + 1);
    } while ((int)local_1c < this_ptr->tri_count);
  }
  iVar5 = 0;
  this_ptr->submesh_count = 0;
  while( true ) {
    iVar2 = shape_design_c_getLastTextureProcessIndex_FUN_0046a860();
    if (iVar2 <= iVar5) break;
    texture_filename = shape_design_c_getTextureName_FUN_0046e060(iVar5);
    iVar5 = iVar5 + 1;
    shape_meshlod_cpp_CLodMesh_findOrAddSubmesh_FUN_00518790(this_ptr,texture_filename);
  }
  engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
  return;
}
