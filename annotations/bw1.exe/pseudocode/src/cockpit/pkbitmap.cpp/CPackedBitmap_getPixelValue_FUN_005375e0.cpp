// Name: cockpit_pkbitmap.cpp_CPackedBitmap_getPixelValue_FUN_005375e0
// Address: 005375e0
// Address Range: [[005375e0, 0053764b]]
// Convention: __cdecl
// Signature: int __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_getPixelValue_FUN_005375e0(CPackedBitmap *this_ptr,int x_coordinate,int row_index)

#include "nocturne.h"

int __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_getPixelValue_FUN_005375e0(CPackedBitmap *this_ptr,int x_coordinate,int row_index)

{
  ushort *puVar1;
  int *piVar2;
  uint uVar3;
  
  if ((-1 < row_index) && (row_index < *(int *)&this_ptr->field_0x1c)) {
    piVar2 = (int *)(row_index * 4 + *(int *)&this_ptr->field_0x20);
    for (puVar1 = (ushort *)(*piVar2 + *(int *)&this_ptr->field_0x14);
        (puVar1 < (ushort *)(*(int *)&this_ptr->field_0x14 + piVar2[1]) &&
        (uVar3 = (uint)*puVar1, (int)uVar3 <= x_coordinate));
        puVar1 = (ushort *)((int)puVar1 + (puVar1[1] + 3 & 0xfffffffc) + 4)) {
      if (x_coordinate < (int)(uVar3 + puVar1[1])) {
        return (uint)*(byte *)((int)puVar1 + (x_coordinate - uVar3) + 4);
      }
    }
  }
  return -1;
}
