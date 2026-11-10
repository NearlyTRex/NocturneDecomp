// Name: core_skeleton.cpp_FUN_005424ac
// Address: 005424ac
// Address Range: [[005424ac, 005426b7]]
// Convention: unknown
// Signature: CSkeleton * core_skeleton_cpp_FUN_005424ac(CDeformableModel *param_1,undefined4 param_2,int param_3,byte param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSkeleton * core_skeleton_cpp_FUN_005424ac(CDeformableModel *param_1,uint param_2,int param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  CSkeleton *pCVar3;
  SRenderVertex *pSVar4;
  SRenderVertex *pSVar5;
  float *pfVar6;
  byte bVar7;
  float afStackY_105c [1015];
  CDemonRenderer *this_ptr;
  CVector3f *euler_angles;
  CVector3f *translation;
  CVector3f CStack_74;
  float fStack_68;
  float afStack_64 [5];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  CVector3i CStack_44;
  float fStack_38;
  float afStack_34 [2];
  CVector3f CStack_2c;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  CSkeleton *pCStack_14;
  
  bVar7 = 0;
  pCStack_14 = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_005415d0(param_1);
  if ((param_4 & 1) != 0) {
    iVar2 = 0;
    if (0 < pCStack_14->bone_count) {
      iStack_18 = param_3;
      do {
        iStack_20 = iVar2 * 0x30;
        core_xform_cpp_FUN_00592720();
        fStack_50 = fStack_38;
        afStack_64[(uint)bVar7 * -2 + 6] = afStack_34[(uint)bVar7 * -2];
        afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
             afStack_34[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
        CStack_44.x = (int)ROUND(fStack_50 * _DAT_005fb998);
        CStack_44.y = (int)ROUND(fStack_4c * _DAT_005fb998);
        CStack_44.z = (int)ROUND(fStack_48 * _DAT_005fb998);
        engine_special_cpp_FUN_0055d723
                  ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + iStack_20),&CStack_44);
        iVar2 = iVar2 + 1;
        iStack_18 = iStack_18 + 0x30;
      } while (iVar2 < pCStack_14->bone_count);
    }
    _DAT_01c35e60 = param_2;
    iVar2 = 0;
    if (0 < pCStack_14->bone_count) {
      iStack_1c = 0;
      pCVar3 = pCStack_14;
      do {
        if (-1 < *(int *)(pCVar3->bone_list + 0x20)) {
          pSVar5 = DAT_0060b280->vertex_buffer_ptr;
          pSVar4 = pSVar5 + *(int *)(pCVar3->bone_list + 0x20) * 0x30;
          pfVar6 = afStackY_105c + 0x3ee;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *pfVar6 = (float)*(uint *)pSVar4;
            pSVar4 = pSVar4 + ((uint)bVar7 * -2 + 1) * 4;
            pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
          }
          pSVar5 = pSVar5 + iStack_1c;
          pfVar6 = afStackY_105c + 0x3e2;
          for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
            *pfVar6 = (float)*(uint *)pSVar5;
            pSVar5 = pSVar5 + ((uint)bVar7 * -2 + 1) * 4;
            pfVar6 = pfVar6 + (uint)bVar7 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407cc0();
        }
        pCVar3 = (CSkeleton *)&pCVar3->field_0x24;
        iVar2 = iVar2 + 1;
        iStack_1c = iStack_1c + 0x30;
      } while (iVar2 < pCStack_14->bone_count);
    }
  }
  if (((param_4 & 2) != 0) && (iVar2 = 0, 0 < pCStack_14->bone_count)) {
    do {
      translation = &CStack_74;
      core_xform_cpp_matrixToEulerAngles_FUN_00591de0();
      CStack_2c.x = fStack_68;
      *(float *)((int)&CStack_2c + (uint)bVar7 * -8 + 4) = afStack_64[(uint)bVar7 * -2];
      *(float *)((int)&CStack_2c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      core_xform_cpp_FUN_00592720();
      euler_angles = &CStack_2c;
      CStack_74.x = afStack_64[2];
      *(float *)((int)&CStack_74 + (uint)bVar7 * -8 + 4) = afStack_64[(uint)bVar7 * -2 + 3];
      this_ptr = DAT_0060b280;
      *(float *)((int)&CStack_74 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      afStackY_105c[0x3f6] = 7.727959e-39;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
                (this_ptr,euler_angles,translation);
      afStackY_105c[0x3f6] = 7.727994e-39;
      shape_edittool_cpp_FUN_0047fd00();
      engine_matrix_c_pop_FUN_0046b4a0();
      iVar2 = iVar2 + 1;
    } while (iVar2 < pCStack_14->bone_count);
  }
  return pCStack_14;
}
