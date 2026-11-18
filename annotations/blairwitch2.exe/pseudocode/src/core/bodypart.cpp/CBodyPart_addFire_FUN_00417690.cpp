// Name: core_bodypart.cpp_CBodyPart_addFire_FUN_00417690
// Address: 00417690
// Address Range: [[00417690, 004177d7]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_addFire_FUN_00417690(CBodyPart *this_ptr,CVector3f *position)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_addFire_FUN_00417690(CBodyPart *this_ptr,CVector3f *position)

{
  char cVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  CVector3f *input_local_point;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  float afStackY_100c [1014];
  float local_24;
  float local_20;
  float local_1c;
  CVector3f local_18;
  
  bVar7 = 0;
  iVar4 = this_ptr->fire_count;
  if (iVar4 < 2) {
    input_local_point = &this_ptr->fires[iVar4].local_position;
    this_ptr->fire_count = iVar4 + 1;
    if (input_local_point != position) {
      input_local_point->x = position->x;
      input_local_point->y = position->y;
      input_local_point->z = position->z;
    }
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
              (&this_ptr->base,input_local_point,&local_18);
    local_24 = local_18.x;
    *(uint *)((int)&stack0xffffffe0 + (uint)bVar7 * -8) =
         *(uint *)((int)&local_18 + (uint)bVar7 * -8 + 4);
    *(uint *)((int)&stack0xffffffe4 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
         *(uint *)((int)&local_18 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    input_local_point[3].z = local_24;
    input_local_point[4].x = local_20;
    input_local_point[4].y = local_1c;
    core_flame_cpp_CFlame_setup_FUN_0049f270((CFlame *)(input_local_point + 1));
    input_local_point[0x41].z = 0.0;
    input_local_point[0x3a].z = 1.5;
    input_local_point[0x3b].x = 3.0;
    pcVar5 = "CHAR2.RAW";
    input_local_point[0x3b].y = 1.5;
    (this_ptr->base).is_transparent = 1;
    pcVar6 = this_ptr->textures[0].texture_name;
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
      iVar2 = 0;
      do {
        *(uint *)((int)this_ptr->face_texture_indices + iVar2) = 0;
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar4 < this_ptr->tri_count);
    }
    fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(12.0,20.0);
    this_ptr->fire_time_remaining = (int)fVar3;
  }
  return;
}
