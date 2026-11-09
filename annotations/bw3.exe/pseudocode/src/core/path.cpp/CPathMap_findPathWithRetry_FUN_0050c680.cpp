// Name: core_path.cpp_CPathMap_findPathWithRetry_FUN_0050c680
// Address: 0050c680
// Address Range: [[0050c680, 0050c740]]
// Convention: __cdecl
// Signature: int __cdecl core_path_cpp_CPathMap_findPathWithRetry_FUN_0050c680(CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles,int direction_hint)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_path_cpp_CPathMap_findPathWithRetry_FUN_0050c680(CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles,int direction_hint)

{
  int iVar1;
  
  if (((*(float *)&this_ptr->field_0x138c0 != *(float *)dest_position) ||
      (*(float *)&this_ptr->field_0x138c4 != *(float *)&dest_position->field_0x4)) ||
     (*(float *)&this_ptr->field_0x138c8 != *(float *)&dest_position->field_0x8)) {
    if ((CVector3f *)&this_ptr->field_0x138c0 != dest_position) {
      *(uint *)&this_ptr->field_0x138c0 = *(uint *)dest_position;
      *(uint *)&this_ptr->field_0x138c4 = *(uint *)&dest_position->field_0x4;
      *(uint *)&this_ptr->field_0x138c8 = *(uint *)&dest_position->field_0x8;
    }
    _DAT_01ec1514 = 1;
    do {
      iVar1 = core_path_cpp_CPathMap_findPathToDestination_FUN_0050baa0
                        (this_ptr,dest_position,(CVector3f *)&this_ptr->field_0x138cc,direction_hint
                        );
      *(int *)&this_ptr->field_0x138bc = iVar1;
      if (iVar1 == 1) break;
      _DAT_01ec1514 = _DAT_01ec1514 + 1;
    } while (_DAT_01ec1514 < 4);
  }
  if ((CVector3f *)&this_ptr->field_0x138cc != out_euler_angles) {
    *(uint *)out_euler_angles = *(uint *)&this_ptr->field_0x138cc;
    *(uint *)&out_euler_angles->field_0x4 = *(uint *)&this_ptr->field_0x138d0;
    *(uint *)&out_euler_angles->field_0x8 = *(uint *)&this_ptr->field_0x138d4;
    return *(int *)&this_ptr->field_0x138bc;
  }
  return *(int *)&this_ptr->field_0x138bc;
}
