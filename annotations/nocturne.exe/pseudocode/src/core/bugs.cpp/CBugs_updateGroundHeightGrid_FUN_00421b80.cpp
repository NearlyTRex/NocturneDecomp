// Name: core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_00421b80
// Address: 00421b80
// Address Range: [[00421b80, 00421ef1]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_updateGroundHeightGrid_FUN_00421b80(CBugs *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_bugs_cpp_CBugs_updateGroundHeightGrid_FUN_00421b80(CBugs *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int unaff_EBX;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  byte bVar10;
  double dVar11;
  float fVar12;
  CVector3f local_54;
  uint local_44;
  int local_40;
  int iStack_3c;
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
  
  bVar10 = 0;
  local_c = 1.0 / 0.5f;
  local_54.x = (this_ptr->bounds).min.y + (this_ptr->bounds).max.y;
  local_54.y = (this_ptr->bounds).min.z + (this_ptr->bounds).max.z;
  fVar2 = local_54.y * 0.5f;
  fVar1 = (this_ptr->base).base.base.location.position.z;
  dVar11 = floor
                     ((double)(((this_ptr->base).base.base.location.position.x +
                               ((this_ptr->bounds).min.x + (this_ptr->bounds).max.x) *
                               0.5f) * local_c));
  local_40 = SUB84(__BITCAST_UINT64(dVar11),0);
  iStack_3c = (int)((ulonglong)dVar11 >> 0x20);
  fVar1 = (fVar1 + fVar2) * local_c;
  dVar11 = round(dVar11);
  local_38 = (int)ROUND(dVar11);
  dVar11 = floor((double)fVar1);
  local_44 = SUB84(__BITCAST_UINT64(dVar11),0);
  local_40 = (int)((ulonglong)dVar11 >> 0x20);
  local_10 = local_38;
  fVar2 = (float)local_38 * 0.5f;
  dVar11 = round(dVar11);
  local_18 = (int)ROUND(dVar11);
  fVar3 = (float)local_18 * 0.5f;
  fVar12 = 0.5f * 5.4034218993573707e-315._0_4_ * (float)0.5;
  fVar1 = (this_ptr->base).base.base.location.position.z;
  this_ptr->grid_origin_x = (fVar2 - (this_ptr->base).base.base.location.position.x) - fVar12;
  this_ptr->grid_origin_z = (fVar3 - fVar1) - fVar12;
  if ((iStack_3c != this_ptr->grid_cell_x) || (local_18 != this_ptr->grid_cell_z)) {
    local_20 = *(int *)(unaff_EBX + 0x1984c) - iStack_3c;
    local_24 = *(int *)(unaff_EBX + 0x19850) - local_18;
    local_2c = local_20 + 0xb;
    local_28 = local_24 + 0xb;
    puVar7 = (uint *)(unaff_EBX + 0x12720);
    puVar8 = &DAT_00764b58;
    for (iVar4 = 0x90; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(byte *)puVar8 = *(byte *)puVar7;
      puVar7 = (uint *)((int)puVar7 + (uint)bVar10 * -2 + 1);
      puVar8 = (uint *)((int)puVar8 + (uint)bVar10 * -2 + 1);
    }
    local_54.y = *(float *)(unaff_EBX + 0x24);
    fVar2 = *(float *)(unaff_EBX + 0x28);
    fVar12 = *(float *)(unaff_EBX + 0x20) + *(float *)(unaff_EBX + 0x19854);
    fVar1 = *(float *)(unaff_EBX + 0x19858);
    local_34 = local_20 * -0x30;
    local_38 = local_24 * 4;
    local_1c = 0;
    local_30 = unaff_EBX;
    do {
      iVar5 = 0;
      local_54.x = (float)local_1c * 0.5f + fVar12;
      iVar6 = local_34 - local_38;
      iVar4 = local_30;
      iVar9 = local_30;
      do {
        local_54.z = (float)iVar5 * 0.5f + fVar2 + fVar1;
        if ((((local_1c < local_20) || (local_2c < local_1c)) || (iVar5 < local_24)) ||
           (local_28 < iVar5)) {
          local_14 = iVar5;
          fVar3 = core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_00468580
                            (&g_CDemonRaytrace_01fba938,&local_54,&local_40,(CVector3f *)0x0);
          *(float *)(iVar9 + 0x12720) = fVar3 - *(float *)(unaff_EBX + 0x24);
        }
        else {
          *(uint *)(iVar4 + 0x12720) = *(uint *)((int)&DAT_00764b58 + iVar6);
        }
        iVar4 = iVar4 + 4;
        iVar6 = iVar6 + 4;
        iVar5 = iVar5 + 1;
        iVar9 = iVar9 + 4;
      } while (iVar5 < 0xc);
      local_34 = local_34 + 0x30;
      local_1c = local_1c + 1;
      local_30 = local_30 + 0x30;
    } while (local_1c < 0xc);
    *(int *)(unaff_EBX + 0x1984c) = iStack_3c;
    *(int *)(unaff_EBX + 0x19850) = local_18;
  }
  return;
}
