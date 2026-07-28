// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_ensureBitmapLoaded_FUN_004f5c80
// Address: 004f5c80
// Address Range: [[004f5c80, 004f5ce4]]
// Convention: unknown
// Signature: void cockpit_pkbmpset_cpp_CPackedBitmapSet_ensureBitmapLoaded_FUN_004f5c80(CPackedBitmapSet *param_1,int param_2)

#include "nocturne.h"

void cockpit_pkbmpset_cpp_CPackedBitmapSet_ensureBitmapLoaded_FUN_004f5c80(CPackedBitmapSet *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1->bitmap_array[param_2].packed_data == (ushort *)0x0) {
    iVar2 = 0;
    if (0 < param_1->bitmap_count) {
      iVar1 = 0;
      do {
        iVar2 = iVar2 + 1;
        cockpit_pkbitmap_cpp_CPackedBitmap_freePackedData_FUN_004f3f80
                  (param_1->bitmap_array->filename + iVar1);
        iVar1 = iVar1 + 0x24;
      } while (iVar2 < param_1->bitmap_count);
    }
    cockpit_pkbmpset_cpp_CPackedBitmapSet_loadByFilenameAndIndex_FUN_004f5a50(param_1,1,param_2);
  }
  return;
}
