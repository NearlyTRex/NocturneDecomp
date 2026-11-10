// Name: core_dynamite.cpp_CDynamite_process_FUN_0047a1e0
// Address: 0047a1e0
// Address Range: [[0047a1e0, 0047a3d3]]
// Convention: __cdecl
// Signature: void __cdecl core_dynamite_cpp_CDynamite_process_FUN_0047a1e0(CDynamite *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dynamite_cpp_CDynamite_process_FUN_0047a1e0(CDynamite *this_ptr,float delta_time)

{
  float fVar1;
  CSound *this_ptr_00;
  CDynamite *this_ptr_01;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1030 [17];
  CDynamite *apCStackY_fec [969];
  double dVar6;
  CBoundingBox3D *in_stack_ffffff50;
  uint auStack_a8 [8];
  uint auStack_88 [4];
  uint auStack_78 [4];
  uint auStack_68 [2];
  float fStack_60;
  float fStack_5c;
  float fStack_54;
  float fStack_50;
  float fStack_48;
  float afStack_44 [4];
  CVector3f CStack_34;
  float afStack_28 [3];
  float afStack_18 [2];
  
  this_ptr_01 = this_ptr;
  bVar5 = 0;
  core_weapon_cpp_CWeapon_process_FUN_00589c80(&this_ptr->base,delta_time);
  if (0.0 <= this_ptr_01->fuse_timer) {
    fVar1 = this_ptr_01->fuse_timer - delta_time;
    this_ptr_01->fuse_timer = fVar1;
    this_ptr_00 = 0x0264B290;
    dVar6 = (double)fVar1;
    if (dVar6 < 0.0) {
      this_ptr_01->fuse_timer = 0.0;
      core_sound_cpp_CSound_killSound_FUN_0055af80(this_ptr_00,this_ptr_01->sfx_handle);
      this_ptr_01->sfx_handle = 0;
    }
    else {
      iVar2 = core_actor_cpp_randomChance_FUN_0040d060
                        ((delta_time * (float)_DAT_005d1e63 * fVar1) / _DAT_005f5bac);
      if (iVar2 != 0) {
        (*((this_ptr_01->base).base.vtable._ub)->getBoundingBox)
                  ((CDemonActor *)this_ptr_01,SUB84(__BITCAST_UINT64(dVar6),0));
        puVar3 = auStack_a8;
        puVar4 = auStack_68;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
        afStack_18[0] = fStack_60 + fStack_54;
        afStack_18[1] = fStack_5c + fStack_50;
        CStack_34.y = fStack_60 + fStack_54;
        afStack_28[(uint)bVar5 * -2 + -1] = afStack_18[(uint)bVar5 * -2 + 1];
        afStack_28[(uint)bVar5 * -2 + (uint)bVar5 * -2] =
             *(float *)(&stack0xfffffff0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        fStack_48 = CStack_34.y * _DAT_005d1e6b;
        afStack_44[0] = CStack_34.z * _DAT_005d1e6b;
        afStack_44[1] = afStack_28[0] * _DAT_005d1e6b;
        afStack_44[2] = CStack_34.y * _DAT_005d1e6b;
        afStack_18[(uint)bVar5 * -2 + -8] = afStack_44[(uint)bVar5 * -2];
        *(float *)((int)&CStack_34 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             afStack_28[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -6];
        (*((this_ptr_01->base).base.vtable._ub)->getBoundingBox)
                  ((CDemonActor *)this_ptr_01,in_stack_ffffff50);
        puVar3 = auStack_88;
        puVar4 = auStack_78;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
        CStack_34.z = fStack_5c;
        core_actor_cpp_FUN_00408d70(this_ptr_01,&CStack_34);
        afStack_18[(uint)bVar5 * -2] = *(float *)(&stack0x00000000 + (uint)bVar5 * -8);
        afStack_18[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             (float)(&this_ptr)[(uint)bVar5 * -2 + (uint)bVar5 * -2];
        if (&CStack_34 != (CVector3f *)&stack0xffffffe4) {
          CStack_34.y = afStack_18[0];
          CStack_34.z = afStack_18[1];
        }
        core_fire_cpp_CFireEffect_createSpark_FUN_0049d090
                  (0x01C3DEB4,&CStack_34,(CVector3f *)0x0,0x4000,0x10000,0,0xffff);
        return;
      }
    }
  }
  return;
}
