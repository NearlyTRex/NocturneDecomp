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
  int aiStackY_1010 [964];
  int *piVar6;
  CMatrix3x4f CStack_f4;
  CMatrix3x4f CStack_c4;
  float afStack_94 [12];
  CMatrix3x4f CStack_64;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  int iStack_28;
  int aiStack_24 [5];
  char *pcStack_10;
  
  bVar5 = 0;
  pcStack_10 = (this_ptr->base).base.base.base.base.actor_name + hand_index * 0x78;
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                     (*(CDemonActor **)(pcStack_10 + 0x2620),g_CBoxActorClassInfo.name_hash);
  if (pCVar1 != (CDemonActor *)0x0) {
    iStack_28 = _strcmp(pCVar1[1].create_event,"BROOM.KFM");
    if (iStack_28 == 0) {
      piVar6 = aiStack_24 + 2;
      aiStack_24[1] = 0x3fc7ae14;
      aiStack_24[0] = 0x3fc7ae14;
      uStack_34 = 0x3d8f5c29;
      aiStack_24[2] = iStack_28;
      aiStack_24[(uint)bVar5 * -2 + 3] = aiStack_24[(uint)bVar5 * -2];
      aiStack_24[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
           aiStack_24[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      uStack_30 = 0xbe19999a;
      uStack_2c = 0;
      core_xform_cpp_FUN_00591c10(&CStack_64,&uStack_34,piVar6);
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
