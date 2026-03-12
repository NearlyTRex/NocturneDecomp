// Name: shape_superopt.cpp_CPoly_projectUVPlanar_FUN_005ce0a0
// Address: 005ce0a0
// Address Range: [[005ce0a0, 005ce3bb]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CPoly_projectUVPlanar_FUN_005ce0a0(CPoly *this_ptr,CVector2d *uv_scale)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_projectUVPlanar_FUN_005ce0a0(CPoly *this_ptr,CVector2d *uv_scale)

{
  double dVar2;
  int iVar4;
  CPoly *pCVar5;
  double dVar7;
  CP2D *pCVar7;
  CP2D *pCVar8;
  int *piVar8;
  int *piVar9;
  uint local_84;
  double local_80;
  double local_78;
  double local_70;
  uint local_64;
  uint local_5c;
  double dVar6;
  int iVar3;
  double dVar1;
  CVert *pCVar2;
  CPoly *pCVar4;
  double dVar5;
  
  dVar6 = 0.00390625;
  if (0.0 <= (this_ptr->normal).impl.z) {
    local_70 = (this_ptr->normal).impl.z;
  }
  else {
    local_70 = -(this_ptr->normal).impl.z;
  }
  if ((this_ptr->normal).impl.y < 0.0) {
    local_80 = -(this_ptr->normal).impl.y;
  }
  else {
    local_80 = (this_ptr->normal).impl.y;
  }
  if ((this_ptr->normal).impl.x < 0.0) {
    local_78 = -(this_ptr->normal).impl.x;
  }
  else {
    local_78 = (this_ptr->normal).impl.x;
  }
  if ((this_ptr->normal).impl.x < 0.0) {
    local_84 = 0xbff00000;
  }
  else {
    local_84 = 0x3ff00000;
  }
  if ((this_ptr->normal).impl.y < 0.0) {
    local_64 = 0xbff00000;
  }
  else {
    local_64 = 0x3ff00000;
  }
  if ((this_ptr->normal).impl.z < 0.0) {
    local_5c = 0xbff00000;
  }
  else {
    local_5c = 0x3ff00000;
  }
  pCVar2 = this_ptr->parent_obj->vertex_data;
  if ((local_80 <= local_78) && (local_70 <= local_78)) {
    piVar8 = &this_ptr->vertex_idx_2;
    pCVar4 = this_ptr;
    do {
      pCVar7 = pCVar4->uv_coords;
      iVar3 = this_ptr->vertex_idx_0;
      (pCVar7->impl).x =
           pCVar2[iVar3].position.z * uv_scale->x * (double)((ulonglong)local_84 << 0x20);
      dVar5 = -pCVar2[iVar3].position.y * uv_scale->y;
      dVar1 = (pCVar7->impl).x;
      pCVar4->uv_coords[0].impl.y = dVar5;
      this_ptr = (CPoly *)&this_ptr->vertex_idx_0;
      (pCVar7->impl).x = dVar1 * dVar6;
      pCVar4->uv_coords[0].impl.y = dVar5 * dVar6;
      pCVar4 = (CPoly *)pCVar7;
    } while (this_ptr != (CPoly *)piVar8);
    return;
  }
  if ((local_78 <= local_80) && (local_70 <= local_80)) {
    piVar9 = &this_ptr->vertex_idx_2;
    pCVar5 = this_ptr;
    do {
      pCVar8 = pCVar5->uv_coords;
      iVar4 = this_ptr->vertex_idx_0;
      (pCVar8->impl).x = pCVar2[iVar4].position.x * uv_scale->x;
      dVar7 = -pCVar2[iVar4].position.z * uv_scale->y * (double)((ulonglong)local_64 << 0x20);
      dVar2 = (pCVar8->impl).x;
      pCVar5->uv_coords[0].impl.y = dVar7;
      this_ptr = (CPoly *)&this_ptr->vertex_idx_0;
      (pCVar8->impl).x = dVar2 * dVar6;
      pCVar5->uv_coords[0].impl.y = dVar7 * dVar6;
      pCVar5 = (CPoly *)pCVar8;
    } while (this_ptr != (CPoly *)piVar9);
    return;
  }
  piVar9 = &this_ptr->vertex_idx_2;
  pCVar5 = this_ptr;
  do {
    pCVar8 = pCVar5->uv_coords;
    iVar4 = this_ptr->vertex_idx_0;
    (pCVar8->impl).x =
         -pCVar2[iVar4].position.x * uv_scale->x * (double)((ulonglong)local_5c << 0x20);
    dVar7 = -pCVar2[iVar4].position.y * uv_scale->y;
    dVar2 = (pCVar8->impl).x;
    pCVar5->uv_coords[0].impl.y = dVar7;
    this_ptr = (CPoly *)&this_ptr->vertex_idx_0;
    (pCVar8->impl).x = dVar2 * dVar6;
    pCVar5->uv_coords[0].impl.y = dVar7 * dVar6;
    pCVar5 = (CPoly *)pCVar8;
  } while (this_ptr != (CPoly *)piVar9);
  return;
}
