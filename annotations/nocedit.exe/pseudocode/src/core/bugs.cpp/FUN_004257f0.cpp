// Name: core_bugs.cpp_FUN_004257f0
// Address: 004257f0
// Address Range: [[004257f0, 00425b61]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_004257f0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_enemy_bugs.cpp_FUN_004257f0(CCharacter* param_1) */

void core_bugs_cpp_FUN_004257f0(void)

{
  int iVar1;
  int extraout_EBX;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int iVar2;
  uint *puVar3;
  float fVar4;
  uint *puVar5;
  float fVar6;
  byte bVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  int in_stack_00000004;
  ulonglong uVar12;
  ulonglong uVar13;
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
  float local_18;
  float local_10;
  float local_c;
  
  bVar7 = 0;
  local_c = 1.0 / _DAT_0065b5c8;
  local_5c.y = *(float *)(in_stack_00000004 + 0x199cc) + *(float *)(in_stack_00000004 + 0x199d8);
  local_5c.z = *(float *)(in_stack_00000004 + 0x199d0) + *(float *)(in_stack_00000004 + 0x199dc);
  local_50 = *(float *)(in_stack_00000004 + 0x199d4) + *(float *)(in_stack_00000004 + 0x199e0);
  fVar6 = local_5c.z * 0.5f;
  local_5c.x = local_50 * 0.5f;
  fVar4 = *(float *)(in_stack_00000004 + 0x24);
  local_44 = crt_math_c_floor_FUN_005feb90
                       ((double)((*(float *)(in_stack_00000004 + 0x20) + local_5c.y * 0.5f
                                 ) * local_c));
  fVar8 = (float10)(fVar4 + fVar6) * (float10)local_10;
  dVar11 = crt_math_c_round_FUN_005fe6b0(local_44);
  iStack_3c = (int)ROUND(dVar11);
  local_4c = crt_math_c_floor_FUN_005feb90((double)fVar8);
  local_18 = local_44._4_4_;
  fVar9 = (float10)(int)local_44._4_4_ * (float10)_DAT_0065b5c8;
  dVar11 = crt_math_c_round_FUN_005fe6b0(local_4c);
  local_20 = (int)ROUND(dVar11);
  fVar8 = (float10)_DAT_0065b5c8;
  fVar10 = (float10)_DAT_0065b5c8 * (float10)11f * (float10)0.5;
  *(float *)(extraout_EBX + 0x199ec) =
       (float)((fVar9 - (float10)*(float *)(extraout_EBX + 0x20)) - fVar10);
  *(float *)(extraout_EBX + 0x199f0) =
       (float)(((float10)local_20 * fVar8 - (float10)*(float *)(extraout_EBX + 0x28)) - fVar10);
  if (((int)local_44 != *(int *)(extraout_EBX + 0x199e4)) ||
     (local_20 != *(int *)(extraout_EBX + 0x199e8))) {
    local_28 = *(int *)((int)local_c + 0x199e4) - (int)local_44;
    local_2c = *(int *)((int)local_c + 0x199e8) - local_20;
    local_34 = local_28 + 0xb;
    local_30 = local_2c + 0xb;
    puVar3 = (uint *)((int)local_c + 0x128b8);
    puVar5 = &DAT_00822d08;
    for (iVar1 = 0x90; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + (uint)bVar7 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(byte *)puVar5 = *(byte *)puVar3;
      puVar3 = (uint *)((int)puVar3 + (uint)bVar7 * -2 + 1);
      puVar5 = (uint *)((int)puVar5 + (uint)bVar7 * -2 + 1);
    }
    local_5c.y = *(float *)((int)local_c + 0x24);
    uVar12 = CONCAT44 /* combine 2-byte values */(local_5c.y,
                      *(float *)((int)local_c + 0x20) + *(float *)((int)local_c + 0x199ec));
    uVar13 = (ulonglong)(uint)(*(float *)((int)local_c + 0x28) + *(float *)((int)local_c + 0x199f0))
    ;
    local_38 = local_c;
    iStack_3c = local_28 * -0x30;
    local_44._4_4_ = (float)(local_2c * 4);
    local_24 = 0;
    do {
      iVar1 = 0;
      local_5c.x = (float)local_24 * _DAT_0065b5c8 + (float)uVar12;
      iVar2 = iStack_3c - (int)local_44._4_4_;
      fVar4 = local_38;
      fVar6 = local_38;
      do {
        local_5c.z = (float)iVar1 * _DAT_0065b5c8 + (float)uVar13;
        if ((((local_24 < local_28) || (local_34 < local_24)) || (iVar1 < local_2c)) ||
           (local_30 < iVar1)) {
          local_1c = iVar1;
          local_18 = core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0
                               (&g_CDemonRaytraceInstance,&local_5c,(int *)((int)&local_4c + 4),
                                (CVector3f *)0x0);
          *(float *)((int)fVar6 + 0x128b8) = local_18 - *(float *)(unaff_EBP + 0x24);
        }
        else {
          *(uint *)((int)fVar4 + 0x128b8) = *(uint *)((int)&DAT_00822d08 + iVar2);
        }
        fVar4 = (float)((int)fVar4 + 4);
        iVar2 = iVar2 + 4;
        iVar1 = iVar1 + 1;
        fVar6 = (float)((int)fVar6 + 4);
      } while (iVar1 < 0xc);
      iStack_3c = iStack_3c + 0x30;
      local_24 = local_24 + 1;
      local_38 = (float)((int)local_38 + 0x30);
    } while (local_24 < 0xc);
    *(int *)((int)local_c + 0x199e4) = (int)local_44;
    *(int *)((int)local_c + 0x199e8) = local_20;
  }
  return;
}
