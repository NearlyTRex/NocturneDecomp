// Name: core_bodypart.cpp_CBodyPart_addFire_FUN_00417b40
// Address: 00417b40
// Address Range: [[00417b40, 00417c87]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_addFire_FUN_00417b40(CBodyPart *this_ptr,CVector3f *position)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_addFire_FUN_00417b40(CBodyPart *this_ptr,CVector3f *position)

{
  char cVar1;
  CVector3f *pCVar2;
  int iVar3;
  int iVar4;
  CVector3f *input_local_point;
  char *pcVar5;
  char *pcVar6;
  CVector3f local_18;
  
  if (this_ptr->fire_count < 2) {
    input_local_point = &this_ptr->fires[this_ptr->fire_count].local_position;
    this_ptr->fire_count = this_ptr->fire_count + 1;
    if (input_local_point != position) {
      input_local_point->x = position->x;
      input_local_point->y = position->y;
      input_local_point->z = position->z;
    }
    pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                       (&this_ptr->base,&local_18,input_local_point);
    input_local_point[3].z = pCVar2->x;
    input_local_point[4].x = pCVar2->y;
    input_local_point[4].y = pCVar2->z;
    core_flame_cpp_CFlame_setup_FUN_0048d050(input_local_point + 1);
    input_local_point[0x24].x = 0.0;
    input_local_point[0x1d].x = 1.5;
    input_local_point[0x1d].y = 3.0;
    pcVar6 = this_ptr->textures[0].texture_name;
    input_local_point[0x1d].z = 1.5;
    (this_ptr->base).is_transparent = 1;
    pcVar5 = "CHAR2.RAW";
    this_ptr->texture_count = 1;
    do {
      cVar1 = *pcVar5;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
    iVar4 = 0;
    if (0 < this_ptr->tri_count) {
      iVar3 = 0;
      do {
        *(uint *)((int)this_ptr->face_texture_indices + iVar3) = 0;
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar4 < this_ptr->tri_count);
    }
    iVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x41400000,0x41a00000);
    this_ptr->fire_time_remaining = iVar4;
  }
  return;
}
