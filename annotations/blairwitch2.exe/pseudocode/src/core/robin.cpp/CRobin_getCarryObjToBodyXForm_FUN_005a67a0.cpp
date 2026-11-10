// Name: core_robin.cpp_CRobin_getCarryObjToBodyXForm_FUN_005a67a0
// Address: 005a67a0
// Address Range: [[005a67a0, 005a6961]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_robin_cpp_CRobin_getCarryObjToBodyXForm_FUN_005a67a0(CRobin *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

CMatrix3x4f * __stack2_esi core_robin_cpp_CRobin_getCarryObjToBodyXForm_FUN_005a67a0(CRobin *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  float *pfVar3;
  byte bVar4;
  int aiStackY_1044 [943];
  int *piVar5;
  float afStack_17c [12];
  CMatrix3x4f CStack_14c;
  CMatrix3x4f CStack_11c;
  byte auStack_ec [48];
  CMatrix3x4f CStack_bc;
  byte auStack_8c [48];
  int iStack_5c;
  int aiStack_58 [14];
  int aiStack_20 [3];
  byte *puStack_14;
  byte *puStack_10;
  
  bVar4 = 0;
  puStack_10 = &this_ptr->field_0x0 + hand_index * 0x78;
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                    (*(uint *)(puStack_10 + 0x2620),g_CBoxActorClassInfo.name_hash);
  if (iVar1 != 0) {
    iStack_5c = _strcmp((char *)(iVar1 + 0x32c),"WOOD_BOWL.KFM");
    puStack_14 = &this_ptr->field_0x1134;
    if (iStack_5c == 0) {
      aiStack_58[1] = 0xbfe00000;
      aiStack_58[2] = 0x3e4ccccd;
      aiStack_58[0] = -0x3ff9999a;
      piVar5 = aiStack_58 + 0xe;
      aiStack_20[0] = iStack_5c;
      aiStack_58[(uint)bVar4 * -2 + 0xf] = aiStack_58[(uint)bVar4 * -2];
      aiStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
           aiStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      aiStack_58[3] = 0xbda3d70a;
      aiStack_58[4] = 0;
      core_xform_cpp_FUN_00591c10(auStack_ec,aiStack_58 + 2,piVar5);
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
                (auStack_ec,puStack_14 + *(int *)(puStack_10 + 0x2618) * 0x30);
      pCVar2 = &CStack_11c;
      goto LAB_005a6841;
    }
    iVar1 = _strcmp((char *)(iVar1 + 0x32c),"DOLL.KFM");
    if (iVar1 == 0) {
      aiStack_58[8] = 0x40400000;
      piVar5 = aiStack_58 + 0xb;
      aiStack_58[10] = 0x3fe66666;
      aiStack_58[9] = 0;
      aiStack_58[7] = 0x3dcccccd;
      aiStack_58[0xb] = 0x40400000;
      aiStack_58[(uint)bVar4 * -2 + 0xc] = aiStack_58[(uint)bVar4 * -2 + 9];
      aiStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
           aiStack_58[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
      aiStack_58[6] = 0;
      aiStack_58[5] = 0x3e4ccccd;
      core_xform_cpp_FUN_00591c10(auStack_8c,aiStack_58 + 5,piVar5);
      core_xform_cpp_multiplyMatrix3x4_FUN_005916b0
                (auStack_8c,puStack_14 + *(int *)(puStack_10 + 0x2618) * 0x30);
      pCVar2 = &CStack_bc;
      goto LAB_005a6841;
    }
  }
  core_charactr_cpp_CCharacter_getCarryObjToBodyXForm_FUN_00429120
            ((CCharacter *)this_ptr,hand_index,&CStack_14c);
  pCVar2 = &CStack_14c;
LAB_005a6841:
  pfVar3 = afStack_17c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = pCVar2->m[0].w;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
  }
  pfVar3 = afStack_17c;
  pCVar2 = out_matrix;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar2->m[0].w = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
  }
  return out_matrix;
}
