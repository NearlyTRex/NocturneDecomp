// Name: core_grandma.cpp_CGrandma_getCarryObjToBodyXForm_FUN_005a7cf0
// Address: 005a7cf0
// Address Range: [[005a7cf0, 005a7e04]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_grandma_cpp_CGrandma_getCarryObjToBodyXForm_FUN_005a7cf0(CGrandma *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

CMatrix3x4f * __stack2_esi core_grandma_cpp_CGrandma_getCarryObjToBodyXForm_FUN_005a7cf0(CGrandma *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  float *pfVar3;
  byte bVar4;
  int aiStackY_1010 [964];
  int *piVar5;
  CMatrix3x4f CStack_f4;
  CMatrix3x4f CStack_c4;
  float afStack_94 [12];
  byte auStack_64 [48];
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  int iStack_28;
  int aiStack_24 [5];
  char *pcStack_10;
  
  bVar4 = 0;
  pcStack_10 = (this_ptr->base).base.base.base.base.actor_name + hand_index * 0x78;
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                    (*(uint *)(pcStack_10 + 0x2620),g_CBoxActorClassInfo.name_hash);
  if (iVar1 != 0) {
    iStack_28 = _strcmp((char *)(iVar1 + 0x32c),"BROOM.KFM");
    if (iStack_28 == 0) {
      piVar5 = aiStack_24 + 2;
      aiStack_24[1] = 0x3fc7ae14;
      aiStack_24[0] = 0x3fc7ae14;
      uStack_34 = 0x3d8f5c29;
      aiStack_24[2] = iStack_28;
      aiStack_24[(uint)bVar4 * -2 + 3] = aiStack_24[(uint)bVar4 * -2];
      aiStack_24[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
           aiStack_24[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      uStack_30 = 0xbe19999a;
      uStack_2c = 0;
      core_xform_cpp_FUN_00591c10(auStack_64,&uStack_34,piVar5);
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
                (auStack_64,
                 (int)(this_ptr->base).base.base.base.model.bone_transform.bone_model_matrices +
                 *(int *)(pcStack_10 + 0x2618) * 0x30);
      pCVar2 = &CStack_c4;
      goto LAB_005a7d6b;
    }
  }
  core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_00429120
            ((CCharacter *)this_ptr,hand_index,&CStack_f4);
  pCVar2 = &CStack_f4;
LAB_005a7d6b:
  pfVar3 = afStack_94;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = pCVar2->m[0].w;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
  }
  pfVar3 = afStack_94;
  pCVar2 = out_matrix;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar2->m[0].w = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
  }
  return out_matrix;
}
