// Name: core_dlight.cpp_CDemonLight_projectLightAndMarkVisibility_FUN_00463010
// Address: 00463010
// Address Range: [[00463010, 004630f8]]
// Convention: __cdecl
// Signature: ushort * __cdecl core_dlight_cpp_CDemonLight_projectLightAndMarkVisibility_FUN_00463010(CDemonLight *this_ptr,CVector3i *projected_coord,uchar x_round_flag,uchar y_round_flag)

#include "nocturne.h"

ushort * __cdecl core_dlight_cpp_CDemonLight_projectLightAndMarkVisibility_FUN_00463010(CDemonLight *this_ptr,CVector3i *projected_coord,uchar x_round_flag,uchar y_round_flag)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar5 = 0;
  uVar1 = 0;
  if ((x_round_flag & 1) != 0) {
    uVar1 = 0x4000;
    uVar5 = 0x4000;
  }
  if ((y_round_flag & 1) != 0) {
    uVar5 = uVar5 | 0x8000;
    uVar1 = uVar1 | 0x8000;
  }
  if (0 < *(int *)(projected_coord + 8)) {
    uVar4 = (int)(uVar1 + *(int *)projected_coord) >> 0x10;
    iVar8 = (int)(uVar5 + *(int *)(projected_coord + 4)) >> 0x10;
    if (*(int *)&this_ptr->field_0x1cb8 == 0) {
      if ((((-1 < (int)uVar4) && ((int)uVar4 < *(int *)&this_ptr->field_0x1cc0)) && (-1 < iVar8)) &&
         (iVar8 < *(int *)&this_ptr->field_0x1cc4)) goto LAB_004630a3;
    }
    else {
      iVar2 = *(int *)&this_ptr->field_0x1cc0 / 2;
      if ((int)((iVar8 - iVar2) * (iVar8 - iVar2) + (uVar4 - iVar2) * (uVar4 - iVar2)) <=
          iVar2 * iVar2) {
LAB_004630a3:
        iVar2 = *(int *)&this_ptr->field_0x1cc0 * iVar8;
        iVar6 = iVar2 >> 0x1f;
        iVar7 = (int)(uVar1 + *(int *)projected_coord) >> 0x1f;
        pbVar3 = (byte *)(*(int *)&this_ptr->field_0x2fa0 +
                         ((int)((iVar2 + iVar6 * -8) - (uint)(iVar6 << 2 < 0)) >> 3) +
                         ((int)((uVar4 + iVar7 * -8) - (uint)(iVar7 << 2 < 0)) >> 3));
        *pbVar3 = *pbVar3 | (&DAT_006122a0)[uVar4 & 7];
        return (ushort *)
               (*(int *)&this_ptr->field_0x2f94 +
               (uVar4 + iVar8 * *(int *)&this_ptr->field_0x1cc0) * 2);
      }
    }
  }
  return (ushort *)0x0;
}
