// Name: core_cloth.cpp_CCloth_render_FUN_00437db0
// Address: 00437db0
// Address Range: [[00437db0, 00438203]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_render_FUN_00437db0(CCloth *this_ptr,CDeformableModelInstance *deformable_model)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_render_FUN_00437db0(CCloth *this_ptr,CDeformableModelInstance *deformable_model)

{
  float fVar1;
  CDemonRenderer *pCVar2;
  CCloth *pCVar3;
  byte *puVar4;
  int iVar5;
  uint *puVar6;
  byte bVar7;
  double dVar8;
  SMRGLPrimitiveQuad *pSVar9;
  int iVar10;
  int iVar11;
  int local_20;
  int local_1c;
  byte *local_18;
  
  bVar7 = 0;
  core_set_cpp_CDemonSet_rotateVerticies_FUN_0050c200
            (0x01E57284,(this_ptr->model).vertex_count,(this_ptr->model).vertex_list);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,1);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,0xffff);
  engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  dVar8 = round
                    ((double)(this_ptr->vertices[0x2d5].secondary_velocity.x *
                             (float)65535));
  iVar11 = (int)ROUND(dVar8);
  if (iVar11 < 1000) {
    return;
  }
  if (iVar11 < 63000) {
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,iVar11);
  }
  engine_texture_cpp_ensureTextureLoaded_FUN_00545920((this_ptr->model).texture_list[0].textures);
  if (this_ptr->vertices[0x2d5].velocity.z == 0.0) {
    core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0
              (0x01E57284,(this_ptr->model).vertex_count,(this_ptr->model).poly_count / 2,
               (this_ptr->model).poly_vert_list,(this_ptr->model).vertex_list,4,(CVector3i *)0x0);
    if ((deformable_model != (CDeformableModelInstance *)0x0) &&
       (iVar5 = 0, pCVar3 = this_ptr, 0 < (int)this_ptr->vertices[0x2f3].rest_lengths[1])) {
      do {
        pCVar2 = DAT_005ae704;
        fVar1 = pCVar3->vertices[0x2f3].rest_lengths[2];
        DAT_005ae704->vertex_buffer_ptr[(int)fVar1].r =
             (int)pCVar3->vertices[0x2fb].bone_positions[1].z;
        pCVar2->vertex_buffer_ptr[(int)fVar1].g = pCVar3->vertices[0x2fd].connected_indices[9];
        pCVar2->vertex_buffer_ptr[(int)fVar1].b = (int)pCVar3->vertices[0x2fe].prev_position.x;
        iVar5 = iVar5 + 1;
        pCVar3 = (CCloth *)((pCVar3->model).model_filename + 4);
      } while (iVar5 < (int)this_ptr->vertices[0x2f3].rest_lengths[1]);
    }
    if (iVar11 < 63000) {
      iVar5 = (this_ptr->model).poly_count;
      iVar10 = 0x267;
      pSVar9 = (this_ptr->model).poly_vert_list;
    }
    else {
      iVar5 = (this_ptr->model).poly_count;
      iVar10 = -1;
      pSVar9 = (this_ptr->model).poly_vert_list;
    }
    core_set_cpp_FUN_0050ddd0(0x01E57284,pSVar9,iVar5 / 2,iVar10);
    iVar5 = (this_ptr->model).poly_count / 2;
    core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0
              (0x01E57284,(this_ptr->model).vertex_count,iVar5,
               (this_ptr->model).poly_vert_list + iVar5,(this_ptr->model).vertex_list,4,
               (CVector3i *)0x0);
    if (62999 < iVar11) {
      local_20 = (this_ptr->model).poly_count / 2;
      iVar11 = -1;
      pSVar9 = (this_ptr->model).poly_vert_list + local_20;
      goto LAB_00437faa;
    }
    local_20 = (this_ptr->model).poly_count / 2;
    pSVar9 = (this_ptr->model).poly_vert_list + local_20;
  }
  else {
    core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0
              (0x01E57284,(this_ptr->model).vertex_count,(this_ptr->model).poly_count,
               (this_ptr->model).poly_vert_list,(this_ptr->model).vertex_list,4,(CVector3i *)0x0);
    if ((deformable_model != (CDeformableModelInstance *)0x0) &&
       (iVar5 = 0, pCVar3 = this_ptr, 0 < (int)this_ptr->vertices[0x2f3].rest_lengths[1])) {
      do {
        pCVar2 = DAT_005ae704;
        fVar1 = pCVar3->vertices[0x2f3].rest_lengths[2];
        DAT_005ae704->vertex_buffer_ptr[(int)fVar1].r =
             (int)pCVar3->vertices[0x2fb].bone_positions[1].z;
        pCVar2->vertex_buffer_ptr[(int)fVar1].g = pCVar3->vertices[0x2fd].connected_indices[9];
        pCVar2->vertex_buffer_ptr[(int)fVar1].b = (int)pCVar3->vertices[0x2fe].prev_position.x;
        iVar5 = iVar5 + 1;
        pCVar3 = (CCloth *)((pCVar3->model).model_filename + 4);
      } while (iVar5 < (int)this_ptr->vertices[0x2f3].rest_lengths[1]);
    }
    if (iVar11 < 63000) {
      iVar10 = 0x267;
      iVar5 = (this_ptr->model).poly_count;
      pSVar9 = (this_ptr->model).poly_vert_list;
    }
    else {
      iVar10 = -1;
      iVar5 = (this_ptr->model).poly_count;
      pSVar9 = (this_ptr->model).poly_vert_list;
    }
    core_set_cpp_FUN_0050ddd0(0x01E57284,pSVar9,iVar5,iVar10);
    local_20 = (this_ptr->model).poly_count;
    if (1000 < local_20) {
      local_20 = 1000;
    }
    local_1c = 0;
    if (0 < local_20) {
      local_18 = &DAT_0076934c;
      do {
        pSVar9 = (this_ptr->model).poly_vert_list;
        *(int *)(local_18 + 4) = pSVar9[local_1c].base.base.count;
        iVar5 = 0;
        puVar4 = local_18;
        if (0 < pSVar9[local_1c].base.base.count) {
          do {
            iVar10 = ((pSVar9[local_1c].base.base.count - iVar5) + -1) * 0xc + local_1c * 0x48;
            puVar6 = (uint *)((int)pSVar9 + (uint)bVar7 * -8 + iVar10 + 0x1c);
            *(uint *)(puVar4 + 0x18) = *(uint *)((int)pSVar9 + iVar10 + 0x18);
            *(uint *)(puVar4 + (uint)bVar7 * -8 + 0x1c) = *puVar6;
            *(uint *)((int)(puVar4 + (uint)bVar7 * -8 + 0x1c) + ((uint)bVar7 * -2 + 1) * 4) =
                 puVar6[(uint)bVar7 * -2 + 1];
            iVar5 = iVar5 + 1;
            puVar4 = puVar4 + 0xc;
          } while (iVar5 < pSVar9[local_1c].base.base.count);
        }
        local_18 = local_18 + 0x48;
        local_1c = local_1c + 1;
      } while (local_1c < local_20);
    }
    core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0
              (0x01E57284,(this_ptr->model).vertex_count,local_20,&DAT_0076934c,
               (this_ptr->model).vertex_list,4,(CVector3i *)0x0);
    if (62999 < iVar11) {
      iVar11 = -1;
      pSVar9 = (SMRGLPrimitiveQuad *)&DAT_0076934c;
      goto LAB_00437faa;
    }
    pSVar9 = (SMRGLPrimitiveQuad *)&DAT_0076934c;
  }
  iVar11 = 0x267;
LAB_00437faa:
  core_set_cpp_FUN_0050ddd0(0x01E57284,pSVar9,local_20,iVar11);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,1);
  return;
}
