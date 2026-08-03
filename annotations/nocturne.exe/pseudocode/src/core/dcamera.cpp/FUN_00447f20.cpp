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
  CVector3i CStack_ec;
  CVector3i CStack_e0;
  CVector3i CStack_d4;
  int iStack_c8;
  int aiStack_c4 [2];
  CVector3i CStack_bc;
  int iStack_b0;
  int aiStack_ac [2];
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  int iStack_98;
  int aiStack_94 [2];
  CVector3i CStack_8c;
  CVector3i CStack_80;
  int iStack_74;
  int aiStack_70 [4];
  int iStack_60;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  CVector3i CStack_44;
  int iStack_38;
  CMatrix3x3f *pCStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  CVector3f *pCStack_20;
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
  pCStack_20 = &this_ptr->position;
  iStack_38 = 0;
  pCStack_34 = &this_ptr->rotation_matrix;
  iStack_18 = 1;
  do {
    if ((int)this_ptr->max_distance + -1 <= iStack_18) {
      return output_bounds;
    }
    iStack_2c = iStack_18 + 1;
    iStack_28 = iStack_38;
    iStack_30 = iStack_38;
    iStack_1c = 0;
    iStack_24 = iStack_2c;
    for (iStack_14 = 1; iStack_14 < this_ptr->screen_width + -1; iStack_14 = iStack_14 + 1) {
      core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0
                (this_ptr,iStack_14,iStack_18,&CStack_d4);
      CStack_80.x = CStack_d4.x;
      *(uint *)((int)&CStack_80 + (uint)bVar3 * -8 + 4) =
           *(uint *)((int)&CStack_d4 + (uint)bVar3 * -8 + 4);
      *(uint *)((int)&CStack_80 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           *(uint *)((int)&CStack_d4 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      if (CStack_80.z < 0x1f401) {
LAB_004480de:
        core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_004411b0
                  (this_ptr,&CStack_80,&CStack_e0);
        aiStack_70[2] = CStack_e0.x;
        aiStack_70[(uint)bVar3 * -2 + 3] = *(int *)((int)&CStack_e0 + (uint)bVar3 * -8 + 4);
        aiStack_70[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
             *(int *)((int)&CStack_e0 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
        fStack_a4 = (float)aiStack_70[2] * 0.00390625f;
        fStack_a0 = (float)aiStack_70[3] * 0.00390625f;
        fStack_9c = (float)iStack_60 * 0.00390625f;
        CStack_5c.x = fStack_a4 - pCStack_20->x;
        CStack_5c.y = fStack_a0 - pCStack_20->y;
        CStack_5c.z = fStack_9c - pCStack_20->z;
        core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                  (pCStack_34,&CStack_50,&CStack_5c);
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
                    (this_ptr,iStack_1c,iStack_30,&CStack_bc);
          iStack_c8 = CStack_bc.x;
          aiStack_c4[(uint)bVar3 * -2] = *(int *)((int)&CStack_bc + (uint)bVar3 * -8 + 4);
          aiStack_c4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
               *(int *)((int)&CStack_bc + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
          if (0x1f400 < aiStack_c4[1]) goto LAB_0044808b;
        }
        if ((iStack_14 < 2) || ((int)this_ptr->max_distance + -2 <= iStack_18)) {
LAB_0044809a:
          uVar2 = uVar2 + 1;
        }
        else {
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0
                    (this_ptr,iStack_1c,iStack_2c,&CStack_ec);
          iStack_b0 = CStack_ec.x;
          aiStack_ac[(uint)bVar3 * -2] = *(int *)((int)&CStack_ec + (uint)bVar3 * -8 + 4);
          aiStack_ac[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
               *(int *)((int)&CStack_ec + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
          if (0x1f400 < aiStack_ac[1]) goto LAB_0044809a;
        }
        if ((iStack_14 < this_ptr->screen_width + -2) && (1 < iStack_18)) {
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0
                    (this_ptr,iStack_14 + 1,iStack_28,&CStack_8c);
          iStack_98 = CStack_8c.x;
          aiStack_94[(uint)bVar3 * -2] = *(int *)((int)&CStack_8c + (uint)bVar3 * -8 + 4);
          aiStack_94[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
               *(int *)((int)&CStack_8c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
          if (0x1f400 < aiStack_94[1]) goto LAB_004480b3;
        }
        else {
LAB_004480b3:
          uVar2 = uVar2 + 1;
        }
        if ((iStack_14 < this_ptr->screen_width + -2) &&
           (iStack_18 < (int)this_ptr->max_distance + -2)) {
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0
                    (this_ptr,iStack_14 + 1,iStack_24,&CStack_44);
          iStack_74 = CStack_44.x;
          aiStack_70[(uint)bVar3 * -2] = *(int *)((int)&CStack_44 + (uint)bVar3 * -8 + 4);
          aiStack_70[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
               *(int *)((int)&CStack_44 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
          if (0x1f400 < aiStack_70[1]) goto LAB_004480cc;
        }
        else {
LAB_004480cc:
          uVar2 = uVar2 + 1;
        }
        if (3 < uVar2) {
          CStack_80.z = 0x1f400;
          goto LAB_004480de;
        }
      }
      iStack_1c = iStack_1c + 1;
    }
    iStack_18 = iStack_18 + 1;
    iStack_38 = iStack_38 + 1;
  } while( true );
}
