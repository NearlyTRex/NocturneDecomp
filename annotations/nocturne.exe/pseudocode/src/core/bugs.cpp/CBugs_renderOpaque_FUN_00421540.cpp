// Name: core_bugs.cpp_CBugs_renderOpaque_FUN_00421540
// Address: 00421540
// Address Range: [[00421540, 004216cf]]
// Convention: __cdecl
// Signature: int __cdecl core_bugs_cpp_CBugs_renderOpaque_FUN_00421540(CBugs *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_bugs_cpp_CBugs_renderOpaque_FUN_00421540(CBugs *this_ptr)

{
  int iVar1;
  CBoundingBox3D *this_ptr_00;
  CVector3f *rotation;
  CVector3f *position;
  CBoundingBox3D local_44;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  int iStack_14;
  CKeyFramedModelInstance *pCStack_10;
  SBug *pSStack_c;
  SBug *pSStack_8;
  
  if ((this_ptr->base).base.render_active == 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090
                      (g_CDemonRenderer_PTR_005ae704);
    if (iVar1 == 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20((CDemonActor *)this_ptr);
      this_ptr_00 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                              ((CDemonActor *)this_ptr,&local_44);
      iStack_14 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(this_ptr_00);
      if (iStack_14 != 0) {
        iVar1 = 0;
        if (0 < this_ptr->count) {
          pCStack_10 = this_ptr->models;
          pSStack_c = this_ptr->bugs;
          position = &this_ptr->bugs[0].orientation;
          rotation = &this_ptr->bugs[0].position;
          do {
            pSStack_8 = pSStack_c + iVar1;
            engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                      (g_CDemonRenderer_PTR_005ae704,position,rotation);
            CStack_20.x = (this_ptr->base).base.base.location.position.x + rotation->x;
            CStack_20.y = (this_ptr->base).base.base.location.position.y + rotation->y;
            CStack_20.z = (this_ptr->base).base.base.location.position.z + rotation->z;
            if (&CStack_2c != &CStack_20) {
              CStack_2c.x = CStack_20.x;
              CStack_2c.y = CStack_20.y;
              CStack_2c.z = CStack_20.z;
            }
            core_set_cpp_CDemonSet_FUN_0050e370(g_CDemonSet_PTR_005be368,&CStack_2c);
            engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
                      (g_CDemonRenderer_PTR_005ae704,0xffff);
            core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
                      (pCStack_10 + pSStack_8->model_index,0.0,0x2e7);
            engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
            position = (CVector3f *)&position[5].y;
            iVar1 = iVar1 + 1;
            rotation = (CVector3f *)&rotation[5].y;
          } while (iVar1 < this_ptr->count);
        }
        core_set_cpp_CDemonSet_FUN_0050e370(g_CDemonSet_PTR_005be368,(CVector3f *)0x0);
      }
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60((CDemonActor *)this_ptr);
      return iStack_14;
    }
  }
  return 0;
}
