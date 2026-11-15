// Name: core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_00425b00
// Address: 00425b00
// Address Range: [[00425b00, 00425edb]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_updateGroundHeightGrid_FUN_00425b00(CBugs *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bugs_cpp_CBugs_updateGroundHeightGrid_FUN_00425b00(CBugs *this_ptr)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int unaff_EBX;
  int iVar6;
  uint *puVar7;
  float *pfVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  byte bVar12;
  double dVar13;
  float afStackY_1074 [1005];
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float fStack_98;
  float local_94;
  float local_90;
  CVector3f local_8c;
  float local_78;
  float local_74;
  float local_70 [4];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  int local_48;
  int iStack_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  bVar12 = 0;
  local_a8 = (this_ptr->bounds).min.x + (this_ptr->bounds).max.x;
  fVar4 = 1.0 / _DAT_005fd228;
  local_a4 = (this_ptr->bounds).min.y + (this_ptr->bounds).max.y;
  local_a0 = (this_ptr->bounds).min.z + (this_ptr->bounds).max.z;
  local_78 = local_a8 * _DAT_005d50fc;
  local_74 = local_a4 * _DAT_005d50fc;
  local_70[0] = local_a0 * _DAT_005d50fc;
  local_9c = (this_ptr->base).base.base.location.position.x + local_78;
  fStack_98 = (this_ptr->base).base.base.location.position.y + local_74;
  local_94 = (this_ptr->base).base.base.location.position.z + local_70[0];
  local_90 = local_a8;
  local_8c.x = local_a4;
  local_8c.y = local_a0;
  local_60 = local_9c;
  local_5c = fStack_98;
  local_58 = local_94;
  local_54 = local_78;
  local_50 = local_74;
  local_4c = local_70[0];
  dVar13 = floor((double)(local_9c * fVar4));
  local_48 = SUB84(__BITCAST_UINT64(dVar13),0);
  iStack_44 = (int)((ulonglong)dVar13 >> 0x20);
  fVar4 = local_94 * fVar4;
  dVar13 = round(dVar13);
  local_3c = (int)ROUND(dVar13);
  dVar13 = floor((double)fVar4);
  local_4c = SUB84(__BITCAST_UINT64(dVar13),0);
  local_48 = (int)((ulonglong)dVar13 >> 0x20);
  fVar1 = (float)local_3c * _DAT_005fd228;
  fVar4 = (this_ptr->base).base.base.location.position.x;
  fVar2 = _DAT_005fd228 * _DAT_005d5100 * (float)_DAT_005d5108;
  dVar13 = round(dVar13);
  iStack_44 = (int)ROUND(dVar13);
  this_ptr->grid_origin_x = (fVar1 - fVar4) - fVar2;
  this_ptr->grid_origin_z =
       ((float)iStack_44 * _DAT_005fd228 - (this_ptr->base).base.base.location.position.z) - fVar2;
  if ((local_40 != this_ptr->grid_cell_x) || (iStack_44 != this_ptr->grid_cell_z)) {
    iVar3 = *(int *)(unaff_EBX + 0x19d90) - local_40;
    local_28 = iVar3;
    local_2c = *(int *)(unaff_EBX + 0x19d94) - iStack_44;
    local_30 = iVar3 + 0xb;
    local_34 = local_2c + 0xb;
    puVar7 = (uint *)(unaff_EBX + 0x12c64);
    puVar10 = &DAT_007c53b4;
    for (iVar5 = 0x90; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = *puVar7;
      puVar7 = puVar7 + (uint)bVar12 * -2 + 1;
      puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(byte *)puVar10 = *(byte *)puVar7;
      puVar7 = (uint *)((int)puVar7 + (uint)bVar12 * -2 + 1);
      puVar10 = (uint *)((int)puVar10 + (uint)bVar12 * -2 + 1);
    }
    pfVar8 = (float *)(unaff_EBX + 0x24 + (uint)bVar12 * -8);
    local_74 = *(float *)(unaff_EBX + 0x20);
    local_70[(uint)bVar12 * -2] = *pfVar8;
    local_70[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] = pfVar8[(uint)bVar12 * -2 + 1];
    local_74 = local_74 + *(float *)(unaff_EBX + 0x19d98);
    local_70[1] = local_70[1] + *(float *)(unaff_EBX + 0x19d9c);
    local_8c.x = local_74;
    *(float *)((int)&local_8c + (uint)bVar12 * -8 + 4) = local_70[(uint)bVar12 * -2];
    *(float *)((int)&local_8c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
         local_70[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
    local_3c = local_2c << 2;
    local_24 = 0;
    local_38 = iVar3 * -0x30;
    iVar3 = unaff_EBX;
    do {
      iVar6 = 0;
      local_8c.x = (float)local_24 * _DAT_005fd228 + local_74;
      iVar9 = local_38 - local_3c;
      iVar5 = iVar3;
      iVar11 = iVar3;
      do {
        local_8c.z = (float)iVar6 * _DAT_005fd228 + local_70[1];
        if ((((local_24 < local_28) || (local_30 < local_24)) || (iVar6 < local_2c)) ||
           (local_34 < iVar6)) {
          fVar4 = core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_0048bdc0
                            (&g_CDemonRaytraceInstance,&local_8c,&local_48,(CVector3f *)0x0);
          *(float *)(iVar5 + 0x12c64) = fVar4 - *(float *)(unaff_EBX + 0x24);
        }
        else {
          *(uint *)(iVar11 + 0x12c64) = *(uint *)((int)&DAT_007c53b4 + iVar9);
        }
        iVar11 = iVar11 + 4;
        iVar9 = iVar9 + 4;
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar6 < 0xc);
      local_38 = local_38 + 0x30;
      local_24 = local_24 + 1;
      iVar3 = iVar3 + 0x30;
    } while (local_24 < 0xc);
    *(int *)(unaff_EBX + 0x19d90) = local_40;
    *(int *)(unaff_EBX + 0x19d94) = iStack_44;
  }
  return;
}
