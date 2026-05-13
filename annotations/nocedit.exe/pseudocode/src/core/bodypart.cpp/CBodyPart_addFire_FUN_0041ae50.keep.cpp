// Name: core_bodypart.cpp_CBodyPart_addFire_FUN_0041ae50
// Address: 0041ae50
// MANUAL RECONSTRUCTION
// Address Range: [[0041ae50, 0041af87]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_addFire_FUN_0041ae50(CBodyPart *this_ptr,CVector3f *position)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_addFire_FUN_0041ae50(CBodyPart *this_ptr,CVector3f *position)

{
  int iVar4;
  CVector3f *pCVar2;
  float fVar4;
  int iVar5;
  CVector3f *input_local_point;
  char *pcVar7;
  CVector3f local_18;
  
  iVar4 = this_ptr->fire_count;
  if (iVar4 < 2) {
    input_local_point = &this_ptr->fires[iVar4].local_position;
    this_ptr->fire_count = iVar4 + 1;
    if (input_local_point != position) {
      *input_local_point = *position;
    }
    pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (&this_ptr->base,&local_18,input_local_point);
    input_local_point[3].z = pCVar2->x;
    input_local_point[4].x = pCVar2->y;
    input_local_point[4].y = pCVar2->z;
    core_flame_cpp_CFlame_setup_FUN_004c9b90((CFlame *)(input_local_point + 1));
    input_local_point[0x24].z = 0.0;
    input_local_point[0x1d].z = 1.5;
    input_local_point[0x1e].x = 3.0;
    pcVar7 = this_ptr->textures[0].texture_name;
    input_local_point[0x1e].y = 1.5;
    (this_ptr->base).is_transparent = 1;
    this_ptr->texture_count = 1;
    strcpy(pcVar7, "CHAR2.RAW");
    iVar5 = 0;
    if (0 < this_ptr->tri_count) {
      do {
        this_ptr->face_texture_indices[iVar5] = 0;
        iVar5 = iVar5 + 1;
      } while (iVar5 < this_ptr->tri_count);
    }
    fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(12.0,20.0);
    this_ptr->fire_time_remaining = (int)fVar4;
  }
  return;
}
