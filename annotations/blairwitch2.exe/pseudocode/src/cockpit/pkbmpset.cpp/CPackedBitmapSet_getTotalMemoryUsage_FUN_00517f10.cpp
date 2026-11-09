// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_getTotalMemoryUsage_FUN_00517f10
// Address: 00517f10
// Address Range: [[00517f10, 00517f50]]
// Convention: __cdecl
// Signature: int __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_getTotalMemoryUsage_FUN_00517f10(CPackedBitmapSet *this_ptr)

#include "nocturne.h"

int __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_getTotalMemoryUsage_FUN_00517f10(CPackedBitmapSet *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = *(int *)this_ptr * 0x24;
  if (0 < *(int *)this_ptr) {
    iVar3 = 0;
    do {
      iVar2 = iVar2 + 1;
      iVar1 = cockpit_pkbitmap_cpp_CPackedBitmap_getTotalMemoryUsage_FUN_00516250
                        ((CPackedBitmap *)(*(int *)(this_ptr + 4) + iVar3));
      iVar3 = iVar3 + 0x24;
      iVar4 = iVar4 + iVar1;
    } while (iVar2 < *(int *)this_ptr);
  }
  return iVar4;
}
