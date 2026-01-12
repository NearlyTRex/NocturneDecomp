// Name: core_fire.cpp_CGunFlame_process_FUN_004c4f60
// Address: 004c4f60
// Address Range: [[004c4f60, 004c50a9]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CGunFlame_process_FUN_004c4f60(CGunFlame * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CGunFlame_process_FUN_004c4f60(CGunFlame *this_ptr)

{
  char *pcVar1;
  CVector3f *position;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  
  fVar5 = g_CGamePtr->delta_time_float;
  fVar2 = *(float *)this_ptr->field0_0x0 - fVar5;
  *(float *)this_ptr->field0_0x0 = fVar2;
  if (0.0 < fVar2) {
    pcVar1 = this_ptr->field0_0x0 + 0x10;
    fVar2 = *(float *)(this_ptr->field0_0x0 + 0x14);
    fVar3 = *(float *)(this_ptr->field0_0x0 + 0x18);
    position = (CVector3f *)(this_ptr->field0_0x0 + 4);
    fVar4 = *(float *)(this_ptr->field0_0x0 + 8);
    position->x = position->x + *(float *)pcVar1 * fVar5;
    *(float *)(this_ptr->field0_0x0 + 8) = fVar4 + fVar2 * fVar5;
    fVar4 = (float)0.20000000000000001;
    *(float *)(this_ptr->field0_0x0 + 0xc) = *(float *)(this_ptr->field0_0x0 + 0xc) + fVar3 * fVar5;
    fVar2 = *(float *)(this_ptr->field0_0x0 + 0x14) * 0.97f;
    fVar3 = *(float *)(this_ptr->field0_0x0 + 0x18) * 0.97f;
    *(float *)pcVar1 = *(float *)pcVar1 * 0.97f;
    *(float *)(this_ptr->field0_0x0 + 0x14) = fVar2;
    *(float *)(this_ptr->field0_0x0 + 0x18) = fVar3;
    fVar2 = (float)0.5;
    *(float *)(this_ptr->field0_0x0 + 0x14) =
         fVar5 * fVar4 + *(float *)(this_ptr->field0_0x0 + 0x14);
    iVar6 = core_actor_cpp_randomChance_FUN_0040cd10(fVar5 * fVar2);
    if (iVar6 != 0) {
      core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004c7b20
                (g_CFireEffectPtr,position,0.5,(CVector3f *)0x0,0xffff);
    }
    if ((*(int *)(this_ptr->field0_0x0 + 0x20) != 0) &&
       (iVar6 = core_actor_cpp_randomChance_FUN_0040cd10(fVar5), iVar6 != 0)) {
      core_fire_cpp_CGunFlame_FUN_004c4c00(this_ptr);
    }
    *(float *)(this_ptr->field0_0x0 + 0x1c) =
         fVar5 * _DAT_0065dcc8 + *(float *)(this_ptr->field0_0x0 + 0x1c);
    fVar5 = -20f;
    if (0x419fffff < *(int *)(this_ptr->field0_0x0 + 0x1c)) {
      do {
        *(float *)(this_ptr->field0_0x0 + 0x1c) = *(float *)(this_ptr->field0_0x0 + 0x1c) + fVar5;
      } while (0x419fffff < *(int *)(this_ptr->field0_0x0 + 0x1c));
      return;
    }
  }
  else {
    this_ptr->field0_0x0[0] = '\0';
    this_ptr->field0_0x0[1] = '\0';
    this_ptr->field0_0x0[2] = '\0';
    this_ptr->field0_0x0[3] = '\0';
  }
  return;
}
