// Name: core_dlight.cpp_CDemonLight_projectLightAndMarkVisibility_FUN_0045cd20
// Address: 0045cd20
// Address Range: [[0045cd20, 0045ce08]]
// Convention: __cdecl
// Signature: ushort * __cdecl core_dlight_cpp_CDemonLight_projectLightAndMarkVisibility_FUN_0045cd20(CDemonLight *this_ptr,CVector3i *projected_coord,uchar x_round_flag,uchar y_round_flag)

#include "nocturne.h"

ushort * __cdecl core_dlight_cpp_CDemonLight_projectLightAndMarkVisibility_FUN_0045cd20(CDemonLight *this_ptr,CVector3i *projected_coord,uchar x_round_flag,uchar y_round_flag)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = 0;
  uVar1 = 0;
  if ((x_round_flag & 1) != 0) {
    uVar1 = 0x4000;
    uVar3 = 0x4000;
  }
  if ((y_round_flag & 1) != 0) {
    uVar3 = uVar3 | 0x8000;
    uVar1 = uVar1 | 0x8000;
  }
  if (0 < projected_coord->z) {
    iVar5 = uVar1 + projected_coord->x;
    uVar1 = iVar5 >> 0x10;
    iVar6 = (int)(uVar3 + projected_coord->y) >> 0x10;
    if (this_ptr->shadow_bounds_mode == SHADOW_BOUNDS_RECTANGULAR) {
      if ((((-1 < (int)uVar1) && ((int)uVar1 < this_ptr->shadow_map_width)) && (-1 < iVar6)) &&
         (iVar6 < this_ptr->shadow_map_height)) goto LAB_0045cdb3;
    }
    else {
      iVar2 = this_ptr->shadow_map_width / 2;
      if ((int)((iVar6 - iVar2) * (iVar6 - iVar2) + (uVar1 - iVar2) * (uVar1 - iVar2)) <=
          iVar2 * iVar2) {
LAB_0045cdb3:
        iVar2 = this_ptr->shadow_map_width * iVar6;
        iVar4 = iVar2 >> 0x1f;
        iVar5 = iVar5 >> 0x1f;
        this_ptr->lightmap_visibility_bits
        [((int)((iVar2 + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3) +
         ((int)((uVar1 + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3)] =
             this_ptr->lightmap_visibility_bits
             [((int)((iVar2 + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3) +
              ((int)((uVar1 + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3)] |
             (&DAT_005f2820)[uVar1 & 7];
        return this_ptr->shadow_depth_buffer + uVar1 + iVar6 * this_ptr->shadow_map_width;
      }
    }
  }
  return (ushort *)0x0;
}
