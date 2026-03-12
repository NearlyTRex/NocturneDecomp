// Name: shape_superopt.cpp_CObj_removeInvalidPolygons_FUN_005d46f0
// Address: 005d46f0
// Address Range: [[005d46f0, 005d47a1]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CObj_removeInvalidPolygons_FUN_005d46f0(CObj *this_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_removeInvalidPolygons_FUN_005d46f0(CObj *this_ptr)

{
  int iVar1;
  int iVar2;
  uint index;
  uint uVar2;
  void *ptr;
  int iVar3;
  char local_6c [92];
  
  ptr = (void *)0x0;
  if (1000 < (uint)this_ptr->poly_count) {
    ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(4);
  }
  index = 0;
  iVar3 = 0;
  if (this_ptr->poly_count != 0) {
    do {
      if ((ptr != (void *)0x0) && ((char)index == '\0')) {
        _sprintf(local_6c,"Deleting invalid polygons (%d deleted so far)",iVar3);
      }
      iVar1 = (*(this_ptr->poly_array[index].vtable)->isValid)(this_ptr->poly_array + index);
      uVar2 = index;
      if (iVar1 == 0) {
        uVar2 = index - 1;
        iVar2 = (*this_ptr->vtable->removePolygon)(this_ptr,index);
        if (iVar2 == 0) {
          shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
          return 0;
        }
        iVar3 = iVar3 + 1;
      }
      index = uVar2 + 1;
    } while (index < (uint)this_ptr->poly_count);
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  iVar2 = (*this_ptr->vtable->removeUnusedVertices)(this_ptr);
  return iVar2;
}
