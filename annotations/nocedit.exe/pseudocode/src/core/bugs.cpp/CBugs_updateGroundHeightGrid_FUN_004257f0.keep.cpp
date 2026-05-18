// Name: core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_004257f0
// Address: 004257f0
// MANUAL RECONSTRUCTION
// Address Range: [[004257f0, 00425b61]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_updateGroundHeightGrid_FUN_004257f0(CBugs *this_ptr)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_updateGroundHeightGrid_FUN_004257f0(CBugs *this_ptr)

{
  float fVar6;
  float fVar7;
  float fVar5;
  int fVar9;
  double dVar10;
  CVector3f local_4c;
  int local_38;
  int local_34;
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
  fVar6 = (this_ptr->base).base.base.location.position.z;
  this_ptr->grid_origin_x =
       ((float)local_34 * 0.5f - (this_ptr->base).base.base.location.position.x) - 2.75f;
  this_ptr->grid_origin_z = (fVar7 - fVar6) - 2.75f;
  if ((local_34 != this_ptr->grid_cell_x) || (local_10 != this_ptr->grid_cell_z)) {
    local_18 = this_ptr->grid_cell_x - local_34;
    local_1c = this_ptr->grid_cell_z - local_10;
    local_24 = local_18 + 0xb;
    local_20 = local_1c + 0xb;
    memcpy(g_BugsGroundHeightGridTemp,this_ptr->ground_heights,sizeof(this_ptr->ground_heights));
    fVar3 = (this_ptr->base).base.base.location.position.x;
    local_4c.y = (this_ptr->base).base.base.location.position.y;
    fVar4 = (this_ptr->base).base.base.location.position.z;
    fVar6 = this_ptr->grid_origin_x;
    fVar2 = this_ptr->grid_origin_z;
    local_14 = 0;
    do {
      fVar9 = 0;
      local_4c.x = (float)local_14 * 0.5f + fVar3 + fVar6;
      do {
        local_4c.z = (float)fVar9 * 0.5f + fVar4 + fVar2;
        if ((((local_14 < local_18) || (local_24 < local_14)) || (fVar9 < local_1c)) ||
           (local_20 < fVar9)) {
          fVar5 = core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0
                            (&g_CDemonRaytraceInstance,&local_4c,&local_38,(CVector3f *)0x0);
          this_ptr->ground_heights[local_14][fVar9] =
               fVar5 - (this_ptr->base).base.base.location.position.y;
        }
        else {
          this_ptr->ground_heights[local_14][fVar9] =
               g_BugsGroundHeightGridTemp[local_14 - local_18][fVar9 - local_1c];
        }
        fVar9 = fVar9 + 1;
      } while (fVar9 < 0xc);
      local_14 = local_14 + 1;
    } while (local_14 < 0xc);
    this_ptr->grid_cell_x = local_34;
    this_ptr->grid_cell_z = local_10;
  }
  return;
}
