// Name: core_bwspart.cpp_CSimpleParticleSystem_emit_FUN_005a8300
// Address: 005a8300
// Address Range: [[005a8300, 005a849a]]
// Convention: __cdecl
// Signature: void __cdecl core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300(CSimpleParticleSystem *this_ptr,float lifetime,float alpha_start,float alpha_end,float size_start,float size_end,float red,float green,float blue,CVector3f *position_offset,CVector3f *velocity,CVector3f *acceleration,int texture_index)

#include "nocturne.h"

void __cdecl core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300(CSimpleParticleSystem *this_ptr,float lifetime,float alpha_start,float alpha_end,float size_start,float size_end,float red,float green,float blue,CVector3f *position_offset,CVector3f *velocity,CVector3f *acceleration,int texture_index)

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
    if (this_ptr != (CSimpleParticleSystem *)&g_CVector3f_0265370c) {
      (this_ptr->position).x = g_CVector3f_0265370c.x;
      (this_ptr->position).y = g_CVector3f_0265370c.y;
      (this_ptr->position).z = g_CVector3f_0265370c.z;
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
    puVar7[1] = lifetime;
    puVar7[2] = lifetime;
    puVar7[3] = alpha_start;
    puVar7[4] = alpha_end;
    puVar7[6] = size_start;
    puVar7[7] = size_end;
    puVar7[8] = texture_index;
    puVar7[0x15] = this_ptr;
    if ((CSimpleParticleSystem *)(puVar7 + 9) != this_ptr) {
      (((CSimpleParticleSystem *)(puVar7 + 9))->position).x = (this_ptr->position).x;
      puVar7[10] = (this_ptr->position).y;
      puVar7[0xb] = (this_ptr->position).z;
    }
    if (position_offset != (CVector3f *)0x0) {
      fVar1 = (this_ptr->position).y;
      fVar2 = (this_ptr->position).z;
      fVar3 = position_offset->y;
      fVar4 = position_offset->z;
      if ((float *)(puVar7 + 9) != local_1c) {
        puVar7[9] = (this_ptr->position).x + position_offset->x;
        puVar7[10] = fVar1 + fVar3;
        puVar7[0xb] = fVar2 + fVar4;
      }
    }
    if ((acceleration != (CVector3f *)0x0) && ((CVector3f *)(puVar7 + 0xf) != acceleration)) {
      ((CVector3f *)(puVar7 + 0xf))->x = acceleration->x;
      puVar7[0x10] = acceleration->y;
      puVar7[0x11] = acceleration->z;
    }
    if ((velocity != (CVector3f *)0x0) && ((CVector3f *)(puVar7 + 0xc) != velocity)) {
      ((CVector3f *)(puVar7 + 0xc))->x = velocity->x;
      puVar7[0xd] = velocity->y;
      puVar7[0xe] = velocity->z;
    }
    *puVar7 = 1;
    puVar7[0x12] = red;
    puVar7[0x13] = green;
    puVar7[0x14] = blue;
    iVar6 = this_ptr->next_particle + 1;
    this_ptr->next_particle = iVar6;
    if (this_ptr->max_particles <= iVar6) {
      this_ptr->next_particle = 0;
      return;
    }
  }
  return;
}
