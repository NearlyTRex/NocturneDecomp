// Name: cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0054a8e0
// Address: 0054a8e0
// Address Range: [[0054a8e0, 0054a933]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_free_FUN_0054a8e0(CPackedBitmap *this_ptr)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_free_FUN_0054a8e0(CPackedBitmap *this_ptr)

{
  if (this_ptr->packed_data != (char *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (this_ptr->packed_data,"..\\cockpit\\pkbitmap.cpp",0x98);
  }
  g_CurrentDebugFilename = "..\\cockpit\\pkbitmap.cpp";
  g_CurrentDebugLine = 0x99;
  shape_memdbg_cpp_free_FUN_005fe659(this_ptr->row_pointers);
  cockpit_pkbitmap_cpp_CPackedBitmap_reset_FUN_0054a8b0(this_ptr);
  return;
}
