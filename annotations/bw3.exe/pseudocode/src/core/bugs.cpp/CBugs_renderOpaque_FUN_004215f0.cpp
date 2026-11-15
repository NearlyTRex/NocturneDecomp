// Name: core_bugs.cpp_CBugs_renderOpaque_FUN_004215f0
// Address: 004215f0
// Address Range: [[004215f0, 004217be]]
// Convention: __cdecl
// Signature: int __cdecl core_bugs_cpp_CBugs_renderOpaque_FUN_004215f0(CBugs *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_bugs_cpp_CBugs_renderOpaque_FUN_004215f0(CBugs *this_ptr)

{
  int iVar1;
  CVector3f *translation;
  int unaff_ESI;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  CDemonActor *in_stack_0000000c;
  float afStackY_1020 [999];
  CBoundingBox3D CStack_50;
  CVector3f CStack_38;
  float fStack_2c;
  float afStack_28 [2];
  CVector3f CStack_20;
  int iStack_14;
  CKeyFramedModelInstance *pCStack_10;
  SBug *pSStack_c;
  SBug *pSStack_8;
  CVector3f *euler_angles;
  
  bVar4 = 0;
  if ((this_ptr->base).base.render_active == 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
    if (iVar1 == 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0((CDemonActor *)this_ptr);
      (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
      puVar2 = (uint *)&stack0xffffff98;
      puVar3 = (uint *)&stack0xffffffa8;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
        puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
      }
      iStack_14 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041daf0(&CStack_50,unaff_ESI);
      if (iStack_14 != 0) {
        iVar1 = 0;
        if (0 < this_ptr->count) {
          pCStack_10 = this_ptr->models;
          pSStack_c = this_ptr->bugs;
          euler_angles = &this_ptr->bugs[0].orientation;
          translation = &this_ptr->bugs[0].position;
          do {
            pSStack_8 = pSStack_c + iVar1;
            engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
                      (DAT_005f2afc,euler_angles,translation);
            fStack_2c = (this_ptr->base).base.base.location.position.x + translation->x;
            afStack_28[0] = (this_ptr->base).base.base.location.position.y + translation->y;
            afStack_28[1] = (this_ptr->base).base.base.location.position.z + translation->z;
            CStack_38.x = fStack_2c;
            *(float *)((int)&CStack_38 + (uint)bVar4 * -8 + 4) = afStack_28[(uint)bVar4 * -2];
            *(float *)((int)&CStack_38 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
                 afStack_28[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
            if (&CStack_20 != &CStack_38) {
              CStack_20.x = CStack_38.x;
              CStack_20.y = CStack_38.y;
              CStack_20.z = CStack_38.z;
            }
            core_set_cpp_CDemonSet_cacheMirrorLighting_FUN_0053b130(g_CDemonSetPtr,&CStack_20);
            engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,0xffff);
            core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
                      (pCStack_10 + pSStack_8->model_index,0.0,0x2e7);
            engine_drender_cpp_pop_FUN_0046d080();
            euler_angles = (CVector3f *)&euler_angles[5].y;
            iVar1 = iVar1 + 1;
            translation = (CVector3f *)&translation[5].y;
          } while (iVar1 < *(int *)(in_stack_0000000c[0x9b].actor_name + 0x10));
        }
        core_set_cpp_CDemonSet_cacheMirrorLighting_FUN_0053b130(g_CDemonSetPtr,(CVector3f *)0x0);
      }
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(in_stack_0000000c);
      return iStack_14;
    }
  }
  return 0;
}
