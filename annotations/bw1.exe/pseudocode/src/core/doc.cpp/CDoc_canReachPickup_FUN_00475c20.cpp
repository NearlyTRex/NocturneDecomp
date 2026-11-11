// Name: core_doc.cpp_CDoc_canReachPickup_FUN_00475c20
// Address: 00475c20
// Address Range: [[00475c20, 00476079]]
// Convention: __cdecl
// Signature: int __cdecl core_doc_cpp_CDoc_canReachPickup_FUN_00475c20(CDoc *this_ptr,CDemonActor *item,int pickup_type,float *best_distance)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_doc_cpp_CDoc_canReachPickup_FUN_00475c20(CDoc *this_ptr,CDemonActor *item,int pickup_type,float *best_distance)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  CLocation **ppCVar4;
  byte bVar5;
  float afStackY_10ec [1001];
  CBoundingBox3D *in_stack_fffffec0;
  CLocation *apCStack_13c [2];
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  uint auStack_11c [6];
  float fStack_104;
  float afStack_100 [5];
  float fStack_ec;
  float afStack_e8 [4];
  float fStack_d8;
  float fStack_d0;
  float afStack_c4 [5];
  float fStack_b0;
  float afStack_ac [4];
  float fStack_9c;
  uint uStack_98;
  uint uStack_8c;
  float afStack_88 [8];
  uint uStack_68;
  float afStack_64 [2];
  CLocation CStack_5c;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  CLocation CStack_38;
  float fStack_20;
  float fStack_1c;
  
  bVar5 = 0;
  switch(pickup_type) {
  case 1:
    if ((this_ptr->base).base.carry_hands[0].carry_actor != (CDemonActor *)0x0) {
      return 0;
    }
    core_actor_cpp_FUN_00408bb0(item,&(this_ptr->base).base.base.location);
    fStack_4c = afStack_e8[3];
    afStack_64[(uint)bVar5 * -2 + 7] = afStack_e8[(uint)bVar5 * -2 + 4];
    afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 8] =
         afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
    fStack_1c = SQRT(fStack_44 * fStack_44 + fStack_4c * fStack_4c + fStack_48 * fStack_48);
    if (fStack_1c <= 0.0) {
      fStack_48 = 0.0;
      fStack_4c = 0.0;
      fStack_44 = 0.0;
    }
    else {
      fVar1 = 1.0 / fStack_1c;
      fStack_4c = fStack_4c * fVar1;
      fStack_48 = fStack_48 * fVar1;
      fStack_44 = fStack_44 * fVar1;
    }
    if (0.0 < fStack_44) {
      return 0;
    }
    afStack_c4[0] = 0.0;
    afStack_c4[1] = 3.0;
    afStack_c4[2] = 2.0;
    if (afStack_100 != afStack_e8 + 9) {
      afStack_100[1] = 3.0;
      afStack_100[2] = 2.0;
      afStack_100[0] = 0.0;
    }
    break;
  case 2:
    if ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
      return 0;
    }
    fStack_9c = 3.0;
    uStack_98 = 0x40000000;
    afStack_ac[3] = 0.0;
    if (afStack_100 != afStack_ac + 3) {
      afStack_100[1] = 3.0;
      afStack_100[2] = 2.0;
      afStack_100[0] = 0.0;
    }
    break;
  case 3:
  case 4:
    if ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
      return 0;
    }
    if ((item != (CDemonActor *)0x0) &&
       (iVar2 = (*((item->vtable)._ub)->canPickup)(item,(CDemonActor *)this_ptr), iVar2 == 4)) {
      apCStack_13c[0] = &(this_ptr->base).base.base.location;
      core_actor_cpp_FUN_00408bb0(item);
      CStack_38.position.x = (float)CStack_38.area_id;
      *(uint *)((int)&CStack_38 + (uint)bVar5 * -8 + 4) =
           *(uint *)((int)&CStack_38 + ((uint)bVar5 * -2 + 3) * 4 + 4);
      *(uint *)((int)&CStack_38 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4 + 4) =
           *(uint *)((int)&CStack_38 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 4) * 4 + 4);
      in_stack_fffffec0 = (CBoundingBox3D *)0x475f0f;
      apCStack_13c[0] = (CLocation *)(afStack_64 + 0xb);
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520();
      uStack_8c = uStack_68;
      afStack_88[(uint)bVar5 * -2] = afStack_64[(uint)bVar5 * -2];
      afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      if ((float)_DAT_005da5cc < ABS(afStack_88[0])) {
        return 0;
      }
    }
    afStack_88[3] = 0.0;
    afStack_88[5] = 2.0;
    afStack_88[4] = 3.0;
    if (afStack_100 != afStack_88 + 3) {
      afStack_100[1] = 3.0;
      afStack_100[2] = 2.0;
      afStack_100[0] = 0.0;
    }
    break;
  default:
    goto switchD_00475c3b_default;
  }
  core_actor_cpp_FUN_00408b40(this_ptr,afStack_100);
  afStack_ac[0] = fStack_d0;
  afStack_ac[(uint)bVar5 * -2 + 1] = afStack_e8[(uint)bVar5 * -2 + 7];
  afStack_ac[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 2] =
       afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 8];
  (*((item->vtable)._ub)->getBoundingBox)(item,in_stack_fffffec0);
  puVar3 = auStack_11c;
  ppCVar4 = apCStack_13c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppCVar4 = (CLocation *)*puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    ppCVar4 = ppCVar4 + (uint)bVar5 * -2 + 1;
  }
  CStack_5c.area_id = (int)(fStack_134 + fStack_128);
  fStack_4c = fStack_130 + fStack_124;
  fStack_48 = fStack_12c + fStack_120;
  afStack_88[2] = fStack_134 + fStack_128;
  afStack_88[(uint)bVar5 * -2 + 3] = afStack_64[(uint)bVar5 * -2 + 6];
  afStack_88[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
  apCStack_13c[0] = (CLocation *)(afStack_64 + 2);
  fStack_b0 = afStack_88[2] * _DAT_005da5d4;
  afStack_ac[0] = afStack_88[3] * _DAT_005da5d4;
  afStack_ac[1] = afStack_88[4] * _DAT_005da5d4;
  CStack_5c.position.x = afStack_88[2] * _DAT_005da5d4;
  afStack_64[(uint)bVar5 * -2 + 3] = afStack_ac[(uint)bVar5 * -2];
  afStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       afStack_ac[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
  core_actor_cpp_FUN_00408b40(item);
  afStack_e8[2] = fStack_20;
  afStack_e8[(uint)bVar5 * -2 + 3] = *(float *)((int)&CStack_38 + ((uint)bVar5 * -2 + 6) * 4 + 4);
  afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
       *(float *)((int)&CStack_38 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 7) * 4 + 4);
  fStack_104 = afStack_e8[2] - afStack_ac[2];
  afStack_100[0] = afStack_e8[3] - afStack_ac[3];
  afStack_100[1] = fStack_d8 - fStack_9c;
  fStack_ec = afStack_e8[2] - afStack_ac[2];
  afStack_e8[(uint)bVar5 * -2] = afStack_100[(uint)bVar5 * -2];
  afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       afStack_100[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
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
