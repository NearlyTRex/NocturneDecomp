// Name: core_manpuz.cpp_CMansionPuzzleCircle_getSurfaceProperties_FUN_005097e0
// Address: 005097e0
// Address Range: [[005097e0, 005098e4]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_getSurfaceProperties_FUN_005097e0 (CMansionPuzzleCircle *this_ptr,SSurfaceInfo *surface_info)

#include "nocturne.h"

void __cdecl
core_manpuz_cpp_CMansionPuzzleCircle_getSurfaceProperties_FUN_005097e0
          (CMansionPuzzleCircle *this_ptr,SSurfaceInfo *surface_info)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  
  core_actor_cpp_CDemonActor_getSurfaceProperties_FUN_00409840(&this_ptr->base,surface_info);
  iVar6 = 0;
  pcVar4 = this_ptr->unk3 + 0xd14;
  do {
    fVar1 = *(float *)pcVar4 - (surface_info->hit_position).x;
    fVar3 = *(float *)(pcVar4 + 4) - (surface_info->hit_position).y;
    fVar2 = *(float *)(pcVar4 + 8) - (surface_info->hit_position).z;
    if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 < 1.0) {
      surface_info->alpha_or_wetness = 1.0;
      return;
    }
    iVar6 = iVar6 + 1;
    pcVar4 = pcVar4 + 0x60;
  } while (iVar6 < 2);
  if (surface_info->unk2 == 2) {
    iVar6 = 0;
    pcVar4 = this_ptr->unk3 + 0x47c;
    do {
      fVar1 = *(float *)pcVar4 - (surface_info->hit_position).x;
      fVar3 = *(float *)(pcVar4 + 4) - (surface_info->hit_position).y;
      fVar2 = *(float *)(pcVar4 + 8) - (surface_info->hit_position).z;
      pcVar5 = this_ptr->unk3 + iVar6 * 0xb8 + 0x458;
      if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 < (float)0.25) {
        fVar1 = (float)0.0039215686274509803;
        *(float *)(pcVar5 + 0x18) =
             (float)(surface_info->color).r * surface_info->intensity * *(float *)pcVar5 * fVar1 +
             *(float *)(pcVar5 + 0x18);
        *(float *)(pcVar5 + 0x1c) =
             (float)(surface_info->color).g * surface_info->intensity * *(float *)(pcVar5 + 4) *
             fVar1 + *(float *)(pcVar5 + 0x1c);
        *(float *)(pcVar5 + 0x20) =
             (float)(surface_info->color).b * surface_info->intensity * *(float *)(pcVar5 + 8) *
             fVar1 + *(float *)(pcVar5 + 0x20);
      }
      iVar6 = iVar6 + 1;
      pcVar4 = pcVar4 + 0xb8;
    } while (iVar6 < 0xc);
  }
  return;
}
