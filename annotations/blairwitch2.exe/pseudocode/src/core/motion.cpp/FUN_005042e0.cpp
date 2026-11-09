// Name: core_motion.cpp_FUN_005042e0
// Address: 005042e0
// Address Range: [[005042e0, 005044bf]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_FUN_005042e0(CMotionController *this_ptr,CDemonActor *actor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_motion_cpp_FUN_005042e0(CMotionController *this_ptr,CDemonActor *actor)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
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
  if ((_DAT_01d1cdc8 != 0) &&
     (local_20 = (float)engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280),
     local_20 == 0.0)) {
    (**(code **)(*(int *)&actor->field_0x2b0 + 0x24))();
    puVar7 = local_5c;
    puVar8 = local_44;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
    }
    local_1c = local_34;
    local_18 = 0;
    local_2c = (int)ROUND(local_20 * _DAT_005fa5c0);
    local_28 = (int)ROUND(local_34 * _DAT_005fa5c0);
    local_24 = (int)ROUND(_DAT_005fa5c0 * 0.0);
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0xea5d0),(CVector3i *)&local_2c);
    iVar5 = *(int *)DAT_0060b280;
    if ((*(byte *)(iVar5 + 0xea5e3) & 0x80) == 0) {
      iVar6 = *(int *)(iVar5 + 0xea5e4) >> 0x10;
      local_14 = (*(int *)(iVar5 + 0xea5e0) >> 0x10) + -0x23;
      engine_2d_c_drawText_FUN_00401fe0((char *)actor,local_14,iVar6 + -0x21);
      if ((*(int *)&this_ptr->field_0x28 < 0) ||
         (iVar5 = core_motion_cpp_FUN_005035c0(),
         *(int *)(iVar5 + 0x24) == *(int *)&this_ptr->field_0x28)) {
        pcVar4 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_00503870(this_ptr);
        pcVar2 = local_c0;
        do {
          cVar1 = *pcVar4;
          *pcVar2 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar2[1] = cVar1;
          pcVar2 = pcVar2 + 2;
        } while (cVar1 != '\0');
      }
      else {
        core_motion_cpp_FUN_00503860(this_ptr);
        pcVar2 = core_motion_cpp_CMotionController_getCurrentStateName_FUN_00503870(this_ptr);
        FUN_005b7790(local_c0,"%s -> %s",pcVar2);
      }
      iVar5 = local_14;
      engine_2d_c_drawText_FUN_00401fe0(local_c0,local_14,iVar6 + -0x16);
      uVar3 = core_motion_cpp_FUN_005035c0(this_ptr,(double)*(float *)&this_ptr->field_0x8);
      FUN_005b7790(local_c0,"%s : %5.2f",uVar3);
      engine_2d_c_drawText_FUN_00401fe0(local_c0,iVar5,iVar6 + -0xb);
      return;
    }
  }
  return;
}
