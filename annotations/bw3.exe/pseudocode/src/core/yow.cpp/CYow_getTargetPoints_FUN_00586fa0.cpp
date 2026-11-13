// Name: core_yow.cpp_CYow_getTargetPoints_FUN_00586fa0
// Address: 00586fa0
// Address Range: [[00586fa0, 005872ad]]
// Convention: __cdecl
// Signature: int __cdecl core_yow_cpp_CYow_getTargetPoints_FUN_00586fa0(CYow *this_ptr,float *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_yow_cpp_CYow_getTargetPoints_FUN_00586fa0(CYow *this_ptr,float *param_2)

{
  EDeathState EVar1;
  float fVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_1088 [1016];
  CVector3f CStack_a0;
  CVector3f CStack_94;
  float fStack_88;
  float afStack_84 [4];
  float fStack_74;
  float fStack_70;
  float afStack_6c [2];
  CVector3f CStack_64;
  float fStack_58;
  float afStack_54 [4];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  CVector3f CStack_34;
  CVector3f CStack_28;
  int iStack_1c;
  CDeformableModelInstance *pCStack_18;
  int iStack_14;
  
  bVar4 = 0;
  EVar1 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).getDeathState)((CCharacter *)this_ptr);
  if (EVar1 != DEATH_STATE_ALIVE) {
    return 0;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
            (&(this_ptr->base).base.model,this_ptr->bone_indices[6],&CStack_34);
  fStack_58 = CStack_34.x;
  afStack_54[(uint)bVar4 * -2] = *(float *)((int)&CStack_34 + (uint)bVar4 * -8 + 4);
  afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       *(float *)((int)&CStack_34 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  if (&fStack_58 != param_2) {
    *param_2 = fStack_58;
    param_2[1] = afStack_54[0];
    param_2[2] = afStack_54[1];
  }
  pCStack_18 = &(this_ptr->base).base.model;
  iStack_1c = 0;
  iStack_14 = 1;
  do {
    switch((iStack_1c + (this_ptr->base).base.base.direction_hint) % 4) {
    case 0:
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->bone_indices[2]] != 0) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
                  (pCStack_18,this_ptr->bone_indices[2],&CStack_a0);
        fStack_40 = CStack_a0.x;
        afStack_54[(uint)bVar4 * -2 + 6] = *(float *)((int)&CStack_a0 + (uint)bVar4 * -8 + 4);
        afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
             *(float *)((int)&CStack_a0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
        if (afStack_84 + 2 != afStack_54 + 5) {
          afStack_84[2] = fStack_40;
          afStack_84[3] = fStack_3c;
          fStack_74 = fStack_38;
        }
        afStack_84[3] = afStack_54[0] * (float)_DAT_005d8337 + afStack_84[3] * (float)_DAT_005d832f;
        afStack_84[2] = fStack_58 * (float)_DAT_005d8327 + afStack_84[2] * (float)_DAT_005d8327;
LAB_005870e6:
        pfVar3 = param_2 + iStack_14 * 3;
        if (pfVar3 != afStack_84 + 2) {
          *pfVar3 = afStack_84[2];
          pfVar3[1] = afStack_84[3];
          fVar2 = fStack_74;
          goto LAB_005870ff;
        }
LAB_00587102:
        iStack_14 = iStack_14 + 1;
      }
      break;
    case 1:
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->bone_indices[3]] != 0) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
                  (pCStack_18,this_ptr->bone_indices[3],&CStack_28);
        fStack_88 = CStack_28.x;
        afStack_84[(uint)bVar4 * -2] = *(float *)((int)&CStack_28 + (uint)bVar4 * -8 + 4);
        afStack_84[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
             *(float *)((int)&CStack_28 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
        if (afStack_84 + 2 != &fStack_88) {
          afStack_84[2] = fStack_88;
          afStack_84[3] = afStack_84[0];
          fStack_74 = afStack_84[1];
        }
        afStack_84[3] = afStack_54[0] * (float)_DAT_005d8337 + afStack_84[3] * (float)_DAT_005d832f;
        afStack_84[2] = fStack_58 * (float)_DAT_005d8327 + afStack_84[2] * (float)_DAT_005d8327;
        goto LAB_005870e6;
      }
      break;
    case 2:
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->bone_indices[4]] != 0) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
                  (pCStack_18,this_ptr->bone_indices[4],&CStack_64);
        pfVar3 = param_2 + iStack_14 * 3;
        afStack_54[2] = CStack_64.x;
        afStack_54[(uint)bVar4 * -2 + 3] = *(float *)((int)&CStack_64 + (uint)bVar4 * -8 + 4);
        afStack_54[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
             *(float *)((int)&CStack_64 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
        if (pfVar3 == afStack_54 + 2) goto LAB_00587102;
        *pfVar3 = afStack_54[2];
        pfVar3[1] = afStack_54[3];
        fVar2 = fStack_44;
LAB_005870ff:
        pfVar3[2] = fVar2;
        goto LAB_00587102;
      }
      break;
    case 3:
      if ((this_ptr->base).base.model.part_data.visibility_flags[this_ptr->bone_indices[5]] != 0) {
        core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
                  (pCStack_18,this_ptr->bone_indices[5],&CStack_94);
        fStack_70 = CStack_94.x;
        afStack_6c[(uint)bVar4 * -2] = *(float *)((int)&CStack_94 + (uint)bVar4 * -8 + 4);
        afStack_6c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
             *(float *)((int)&CStack_94 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
        pfVar3 = param_2 + iStack_14 * 3;
        if (pfVar3 != &fStack_70) {
          *pfVar3 = fStack_70;
          pfVar3[1] = afStack_6c[0];
          fVar2 = afStack_6c[1];
          goto LAB_005870ff;
        }
        goto LAB_00587102;
      }
    }
    iStack_1c = iStack_1c + 1;
    if (3 < iStack_1c) {
      return iStack_14;
    }
  } while( true );
}
