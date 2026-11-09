// Name: core_bugs.cpp_FUN_004215f0
// Address: 004215f0
// Address Range: [[004215f0, 004217be]]
// Convention: unknown
// Signature: int core_bugs_cpp_FUN_004215f0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int core_bugs_cpp_FUN_004215f0(CDemonActor *param_1)

{
  int iVar1;
  CVector3f *translation;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1028 [1000];
  uint auStack_58 [6];
  float fStack_40;
  float afStack_3c [4];
  float fStack_2c;
  byte auStack_28 [12];
  int iStack_1c;
  byte *puStack_18;
  byte *puStack_14;
  byte *puStack_10;
  CVector3f *pCStack_c;
  float *pfStack_8;
  
  bVar4 = 0;
  if (*(int *)&param_1[0x1b].field_0xb4 == 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
    if (iVar1 == 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(param_1);
      (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
      puVar2 = (uint *)&stack0xffffff90;
      puVar3 = auStack_58;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
        puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
      }
      iStack_1c = core_box_cpp_FUN_0041daf0(auStack_58);
      if (iStack_1c != 0) {
        iVar1 = 0;
        if (0 < *(int *)&param_1[0x9b].field_0x10) {
          puStack_18 = &param_1[0xe5].field_0xa8;
          puStack_14 = &param_1[0x9b].field_0x14;
          pfStack_8 = (float *)&param_1->field_0x20;
          pCStack_c = (CVector3f *)&param_1[0x9b].field_0x28;
          translation = (CVector3f *)&param_1[0x9b].field_0x1c;
          do {
            puStack_10 = puStack_14 + iVar1 * 0x40;
            engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
                      (DAT_005f2afc,pCStack_c,translation);
            afStack_3c[2] = *pfStack_8 + *(float *)translation;
            afStack_3c[3] = pfStack_8[1] + *(float *)&translation->field_0x4;
            fStack_2c = pfStack_8[2] + *(float *)&translation->field_0x8;
            fStack_40 = *pfStack_8 + *(float *)translation;
            afStack_3c[(uint)bVar4 * -2] = afStack_3c[(uint)bVar4 * -2 + 3];
            afStack_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
                 afStack_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
            if ((float *)auStack_28 != &fStack_40) {
              auStack_28._0_4_ = fStack_40;
              auStack_28._4_4_ = afStack_3c[0];
              auStack_28._8_4_ = afStack_3c[1];
            }
            core_set_cpp_FUN_0053b130(g_CDemonSetPtr,(CVector3f *)auStack_28);
            engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,0xffff);
            core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
                      ((CKeyFramedModelInstance *)(puStack_18 + *(int *)(puStack_10 + 4) * 0x17c),
                       0.0,0x2e7);
            engine_matrix_c_pop_FUN_0046d080();
            pCStack_c = (CVector3f *)&pCStack_c[5].field_0x4;
            iVar1 = iVar1 + 1;
            translation = (CVector3f *)&translation[5].field_0x4;
          } while (iVar1 < *(int *)&param_1[0x9b].field_0x10);
        }
        core_set_cpp_FUN_0053b130(g_CDemonSetPtr,(CVector3f *)0x0);
      }
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(param_1);
      return iStack_1c;
    }
  }
  return 0;
}
