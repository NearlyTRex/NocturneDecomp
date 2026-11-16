// Name: core_doc.cpp_CDoc_canReachPickup_FUN_0045d6d0
// Address: 0045d6d0
// Address Range: [[0045d6d0, 0045db32]]
// Convention: __cdecl
// Signature: int __cdecl core_doc_cpp_CDoc_canReachPickup_FUN_0045d6d0(CDoc *this_ptr,CDemonActor *item,int pickup_type,float *best_distance)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_doc_cpp_CDoc_canReachPickup_FUN_0045d6d0(CDoc *this_ptr,CDemonActor *item,int pickup_type,float *best_distance)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_10ec [1001];
  CBoundingBox3D *in_stack_fffffec0;
  CVector3f *input_local_point;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  CVector3f CStack_104;
  float fStack_f8;
  CVector3f CStack_f4;
  float fStack_e0;
  float afStack_dc [4];
  float fStack_cc;
  byte auStack_c8 [8];
  float afStack_c0 [4];
  float fStack_b0;
  CVector3f CStack_ac;
  CVector3f CStack_a0;
  float fStack_8c;
  float afStack_88 [2];
  CVector3f CStack_80;
  byte auStack_74 [8];
  float afStack_6c [4];
  float fStack_5c;
  float afStack_58 [3];
  CVector3f CStack_4c;
  CVector3f CStack_38;
  float afStack_2c [4];
  float afStack_1c [3];
  
  bVar5 = 0;
  switch(pickup_type) {
  case 1:
    if ((this_ptr->base).base.carry_hands[0].carry_actor != (CDemonActor *)0x0) {
      return 0;
    }
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
              (item,&(this_ptr->base).base.base.location.position,(CVector3f *)(auStack_c8 + 4));
    CStack_38.y = (float)auStack_c8._4_4_;
    afStack_2c[(uint)bVar5 * -2 + -1] = afStack_c0[(uint)bVar5 * -2];
    afStack_2c[(uint)bVar5 * -2 + (uint)bVar5 * -2] =
         afStack_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    afStack_1c[0] =
         SQRT(afStack_2c[0] * afStack_2c[0] + CStack_38.y * CStack_38.y + CStack_38.z * CStack_38.z)
    ;
    if (afStack_1c[0] <= 0.0) {
      CStack_38.z = 0.0;
      CStack_38.y = 0.0;
      afStack_2c[0] = 0.0;
    }
    else {
      fVar1 = 1.0 / afStack_1c[0];
      CStack_38.y = CStack_38.y * fVar1;
      CStack_38.z = CStack_38.z * fVar1;
      afStack_2c[0] = afStack_2c[0] * fVar1;
    }
    if (0.0 < afStack_2c[0]) {
      return 0;
    }
    CStack_f4.x = 0.0;
    CStack_f4.y = 3.0;
    CStack_f4.z = 2.0;
    if (&CStack_a0 != &CStack_f4) {
      CStack_a0.y = 3.0;
      CStack_a0.z = 2.0;
      CStack_a0.x = 0.0;
    }
    break;
  case 2:
    if ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
      return 0;
    }
    CStack_ac.y = 3.0;
    CStack_ac.z = 2.0;
    CStack_ac.x = 0.0;
    if (&CStack_a0 != (CVector3f *)(afStack_c0 + 5)) {
      CStack_a0.y = 3.0;
      CStack_a0.z = 2.0;
      CStack_a0.x = 0.0;
    }
    break;
  case 3:
  case 4:
    if ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
      return 0;
    }
    if ((item != (CDemonActor *)0x0) &&
       (iVar2 = (*((item->vtable)._ub)->canPickup)(item,(CDemonActor *)this_ptr), iVar2 == 4)) {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                (item,&(this_ptr->base).base.base.location.position,(CVector3f *)auStack_74);
      CStack_38.x = (float)auStack_74._0_4_;
      afStack_2c[(uint)bVar5 * -2 + -2] = *(float *)(auStack_74 + (uint)bVar5 * -8 + 4);
      afStack_2c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -1] =
           *(float *)(auStack_74 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      if (1.0 < ABS(CStack_38.x)) {
        return 0;
      }
      in_stack_fffffec0 = (CBoundingBox3D *)0x45d9dc;
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&CStack_38,&CStack_80);
      fStack_f8 = CStack_80.x;
      *(uint *)((int)&CStack_f4 + (uint)bVar5 * -8) =
           *(uint *)((int)&CStack_80 + (uint)bVar5 * -8 + 4);
      *(uint *)((int)&CStack_f4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 4) =
           *(uint *)((int)&CStack_80 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      if ((float)_DAT_005d0807 < ABS(CStack_f4.x)) {
        return 0;
      }
    }
    auStack_74._4_4_ = 0.0;
    afStack_6c[1] = 2.0;
    afStack_6c[0] = 3.0;
    if (&CStack_a0 != (CVector3f *)(auStack_74 + 4)) {
      CStack_a0.y = 3.0;
      CStack_a0.z = 2.0;
      CStack_a0.x = 0.0;
    }
    break;
  default:
    goto switchD_0045d6eb_default;
  }
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
            ((CDemonActor *)this_ptr,&CStack_a0,&CStack_4c);
  afStack_c0[2] = CStack_4c.x;
  afStack_c0[(uint)bVar5 * -2 + 3] = *(float *)((int)&CStack_4c + (uint)bVar5 * -8 + 4);
  afStack_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       *(float *)((int)&CStack_4c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  (*((item->vtable)._ub)->getBoundingBox)(item,in_stack_fffffec0);
  puVar3 = (uint *)&stack0xfffffecc;
  puVar4 = (uint *)&stack0xfffffedc;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  afStack_58[2] = fStack_11c + fStack_110;
  CStack_4c.x = fStack_118 + fStack_10c;
  CStack_4c.y = fStack_114 + fStack_108;
  fStack_5c = fStack_11c + fStack_110;
  afStack_58[(uint)bVar5 * -2] = *(float *)((int)&CStack_4c + (uint)bVar5 * -8);
  afStack_58[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       *(float *)((int)&CStack_4c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 4);
  input_local_point = (CVector3f *)auStack_c8;
  fStack_8c = fStack_5c * _DAT_005d080f;
  afStack_88[0] = afStack_58[0] * _DAT_005d080f;
  afStack_88[1] = afStack_58[1] * _DAT_005d080f;
  auStack_c8._0_4_ = fStack_5c * _DAT_005d080f;
  afStack_c0[(uint)bVar5 * -2 + -1] = afStack_88[(uint)bVar5 * -2];
  afStack_c0[(uint)bVar5 * -2 + (uint)bVar5 * -2] =
       afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70(item,input_local_point,&CStack_104);
  afStack_2c[3] = CStack_104.x;
  afStack_1c[(uint)bVar5 * -2] = *(float *)((int)&CStack_104 + (uint)bVar5 * -8 + 4);
  afStack_1c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       *(float *)((int)&CStack_104 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  afStack_dc[2] = afStack_2c[3] - fStack_b0;
  afStack_dc[3] = afStack_1c[0] - CStack_ac.x;
  fStack_cc = afStack_1c[1] - CStack_ac.y;
  fStack_e0 = afStack_2c[3] - fStack_b0;
  afStack_dc[(uint)bVar5 * -2] = afStack_dc[(uint)bVar5 * -2 + 3];
  afStack_dc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_dc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
  if ((ABS(afStack_dc[0]) <= (float)_DAT_005d0817) &&
     (fVar1 = SQRT(fStack_e0 * fStack_e0 + afStack_dc[1] * afStack_dc[1]),
     fVar1 <= (float)_DAT_005d081f)) {
    if (*best_distance < fVar1) {
      return 0;
    }
    *best_distance = fVar1;
    return 1;
  }
switchD_0045d6eb_default:
  return 0;
}
