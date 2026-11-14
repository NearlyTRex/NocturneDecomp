// Name: core_setcolid.cpp_CDemonSet_iterativeRaycast_FUN_0053cff0
// Address: 0053cff0
// Address Range: [[0053cff0, 0053d26f]]
// Convention: __cdecl
// Signature: float __cdecl core_setcolid_cpp_CDemonSet_iterativeRaycast_FUN_0053cff0(CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *direction)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_setcolid_cpp_CDemonSet_iterativeRaycast_FUN_0053cff0(CDemonSet *this_ptr,CVector3f *start_pos,CVector3f *direction)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  byte bVar6;
  float afStackY_10a4 [1012];
  CDemonSet *pCVar7;
  byte *puVar8;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94 [4];
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  uint local_58;
  uint local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  uint local_2c;
  uint local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar6 = 0;
  local_a4 = start_pos->x;
  local_a0 = start_pos->y;
  local_9c = start_pos->z;
  iVar5 = 0;
  local_1c = 0.0;
  local_38 = direction->x;
  local_34 = direction->y;
  local_30 = direction->z;
  local_18 = 0.0;
  local_28 = 0;
  local_2c = 0xbe23d70a;
  do {
    fVar4 = local_9c;
    fVar3 = local_a0;
    fVar2 = local_a4;
    fVar1 = local_30 * _DAT_005d0ace;
    local_20 = 0.1;
    local_5c = local_18;
    local_58 = local_2c;
    local_94[2] = local_38 * _DAT_005d0ace;
    local_54 = local_28;
    local_94[3] = local_34 * _DAT_005d0ace;
    local_44 = local_18;
    *(uint *)((int)local_94 + ((uint)bVar6 * -2 + 0x15) * 4) =
         *(uint *)((int)local_94 + ((uint)bVar6 * -2 + 0xf) * 4);
    *(uint *)((int)local_94 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16) * 4) =
         *(uint *)((int)local_94 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10) * 4);
    local_84 = fVar1;
    local_50 = local_94[2];
    *(uint *)((int)local_94 + ((uint)bVar6 * -2 + 0x12) * 4) =
         *(uint *)((int)local_94 + ((uint)bVar6 * -2 + 3) * 4);
    *(uint *)((int)local_94 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13) * 4) =
         *(uint *)((int)local_94 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 4) * 4);
    puVar8 = (byte *)&local_a4;
    local_b0 = fVar2 + local_50;
    local_ac = fVar3 + local_4c;
    local_a8 = fVar4 + local_48;
    local_74 = fVar2 + local_50;
    *(uint *)((int)local_94 + ((uint)bVar6 * -2 + 9) * 4) =
         *(uint *)((int)&stack0xffffff48 + ((uint)bVar6 * -2 + 3) * 4);
    *(uint *)((int)local_94 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 10) * 4) =
         *(uint *)((int)&stack0xffffff48 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 4) * 4);
    local_98 = local_74 + local_44;
    local_94[0] = local_70 + local_40;
    local_94[1] = local_6c + local_3c;
    local_68 = local_74 + local_44;
    *(uint *)((int)local_94 + ((uint)bVar6 * -2 + 0xc) * 4) =
         *(uint *)((int)local_94 + (uint)bVar6 * 0xfffffff8);
    pCVar7 = this_ptr;
    *(uint *)((int)local_94 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd) * 4) =
         *(uint *)((int)local_94 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4);
    local_14 = (float)core_setcolid_cpp_FUN_0053ccc0(pCVar7,puVar8);
    if ((0.0 <= local_14) && (local_14 <= 1.0)) {
      return local_14 * _DAT_005d0ace + local_1c;
    }
    if (&local_a4 != &local_68) {
      local_a4 = local_68;
      local_a0 = local_64;
      local_9c = local_60;
    }
    fVar1 = local_20 * 0.0;
    iVar5 = iVar5 + 1;
    local_80 = fVar1;
    local_78 = fVar1;
    local_7c = local_20 * _DAT_005d0ad2;
    *(uint *)((int)&stack0xffffff48 + (uint)bVar6 * -8) =
         *(uint *)((int)local_94 + ((uint)bVar6 * -2 + 6) * 4);
    *(uint *)((int)&stack0xffffff48 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 1) * 4) =
         *(uint *)((int)local_94 + ((uint)bVar6 * -2 + (uint)bVar6 * -2 + 7) * 4);
    local_1c = local_1c + local_20;
    local_38 = local_38 + fVar1;
    local_34 = local_34 + local_b8;
    local_30 = local_30 + local_b4;
  } while (iVar5 < 100);
  return -1.0;
}
