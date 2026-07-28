// Name: core_cloth.cpp_CCloth_render_FUN_00437db0
// Address: 00437db0
// Address Range: [[00437db0, 00438203]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_render_FUN_00437db0(CCloth *this_ptr,CDeformableModelInstance *deformable_model)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_render_FUN_00437db0(CCloth *this_ptr,CDeformableModelInstance *deformable_model)

{
  int render_alpha;
  float fVar1;
  int iVar2;
  CDemonRenderer *pCVar3;
  CCloth *pCVar4;
  byte *puVar5;
  int iVar6;
  uint *puVar7;
  byte bVar8;
  double dVar9;
  SMRGLPrimitiveQuad *pSVar10;
  uint uVar11;
  int local_20;
  int local_1c;
  byte *local_18;
  
  bVar8 = 0;
  core_set_cpp_CDemonSet_rotateVerticies_FUN_0050c200
            (0x01E57284,(this_ptr->model).vertex_count,(this_ptr->model).vertex_list);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,1);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,0xffff);
  engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  dVar9 = round
                    ((double)(this_ptr->vertices[0x2d5].secondary_velocity.x *
                             (float)65535));
  render_alpha = (int)ROUND(dVar9);
  if (render_alpha < 1000) {
    return;
  }
  if (render_alpha < 63000) {
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,render_alpha);
  }
  engine_texture_cpp_ensureTextureLoaded_FUN_00545920((this_ptr->model).texture_list[0].textures);
  if (this_ptr->vertices[0x2d5].velocity.z == 0.0) {
    core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0
              (0x01E57284,(this_ptr->model).vertex_count,(this_ptr->model).poly_count / 2,
               (this_ptr->model).poly_vert_list,(this_ptr->model).vertex_list,4,(CVector3i *)0x0);
    if ((deformable_model != (CDeformableModelInstance *)0x0) &&
       (iVar6 = 0, pCVar4 = this_ptr, 0 < (int)this_ptr->vertices[0x2f3].rest_lengths[1])) {
      do {
        pCVar3 = DAT_005ae704;
        fVar1 = pCVar4->vertices[0x2f3].rest_lengths[2];
        DAT_005ae704->vertex_buffer_ptr[(int)fVar1].r =
             (int)pCVar4->vertices[0x2fb].bone_positions[1].z;
        pCVar3->vertex_buffer_ptr[(int)fVar1].g = pCVar4->vertices[0x2fd].connected_indices[9];
        pCVar3->vertex_buffer_ptr[(int)fVar1].b = (int)pCVar4->vertices[0x2fe].prev_position.x;
        iVar6 = iVar6 + 1;
        pCVar4 = (CCloth *)((pCVar4->model).model_filename + 4);
      } while (iVar6 < (int)this_ptr->vertices[0x2f3].rest_lengths[1]);
    }
    if (render_alpha < 63000) {
      iVar6 = (this_ptr->model).poly_count;
      uVar11 = 0x267;
      pSVar10 = (this_ptr->model).poly_vert_list;
    }
    else {
      iVar6 = (this_ptr->model).poly_count;
      uVar11 = 0xffffffff;
      pSVar10 = (this_ptr->model).poly_vert_list;
    }
    core_set_cpp_FUN_0050ddd0(0x01E57284,pSVar10,iVar6 / 2,uVar11);
    iVar6 = (this_ptr->model).poly_count / 2;
    core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0
              (0x01E57284,(this_ptr->model).vertex_count,iVar6,
               (this_ptr->model).poly_vert_list + iVar6,(this_ptr->model).vertex_list,4,
               (CVector3i *)0x0);
    if (62999 < render_alpha) {
      local_20 = (this_ptr->model).poly_count / 2;
      uVar11 = 0xffffffff;
      pSVar10 = (this_ptr->model).poly_vert_list + local_20;
      goto LAB_00437faa;
    }
    local_20 = (this_ptr->model).poly_count / 2;
    pSVar10 = (this_ptr->model).poly_vert_list + local_20;
  }
  else {
    core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0
              (0x01E57284,(this_ptr->model).vertex_count,(this_ptr->model).poly_count,
               (this_ptr->model).poly_vert_list,(this_ptr->model).vertex_list,4,(CVector3i *)0x0);
    if ((deformable_model != (CDeformableModelInstance *)0x0) &&
       (iVar6 = 0, pCVar4 = this_ptr, 0 < (int)this_ptr->vertices[0x2f3].rest_lengths[1])) {
      do {
        pCVar3 = DAT_005ae704;
        fVar1 = pCVar4->vertices[0x2f3].rest_lengths[2];
        DAT_005ae704->vertex_buffer_ptr[(int)fVar1].r =
             (int)pCVar4->vertices[0x2fb].bone_positions[1].z;
        pCVar3->vertex_buffer_ptr[(int)fVar1].g = pCVar4->vertices[0x2fd].connected_indices[9];
        pCVar3->vertex_buffer_ptr[(int)fVar1].b = (int)pCVar4->vertices[0x2fe].prev_position.x;
        iVar6 = iVar6 + 1;
        pCVar4 = (CCloth *)((pCVar4->model).model_filename + 4);
      } while (iVar6 < (int)this_ptr->vertices[0x2f3].rest_lengths[1]);
    }
    if (render_alpha < 63000) {
      uVar11 = 0x267;
      iVar6 = (this_ptr->model).poly_count;
      pSVar10 = (this_ptr->model).poly_vert_list;
    }
    else {
      uVar11 = 0xffffffff;
      iVar6 = (this_ptr->model).poly_count;
      pSVar10 = (this_ptr->model).poly_vert_list;
    }
    core_set_cpp_FUN_0050ddd0(0x01E57284,pSVar10,iVar6,uVar11);
    local_20 = (this_ptr->model).poly_count;
    if (1000 < local_20) {
      local_20 = 1000;
    }
    local_1c = 0;
    if (0 < local_20) {
      local_18 = &DAT_0076934c;
      do {
        pSVar10 = (this_ptr->model).poly_vert_list;
        *(int *)(local_18 + 4) = pSVar10[local_1c].base.base.count;
        iVar6 = 0;
        puVar5 = local_18;
        if (0 < pSVar10[local_1c].base.base.count) {
          do {
            iVar2 = ((pSVar10[local_1c].base.base.count - iVar6) + -1) * 0xc + local_1c * 0x48;
            puVar7 = (uint *)((int)pSVar10 + (uint)bVar8 * -8 + iVar2 + 0x1c);
            *(uint *)(puVar5 + 0x18) = *(uint *)((int)pSVar10 + iVar2 + 0x18);
            *(uint *)(puVar5 + (uint)bVar8 * -8 + 0x1c) = *puVar7;
            *(uint *)((int)(puVar5 + (uint)bVar8 * -8 + 0x1c) + ((uint)bVar8 * -2 + 1) * 4) =
                 puVar7[(uint)bVar8 * -2 + 1];
            iVar6 = iVar6 + 1;
            puVar5 = puVar5 + 0xc;
          } while (iVar6 < pSVar10[local_1c].base.base.count);
        }
        local_18 = local_18 + 0x48;
        local_1c = local_1c + 1;
      } while (local_1c < local_20);
    }
    core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0
              (0x01E57284,(this_ptr->model).vertex_count,local_20,&DAT_0076934c,
               (this_ptr->model).vertex_list,4,(CVector3i *)0x0);
    if (62999 < render_alpha) {
      uVar11 = 0xffffffff;
      pSVar10 = (SMRGLPrimitiveQuad *)&DAT_0076934c;
      goto LAB_00437faa;
    }
    pSVar10 = (SMRGLPrimitiveQuad *)&DAT_0076934c;
  }
  uVar11 = 0x267;
LAB_00437faa:
  core_set_cpp_FUN_0050ddd0(0x01E57284,pSVar10,local_20,uVar11);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,1);
  return;
}
