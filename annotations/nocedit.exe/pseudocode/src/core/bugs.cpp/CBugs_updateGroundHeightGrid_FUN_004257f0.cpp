// Name: core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_004257f0
// Address: 004257f0
// Address Range: [[004257f0, 00425b61]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_updateGroundHeightGrid_FUN_004257f0(CBugs *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */
/* WARNING: Type propagation algorithm not settling */

void __cdecl core_bugs_cpp_CBugs_updateGroundHeightGrid_FUN_004257f0(CBugs *this_ptr)

{
  float fVar6;
  float fVar7;
  float fVar5;
  int iVar6;
  int iVar8;
  float fVar9;
  int iVar7;
  float (*pafVar8) [12];
  CBugs *pCVar9;
  float (*pafVar10) [12];
  CBugs *pCVar11;
  byte bVar12;
  double dVar10;
  CVector3f local_4c;
  double local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  CBugs *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  float local_c;
  float fVar2;
  float fVar3;
  float fVar1;
  float fVar4;
  
  bVar12 = 0;
  local_c = 1.0 / 0.5f;
  fVar6 = ((this_ptr->bounds).min.z + (this_ptr->bounds).max.z) * 0.5f;
  fVar1 = (this_ptr->base).base.base.location.position.z;
  dVar10 = floor
                     ((double)(((this_ptr->base).base.base.location.position.x +
                               ((this_ptr->bounds).min.x + (this_ptr->bounds).max.x) *
                               0.5f) * local_c));
  local_34 = (int)ROUND(ROUND(dVar10));
  dVar10 = floor((double)((fVar1 + fVar6) * local_c));
  local_10 = (int)ROUND(ROUND(dVar10));
  fVar7 = (float)local_10 * 0.5f;
  fVar9 = 0.5f * 11.0f * (float)0.5;
  fVar6 = (this_ptr->base).base.base.location.position.z;
  this_ptr->grid_origin_x =
       ((float)local_34 * 0.5f - (this_ptr->base).base.base.location.position.x) - fVar9;
  this_ptr->grid_origin_z = (fVar7 - fVar6) - fVar9;
  if ((local_34 != this_ptr->grid_cell_x) || (local_10 != this_ptr->grid_cell_z)) {
    local_18 = this_ptr->grid_cell_x - local_34;
    local_1c = this_ptr->grid_cell_z - local_10;
    local_24 = local_18 + 0xb;
    local_20 = local_1c + 0xb;
    pafVar8 = this_ptr->ground_heights;
    pafVar10 = g_BugsGroundHeightGridTemp;
    for (iVar6 = 0x90; iVar6 != 0; iVar6 = iVar6 + -1) {
      (*pafVar10)[0] = (*pafVar8)[0];
      pafVar8 = (float (*) [12])((int)pafVar8 + (uint)bVar12 * -8 + 4);
      pafVar10 = (float (*) [12])((int)pafVar10 + ((uint)bVar12 * -2 + 1) * 4);
    }
    for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
      pafVar10 = (float (*) [12])((int)pafVar10 + (uint)bVar12 * -2 + 1);
      pafVar8 = (float (*) [12])((int)pafVar8 + (uint)bVar12 * -2 + 1);
      *(byte *)*pafVar10 = *(byte *)*pafVar8;
      pafVar8 = pafVar8;
      pafVar10 = pafVar10;
    }
    fVar3 = (this_ptr->base).base.base.location.position.x;
    local_4c.y = (this_ptr->base).base.base.location.position.y;
    fVar4 = (this_ptr->base).base.base.location.position.z;
    fVar6 = this_ptr->grid_origin_x;
    fVar2 = this_ptr->grid_origin_z;
    local_28 = this_ptr;
    local_2c = local_18 * -0x30;
    local_30 = local_1c * 4;
    local_14 = 0;
    do {
      fVar9 = 0.0;
      local_4c.x = (float)local_14 * 0.5f + fVar3 + fVar6;
      iVar7 = local_2c - local_30;
      pCVar9 = local_28;
      pCVar11 = local_28;
      do {
        local_4c.z = (float)(int)fVar9 * 0.5f + fVar4 + fVar2;
        if ((((local_14 < local_18) || (local_24 < local_14)) || ((int)fVar9 < local_1c)) ||
           (local_20 < (int)fVar9)) {
          local_c = fVar9;
          fVar5 = core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0
                            (&g_CDemonRaytraceInstance,&local_4c,&local_38,(CVector3f *)0x0);
          pCVar11->ground_heights[0][0] = fVar5 - (this_ptr->base).base.base.location.position.y;
        }
        else {
          pCVar9->ground_heights[0][0] = *(float *)((int)g_BugsGroundHeightGridTemp[0] + iVar7);
        }
        pCVar9 = (CBugs *)((pCVar9->base).base.base.actor_name + 4);
        iVar7 = iVar7 + 4;
        fVar9 = (float)((int)fVar9 + 1);
        pCVar11 = (CBugs *)((pCVar11->base).base.base.actor_name + 4);
      } while ((int)fVar9 < 0xc);
      local_2c = local_2c + 0x30;
      local_14 = local_14 + 1;
      local_28 = (CBugs *)&(local_28->base).base.base.orient;
    } while (local_14 < 0xc);
    this_ptr->grid_cell_x = local_34;
    this_ptr->grid_cell_z = local_10;
  }
  return;
}
