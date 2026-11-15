// Name: core_weaver.cpp_CRobin_getCarryObjToBodyXForm_FUN_005a67a0
// Address: 005a67a0
// Address Range: [[005a67a0, 005a6961]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_weaver_cpp_CRobin_getCarryObjToBodyXForm_FUN_005a67a0(CRobin *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

CMatrix3x4f * __stack2_esi core_weaver_cpp_CRobin_getCarryObjToBodyXForm_FUN_005a67a0(CRobin *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  CDemonActor *pCVar1;
  int iVar2;
  CMatrix3x4f *pCVar3;
  float *pfVar4;
  byte bVar5;
  float afStackY_1044 [943];
  CVector3f *pCVar6;
  CMatrix3x4f CStack_14c;
  CMatrix3x4f CStack_11c;
  CMatrix3x4f CStack_ec;
  CMatrix3x4f CStack_bc;
  CMatrix3x4f CStack_8c;
  float fStack_5c;
  float afStack_58 [2];
  CVector3f CStack_50;
  CVector3f CStack_44;
  uint uStack_38;
  float afStack_34 [2];
  CVector3f CStack_2c;
  CVector3f CStack_20;
  CMatrix3x4f *pCStack_14;
  char *pcStack_10;
  
  bVar5 = 0;
  pcStack_10 = (this_ptr->base).base.base.base.base.actor_name + hand_index * 0x78;
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                     (*(CDemonActor **)(pcStack_10 + 0x2620),g_CBoxActorClassInfo.name_hash);
  if (pCVar1 != (CDemonActor *)0x0) {
    fStack_5c = (float)_strcmp
                                 (pCVar1[1].create_event,"WOOD_BOWL.KFM");
    pCStack_14 = (this_ptr->base).base.base.base.model.bone_transform.bone_model_matrices;
    if (fStack_5c == 0.0) {
      afStack_58[1] = -1.75;
      CStack_50.x = 0.2;
      afStack_58[0] = -2.1;
      pCVar6 = &CStack_20;
      CStack_20.x = fStack_5c;
      *(float *)((int)&CStack_20 + (uint)bVar5 * -8 + 4) = afStack_58[(uint)bVar5 * -2];
      *(float *)((int)&CStack_20 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           afStack_58[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      CStack_50.y = -0.08;
      CStack_50.z = 0.0;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                (&CStack_ec,&CStack_50,pCVar6);
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
                (&CStack_ec,pCStack_14 + *(int *)(pcStack_10 + 0x2618),&CStack_11c);
      pCVar3 = &CStack_11c;
      goto LAB_005a6841;
    }
    iVar2 = _strcmp(pCVar1[1].create_event,"DOLL.KFM");
    if (iVar2 == 0) {
      uStack_38 = 0x40400000;
      pCVar6 = &CStack_2c;
      afStack_34[1] = 1.8;
      afStack_34[0] = 0.0;
      CStack_44.z = 0.1;
      CStack_2c.x = 3.0;
      *(float *)((int)&CStack_2c + (uint)bVar5 * -8 + 4) = afStack_34[(uint)bVar5 * -2];
      *(float *)((int)&CStack_2c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           afStack_34[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      CStack_44.y = 0.0;
      CStack_44.x = 0.2;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                (&CStack_8c,&CStack_44,pCVar6);
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
                (&CStack_8c,pCStack_14 + *(int *)(pcStack_10 + 0x2618),&CStack_bc);
      pCVar3 = &CStack_bc;
      goto LAB_005a6841;
    }
  }
  core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_00429120
            ((CCharacter *)this_ptr,hand_index,&CStack_14c);
  pCVar3 = &CStack_14c;
LAB_005a6841:
  pfVar4 = (float *)&stack0xfffffe84;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
  }
  pfVar4 = (float *)&stack0xfffffe84;
  pCVar3 = out_matrix;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar3->m[0].w = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
  }
  return out_matrix;
}
