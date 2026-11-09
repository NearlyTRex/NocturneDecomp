// Name: core_box.cpp_FUN_005b2050
// Address: 005b2050
// Address Range: [[005b2050, 005b228c]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_FUN_005b2050(CBox *this_ptr,CVector3f *new_position,CVector3f *new_orientation,float speed)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_box_cpp_FUN_005b2050(CBox *this_ptr,CVector3f *new_position,CVector3f *new_orientation,float speed)

{
  float fVar1;
  float fVar2;
  CBox *pCVar3;
  byte bVar4;
  float afStackY_1034 [1016];
  float local_4c;
  float local_48 [4];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  CBox *local_1c;
  CMatrix3x3f *local_18;
  int local_14;
  
  bVar4 = 0;
  if ((CVector3f *)this_ptr != new_position) {
    *(uint *)this_ptr = *(uint *)new_position;
    *(uint *)(this_ptr + 4) = *(uint *)&new_position->field_0x4;
    *(uint *)(this_ptr + 8) = *(uint *)&new_position->field_0x8;
  }
  if ((CVector3f *)(this_ptr + 0xc) != new_orientation) {
    *(uint *)(this_ptr + 0xc) = *(uint *)new_orientation;
    *(uint *)(this_ptr + 0x10) = *(uint *)&new_orientation->field_0x4;
    *(uint *)(this_ptr + 0x14) = *(uint *)&new_orientation->field_0x8;
  }
  core_dirmat_cpp_FUN_00449280((CMatrix3x3f *)(this_ptr + 0x18),(CVector3f *)(this_ptr + 0xc));
  fVar2 = (float)_DAT_005f12c8;
  *(float *)(this_ptr + 0x94) = speed * fVar2;
  fVar1 = (float)_DAT_005f12d0;
  *(float *)(this_ptr + 0x98) =
       speed * fVar2 * fVar1 *
       (*(float *)(this_ptr + 0xac) * *(float *)(this_ptr + 0xac) +
       *(float *)(this_ptr + 0xa8) * *(float *)(this_ptr + 0xa8));
  *(float *)(this_ptr + 0x9c) =
       *(float *)(this_ptr + 0x94) * fVar1 *
       (*(float *)(this_ptr + 0xac) * *(float *)(this_ptr + 0xac) +
       *(float *)(this_ptr + 0xa4) * *(float *)(this_ptr + 0xa4));
  *(float *)(this_ptr + 0xa0) =
       *(float *)(this_ptr + 0x94) * fVar1 *
       (*(float *)(this_ptr + 0xa8) * *(float *)(this_ptr + 0xa8) +
       *(float *)(this_ptr + 0xa4) * *(float *)(this_ptr + 0xa4));
  *(uint *)(this_ptr + 0x6c) = 0;
  *(uint *)(this_ptr + 0x68) = *(uint *)(this_ptr + 0x6c);
  *(uint *)(this_ptr + 100) = *(uint *)(this_ptr + 0x68);
  *(uint *)(this_ptr + 0x90) = 0;
  *(uint *)(this_ptr + 0x8c) = *(uint *)(this_ptr + 0x90);
  *(uint *)(this_ptr + 0x88) = *(uint *)(this_ptr + 0x8c);
  *(uint *)(this_ptr + 0x54) = 0;
  *(uint *)(this_ptr + 0x50) = *(uint *)(this_ptr + 0x54);
  *(uint *)(this_ptr + 0x4c) = *(uint *)(this_ptr + 0x50);
  *(uint *)(this_ptr + 0x78) = 0;
  *(uint *)(this_ptr + 0x74) = *(uint *)(this_ptr + 0x78);
  *(uint *)(this_ptr + 0x70) = *(uint *)(this_ptr + 0x74);
  *(uint *)(this_ptr + 0x60) = 0;
  *(uint *)(this_ptr + 0x5c) = *(uint *)(this_ptr + 0x60);
  *(uint *)(this_ptr + 0x58) = *(uint *)(this_ptr + 0x5c);
  *(uint *)(this_ptr + 0x84) = 0;
  *(uint *)(this_ptr + 0x80) = *(uint *)(this_ptr + 0x84);
  *(uint *)(this_ptr + 0x7c) = *(uint *)(this_ptr + 0x80);
  *(uint *)(this_ptr + 0x48) = 0;
  *(uint *)(this_ptr + 0x44) = *(uint *)(this_ptr + 0x48);
  *(uint *)(this_ptr + 0x40) = *(uint *)(this_ptr + 0x44);
  local_14 = 0;
  if (0 < *(int *)(this_ptr + 0xb0)) {
    local_1c = this_ptr + 0xb4;
    pCVar3 = this_ptr + 0xc0;
    local_18 = (CMatrix3x3f *)(this_ptr + 0x18);
    do {
      core_dirmat_cpp_FUN_00449530(local_18,local_1c + local_14 * 0x34);
      local_34 = local_28;
      local_48[(uint)bVar4 * -2 + 6] = local_48[(uint)bVar4 * -2 + 9];
      local_48[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
           local_48[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
      local_48[2] = *(float *)this_ptr + local_34;
      local_48[3] = *(float *)(this_ptr + 4) + local_30;
      local_38 = *(float *)(this_ptr + 8) + local_2c;
      local_4c = *(float *)this_ptr + local_34;
      local_48[(uint)bVar4 * -2] = local_48[(uint)bVar4 * -2 + 3];
      local_48[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           local_48[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
      if (pCVar3 != (CBox *)&local_4c) {
        *(float *)pCVar3 = local_4c;
        *(float *)(pCVar3 + 4) = local_48[0];
        *(float *)(pCVar3 + 8) = local_48[1];
      }
      pCVar3 = pCVar3 + 0x34;
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(this_ptr + 0xb0));
  }
  *(uint *)(this_ptr + 0x254) = 1;
  return;
}
