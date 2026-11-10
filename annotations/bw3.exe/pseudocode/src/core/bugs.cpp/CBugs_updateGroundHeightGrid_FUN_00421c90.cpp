// Name: core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_00421c90
// Address: 00421c90
// Address Range: [[00421c90, 0042206b]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_updateGroundHeightGrid_FUN_00421c90(CBugs *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bugs_cpp_CBugs_updateGroundHeightGrid_FUN_00421c90(CBugs *this_ptr)

{
  int iVar1;
  float fVar2;
  int iVar3;
  CBugs *pCVar4;
  float (*pafVar5) [12];
  uint *puVar6;
  float *pfVar7;
  CBugs *pCVar8;
  byte bVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float afStackY_106c [1005];
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float fStack_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  double local_48;
  byte local_40 [4];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  CBugs *local_18;
  float local_14;
  
  bVar9 = 0;
  local_a8 = (this_ptr->bounds).min.x + (this_ptr->bounds).max.x;
  local_14 = 1.0 / _DAT_005dcbc8;
  local_a4 = (this_ptr->bounds).min.y + (this_ptr->bounds).max.y;
  local_a0 = (this_ptr->bounds).min.z + (this_ptr->bounds).max.z;
  local_78 = local_a8 * _DAT_005b783d;
  local_74 = local_a4 * _DAT_005b783d;
  local_70 = local_a0 * _DAT_005b783d;
  local_9c = (this_ptr->base).base.base.location.position.x + local_78;
  fStack_98 = (this_ptr->base).base.base.location.position.y + local_74;
  local_94 = (this_ptr->base).base.base.location.position.z + local_70;
  local_90 = local_a8;
  local_8c = local_a4;
  local_88 = local_a0;
  local_60 = local_9c;
  local_5c = fStack_98;
  local_58 = local_94;
  local_54 = local_78;
  local_50 = local_74;
  local_4c = local_70;
  local_48 = floor((double)(local_9c * local_14));
  fVar10 = (float10)local_48;
  fVar11 = (float10)local_94 * (float10)local_14;
  round();
  local_38 = (int)ROUND(fVar10);
  local_48 = floor((double)fVar11);
  fVar12 = (float10)local_48;
  local_14 = (float)local_38;
  fVar11 = (float10)local_38 * (float10)_DAT_005dcbc8 -
           (float10)(this_ptr->base).base.base.location.position.x;
  fVar10 = (float10)_DAT_005dcbc8 * (float10)_DAT_005b7841 * (float10)_DAT_005b7849;
  iVar1 = round();
  local_3c = (int)ROUND(fVar12);
  *(float *)(iVar1 + 0x1be88) = (float)(fVar11 - fVar10);
  local_14 = (float)local_3c;
  this_ptr->grid_origin_z =
       (float)(((float10)local_3c * (float10)_DAT_005dcbc8 -
               (float10)(this_ptr->base).base.base.location.position.z) - fVar10);
  if ((local_38 != this_ptr->grid_cell_x) || (local_3c != this_ptr->grid_cell_z)) {
    iVar1 = this_ptr->grid_cell_x - local_38;
    local_20 = iVar1;
    local_24 = this_ptr->grid_cell_z - local_3c;
    local_28 = iVar1 + 0xb;
    local_2c = local_24 + 0xb;
    pafVar5 = this_ptr->ground_heights;
    pfVar7 = (float *)&DAT_007e1a54;
    for (iVar3 = 0x90; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar7 = (*pafVar5)[0];
      pafVar5 = (float (*) [12])((int)pafVar5 + (uint)bVar9 * -8 + 4);
      pfVar7 = pfVar7 + (uint)bVar9 * -2 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(byte *)pfVar7 = *(byte *)*pafVar5;
      pafVar5 = (float (*) [12])((int)pafVar5 + (uint)bVar9 * -2 + 1);
      pfVar7 = (float *)((int)pfVar7 + (uint)bVar9 * -2 + 1);
    }
    puVar6 = (uint *)((int)this_ptr + (uint)bVar9 * -8 + 0x24);
    local_6c = (this_ptr->base).base.base.location.position.x;
    *(uint *)((int)&stack0xffffff98 + (uint)bVar9 * 0xfffffffe * 4) = *puVar6;
    *(uint *)((int)&stack0xffffff9c + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         puVar6[(uint)bVar9 * -2 + 1];
    local_18 = this_ptr;
    local_6c = local_6c + this_ptr->grid_origin_x;
    local_64 = local_64 + this_ptr->grid_origin_z;
    local_84 = local_6c;
    *(uint *)((int)&stack0xffffff80 + (uint)bVar9 * 0xfffffffe * 4) =
         *(uint *)((int)&stack0xffffff98 + (uint)bVar9 * 0xfffffffe * 4);
    *(uint *)((int)&stack0xffffff84 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         *(uint *)((int)&stack0xffffff9c + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    local_34 = local_24 << 2;
    local_1c = 0;
    local_30 = iVar1 * -0x30;
    do {
      iVar1 = 0;
      local_84 = (float)local_1c * _DAT_005dcbc8 + local_6c;
      iVar3 = local_30 - local_34;
      pCVar4 = local_18;
      pCVar8 = local_18;
      do {
        local_7c = (float)iVar1 * _DAT_005dcbc8 + local_64;
        if ((((local_1c < local_20) || (local_28 < local_1c)) || (iVar1 < local_24)) ||
           (local_2c < iVar1)) {
          local_14 = (float)iVar1;
          fVar2 = (float)core_dtrace_cpp_FUN_00474940
                                   (&g_CDemonRaytraceInstance,&stack0xffffff7c,local_40,0);
          pCVar4->ground_heights[0][0] = fVar2 - (this_ptr->base).base.base.location.position.y;
        }
        else {
          pCVar8->ground_heights[0][0] = *(float *)((int)&DAT_007e1a54 + iVar3);
        }
        pCVar8 = (CBugs *)((pCVar8->base).base.base.actor_name + 4);
        iVar3 = iVar3 + 4;
        iVar1 = iVar1 + 1;
        pCVar4 = (CBugs *)((pCVar4->base).base.base.actor_name + 4);
      } while (iVar1 < 0xc);
      local_30 = local_30 + 0x30;
      local_1c = local_1c + 1;
      local_18 = (CBugs *)&(local_18->base).base.base.orient;
    } while (local_1c < 0xc);
    this_ptr->grid_cell_x = local_38;
    this_ptr->grid_cell_z = local_3c;
  }
  return;
}
