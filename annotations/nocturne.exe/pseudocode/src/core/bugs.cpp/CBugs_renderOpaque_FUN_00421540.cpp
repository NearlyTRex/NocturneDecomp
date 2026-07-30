// Name: core_bugs.cpp_CBugs_renderOpaque_FUN_00421540
// Address: 00421540
// Address Range: [[00421540, 004216cf]]
// Convention: unknown
// Signature: int core_bugs_cpp_CBugs_renderOpaque_FUN_00421540(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int core_bugs_cpp_CBugs_renderOpaque_FUN_00421540(CDemonActor *param_1)

{
  CVector3f *pCVar1;
  int iVar2;
  CBoundingBox3D *this_ptr;
  CVector3f *rotation;
  CBoundingBox3D local_44;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  int iStack_14;
  EActorLifecycleState *pEStack_10;
  int *piStack_c;
  int *piStack_8;
  
  if (*(int *)(param_1[0x1b].create_event + 0x1c) == 0) {
    iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
    if (iVar2 == 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
      this_ptr = (*((param_1->vtable)._ub)->getBoundingBox)(param_1,&local_44);
      iStack_14 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr);
      if (iStack_14 != 0) {
        iVar2 = 0;
        if (0 < (int)param_1[0x90].location.position.z) {
          pEStack_10 = &param_1[0xdc].lifecycle_state;
          piStack_c = &param_1[0x90].location.area_id;
          pCVar1 = param_1[0x90].orient_matrix.m;
          rotation = (CVector3f *)((int)&param_1[0x90].orient + 4);
          do {
            piStack_8 = piStack_c + iVar2 * 0x10;
            engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                      (DAT_005ae704,(CVector3f *)&pCVar1->y,rotation);
            CStack_20.x = (param_1->location).position.x + rotation->x;
            CStack_20.y = (param_1->location).position.y + rotation->y;
            CStack_20.z = (param_1->location).position.z + rotation->z;
            if (&CStack_2c != &CStack_20) {
              CStack_2c.x = CStack_20.x;
              CStack_2c.y = CStack_20.y;
              CStack_2c.z = CStack_20.z;
            }
            core_set_cpp_FUN_0050e370(0x01E57284,&CStack_2c);
            engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,0xffff);
            core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
                      ((CKeyFramedModelInstance *)(pEStack_10 + piStack_8[1] * 0x5f),0.0,0x2e7);
            engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
            pCVar1 = (CVector3f *)(&pCVar1->y + 0xf);
            iVar2 = iVar2 + 1;
            rotation = (CVector3f *)&rotation[5].y;
          } while (iVar2 < (int)param_1[0x90].location.position.z);
        }
        core_set_cpp_FUN_0050e370(0x01E57284,(CVector3f *)0x0);
      }
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
      return iStack_14;
    }
  }
  return 0;
}
