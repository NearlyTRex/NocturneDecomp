// Name: core_carved.cpp_CCarved_getTargetPoints_FUN_0042ba40
// Address: 0042ba40
// Address Range: [[0042ba40, 0042bd43]]
// Convention: __cdecl
// Signature: int __cdecl core_carved_cpp_CCarved_getTargetPoints_FUN_0042ba40(CCarved *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_carved_cpp_CCarved_getTargetPoints_FUN_0042ba40(CCarved *this_ptr,CVector3f *out_points_array)

{
  float fVar1;
  CVector3f *pCVar2;
  byte bVar3;
  float afStackY_1088 [1016];
  CVector3f CStack_a0;
  CVector3f CStack_94;
  CVector3f CStack_88;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3f CStack_64;
  CVector3f CStack_58;
  CVector3f CStack_4c;
  CVector3f CStack_40;
  CVector3f CStack_34;
  CVector3f CStack_28;
  int iStack_1c;
  CDeformableModelInstance *pCStack_18;
  int iStack_14;
  
  bVar3 = 0;
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
            (&(this_ptr->base).base.model,this_ptr->bone_indices[9],&CStack_88);
  CStack_7c.x = CStack_88.x;
  *(uint *)((int)&CStack_7c + (uint)bVar3 * -8 + 4) =
       *(uint *)((int)&CStack_88 + (uint)bVar3 * -8 + 4);
  *(uint *)((int)&CStack_7c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       *(uint *)((int)&CStack_88 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  if (&CStack_7c != out_points_array) {
    out_points_array->x = CStack_7c.x;
    out_points_array->y = CStack_7c.y;
    out_points_array->z = CStack_7c.z;
  }
  pCStack_18 = &(this_ptr->base).base.model;
  iStack_1c = 0;
  iStack_14 = 1;
  do {
    switch((iStack_1c + (this_ptr->base).base.base.direction_hint) % 4) {
    case 0:
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[0]] != 0) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
                  (pCStack_18,this_ptr->bone_indices[5],&CStack_34);
        CStack_40.x = CStack_34.x;
        *(uint *)((int)&CStack_40 + (uint)bVar3 * -8 + 4) =
             *(uint *)((int)&CStack_34 + (uint)bVar3 * -8 + 4);
        *(uint *)((int)&CStack_40 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
             *(uint *)((int)&CStack_34 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
        if (&CStack_70 != &CStack_40) {
          CStack_70.x = CStack_40.x;
          CStack_70.y = CStack_40.y;
          CStack_70.z = CStack_40.z;
        }
        CStack_70.y = CStack_7c.y * (float)_DAT_005d569d + CStack_70.y * (float)_DAT_005d5695;
        CStack_70.x = CStack_7c.x * (float)_DAT_005d568d + CStack_70.x * (float)_DAT_005d568d;
LAB_0042bb6f:
        pCVar2 = out_points_array + iStack_14;
        if (pCVar2 != &CStack_70) {
          pCVar2->x = CStack_70.x;
          pCVar2->y = CStack_70.y;
          fVar1 = CStack_70.z;
          goto LAB_0042bb88;
        }
LAB_0042bb8b:
        iStack_14 = iStack_14 + 1;
      }
      break;
    case 1:
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[2]] != 0) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
                  (pCStack_18,this_ptr->bone_indices[6],&CStack_58);
        CStack_94.x = CStack_58.x;
        *(uint *)((int)&CStack_94 + (uint)bVar3 * -8 + 4) =
             *(uint *)((int)&CStack_58 + (uint)bVar3 * -8 + 4);
        *(uint *)((int)&CStack_94 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
             *(uint *)((int)&CStack_58 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
        if (&CStack_70 != &CStack_94) {
          CStack_70.x = CStack_94.x;
          CStack_70.y = CStack_94.y;
          CStack_70.z = CStack_94.z;
        }
        CStack_70.y = CStack_7c.y * (float)_DAT_005d569d + CStack_70.y * (float)_DAT_005d5695;
        CStack_70.x = CStack_7c.x * (float)_DAT_005d568d + CStack_70.x * (float)_DAT_005d568d;
        goto LAB_0042bb6f;
      }
      break;
    case 2:
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[6]] != 0) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
                  (pCStack_18,this_ptr->bone_indices[0],&CStack_a0);
        pCVar2 = out_points_array + iStack_14;
        CStack_28.x = CStack_a0.x;
        *(uint *)((int)&CStack_28 + (uint)bVar3 * -8 + 4) =
             *(uint *)((int)&CStack_a0 + (uint)bVar3 * -8 + 4);
        *(uint *)((int)&CStack_28 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
             *(uint *)((int)&CStack_a0 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
        if (pCVar2 == &CStack_28) goto LAB_0042bb8b;
        pCVar2->x = CStack_28.x;
        pCVar2->y = CStack_28.y;
        fVar1 = CStack_28.z;
LAB_0042bb88:
        pCVar2->z = fVar1;
        goto LAB_0042bb8b;
      }
      break;
    case 3:
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->part_indices[5]] != 0) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
                  (pCStack_18,this_ptr->bone_indices[10],&CStack_64);
        CStack_4c.x = CStack_64.x;
        *(uint *)((int)&CStack_4c + (uint)bVar3 * -8 + 4) =
             *(uint *)((int)&CStack_64 + (uint)bVar3 * -8 + 4);
        *(uint *)((int)&CStack_4c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
             *(uint *)((int)&CStack_64 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
        pCVar2 = out_points_array + iStack_14;
        if (pCVar2 != &CStack_4c) {
          pCVar2->x = CStack_4c.x;
          pCVar2->y = CStack_4c.y;
          fVar1 = CStack_4c.z;
          goto LAB_0042bb88;
        }
        goto LAB_0042bb8b;
      }
    }
    iStack_1c = iStack_1c + 1;
    if (3 < iStack_1c) {
      return iStack_14;
    }
  } while( true );
}
