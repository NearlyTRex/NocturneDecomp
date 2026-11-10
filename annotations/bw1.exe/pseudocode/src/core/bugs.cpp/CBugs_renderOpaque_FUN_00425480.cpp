// Name: core_bugs.cpp_CBugs_renderOpaque_FUN_00425480
// Address: 00425480
// Address Range: [[00425480, 0042564e]]
// Convention: __cdecl
// Signature: int __cdecl core_bugs_cpp_CBugs_renderOpaque_FUN_00425480(CBugs *this_ptr)

#include "nocturne.h"

int __cdecl core_bugs_cpp_CBugs_renderOpaque_FUN_00425480(CBugs *this_ptr)

{
  int iVar1;
  CVector3f *translation;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1028 [1000];
  uint auStack_58 [6];
  CVector3f CStack_40;
  float fStack_34;
  float afStack_30 [2];
  CVector3f CStack_28;
  int iStack_1c;
  CKeyFramedModelInstance *pCStack_18;
  SBug *pSStack_14;
  SBug *pSStack_10;
  CVector3f *pCStack_c;
  CLocation *pCStack_8;
  
  bVar4 = 0;
  if ((this_ptr->base).base.render_active == 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
    if (iVar1 == 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087b0((CDemonActor *)this_ptr);
      (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                ((CDemonActor *)this_ptr,(CBoundingBox3D *)0x0);
      puVar2 = (uint *)&stack0xffffff90;
      puVar3 = auStack_58;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
        puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
      }
      iStack_1c = core_box_cpp_FUN_004207b0(auStack_58);
      if (iStack_1c != 0) {
        iVar1 = 0;
        if (0 < this_ptr->count) {
          pCStack_18 = this_ptr->models;
          pSStack_14 = this_ptr->bugs;
          pCStack_8 = &(this_ptr->base).base.base.location;
          pCStack_c = (CVector3f *)&this_ptr->bugs[0].field_0x14;
          translation = (CVector3f *)&this_ptr->bugs[0].field_0x8;
          do {
            pSStack_10 = pSStack_14 + iVar1;
            engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
                      (DAT_00612560,pCStack_c,translation);
            fStack_34 = (pCStack_8->position).x + translation->x;
            afStack_30[0] = (pCStack_8->position).y + translation->y;
            afStack_30[1] = (pCStack_8->position).z + translation->z;
            CStack_40.x = fStack_34;
            *(float *)((int)&CStack_40 + (uint)bVar4 * -8 + 4) = afStack_30[(uint)bVar4 * -2];
            *(float *)((int)&CStack_40 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
                 afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
            if (&CStack_28 != &CStack_40) {
              CStack_28.x = CStack_40.x;
              CStack_28.y = CStack_40.y;
              CStack_28.z = CStack_40.z;
            }
            core_set_cpp_CDemonSet_cacheMirrorLighting_FUN_005557a0(g_CDemonSetPtr,&CStack_28);
            engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,0xffff);
            core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
                      (pCStack_18 + *(int *)&pSStack_10->field_0x4,0.0,0x2e7);
            engine_matrix_c_pop_FUN_004839a0();
            pCStack_c = (CVector3f *)&pCStack_c[5].y;
            iVar1 = iVar1 + 1;
            translation = (CVector3f *)&translation[5].y;
          } while (iVar1 < this_ptr->count);
        }
        core_set_cpp_CDemonSet_cacheMirrorLighting_FUN_005557a0(g_CDemonSetPtr,(CVector3f *)0x0);
      }
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_004087f0((CDemonActor *)this_ptr);
      return iStack_1c;
    }
  }
  return 0;
}
