// Name: core_glass.cpp_FUN_004ac600
// Address: 004ac600
// Address Range: [[004ac600, 004ac7b4]]
// Convention: unknown
// Signature: int core_glass_cpp_FUN_004ac600(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_glass_cpp_FUN_004ac600(CDemonActor *param_1)

{
  CVector3i *vertex_positions;
  longlong lVar1;
  CDemonRenderer *pCVar2;
  int iVar3;
  CBoundingBox3D *this_ptr;
  CVector3i *pCVar4;
  float *pfVar5;
  CDemonActor *pCVar6;
  CBoundingBox3D local_28;
  int iStack_10;
  
  if ((((*(int *)(param_1[2].create_event + 0x50) == 0) && (param_1[1].location.position.y != 0.0))
      && (param_1[1].location.position.z == 0.0)) &&
     (iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704), iVar3 == 0)
     ) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
    this_ptr = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&local_28);
    iStack_10 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr);
    iVar3 = 0;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
              (DAT_005ae704,(SMRGLTextureBasic *)(param_1[1].actor_name + 0xc));
    pfVar5 = &param_1[2].platform_position_delta.y;
    vertex_positions = (CVector3i *)(param_1[3].create_event + 0x48);
    pCVar4 = vertex_positions;
    if (0 < *(int *)(param_1[8].create_event + 0x34)) {
      do {
        pCVar4->x = (int)ROUND(*pfVar5 * _DAT_0059e390);
        pCVar4->y = (int)ROUND(pfVar5[1] * _DAT_0059e390);
        pCVar4->z = (int)ROUND(pfVar5[2] * _DAT_0059e390);
        iVar3 = iVar3 + 1;
        pfVar5 = pfVar5 + 3;
        pCVar4 = pCVar4 + 1;
      } while (iVar3 < *(int *)(param_1[8].create_event + 0x34));
    }
    core_set_cpp_CDemonSet_rotateVerticies_FUN_0050c200
              (0x01E57284,*(uint *)(param_1[8].create_event + 0x34),vertex_positions);
    lVar1 = (longlong)(0xffff - _DAT_01c038f4) * (longlong)(int)param_1[1].location.position.y;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
              (DAT_005ae704,(uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    pfVar5 = (float *)(param_1[5].actor_name + 0x14);
    core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0
              (0x01E57284,*(int *)(param_1[8].create_event + 0x34),
               *(int *)(param_1[8].create_event + 0x38),pfVar5,vertex_positions,4,(CVector3i *)0x0);
    iVar3 = 0;
    pCVar6 = param_1;
    if (0 < *(int *)(param_1[8].create_event + 0x38)) {
      do {
        pCVar2 = DAT_005ae704;
        pCVar6[5].actor_name[0x1c] = '\0';
        pCVar6[5].actor_name[0x1d] = '\0';
        pCVar6[5].actor_name[0x1e] = '\0';
        pCVar6[5].actor_name[0x1f] = '\0';
        pCVar6[5].location.position.x = 0.0;
        iVar3 = iVar3 + 1;
        pCVar6[5].location.position.y = 0.0;
        pCVar6[5].location.position.z = 0.0;
        engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370(pCVar2,pfVar5);
        pfVar5 = pfVar5 + 0x12;
        pCVar6 = (CDemonActor *)((pCVar6->orient_matrix).m + 1);
      } while (iVar3 < *(int *)(param_1[8].create_event + 0x38));
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
    return iStack_10;
  }
  return 0;
}
