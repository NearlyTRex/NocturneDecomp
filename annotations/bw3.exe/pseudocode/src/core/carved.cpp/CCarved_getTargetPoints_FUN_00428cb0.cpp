// Name: core_carved.cpp_CCarved_getTargetPoints_FUN_00428cb0
// Address: 00428cb0
// Address Range: [[00428cb0, 00428fb3]]
// Convention: __cdecl
// Signature: int __cdecl core_carved_cpp_CCarved_getTargetPoints_FUN_00428cb0(CCarved *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_carved_cpp_CCarved_getTargetPoints_FUN_00428cb0(CCarved *this_ptr,CVector3f *out_points_array)

{
  float fVar1;
  CVector3f *pCVar2;
  byte bVar3;
  float afStackY_1088 [1016];
  float fStack_a0;
  CVector3f CStack_94;
  float fStack_88;
  float afStack_84 [2];
  CVector3f CStack_7c;
  CVector3f CStack_70;
  float fStack_64;
  float afStack_60 [5];
  CVector3f CStack_4c;
  CVector3f CStack_40;
  float fStack_34;
  float afStack_30 [2];
  CVector3f CStack_28;
  int iStack_1c;
  byte *puStack_18;
  int iStack_14;
  
  bVar3 = 0;
  core_skeleton_cpp_FUN_0054dcc0(&this_ptr->field_0x158,*(uint *)&this_ptr->field_0xd09c);
  CStack_7c.x = fStack_88;
  *(float *)((int)&CStack_7c + (uint)bVar3 * -8 + 4) = afStack_84[(uint)bVar3 * -2];
  *(float *)((int)&CStack_7c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       afStack_84[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  if (&CStack_7c != out_points_array) {
    out_points_array->x = CStack_7c.x;
    out_points_array->y = CStack_7c.y;
    out_points_array->z = CStack_7c.z;
  }
  puStack_18 = &this_ptr->field_0x158;
  iStack_1c = 0;
  iStack_14 = 1;
  do {
    switch((iStack_1c + *(int *)&this_ptr->field_0x6c) % 4) {
    case 0:
      if (*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xd0a4 * 4) != 0) {
        core_skeleton_cpp_FUN_0054dcc0(puStack_18,*(uint *)&this_ptr->field_0xd08c);
        CStack_40.x = fStack_34;
        *(float *)((int)&CStack_40 + (uint)bVar3 * -8 + 4) = afStack_30[(uint)bVar3 * -2];
        *(float *)((int)&CStack_40 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
             afStack_30[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
        if (&CStack_70 != &CStack_40) {
          CStack_70.x = CStack_40.x;
          CStack_70.y = CStack_40.y;
          CStack_70.z = CStack_40.z;
        }
        CStack_70.y = CStack_7c.y * (float)_DAT_005b7eaf + CStack_70.y * (float)_DAT_005b7ea7;
        CStack_70.x = CStack_7c.x * (float)_DAT_005b7e9f + CStack_70.x * (float)_DAT_005b7e9f;
LAB_00428ddf:
        pCVar2 = out_points_array + iStack_14;
        if (pCVar2 != &CStack_70) {
          pCVar2->x = CStack_70.x;
          pCVar2->y = CStack_70.y;
          fVar1 = CStack_70.z;
          goto LAB_00428df8;
        }
LAB_00428dfb:
        iStack_14 = iStack_14 + 1;
      }
      break;
    case 1:
      if (*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xd0ac * 4) != 0) {
        core_skeleton_cpp_FUN_0054dcc0(puStack_18,*(uint *)&this_ptr->field_0xd090);
        CStack_94.x = afStack_60[2];
        *(float *)((int)&CStack_94 + (uint)bVar3 * -8 + 4) = afStack_60[(uint)bVar3 * -2 + 3];
        *(float *)((int)&CStack_94 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
             afStack_60[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
        if (&CStack_70 != &CStack_94) {
          CStack_70.x = CStack_94.x;
          CStack_70.y = CStack_94.y;
          CStack_70.z = CStack_94.z;
        }
        CStack_70.y = CStack_7c.y * (float)_DAT_005b7eaf + CStack_70.y * (float)_DAT_005b7ea7;
        CStack_70.x = CStack_7c.x * (float)_DAT_005b7e9f + CStack_70.x * (float)_DAT_005b7e9f;
        goto LAB_00428ddf;
      }
      break;
    case 2:
      if (*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xd0bc * 4) != 0) {
        core_skeleton_cpp_FUN_0054dcc0(puStack_18,*(uint *)&this_ptr->field_0xd078);
        pCVar2 = out_points_array + iStack_14;
        CStack_28.x = fStack_a0;
        *(uint *)((int)&CStack_28 + (uint)bVar3 * -8 + 4) =
             *(uint *)(&stack0xffffff64 + (uint)bVar3 * -8);
        *(uint *)((int)&CStack_28 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
             *(uint *)(&stack0xffffff68 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
        if (pCVar2 == &CStack_28) goto LAB_00428dfb;
        pCVar2->x = CStack_28.x;
        pCVar2->y = CStack_28.y;
        fVar1 = CStack_28.z;
LAB_00428df8:
        pCVar2->z = fVar1;
        goto LAB_00428dfb;
      }
      break;
    case 3:
      if (*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xd0b8 * 4) != 0) {
        core_skeleton_cpp_FUN_0054dcc0(puStack_18,*(uint *)&this_ptr->field_0xd0a0);
        CStack_4c.x = fStack_64;
        *(float *)((int)&CStack_4c + (uint)bVar3 * -8 + 4) = afStack_60[(uint)bVar3 * -2];
        *(float *)((int)&CStack_4c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
             afStack_60[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
        pCVar2 = out_points_array + iStack_14;
        if (pCVar2 != &CStack_4c) {
          pCVar2->x = CStack_4c.x;
          pCVar2->y = CStack_4c.y;
          fVar1 = CStack_4c.z;
          goto LAB_00428df8;
        }
        goto LAB_00428dfb;
      }
    }
    iStack_1c = iStack_1c + 1;
    if (3 < iStack_1c) {
      return iStack_14;
    }
  } while( true );
}
