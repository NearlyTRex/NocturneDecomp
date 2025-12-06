// Name: core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
// Address: 00420940
// Address Range: [[00420940, 00420d69]]
// Convention: __cdecl
// Signature: float core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940(CBoundingBox3D * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * out_normal)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00420d35) */

float __cdecl
core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
          (CBoundingBox3D *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,
          CVector3f *out_normal)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  BADSPACEBASE *in_ESP;
  CVector3f local_5c [2];
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_20;
  
  bVar3 = true;
  if (ray_origin->x < (this_ptr->min).x) {
    local_34 = (this_ptr->min).x - ray_origin->x;
    if (ray_direction->x < local_34) {
      return -1.0;
    }
    local_34 = local_34 / ray_direction->x;
    local_40 = -1.0;
LAB_00420997:
    bVar3 = false;
  }
  else {
    if ((this_ptr->max).x < ray_origin->x) {
      local_34 = (this_ptr->max).x - ray_origin->x;
      if (local_34 < ray_direction->x) {
        return -1.0;
      }
      local_34 = local_34 / ray_direction->x;
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
    local_30 = (this_ptr->max).y - ray_origin->y;
    if (local_30 < ray_direction->y) {
      return -1.0;
    }
    local_30 = local_30 / ray_direction->y;
    local_44 = 1.0;
  }
  else {
    local_30 = (this_ptr->min).y - ray_origin->y;
    if (ray_direction->y < local_30) {
      return -1.0;
    }
    local_30 = local_30 / ray_direction->y;
    local_44 = -1.0;
  }
  bVar3 = false;
LAB_004209dc:
  if ((this_ptr->min).z <= ray_origin->z) {
    if ((this_ptr->max).z < ray_origin->z) {
      local_38 = (this_ptr->max).z - ray_origin->z;
      if (local_38 < ray_direction->z) {
        return -1.0;
      }
      local_38 = local_38 / ray_direction->z;
      local_20 = 1.0;
    }
    else {
      local_38 = -1.0;
      if (bVar3) {
        if (out_normal != (CVector3f *)0x0) {
          fVar1 = ray_direction->y;
          fVar2 = ray_direction->z;
          if (out_normal != local_5c) {
            out_normal->x = -ray_direction->x;
            out_normal->y = -fVar1;
            out_normal->z = -fVar2;
          }
          fVar1 = SQRT(out_normal->z * out_normal->z +
                       out_normal->x * out_normal->x + out_normal->y * out_normal->y);
          if (fVar1 <= 0.0) {
            out_normal->z = 0.0;
            out_normal->y = out_normal->z;
            out_normal->x = out_normal->y;
            return 0.0;
          }
          fVar1 = 1.0 / fVar1;
          out_normal->x = out_normal->x * fVar1;
          out_normal->y = out_normal->y * fVar1;
          out_normal->z = out_normal->z * fVar1;
        }
        return 0.0;
      }
    }
  }
  else {
    local_38 = (this_ptr->min).z - ray_origin->z;
    if (ray_direction->z < local_38) {
      return -1.0;
    }
    local_38 = local_38 / ray_direction->z;
    local_20 = -1.0;
  }
  local_2c = local_34;
  if (local_34 < local_30) {
    local_2c = local_30;
  }
  bVar3 = local_34 < local_30;
  if (local_38 <= local_2c) {
    if (!bVar3) {
      fVar1 = ray_direction->y * local_2c + ray_origin->y;
      if (fVar1 < (this_ptr->min).y) {
        return -1.0;
      }
      if ((this_ptr->max).y < fVar1) {
        return -1.0;
      }
      fVar1 = ray_direction->z * local_2c + ray_origin->z;
      if (fVar1 < (this_ptr->min).z) {
        return -1.0;
      }
      if (fVar1 <= (this_ptr->max).z) {
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
      fVar1 = ray_direction->x * local_2c + ray_origin->x;
      if (fVar1 < (this_ptr->min).x) {
        return -1.0;
      }
      if ((this_ptr->max).x < fVar1) {
        return -1.0;
      }
      fVar1 = ray_direction->z * local_2c + ray_origin->z;
      if (fVar1 < (this_ptr->min).z) {
        return -1.0;
      }
      if ((this_ptr->max).z < fVar1) {
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
  fVar1 = ray_direction->x * local_2c + ray_origin->x;
  if (((((this_ptr->min).x <= fVar1) && (fVar1 <= (this_ptr->max).x)) &&
      (fVar1 = ray_direction->y * local_2c + ray_origin->y, (this_ptr->min).y <= fVar1)) &&
     (fVar1 <= (this_ptr->max).y)) {
    if (out_normal != (CVector3f *)0x0) {
      out_normal->y = 0.0;
      out_normal->x = 0.0;
      out_normal->z = local_20;
    }
    return local_2c;
  }
  return -1.0;
}
