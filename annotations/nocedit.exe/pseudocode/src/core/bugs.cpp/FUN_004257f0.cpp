// Name: core_bugs.cpp_FUN_004257f0
// Address: 004257f0
// Address Range: [[004257f0, 00425b61]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_004257f0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_enemy_bugs.cpp_FUN_004257f0(CCharacter* param_1) */

void core_bugs_cpp_FUN_004257f0
               (int param_1,float param_2,uint param_3,uint param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int iVar6;
  uint *puVar7;
  float fVar8;
  uint *puVar9;
  float fVar10;
  byte bVar11;
  float10 in_ST0;
  float10 fVar12;
  double dVar13;
  CVector3f local_5c;
  float local_50;
  int local_4c;
  float local_48;
  int local_44;
  float local_40;
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
  float local_c;
  
  bVar11 = 0;
  local_c = 1.0 / _DAT_0065b5c8;
  local_5c.y = *(float *)(param_5 + 0x199cc) + *(float *)(param_5 + 0x199d8);
  local_5c.z = *(float *)(param_5 + 0x199d0) + *(float *)(param_5 + 0x199dc);
  local_50 = *(float *)(param_5 + 0x199d4) + *(float *)(param_5 + 0x199e0);
  local_5c.x = local_50 * 0.5f;
  dVar13 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
  fVar12 = (float10)dVar13;
  local_44 = param_1;
  local_40 = param_2;
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(param_2,param_1));
  iStack_3c = (int)ROUND(dVar13);
  crt_math_c_floor_FUN_005feb90((double)fVar12);
  local_18 = local_40;
  fVar1 = (float)(int)local_40 * _DAT_0065b5c8;
  local_4c = param_1;
  local_48 = param_2;
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(param_2,param_1));
  local_20 = (int)ROUND(dVar13);
  fVar3 = (float)local_20 * _DAT_0065b5c8;
  fVar2 = _DAT_0065b5c8 * 11f * (float)0.5;
  *(float *)(param_5 + 0x199ec) = (fVar1 - *(float *)(param_5 + 0x20)) - fVar2;
  *(float *)(param_5 + 0x199f0) = (fVar3 - *(float *)(param_5 + 0x28)) - fVar2;
  if ((local_44 != *(int *)(param_5 + 0x199e4)) || (local_20 != *(int *)(param_5 + 0x199e8))) {
    local_28 = *(int *)((int)local_c + 0x199e4) - local_44;
    local_2c = *(int *)((int)local_c + 0x199e8) - local_20;
    local_34 = local_28 + 0xb;
    local_30 = local_2c + 0xb;
    puVar7 = (uint *)((int)local_c + 0x128b8);
    puVar9 = &DAT_00822d08;
    for (iVar5 = 0x90; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(byte *)puVar9 = *(byte *)puVar7;
      puVar7 = (uint *)((int)puVar7 + (uint)bVar11 * -2 + 1);
      puVar9 = (uint *)((int)puVar9 + (uint)bVar11 * -2 + 1);
    }
    fVar3 = *(float *)((int)local_c + 0x20);
    local_5c.y = *(float *)((int)local_c + 0x24);
    fVar4 = *(float *)((int)local_c + 0x28);
    fVar1 = *(float *)((int)local_c + 0x199ec);
    fVar2 = *(float *)((int)local_c + 0x199f0);
    local_38 = local_c;
    iStack_3c = local_28 * -0x30;
    local_40 = (float)(local_2c * 4);
    local_24 = 0;
    do {
      iVar5 = 0;
      local_5c.x = (float)local_24 * _DAT_0065b5c8 + fVar3 + fVar1;
      iVar6 = iStack_3c - (int)local_40;
      fVar8 = local_38;
      fVar10 = local_38;
      do {
        local_5c.z = (float)iVar5 * _DAT_0065b5c8 + fVar4 + fVar2;
        if ((((local_24 < local_28) || (local_34 < local_24)) || (iVar5 < local_2c)) ||
           (local_30 < iVar5)) {
          local_1c = iVar5;
          local_18 = core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0
                               (&g_CDemonRaytraceInstance,&local_5c,(int *)&local_48,
                                (CVector3f *)0x0);
          *(float *)((int)fVar10 + 0x128b8) = local_18 - *(float *)(unaff_EBP + 0x24);
        }
        else {
          *(uint *)((int)fVar8 + 0x128b8) = *(uint *)((int)&DAT_00822d08 + iVar6);
        }
        fVar8 = (float)((int)fVar8 + 4);
        iVar6 = iVar6 + 4;
        iVar5 = iVar5 + 1;
        fVar10 = (float)((int)fVar10 + 4);
      } while (iVar5 < 0xc);
      iStack_3c = iStack_3c + 0x30;
      local_24 = local_24 + 1;
      local_38 = (float)((int)local_38 + 0x30);
    } while (local_24 < 0xc);
    *(int *)((int)local_c + 0x199e4) = local_44;
    *(int *)((int)local_c + 0x199e8) = local_20;
  }
  return;
}
