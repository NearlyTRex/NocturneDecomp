// Name: core_motion.cpp_FUN_005254b0
// Address: 005254b0
// Address Range: [[005254b0, 0052568f]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_FUN_005254b0(CMotionController *this_ptr,CDemonActor *actor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_motion_cpp_FUN_005254b0(CMotionController *this_ptr,CDemonActor *actor)

{
  char cVar1;
  SMotion *pSVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  double dVar10;
  char local_c0 [100];
  uint local_5c [6];
  uint local_44 [4];
  float local_34;
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  uint local_18;
  int local_14;
  
  bVar9 = 0;
  if ((_DAT_01d39d34 != 0) &&
     (local_20 = (float)engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560),
     local_20 == 0.0)) {
    (**(code **)(*(int *)&actor->field_0x154 + 0x1c))();
    puVar7 = local_5c;
    puVar8 = local_44;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
    }
    local_1c = local_34;
    local_18 = 0;
    local_2c = (int)ROUND(local_20 * _DAT_006042c0);
    local_28 = (int)ROUND(local_34 * _DAT_006042c0);
    local_24 = (int)ROUND(_DAT_006042c0 * 0.0);
    engine_special_cpp_FUN_00580173
              ((SProjectedVertex *)(*(int *)DAT_00612560 + 0xea5d0),(CVector3i *)&local_2c);
    iVar5 = *(int *)DAT_00612560;
    if ((*(byte *)(iVar5 + 0xea5e3) & 0x80) == 0) {
      iVar6 = *(int *)(iVar5 + 0xea5e4) >> 0x10;
      local_14 = (*(int *)(iVar5 + 0xea5e0) >> 0x10) + -0x23;
      engine_2d_c_drawText_FUN_00401fe0((char *)actor,local_14,iVar6 + -0x21);
      if ((*(int *)&this_ptr->field_0x28 < 0) ||
         (pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(this_ptr),
         *(int *)(pSVar2 + 0x24) == *(int *)&this_ptr->field_0x28)) {
        pcVar4 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_00524a10(this_ptr);
        pcVar3 = local_c0;
        do {
          cVar1 = *pcVar4;
          *pcVar3 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar3[1] = cVar1;
          pcVar3 = pcVar3 + 2;
        } while (cVar1 != '\0');
      }
      else {
        core_motion_cpp_FUN_00524a00(this_ptr);
        pcVar3 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_00524a10(this_ptr);
        FUN_005bfb40(local_c0,"%s -> %s",pcVar3);
      }
      iVar5 = local_14;
      engine_2d_c_drawText_FUN_00401fe0(local_c0,local_14,iVar6 + -0x16);
      dVar10 = (double)*(float *)&this_ptr->field_0x8;
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(this_ptr);
      FUN_005bfb40(local_c0,"%s : %5.2f",pSVar2,dVar10);
      engine_2d_c_drawText_FUN_00401fe0(local_c0,iVar5,iVar6 + -0xb);
      return;
    }
  }
  return;
}
