// Name: core_ghoul.cpp_CGhoul_getTargetPoints_FUN_004c44d0
// Address: 004c44d0
// Address Range: [[004c44d0, 004c479d]]
// Convention: __cdecl
// Signature: int __cdecl core_ghoul_cpp_CGhoul_getTargetPoints_FUN_004c44d0(CGhoul *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_ghoul_cpp_CGhoul_getTargetPoints_FUN_004c44d0(CGhoul *this_ptr,CVector3f *out_points_array)

{
  float fVar1;
  CVector3f *pCVar2;
  int iVar3;
  byte bVar4;
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
  CDeformableModelInstance *pCStack_18;
  
  bVar4 = 0;
  core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,_DAT_01cb8240);
  CStack_7c.x = fStack_88;
  *(float *)((int)&CStack_7c + (uint)bVar4 * -8 + 4) = afStack_84[(uint)bVar4 * -2];
  *(float *)((int)&CStack_7c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_84[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  if (&CStack_7c != out_points_array) {
    out_points_array->x = CStack_7c.x;
    out_points_array->y = CStack_7c.y;
    out_points_array->z = CStack_7c.z;
  }
  iVar3 = 1;
  pCStack_18 = &(this_ptr->base).base.model;
  iStack_1c = 0;
  do {
    switch((iStack_1c + (this_ptr->base).base.base.direction_hint) % 4) {
    case 0:
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]] != 0) {
        core_skeleton_cpp_FUN_00546a90(pCStack_18,_DAT_01cb8230);
        CStack_40.x = fStack_64;
        *(float *)((int)&CStack_40 + (uint)bVar4 * -8 + 4) = afStack_60[(uint)bVar4 * -2];
        *(float *)((int)&CStack_40 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
             afStack_60[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
        if (&CStack_70 != &CStack_40) {
          CStack_70.x = CStack_40.x;
          CStack_70.y = CStack_40.y;
          CStack_70.z = CStack_40.z;
        }
LAB_004c45c3:
        CStack_70.y = CStack_7c.y * (float)_DAT_005d925f + CStack_70.y * (float)_DAT_005d9257;
        CStack_70.x = CStack_7c.x * (float)_DAT_005d924f + CStack_70.x * (float)_DAT_005d924f;
        pCVar2 = out_points_array + iVar3;
        if (pCVar2 != &CStack_70) {
          pCVar2->x = CStack_70.x;
          pCVar2->y = CStack_70.y;
          fVar1 = CStack_70.z;
          goto LAB_004c461a;
        }
LAB_004c461d:
        iVar3 = iVar3 + 1;
      }
      break;
    case 1:
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[2]] != 0) {
        core_skeleton_cpp_FUN_00546a90(pCStack_18,_DAT_01cb8234);
        CStack_94.x = fStack_34;
        *(float *)((int)&CStack_94 + (uint)bVar4 * -8 + 4) = afStack_30[(uint)bVar4 * -2];
        *(float *)((int)&CStack_94 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
             afStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
        if (&CStack_70 != &CStack_94) {
          CStack_70.x = CStack_94.x;
          CStack_70.y = CStack_94.y;
          CStack_70.z = CStack_94.z;
        }
        goto LAB_004c45c3;
      }
      break;
    case 2:
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[10]] != 0) {
        core_skeleton_cpp_FUN_00546a90(pCStack_18,_DAT_01cb821c);
        pCVar2 = out_points_array + iVar3;
        CStack_28.x = fStack_a0;
        *(uint *)((int)&CStack_28 + (uint)bVar4 * -8 + 4) =
             *(uint *)(&stack0xffffff64 + (uint)bVar4 * -8);
        *(uint *)((int)&CStack_28 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
             *(uint *)(&stack0xffffff68 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
        if (pCVar2 == &CStack_28) goto LAB_004c461d;
        pCVar2->x = CStack_28.x;
        pCVar2->y = CStack_28.y;
        fVar1 = CStack_28.z;
LAB_004c461a:
        out_points_array[iVar3].z = fVar1;
        goto LAB_004c461d;
      }
      break;
    case 3:
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[9]] != 0) {
        core_skeleton_cpp_FUN_00546a90(pCStack_18,_DAT_01cb8244);
        pCVar2 = out_points_array + iVar3;
        CStack_4c.x = afStack_60[2];
        *(float *)((int)&CStack_4c + (uint)bVar4 * -8 + 4) = afStack_60[(uint)bVar4 * -2 + 3];
        *(float *)((int)&CStack_4c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
             afStack_60[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
        if (pCVar2 != &CStack_4c) {
          pCVar2->x = CStack_4c.x;
          pCVar2->y = CStack_4c.y;
          fVar1 = CStack_4c.z;
          goto LAB_004c461a;
        }
        goto LAB_004c461d;
      }
    }
    iStack_1c = iStack_1c + 1;
    if (3 < iStack_1c) {
      return iVar3;
    }
  } while( true );
}
