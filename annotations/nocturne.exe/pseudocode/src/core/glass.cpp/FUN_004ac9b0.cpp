// Name: core_glass.cpp_FUN_004ac9b0
// Address: 004ac9b0
// Address Range: [[004ac9b0, 004acb57]]
// Convention: unknown
// Signature: void core_glass_cpp_FUN_004ac9b0(CDemonActor *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_glass_cpp_FUN_004ac9b0(CDemonActor *param_1,int param_2)

{
  CDemonRenderer *this_ptr;
  CBoundingBox3D *this_ptr_00;
  float *pfVar1;
  char *pcVar2;
  CDemonActor *pCVar3;
  int iVar4;
  SMRGLPrimitivePoly *poly;
  SMRGLTextureBasic *texture;
  CBoundingBox3D local_20;
  
  if (*(int *)(param_1[2].create_event + 0x50) == 0) {
    if (((param_2 != 0) && (param_1[1].location.position.z != 0.0)) &&
       (*(int *)(param_1[1].create_event + 0x18) != 0)) {
      core_glass_cpp_FUN_004ac7c0(param_1);
      return;
    }
  }
  else if ((param_2 != 0) || (*(int *)(param_1[8].create_event + 0x3c) != 0)) {
    param_1[8].create_event[0x3c] = '\0';
    param_1[8].create_event[0x3d] = '\0';
    param_1[8].create_event[0x3e] = '\0';
    param_1[8].create_event[0x3f] = '\0';
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
    this_ptr_00 = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&local_20);
    core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
    if (param_1[1].location.position.z == 0.0) {
      texture = (SMRGLTextureBasic *)(param_1[1].actor_name + 0xc);
    }
    else {
      texture = (SMRGLTextureBasic *)(param_1[2].create_event + 0x54);
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,texture);
    pfVar1 = &param_1[2].platform_position_delta.y;
    iVar4 = 0;
    pcVar2 = param_1[3].create_event + 0x48;
    if (0 < *(int *)(param_1[8].create_event + 0x34)) {
      do {
        *(int *)pcVar2 = (int)ROUND(*pfVar1 * _DAT_0059e390);
        *(int *)(pcVar2 + 4) = (int)ROUND(pfVar1[1] * _DAT_0059e390);
        *(int *)(pcVar2 + 8) = (int)ROUND(pfVar1[2] * _DAT_0059e390);
        iVar4 = iVar4 + 1;
        pfVar1 = pfVar1 + 3;
        pcVar2 = pcVar2 + 0xc;
      } while (iVar4 < *(int *)(param_1[8].create_event + 0x34));
    }
    iVar4 = 0;
    core_set_cpp_CDemonSet_rotateVerticies_FUN_0050c200
              (0x01E57284,*(uint *)(param_1[8].create_event + 0x34),
               param_1[3].create_event + 0x48);
    if (0 < *(int *)(param_1[8].create_event + 0x38)) {
      poly = (SMRGLPrimitivePoly *)(param_1[5].actor_name + 0x14);
      pCVar3 = param_1;
      do {
        pCVar3[5].actor_name[0x1c] = '\0';
        this_ptr = DAT_005ae704;
        pCVar3[5].actor_name[0x1d] = '\0';
        pCVar3[5].actor_name[0x1e] = '\0';
        pCVar3[5].actor_name[0x1f] = '\0';
        pCVar3[5].location.position.x = 0.0;
        iVar4 = iVar4 + 1;
        pCVar3[5].location.position.y = 0.0;
        pCVar3[5].location.position.z = 0.0;
        pCVar3 = (CDemonActor *)((pCVar3->orient_matrix).m + 1);
        engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460(this_ptr,poly,0xc1);
        poly = (SMRGLPrimitivePoly *)(poly->vertices + 4);
      } while (iVar4 < *(int *)(param_1[8].create_event + 0x38));
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  }
  return;
}
