// Name: core_bugs.cpp_CBugs_renderOpaque_FUN_004251b0
// Address: 004251b0
// MANUAL RECONSTRUCTION
// Address Range: [[004251b0, 0042533d]]
// Convention: __cdecl
// Signature: int __cdecl core_bugs_cpp_CBugs_renderOpaque_FUN_004251b0(CBugs *this_ptr)

#include "nocturne.h"

int __cdecl core_bugs_cpp_CBugs_renderOpaque_FUN_004251b0(CBugs *this_ptr)

{
  int iVar1;
  CBoundingBox3D *this_ptr_00;
  int iVar2;
  CVector3f *rotation;
  CVector3f *position;
  int iVar3;
  CBoundingBox3D local_44;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  
  if ((this_ptr->base).base.render_active == 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
    if (iVar1 == 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
      this_ptr_00 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                              ((CDemonActor *)this_ptr,&local_44);
      iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
      if (iVar2 != 0) {
        iVar3 = 0;
        if (0 < this_ptr->count) {
          position = &this_ptr->bugs[0].orientation;
          rotation = &this_ptr->bugs[0].position;
          do {
            engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                      (g_CDemonRendererPtr2,position,rotation);
            CStack_20.x = (this_ptr->base).base.base.location.position.x + rotation->x;
            CStack_20.y = (this_ptr->base).base.base.location.position.y + rotation->y;
            CStack_20.z = (this_ptr->base).base.base.location.position.z + rotation->z;
            CStack_2c = CStack_20;
            core_set_cpp_CDemonSet_cacheMirrorLighting_FUN_00570cd0(g_CDemonSetPtr,&CStack_2c);
            engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
                      (g_CDemonRendererPtr2,0xffff);
            core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                      (this_ptr->models + this_ptr->bugs[iVar3].model_index,0.0,0x2e7);
            engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640(g_CDemonRendererPtr2);
            position = (CVector3f *)&position[5].y;
            iVar3 = iVar3 + 1;
            rotation = (CVector3f *)&rotation[5].y;
          } while (iVar3 < this_ptr->count);
        }
        core_set_cpp_CDemonSet_cacheMirrorLighting_FUN_00570cd0(g_CDemonSetPtr,(CVector3f *)0x0);
      }
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
      return iVar2;
    }
  }
  return 0;
}
