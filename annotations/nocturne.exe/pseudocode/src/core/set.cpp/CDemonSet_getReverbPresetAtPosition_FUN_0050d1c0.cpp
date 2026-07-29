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
  CDemonActor **this_ptr_00;
  CVector3f local_30;
  CVector3f local_24;
  CDemonActor **local_18;
  
  iVar2 = 0;
  if (0 < (int)this_ptr->renderable_actors[0x779]) {
    local_18 = this_ptr->renderable_actors + 0x77a;
    this_ptr_00 = this_ptr->renderable_actors + 0x780;
    do {
      ppCVar1 = local_18 + iVar2 * 0x11;
      local_24.x = position->x - (float)*ppCVar1;
      local_24.y = position->y - (float)ppCVar1[1];
      local_24.z = position->z - (float)ppCVar1[2];
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                ((CMatrix3x3f *)this_ptr_00,&local_30,&local_24);
      if (((ABS(local_30.x) <= (float)ppCVar1[3]) && (ABS(local_30.y) <= (float)ppCVar1[4])) &&
         (ABS(local_30.z) <= (float)ppCVar1[5])) {
        return (float)ppCVar1[0x10];
      }
      iVar2 = iVar2 + 1;
      this_ptr_00 = this_ptr_00 + 0x11;
    } while (iVar2 < (int)this_ptr->renderable_actors[0x779]);
  }
  return (float)this_ptr->renderable_actors[0x778];
}
