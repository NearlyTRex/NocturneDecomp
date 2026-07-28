// Name: core_curtain.cpp_FUN_0043f330
// Address: 0043f330
// Address Range: [[0043f330, 0043f602]]
// Convention: unknown
// Signature: int core_curtain_cpp_FUN_0043f330(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_curtain_cpp_FUN_0043f330(CDemonActor *param_1)

{
  int *piVar1;
  bool bVar2;
  CDemonRenderer *this_ptr;
  CBoundingBox3D *pCVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  float *face_data;
  CBoundingBox3D local_3c;
  CBoundingBox3D CStack_24;
  int iStack_c;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
  pCVar3 = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&local_3c);
  iStack_c = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(pCVar3);
  this_ptr = DAT_005ae704;
  if (iStack_c == 0) goto LAB_0043f5f0;
  param_1[0x4d7].is_renderable = 1;
  iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(this_ptr);
  if (((iVar4 != 0) && (param_1[1].location.position.z != 0.0)) &&
     (param_1[0x4d7].is_transparent == 0)) {
    pCVar3 = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&CStack_24);
    core_box_cpp_CBoundingBox3D_render_FUN_0041dcc0(pCVar3);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
    return 1;
  }
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
            (DAT_005ae704,(int)param_1[1].location.position.y);
  iVar4 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (DAT_005ae704,(SMRGLTextureBasic *)(param_1[1].actor_name + 0xc));
  piVar6 = (int *)(param_1[1].create_event + 0x38);
  piVar1 = &param_1[0x15a].scale.y;
  piVar5 = piVar1;
  if (0 < *(int *)(param_1[1].create_event + 0x34)) {
    do {
      *piVar5 = (int)ROUND((float)*piVar6 * _DAT_0059bc70);
      piVar5[1] = (int)ROUND((float)piVar6[1] * _DAT_0059bc70);
      piVar5[2] = (int)ROUND((float)piVar6[2] * _DAT_0059bc70);
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 0x1d;
      piVar5 = piVar5 + 3;
    } while (iVar4 < *(int *)(param_1[1].create_event + 0x34));
  }
  core_set_cpp_CDemonSet_rotateVerticies_FUN_0050c200
            (0x01E57284,*(uint *)(param_1[1].create_event + 0x34),piVar1);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,1);
  bVar2 = 0 < _DAT_01c039c0;
  if (param_1[1].location.position.z == 0.0) {
    bVar2 = true;
LAB_0043f474:
    face_data = (float *)(param_1[0x17e].create_event + 0x34);
    core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0
              (0x01E57284,*(int *)(param_1[1].create_event + 0x34),
               param_1[0x15a].process_disabled * param_1[0x15a].scale.x * 2,face_data,
               (CVector3i *)&param_1[0x15a].scale.y,4,(CVector3i *)0x0);
    if ((int)param_1[1].location.position.y < 0xfde9) {
      for (iVar4 = 0; iVar4 < param_1[0x15a].process_disabled * param_1[0x15a].scale.x * 2;
          iVar4 = iVar4 + 1) {
        engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370(DAT_005ae704,face_data);
        face_data = face_data + 0x12;
      }
    }
    else {
      core_set_cpp_FUN_0050ddd0
                (0x01E57284,face_data,param_1[0x15a].process_disabled * param_1[0x15a].scale.x * 2
                 ,0xffffffff);
    }
  }
  else if (_DAT_01c039c0 < 0) goto LAB_0043f474;
  if (bVar2) {
    piVar6 = (int *)(param_1[0x32b].actor_name + 0x1c);
    core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0
              (0x01E57284,*(int *)(param_1[1].create_event + 0x34),
               param_1[0x15a].process_disabled * param_1[0x15a].scale.x * 2,piVar6,
               (CVector3i *)&param_1[0x15a].scale.y,4,(CVector3i *)0x0);
    if ((int)param_1[1].location.position.y < 0xfde9) {
      for (iVar4 = 0; iVar4 < param_1[0x15a].process_disabled * param_1[0x15a].scale.x * 2;
          iVar4 = iVar4 + 1) {
        engine_drender_cpp_CDemonRenderer_renderBlendedPoly_FUN_00460370(DAT_005ae704,piVar6);
        piVar6 = piVar6 + 0x12;
      }
    }
    else {
      core_set_cpp_FUN_0050ddd0
                (0x01E57284,piVar6,param_1[0x15a].process_disabled * param_1[0x15a].scale.x * 2,
                 0xffffffff);
    }
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,0);
LAB_0043f5f0:
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  return iStack_c;
}
