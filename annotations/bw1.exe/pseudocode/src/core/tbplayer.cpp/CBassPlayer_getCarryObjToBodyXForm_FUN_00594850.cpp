// Name: core_tbplayer.cpp_CBassPlayer_getCarryObjToBodyXForm_FUN_00594850
// Address: 00594850
// Address Range: [[00594850, 0059497c]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_tbplayer_cpp_CBassPlayer_getCarryObjToBodyXForm_FUN_00594850(CBassPlayer *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

CMatrix3x4f * __stack2_esi core_tbplayer_cpp_CBassPlayer_getCarryObjToBodyXForm_FUN_00594850(CBassPlayer *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  int iVar1;
  float *pfVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  float afStack_a8 [12];
  CMatrix3x4f CStack_78;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  CVector3f CStack_24;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  bVar4 = 0;
  iVar1 = (this_ptr->base).base.carry_hands[hand_index].bone_index;
  if (hand_index == 0) {
    CStack_30.y = -1.866;
    CStack_30.z = -4.108;
    CStack_30.x = 2.104;
    if (&CStack_24 != &CStack_30) {
      CStack_24.y = -1.866;
      CStack_24.z = -4.108;
      CStack_24.x = 2.104;
    }
    uStack_10 = 0x3dced917;
    uStack_18 = 0x3faf7cee;
    uStack_14 = 0xbef8d4fe;
    CStack_48.x = 1.371;
    CStack_48.y = -0.486;
    CStack_48.z = 0.101;
    if (&CStack_3c != &CStack_48) {
      CStack_3c.x = 1.371;
      CStack_3c.y = -0.486;
      CStack_3c.z = 0.101;
    }
  }
  core_xform_cpp_FUN_005b5760(&CStack_78,&CStack_24,&CStack_3c);
  core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
            (&CStack_78,(this_ptr->base).base.model.bone_transform.bone_model_matrices + iVar1);
  pfVar2 = afStack_a8;
  pCVar3 = out_matrix;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar4 * -2 + 1;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  return out_matrix;
}
