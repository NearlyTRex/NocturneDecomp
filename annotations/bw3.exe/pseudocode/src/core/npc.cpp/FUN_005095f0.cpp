// Name: core_npc.cpp_FUN_005095f0
// Address: 005095f0
// Address Range: [[005095f0, 005097fc]]
// Convention: unknown
// Signature: undefined4 core_npc_cpp_FUN_005095f0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_npc_cpp_FUN_005095f0(CDemonActor *param_1)

{
  float fVar1;
  float fVar2;
  CDemonRenderer *this_ptr;
  int iVar3;
  CDemonActor *pCVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float10 fVar8;
  uint local_40 [6];
  uint local_28 [6];
  
  bVar7 = 0;
  if (((*(int *)&param_1[0x182].field_0x8 != -1) || (*(int *)&param_1[0x1d].field_0xb0 != 0)) ||
     (*(int *)&param_1[0x99].field_0x2c != 0)) {
    if ((*(int *)&param_1[0x1d].field_0xb0 != 0) &&
       (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                          (0x01C6E360,"heroCanSee"), iVar3 == 0)) {
      return 0;
    }
    if (*(int *)&param_1[0x181].field_0x154 == 0) {
      if (0.0 < *(float *)&param_1[0x182].field_0x10) {
        if (*(int *)&param_1[0x182].field_0x8 == 0) {
          fVar8 = ((float10)*(float *)&param_1[0x182].field_0x10 /
                  (float10)*(float *)&param_1[0x182].field_0x14) * (float10)_DAT_005cb5d0;
        }
        else {
          fVar8 = ((float10)1 -
                  (float10)*(float *)&param_1[0x182].field_0x10 /
                  (float10)*(float *)&param_1[0x182].field_0x14) * (float10)_DAT_005cb5d8;
        }
        round();
        *(int *)&param_1[0x182].field_0x4 = (int)ROUND(fVar8);
        iVar3 = 0;
        if (0 < *(int *)(param_1 + 0x23)) {
          fVar1 = (float)_DAT_005cb5e0;
          fVar2 = (float)_DAT_005cb5e8;
          pCVar4 = param_1;
          do {
            iVar3 = iVar3 + 1;
            *(float *)(*(int *)&pCVar4[0x24].field_0x3c + 0x37b18) =
                 ((float)*(int *)&param_1[0x182].field_0x4 + fVar2) * fVar1;
            pCVar4 = (CDemonActor *)&pCVar4->field_0x4;
          } while (iVar3 < *(int *)(param_1 + 0x23));
        }
      }
      core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(param_1);
      (**(code **)(*(int *)&param_1->field_0x154 + 0x1c))(param_1,0);
      puVar5 = local_28;
      puVar6 = local_40;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      iVar3 = core_box_cpp_FUN_0041daf0(local_40);
      this_ptr = DAT_005f2afc;
      if (iVar3 != 0) {
        iVar3 = *(int *)&param_1[0x182].field_0x4;
        *(uint *)&param_1[0x1d].field_0xc4 = 1;
        engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(this_ptr,iVar3);
        engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0
                  (DAT_005f2afc,(uint)(*(int *)&param_1[0x99].field_0x2c != 0));
        engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120(DAT_005f2afc,1);
        core_skeleton_cpp_FUN_0054e3a0((CDeformableModelInstance *)(param_1 + 1),-1,0x2e7,1,0);
        engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(DAT_005f2afc);
        if (_DAT_01d8e40c != 0) {
          core_motion_cpp_FUN_004fcdc0((CMotionController *)(param_1 + 1),param_1);
        }
      }
      core_cloth_cpp_CClothList_render_FUN_0043fc50
                ((CClothList *)(param_1 + 0x23),(CDeformableModelInstance *)0x0);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(param_1);
      return *(uint *)&param_1[0x1d].field_0xc4;
    }
  }
  return 0;
}
