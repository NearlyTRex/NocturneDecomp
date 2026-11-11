// Name: core_bodypart.cpp_CBodyPart_addFire_FUN_00416750
// Address: 00416750
// Address Range: [[00416750, 00416887]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_addFire_FUN_00416750(CBodyPart *this_ptr,CVector3f *position)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_addFire_FUN_00416750(CBodyPart *this_ptr,CVector3f *position)

{
  char cVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  CVector3f *pCVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  float afStackY_100c [1014];
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  bVar8 = 0;
  iVar4 = this_ptr->fire_count;
  if (iVar4 < 2) {
    pCVar5 = &this_ptr->fires[iVar4].local_position;
    this_ptr->fire_count = iVar4 + 1;
    if (pCVar5 != position) {
      ((CVector3f *)&pCVar5->x)->x = position->x;
      pCVar5->y = position->y;
      pCVar5->z = position->z;
    }
    core_actor_cpp_FUN_00408b80(this_ptr,pCVar5);
    local_24 = local_18;
    *(uint *)((int)&stack0xffffffe0 + (uint)bVar8 * -8) =
         *(uint *)(&stack0xffffffec + (uint)bVar8 * -8);
    *(uint *)((int)&stack0xffffffe4 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)(&stack0xfffffff0 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    (((CLocation *)&pCVar5[3].z)->position).x = local_24;
    pCVar5[4].x = local_20;
    pCVar5[4].y = local_1c;
    core_flame_cpp_CFlame_setup_FUN_004a5aa0((CFlame *)(pCVar5 + 1));
    pCVar5[0x24].z = 0.0;
    pCVar5[0x1d].z = 1.5;
    pCVar5[0x1e].x = 3.0;
    pcVar6 = "GCHAR2.RAW" + 1;
    pCVar5[0x1e].y = 1.5;
    (this_ptr->base).is_transparent = 1;
    pcVar7 = this_ptr->textures[0].texture_name;
    this_ptr->texture_count = 1;
    do {
      cVar1 = *pcVar6;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
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
    fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(4.0,5.0);
    this_ptr->fire_time_remaining = (int)fVar3;
  }
  return;
}
