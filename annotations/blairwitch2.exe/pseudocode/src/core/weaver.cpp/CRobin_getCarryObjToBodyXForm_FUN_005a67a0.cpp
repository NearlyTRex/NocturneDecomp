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
  int aiStackY_1044 [943];
  int *piVar6;
  float afStack_17c [12];
  CMatrix3x4f CStack_14c;
  CMatrix3x4f CStack_11c;
  CMatrix3x4f CStack_ec;
  CMatrix3x4f CStack_bc;
  CMatrix3x4f CStack_8c;
  int iStack_5c;
  int aiStack_58 [14];
  int aiStack_20 [3];
  CMatrix3x4f *pCStack_14;
  char *pcStack_10;
  
  bVar5 = 0;
  pcStack_10 = (this_ptr->base).base.base.base.base.actor_name + hand_index * 0x78;
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                     (*(CDemonActor **)(pcStack_10 + 0x2620),g_CBoxActorClassInfo.name_hash);
  if (pCVar1 != (CDemonActor *)0x0) {
    iStack_5c = _strcmp(pCVar1[1].create_event,"WOOD_BOWL.KFM");
    pCStack_14 = (this_ptr->base).base.base.base.model.bone_transform.bone_model_matrices;
    if (iStack_5c == 0) {
      aiStack_58[1] = 0xbfe00000;
      aiStack_58[2] = 0x3e4ccccd;
      aiStack_58[0] = -0x3ff9999a;
      piVar6 = aiStack_58 + 0xe;
      aiStack_20[0] = iStack_5c;
      aiStack_58[(uint)bVar5 * -2 + 0xf] = aiStack_58[(uint)bVar5 * -2];
      aiStack_58[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10] =
           aiStack_58[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      aiStack_58[3] = 0xbda3d70a;
      aiStack_58[4] = 0;
      core_xform_cpp_FUN_00591c10(&CStack_ec,aiStack_58 + 2,piVar6);
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
                (&CStack_ec,pCStack_14 + *(int *)(pcStack_10 + 0x2618),&CStack_11c);
      pCVar3 = &CStack_11c;
      goto LAB_005a6841;
    }
    iVar2 = _strcmp(pCVar1[1].create_event,"DOLL.KFM");
    if (iVar2 == 0) {
      aiStack_58[8] = 0x40400000;
      piVar6 = aiStack_58 + 0xb;
      aiStack_58[10] = 0x3fe66666;
      aiStack_58[9] = 0;
      aiStack_58[7] = 0x3dcccccd;
      aiStack_58[0xb] = 0x40400000;
      aiStack_58[(uint)bVar5 * -2 + 0xc] = aiStack_58[(uint)bVar5 * -2 + 9];
      aiStack_58[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
           aiStack_58[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
      aiStack_58[6] = 0;
      aiStack_58[5] = 0x3e4ccccd;
      core_xform_cpp_FUN_00591c10(&CStack_8c,aiStack_58 + 5,piVar6);
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
  pfVar4 = afStack_17c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
  }
  pfVar4 = afStack_17c;
  pCVar3 = out_matrix;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar3->m[0].w = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
  }
  return out_matrix;
}
