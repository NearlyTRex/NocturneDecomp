// Name: core_mobster.cpp_CMobster_getCarryObjToBodyXForm_FUN_004ff330
// Address: 004ff330
// Address Range: [[004ff330, 004ff604]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_mobster_cpp_CMobster_getCarryObjToBodyXForm_FUN_004ff330(CMobster *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

CMatrix3x4f * __stack2_esi core_mobster_cpp_CMobster_getCarryObjToBodyXForm_FUN_004ff330(CMobster *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  CMatrix3x4f *pCVar4;
  byte bVar5;
  float afStackY_1060 [985];
  byte auStack_c0 [48];
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
  iVar2 = *(int *)((this_ptr->base).base.carry_hands + hand_index * 0x78);
  if (hand_index == 1) {
    iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                      (*(uint *)((this_ptr->base).base.carry_hands + hand_index * 0x78 + 8),
                       g_CElephantGunClassInfo.name_hash);
    if (iVar1 == 0) {
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
    else {
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
  }
  else {
    uStack_44 = 0xbe0f5c29;
    uStack_40 = 0xbe333333;
    uStack_48 = 0xbe7df3b6;
    if (auStack_74 + 2 != &uStack_48) {
      auStack_74[3] = 0xbe0f5c29;
      auStack_74[4] = 0xbe333333;
      auStack_74[2] = 0xbe7df3b6;
    }
    uStack_88 = 0xbfdac083;
    uStack_90 = 0xbee978d5;
    uStack_8c = 0xbfbbe76d;
    uStack_84 = 0xbee978d5;
    uStack_80 = 0xbfbbe76d;
    uStack_7c = 0xbfdac083;
    if (auStack_74 + 8 != &uStack_84) {
      auStack_74[8] = 0xbee978d5;
      auStack_74[9] = 0xbfbbe76d;
      auStack_74[10] = 0xbfdac083;
    }
  }
  core_xform_cpp_FUN_00591c10(auStack_c0,auStack_74 + 2,auStack_74 + 8);
  core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
            (auStack_c0,&(this_ptr->base).base.model.field_0xe80 + iVar2 * 0x30);
  pfVar3 = (float *)&stack0xffffff10;
  pCVar4 = out_matrix;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar4->m[0].w = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
  }
  return out_matrix;
}
