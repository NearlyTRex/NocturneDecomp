// Name: core_doc.cpp_CDoc_canReachPickup_FUN_00475c20
// Address: 00475c20
// Address Range: [[00475c20, 00476079]]
// Convention: __cdecl
// Signature: int __cdecl core_doc_cpp_CDoc_canReachPickup_FUN_00475c20(CDoc *this_ptr,CDemonActor *item,int pickup_type,float *best_distance)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_doc_cpp_CDoc_canReachPickup_FUN_00475c20(CDoc *this_ptr,CDemonActor *item,int pickup_type,float *best_distance)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_10ec [1001];
  CBoundingBox3D *in_stack_fffffec0;
  CVector3f *input_local_point;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_104;
  CVector3f CStack_100;
  float fStack_ec;
  float afStack_e8 [3];
  CVector3f CStack_dc;
  CVector3f CStack_d0;
  CVector3f CStack_c4;
  float fStack_b0;
  float afStack_ac [3];
  CVector3f CStack_a0;
  uint uStack_8c;
  float afStack_88 [3];
  CVector3f CStack_7c;
  uint uStack_68;
  float afStack_64 [2];
  CVector3f CStack_5c;
  float fStack_50;
  float afStack_4c [5];
  float fStack_38;
  float afStack_34 [2];
  CVector3f CStack_2c;
  CVector3f CStack_20;
  
  bVar5 = 0;
  switch(pickup_type) {
  case 1:
    if ((this_ptr->base).base.carry_hands[0].carry_actor != (CDemonActor *)0x0) {
      return 0;
    }
    core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
              (item,&(this_ptr->base).base.base.location.position,&CStack_dc);
    afStack_4c[0] = CStack_dc.x;
    afStack_4c[(uint)bVar5 * -2 + 1] = *(float *)((int)&CStack_dc + (uint)bVar5 * -8 + 4);
    afStack_4c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 2] =
         *(float *)((int)&CStack_dc + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    CStack_20.y = SQRT(afStack_4c[2] * afStack_4c[2] +
                       afStack_4c[0] * afStack_4c[0] + afStack_4c[1] * afStack_4c[1]);
    if (CStack_20.y <= 0.0) {
      afStack_4c[1] = 0.0;
      afStack_4c[0] = 0.0;
      afStack_4c[2] = 0.0;
    }
    else {
      fVar1 = 1.0 / CStack_20.y;
      afStack_4c[0] = afStack_4c[0] * fVar1;
      afStack_4c[1] = afStack_4c[1] * fVar1;
      afStack_4c[2] = afStack_4c[2] * fVar1;
    }
    if (0.0 < afStack_4c[2]) {
      return 0;
    }
    CStack_c4.x = 0.0;
    CStack_c4.y = 3.0;
    CStack_c4.z = 2.0;
    if (&CStack_100 != &CStack_c4) {
      CStack_100.y = 3.0;
      CStack_100.z = 2.0;
      CStack_100.x = 0.0;
    }
    break;
  case 2:
    if ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
      return 0;
    }
    CStack_a0.y = 3.0;
    CStack_a0.z = 2.0;
    CStack_a0.x = 0.0;
    if (&CStack_100 != (CVector3f *)(afStack_ac + 3)) {
      CStack_100.y = 3.0;
      CStack_100.z = 2.0;
      CStack_100.x = 0.0;
    }
    break;
  case 3:
  case 4:
    if ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
      return 0;
    }
    if ((item != (CDemonActor *)0x0) &&
       (iVar2 = (*((item->vtable)._ub)->canPickup)(item,(CDemonActor *)this_ptr), iVar2 == 4)) {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                (item,&(this_ptr->base).base.base.location.position,&CStack_2c);
      fStack_38 = CStack_2c.x;
      afStack_34[(uint)bVar5 * -2] = *(float *)((int)&CStack_2c + (uint)bVar5 * -8 + 4);
      afStack_34[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           *(float *)((int)&CStack_2c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      in_stack_fffffec0 = (CBoundingBox3D *)0x475f0f;
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
      uStack_8c = uStack_68;
      afStack_88[(uint)bVar5 * -2] = afStack_64[(uint)bVar5 * -2];
      afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      if ((float)_DAT_005da5cc < ABS(afStack_88[0])) {
        return 0;
      }
    }
    CStack_7c.x = 0.0;
    CStack_7c.z = 2.0;
    CStack_7c.y = 3.0;
    if (&CStack_100 != (CVector3f *)(afStack_88 + 3)) {
      CStack_100.y = 3.0;
      CStack_100.z = 2.0;
      CStack_100.x = 0.0;
    }
    break;
  default:
    goto switchD_00475c3b_default;
  }
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
            ((CDemonActor *)this_ptr,&CStack_100,&CStack_d0);
  afStack_ac[0] = CStack_d0.x;
  afStack_ac[(uint)bVar5 * -2 + 1] = *(float *)((int)&CStack_d0 + (uint)bVar5 * -8 + 4);
  afStack_ac[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 2] =
       *(float *)((int)&CStack_d0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  (*((item->vtable)._ub)->getBoundingBox)(item,in_stack_fffffec0);
  puVar3 = (uint *)&stack0xfffffee4;
  puVar4 = (uint *)&stack0xfffffec4;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  fStack_50 = fStack_134 + fStack_128;
  afStack_4c[0] = fStack_130 + fStack_124;
  afStack_4c[1] = fStack_12c + fStack_120;
  afStack_88[2] = fStack_134 + fStack_128;
  afStack_88[(uint)bVar5 * -2 + 3] = afStack_4c[(uint)bVar5 * -2];
  afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       afStack_4c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  input_local_point = &CStack_5c;
  fStack_b0 = afStack_88[2] * _DAT_005da5d4;
  afStack_ac[0] = CStack_7c.x * _DAT_005da5d4;
  afStack_ac[1] = CStack_7c.y * _DAT_005da5d4;
  CStack_5c.x = afStack_88[2] * _DAT_005da5d4;
  *(float *)((int)&CStack_5c + (uint)bVar5 * -8 + 4) = afStack_ac[(uint)bVar5 * -2];
  *(float *)((int)&CStack_5c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       afStack_ac[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40(item,input_local_point,&CStack_20);
  afStack_e8[2] = CStack_20.x;
  *(uint *)((int)&CStack_dc + (uint)bVar5 * -8) =
       *(uint *)((int)&CStack_20 + (uint)bVar5 * -8 + 4);
  *(uint *)((int)&CStack_dc + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 4) =
       *(uint *)((int)&CStack_20 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  fStack_104 = afStack_e8[2] - afStack_ac[2];
  CStack_100.x = CStack_dc.x - CStack_a0.x;
  CStack_100.y = CStack_dc.y - CStack_a0.y;
  fStack_ec = afStack_e8[2] - afStack_ac[2];
  afStack_e8[(uint)bVar5 * -2] = *(float *)((int)&CStack_100 + (uint)bVar5 * -8);
  afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       *(float *)((int)&CStack_100 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 4);
  if (ABS(afStack_e8[0]) <= (float)_DAT_005da5dc) {
    fVar1 = SQRT(fStack_ec * fStack_ec + afStack_e8[1] * afStack_e8[1]);
    if (g_CGamePtr->game_control == CONTROL_MODE_POINT_AND_CLICK) {
      if ((float)_DAT_005da5ec < fVar1) {
        return 0;
      }
    }
    else if ((float)_DAT_005da5e4 < fVar1) {
      return 0;
    }
    if (*best_distance < fVar1) {
      return 0;
    }
    *best_distance = fVar1;
    return 1;
  }
switchD_00475c3b_default:
  return 0;
}
