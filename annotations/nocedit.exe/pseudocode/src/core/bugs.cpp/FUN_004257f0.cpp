// Name: core_bugs.cpp_FUN_004257f0
// Address: 004257f0
// Address Range: [[004257f0, 00425b61]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_004257f0()

#include "nocturne.h"

/* Signature: byte actors_enemy_bugs.cpp_FUN_004257f0(CCharacter* param_1) */

void core_bugs_cpp_FUN_004257f0(void)

{
  float fVar1;
  int iVar2;
  int extraout_EBX;
  int iVar3;
  uint *puVar4;
  float fVar5;
  uint *puVar6;
  float fVar7;
  byte bVar8;
  double dVar9;
  int in_stack_00000004;
  ulonglong uVar10;
  ulonglong uVar11;
  CVector3f local_5c;
  float local_50;
  ulonglong local_4c;
  ulonglong local_44;
  int iStack_3c;
  float local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_10;
  float local_c;
  
  bVar8 = 0;
  local_c = 1.0 / 0.5f;
  local_5c.y = *(float *)(in_stack_00000004 + 0x199cc) + *(float *)(in_stack_00000004 + 0x199d8);
  local_5c.z = *(float *)(in_stack_00000004 + 0x199d0) + *(float *)(in_stack_00000004 + 0x199dc);
  local_50 = *(float *)(in_stack_00000004 + 0x199d4) + *(float *)(in_stack_00000004 + 0x199e0);
  fVar7 = local_5c.z * 0.5f;
  local_5c.x = local_50 * 0.5f;
  fVar5 = *(float *)(in_stack_00000004 + 0x24);
  local_44 = crt_math_c_floor_FUN_005feb90
                       ((double)((*(float *)(in_stack_00000004 + 0x20) + local_5c.y * 0.5f
                                 ) * local_c));
  dVar9 = crt_math_c_round_FUN_005fe6b0(local_44);
  iStack_3c = (int)ROUND(dVar9);
  local_4c = crt_math_c_floor_FUN_005feb90((double)((fVar5 + fVar7) * local_10));
  local_18 = local_44._4_4_;
  fVar5 = (float)local_44._4_4_ * 0.5f;
  dVar9 = crt_math_c_round_FUN_005fe6b0(local_4c);
  local_20 = (int)ROUND(dVar9);
  fVar1 = (float)local_20 * 0.5f;
  fVar7 = 0.5f * 11.0f * (float)0.5;
  *(float *)(extraout_EBX + 0x199ec) = (fVar5 - *(float *)(extraout_EBX + 0x20)) - fVar7;
  *(float *)(extraout_EBX + 0x199f0) = (fVar1 - *(float *)(extraout_EBX + 0x28)) - fVar7;
  if (((int)local_44 != *(int *)(extraout_EBX + 0x199e4)) ||
     (local_20 != *(int *)(extraout_EBX + 0x199e8))) {
    local_28 = *(int *)((int)local_c + 0x199e4) - (int)local_44;
    local_2c = *(int *)((int)local_c + 0x199e8) - local_20;
    local_34 = local_28 + 0xb;
    local_30 = local_2c + 0xb;
    puVar4 = (uint *)((int)local_c + 0x128b8);
    puVar6 = &DAT_00822d08;
    for (iVar2 = 0x90; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(byte *)puVar6 = *(byte *)puVar4;
      puVar4 = (uint *)((int)puVar4 + (uint)bVar8 * -2 + 1);
      puVar6 = (uint *)((int)puVar6 + (uint)bVar8 * -2 + 1);
    }
    local_5c.y = *(float *)((int)local_c + 0x24);
    uVar10 = CONCAT44(local_5c.y,
                      *(float *)((int)local_c + 0x20) + *(float *)((int)local_c + 0x199ec));
    uVar11 = (ulonglong)(uint)(*(float *)((int)local_c + 0x28) + *(float *)((int)local_c + 0x199f0))
    ;
    local_38 = local_c;
    iStack_3c = local_28 * -0x30;
    local_44._4_4_ = local_2c * 4;
    local_24 = 0;
    do {
      iVar2 = 0;
      local_5c.x = (float)local_24 * 0.5f + (float)uVar10;
      iVar3 = iStack_3c - local_44._4_4_;
      fVar5 = local_38;
      fVar7 = local_38;
      do {
        local_5c.z = (float)iVar2 * 0.5f + (float)uVar11;
        if ((((local_24 < local_28) || (local_34 < local_24)) || (iVar2 < local_2c)) ||
           (local_30 < iVar2)) {
          local_1c = iVar2;
          fVar1 = core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0
                            (&g_CDemonRaytraceInstance,&local_5c,(int *)((int)&local_4c + 4),
                             (CVector3f *)0x0);
          *(float *)((int)fVar7 + 0x128b8) = fVar1 - *(float *)((int)local_c + 0x24);
        }
        else {
          *(uint *)((int)fVar5 + 0x128b8) = *(uint *)((int)&DAT_00822d08 + iVar3);
        }
        fVar5 = (float)((int)fVar5 + 4);
        iVar3 = iVar3 + 4;
        iVar2 = iVar2 + 1;
        fVar7 = (float)((int)fVar7 + 4);
      } while (iVar2 < 0xc);
      iStack_3c = iStack_3c + 0x30;
      local_24 = local_24 + 1;
      local_38 = (float)((int)local_38 + 0x30);
    } while (local_24 < 0xc);
    *(int *)((int)local_c + 0x199e4) = (int)local_44;
    *(int *)((int)local_c + 0x199e8) = local_20;
  }
  return;
}
