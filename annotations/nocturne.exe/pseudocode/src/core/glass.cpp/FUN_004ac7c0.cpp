// Name: core_glass.cpp_FUN_004ac7c0
// Address: 004ac7c0
// Address Range: [[004ac7c0, 004ac9a8]]
// Convention: unknown
// Signature: void core_glass_cpp_FUN_004ac7c0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_glass_cpp_FUN_004ac7c0(CDemonActor *param_1)

{
  CDemonRenderer *pCVar1;
  CBoundingBox3D *this_ptr;
  int iVar2;
  int iVar3;
  CDemonActor *pCVar4;
  float *pfVar5;
  SMRGLPrimitivePoly *poly;
  CBoundingBox3D local_28;
  CVector3i CStack_10;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
  this_ptr = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&local_28);
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr);
  if (iVar2 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
    return;
  }
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar2 == 0) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (DAT_005ae704,(SMRGLTextureBasic *)(param_1[2].create_event + 0x54));
  }
  else {
    engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_00461070(DAT_005ae704,0);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (DAT_005ae704,(SMRGLTextureBasic *)(param_1[2].create_event + 0x54));
    engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_00461070(DAT_005ae704,1);
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1[8].create_event + 0x34)) {
    pfVar5 = &param_1[2].platform_position_delta.y;
    iVar3 = 0;
    do {
      CStack_10.x = (int)ROUND(*pfVar5 * _DAT_0059e390);
      CStack_10.y = (int)ROUND(pfVar5[1] * _DAT_0059e390);
      CStack_10.z = (int)ROUND(pfVar5[2] * _DAT_0059e390);
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                ((SProjectedVertex *)
                 ((int)&(DAT_005ae704->vertex_buffer_ptr->projected_vertex).transformed_x + iVar3),
                 &CStack_10);
      pCVar1 = DAT_005ae704;
      *(uint *)((int)&DAT_005ae704->vertex_buffer_ptr->r + iVar3) = 0xffff;
      *(uint *)((int)&pCVar1->vertex_buffer_ptr->g + iVar3) = 0xffff;
      *(uint *)((int)&pCVar1->vertex_buffer_ptr->b + iVar3) = 0xffff;
      iVar2 = iVar2 + 1;
      pfVar5 = pfVar5 + 3;
      iVar3 = iVar3 + 0x30;
    } while (iVar2 < *(int *)(param_1[8].create_event + 0x34));
  }
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
            (DAT_005ae704,(int)param_1[1].location.position.y);
  iVar2 = 0;
  if (0 < *(int *)(param_1[8].create_event + 0x38)) {
    poly = (SMRGLPrimitivePoly *)(param_1[5].actor_name + 0x14);
    pCVar4 = param_1;
    do {
      pCVar4[5].actor_name[0x1c] = '\0';
      pCVar4[5].actor_name[0x1d] = '\0';
      pCVar4[5].actor_name[0x1e] = '\0';
      pCVar4[5].actor_name[0x1f] = '\0';
      pCVar4[5].location.position.x = 0.0;
      pCVar1 = DAT_005ae704;
      pCVar4[5].location.position.y = 0.0;
      pCVar4[5].location.position.z = 0.0;
      engine_drender_cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0045fb00(pCVar1,poly);
      pCVar4 = (CDemonActor *)((pCVar4->orient_matrix).m + 1);
      iVar2 = iVar2 + 1;
      poly = (SMRGLPrimitivePoly *)(poly->vertices + 4);
    } while (iVar2 < *(int *)(param_1[8].create_event + 0x38));
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  return;
}
