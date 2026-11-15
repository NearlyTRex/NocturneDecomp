// Name: core_bwgrndma.cpp_CGrandma_getCarryObjToBodyXForm_FUN_005a7cf0
// Address: 005a7cf0
// Address Range: [[005a7cf0, 005a7e04]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_bwgrndma_cpp_CGrandma_getCarryObjToBodyXForm_FUN_005a7cf0(CGrandma *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

CMatrix3x4f * __stack2_esi core_bwgrndma_cpp_CGrandma_getCarryObjToBodyXForm_FUN_005a7cf0(CGrandma *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  CDemonActor *pCVar1;
  int iVar2;
  CMatrix3x4f *pCVar3;
  float *pfVar4;
  byte bVar5;
  float afStackY_1010 [964];
  CVector3f *euler_angles;
  CMatrix3x4f CStack_f4;
  CMatrix3x4f CStack_c4;
  float afStack_94 [12];
  CMatrix3x4f CStack_64;
  CVector3f CStack_34;
  float fStack_28;
  float afStack_24 [2];
  CVector3f CStack_1c;
  char *pcStack_10;
  
  bVar5 = 0;
  pcStack_10 = (this_ptr->base).base.base.base.base.actor_name + hand_index * 0x78;
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                     (*(CDemonActor **)(pcStack_10 + 0x2620),g_CBoxActorClassInfo.name_hash);
  if (pCVar1 != (CDemonActor *)0x0) {
    fStack_28 = (float)_strcmp
                                 (pCVar1[1].create_event,"BROOM.KFM");
    if (fStack_28 == 0.0) {
      euler_angles = &CStack_1c;
      afStack_24[1] = 1.56;
      afStack_24[0] = 1.56;
      CStack_34.x = 0.07;
      CStack_1c.x = fStack_28;
      *(float *)((int)&CStack_1c + (uint)bVar5 * -8 + 4) = afStack_24[(uint)bVar5 * -2];
      *(float *)((int)&CStack_1c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           afStack_24[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      CStack_34.y = -0.15;
      CStack_34.z = 0.0;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_00591c10
                (&CStack_64,&CStack_34,euler_angles);
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
                (&CStack_64,
                 (CMatrix3x4f *)
                 ((int)(this_ptr->base).base.base.base.model.bone_transform.bone_model_matrices +
                 *(int *)(pcStack_10 + 0x2618) * 0x30),&CStack_c4);
      pCVar3 = &CStack_c4;
      goto LAB_005a7d6b;
    }
  }
  core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_00429120
            ((CCharacter *)this_ptr,hand_index,&CStack_f4);
  pCVar3 = &CStack_f4;
LAB_005a7d6b:
  pfVar4 = afStack_94;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
  }
  pfVar4 = afStack_94;
  pCVar3 = out_matrix;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar3->m[0].w = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
  }
  return out_matrix;
}
