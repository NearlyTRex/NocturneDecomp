// Name: shape_superopt.cpp_CPoly_projectUVPlanar_FUN_005ce0a0
// Address: 005ce0a0
// Address Range: [[005ce0a0, 005ce3bb]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CPoly_projectUVPlanar_FUN_005ce0a0(CPoly *this_ptr,CVector2d *uv_scale)

#include "nocturne.h"

void __cdecl
shape_superopt_cpp_CPoly_projectUVPlanar_FUN_005ce0a0(CPoly *this_ptr,CVector2d *uv_scale)

{
  CVert *pCVar1;
  int iVar2;
  CPoly *pCVar3;
  double dVar4;
  double dVar5;
  CVector2d *pCVar6;
  int *piVar7;
  uint local_84;
  double local_80;
  double local_78;
  double local_70;
  uint local_64;
  uint local_5c;
  
  dVar5 = 0.00390625;
  if (0.0 <= (this_ptr->normal).z) {
    local_70 = (this_ptr->normal).z;
  }
  else {
    local_70 = -(this_ptr->normal).z;
  }
  if ((this_ptr->normal).y < 0.0) {
    local_80 = -(this_ptr->normal).y;
  }
  else {
    local_80 = (this_ptr->normal).y;
  }
  if ((this_ptr->normal).x < 0.0) {
    local_78 = -(this_ptr->normal).x;
  }
  else {
    local_78 = (this_ptr->normal).x;
  }
  if ((this_ptr->normal).x < 0.0) {
    local_84 = 0xbff00000;
  }
  else {
    local_84 = 0x3ff00000;
  }
  if ((this_ptr->normal).y < 0.0) {
    local_64 = 0xbff00000;
  }
  else {
    local_64 = 0x3ff00000;
  }
  if ((this_ptr->normal).z < 0.0) {
    local_5c = 0xbff00000;
  }
  else {
    local_5c = 0x3ff00000;
  }
  pCVar1 = this_ptr->parent_obj->vertex_data;
  if ((local_80 <= local_78) && (local_70 <= local_78)) {
    piVar7 = &this_ptr->vertex_idx_2;
    pCVar3 = this_ptr;
    do {
      pCVar6 = pCVar3->uv_coords;
      iVar2 = this_ptr->vertex_idx_0;
      pCVar6->x = pCVar1[iVar2].position.z * uv_scale->x * (double)((ulonglong)local_84 << 0x20);
      dVar4 = -pCVar1[iVar2].position.y * uv_scale->y;
      pCVar3->uv_coords[0].y = dVar4;
      this_ptr = (CPoly *)&this_ptr->vertex_idx_0;
      pCVar6->x = pCVar6->x * dVar5;
      pCVar3->uv_coords[0].y = dVar4 * dVar5;
      pCVar3 = (CPoly *)pCVar6;
    } while (this_ptr != (CPoly *)piVar7);
    return;
  }
  if ((local_78 <= local_80) && (local_70 <= local_80)) {
    piVar7 = &this_ptr->vertex_idx_2;
    pCVar3 = this_ptr;
    do {
      pCVar6 = pCVar3->uv_coords;
      iVar2 = this_ptr->vertex_idx_0;
      pCVar6->x = pCVar1[iVar2].position.x * uv_scale->x;
      dVar4 = -pCVar1[iVar2].position.z * uv_scale->y * (double)((ulonglong)local_64 << 0x20);
      pCVar3->uv_coords[0].y = dVar4;
      this_ptr = (CPoly *)&this_ptr->vertex_idx_0;
      pCVar6->x = pCVar6->x * dVar5;
      pCVar3->uv_coords[0].y = dVar4 * dVar5;
      pCVar3 = (CPoly *)pCVar6;
    } while (this_ptr != (CPoly *)piVar7);
    return;
  }
  piVar7 = &this_ptr->vertex_idx_2;
  pCVar3 = this_ptr;
  do {
    pCVar6 = pCVar3->uv_coords;
    iVar2 = this_ptr->vertex_idx_0;
    pCVar6->x = -pCVar1[iVar2].position.x * uv_scale->x * (double)((ulonglong)local_5c << 0x20);
    dVar4 = -pCVar1[iVar2].position.y * uv_scale->y;
    pCVar3->uv_coords[0].y = dVar4;
    this_ptr = (CPoly *)&this_ptr->vertex_idx_0;
    pCVar6->x = pCVar6->x * dVar5;
    pCVar3->uv_coords[0].y = dVar4 * dVar5;
    pCVar3 = (CPoly *)pCVar6;
  } while (this_ptr != (CPoly *)piVar7);
  return;
}
