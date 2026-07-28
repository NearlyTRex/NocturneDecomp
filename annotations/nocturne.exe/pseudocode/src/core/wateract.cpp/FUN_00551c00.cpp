// Name: core_wateract.cpp_FUN_00551c00
// Address: 00551c00
// Address Range: [[00551c00, 00551e35]]
// Convention: unknown
// Signature: int core_wateract_cpp_FUN_00551c00(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_wateract_cpp_FUN_00551c00(CDemonActor *param_1)

{
  SRenderVertex *pSVar1;
  longlong lVar2;
  int iVar3;
  CBoundingBox3D *this_ptr;
  int *piVar4;
  CDemonActor **ppCVar5;
  SMRGLPrimitivePoly *poly;
  CDemonActor *vertex_position;
  int iVar6;
  CBoundingBox3D local_24;
  int iStack_c;
  
  iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar3 == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
    this_ptr = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&local_24);
    iStack_c = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr);
    if (iStack_c != 0) {
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
                (DAT_005ae704,*(int *)(param_1[1].actor_name + 0xc));
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
      iVar3 = 0;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
                (DAT_005ae704,(SMRGLTextureBasic *)(&DAT_005c13cc + param_1[0x20d].scale.z * 0x18));
      if (0 < param_1[1].previous_transform_state.dirty_flags) {
        piVar4 = (int *)&DAT_02dda6b8;
        ppCVar5 = &param_1[1].next_actor;
        do {
          *piVar4 = (int)ROUND((float)*ppCVar5 * _DAT_005a3ed0);
          piVar4[1] = (int)ROUND((float)ppCVar5[1] * _DAT_005a3ed0);
          piVar4[2] = (int)ROUND((float)*(UActorVTable *)(ppCVar5 + 2) * _DAT_005a3ed0);
          iVar3 = iVar3 + 1;
          ppCVar5 = ppCVar5 + 8;
          piVar4 = piVar4 + 3;
        } while (iVar3 < param_1[1].previous_transform_state.dirty_flags);
      }
      iVar3 = 0;
      core_set_cpp_CDemonSet_rotateVerticies_FUN_0050c200
                (0x01E57284,param_1[1].previous_transform_state.dirty_flags,&DAT_02dda6b8);
      if (0 < param_1[1].previous_transform_state.dirty_flags) {
        vertex_position = param_1 + 2;
        iVar6 = 0;
        do {
          core_set_cpp_CDemonSet_computeVertexOmniLighting_FUN_0050be20
                    (0x01E57284,(CVector3f *)vertex_position,(CVector3f *)&DAT_02dd1184,iVar3);
          pSVar1 = DAT_005ae704->vertex_buffer_ptr;
          lVar2 = (longlong)((int)param_1[1].previous_transform_state.orientation.vec.x << 8) *
                  (longlong)*(int *)((int)&pSVar1->r + iVar6);
          *(uint *)((int)&pSVar1->r + iVar6) =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          lVar2 = (longlong)((int)param_1[1].previous_transform_state.orientation.vec.y << 8) *
                  (longlong)*(int *)((int)&pSVar1->g + iVar6);
          *(uint *)((int)&pSVar1->g + iVar6) =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          lVar2 = (longlong)((int)param_1[1].previous_transform_state.orientation.vec.z << 8) *
                  (longlong)*(int *)((int)&pSVar1->b + iVar6);
          *(uint *)((int)&pSVar1->b + iVar6) =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          iVar3 = iVar3 + 1;
          vertex_position = (CDemonActor *)&vertex_position->location;
          iVar6 = iVar6 + 0x30;
        } while (iVar3 < param_1[1].previous_transform_state.dirty_flags);
      }
      poly = (SMRGLPrimitivePoly *)&param_1[0x61].orient_matrix.m[1].z;
      if (*(int *)(param_1[1].actor_name + 0xc) < 0xfde9) {
        iVar3 = 0;
        if (0 < *(int *)param_1[0x20d].footstep_sound_code) {
          do {
            iVar3 = iVar3 + 1;
            engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460
                      (DAT_005ae704,poly,0x267);
            poly = (SMRGLPrimitivePoly *)(poly->vertices + 4);
          } while (iVar3 < *(int *)param_1[0x20d].footstep_sound_code);
        }
      }
      else {
        core_set_cpp_FUN_0050ddd0
                  (0x01E57284,poly,*(uint *)param_1[0x20d].footstep_sound_code,0xffffffff);
      }
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,0);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
    return iStack_c;
  }
  return 0;
}
