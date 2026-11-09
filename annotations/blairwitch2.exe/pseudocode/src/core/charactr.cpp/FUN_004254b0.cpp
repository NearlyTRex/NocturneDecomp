// Name: core_charactr.cpp_FUN_004254b0
// Address: 004254b0
// Address Range: [[004254b0, 004259f2]]
// Convention: unknown
// Signature: int core_charactr_cpp_FUN_004254b0(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_charactr_cpp_FUN_004254b0(CCharacter *param_1)

{
  int iVar1;
  CVector3i *input;
  uint *puVar2;
  float *pfVar3;
  uint *puVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  float afStackY_1054 [988];
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float afStack_68 [5];
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_24;
  int *piStack_20;
  int *piStack_1c;
  int iStack_18;
  
  bVar5 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80(DAT_0060b280);
  if (iVar1 == 0) {
    *(uint *)&param_1->field_0x2828 = 0;
  }
  if (*(int *)&param_1->field_0x2568 == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)param_1);
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x24))(param_1,0);
    puVar2 = (uint *)&stack0xffffff40;
    puVar4 = (uint *)&stack0xffffff28;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    iStack_24 = core_box_cpp_FUN_0041a840(&stack0xffffff28);
    if (iStack_24 != 0) {
      *(uint *)&param_1->field_0x2828 = 1;
      core_charactr_cpp_FUN_00424bd0(param_1);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)param_1);
      iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
      if ((iVar1 == 0) && (*(int *)&g_CGameHookPtr->field_0xc != 0)) {
        afStack_68[2] = 0.0;
        afStack_68[3] = 0.0;
        afStack_68[4] = 0.0;
        piStack_1c = (int *)unkafter_special_cpp_FUN_0059e0f0(&param_1->field_0x3058);
        piStack_20 = piStack_1c;
        for (; (piStack_1c != (int *)0x0 && (*piStack_1c != 0)); piStack_1c = (int *)piStack_1c[0xe]
            ) {
          pfVar3 = (float *)(piStack_1c + (uint)bVar5 * -2 + 3);
          fStack_6c = (float)piStack_1c[2];
          afStack_68[(uint)bVar5 * -2] = *pfVar3;
          afStack_68[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] = pfVar3[(uint)bVar5 * -2 + 1];
          afStack_68[0] = 0.0;
          iStack_3c = (int)ROUND(afStack_68[2] * _DAT_005f4060);
          iStack_38 = (int)ROUND(afStack_68[3] * _DAT_005f4060);
          iStack_34 = (int)ROUND(afStack_68[4] * _DAT_005f4060);
          engine_special_cpp_FUN_0055d723
                    (*(SProjectedVertex **)DAT_0060b280,(CVector3i *)&iStack_3c);
          iStack_48 = (int)ROUND(fStack_6c * _DAT_005f4060);
          iStack_44 = (int)ROUND(afStack_68[0] * _DAT_005f4060);
          iStack_40 = (int)ROUND(afStack_68[1] * _DAT_005f4060);
          engine_special_cpp_FUN_0055d723
                    ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x30),(CVector3i *)&iStack_48);
          _DAT_01c35e60 = 1;
          engine_3d_c_FUN_00407c40(0,1);
          _DAT_01c35e60 = 2;
          if (piStack_1c == piStack_20) {
            _DAT_01c35e60 = 0xfc;
          }
          fVar6 = (float10)fsin((float10)(float)piStack_1c[8] -
                                (float10)(float)piStack_1c[9] * (float10)_DAT_005ccd26);
          fStack_6c = (float)(fVar6 * (float10)(float)piStack_1c[1]);
          fVar6 = (float10)fcos((float10)(float)piStack_1c[8] -
                                (float10)(float)piStack_1c[9] * (float10)_DAT_005ccd26);
          afStack_68[1] = (float)(fVar6 * (float10)(float)piStack_1c[1]);
          iStack_a8 = (int)ROUND(fStack_6c * _DAT_005f4060);
          iStack_a4 = (int)ROUND(afStack_68[0] * _DAT_005f4060);
          iStack_a0 = (int)ROUND(afStack_68[1] * _DAT_005f4060);
          engine_special_cpp_FUN_0055d723
                    ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x60),(CVector3i *)&iStack_a8);
          engine_3d_c_FUN_00407c40(0,2);
          fVar6 = (float10)fsin((float10)(float)piStack_1c[9] * (float10)_DAT_005ccd26 +
                                (float10)(float)piStack_1c[8]);
          fStack_6c = (float)(fVar6 * (float10)(float)piStack_1c[1]);
          fVar6 = (float10)fcos((float10)(float)piStack_1c[9] * (float10)_DAT_005ccd26 +
                                (float10)(float)piStack_1c[8]);
          afStack_68[1] = (float)(fVar6 * (float10)(float)piStack_1c[1]);
          iStack_9c = (int)ROUND(fStack_6c * _DAT_005f4060);
          iStack_98 = (int)ROUND(afStack_68[0] * _DAT_005f4060);
          iStack_94 = (int)ROUND(afStack_68[1] * _DAT_005f4060);
          engine_special_cpp_FUN_0055d723
                    ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x90),(CVector3i *)&iStack_9c);
          engine_3d_c_FUN_00407c40(0,3);
          if (&fStack_6c != (float *)(piStack_1c + 2)) {
            fStack_6c = (float)piStack_1c[2];
            afStack_68[0] = (float)piStack_1c[3];
            afStack_68[1] = (float)piStack_1c[4];
          }
          iVar1 = 0;
          do {
            fStack_74 = 0.0;
            fVar6 = (float10)fsin((float10)iVar1 * (float10)_DAT_005ccd2a);
            fVar7 = (float10)fcos((float10)iVar1 * (float10)_DAT_005ccd2a);
            fStack_78 = (float)(fVar6 * (float10)(float)piStack_1c[10] + (float10)fStack_6c);
            fStack_70 = (float)(fVar7 * (float10)(float)piStack_1c[10] + (float10)afStack_68[1]);
            iStack_18 = iVar1;
            if (iVar1 == 0) {
              iStack_90 = (int)ROUND(fStack_78 * _DAT_005f4060);
              iStack_8c = (int)ROUND(_DAT_005f4060 * 0.0);
              iStack_88 = (int)ROUND(fStack_70 * _DAT_005f4060);
              input = (CVector3i *)&iStack_90;
            }
            else {
              iStack_54 = (int)ROUND(fStack_78 * _DAT_005f4060);
              iStack_50 = (int)ROUND(_DAT_005f4060 * 0.0);
              iStack_4c = (int)ROUND(fStack_70 * _DAT_005f4060);
              engine_special_cpp_FUN_0055d723
                        ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x30),(CVector3i *)&iStack_54);
              _DAT_01c35e60 = 4;
              engine_3d_c_FUN_00407c40(0,1);
              iStack_84 = (int)ROUND(fStack_78 * _DAT_005f4060);
              iStack_80 = (int)ROUND(fStack_74 * _DAT_005f4060);
              iStack_7c = (int)ROUND(fStack_70 * _DAT_005f4060);
              input = (CVector3i *)&iStack_84;
            }
            engine_special_cpp_FUN_0055d723(*(SProjectedVertex **)DAT_0060b280,input);
            iVar1 = iVar1 + 1;
          } while (iVar1 < 0x15);
          iVar1 = *(int *)DAT_0060b280;
          if ((*(byte *)(iVar1 + 0x43) & 0x80) == 0) {
            engine_2d_c_drawText_FUN_00401fe0
                      ((char *)*piStack_1c,*(int *)(iVar1 + 0x40) >> 0x10,
                       *(int *)(iVar1 + 0x44) >> 0x10);
          }
        }
      }
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)param_1);
      if ((_DAT_01d1cdc8 != 0) &&
         (iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280),
         iVar1 == 0)) {
        core_motion_cpp_FUN_005042e0
                  ((CMotionController *)&param_1->field_0x2b4,(CDemonActor *)param_1);
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x60))(param_1);
      }
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)param_1);
    return iStack_24;
  }
  return 0;
}
