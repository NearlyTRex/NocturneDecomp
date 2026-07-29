// Name: core_dcamera.cpp_FUN_00447f20
// Address: 00447f20
// Address Range: [[00447f20, 00448307]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_dcamera_cpp_FUN_00447f20(CDemonCamera *this_ptr,CVector3f *output_bounds)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * __cdecl core_dcamera_cpp_FUN_00447f20(CDemonCamera *this_ptr,CVector3f *output_bounds)

{
  CVector3f *pCVar1;
  uint uVar2;
  byte bVar3;
  int aiStackY_10d4 [1015];
  uint uStack_ec;
  int iStack_e0;
  uint uStack_d4;
  uint uStack_c8;
  int iStack_c0;
  uint uStack_bc;
  uint uStack_b0;
  int iStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  uint uStack_98;
  int aiStack_94 [5];
  int aiStack_80 [2];
  int iStack_78;
  uint uStack_74;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  uint uStack_44;
  int aiStack_40 [3];
  char *pcStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  char *pcStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar3 = 0;
  pCVar1 = output_bounds + 1;
  if (pCVar1 != (CVector3f *)&DAT_02dd1184) {
    pCVar1->x = _DAT_02dd1184;
    output_bounds[1].y = _DAT_02dd1188;
    output_bounds[1].z = _DAT_02dd118c;
  }
  if (pCVar1 != output_bounds) {
    output_bounds->x = pCVar1->x;
    output_bounds->y = output_bounds[1].y;
    output_bounds->z = output_bounds[1].z;
  }
  pcStack_20 = this_ptr->camera_name + 0xc4;
  aiStack_40[2] = 0;
  pcStack_34 = this_ptr->camera_name + 0xd0;
  iStack_18 = 1;
  do {
    if ((int)this_ptr->max_distance + -1 <= iStack_18) {
      return output_bounds;
    }
    iStack_2c = iStack_18 + 1;
    iStack_28 = aiStack_40[2];
    iStack_30 = aiStack_40[2];
    iStack_1c = 0;
    iStack_24 = iStack_2c;
    for (iStack_14 = 1; iStack_14 < *(int *)(this_ptr->camera_name + 0xfc) + -1;
        iStack_14 = iStack_14 + 1) {
      core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0(this_ptr,iStack_14,iStack_18);
      aiStack_80[0] = uStack_d4;
      aiStack_94[(uint)bVar3 * -2 + 6] = *(int *)(&stack0xffffff30 + (uint)bVar3 * -8);
      aiStack_94[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7] =
           *(int *)(&stack0xffffff34 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      if (iStack_78 < 0x1f401) {
LAB_004480de:
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_004411b0(this_ptr,aiStack_94 + 5);
        iStack_68 = iStack_e0;
        aiStack_94[(uint)bVar3 * -2 + 0xc] = *(int *)(&stack0xffffff24 + (uint)bVar3 * -8);
        aiStack_94[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd] =
             *(int *)(&stack0xffffff28 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
        fStack_a4 = (float)iStack_68 * 0.00390625f;
        fStack_a0 = (float)iStack_64 * 0.00390625f;
        fStack_9c = (float)iStack_60 * 0.00390625f;
        CStack_5c.x = fStack_a4 - *(float *)pcStack_20;
        CStack_5c.y = fStack_a0 - *(float *)(pcStack_20 + 4);
        CStack_5c.z = fStack_9c - *(float *)(pcStack_20 + 8);
        core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                  ((CMatrix3x3f *)pcStack_34,&CStack_50,&CStack_5c);
        core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00((CBoundingBox3D *)output_bounds,&CStack_50);
      }
      else {
        uVar2 = 0;
        if ((iStack_14 < 2) || (iStack_18 < 2)) {
LAB_0044808b:
          uVar2 = 1;
        }
        else {
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0
                    (this_ptr,iStack_1c,iStack_30);
          uStack_c8 = uStack_bc;
          *(uint *)(&stack0xffffff3c + (uint)bVar3 * -8) =
               *(uint *)(&stack0xffffff48 + (uint)bVar3 * -8);
          *(uint *)((int)&stack0xffffff40 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
               *(uint *)(&stack0xffffff4c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
          if (0x1f400 < iStack_c0) goto LAB_0044808b;
        }
        if ((iStack_14 < 2) || ((int)this_ptr->max_distance + -2 <= iStack_18)) {
LAB_0044809a:
          uVar2 = uVar2 + 1;
        }
        else {
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0
                    (this_ptr,iStack_1c,iStack_2c);
          uStack_b0 = uStack_ec;
          *(uint *)(&stack0xffffff54 + (uint)bVar3 * -8) =
               *(uint *)(&stack0xffffff18 + (uint)bVar3 * -8);
          *(uint *)((int)&stack0xffffff58 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
               *(uint *)(&stack0xffffff1c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
          if (0x1f400 < iStack_a8) goto LAB_0044809a;
        }
        if ((iStack_14 < *(int *)(this_ptr->camera_name + 0xfc) + -2) && (1 < iStack_18)) {
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0
                    (this_ptr,iStack_14 + 1,iStack_28);
          uStack_98 = aiStack_94[2];
          aiStack_94[(uint)bVar3 * -2] = aiStack_94[(uint)bVar3 * -2 + 3];
          aiStack_94[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
               aiStack_94[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
          if (0x1f400 < aiStack_94[1]) goto LAB_004480b3;
        }
        else {
LAB_004480b3:
          uVar2 = uVar2 + 1;
        }
        if ((iStack_14 < *(int *)(this_ptr->camera_name + 0xfc) + -2) &&
           (iStack_18 < (int)this_ptr->max_distance + -2)) {
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0
                    (this_ptr,iStack_14 + 1,iStack_24);
          uStack_74 = uStack_44;
          aiStack_94[(uint)bVar3 * -2 + 9] = aiStack_40[(uint)bVar3 * -2];
          aiStack_94[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10] =
               aiStack_40[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
          if (0x1f400 < iStack_6c) goto LAB_004480cc;
        }
        else {
LAB_004480cc:
          uVar2 = uVar2 + 1;
        }
        if (3 < uVar2) {
          iStack_78 = 0x1f400;
          goto LAB_004480de;
        }
      }
      iStack_1c = iStack_1c + 1;
    }
    iStack_18 = iStack_18 + 1;
    aiStack_40[2] = aiStack_40[2] + 1;
  } while( true );
}
