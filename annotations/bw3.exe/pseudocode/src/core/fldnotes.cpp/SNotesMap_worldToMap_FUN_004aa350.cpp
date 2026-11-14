// Name: core_fldnotes.cpp_SNotesMap_worldToMap_FUN_004aa350
// Address: 004aa350
// Address Range: [[004aa350, 004aa488]]
// Convention: __cdecl
// Signature: int __cdecl core_fldnotes_cpp_SNotesMap_worldToMap_FUN_004aa350(SNotesMap *this_ptr,CLocation *location,int *map_x,int *map_y)

#include "nocturne.h"

int __cdecl core_fldnotes_cpp_SNotesMap_worldToMap_FUN_004aa350(SNotesMap *this_ptr,CLocation *location,int *map_x,int *map_y)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  SNotesMapSet *str2;
  int iVar7;
  float10 fVar8;
  
  if (((-1 < location->area_id) && (location->area_id < *(int *)(0x01D81080 + 4))) &&
     (iVar7 = 0, 0 < this_ptr->set_count)) {
    str2 = this_ptr->sets;
    do {
      iVar5 = _stricmp
                        ((char *)(0x01D81080 + 8 + location->area_id * 0x100),str2->level_name);
      if (iVar5 == 0) {
        fVar1 = str2->world_x1 - str2->world_x0;
        fVar2 = ((location->position).x - str2->world_x0) / fVar1;
        fVar4 = str2->world_z1 - str2->world_z0;
        fVar3 = ((location->position).z - str2->world_z0) / fVar4;
        if (fVar1 * fVar4 <= 0.0) {
          fVar8 = (float10)str2->map_left +
                  (float10)(str2->map_right - str2->map_left) * (float10)fVar2;
          piVar6 = (int *)round();
          *piVar6 = (int)ROUND(fVar8);
          fVar8 = (float10)(str2->map_bottom - str2->map_top) * (float10)fVar3;
        }
        else {
          fVar8 = (float10)str2->map_left +
                  (float10)(str2->map_right - str2->map_left) * (float10)fVar3;
          piVar6 = (int *)round();
          *piVar6 = (int)ROUND(fVar8);
          fVar8 = (float10)(str2->map_bottom - str2->map_top) * (float10)fVar2;
        }
        fVar8 = (float10)str2->map_top + fVar8;
        piVar6 = (int *)round();
        *piVar6 = (int)ROUND(fVar8);
        return iVar7;
      }
      iVar7 = iVar7 + 1;
      str2 = str2 + 1;
    } while (iVar7 < this_ptr->set_count);
  }
  return -1;
}
