// Name: shape_superopt.cpp_CPoly_projectUVPlanar_FUN_005ce0a0
// Address: 005ce0a0
// MANUAL RECONSTRUCTION
// Address Range: [[005ce0a0, 005ce3bb]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CPoly_projectUVPlanar_FUN_005ce0a0(CPoly *this_ptr,CVector2d *uv_scale)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CPoly_projectUVPlanar_FUN_005ce0a0(CPoly *this_ptr,CVector2d *uv_scale)

{
  int iVar4;
  double sign_x;
  double local_80;
  double local_78;
  double local_70;
  double sign_y;
  double sign_z;
  double dVar6;
  int iVar3;
  CVert *pCVar2;

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
    sign_x = -1.0;
  }
  else {
    sign_x = 1.0;
  }
  if ((this_ptr->normal).impl.y < 0.0) {
    sign_y = -1.0;
  }
  else {
    sign_y = 1.0;
  }
  if ((this_ptr->normal).impl.z < 0.0) {
    sign_z = -1.0;
  }
  else {
    sign_z = 1.0;
  }
  pCVar2 = this_ptr->parent_obj->vertex_data;
  if ((local_80 <= local_78) && (local_70 <= local_78)) {
    for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
      iVar4 = (&this_ptr->vertex_idx_0)[iVar3];
      this_ptr->uv_coords[iVar3].impl.x =
           pCVar2[iVar4].position.z * uv_scale->x * sign_x * dVar6;
      this_ptr->uv_coords[iVar3].impl.y = -pCVar2[iVar4].position.y * uv_scale->y * dVar6;
    }
    return;
  }
  if ((local_78 <= local_80) && (local_70 <= local_80)) {
    for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
      iVar4 = (&this_ptr->vertex_idx_0)[iVar3];
      this_ptr->uv_coords[iVar3].impl.x = pCVar2[iVar4].position.x * uv_scale->x * dVar6;
      this_ptr->uv_coords[iVar3].impl.y =
           -pCVar2[iVar4].position.z * uv_scale->y * sign_y * dVar6;
    }
    return;
  }
  for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
    iVar4 = (&this_ptr->vertex_idx_0)[iVar3];
    this_ptr->uv_coords[iVar3].impl.x =
         -pCVar2[iVar4].position.x * uv_scale->x * sign_z * dVar6;
    this_ptr->uv_coords[iVar3].impl.y = -pCVar2[iVar4].position.y * uv_scale->y * dVar6;
  }
  return;
}
