// Name: core_set.cpp_CDemonSet_getReverbPresetAtPosition_FUN_0050d1c0
// Address: 0050d1c0
// Address Range: [[0050d1c0, 0050d27f]]
// Convention: __cdecl
// Signature: float __cdecl core_set_cpp_CDemonSet_getReverbPresetAtPosition_FUN_0050d1c0(CDemonSet *this_ptr,CVector3f *position)

#include "nocturne.h"

float __cdecl core_set_cpp_CDemonSet_getReverbPresetAtPosition_FUN_0050d1c0(CDemonSet *this_ptr,CVector3f *position)

{
  CDemonActor **ppCVar1;
  int iVar2;
  CDemonActor **ppCVar3;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  CDemonActor **local_18;
  
  iVar2 = 0;
  if (0 < (int)this_ptr->renderable_actors[0x779]) {
    local_18 = this_ptr->renderable_actors + 0x77a;
    ppCVar3 = this_ptr->renderable_actors + 0x780;
    do {
      ppCVar1 = local_18 + iVar2 * 0x11;
      local_24 = position->x - (float)*ppCVar1;
      local_20 = position->y - (float)ppCVar1[1];
      local_1c = position->z - (float)ppCVar1[2];
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(ppCVar3,&local_30,&local_24)
      ;
      if (((ABS(local_30) <= (float)ppCVar1[3]) && (ABS(local_2c) <= (float)ppCVar1[4])) &&
         (ABS(local_28) <= (float)ppCVar1[5])) {
        return (float)ppCVar1[0x10];
      }
      iVar2 = iVar2 + 1;
      ppCVar3 = ppCVar3 + 0x11;
    } while (iVar2 < (int)this_ptr->renderable_actors[0x779]);
  }
  return (float)this_ptr->renderable_actors[0x778];
}
