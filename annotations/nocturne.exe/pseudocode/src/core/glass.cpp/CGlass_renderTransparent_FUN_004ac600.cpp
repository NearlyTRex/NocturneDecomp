// Name: core_glass.cpp_CGlass_renderTransparent_FUN_004ac600
// Address: 004ac600
// Address Range: [[004ac600, 004ac7b4]]
// Convention: unknown
// Signature: int core_glass_cpp_CGlass_renderTransparent_FUN_004ac600(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_glass_cpp_CGlass_renderTransparent_FUN_004ac600(CDemonActor *param_1)

{
  CVector3i *input_vertices;
  longlong lVar1;
  CDemonRenderer *this_ptr;
  int iVar2;
  CBoundingBox3D *this_ptr_00;
  CVector3i *pCVar3;
  float *pfVar4;
  CDemonActor *pCVar5;
  SMRGLPrimitivePoly *poly;
  CBoundingBox3D local_28;
  int iStack_10;
  
  if ((((*(int *)(param_1[2].create_event + 0x50) == 0) && (param_1[1].location.position.y != 0.0))
      && (param_1[1].location.position.z == 0.0)) &&
     (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704), iVar2 == 0)
     ) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
    this_ptr_00 = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&local_28);
    iStack_10 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
    iVar2 = 0;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (DAT_005ae704,(SMRGLTextureBasic *)(param_1[1].actor_name + 0xc));
    pfVar4 = &param_1[2].platform_position_delta.y;
    input_vertices = (CVector3i *)(param_1[3].create_event + 0x48);
    pCVar3 = input_vertices;
    if (0 < *(int *)(param_1[8].create_event + 0x34)) {
      do {
        pCVar3->x = (int)ROUND(*pfVar4 * _DAT_0059e390);
        pCVar3->y = (int)ROUND(pfVar4[1] * _DAT_0059e390);
        pCVar3->z = (int)ROUND(pfVar4[2] * _DAT_0059e390);
        iVar2 = iVar2 + 1;
        pfVar4 = pfVar4 + 3;
        pCVar3 = pCVar3 + 1;
      } while (iVar2 < *(int *)(param_1[8].create_event + 0x34));
    }
    core_set_cpp_CDemonSet_rotateVerticies_FUN_0050c200
              (0x01E57284,*(int *)(param_1[8].create_event + 0x34),input_vertices);
    lVar1 = (longlong)(0xffff - _DAT_01c038f4) * (longlong)(int)param_1[1].location.position.y;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
              (DAT_005ae704,(uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    poly = (SMRGLPrimitivePoly *)(param_1[5].actor_name + 0x14);
    core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0
              (0x01E57284,*(int *)(param_1[8].create_event + 0x34),
               *(int *)(param_1[8].create_event + 0x38),poly,input_vertices,4,(CVector3i *)0x0);
    iVar2 = 0;
    pCVar5 = param_1;
    if (0 < *(int *)(param_1[8].create_event + 0x38)) {
      do {
        this_ptr = DAT_005ae704;
        pCVar5[5].actor_name[0x1c] = '\0';
        pCVar5[5].actor_name[0x1d] = '\0';
        pCVar5[5].actor_name[0x1e] = '\0';
        pCVar5[5].actor_name[0x1f] = '\0';
        pCVar5[5].location.position.x = 0.0;
        iVar2 = iVar2 + 1;
        pCVar5[5].location.position.y = 0.0;
        pCVar5[5].location.position.z = 0.0;
        engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370(this_ptr,poly);
        poly = (SMRGLPrimitivePoly *)(poly->vertices + 4);
        pCVar5 = (CDemonActor *)((pCVar5->orient_matrix).m + 1);
      } while (iVar2 < *(int *)(param_1[8].create_event + 0x38));
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
    return iStack_10;
  }
  return 0;
}
