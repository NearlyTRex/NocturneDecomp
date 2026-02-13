// Name: core_bugs.cpp_CBugs_renderOpaque_FUN_004251b0
// Address: 004251b0
// Address Range: [[004251b0, 004252f7] [00425314, 0042533d]]
// Convention: __cdecl
// Signature: int __cdecl core_bugs_cpp_CBugs_renderOpaque_FUN_004251b0(CBugs *this_ptr)

#include "nocturne.h"

int __cdecl core_bugs_cpp_CBugs_renderOpaque_FUN_004251b0(CBugs *this_ptr)

{
  int iVar1;
  CBoundingBox3D *this_ptr_00;
  CVector3i *rotation;
  CVector3i *position;
  CDemonActor *in_stack_0000000c;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  int iStack_c;
  CKeyFramedModelInstance *pCStack_8;
  
  if ((this_ptr->base).base.render_active == 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
    if (iVar1 == 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
      this_ptr_00 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                              ((CDemonActor *)this_ptr,(CBoundingBox3D *)&stack0xffffffbc);
      iStack_c = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
      if (iStack_c != 0) {
        iVar1 = 0;
        if (0 < this_ptr->count) {
          pCStack_8 = this_ptr->models;
          position = (CVector3i *)&this_ptr->bugs[0].orientation;
          rotation = (CVector3i *)&this_ptr->bugs[0].position;
          do {
            engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                      (g_CDemonRendererPtr2,position,rotation);
            fStack_18 = (this_ptr->base).base.base.location.position.x + (float)rotation->x;
            fStack_14 = (this_ptr->base).base.base.location.position.y + (float)rotation->y;
            fStack_10 = (this_ptr->base).base.base.location.position.z + (float)rotation->z;
            if (&fStack_24 != &fStack_18) {
              fStack_24 = fStack_18;
              fStack_20 = fStack_14;
              fStack_1c = fStack_10;
            }
            core_set_cpp_CDemonSet_FUN_00570cd0(g_CDemonSetPtr);
            engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
                      (g_CDemonRendererPtr2,0xffff);
            core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                      (pCStack_8 + this_ptr->bugs[iVar1].model_index,0.0,0x2e7);
            engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
            position = (CVector3i *)&position[5].y;
            iVar1 = iVar1 + 1;
            rotation = (CVector3i *)&rotation[5].y;
          } while (iVar1 < in_stack_0000000c[0x8d].is_editor_hidden);
        }
        core_set_cpp_CDemonSet_FUN_00570cd0(g_CDemonSetPtr);
      }
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_0000000c);
      return iStack_c;
    }
  }
  return 0;
}
