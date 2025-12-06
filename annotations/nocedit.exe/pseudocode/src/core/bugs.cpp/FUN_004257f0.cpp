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
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint extraout_EAX;
  uint extraout_EAX_00;
  float fVar5;
  int iVar6;
  uint extraout_EDX;
  uint extraout_EDX_00;
  int iVar7;
  BADSPACEBASE *in_ESP;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  byte bVar12;
  float10 in_ST0;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  double dVar16;
  int in_stack_00000004;
  int in_stack_00000008;
  CVector3f local_4c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  float local_c;
  
  bVar12 = 0;
  local_c = 1.0 / _DAT_0065b5c8;
  dVar16 = crt_math_c_floor_FUN_005feb90((double)in_ST0);
  fVar14 = (float10)dVar16;
  fVar13 = (float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,extraout_EAX));
  local_34 = (int)ROUND(fVar13);
  crt_math_c_floor_FUN_005feb90((double)fVar14);
  fVar14 = (float10)(double)CONCAT44 /* combine 2-byte values */(extraout_EDX_00,extraout_EAX_00);
  local_10 = local_38;
  fVar13 = (float10)local_38 * (float10)_DAT_0065b5c8;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX_00,local_38));
  local_10 = (int)ROUND(fVar14);
  fVar14 = (float10)_DAT_0065b5c8;
  fVar15 = (float10)_DAT_0065b5c8 * (float10)11f * (float10)0.5;
  *(float *)(in_stack_00000004 + 0x199ec) =
       (float)((fVar13 - (float10)*(float *)(in_stack_00000004 + 0x20)) - fVar15);
  *(float *)(in_stack_00000004 + 0x199f0) =
       (float)(((float10)local_10 * fVar14 - (float10)*(float *)(in_stack_00000004 + 0x28)) - fVar15
              );
  if ((local_34 != *(int *)(in_stack_00000004 + 0x199e4)) ||
     (local_10 != *(int *)(in_stack_00000004 + 0x199e8))) {
    local_18 = *(int *)(in_stack_00000004 + 0x199e4) - local_34;
    local_1c = *(int *)(in_stack_00000004 + 0x199e8) - local_10;
    local_24 = local_18 + 0xb;
    local_20 = local_1c + 0xb;
    puVar9 = (uint *)(in_stack_00000004 + 0x128b8);
    puVar10 = &DAT_00822d08;
    for (iVar6 = 0x90; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
      puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(byte *)puVar10 = *(byte *)puVar9;
      puVar9 = (uint *)((int)puVar9 + (uint)bVar12 * -2 + 1);
      puVar10 = (uint *)((int)puVar10 + (uint)bVar12 * -2 + 1);
    }
    fVar3 = *(float *)(in_stack_00000004 + 0x20);
    local_4c.y = *(float *)(in_stack_00000004 + 0x24);
    fVar4 = *(float *)(in_stack_00000004 + 0x28);
    fVar1 = *(float *)(in_stack_00000004 + 0x199ec);
    fVar2 = *(float *)(in_stack_00000004 + 0x199f0);
    local_28 = in_stack_00000004;
    local_2c = local_18 * -0x30;
    local_30 = local_1c * 4;
    local_14 = 0;
    do {
      iVar7 = 0;
      local_4c.x = (float)local_14 * _DAT_0065b5c8 + fVar3 + fVar1;
      iVar8 = local_2c - local_30;
      iVar6 = local_28;
      iVar11 = local_28;
      do {
        local_4c.z = (float)iVar7 * _DAT_0065b5c8 + fVar4 + fVar2;
        if ((((local_14 < local_18) || (local_24 < local_14)) || (iVar7 < local_1c)) ||
           (local_20 < iVar7)) {
          local_c = (float)iVar7;
          fVar5 = core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0
                            (&g_CDemonRaytraceInstance,&local_4c,&local_38,(CVector3f *)0x0);
          *(float *)(iVar11 + 0x128b8) = fVar5 - *(float *)(in_stack_00000008 + 0x24);
        }
        else {
          *(uint *)(iVar6 + 0x128b8) = *(uint *)((int)&DAT_00822d08 + iVar8);
        }
        iVar6 = iVar6 + 4;
        iVar8 = iVar8 + 4;
        iVar7 = iVar7 + 1;
        iVar11 = iVar11 + 4;
      } while (iVar7 < 0xc);
      local_2c = local_2c + 0x30;
      local_14 = local_14 + 1;
      local_28 = local_28 + 0x30;
    } while (local_14 < 0xc);
    *(int *)(in_stack_00000004 + 0x199e4) = local_34;
    *(int *)(in_stack_00000004 + 0x199e8) = local_10;
  }
  return;
}
