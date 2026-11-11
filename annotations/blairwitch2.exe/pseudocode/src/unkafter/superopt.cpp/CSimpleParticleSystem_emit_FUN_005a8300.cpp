// Name: unkafter_superopt.cpp_CSimpleParticleSystem_emit_FUN_005a8300
// Address: 005a8300
// Address Range: [[005a8300, 005a849a]]
// Convention: __cdecl
// Signature: void __cdecl unkafter_superopt_cpp_CSimpleParticleSystem_emit_FUN_005a8300(CSimpleParticleSystem *this_ptr,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,float *param_10,undefined4 *param_11,undefined4 *param_12,undefined4 param_13)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl unkafter_superopt_cpp_CSimpleParticleSystem_emit_FUN_005a8300(CSimpleParticleSystem *this_ptr,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7,uint param_8,uint param_9,float *param_10,uint *param_11,uint *param_12,uint param_13)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CDemonActor *pCVar5;
  int iVar6;
  uint *puVar7;
  float local_1c [3];
  
  if (this_ptr->active != 0) {
    if (this_ptr != (CSimpleParticleSystem *)&DAT_0265370c) {
      (this_ptr->position).x = _DAT_0265370c;
      (this_ptr->position).y = _DAT_02653710;
      (this_ptr->position).z = _DAT_02653714;
    }
    if (this_ptr->standalone == 0) {
      pCVar5 = this_ptr->owner;
      if (this_ptr != (CSimpleParticleSystem *)&pCVar5->location) {
        (this_ptr->position).x = (pCVar5->location).position.x;
        (this_ptr->position).y = (pCVar5->location).position.y;
        (this_ptr->position).z = (pCVar5->location).position.z;
      }
    }
    puVar7 = (uint *)((int)this_ptr->particles + this_ptr->next_particle * 0x60);
    puVar7[1] = param_2;
    puVar7[2] = param_2;
    puVar7[3] = param_3;
    puVar7[4] = param_4;
    puVar7[6] = param_5;
    puVar7[7] = param_6;
    puVar7[8] = param_13;
    puVar7[0x15] = this_ptr;
    if ((CSimpleParticleSystem *)(puVar7 + 9) != this_ptr) {
      (((CSimpleParticleSystem *)(puVar7 + 9))->position).x = (this_ptr->position).x;
      puVar7[10] = (this_ptr->position).y;
      puVar7[0xb] = (this_ptr->position).z;
    }
    if (param_10 != (float *)0x0) {
      fVar1 = (this_ptr->position).y;
      fVar2 = (this_ptr->position).z;
      fVar3 = param_10[1];
      fVar4 = param_10[2];
      if ((float *)(puVar7 + 9) != local_1c) {
        puVar7[9] = (this_ptr->position).x + *param_10;
        puVar7[10] = fVar1 + fVar3;
        puVar7[0xb] = fVar2 + fVar4;
      }
    }
    if ((param_12 != (uint *)0x0) && (puVar7 + 0xf != param_12)) {
      puVar7[0xf] = *param_12;
      puVar7[0x10] = param_12[1];
      puVar7[0x11] = param_12[2];
    }
    if ((param_11 != (uint *)0x0) && (puVar7 + 0xc != param_11)) {
      puVar7[0xc] = *param_11;
      puVar7[0xd] = param_11[1];
      puVar7[0xe] = param_11[2];
    }
    *puVar7 = 1;
    puVar7[0x12] = param_7;
    puVar7[0x13] = param_8;
    puVar7[0x14] = param_9;
    iVar6 = this_ptr->next_particle + 1;
    this_ptr->next_particle = iVar6;
    if (this_ptr->max_particles <= iVar6) {
      this_ptr->next_particle = 0;
      return;
    }
  }
  return;
}
