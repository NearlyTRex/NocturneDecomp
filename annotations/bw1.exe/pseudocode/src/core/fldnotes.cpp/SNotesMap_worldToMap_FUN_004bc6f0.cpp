// Name: core_fldnotes.cpp_SNotesMap_worldToMap_FUN_004bc6f0
// Address: 004bc6f0
// Address Range: [[004bc6f0, 004bc828]]
// Convention: __cdecl
// Signature: int __cdecl core_fldnotes_cpp_SNotesMap_worldToMap_FUN_004bc6f0(SNotesMap *this_ptr,CLocation *location,int *map_x,int *map_y)

#include "nocturne.h"

int __cdecl core_fldnotes_cpp_SNotesMap_worldToMap_FUN_004bc6f0(SNotesMap *this_ptr,CLocation *location,int *map_x,int *map_y)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  SNotesMapSet *str2;
  int iVar5;
  double dVar6;
  float fStack_20;
  
  if (((-1 < location->area_id) && (location->area_id < *(int *)(0x01D2C900 + 4))) &&
     (iVar5 = 0, 0 < this_ptr->set_count)) {
    str2 = this_ptr->sets;
    do {
      iVar4 = _stricmp
                        ((char *)(0x01D2C900 + 8 + location->area_id * 0x100),str2->level_name);
      if (iVar4 == 0) {
        fVar1 = str2->world_x1 - str2->world_x0;
        fVar3 = str2->world_z1 - str2->world_z0;
        fVar2 = ((location->position).z - str2->world_z0) / fVar3;
        if (fVar1 * fVar3 <= 0.0) {
          dVar6 = round
                            ((double)((float)str2->map_left +
                                     (float)(str2->map_right - str2->map_left) *
                                     (((location->position).x - str2->world_x0) / fVar1)));
          *map_x = (int)ROUND(dVar6);
          fVar2 = (float)(str2->map_bottom - str2->map_top) * fStack_20;
        }
        else {
          dVar6 = round
                            ((double)((float)str2->map_left +
                                     (float)(str2->map_right - str2->map_left) * fVar2));
          *map_x = (int)ROUND(dVar6);
          fVar2 = (float)(str2->map_bottom - str2->map_top) * fVar2;
        }
        dVar6 = round((double)((float)str2->map_top + fVar2));
        *map_x = (int)ROUND(dVar6);
        return iVar5;
      }
      iVar5 = iVar5 + 1;
      str2 = str2 + 1;
    } while (iVar5 < this_ptr->set_count);
  }
  return -1;
}
