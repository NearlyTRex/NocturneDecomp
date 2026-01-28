// Name: core_dcube.cpp_CDemonCube_testAABBIntersection_FUN_00457ca0
// Address: 00457ca0
// Address Range: [[00457ca0, 00457cea]]
// Convention: __cdecl
// Signature: int __cdecl core_dcube_cpp_CDemonCube_testAABBIntersection_FUN_00457ca0 (CDemonCube *this_ptr,CVector3f *aabb_min,CVector3f *aabb_max)

#include "nocturne.h"

int __cdecl
core_dcube_cpp_CDemonCube_testAABBIntersection_FUN_00457ca0
          (CDemonCube *this_ptr,CVector3f *aabb_min,CVector3f *aabb_max)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < this_ptr->triangle_count) {
    iVar2 = 0;
    do {
      uVar1 = core_dcube_cpp_clipTriangleToAABB_FUN_00456400
                        ((CVector3f **)((int)this_ptr->triangle_buffer->vertices + iVar2),aabb_min,
                         aabb_max);
      if (uVar1 != 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x20;
    } while (iVar3 < this_ptr->triangle_count);
  }
  return 0;
}
