// Name: core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
// Address: 00420940
// MANUAL RECONSTRUCTION
// Address Range: [[00420940, 00420d69]]
// Convention: __cdecl
// Signature: float __cdecl core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940(CBoundingBox3D *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

#include "nocturne.h"

float __cdecl core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940(CBoundingBox3D *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

{
  float fVar3;
  bool bVar4;
  CVector3f local_5c [2];
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_20;
  float fVar1;
  float fVar2;
  int bVar3;  // Ghidra typed as bool but asm uses values 0/1/2 (tri-state axis indicator)
  
  bVar4 = true;
  if (ray_origin->x < (this_ptr->min).x) {
    fVar3 = (this_ptr->min).x - ray_origin->x;
    if (ray_direction->x < fVar3) {
      return -1.0;
    }
    local_34 = fVar3 / ray_direction->x;
    local_40 = -1.0;
LAB_00420997:
    bVar4 = false;
  }
  else {
    if ((this_ptr->max).x < ray_origin->x) {
      fVar3 = (this_ptr->max).x - ray_origin->x;
      if (fVar3 < ray_direction->x) {
        return -1.0;
      }
      local_34 = fVar3 / ray_direction->x;
      local_40 = 1.0;
      goto LAB_00420997;
    }
    local_34 = -1.0;
  }
  if ((this_ptr->min).y <= ray_origin->y) {
    if (ray_origin->y <= (this_ptr->max).y) {
      local_30 = -1.0;
      goto LAB_004209dc;
    }
    fVar3 = (this_ptr->max).y - ray_origin->y;
    if (fVar3 < ray_direction->y) {
      return -1.0;
    }
    local_30 = fVar3 / ray_direction->y;
    local_44 = 1.0;
  }
  else {
    fVar3 = (this_ptr->min).y - ray_origin->y;
    if (ray_direction->y < fVar3) {
      return -1.0;
    }
    local_30 = fVar3 / ray_direction->y;
    local_44 = -1.0;
  }
  bVar4 = false;
LAB_004209dc:
  if ((this_ptr->min).z <= ray_origin->z) {
    if ((this_ptr->max).z < ray_origin->z) {
      fVar3 = (this_ptr->max).z - ray_origin->z;
      if (fVar3 < ray_direction->z) {
        return -1.0;
      }
      local_38 = fVar3 / ray_direction->z;
      local_20 = 1.0;
    }
    else {
      local_38 = -1.0;
      if (bVar4) {
        if (out_normal != (CVector3f *)0x0) {
          fVar1 = ray_direction->y;
          fVar2 = ray_direction->z;
          if (out_normal != local_5c) {
            out_normal->x = -ray_direction->x;
            out_normal->y = -fVar1;
            out_normal->z = -fVar2;
          }
          fVar3 = SQRT(out_normal->z * out_normal->z +
                       out_normal->x * out_normal->x + out_normal->y * out_normal->y);
          if (fVar3 <= 0.0) {
            out_normal->z = 0.0;
            out_normal->y = out_normal->z;
            out_normal->x = out_normal->y;
            return 0.0;
          }
          fVar3 = 1.0 / fVar3;
          out_normal->x = out_normal->x * fVar3;
          out_normal->y = out_normal->y * fVar3;
          out_normal->z = out_normal->z * fVar3;
        }
        return 0.0;
      }
    }
  }
  else {
    fVar3 = (this_ptr->min).z - ray_origin->z;
    if (ray_direction->z < fVar3) {
      return -1.0;
    }
    local_38 = fVar3 / ray_direction->z;
    local_20 = -1.0;
  }
  local_2c = local_34;
  if (local_34 < local_30) {
    local_2c = local_30;
  }
  bVar3 = local_34 < local_30;
  if (local_38 <= local_2c) {
    if (!bVar3) {
      fVar3 = ray_direction->y * local_2c + ray_origin->y;
      if (fVar3 < (this_ptr->min).y) {
        return -1.0;
      }
      if ((this_ptr->max).y < fVar3) {
        return -1.0;
      }
      fVar3 = ray_direction->z * local_2c + ray_origin->z;
      if (fVar3 < (this_ptr->min).z) {
        return -1.0;
      }
      if (fVar3 <= (this_ptr->max).z) {
        if (out_normal == (CVector3f *)0x0) {
          return local_2c;
        }
        out_normal->y = 0.0;
        out_normal->z = 0.0;
        out_normal->x = local_40;
        return local_2c;
      }
      return -1.0;
    }
    if (bVar3 < 2) {
      fVar3 = ray_direction->x * local_2c + ray_origin->x;
      if (fVar3 < (this_ptr->min).x) {
        return -1.0;
      }
      if ((this_ptr->max).x < fVar3) {
        return -1.0;
      }
      fVar3 = ray_direction->z * local_2c + ray_origin->z;
      if (fVar3 < (this_ptr->min).z) {
        return -1.0;
      }
      if ((this_ptr->max).z < fVar3) {
        return -1.0;
      }
      if (out_normal == (CVector3f *)0x0) {
        return local_2c;
      }
      out_normal->z = 0.0;
      out_normal->x = 0.0;
      out_normal->y = local_44;
      return local_2c;
    }
    if (bVar3 != true) {
      return local_2c;
    }
  }
  else {
    local_2c = local_38;
  }
  fVar3 = ray_direction->x * local_2c + ray_origin->x;
  if (((((this_ptr->min).x <= fVar3) && (fVar3 <= (this_ptr->max).x)) &&
      (fVar3 = ray_direction->y * local_2c + ray_origin->y, (this_ptr->min).y <= fVar3)) &&
     (fVar3 <= (this_ptr->max).y)) {
    if (out_normal != (CVector3f *)0x0) {
      out_normal->y = 0.0;
      out_normal->x = 0.0;
      out_normal->z = local_20;
    }
    return local_2c;
  }
  return -1.0;
}
