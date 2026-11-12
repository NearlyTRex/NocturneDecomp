// Name: core_zombiepriest.cpp_CZombiePriest_getCarryObjToBodyXForm_FUN_0058ecd0
// Address: 0058ecd0
// Address Range: [[0058ecd0, 0058efa4]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_zombiepriest_cpp_CZombiePriest_getCarryObjToBodyXForm_FUN_0058ecd0(CZombiePriest *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

CMatrix3x4f * __stack2_esi core_zombiepriest_cpp_CZombiePriest_getCarryObjToBodyXForm_FUN_0058ecd0(CZombiePriest *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  CDemonActor *pCVar1;
  int iVar2;
  CMatrix3x4f *pCVar3;
  CMatrix3x4f *pCVar4;
  byte bVar5;
  uint auStackY_1060 [985];
  CMatrix3x4f CStack_f0;
  CMatrix3x4f CStack_c0;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint auStack_74 [11];
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint auStack_38 [10];
  uint uStack_10;
  
  bVar5 = 0;
  iVar2 = (this_ptr->base).base.carry_hands[hand_index].bone_index;
  if (hand_index == 1) {
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                       ((this_ptr->base).base.carry_hands[hand_index].carry_actor,
                        g_CElephantGunClassInfo.name_hash);
    if (pCVar1 == (CDemonActor *)0x0) {
      auStack_38[3] = 0xbdcccccd;
      auStack_38[4] = 0x3e9e353f;
      auStack_38[2] = 0x3ec18937;
      if (auStack_74 + 2 != auStack_38 + 2) {
        auStack_74[3] = 0xbdcccccd;
        auStack_74[4] = 0x3e9e353f;
        auStack_74[2] = 0x3ec18937;
      }
      auStack_38[1] = 0x3fbf3b64;
      uStack_3c = 0xbe810625;
      auStack_38[0] = 0x3fcb4396;
      auStack_38[8] = 0xbe810625;
      auStack_38[(uint)bVar5 * -2 + 9] = auStack_38[(uint)bVar5 * -2];
      auStack_38[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
           auStack_38[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      if (auStack_74 + 8 != auStack_38 + 8) {
        auStack_74[8] = auStack_38[8];
        auStack_74[9] = auStack_38[9];
        auStack_74[10] = uStack_10;
      }
    }
    else {
      auStack_38[6] = 0xbe0d3d86;
      auStack_38[7] = 0xbde5c704;
      auStack_38[5] = 0x3e698e54;
      if (auStack_74 + 2 != auStack_38 + 5) {
        auStack_74[2] = 0x3e698e54;
        auStack_74[3] = 0xbe0d3d86;
        auStack_74[4] = 0xbde5c704;
      }
      auStack_74[5] = 0xbe8ed8b2;
      auStack_74[7] = 0x3fc66a55;
      auStack_74[6] = 0x3fcad9be;
      uStack_78 = 0xbe8ed8b2;
      auStack_74[(uint)bVar5 * -2] = auStack_74[(uint)bVar5 * -2 + 6];
      auStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           auStack_74[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
      if (auStack_74 + 8 != &uStack_78) {
        auStack_74[8] = uStack_78;
        auStack_74[9] = auStack_74[0];
        auStack_74[10] = auStack_74[1];
      }
    }
  }
  else {
    uStack_44 = 0x3e2f45e1;
    uStack_40 = 0x3cb53b4b;
    uStack_48 = 0xbecbb03e;
    if (auStack_74 + 2 != &uStack_48) {
      auStack_74[3] = 0x3e2f45e1;
      auStack_74[4] = 0x3cb53b4b;
      auStack_74[2] = 0xbecbb03e;
    }
    uStack_88 = 0xbfd6540d;
    uStack_90 = 0xbf18d23d;
    uStack_8c = 0xbfac18e7;
    uStack_84 = 0xbf18d23d;
    uStack_80 = 0xbfac18e7;
    uStack_7c = 0xbfd6540d;
    if (auStack_74 + 8 != &uStack_84) {
      auStack_74[8] = 0xbf18d23d;
      auStack_74[9] = 0xbfac18e7;
      auStack_74[10] = 0xbfd6540d;
    }
  }
  core_xform_cpp_FUN_00583940(&CStack_c0,auStack_74 + 2,auStack_74 + 8);
  core_xform_cpp_multiplyMatrix3x4_FUN_005833e0
            (&CStack_c0,(this_ptr->base).base.model.bone_transform.bone_model_matrices + iVar2,
             &CStack_f0);
  pCVar3 = &CStack_f0;
  pCVar4 = out_matrix;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar4->m[0].w = *(float *)pCVar3;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
  }
  return out_matrix;
}
